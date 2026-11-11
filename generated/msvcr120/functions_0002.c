#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_100140EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100140ECu);

L_100140EC:
    PUSH32(esp, 0xCu); /* 0x100140EC: push 0xc */
    PUSH32(esp, 0x10014110u); /* 0x100140EE: push 0x10014110 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100140F3: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x100140F8: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100140FB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x4), ecx */ /* 0x100140FD: cmp dword ptr [edi + 4], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023964; /* 0x10014100: je 0x10023964 */
L_10014106:
    eax = MEM32(edi + 0x4); /* 0x10014106: mov eax, dword ptr [edi + 4] */
L_10014109:
    RECOMP_CALL(sub_1000EDC3); /* 0x10014109: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001410E: ret  */
L_10023964:
    PUSH32(esp, 0x2800u); /* 0x10023964: push 0x2800 */
    PUSH32(esp, 0x1000ECE0u); /* 0x10023969: push 0x1000ece0 */
    PUSH32(esp, 0x1000ED30u); /* 0x1002396E: push 0x1000ed30 */
    PUSH32(esp, ecx); /* 0x10023973: push ecx */
    eax = edi + 0x9; /* 0x10023974: lea eax, [edi + 9] */
    PUSH32(esp, eax); /* 0x10023977: push eax */
    PUSH32(esp, ecx); /* 0x10023978: push ecx */
    RECOMP_CALL(sub_100238B1); /* 0x10023979: call 0x100238b1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1002397E: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x10023981: mov ebx, eax */
    /* test ebx, ebx */ /* 0x10023983: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014109; /* 0x10023985: je 0x10014109 */
L_1002398B:
    PUSH32(esp, ebx); /* 0x1002398B: push ebx */
    RECOMP_CALL(sub_100129AF); /* 0x1002398C: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10023991: pop ecx */
    esi = eax; /* 0x10023992: mov esi, eax */
L_10023994:
    /* test esi, esi */ /* 0x10023994: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005B4F3; /* 0x10023996: je 0x1005b4f3 */
L_1002399C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1002399C: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi + ebx), 0x20u */ /* 0x1002399D: cmp byte ptr [esi + ebx], 0x20 */
    _flag_a = (uint32_t)(MEM8(esi + ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005B4EA; /* 0x100239A1: je 0x1005b4ea */
L_100239A7:
    PUSH32(esp, 0xEu); /* 0x100239A7: push 0xe */
    RECOMP_CALL(sub_1000EDD7); /* 0x100239A9: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100239AE: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100239AF: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x4), 0 */ /* 0x100239B3: cmp dword ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10023A04; /* 0x100239B7: jne 0x10023a04 */
L_100239B9:
    PUSH32(esp, 8); /* 0x100239B9: push 8 */
    RECOMP_CALL(sub_1000ED30); /* 0x100239BB: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100239C0: pop ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x100239C1: mov dword ptr [ebp - 0x1c], eax */
    /* test eax, eax */ /* 0x100239C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023A04; /* 0x100239C6: je 0x10023a04 */
L_100239C8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x100239C8: add esi, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x100239CB: push esi */
    RECOMP_CALL(sub_1000ED30); /* 0x100239CC: call 0x1000ed30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100239D1: pop ecx */
    MEM32(edi + 0x4) = eax; /* 0x100239D2: mov dword ptr [edi + 4], eax */
    /* test eax, eax */ /* 0x100239D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005B505; /* 0x100239D7: je 0x1005b505 */
L_100239DD:
    PUSH32(esp, ebx); /* 0x100239DD: push ebx */
    PUSH32(esp, esi); /* 0x100239DE: push esi */
    PUSH32(esp, eax); /* 0x100239DF: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x100239E0: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100239E5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100239E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B4F9; /* 0x100239EA: jne 0x1005b4f9 */
L_100239F0:
    eax = MEM32(edi + 0x4); /* 0x100239F0: mov eax, dword ptr [edi + 4] */
    edx = MEM32(ebp + (-0x1C)); /* 0x100239F3: mov edx, dword ptr [ebp - 0x1c] */
    MEM32(edx) = eax; /* 0x100239F6: mov dword ptr [edx], eax */
    ecx = MEM32(ebp + 0xC); /* 0x100239F8: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + 0x4); /* 0x100239FB: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x100239FE: mov dword ptr [edx + 4], eax */
    MEM32(ecx + 0x4) = edx; /* 0x10023A01: mov dword ptr [ecx + 4], edx */
L_10023A04:
    PUSH32(esp, ebx); /* 0x10023A04: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10023A05: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10023A0A: pop ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10023A0B: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10023A1C); /* 0x10023A12: call 0x10023a1c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10014106; /* 0x10023A17: jmp 0x10014106 */
L_1005B4EA:
    MEM8(esi + ebx) = (uint8_t)(0); /* 0x1005B4EA: mov byte ptr [esi + ebx], 0 */
    RECOMP_BACKEDGE();
    goto L_10023994; /* 0x1005B4EE: jmp 0x10023994 */
L_1005B4F3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1005B4F3: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_100239A7; /* 0x1005B4F4: jmp 0x100239a7 */
L_1005B4F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005B4F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1005B4FB: push eax */
    PUSH32(esp, eax); /* 0x1005B4FC: push eax */
    PUSH32(esp, eax); /* 0x1005B4FD: push eax */
    PUSH32(esp, eax); /* 0x1005B4FE: push eax */
    PUSH32(esp, eax); /* 0x1005B4FF: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x1005B500: call 0x100a469b */
    RECOMP_FLAGS_IN();
L_1005B505:
    edx = MEM32(ebp + (-0x1C)); /* 0x1005B505: mov edx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x1005B508: push edx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005B509: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B50E: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10023A04; /* 0x1005B50F: jmp 0x10023a04 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001412C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001412Cu);

L_1001412C:
    PUSH32(esp, ebp); /* 0x1001412C: push ebp */
    ebp = esp; /* 0x1001412D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1001412F: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x10014132: push ecx */
    RECOMP_CALL(sub_100140EC); /* 0x10014133: call 0x100140ec */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014138: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10014139: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1001413A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1001413B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1001413E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001413Eu);

L_1001413E:
    edx = MEM32(esp + 0x4); /* 0x1001413E: mov edx, dword ptr [esp + 4] */
    ecx = MEM32(esp + 0x8); /* 0x10014142: mov ecx, dword ptr [esp + 8] */
    /* test edx, 3 */ /* 0x10014146: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014188; /* 0x1001414C: je 0x10014188 */
L_1001414E:
    /* test edx, 1 */ /* 0x1001414E: test edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001416E; /* 0x10014154: je 0x1001416e */
L_10014156:
    SET_LO8(eax, MEM8(edx)); /* 0x10014156: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x10014158: add edx, 1 */
    _flag_k = FK_ADD;
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x1001415B: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100141DA; /* 0x1001415D: jne 0x100141da */
L_1001415F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x1001415F: add ecx, 1 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x10014162: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100141B8; /* 0x10014164: je 0x100141b8 */
L_10014166:
    /* test edx, 2 */ /* 0x10014166: test edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014188; /* 0x1001416C: je 0x10014188 */
L_1001416E:
    SET_LO16(eax, MEM16(edx)); /* 0x1001416E: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x10014171: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x10014174: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100141DA; /* 0x10014176: jne 0x100141da */
L_10014178:
    /* test LO8(eax), LO8(eax) */ /* 0x10014178: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100141B8; /* 0x1001417A: je 0x100141b8 */
L_1001417C:
    /* cmp HI8(eax), MEM8(ecx + 0x1) */ /* 0x1001417C: cmp ah, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100141DA; /* 0x1001417F: jne 0x100141da */
L_10014181:
    /* test HI8(eax), HI8(eax) */ /* 0x10014181: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100141B8; /* 0x10014183: je 0x100141b8 */
L_10014185:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10014185: add ecx, 2 */
    _flag_k = FK_ADD;
L_10014188:
    eax = MEM32(edx); /* 0x10014188: mov eax, dword ptr [edx] */
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x1001418A: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100141DA; /* 0x1001418C: jne 0x100141da */
L_1001418E:
    /* test LO8(eax), LO8(eax) */ /* 0x1001418E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100141B8; /* 0x10014190: je 0x100141b8 */
L_10014192:
    /* cmp HI8(eax), MEM8(ecx + 0x1) */ /* 0x10014192: cmp ah, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100141DA; /* 0x10014195: jne 0x100141da */
L_10014197:
    /* test HI8(eax), HI8(eax) */ /* 0x10014197: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100141B8; /* 0x10014199: je 0x100141b8 */
L_1001419B:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1001419B: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x1001419B: shr eax, 0x10 */
    /* cmp LO8(eax), MEM8(ecx + 0x2) */ /* 0x1001419E: cmp al, byte ptr [ecx + 2] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100141DA; /* 0x100141A1: jne 0x100141da */
L_100141A3:
    /* test LO8(eax), LO8(eax) */ /* 0x100141A3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100141B8; /* 0x100141A5: je 0x100141b8 */
L_100141A7:
    /* cmp HI8(eax), MEM8(ecx + 0x3) */ /* 0x100141A7: cmp ah, byte ptr [ecx + 3] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x3)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100141DA; /* 0x100141AA: jne 0x100141da */
L_100141AC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x100141AC: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x100141AF: add edx, 4 */
    _flag_k = FK_ADD;
    /* test HI8(eax), HI8(eax) */ /* 0x100141B2: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10014188; /* 0x100141B4: jne 0x10014188 */
L_100141B6:
    edi = edi; /* 0x100141B6: mov edi, edi */
L_100141B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100141B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100141BA: ret  */
L_100141DA:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100141DA: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x100141DC: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100141DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100141BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100141BBu);

L_100141BB:
    PUSH32(esp, ebp); /* 0x100141BB: push ebp */
    ebp = esp; /* 0x100141BC: mov ebp, esp */
    eax = ecx + 0x9; /* 0x100141BE: lea eax, [ecx + 9] */
    PUSH32(esp, eax); /* 0x100141C1: push eax */
    eax = MEM32(ebp + 0x8); /* 0x100141C2: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 9; /* 0x100141C5: add eax, 9 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100141C8: push eax */
    RECOMP_CALL(sub_1001413E); /* 0x100141C9: call 0x1001413e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100141CE: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100141D0: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100141D1: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = POP32_VAL(esp); /* 0x100141D3: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100141D4: neg eax */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x100141D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100141D7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100141E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100141E0u);

L_100141E0:
    PUSH32(esp, ebp); /* 0x100141E0: push ebp */
    ebp = esp; /* 0x100141E1: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x100141E3: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x100141E6: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100141E8: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100141EB: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100141EE: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100141EE: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x100141F1: add ecx, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100141F4: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x100141FB: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100141FD: push eax */
    RECOMP_ICALL(MEM32(0x100E503C)); /* 0x100141FE: call dword ptr [0x100e503c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x10014204: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014205: ret  */
    RECOMP_REGS_OUT();
}

void sub_10014206(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014206u);

L_10014206:
    PUSH32(esp, 8); /* 0x10014206: push 8 */
    PUSH32(esp, 0x10014260u); /* 0x10014208: push 0x10014260 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1001420D: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x10014212: mov edi, dword ptr [ebp + 8] */
    eax = edi; /* 0x10014215: mov eax, edi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10014217: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    esi = edi; /* 0x1001421A: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x1001421C: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((esi) >> 26) & 1u); /* 0x1001421F: shl esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 6u; /* 0x1001421F: shl esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax * 4 + 0x100DF640); /* 0x10014222: add esi, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10014229: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x1001422B: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100205D2; /* 0x1001422E: je 0x100205d2 */
L_10014234:
    eax = edi; /* 0x10014234: mov eax, edi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10014236: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Fu);
    edi = edi & 0x1Fu; /* 0x10014239: and edi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x1001423C: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x1001423C: shl edi, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1001423F: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x10014246: add eax, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x10014249: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1001424B: push eax */
    RECOMP_ICALL(MEM32(0x100E5038)); /* 0x1001424C: call dword ptr [0x100e5038] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10014252: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10014254: inc eax */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1000EDC3); /* 0x10014255: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001425A: ret  */
L_100205D2:
    PUSH32(esp, 0xAu); /* 0x100205D2: push 0xa */
    RECOMP_CALL(sub_1000EDD7); /* 0x100205D4: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100205D9: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x100205DA: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x100205DD: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100205F7; /* 0x100205E0: jne 0x100205f7 */
L_100205E2:
    PUSH32(esp, ebx); /* 0x100205E2: push ebx */
    PUSH32(esp, 0xFA0u); /* 0x100205E3: push 0xfa0 */
    eax = esi + 0xC; /* 0x100205E8: lea eax, [esi + 0xc] */
    PUSH32(esp, eax); /* 0x100205EB: push eax */
    RECOMP_CALL(sub_10012426); /* 0x100205EC: call 0x10012426 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100205F1: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x100205F4: inc dword ptr [esi + 8] */
    _flag_k = FK_INC;
L_100205F7:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100205F7: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10020608); /* 0x100205FE: call 0x10020608 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10014234; /* 0x10020603: jmp 0x10014234 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001427C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001427Cu);

L_1001427C:
    PUSH32(esp, ebp); /* 0x1001427C: push ebp */
    ebp = esp; /* 0x1001427D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1001427F: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10014282: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054F76; /* 0x10014284: je 0x10054f76 */
L_1001428A:
    eax = MEM32(eax + 0x10); /* 0x1001428A: mov eax, dword ptr [eax + 0x10] */
    ebp = POP32_VAL(esp); /* 0x1001428D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001428E: ret  */
L_10054F76:
    RECOMP_CALL(sub_1001177D); /* 0x10054F76: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10054F7B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10054F81: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10054F86: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10054F89: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10054F8A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001428F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001428Fu);

L_1001428F:
    PUSH32(esp, ebp); /* 0x1001428F: push ebp */
    ebp = esp; /* 0x10014290: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10014292: push ebx */
    PUSH32(esp, esi); /* 0x10014293: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10014294: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10014297: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0xC); /* 0x10014299: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    SET_LO8(eax, LO8(eax) & 3); /* 0x1001429C: and al, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 2 */ /* 0x1001429E: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10020366; /* 0x100142A0: je 0x10020366 */
L_100142A6:
    ecx = MEM32(esi + 0x8); /* 0x100142A6: mov ecx, dword ptr [esi + 8] */
    eax = ebx; /* 0x100142A9: mov eax, ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x100142AB: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ecx; /* 0x100142AF: mov dword ptr [esi], ecx */
    esi = POP32_VAL(esp); /* 0x100142B1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100142B2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100142B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100142B4: ret  */
L_10020366:
    /* test MEM32(esi + 0xC), 0x108u */ /* 0x10020366: test dword ptr [esi + 0xc], 0x108 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x108u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100142A6; /* 0x1002036D: je 0x100142a6 */
L_10020373:
    PUSH32(esp, edi); /* 0x10020373: push edi */
    edi = MEM32(esi); /* 0x10020374: mov edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(esi + 0x8); /* 0x10020376: sub edi, dword ptr [esi + 8] */
    _flag_k = FK_CMP;
    /* test edi, edi */ /* 0x10020379: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100203A0; /* 0x1002037B: jle 0x100203a0 */
L_1002037D:
    PUSH32(esp, edi); /* 0x1002037D: push edi */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1002037E: push dword ptr [esi + 8] */
    PUSH32(esp, esi); /* 0x10020381: push esi */
    RECOMP_CALL(sub_1001427C); /* 0x10020382: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10020387: pop ecx */
    PUSH32(esp, eax); /* 0x10020388: push eax */
    RECOMP_CALL(sub_1002029C); /* 0x10020389: call 0x1002029c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002038E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x10020391: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002C428; /* 0x10020393: je 0x1002c428 */
L_10020399:
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0x20u));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20u; /* 0x10020399: or dword ptr [esi + 0xc], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1002039D: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100203A0:
    edi = POP32_VAL(esp); /* 0x100203A0: pop edi */
    RECOMP_BACKEDGE();
    goto L_100142A6; /* 0x100203A1: jmp 0x100142a6 */
L_1002C428:
    eax = MEM32(esi + 0xC); /* 0x1002C428: mov eax, dword ptr [esi + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x1002C42B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100203A0; /* 0x1002C42D: jns 0x100203a0 */
L_1002C433:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x1002C433: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = eax; /* 0x1002C436: mov dword ptr [esi + 0xc], eax */
    RECOMP_BACKEDGE();
    goto L_100203A0; /* 0x1002C439: jmp 0x100203a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100142B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100142B5u);

L_100142B5:
    eax = 0x100DE000u; /* 0x100142B5: mov eax, 0x100de000 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100142BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100142BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100142BBu);

L_100142BB:
    PUSH32(esp, ebp); /* 0x100142BB: push ebp */
    ebp = esp; /* 0x100142BC: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x100142BE: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x100142C1: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E7BD; /* 0x100142C4: je 0x1005e7bd */
L_100142CA:
    /* test ecx, ecx */ /* 0x100142CA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100142F2; /* 0x100142CC: js 0x100142f2 */
L_100142CE:
    /* cmp ecx, MEM32(0x100DFDD8) */ /* 0x100142CE: cmp ecx, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100142F2; /* 0x100142D4: jae 0x100142f2 */
L_100142D6:
    eax = ecx; /* 0x100142D6: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100142D8: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100142DB: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100142DE: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100142DE: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100142E1: mov eax, dword ptr [eax*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + ecx + 0x4); /* 0x100142E8: movsx eax, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    eax = eax & 0x40u; /* 0x100142ED: and eax, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100142F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100142F1: ret  */
L_100142F2:
    RECOMP_CALL(sub_1001177D); /* 0x100142F2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_1005E7CA; /* 0x100142F7: jmp 0x1005e7ca */
L_1005E7BD:
    RECOMP_CALL(sub_1001177D); /* 0x1005E7BD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005E7C2: mov dword ptr [eax], 9 */
    goto L_1005E7D5; /* 0x1005E7C8: jmp 0x1005e7d5 */
L_1005E7CA:
    MEM32(eax) = 9; /* 0x1005E7CA: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_100A4670); /* 0x1005E7D0: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005E7D5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005E7D5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1005E7D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005E7D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_100142FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100142FCu);

L_100142FC:
    PUSH32(esp, ebp); /* 0x100142FC: push ebp */
    ebp = esp; /* 0x100142FD: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100142FF: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0x14u */ /* 0x10014302: cmp eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100551CF; /* 0x10014305: jge 0x100551cf */
L_1001430B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1001430B: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1001430E: push eax */
    RECOMP_CALL(sub_1000EDD7); /* 0x1001430F: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x10014314: mov eax, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x10014317: pop ecx */
    _flag_a = (uint32_t)((MEM32(eax + 0xC) | 0x8000u)); _flag_b = (uint32_t)((MEM32(eax + 0xC) | 0x8000u));
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | 0x8000u; /* 0x10014318: or dword ptr [eax + 0xc], 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1001431F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014320: ret  */
L_100551CF:
    eax = MEM32(ebp + 0xC); /* 0x100551CF: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x100551D2: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100551D5: push eax */
    RECOMP_ICALL(MEM32(0x100E5038)); /* 0x100551D6: call dword ptr [0x100e5038] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100551DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100551DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_10014321(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014321u);

L_10014321:
    PUSH32(esp, ebp); /* 0x10014321: push ebp */
    ebp = esp; /* 0x10014322: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10014324: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10014327: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x10014328: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1001432B: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1001432C: mov edi, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1001432F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100573DE; /* 0x10014331: je 0x100573de */
L_10014337:
    eax = MEM32(ebp + 0x8); /* 0x10014337: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1001433A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014341; /* 0x1001433C: je 0x10014341 */
L_1001433E:
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1001433E: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10014341:
    PUSH32(esp, esi); /* 0x10014341: push esi */
    /* cmp edi, 0x7FFFFFFFu */ /* 0x10014342: cmp edi, 0x7fffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100573F7; /* 0x10014348: ja 0x100573f7 */
L_1001434E:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1001434E: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0x10); /* 0x10014351: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x10014354: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x10014359: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1001435C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0xA8), esi */ /* 0x1001435E: cmp dword ptr [eax + 0xa8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0xA8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005740B; /* 0x10014364: je 0x1005740b */
L_1001436A:
    ecx = ebp + 0xC; /* 0x1001436A: lea ecx, [ebp + 0xc] */
    MEM32(ebp + 0xC) = esi; /* 0x1001436D: mov dword ptr [ebp + 0xc], esi */
    PUSH32(esp, ecx); /* 0x10014370: push ecx */
    PUSH32(esp, esi); /* 0x10014371: push esi */
    PUSH32(esp, edi); /* 0x10014372: push edi */
    PUSH32(esp, ebx); /* 0x10014373: push ebx */
    PUSH32(esp, 1); /* 0x10014374: push 1 */
    ecx = ebp + 0x14; /* 0x10014376: lea ecx, [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x10014379: push ecx */
    PUSH32(esp, esi); /* 0x1001437A: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1001437B: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x1001437E: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10014384: mov ecx, eax */
    /* test ecx, ecx */ /* 0x10014386: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057463; /* 0x10014388: je 0x10057463 */
L_1001438E:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1001438E: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005742C; /* 0x10014391: jne 0x1005742c */
L_10014397:
    eax = MEM32(ebp + 0x8); /* 0x10014397: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1001439A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100143A0; /* 0x1001439C: je 0x100143a0 */
L_1001439E:
    MEM32(eax) = ecx; /* 0x1001439E: mov dword ptr [eax], ecx */
L_100143A0:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x100143A0: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10020789; /* 0x100143A4: jne 0x10020789 */
L_100143AA:
    eax = esi; /* 0x100143AA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100143AC: pop esi */
L_100143AD:
    edi = POP32_VAL(esp); /* 0x100143AD: pop edi */
    ebx = POP32_VAL(esp); /* 0x100143AE: pop ebx */
    esp = ebp; /* 0x100143AF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100143B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100143B2: ret  */
L_10020789:
    ecx = MEM32(ebp + (-0x8)); /* 0x10020789: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1002078C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100143AA; /* 0x10020790: jmp 0x100143aa */
L_100573DE:
    /* test edi, edi */ /* 0x100573DE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014337; /* 0x100573E0: je 0x10014337 */
L_100573E6:
    eax = MEM32(ebp + 0x8); /* 0x100573E6: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100573E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100573F0; /* 0x100573EB: je 0x100573f0 */
L_100573ED:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100573ED: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100573F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100573F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100143AD; /* 0x100573F2: jmp 0x100143ad */
L_100573F7:
    RECOMP_CALL(sub_1001177D); /* 0x100573F7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100573FC: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100573FE: pop esi */
    MEM32(eax) = esi; /* 0x100573FF: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10057401: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100143AA; /* 0x10057406: jmp 0x100143aa */
L_1005740B:
    SET_LO16(eax, MEM16(ebp + 0x14)); /* 0x1005740B: mov ax, word ptr [ebp + 0x14] */
    ecx = 0xFFu; /* 0x1005740F: mov ecx, 0xff */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10057414: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_10057443; /* 0x10057417: jbe 0x10057443 */
L_10057419:
    /* test ebx, ebx */ /* 0x10057419: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005742C; /* 0x1005741B: je 0x1005742c */
L_1005741D:
    /* test edi, edi */ /* 0x1005741D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005742C; /* 0x1005741F: je 0x1005742c */
L_10057421:
    PUSH32(esp, edi); /* 0x10057421: push edi */
    PUSH32(esp, esi); /* 0x10057422: push esi */
    PUSH32(esp, ebx); /* 0x10057423: push ebx */
    RECOMP_CALL(sub_10011533); /* 0x10057424: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10057429: add esp, 0xc */
    _flag_k = FK_ADD;
L_1005742C:
    RECOMP_CALL(sub_1001177D); /* 0x1005742C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x10057431: mov dword ptr [eax], 0x2a */
    RECOMP_CALL(sub_1001177D); /* 0x10057437: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x1005743C: mov esi, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_100143A0; /* 0x1005743E: jmp 0x100143a0 */
L_10057443:
    /* test ebx, ebx */ /* 0x10057443: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005744D; /* 0x10057445: je 0x1005744d */
L_10057447:
    /* test edi, edi */ /* 0x10057447: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057481; /* 0x10057449: je 0x10057481 */
L_1005744B:
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x1005744B: mov byte ptr [ebx], al */
L_1005744D:
    eax = MEM32(ebp + 0x8); /* 0x1005744D: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10057450: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100143A0; /* 0x10057452: je 0x100143a0 */
L_10057458:
    MEM32(eax) = 1; /* 0x10057458: mov dword ptr [eax], 1 */
    RECOMP_BACKEDGE();
    goto L_100143A0; /* 0x1005745E: jmp 0x100143a0 */
L_10057463:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10057463: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x7Au */ /* 0x10057469: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005742C; /* 0x1005746C: jne 0x1005742c */
L_1005746E:
    /* test ebx, ebx */ /* 0x1005746E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057481; /* 0x10057470: je 0x10057481 */
L_10057472:
    /* test edi, edi */ /* 0x10057472: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057481; /* 0x10057474: je 0x10057481 */
L_10057476:
    PUSH32(esp, edi); /* 0x10057476: push edi */
    PUSH32(esp, esi); /* 0x10057477: push esi */
    PUSH32(esp, ebx); /* 0x10057478: push ebx */
    RECOMP_CALL(sub_10011533); /* 0x10057479: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005747E: add esp, 0xc */
    _flag_k = FK_ADD;
L_10057481:
    RECOMP_CALL(sub_1001177D); /* 0x10057481: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x10057486: push 0x22 */
    esi = POP32_VAL(esp); /* 0x10057488: pop esi */
    MEM32(eax) = esi; /* 0x10057489: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1005748B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100143A0; /* 0x10057490: jmp 0x100143a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001448C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001448Cu);

    goto L_1001448C;
L_10014471:
    eax = MEM32(edi + (-0x4)); /* 0x10014471: mov eax, dword ptr [edi - 4] */
    /* test eax, eax */ /* 0x10014474: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014484; /* 0x10014476: je 0x10014484 */
L_10014478:
    /* cmp MEM32(eax), 0 */ /* 0x10014478: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10014484; /* 0x1001447B: jne 0x10014484 */
L_1001447D:
    PUSH32(esp, eax); /* 0x1001447D: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1001447E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014483: pop ecx */
L_10014484:
    eax = MEM32(ebp + 0x8); /* 0x10014484: mov eax, dword ptr [ebp + 8] */
    goto L_10014516; /* 0x10014487: jmp 0x10014516 */
L_1001448C:
    PUSH32(esp, ebp); /* 0x1001448C: push ebp */
    ebp = esp; /* 0x1001448D: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1001448F: push ebx */
    PUSH32(esp, esi); /* 0x10014490: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10014491: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10014494: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10014496: push edi */
    eax = MEM32(esi + 0x84); /* 0x10014497: mov eax, dword ptr [esi + 0x84] */
    /* test eax, eax */ /* 0x1001449D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100144B7; /* 0x1001449F: je 0x100144b7 */
L_100144A1:
    /* cmp eax, 0x100DF750u */ /* 0x100144A1: cmp eax, 0x100df750 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100DF750u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100144B7; /* 0x100144A6: je 0x100144b7 */
L_100144A8:
    eax = MEM32(esi + 0x78); /* 0x100144A8: mov eax, dword ptr [esi + 0x78] */
    /* test eax, eax */ /* 0x100144AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100144B7; /* 0x100144AD: je 0x100144b7 */
L_100144AF:
    /* cmp MEM32(eax), ebx */ /* 0x100144AF: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100298A5; /* 0x100144B1: je 0x100298a5 */
L_100144B7:
    eax = MEM32(esi + 0x88); /* 0x100144B7: mov eax, dword ptr [esi + 0x88] */
    /* test eax, eax */ /* 0x100144BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100144C9; /* 0x100144BF: je 0x100144c9 */
L_100144C1:
    /* cmp MEM32(eax), ebx */ /* 0x100144C1: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029616; /* 0x100144C3: je 0x10029616 */
L_100144C9:
    eax = MEM32(esi + 0x9C); /* 0x100144C9: mov eax, dword ptr [esi + 0x9c] */
    /* cmp eax, 0x100DF888u */ /* 0x100144CF: cmp eax, 0x100df888 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100DF888u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100144E2; /* 0x100144D4: je 0x100144e2 */
L_100144D6:
    /* cmp MEM32(eax + 0xB0), ebx */ /* 0x100144D6: cmp dword ptr [eax + 0xb0], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0xB0)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029D7A; /* 0x100144DC: je 0x10029d7a */
L_100144E2:
    PUSH32(esp, 6); /* 0x100144E2: push 6 */
    eax = POP32_VAL(esp); /* 0x100144E4: pop eax */
    ebx = esi + 0xA0; /* 0x100144E5: lea ebx, [esi + 0xa0] */
    MEM32(ebp + 0x8) = eax; /* 0x100144EB: mov dword ptr [ebp + 8], eax */
    edi = esi + 0x1C; /* 0x100144EE: lea edi, [esi + 0x1c] */
L_100144F1:
    /* cmp MEM32(edi + (-0x8)), 0x100DF880u */ /* 0x100144F1: cmp dword ptr [edi - 8], 0x100df880 */
    _flag_a = (uint32_t)(MEM32(edi + (-0x8))); _flag_b = (uint32_t)(0x100DF880u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001450C; /* 0x100144F8: je 0x1001450c */
L_100144FA:
    eax = MEM32(edi); /* 0x100144FA: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x100144FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014509; /* 0x100144FE: je 0x10014509 */
L_10014500:
    /* cmp MEM32(eax), 0 */ /* 0x10014500: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10022AA7; /* 0x10014503: je 0x10022aa7 */
L_10014509:
    eax = MEM32(ebp + 0x8); /* 0x10014509: mov eax, dword ptr [ebp + 8] */
L_1001450C:
    /* cmp MEM32(edi + (-0xC)), 0 */ /* 0x1001450C: cmp dword ptr [edi - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10014471; /* 0x10014510: jne 0x10014471 */
L_10014516:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x10014516: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x10014519: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001451C: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = eax; /* 0x1001451D: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100144F1; /* 0x10014520: jne 0x100144f1 */
L_10014522:
    PUSH32(esp, esi); /* 0x10014522: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10014523: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014528: pop ecx */
    edi = POP32_VAL(esp); /* 0x10014529: pop edi */
    esi = POP32_VAL(esp); /* 0x1001452A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1001452B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1001452C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001452D: ret  */
L_10022AA7:
    PUSH32(esp, eax); /* 0x10022AA7: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10022AA8: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx)); /* 0x10022AAD: push dword ptr [ebx] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10022AAF: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10022AB4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10022AB5: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10014509; /* 0x10022AB6: jmp 0x10014509 */
L_10029616:
    eax = MEM32(esi + 0x8C); /* 0x10029616: mov eax, dword ptr [esi + 0x8c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFEu; /* 0x1002961C: sub eax, 0xfe */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x10029621: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029622: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x94); /* 0x10029627: mov eax, dword ptr [esi + 0x94] */
    edi = 0x80u; /* 0x1002962D: mov edi, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x10029632: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x10029634: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029635: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x98); /* 0x1002963A: mov eax, dword ptr [esi + 0x98] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x10029640: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x10029642: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029643: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x88)); /* 0x10029648: push dword ptr [esi + 0x88] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1002964E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10029653: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100144C9; /* 0x10029656: jmp 0x100144c9 */
L_100298A5:
    eax = MEM32(esi + 0x80); /* 0x100298A5: mov eax, dword ptr [esi + 0x80] */
    /* test eax, eax */ /* 0x100298AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100298C6; /* 0x100298AD: je 0x100298c6 */
L_100298AF:
    /* cmp MEM32(eax), ebx */ /* 0x100298AF: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100298C6; /* 0x100298B1: jne 0x100298c6 */
L_100298B3:
    PUSH32(esp, eax); /* 0x100298B3: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100298B4: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x84)); /* 0x100298B9: push dword ptr [esi + 0x84] */
    RECOMP_CALL(sub_100298FE); /* 0x100298BF: call 0x100298fe */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100298C4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100298C5: pop ecx */
L_100298C6:
    eax = MEM32(esi + 0x7C); /* 0x100298C6: mov eax, dword ptr [esi + 0x7c] */
    /* test eax, eax */ /* 0x100298C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100298E4; /* 0x100298CB: je 0x100298e4 */
L_100298CD:
    /* cmp MEM32(eax), ebx */ /* 0x100298CD: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100298E4; /* 0x100298CF: jne 0x100298e4 */
L_100298D1:
    PUSH32(esp, eax); /* 0x100298D1: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x100298D2: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x84)); /* 0x100298D7: push dword ptr [esi + 0x84] */
    RECOMP_CALL(sub_1002983E); /* 0x100298DD: call 0x1002983e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100298E2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100298E3: pop ecx */
L_100298E4:
    PUSH32(esp, MEM32(esi + 0x78)); /* 0x100298E4: push dword ptr [esi + 0x78] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100298E7: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x84)); /* 0x100298EC: push dword ptr [esi + 0x84] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100298F2: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100298F7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100298F8: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100144B7; /* 0x100298F9: jmp 0x100144b7 */
L_10029D7A:
    PUSH32(esp, eax); /* 0x10029D7A: push eax */
    RECOMP_CALL(sub_100299FA); /* 0x10029D7B: call 0x100299fa */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x9C)); /* 0x10029D80: push dword ptr [esi + 0x9c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10029D86: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029D8B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10029D8C: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100144E2; /* 0x10029D8D: jmp 0x100144e2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014567(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014567u);

L_10014567:
    PUSH32(esp, ebp); /* 0x10014567: push ebp */
    ebp = esp; /* 0x10014568: mov ebp, esp */
    eax = MEM32(0x100DFA54); /* 0x1001456A: mov eax, dword ptr [0x100dfa54] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x1001456F: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005FBE6; /* 0x10014575: je 0x1005fbe6 */
L_1001457B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001457B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1001457D: push ecx */
    PUSH32(esp, ecx); /* 0x1001457E: push ecx */
    PUSH32(esp, ecx); /* 0x1001457F: push ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x10014580: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10014583: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10014586: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10014589: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1001458C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1001458F: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x10014592: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x10014594: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014595: ret  */
L_1005FBE6:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1005FBE6: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1005FBE9: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1005FBEC: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1005FBEF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1005FBF2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005FBF5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A6024); /* 0x1005FBF8: call 0x100a6024 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005FBFD: pop ecx */
    PUSH32(esp, eax); /* 0x1005FBFE: push eax */
    RECOMP_ICALL(MEM32(0x100E529C)); /* 0x1005FBFF: call dword ptr [0x100e529c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1005FC05: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005FC06: ret  */
    RECOMP_REGS_OUT();
}

void sub_10014596(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014596u);

L_10014596:
    PUSH32(esp, ebp); /* 0x10014596: push ebp */
    ebp = esp; /* 0x10014597: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10014599: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1001459C: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x10); /* 0x1001459F: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1000F764); /* 0x100145A2: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x100145A7: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(ecx + 0x74), 1 */ /* 0x100145AA: cmp dword ptr [ecx + 0x74], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x74)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10056C3F; /* 0x100145AE: jg 0x10056c3f */
L_100145B4:
    ecx = MEM32(ecx + 0x90); /* 0x100145B4: mov ecx, dword ptr [ecx + 0x90] */
    eax = MEM32(ebp + 0x8); /* 0x100145BA: mov eax, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM16(ecx + eax * 2); /* 0x100145BD: movzx ecx, word ptr [ecx + eax*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x103u);
    ecx = ecx & 0x103u; /* 0x100145C1: and ecx, 0x103 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100145C7:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x100145C7: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100145D4; /* 0x100145CB: je 0x100145d4 */
L_100145CD:
    eax = MEM32(ebp + (-0x8)); /* 0x100145CD: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x100145D0: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_100145D4:
    eax = ecx; /* 0x100145D4: mov eax, ecx */
    esp = ebp; /* 0x100145D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100145D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100145D9: ret  */
L_10056C3F:
    eax = ebp + (-0x10); /* 0x10056C3F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10056C42: push eax */
    PUSH32(esp, 0x103u); /* 0x10056C43: push 0x103 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10056C48: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100895AC); /* 0x10056C4B: call 0x100895ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10056C50: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x10056C53: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_100145C7; /* 0x10056C55: jmp 0x100145c7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100145DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100145DAu);

L_100145DA:
    PUSH32(esp, ebp); /* 0x100145DA: push ebp */
    ebp = esp; /* 0x100145DB: mov ebp, esp */
    /* cmp MEM32(0x100DF7C4), 0 */ /* 0x100145DD: cmp dword ptr [0x100df7c4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056D0F; /* 0x100145E4: je 0x10056d0f */
L_100145EA:
    PUSH32(esp, 0); /* 0x100145EA: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100145EC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10014596); /* 0x100145EF: call 0x10014596 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100145F4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100145F5: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100145F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100145F7: ret  */
L_10056D0F:
    ecx = MEM32(ebp + 0x8); /* 0x10056D0F: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(0x100DF858); /* 0x10056D12: mov eax, dword ptr [0x100df858] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x10056D17: movzx eax, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x103u);
    eax = eax & 0x103u; /* 0x10056D1B: and eax, 0x103 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10056D20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10056D21: ret  */
    RECOMP_REGS_OUT();
}

void sub_100145F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100145F8u);

L_100145F8:
    PUSH32(esp, 8); /* 0x100145F8: push 8 */
    PUSH32(esp, 0x10014630u); /* 0x100145FA: push 0x10014630 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100145FF: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x100DF7B0), 0 */ /* 0x10014604: cmp dword ptr [0x100df7b0], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF7B0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10053BC2; /* 0x1001460B: je 0x10053bc2 */
L_10014611:
    edi = MEM32(ebp + 0x8); /* 0x10014611: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10014614: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi * 8 + 0x100DFCB0), ebx */ /* 0x10014616: cmp dword ptr [edi*8 + 0x100dfcb0], ebx */
    _flag_a = (uint32_t)(MEM32(edi * 8 + 0x100DFCB0)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029407; /* 0x1001461D: je 0x10029407 */
L_10014623:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10014623: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10014625: inc eax */
    _flag_k = FK_INC;
L_10014626:
    RECOMP_CALL(sub_1000EDC3); /* 0x10014626: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001462B: ret  */
L_10029407:
    PUSH32(esp, 0x18u); /* 0x10029407: push 0x18 */
    RECOMP_CALL(sub_10012226); /* 0x10029409: call 0x10012226 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002940E: pop ecx */
    esi = eax; /* 0x1002940F: mov esi, eax */
    /* test esi, esi */ /* 0x10029411: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053BDC; /* 0x10029413: je 0x10053bdc */
L_10029419:
    PUSH32(esp, 0xAu); /* 0x10029419: push 0xa */
    RECOMP_CALL(sub_1000EDD7); /* 0x1002941B: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029420: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x10029421: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM32(edi * 8 + 0x100DFCB0), ebx */ /* 0x10029424: cmp dword ptr [edi*8 + 0x100dfcb0], ebx */
    _flag_a = (uint32_t)(MEM32(edi * 8 + 0x100DFCB0)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10053BEE; /* 0x1002942B: jne 0x10053bee */
L_10029431:
    PUSH32(esp, ebx); /* 0x10029431: push ebx */
    PUSH32(esp, 0xFA0u); /* 0x10029432: push 0xfa0 */
    PUSH32(esp, esi); /* 0x10029437: push esi */
    RECOMP_CALL(sub_10012426); /* 0x10029438: call 0x10012426 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002943D: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi * 8 + 0x100DFCB0) = esi; /* 0x10029440: mov dword ptr [edi*8 + 0x100dfcb0], esi */
L_10029447:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10029447: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10029458); /* 0x1002944E: call 0x10029458 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10014623; /* 0x10029453: jmp 0x10014623 */
L_10053BC2:
    RECOMP_CALL(sub_1007BD25); /* 0x10053BC2: call 0x1007bd25 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1Eu); /* 0x10053BC7: push 0x1e */
    RECOMP_CALL(sub_1007BE40); /* 0x10053BC9: call 0x1007be40 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFu); /* 0x10053BCE: push 0xff */
    RECOMP_CALL(sub_10033F97); /* 0x10053BD3: call 0x10033f97 */
    RECOMP_FLAGS_IN();
    goto L_10053BDA; /* 0x10053BD8: jmp 0x10053bda */
L_10053BDA:
    ecx = POP32_VAL(esp); /* 0x10053BDA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10053BDB: pop ecx */
L_10053BDC:
    RECOMP_CALL(sub_1001177D); /* 0x10053BDC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x10053BE1: mov dword ptr [eax], 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10053BE7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10014626; /* 0x10053BE9: jmp 0x10014626 */
L_10053BEE:
    PUSH32(esp, esi); /* 0x10053BEE: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10053BEF: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10053BF4: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10029447; /* 0x10053BF5: jmp 0x10029447 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001464C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001464Cu);

L_1001464C:
    PUSH32(esp, ebx); /* 0x1001464C: push ebx */
    PUSH32(esp, esi); /* 0x1001464D: push esi */
    eax = MEM32(esp + 0x18); /* 0x1001464E: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x10014652: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034E8E; /* 0x10014654: jne 0x10034e8e */
L_1001465A:
    ecx = MEM32(esp + 0x14); /* 0x1001465A: mov ecx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x10); /* 0x1001465E: mov eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10014662: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10014664: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x10014666: mov ebx, eax */
    eax = MEM32(esp + 0xC); /* 0x10014668: mov eax, dword ptr [esp + 0xc] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1001466C: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = ebx; /* 0x1001466E: mov edx, ebx */
L_10014670:
    esi = POP32_VAL(esp); /* 0x10014670: pop esi */
    ebx = POP32_VAL(esp); /* 0x10014671: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10014672: ret 0x10 */
L_10034E8E:
    ecx = eax; /* 0x10034E8E: mov ecx, eax */
    ebx = MEM32(esp + 0x14); /* 0x10034E90: mov ebx, dword ptr [esp + 0x14] */
    edx = MEM32(esp + 0x10); /* 0x10034E94: mov edx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x10034E98: mov eax, dword ptr [esp + 0xc] */
L_10034E9C:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x10034E9C: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x10034E9C: shr ecx, 1 */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x10034E9E: rcr ebx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x10034EA0: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x10034EA0: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x10034EA2: rcr eax, 1 */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x10034EA4: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034E9C; /* 0x10034EA6: jne 0x10034e9c */
L_10034EA8:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x10034EA8: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x10034EAA: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x18)); /* 0x10034EAC: mul dword ptr [esp + 0x18] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x10034EB0: mov ecx, eax */
    eax = MEM32(esp + 0x14); /* 0x10034EB2: mov eax, dword ptr [esp + 0x14] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x10034EB6: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x10034EB8: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10034ECA; /* 0x10034EBA: jb 0x10034eca */
L_10034EBC:
    /* cmp edx, MEM32(esp + 0x10) */ /* 0x10034EBC: cmp edx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10034ECA; /* 0x10034EC0: ja 0x10034eca */
L_10034EC2:
    if (CMP_B(_flag_a, _flag_b)) goto L_10034ECB; /* 0x10034EC2: jb 0x10034ecb */
L_10034EC4:
    /* cmp eax, MEM32(esp + 0xC) */ /* 0x10034EC4: cmp eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10034ECB; /* 0x10034EC8: jbe 0x10034ecb */
L_10034ECA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10034ECA: dec esi */
    _flag_k = FK_DEC;
L_10034ECB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10034ECB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x10034ECD: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10014670; /* 0x10034ECF: jmp 0x10014670 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014675(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014675u);

L_10014675:
    PUSH32(esp, ebp); /* 0x10014675: push ebp */
    ebp = esp; /* 0x10014676: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10014678: push ecx */
    PUSH32(esp, ecx); /* 0x10014679: push ecx */
    eax = ebp + (-0x8); /* 0x1001467A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1001467D: push eax */
    RECOMP_ICALL(MEM32(0x100E5110)); /* 0x1001467E: call dword ptr [0x100e5110] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x10014684: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x10014687: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2AC18000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2AC18000u; /* 0x1001468A: add ecx, 0x2ac18000 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x10014690: push 0 */
    PUSH32(esp, 0x00989680u); /* 0x10014692: push 0x989680 */
    { uint32_t _aa = eax, _ab = 0xFE624E21u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10014697: adc eax, 0xfe624e21 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x1001469C: push eax */
    PUSH32(esp, ecx); /* 0x1001469D: push ecx */
    RECOMP_CALL(sub_1001464C); /* 0x1001469E: call 0x1001464c */
    RECOMP_FLAGS_IN();
    /* cmp edx, 7 */ /* 0x100146A3: cmp edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10056C0D; /* 0x100146A6: jge 0x10056c0d */
L_100146AC:
    ecx = MEM32(ebp + 0x8); /* 0x100146AC: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x100146AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100146B8; /* 0x100146B1: je 0x100146b8 */
L_100146B3:
    MEM32(ecx) = eax; /* 0x100146B3: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = edx; /* 0x100146B5: mov dword ptr [ecx + 4], edx */
L_100146B8:
    esp = ebp; /* 0x100146B8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100146BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100146BB: ret  */
L_10056C0D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_10056C1A; /* 0x10056C0D: jg 0x10056c1a */
L_10056C0F:
    /* cmp eax, 0x93406FFFu */ /* 0x10056C0F: cmp eax, 0x93406fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93406FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_100146AC; /* 0x10056C14: jbe 0x100146ac */
L_10056C1A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10056C1A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x10056C1D: mov edx, eax */
    RECOMP_BACKEDGE();
    goto L_100146AC; /* 0x10056C1F: jmp 0x100146ac */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100146BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100146BCu);

L_100146BC:
    /* cmp MEM32(0x100DF7C0), 1 */ /* 0x100146BC: cmp dword ptr [0x100df7c0], 1 */
    _flag_a = (uint32_t)(MEM32(0x100DF7C0)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1003469E; /* 0x100146C3: jb 0x1003469e */
L_100146C9:
    eax = (uint32_t)MEM8(esp + 0x8); /* 0x100146C9: movzx eax, byte ptr [esp + 8] */
    edx = eax; /* 0x100146CE: mov edx, eax */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x100146D0: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x100146D0: shl eax, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x100146D3: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _xmm[3].u64[0] = (uint32_t)(edx); _xmm[3].u64[1] = 0; /* 0x100146D5: movd xmm3, edx */
    { xmm_t _s = _xmm[3]; _xmm[3].u64[1] = _s.u64[1]; _xmm[3].u16[0] = _s.u16[0]; _xmm[3].u16[1] = _s.u16[0]; _xmm[3].u16[2] = _s.u16[0]; _xmm[3].u16[3] = _s.u16[0]; } /* 0x100146D9: pshuflw xmm3, xmm3, 0 */
    _xmm[3].u64[1] = _xmm[3].u64[0]; /* 0x100146DE: movlhps xmm3, xmm3 */
    edx = MEM32(esp + 0x4); /* 0x100146E1: mov edx, dword ptr [esp + 4] */
    ecx = 0xFu; /* 0x100146E5: mov ecx, 0xf */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100146EA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x100146ED: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100146EF: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x100146EF: shl eax, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x100146F1: sub edx, ecx */
    _flag_k = FK_CMP;
L_100146F3:
    _xmm[1] = xmm_ld(edx); /* 0x100146F3: movdqu xmm1, xmmword ptr [edx] */
    { xmm_t _s = _xmm[2]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] ^ _s.u32[_k]; } /* 0x100146F7: pxor xmm2, xmm2 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 16; _k++) _xmm[2].u8[_k] = (_xmm[2].u8[_k] == _s.u8[_k]) ? (uint8_t)~0u : 0; } /* 0x100146FB: pcmpeqb xmm2, xmm1 */
    { xmm_t _s = _xmm[3]; for (int _k = 0; _k < 16; _k++) _xmm[1].u8[_k] = (_xmm[1].u8[_k] == _s.u8[_k]) ? (uint8_t)~0u : 0; } /* 0x100146FF: pcmpeqb xmm1, xmm3 */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[2].u32[_k] = _xmm[2].u32[_k] | _s.u32[_k]; } /* 0x10014703: por xmm2, xmm1 */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[2].u8[_k] >> 7) << _k; ecx = _m; } /* 0x10014707: pmovmskb ecx, xmm2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1001470B: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014720; /* 0x1001470D: je 0x10014720 */
L_1001470F:
    { uint32_t _v = ecx, _i; if (_v) { for (_i = 0; !((_v >> _i) & 1u); _i++) ; eax = _i; } _flag_a = _flag_b = _v; } _cf = 0; /* 0x1001470F: bsf eax, ecx */
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x10014712: add eax, edx */
    _flag_k = FK_ADD;
    edx = _xmm[3].u32[0]; /* 0x10014714: movd edx, xmm3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10014718: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(edx), MEM8(eax) */ /* 0x1001471A: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) { eax = ecx; } /* 0x1001471C: cmovne eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001471F: ret  */
L_10014720:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10014720: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x10014723: add edx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100146F3; /* 0x10014726: jmp 0x100146f3 */
L_1003469E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1003469E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esp + 0x8)); /* 0x100346A0: mov al, byte ptr [esp + 8] */
    PUSH32(esp, ebx); /* 0x100346A4: push ebx */
    ebx = eax; /* 0x100346A5: mov ebx, eax */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x100346A7: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x100346A7: shl eax, 8 */
    edx = MEM32(esp + 0x8); /* 0x100346AA: mov edx, dword ptr [esp + 8] */
    /* test edx, 3 */ /* 0x100346AE: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100346CB; /* 0x100346B4: je 0x100346cb */
L_100346B6:
    SET_LO8(ecx, MEM8(edx)); /* 0x100346B6: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x100346B8: add edx, 1 */
    _flag_k = FK_ADD;
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x100346BB: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034718; /* 0x100346BD: je 0x10034718 */
L_100346BF:
    /* test LO8(ecx), LO8(ecx) */ /* 0x100346BF: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034714; /* 0x100346C1: je 0x10034714 */
L_100346C3:
    /* test edx, 3 */ /* 0x100346C3: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100346B6; /* 0x100346C9: jne 0x100346b6 */
L_100346CB:
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x100346CB: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100346CD: push edi */
    eax = ebx; /* 0x100346CE: mov eax, ebx */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100346D0: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100346D0: shl ebx, 0x10 */
    PUSH32(esp, esi); /* 0x100346D3: push esi */
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x100346D4: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100346D6:
    ecx = MEM32(edx); /* 0x100346D6: mov ecx, dword ptr [edx] */
    edi = 0x7EFEFEFFu; /* 0x100346D8: mov edi, 0x7efefeff */
    eax = ecx; /* 0x100346DD: mov eax, ecx */
    esi = edi; /* 0x100346DF: mov esi, edi */
    _flag_a = (uint32_t)((ecx ^ ebx)); _flag_b = (uint32_t)((ecx ^ ebx));
    ecx = ecx ^ ebx; /* 0x100346E1: xor ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x100346E3: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x100346E5: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx ^ 0xFFFFFFFFu));
    ecx = ecx ^ 0xFFFFFFFFu; /* 0x100346E7: xor ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x100346EA: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x100346ED: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ esi)); _flag_b = (uint32_t)((eax ^ esi));
    eax = eax ^ esi; /* 0x100346EF: xor eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x100346F1: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x81010100u);
    ecx = ecx & 0x81010100u; /* 0x100346F4: and ecx, 0x81010100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1003471D; /* 0x100346FA: jne 0x1003471d */
L_100346FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    eax = eax & 0x81010100u; /* 0x100346FC: and eax, 0x81010100 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100346D6; /* 0x10034701: je 0x100346d6 */
L_10034703:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01010100u);
    eax = eax & 0x01010100u; /* 0x10034703: and eax, 0x1010100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034712; /* 0x10034708: jne 0x10034712 */
L_1003470A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80000000u);
    esi = esi & 0x80000000u; /* 0x1003470A: and esi, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100346D6; /* 0x10034710: jne 0x100346d6 */
L_10034712:
    esi = POP32_VAL(esp); /* 0x10034712: pop esi */
    edi = POP32_VAL(esp); /* 0x10034713: pop edi */
L_10034714:
    ebx = POP32_VAL(esp); /* 0x10034714: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10034715: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034717: ret  */
L_10034718:
    eax = edx + (-0x1); /* 0x10034718: lea eax, [edx - 1] */
    ebx = POP32_VAL(esp); /* 0x1003471B: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003471C: ret  */
L_1003471D:
    eax = MEM32(edx + (-0x4)); /* 0x1003471D: mov eax, dword ptr [edx - 4] */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x10034720: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003475A; /* 0x10034722: je 0x1003475a */
L_10034724:
    /* test LO8(eax), LO8(eax) */ /* 0x10034724: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034712; /* 0x10034726: je 0x10034712 */
L_10034728:
    /* cmp HI8(eax), LO8(ebx) */ /* 0x10034728: cmp ah, bl */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034753; /* 0x1003472A: je 0x10034753 */
L_1003472C:
    /* test HI8(eax), HI8(eax) */ /* 0x1003472C: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034712; /* 0x1003472E: je 0x10034712 */
L_10034730:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x10034730: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x10034730: shr eax, 0x10 */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x10034733: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003474C; /* 0x10034735: je 0x1003474c */
L_10034737:
    /* test LO8(eax), LO8(eax) */ /* 0x10034737: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10034712; /* 0x10034739: je 0x10034712 */
L_1003473B:
    /* cmp HI8(eax), LO8(ebx) */ /* 0x1003473B: cmp ah, bl */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10034745; /* 0x1003473D: je 0x10034745 */
L_1003473F:
    /* test HI8(eax), HI8(eax) */ /* 0x1003473F: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100346D6; /* 0x10034741: jne 0x100346d6 */
L_10034743:
    RECOMP_BACKEDGE();
    goto L_10034712; /* 0x10034743: jmp 0x10034712 */
L_10034745:
    esi = POP32_VAL(esp); /* 0x10034745: pop esi */
    edi = POP32_VAL(esp); /* 0x10034746: pop edi */
    eax = edx + (-0x1); /* 0x10034747: lea eax, [edx - 1] */
    ebx = POP32_VAL(esp); /* 0x1003474A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1003474B: ret  */
L_1003474C:
    eax = edx + (-0x2); /* 0x1003474C: lea eax, [edx - 2] */
    esi = POP32_VAL(esp); /* 0x1003474F: pop esi */
    edi = POP32_VAL(esp); /* 0x10034750: pop edi */
    ebx = POP32_VAL(esp); /* 0x10034751: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034752: ret  */
L_10034753:
    eax = edx + (-0x3); /* 0x10034753: lea eax, [edx - 3] */
    esi = POP32_VAL(esp); /* 0x10034756: pop esi */
    edi = POP32_VAL(esp); /* 0x10034757: pop edi */
    ebx = POP32_VAL(esp); /* 0x10034758: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034759: ret  */
L_1003475A:
    eax = edx + (-0x4); /* 0x1003475A: lea eax, [edx - 4] */
    esi = POP32_VAL(esp); /* 0x1003475D: pop esi */
    edi = POP32_VAL(esp); /* 0x1003475E: pop edi */
    ebx = POP32_VAL(esp); /* 0x1003475F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10034760: ret  */
    RECOMP_REGS_OUT();
}

void sub_10014728(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014728u);

L_10014728:
    PUSH32(esp, ebp); /* 0x10014728: push ebp */
    ebp = esp; /* 0x10014729: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x218u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x218u; /* 0x1001472B: sub esp, 0x218 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10014731: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10014736: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10014738: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1001473B: push ebx */
    PUSH32(esp, esi); /* 0x1001473C: push esi */
    PUSH32(esp, edi); /* 0x1001473D: push edi */
    esi = ebp + (-0x210); /* 0x1001473E: lea esi, [ebp - 0x210] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10014744: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x10014746: mov eax, esi */
    MEM32(ebp + (-0x214)) = ebx; /* 0x10014748: mov dword ptr [ebp - 0x214], ebx */
    PUSH32(esp, eax); /* 0x1001474E: push eax */
    PUSH32(esp, 0x105u); /* 0x1001474F: push 0x105 */
    RECOMP_ICALL(MEM32(0x100E50DC)); /* 0x10014754: call dword ptr [0x100e50dc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1001475A: mov edi, eax */
    /* cmp edi, 0x104u */ /* 0x1001475C: cmp edi, 0x104 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10054632; /* 0x10014762: jg 0x10054632 */
L_10014768:
    /* test edi, edi */ /* 0x10014768: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054690; /* 0x1001476A: je 0x10054690 */
L_10014770:
    /* cmp MEM16(esi + 0x2), 0x3Au */ /* 0x10014770: cmp word ptr [esi + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(esi + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10014786; /* 0x10014775: jne 0x10014786 */
L_10014777:
    eax = (uint32_t)MEM16(esi); /* 0x10014777: movzx eax, word ptr [esi] */
    /* cmp eax, 0x61u */ /* 0x1001477A: cmp eax, 0x61 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005467F; /* 0x1001477D: jae 0x1005467f */
L_10014783:
    ebx = eax + (-0x40); /* 0x10014783: lea ebx, [eax - 0x40] */
L_10014786:
    /* cmp MEM32(ebp + (-0x214)), 0 */ /* 0x10014786: cmp dword ptr [ebp - 0x214], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x214))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100546A0; /* 0x1001478D: jne 0x100546a0 */
L_10014793:
    ecx = MEM32(ebp + (-0x4)); /* 0x10014793: mov ecx, dword ptr [ebp - 4] */
    eax = ebx; /* 0x10014796: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x10014798: pop edi */
    esi = POP32_VAL(esp); /* 0x10014799: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1001479A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1001479C: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1001479D: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100147A2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100147A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100147A5: ret  */
L_10054632:
    eax = edi + 0x1; /* 0x10054632: lea eax, [edi + 1] */
    PUSH32(esp, 2); /* 0x10054635: push 2 */
    PUSH32(esp, eax); /* 0x10054637: push eax */
    MEM32(ebp + (-0x218)) = eax; /* 0x10054638: mov dword ptr [ebp - 0x218], eax */
    RECOMP_CALL(sub_10011208); /* 0x1005463E: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10054643: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10054645: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10054646: pop ecx */
    /* test esi, esi */ /* 0x10054647: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005465D; /* 0x10054649: jne 0x1005465d */
L_1005464B:
    RECOMP_CALL(sub_1001177D); /* 0x1005464B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    edi = ebx; /* 0x10054650: mov edi, ebx */
    MEM32(eax) = 0xCu; /* 0x10054652: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_10014768; /* 0x10054658: jmp 0x10014768 */
L_1005465D:
    MEM32(ebp + (-0x214)) = 1; /* 0x1005465D: mov dword ptr [ebp - 0x214], 1 */
    /* test edi, edi */ /* 0x10054667: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054690; /* 0x10054669: je 0x10054690 */
L_1005466B:
    PUSH32(esp, esi); /* 0x1005466B: push esi */
    PUSH32(esp, MEM32(ebp + (-0x218))); /* 0x1005466C: push dword ptr [ebp - 0x218] */
    RECOMP_ICALL(MEM32(0x100E50DC)); /* 0x10054672: call dword ptr [0x100e50dc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10054678: mov edi, eax */
    RECOMP_BACKEDGE();
    goto L_10014768; /* 0x1005467A: jmp 0x10014768 */
L_1005467F:
    /* cmp eax, 0x7Au */ /* 0x1005467F: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_10014783; /* 0x10054682: ja 0x10014783 */
L_10054688:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x10054688: sub eax, 0x20 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_10014783; /* 0x1005468B: jmp 0x10014783 */
L_10054690:
    RECOMP_CALL(sub_1001177D); /* 0x10054690: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x10054695: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_10014786; /* 0x1005469B: jmp 0x10014786 */
L_100546A0:
    PUSH32(esp, esi); /* 0x100546A0: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100546A1: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100546A6: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10014793; /* 0x100546A7: jmp 0x10014793 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100147CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100147CDu);

L_100147CD:
    PUSH32(esp, ebp); /* 0x100147CD: push ebp */
    ebp = esp; /* 0x100147CE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100147D0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100147D1: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100147D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001480A; /* 0x100147D6: je 0x1001480a */
L_100147D8:
    edx = MEM32(ebp + 0xC); /* 0x100147D8: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x100147DB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001480A; /* 0x100147DD: je 0x1001480a */
L_100147DF:
    ecx = MEM32(ebp + 0x10); /* 0x100147DF: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x100147E2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100562C1; /* 0x100147E4: je 0x100562c1 */
L_100147EA:
    PUSH32(esp, edi); /* 0x100147EA: push edi */
    edi = esi; /* 0x100147EB: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x100147ED: sub edi, ecx */
    _flag_k = FK_CMP;
L_100147EF:
    SET_LO8(eax, MEM8(ecx)); /* 0x100147EF: mov al, byte ptr [ecx] */
    MEM8(edi + ecx) = (uint8_t)(LO8(eax)); /* 0x100147F1: mov byte ptr [edi + ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100147F4: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x100147F5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100147FC; /* 0x100147F7: je 0x100147fc */
L_100147F9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100147F9: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100147EF; /* 0x100147FA: jne 0x100147ef */
L_100147FC:
    edi = POP32_VAL(esp); /* 0x100147FC: pop edi */
    /* test edx, edx */ /* 0x100147FD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100562D9; /* 0x100147FF: je 0x100562d9 */
L_10014805:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10014805: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10014807:
    esi = POP32_VAL(esp); /* 0x10014807: pop esi */
    ebp = POP32_VAL(esp); /* 0x10014808: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014809: ret  */
L_1001480A:
    RECOMP_CALL(sub_1001177D); /* 0x1001480A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_100562C8; /* 0x1001480F: jmp 0x100562c8 */
L_100562C1:
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x100562C1: mov byte ptr [esi], cl */
    RECOMP_BACKEDGE();
    goto L_1001480A; /* 0x100562C3: jmp 0x1001480a */
L_100562C8:
    PUSH32(esp, 0x16u); /* 0x100562C8: push 0x16 */
L_100562CA:
    esi = POP32_VAL(esp); /* 0x100562CA: pop esi */
    MEM32(eax) = esi; /* 0x100562CB: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100562CD: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100562D2: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10014807; /* 0x100562D4: jmp 0x10014807 */
L_100562D9:
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x100562D9: mov byte ptr [esi], dl */
    RECOMP_CALL(sub_1001177D); /* 0x100562DB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x100562E0: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_100562CA; /* 0x100562E2: jmp 0x100562ca */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014872(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014872u);

L_10014872:
    PUSH32(esp, ebp); /* 0x10014872: push ebp */
    ebp = esp; /* 0x10014873: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10014875: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM32(0x100DFDDC), 0x80000000u */ /* 0x10014878: test dword ptr [0x100dfddc], 0x80000000 */
    _flag_a = (uint32_t)(MEM32(0x100DFDDC)); _flag_b = (uint32_t)(0x80000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023A79; /* 0x10014882: je 0x10023a79 */
L_10014888:
    PUSH32(esp, MEM32(0x100DFDE0)); /* 0x10014888: push dword ptr [0x100dfde0] */
    RECOMP_ICALL(MEM32(0x100E514C)); /* 0x1001488E: call dword ptr [0x100e514c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10014894: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023A79; /* 0x10014896: je 0x10023a79 */
L_1001489C:
    esp = ebp; /* 0x1001489C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001489E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001489F: ret  */
L_10023A79:
    RECOMP_CALL(sub_10023E43); /* 0x10023A79: call 0x10023e43 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1001489C; /* 0x10023A7E: jmp 0x1001489c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100148A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100148A0u);

L_100148A0:
    PUSH32(esp, ebp); /* 0x100148A0: push ebp */
    ebp = esp; /* 0x100148A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x100148A3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x100148A6: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100148A9: push ebx */
    PUSH32(esp, esi); /* 0x100148AA: push esi */
    PUSH32(esp, edi); /* 0x100148AB: push edi */
    edi = ecx; /* 0x100148AC: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100148AE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = esi; /* 0x100148B0: mov dword ptr [edi + 4], esi */
    ebx = edi + 0xC; /* 0x100148B3: lea ebx, [edi + 0xc] */
    MEM32(edi + 0x8) = 1; /* 0x100148B6: mov dword ptr [edi + 8], 1 */
    MEM32(ebx) = esi; /* 0x100148BD: mov dword ptr [ebx], esi */
    MEM32(edi + 0x10) = esi; /* 0x100148BF: mov dword ptr [edi + 0x10], esi */
    MEM32(edi + 0x14) = esi; /* 0x100148C2: mov dword ptr [edi + 0x14], esi */
    RECOMP_CALL(sub_10014872); /* 0x100148C5: call 0x10014872 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0xFFFFFFFFu */ /* 0x100148CA: cmp dword ptr [ebp + 8], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi) = eax; /* 0x100148CE: mov dword ptr [edi], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100520F3; /* 0x100148D0: jne 0x100520f3 */
L_100148D6:
    eax = edi; /* 0x100148D6: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x100148D8: pop edi */
    esi = POP32_VAL(esp); /* 0x100148D9: pop esi */
    ebx = POP32_VAL(esp); /* 0x100148DA: pop ebx */
    esp = ebp; /* 0x100148DB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100148DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100148DE: ret 4 */
L_100520F3:
    RECOMP_CALL(sub_10023E7E); /* 0x100520F3: call 0x10023e7e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 3 */ /* 0x100520F8: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10052129; /* 0x100520FB: jl 0x10052129 */
L_100520FD:
    PUSH32(esp, esi); /* 0x100520FD: push esi */
    PUSH32(esp, edi); /* 0x100520FE: push edi */
    PUSH32(esp, 0x1006F2DCu); /* 0x100520FF: push 0x1006f2dc */
    RECOMP_CALL(sub_100244BF); /* 0x10052104: call 0x100244bf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10052109: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1005210C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005211E; /* 0x1005210E: je 0x1005211e */
L_10052110:
    ecx = MEM32(ebp + 0x8); /* 0x10052110: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x10052113: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, eax); /* 0x10052115: push eax */
    RECOMP_CALL(sub_10026FED); /* 0x10052116: call 0x10026fed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005211B: pop ecx */
    esi = eax; /* 0x1005211C: mov esi, eax */
L_1005211E:
    MEM32(ebx) = esi; /* 0x1005211E: mov dword ptr [ebx], esi */
    /* test esi, esi */ /* 0x10052120: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10052175; /* 0x10052122: je 0x10052175 */
L_10052124:
    RECOMP_BACKEDGE();
    goto L_100148D6; /* 0x10052124: jmp 0x100148d6 */
L_10052129:
    RECOMP_CALL(sub_1006B168); /* 0x10052129: call 0x1006b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x20u); /* 0x1005212E: push 0x20 */
    PUSH32(esp, esi); /* 0x10052130: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10052131: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10052134: push edi */
    PUSH32(esp, 0x1006F313u); /* 0x10052135: push 0x1006f313 */
    PUSH32(esp, eax); /* 0x1005213A: push eax */
    PUSH32(esp, ebx); /* 0x1005213B: push ebx */
    RECOMP_ICALL(MEM32(0x100E5160)); /* 0x1005213C: call dword ptr [0x100e5160] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10052142: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100148D6; /* 0x10052144: jne 0x100148d6 */
L_1005214A:
    PUSH32(esp, 1); /* 0x1005214A: push 1 */
    eax = esp + 0x18; /* 0x1005214C: lea eax, [esp + 0x18] */
    MEM32(esp + 0x18) = 0x1002C7ECu; /* 0x10052150: mov dword ptr [esp + 0x18], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x10052158: push eax */
    ecx = esp + 0x2C; /* 0x10052159: lea ecx, [esp + 0x2c] */
    RECOMP_CALL(sub_10033A4A); /* 0x1005215D: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x24) = 0x1002D1CCu; /* 0x10052162: mov dword ptr [esp + 0x24], 0x1002d1cc */
    eax = esp + 0x24; /* 0x1005216A: lea eax, [esp + 0x24] */
    PUSH32(esp, 0x1002C7FCu); /* 0x1005216E: push 0x1002c7fc */
    goto L_1005219E; /* 0x10052173: jmp 0x1005219e */
L_10052175:
    PUSH32(esp, 1); /* 0x10052175: push 1 */
    eax = esp + 0x14; /* 0x10052177: lea eax, [esp + 0x14] */
    MEM32(esp + 0x14) = 0x1002C7ECu; /* 0x1005217B: mov dword ptr [esp + 0x14], 0x1002c7ec */
    PUSH32(esp, eax); /* 0x10052183: push eax */
    ecx = esp + 0x20; /* 0x10052184: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_10033A4A); /* 0x10052188: call 0x10033a4a */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x18) = 0x1002D1CCu; /* 0x1005218D: mov dword ptr [esp + 0x18], 0x1002d1cc */
    eax = esp + 0x18; /* 0x10052195: lea eax, [esp + 0x18] */
    PUSH32(esp, 0x1002C7FCu); /* 0x10052199: push 0x1002c7fc */
L_1005219E:
    PUSH32(esp, eax); /* 0x1005219E: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1005219F: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100521A4u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100148E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100148E1u);

L_100148E1:
    ecx = MEM32(ecx); /* 0x100148E1: mov ecx, dword ptr [ecx] */
    goto L_100148E5; /* 0x100148E3: jmp 0x100148e5 */
L_100148E5:
    edx = ecx + 0x24; /* 0x100148E5: lea edx, [ecx + 0x24] */
    /* cmp MEM32(edx), 8 */ /* 0x100148E8: cmp dword ptr [edx], 8 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10014AF1; /* 0x100148EB: jl 0x10014af1 */
L_100148F1:
    PUSH32(esp, 0xFFFFFFF8u); /* 0x100148F1: push -8 */
    eax = POP32_VAL(esp); /* 0x100148F3: pop eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edx), _sum = MEM32(edx) + eax; eax = _old; MEM32(edx) = _sum; } /* 0x100148F4: lock xadd dword ptr [edx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFBu);
    eax = eax & 0xFFFFFFFBu; /* 0x100148F8: and eax, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xBu */ /* 0x100148FB: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052273; /* 0x100148FE: je 0x10052273 */
L_10014904:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014904: ret  */
L_10014AF1:
    eax = MEM32(edx); /* 0x10014AF1: mov eax, dword ptr [edx] */
    /* test LO8(eax), 2 */ /* 0x10014AF3: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10014AFC; /* 0x10014AF5: jne 0x10014afc */
L_10014AF7:
    RECOMP_BACKEDGE();
    goto L_10014904; /* 0x10014AF7: jmp 0x10014904 */
L_10014AFC:
    PUSH32(esp, esi); /* 0x10014AFC: push esi */
    esi = ecx; /* 0x10014AFD: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10014AFF: push edi */
    edi = MEM32(esi + 0x1C); /* 0x10014B00: mov edi, dword ptr [esi + 0x1c] */
    ecx = MEM32(edi + 0x4); /* 0x10014B03: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x10014B06: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x1C) = ecx; /* 0x10014B09: mov dword ptr [esi + 0x1c], ecx */
    /* test ecx, ecx */ /* 0x10014B0C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005228E; /* 0x10014B0E: jne 0x1005228e */
L_10014B14:
    PUSH32(esp, ebx); /* 0x10014B14: push ebx */
    PUSH32(esp, 0xFFFFFFFCu); /* 0x10014B15: push -4 */
    ebx = POP32_VAL(esp); /* 0x10014B17: pop ebx */
    edx = esi + 0x24; /* 0x10014B18: lea edx, [esi + 0x24] */
    eax = MEM32(edx); /* 0x10014B1B: mov eax, dword ptr [edx] */
L_10014B1D:
    ecx = eax; /* 0x10014B1D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x10014B1F: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x10014B21: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10014B1D; /* 0x10014B25: jne 0x10014b1d */
L_10014B27:
    ebx = POP32_VAL(esp); /* 0x10014B27: pop ebx */
    /* test LO8(eax), 4 */ /* 0x10014B28: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10052295; /* 0x10014B2A: jne 0x10052295 */
L_10014B30:
    PUSH32(esp, edi); /* 0x10014B30: push edi */
    ecx = esi; /* 0x10014B31: mov ecx, esi */
    RECOMP_CALL(sub_10014B3B); /* 0x10014B33: call 0x10014b3b */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10014B38: pop edi */
    esi = POP32_VAL(esp); /* 0x10014B39: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014B3A: ret  */
L_10052273:
    ecx = MEM32(ecx + 0x1C); /* 0x10052273: mov ecx, dword ptr [ecx + 0x1c] */
    goto L_1006F26E; /* 0x10052276: jmp 0x1006f26e */
L_1005228E:
    edi = POP32_VAL(esp); /* 0x1005228E: pop edi */
    esi = POP32_VAL(esp); /* 0x1005228F: pop esi */
    goto L_1006F26E; /* 0x10052290: jmp 0x1006f26e */
L_10052295:
    ecx = esi; /* 0x10052295: mov ecx, esi */
    RECOMP_CALL(sub_10014905); /* 0x10052297: call 0x10014905 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005229C: mov ecx, eax */
    RECOMP_CALL(sub_1006F26E); /* 0x1005229E: call 0x1006f26e */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10014B30; /* 0x100522A3: jmp 0x10014b30 */
L_1006F26E:
    PUSH32(esp, esi); /* 0x1006F26E: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006F26F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx + 0x10; /* 0x1006F271: lea edx, [ecx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1006F274: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F275: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x1006F277: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1006F27B: pop esi */
    /* test eax, eax */ /* 0x1006F27C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F28E; /* 0x1006F27E: jne 0x1006f28e */
L_1006F280:
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0xFFFFFFFEu; /* 0x1006F280: and dword ptr [ecx + 8], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ecx); /* 0x1006F284: mov ecx, dword ptr [ecx] */
    edx = MEM32(ecx); /* 0x1006F286: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x1006F288: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x1006F28B: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F28D: ret  */
L_1006F28E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006F28E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F290: ret  */
    RECOMP_REGS_OUT();
}

void sub_100148E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100148E5u);

L_100148E5:
    edx = ecx + 0x24; /* 0x100148E5: lea edx, [ecx + 0x24] */
    /* cmp MEM32(edx), 8 */ /* 0x100148E8: cmp dword ptr [edx], 8 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10014AF1; /* 0x100148EB: jl 0x10014af1 */
L_100148F1:
    PUSH32(esp, 0xFFFFFFF8u); /* 0x100148F1: push -8 */
    eax = POP32_VAL(esp); /* 0x100148F3: pop eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edx), _sum = MEM32(edx) + eax; eax = _old; MEM32(edx) = _sum; } /* 0x100148F4: lock xadd dword ptr [edx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFBu);
    eax = eax & 0xFFFFFFFBu; /* 0x100148F8: and eax, 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xBu */ /* 0x100148FB: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052273; /* 0x100148FE: je 0x10052273 */
L_10014904:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014904: ret  */
L_10014AF1:
    eax = MEM32(edx); /* 0x10014AF1: mov eax, dword ptr [edx] */
    /* test LO8(eax), 2 */ /* 0x10014AF3: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10014AFC; /* 0x10014AF5: jne 0x10014afc */
L_10014AF7:
    RECOMP_BACKEDGE();
    goto L_10014904; /* 0x10014AF7: jmp 0x10014904 */
L_10014AFC:
    PUSH32(esp, esi); /* 0x10014AFC: push esi */
    esi = ecx; /* 0x10014AFD: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10014AFF: push edi */
    edi = MEM32(esi + 0x1C); /* 0x10014B00: mov edi, dword ptr [esi + 0x1c] */
    ecx = MEM32(edi + 0x4); /* 0x10014B03: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x10014B06: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x1C) = ecx; /* 0x10014B09: mov dword ptr [esi + 0x1c], ecx */
    /* test ecx, ecx */ /* 0x10014B0C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005228E; /* 0x10014B0E: jne 0x1005228e */
L_10014B14:
    PUSH32(esp, ebx); /* 0x10014B14: push ebx */
    PUSH32(esp, 0xFFFFFFFCu); /* 0x10014B15: push -4 */
    ebx = POP32_VAL(esp); /* 0x10014B17: pop ebx */
    edx = esi + 0x24; /* 0x10014B18: lea edx, [esi + 0x24] */
    eax = MEM32(edx); /* 0x10014B1B: mov eax, dword ptr [edx] */
L_10014B1D:
    ecx = eax; /* 0x10014B1D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x10014B1F: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x10014B21: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10014B1D; /* 0x10014B25: jne 0x10014b1d */
L_10014B27:
    ebx = POP32_VAL(esp); /* 0x10014B27: pop ebx */
    /* test LO8(eax), 4 */ /* 0x10014B28: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10052295; /* 0x10014B2A: jne 0x10052295 */
L_10014B30:
    PUSH32(esp, edi); /* 0x10014B30: push edi */
    ecx = esi; /* 0x10014B31: mov ecx, esi */
    RECOMP_CALL(sub_10014B3B); /* 0x10014B33: call 0x10014b3b */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10014B38: pop edi */
    esi = POP32_VAL(esp); /* 0x10014B39: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014B3A: ret  */
L_10052273:
    ecx = MEM32(ecx + 0x1C); /* 0x10052273: mov ecx, dword ptr [ecx + 0x1c] */
    goto L_1006F26E; /* 0x10052276: jmp 0x1006f26e */
L_1005228E:
    edi = POP32_VAL(esp); /* 0x1005228E: pop edi */
    esi = POP32_VAL(esp); /* 0x1005228F: pop esi */
    goto L_1006F26E; /* 0x10052290: jmp 0x1006f26e */
L_10052295:
    ecx = esi; /* 0x10052295: mov ecx, esi */
    RECOMP_CALL(sub_10014905); /* 0x10052297: call 0x10014905 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005229C: mov ecx, eax */
    RECOMP_CALL(sub_1006F26E); /* 0x1005229E: call 0x1006f26e */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10014B30; /* 0x100522A3: jmp 0x10014b30 */
L_1006F26E:
    PUSH32(esp, esi); /* 0x1006F26E: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006F26F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx + 0x10; /* 0x1006F271: lea edx, [ecx + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1006F274: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F275: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x1006F277: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1006F27B: pop esi */
    /* test eax, eax */ /* 0x1006F27C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006F28E; /* 0x1006F27E: jne 0x1006f28e */
L_1006F280:
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0xFFFFFFFEu; /* 0x1006F280: and dword ptr [ecx + 8], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ecx); /* 0x1006F284: mov ecx, dword ptr [ecx] */
    edx = MEM32(ecx); /* 0x1006F286: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x1006F288: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x1006F28B: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F28D: ret  */
L_1006F28E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1006F28E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F290: ret  */
    RECOMP_REGS_OUT();
}

void sub_10014905(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014905u);

L_10014905:
    PUSH32(esp, 4); /* 0x10014905: push 4 */
    edx = ecx + 0x24; /* 0x10014907: lea edx, [ecx + 0x24] */
    eax = POP32_VAL(esp); /* 0x1001490A: pop eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edx), _sum = MEM32(edx) + eax; eax = _old; MEM32(edx) = _sum; } /* 0x1001490B: lock xadd dword ptr [edx], eax */
    _flag_k = FK_ADD;
    /* test LO8(eax), 1 */ /* 0x1001490F: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005227B; /* 0x10014911: jne 0x1005227b */
L_10014917:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10014917: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x10014919: add ecx, 0x18 */
    _flag_k = FK_ADD;
    { uint32_t _tmp = MEM32(ecx); /* 0x1001491C: xchg dword ptr [ecx], eax */
      MEM32(ecx) = eax;
      eax = _tmp; }
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001491E: ret  */
L_1005227B:
    /* test LO8(eax), 2 */ /* 0x1005227B: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10014917; /* 0x1005227D: jne 0x10014917 */
L_10052283:
    PUSH32(esp, 2); /* 0x10052283: push 2 */
    eax = POP32_VAL(esp); /* 0x10052285: pop eax */
    _flag_a = (uint32_t)((MEM32(edx) | eax)); _flag_b = (uint32_t)((MEM32(edx) | eax));
    MEM32(edx) = MEM32(edx) | eax; /* 0x10052286: lock or dword ptr [edx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10014917; /* 0x10052289: jmp 0x10014917 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001491F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001491Fu);

L_1001491F:
    PUSH32(esp, ebp); /* 0x1001491F: push ebp */
    ebp = esp; /* 0x10014920: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10014922: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x10014925: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10014928: push ebx */
    PUSH32(esp, esi); /* 0x10014929: push esi */
    PUSH32(esp, edi); /* 0x1001492A: push edi */
    edi = ecx; /* 0x1001492B: mov edi, ecx */
    ecx = esp + 0x20; /* 0x1001492D: lea ecx, [esp + 0x20] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10014931: push -1 */
    RECOMP_CALL(sub_100148A0); /* 0x10014933: call 0x100148a0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x20); /* 0x10014938: mov eax, dword ptr [esp + 0x20] */
    /* cmp eax, MEM32(edi) */ /* 0x1001493C: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052223; /* 0x1001493E: je 0x10052223 */
L_10014944:
    esi = esp + 0x20; /* 0x10014944: lea esi, [esp + 0x20] */
    eax = edi + 0x18; /* 0x10014948: lea eax, [edi + 0x18] */
    { uint32_t _tmp = MEM32(eax); /* 0x1001494B: xchg dword ptr [eax], esi */
      MEM32(eax) = esi;
      esi = _tmp; }
    /* test esi, esi */ /* 0x1001494D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100521D9; /* 0x1001494F: jne 0x100521d9 */
L_10014955:
    PUSH32(esp, 4); /* 0x10014955: push 4 */
    ebx = POP32_VAL(esp); /* 0x10014957: pop ebx */
    edx = edi + 0x24; /* 0x10014958: lea edx, [edi + 0x24] */
    eax = MEM32(edx); /* 0x1001495B: mov eax, dword ptr [edx] */
L_1001495D:
    ecx = eax; /* 0x1001495D: mov ecx, eax */
    _flag_a = (uint32_t)((ecx | ebx)); _flag_b = (uint32_t)((ecx | ebx));
    ecx = ecx | ebx; /* 0x1001495F: or ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x10014961: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001495D; /* 0x10014965: jne 0x1001495d */
L_10014967:
    /* test LO8(eax), 3 */ /* 0x10014967: test al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100521FA; /* 0x10014969: jne 0x100521fa */
L_1001496F:
    ecx = edi; /* 0x1001496F: mov ecx, edi */
    RECOMP_CALL(sub_10014905); /* 0x10014971: call 0x10014905 */
    RECOMP_FLAGS_IN();
    ecx = esp + 0x20; /* 0x10014976: lea ecx, [esp + 0x20] */
    /* cmp eax, ecx */ /* 0x1001497A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100521D0; /* 0x1001497C: jne 0x100521d0 */
L_10014982:
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) & 0xFFFFFFFEu; /* 0x10014982: and dword ptr [eax + 8], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
L_10014986:
    edi = POP32_VAL(esp); /* 0x10014986: pop edi */
    esi = POP32_VAL(esp); /* 0x10014987: pop esi */
    ebx = POP32_VAL(esp); /* 0x10014988: pop ebx */
    esp = ebp; /* 0x10014989: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001498B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001498C: ret  */
L_100521D0:
    ecx = eax; /* 0x100521D0: mov ecx, eax */
    RECOMP_CALL(sub_1006F26E); /* 0x100521D2: call 0x1006f26e */
    RECOMP_FLAGS_IN();
    goto L_100521FA; /* 0x100521D7: jmp 0x100521fa */
L_100521D9:
    eax = MEM32(esi + 0x8); /* 0x100521D9: mov eax, dword ptr [esi + 8] */
    /* test LO8(eax), 1 */ /* 0x100521DC: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100521FA; /* 0x100521DE: je 0x100521fa */
L_100521E0:
    eax = MEM32(esi + 0x8); /* 0x100521E0: mov eax, dword ptr [esi + 8] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x100521E3: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x100521E3: shr eax, 2 */
    /* test LO8(eax), 1 */ /* 0x100521E6: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100521F5; /* 0x100521E8: jne 0x100521f5 */
L_100521EA:
    ecx = MEM32(esi); /* 0x100521EA: mov ecx, dword ptr [esi] */
    eax = MEM32(ecx); /* 0x100521EC: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x100521EE: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100521F1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100521FA; /* 0x100521F3: je 0x100521fa */
L_100521F5:
    _flag_a = (uint32_t)((MEM32(esp + 0x28) | 4)); _flag_b = (uint32_t)((MEM32(esp + 0x28) | 4));
    MEM32(esp + 0x28) = MEM32(esp + 0x28) | 4; /* 0x100521F5: or dword ptr [esp + 0x28], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100521FA:
    PUSH32(esp, 0); /* 0x100521FA: push 0 */
    ecx = esp + 0x24; /* 0x100521FC: lea ecx, [esp + 0x24] */
    RECOMP_CALL(sub_1006F1DF); /* 0x10052200: call 0x1006f1df */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x10052205: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014986; /* 0x10052207: je 0x10014986 */
L_1005220D:
    PUSH32(esp, 8); /* 0x1005220D: push 8 */
    edx = POP32_VAL(esp); /* 0x1005220F: pop edx */
    eax = edi + 0x24; /* 0x10052210: lea eax, [edi + 0x24] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x10052213: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x10052217: mov ecx, esi */
    RECOMP_CALL(sub_1006F26E); /* 0x10052219: call 0x1006f26e */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10014986; /* 0x1005221E: jmp 0x10014986 */
L_10052223:
    eax = esp + 0x10; /* 0x10052223: lea eax, [esp + 0x10] */
    MEM32(esp + 0x10) = 0x10052254u; /* 0x10052227: mov dword ptr [esp + 0x10], 0x10052254 */
    PUSH32(esp, eax); /* 0x1005222F: push eax */
    ecx = esp + 0x18; /* 0x10052230: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_1009DD30); /* 0x10052234: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCFBCu); /* 0x10052239: push 0x100dcfbc */
    eax = esp + 0x18; /* 0x1005223E: lea eax, [esp + 0x18] */
    MEM32(esp + 0x18) = 0x100677D4u; /* 0x10052242: mov dword ptr [esp + 0x18], 0x100677d4 */
    PUSH32(esp, eax); /* 0x1005224A: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1005224B: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10052250u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001498D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001498Du);

L_1001498D:
    PUSH32(esp, ebp); /* 0x1001498D: push ebp */
    ebp = esp; /* 0x1001498E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10014990: push esi */
    esi = ecx; /* 0x10014991: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x10014993: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi) = ecx; /* 0x10014996: mov dword ptr [esi], ecx */
    RECOMP_CALL(sub_1001491F); /* 0x10014998: call 0x1001491f */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1001499D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1001499F: pop esi */
    ebp = POP32_VAL(esp); /* 0x100149A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100149A1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100149A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100149A4u);

L_100149A4:
    PUSH32(esp, eax); /* 0x100149A4: push eax */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x100149A5: push dword ptr fs:[0] */
    eax = esp + 0xC; /* 0x100149AC: lea eax, [esp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(esp + 0xC); /* 0x100149B0: sub esp, dword ptr [esp + 0xc] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100149B4: push ebx */
    PUSH32(esp, esi); /* 0x100149B5: push esi */
    PUSH32(esp, edi); /* 0x100149B6: push edi */
    MEM32(eax) = ebp; /* 0x100149B7: mov dword ptr [eax], ebp */
    ebp = eax; /* 0x100149B9: mov ebp, eax */
    eax = MEM32(0x100DF7B8); /* 0x100149BB: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100149C0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100149C2: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100149C3: push dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x100149C6: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebp + (-0xC); /* 0x100149CD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x100149D0: mov dword ptr fs:[0], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100149D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100149D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100149D7u);

L_100149D7:
    ecx = MEM32(ebp + (-0xC)); /* 0x100149D7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x100149DA: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x100149E1: pop ecx */
    edi = POP32_VAL(esp); /* 0x100149E2: pop edi */
    edi = POP32_VAL(esp); /* 0x100149E3: pop edi */
    esi = POP32_VAL(esp); /* 0x100149E4: pop esi */
    ebx = POP32_VAL(esp); /* 0x100149E5: pop ebx */
    esp = ebp; /* 0x100149E6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100149E8: pop ebp */
    PUSH32(esp, ecx); /* 0x100149E9: push ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100149EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100149EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100149EBu);

L_100149EB:
    PUSH32(esp, ebp); /* 0x100149EB: push ebp */
    ebp = esp; /* 0x100149EC: mov ebp, esp */
    PUSH32(esp, edi); /* 0x100149EE: push edi */
    edi = ecx; /* 0x100149EF: mov edi, ecx */
    eax = MEM32(edi + 0x8); /* 0x100149F1: mov eax, dword ptr [edi + 8] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x100149F4: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x100149F4: shr eax, 1 */
    /* test LO8(eax), 1 */ /* 0x100149F6: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10014A1F; /* 0x100149F8: jne 0x10014a1f */
L_100149FA:
    ecx = MEM32(ebp + 0x8); /* 0x100149FA: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x8); /* 0x100149FD: mov eax, dword ptr [ecx + 8] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x10014A00: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x10014A00: shr eax, 1 */
    /* test LO8(eax), 1 */ /* 0x10014A02: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014A1F; /* 0x10014A04: je 0x10014a1f */
L_10014A06:
    PUSH32(esp, esi); /* 0x10014A06: push esi */
    esi = MEM32(ecx + 0x8); /* 0x10014A07: mov esi, dword ptr [ecx + 8] */
    eax = MEM32(ecx + 0x8); /* 0x10014A0A: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x10014A0D: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFAu);
    esi = esi & 0xFFFFFFFAu; /* 0x10014A10: and esi, 0xfffffffa */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 1 */ /* 0x10014A13: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100521A5; /* 0x10014A15: jne 0x100521a5 */
L_10014A1B:
    _flag_a = (uint32_t)((MEM32(edi + 0x8) | esi)); _flag_b = (uint32_t)((MEM32(edi + 0x8) | esi));
    MEM32(edi + 0x8) = MEM32(edi + 0x8) | esi; /* 0x10014A1B: or dword ptr [edi + 8], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10014A1E: pop esi */
L_10014A1F:
    edi = POP32_VAL(esp); /* 0x10014A1F: pop edi */
    ebp = POP32_VAL(esp); /* 0x10014A20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10014A21: ret 4 */
L_100521A5:
    eax = MEM32(ecx + 0x8); /* 0x100521A5: mov eax, dword ptr [ecx + 8] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x100521A8: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x100521A8: shr eax, 2 */
    /* test LO8(eax), 1 */ /* 0x100521AB: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100521C8; /* 0x100521AD: jne 0x100521c8 */
L_100521AF:
    /* cmp MEM32(ecx + 0xC), 0 */ /* 0x100521AF: cmp dword ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10014A1B; /* 0x100521B3: jne 0x10014a1b */
L_100521B9:
    ecx = MEM32(ecx); /* 0x100521B9: mov ecx, dword ptr [ecx] */
    eax = MEM32(ecx); /* 0x100521BB: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x100521BD: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100521C0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014A1B; /* 0x100521C2: je 0x10014a1b */
L_100521C8:
    _flag_a = (uint32_t)((esi | 4)); _flag_b = (uint32_t)((esi | 4));
    esi = esi | 4; /* 0x100521C8: or esi, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10014A1B; /* 0x100521CB: jmp 0x10014a1b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014A24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014A24u);

L_10014A24:
    PUSH32(esp, ebp); /* 0x10014A24: push ebp */
    ebp = esp; /* 0x10014A25: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10014A27: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10014A2A: push ebx */
    PUSH32(esp, esi); /* 0x10014A2B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10014A2C: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10014A2F: push edi */
    edi = ecx; /* 0x10014A30: mov edi, ecx */
    eax = MEM32(esi); /* 0x10014A32: mov eax, dword ptr [esi] */
    /* cmp eax, MEM32(edi) */ /* 0x10014A34: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052313; /* 0x10014A36: je 0x10052313 */
L_10014A3C:
    ebx = esi; /* 0x10014A3C: mov ebx, esi */
    eax = edi + 0x20; /* 0x10014A3E: lea eax, [edi + 0x20] */
    { uint32_t _tmp = MEM32(eax); /* 0x10014A41: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
    ecx = esi; /* 0x10014A43: mov ecx, esi */
    /* test ebx, ebx */ /* 0x10014A45: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100522F3; /* 0x10014A47: jne 0x100522f3 */
L_10014A4D:
    PUSH32(esp, edi); /* 0x10014A4D: push edi */
    RECOMP_CALL(sub_100149EB); /* 0x10014A4E: call 0x100149eb */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x1C) = esi; /* 0x10014A53: mov dword ptr [edi + 0x1c], esi */
    edx = edi + 0x24; /* 0x10014A56: lea edx, [edi + 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10014A59: inc ebx */
    _flag_k = FK_INC;
    eax = MEM32(edx); /* 0x10014A5A: mov eax, dword ptr [edx] */
L_10014A5C:
    ecx = eax; /* 0x10014A5C: mov ecx, eax */
    _flag_a = (uint32_t)((ecx | ebx)); _flag_b = (uint32_t)((ecx | ebx));
    ecx = ecx | ebx; /* 0x10014A5E: or ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x10014A60: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10014A5C; /* 0x10014A64: jne 0x10014a5c */
L_10014A66:
    /* test LO8(eax), 4 */ /* 0x10014A66: test al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100522FC; /* 0x10014A68: jne 0x100522fc */
L_10014A6E:
    PUSH32(esp, 2); /* 0x10014A6E: push 2 */
    ebx = POP32_VAL(esp); /* 0x10014A70: pop ebx */
    eax = MEM32(edx); /* 0x10014A71: mov eax, dword ptr [edx] */
L_10014A73:
    ecx = eax; /* 0x10014A73: mov ecx, eax */
    _flag_a = (uint32_t)((ecx | ebx)); _flag_b = (uint32_t)((ecx | ebx));
    ecx = ecx | ebx; /* 0x10014A75: or ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x10014A77: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10014A73; /* 0x10014A7B: jne 0x10014a73 */
L_10014A7D:
    /* cmp eax, 8 */ /* 0x10014A7D: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100522FC; /* 0x10014A80: jge 0x100522fc */
L_10014A86:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0xFFFFFFFEu; /* 0x10014A86: and dword ptr [esi + 8], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
L_10014A8A:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x10014A8A: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10014AA3; /* 0x10014A8E: je 0x10014aa3 */
L_10014A90:
    eax = MEM32(esi + 0x8); /* 0x10014A90: mov eax, dword ptr [esi + 8] */
    MEM32(edi + 0x8) = eax; /* 0x10014A93: mov dword ptr [edi + 8], eax */
    eax = MEM32(esi + 0x4); /* 0x10014A96: mov eax, dword ptr [esi + 4] */
    MEM32(edi + 0x4) = eax; /* 0x10014A99: mov dword ptr [edi + 4], eax */
    eax = MEM32(esi); /* 0x10014A9C: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x10014A9E: mov dword ptr [edi], eax */
    MEM32(edi + 0x1C) = esi; /* 0x10014AA0: mov dword ptr [edi + 0x1c], esi */
L_10014AA3:
    edi = POP32_VAL(esp); /* 0x10014AA3: pop edi */
    esi = POP32_VAL(esp); /* 0x10014AA4: pop esi */
    ebx = POP32_VAL(esp); /* 0x10014AA5: pop ebx */
    esp = ebp; /* 0x10014AA6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10014AA8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10014AA9: ret 8 */
L_100522F3:
    PUSH32(esp, ebx); /* 0x100522F3: push ebx */
    RECOMP_CALL(sub_100149EB); /* 0x100522F4: call 0x100149eb */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x4) = esi; /* 0x100522F9: mov dword ptr [ebx + 4], esi */
L_100522FC:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x100522FC: push dword ptr [edi + 8] */
    ecx = esi; /* 0x100522FF: mov ecx, esi */
    RECOMP_CALL(sub_1006F1DF); /* 0x10052301: call 0x1006f1df */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x10052306: push edi */
    ecx = esi; /* 0x10052307: mov ecx, esi */
    RECOMP_CALL(sub_100149EB); /* 0x10052309: call 0x100149eb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10014A8A; /* 0x1005230E: jmp 0x10014a8a */
L_10052313:
    eax = ebp + 0x8; /* 0x10052313: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x100678E8u; /* 0x10052316: mov dword ptr [ebp + 8], 0x100678e8 */
    PUSH32(esp, eax); /* 0x1005231D: push eax */
    ecx = ebp + (-0xC); /* 0x1005231E: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD30); /* 0x10052321: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCFBCu); /* 0x10052326: push 0x100dcfbc */
    eax = ebp + (-0xC); /* 0x1005232B: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x100677D4u; /* 0x1005232E: mov dword ptr [ebp - 0xc], 0x100677d4 */
    PUSH32(esp, eax); /* 0x10052335: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10052336: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005233Bu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014AAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014AACu);

L_10014AAC:
    PUSH32(esp, 4); /* 0x10014AAC: push 4 */
    eax = 0x100DB3B4u; /* 0x10014AAE: mov eax, 0x100db3b4 */
    RECOMP_CALL(sub_100149A4); /* 0x10014AB3: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x10014AB8: mov edi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x10014ABA: mov eax, dword ptr [ebp + 8] */
    esi = edi + 0x4; /* 0x10014ABD: lea esi, [edi + 4] */
    MEM32(edi) = eax; /* 0x10014AC0: mov dword ptr [edi], eax */
    MEM32(ebp + 0x8) = esi; /* 0x10014AC2: mov dword ptr [ebp + 8], esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x10014AC5: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10014AC8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x10014ACC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014AD9; /* 0x10014ACE: je 0x10014ad9 */
L_10014AD0:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10014AD0: push -1 */
    ecx = esi; /* 0x10014AD2: mov ecx, esi */
    RECOMP_CALL(sub_100148A0); /* 0x10014AD4: call 0x100148a0 */
    RECOMP_FLAGS_IN();
L_10014AD9:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x10014AD9: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi); /* 0x10014ADD: mov ecx, dword ptr [edi] */
    PUSH32(esp, 1); /* 0x10014ADF: push 1 */
    PUSH32(esp, esi); /* 0x10014AE1: push esi */
    RECOMP_CALL(sub_10014A24); /* 0x10014AE2: call 0x10014a24 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x10014AE7: mov eax, edi */
    RECOMP_CALL(sub_100149D7); /* 0x10014AE9: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10014AEE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10014B3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014B3Bu);

L_10014B3B:
    PUSH32(esp, ebp); /* 0x10014B3B: push ebp */
    ebp = esp; /* 0x10014B3C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10014B3E: push ecx */
    PUSH32(esp, esi); /* 0x10014B3F: push esi */
    PUSH32(esp, edi); /* 0x10014B40: push edi */
    edi = ecx; /* 0x10014B41: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10014B43: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x10014B45: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x10014B48: mov eax, ecx */
    edx = edi + 0x20; /* 0x10014B4A: lea edx, [edi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x10014B4D: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x10014B51: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100522A8; /* 0x10014B53: jne 0x100522a8 */
L_10014B59:
    edi = POP32_VAL(esp); /* 0x10014B59: pop edi */
    esi = POP32_VAL(esp); /* 0x10014B5A: pop esi */
    ecx = POP32_VAL(esp); /* 0x10014B5B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10014B5C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10014B5D: ret 4 */
L_100522A8:
    RECOMP_CALL(sub_1006F291); /* 0x100522A8: call 0x1006f291 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x100522AD: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100522AF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x1C) = edx; /* 0x100522B1: mov dword ptr [edi + 0x1c], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100522B4: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x24u; /* 0x100522B5: add edi, 0x24 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x100522B8: mov eax, dword ptr [edi] */
L_100522BA:
    ecx = eax; /* 0x100522BA: mov ecx, eax */
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x100522BC: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x100522BE: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100522BA; /* 0x100522C2: jne 0x100522ba */
L_100522C4:
    ecx = eax; /* 0x100522C4: mov ecx, eax */
    /* test LO8(ecx), 4 */ /* 0x100522C6: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10014B59; /* 0x100522C9: jne 0x10014b59 */
L_100522CF:
    PUSH32(esp, 2); /* 0x100522CF: push 2 */
    esi = POP32_VAL(esp); /* 0x100522D1: pop esi */
    eax = MEM32(edi); /* 0x100522D2: mov eax, dword ptr [edi] */
L_100522D4:
    ecx = eax; /* 0x100522D4: mov ecx, eax */
    _flag_a = (uint32_t)((ecx | esi)); _flag_b = (uint32_t)((ecx | esi));
    ecx = ecx | esi; /* 0x100522D6: or ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x100522D8: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100522D4; /* 0x100522DC: jne 0x100522d4 */
L_100522DE:
    /* cmp eax, 8 */ /* 0x100522DE: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_10014B59; /* 0x100522E1: jge 0x10014b59 */
L_100522E7:
    ecx = edx; /* 0x100522E7: mov ecx, edx */
    RECOMP_CALL(sub_1006F26E); /* 0x100522E9: call 0x1006f26e */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10014B59; /* 0x100522EE: jmp 0x10014b59 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014B60u);

L_10014B60:
    PUSH32(esp, ebp); /* 0x10014B60: push ebp */
    ebp = esp; /* 0x10014B61: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10014B63: mov eax, dword ptr [ebp + 8] */
    ecx = 0x100DE000u; /* 0x10014B66: mov ecx, 0x100de000 */
    /* cmp eax, ecx */ /* 0x10014B6B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100551DE; /* 0x10014B6D: jb 0x100551de */
L_10014B73:
    /* cmp eax, 0x100DE260u */ /* 0x10014B73: cmp eax, 0x100de260 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100DE260u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100551DE; /* 0x10014B78: ja 0x100551de */
L_10014B7E:
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0xFFFF7FFFu);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0xFFFF7FFFu; /* 0x10014B7E: and dword ptr [eax + 0xc], 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10014B85: sub eax, ecx */
    _flag_k = FK_CMP;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10014B87: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x10014B8A: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10014B8D: push eax */
    RECOMP_CALL(sub_1000EDFC); /* 0x10014B8E: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014B93: pop ecx */
    ebp = POP32_VAL(esp); /* 0x10014B94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014B95: ret  */
L_100551DE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x100551DE: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100551E1: push eax */
    RECOMP_ICALL(MEM32(0x100E503C)); /* 0x100551E2: call dword ptr [0x100e503c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100551E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100551E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_10014B96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014B96u);

L_10014B96:
    PUSH32(esp, ebp); /* 0x10014B96: push ebp */
    ebp = esp; /* 0x10014B97: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10014B99: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10014B9A: mov esi, dword ptr [ebp + 8] */
    ecx = 0x100DE000u; /* 0x10014B9D: mov ecx, 0x100de000 */
    /* cmp esi, ecx */ /* 0x10014BA2: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100551C0; /* 0x10014BA4: jb 0x100551c0 */
L_10014BAA:
    /* cmp esi, 0x100DE260u */ /* 0x10014BAA: cmp esi, 0x100de260 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x100DE260u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100551C0; /* 0x10014BB0: ja 0x100551c0 */
L_10014BB6:
    eax = esi; /* 0x10014BB6: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10014BB8: sub eax, ecx */
    _flag_k = FK_CMP;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10014BBA: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x10014BBD: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10014BC0: push eax */
    RECOMP_CALL(sub_1000EDD7); /* 0x10014BC1: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0x8000u)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0x8000u));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x8000u; /* 0x10014BC6: or dword ptr [esi + 0xc], 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10014BCD: pop ecx */
L_10014BCE:
    esi = POP32_VAL(esp); /* 0x10014BCE: pop esi */
    ebp = POP32_VAL(esp); /* 0x10014BCF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014BD0: ret  */
L_100551C0:
    eax = esi + 0x20; /* 0x100551C0: lea eax, [esi + 0x20] */
    PUSH32(esp, eax); /* 0x100551C3: push eax */
    RECOMP_ICALL(MEM32(0x100E5038)); /* 0x100551C4: call dword ptr [0x100e5038] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10014BCE; /* 0x100551CA: jmp 0x10014bce */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014BD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014BD1u);

L_10014BD1:
    PUSH32(esp, ebp); /* 0x10014BD1: push ebp */
    ebp = esp; /* 0x10014BD2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10014BD4: push ecx */
    PUSH32(esp, esi); /* 0x10014BD5: push esi */
    esi = MEM32(0x100DFDE4); /* 0x10014BD6: mov esi, dword ptr [0x100dfde4] */
    /* test esi, esi */ /* 0x10014BDC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1002C185; /* 0x10014BDE: js 0x1002c185 */
L_10014BE4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10014BE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x10014BE6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10014BE8: pop esi */
    SET_LO8(eax, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x10014BE9: setg al */
    esp = ebp; /* 0x10014BEC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10014BEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014BEF: ret  */
L_1002C185:
    eax = MEM32(0x100DFA74); /* 0x1002C185: mov eax, dword ptr [0x100dfa74] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1002C18A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x1002C18C: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x1002C192: mov dword ptr [ebp - 4], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002C1A7; /* 0x1002C195: je 0x1002c1a7 */
L_1002C197:
    PUSH32(esp, esi); /* 0x1002C197: push esi */
    ecx = ebp + (-0x4); /* 0x1002C198: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1002C19B: push ecx */
    RECOMP_ICALL(eax); /* 0x1002C19C: call eax */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x7Au */ /* 0x1002C19E: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005F1A8; /* 0x1002C1A1: je 0x1005f1a8 */
L_1002C1A7:
    MEM32(0x100DFDE4) = esi; /* 0x1002C1A7: mov dword ptr [0x100dfde4], esi */
    RECOMP_BACKEDGE();
    goto L_10014BE4; /* 0x1002C1AD: jmp 0x10014be4 */
L_1005F1A8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005F1A8: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1002C1A7; /* 0x1005F1A9: jmp 0x1002c1a7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014BF0u);

L_10014BF0:
    PUSH32(esp, ebp); /* 0x10014BF0: push ebp */
    ebp = esp; /* 0x10014BF1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10014BF3: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x10014BF4: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10014BF7: push esi */
    PUSH32(esp, edi); /* 0x10014BF8: push edi */
    /* test ebx, ebx */ /* 0x10014BF9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054381; /* 0x10014BFB: je 0x10054381 */
L_10014C01:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10014C01: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebx), LO16(eax) */ /* 0x10014C03: cmp word ptr [ebx], ax */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054381; /* 0x10014C06: je 0x10054381 */
L_10014C0C:
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x10014C0C: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100542DB; /* 0x10014C0F: je 0x100542db */
L_10014C15:
    esi = MEM32(ebp + 0x10); /* 0x10014C15: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x10014C18: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054340; /* 0x10014C1A: je 0x10054340 */
L_10014C20:
    edi = MEM32(ebp + 0x8); /* 0x10014C20: mov edi, dword ptr [ebp + 8] */
L_10014C23:
    eax = ebp + 0xC; /* 0x10014C23: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10014C26: push eax */
    PUSH32(esp, edi); /* 0x10014C27: push edi */
    PUSH32(esp, esi); /* 0x10014C28: push esi */
    PUSH32(esp, ebx); /* 0x10014C29: push ebx */
    RECOMP_ICALL(MEM32(0x100E50B4)); /* 0x10014C2A: call dword ptr [0x100e50b4] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x10014C30: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10054352; /* 0x10014C32: jae 0x10054352 */
L_10014C38:
    /* test eax, eax */ /* 0x10014C38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005436C; /* 0x10014C3A: je 0x1005436c */
L_10014C40:
    eax = edi; /* 0x10014C40: mov eax, edi */
L_10014C42:
    edi = POP32_VAL(esp); /* 0x10014C42: pop edi */
    esi = POP32_VAL(esp); /* 0x10014C43: pop esi */
    ebx = POP32_VAL(esp); /* 0x10014C44: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10014C45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014C46: ret  */
L_100542DB:
    PUSH32(esp, eax); /* 0x100542DB: push eax */
    PUSH32(esp, eax); /* 0x100542DC: push eax */
    PUSH32(esp, eax); /* 0x100542DD: push eax */
    PUSH32(esp, ebx); /* 0x100542DE: push ebx */
    RECOMP_ICALL(MEM32(0x100E50B4)); /* 0x100542DF: call dword ptr [0x100e50b4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100542E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100542FC; /* 0x100542E7: jne 0x100542fc */
L_100542E9:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100542E9: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100542EF: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x100542F0: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100542F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005438D; /* 0x100542F7: jmp 0x1005438d */
L_100542FC:
    esi = MEM32(ebp + 0x10); /* 0x100542FC: mov esi, dword ptr [ebp + 0x10] */
    /* cmp esi, eax */ /* 0x100542FF: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10054305; /* 0x10054301: ja 0x10054305 */
L_10054303:
    esi = eax; /* 0x10054303: mov esi, eax */
L_10054305:
    /* cmp esi, 0x7FFFFFFFu */ /* 0x10054305: cmp esi, 0x7fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005431F; /* 0x1005430B: jbe 0x1005431f */
L_1005430D:
    RECOMP_CALL(sub_1001177D); /* 0x1005430D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10054312: mov dword ptr [eax], 0x16 */
L_10054318:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054318: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10014C42; /* 0x1005431A: jmp 0x10014c42 */
L_1005431F:
    PUSH32(esp, 2); /* 0x1005431F: push 2 */
    PUSH32(esp, esi); /* 0x10054321: push esi */
    RECOMP_CALL(sub_1001CBFF); /* 0x10054322: call 0x1001cbff */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10054327: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x10054329: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005432A: pop ecx */
    /* test edi, edi */ /* 0x1005432B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10014C23; /* 0x1005432D: jne 0x10014c23 */
L_10054333:
    RECOMP_CALL(sub_1001177D); /* 0x10054333: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x10054338: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_10054318; /* 0x1005433E: jmp 0x10054318 */
L_10054340:
    RECOMP_CALL(sub_1001177D); /* 0x10054340: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10054345: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005434B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10054318; /* 0x10054350: jmp 0x10054318 */
L_10054352:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x10054352: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005435F; /* 0x10054356: jne 0x1005435f */
L_10054358:
    PUSH32(esp, edi); /* 0x10054358: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10054359: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005435E: pop ecx */
L_1005435F:
    RECOMP_CALL(sub_1001177D); /* 0x1005435F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x10054364: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_10054318; /* 0x1005436A: jmp 0x10054318 */
L_1005436C:
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1005436C: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100542E9; /* 0x1005436F: jne 0x100542e9 */
L_10054375:
    PUSH32(esp, edi); /* 0x10054375: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10054376: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005437B: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100542E9; /* 0x1005437C: jmp 0x100542e9 */
L_10054381:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10054381: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10054384: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002BE42); /* 0x10054387: call 0x1002be42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005438C: pop ecx */
L_1005438D:
    ecx = POP32_VAL(esp); /* 0x1005438D: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10014C42; /* 0x1005438E: jmp 0x10014c42 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014C47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014C47u);

    goto L_10014C47;
L_100123CC:
    eax = MEM32(edi + 0x8); /* 0x100123CC: mov eax, dword ptr [edi + 8] */
    MEM32(edi) = eax; /* 0x100123CF: mov dword ptr [edi], eax */
    goto L_10014C89; /* 0x100123D1: jmp 0x10014c89 */
L_10014C47:
    PUSH32(esp, ebp); /* 0x10014C47: push ebp */
    ebp = esp; /* 0x10014C48: mov ebp, esp */
    PUSH32(esp, edi); /* 0x10014C4A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10014C4B: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x10014C4E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10054FFE; /* 0x10014C50: je 0x10054ffe */
L_10014C56:
    eax = MEM32(edi + 0xC); /* 0x10014C56: mov eax, dword ptr [edi + 0xc] */
    /* test LO8(eax), 0x83u */ /* 0x10014C59: test al, 0x83 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014D23; /* 0x10014C5B: je 0x10014d23 */
L_10014C61:
    /* test LO8(eax), 0x40u */ /* 0x10014C61: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10014D23; /* 0x10014C63: jne 0x10014d23 */
L_10014C69:
    /* test LO8(eax), 2 */ /* 0x10014C69: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10055013; /* 0x10014C6B: jne 0x10055013 */
L_10014C71:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x10014C71: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xC) = eax; /* 0x10014C74: mov dword ptr [edi + 0xc], eax */
    /* test eax, 0x10Cu */ /* 0x10014C77: test eax, 0x10c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10Cu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100123CC; /* 0x10014C7C: jne 0x100123cc */
L_10014C82:
    PUSH32(esp, edi); /* 0x10014C82: push edi */
    RECOMP_CALL(sub_100158BC); /* 0x10014C83: call 0x100158bc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014C88: pop ecx */
L_10014C89:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x10014C89: push dword ptr [edi + 0x18] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x10014C8C: push dword ptr [edi + 8] */
    PUSH32(esp, edi); /* 0x10014C8F: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10014C90: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014C95: pop ecx */
    PUSH32(esp, eax); /* 0x10014C96: push eax */
    RECOMP_CALL(sub_10015218); /* 0x10014C97: call 0x10015218 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10014C9C: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x10014C9F: mov dword ptr [edi + 4], eax */
    /* test eax, eax */ /* 0x10014CA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015AB1; /* 0x10014CA4: je 0x10015ab1 */
L_10014CAA:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10014CAA: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015AB1; /* 0x10014CAD: je 0x10015ab1 */
L_10014CB3:
    /* test MEM8(edi + 0xC), 0x82u */ /* 0x10014CB3: test byte ptr [edi + 0xc], 0x82 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0x82u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10014D08; /* 0x10014CB7: jne 0x10014d08 */
L_10014CB9:
    PUSH32(esp, edi); /* 0x10014CB9: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10014CBA: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014CBF: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10014CC0: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015AC7; /* 0x10014CC3: je 0x10015ac7 */
L_10014CC9:
    PUSH32(esp, edi); /* 0x10014CC9: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10014CCA: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014CCF: pop ecx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x10014CD0: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015AC7; /* 0x10014CD3: je 0x10015ac7 */
L_10014CD9:
    PUSH32(esp, esi); /* 0x10014CD9: push esi */
    PUSH32(esp, edi); /* 0x10014CDA: push edi */
    RECOMP_CALL(sub_1001427C); /* 0x10014CDB: call 0x1001427c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10014CE0: mov esi, eax */
    PUSH32(esp, edi); /* 0x10014CE2: push edi */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x10014CE3: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    RECOMP_CALL(sub_1001427C); /* 0x10014CE6: call 0x1001427c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x10014CEB: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10014CEE: pop ecx */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x10014CEF: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x10014CEF: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi * 4 + 0x100DF640); /* 0x10014CF2: add eax, dword ptr [esi*4 + 0x100df640] */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x10014CF9: pop ecx */
    esi = POP32_VAL(esp); /* 0x10014CFA: pop esi */
L_10014CFB:
    SET_LO8(eax, MEM8(eax + 0x4)); /* 0x10014CFB: mov al, byte ptr [eax + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x82u) << 24;
    SET_LO8(eax, LO8(eax) & 0x82u); /* 0x10014CFE: and al, 0x82 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x82u */ /* 0x10014D00: cmp al, 0x82 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x82u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005501E; /* 0x10014D02: je 0x1005501e */
L_10014D08:
    /* cmp MEM32(edi + 0x18), 0x200u */ /* 0x10014D08: cmp dword ptr [edi + 0x18], 0x200 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005502A; /* 0x10014D0F: je 0x1005502a */
L_10014D15:
    ecx = MEM32(edi); /* 0x10014D15: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) - 1; /* 0x10014D17: dec dword ptr [edi + 4] */
    _flag_k = FK_DEC;
    eax = (uint32_t)MEM8(ecx); /* 0x10014D1A: movzx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10014D1D: inc ecx */
    _flag_k = FK_INC;
    MEM32(edi) = ecx; /* 0x10014D1E: mov dword ptr [edi], ecx */
L_10014D20:
    edi = POP32_VAL(esp); /* 0x10014D20: pop edi */
    ebp = POP32_VAL(esp); /* 0x10014D21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014D22: ret  */
L_10014D23:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10014D23: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10014D20; /* 0x10014D26: jmp 0x10014d20 */
L_10015AB1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10015AB1: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10015AB3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x10015AB5: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x10015AB8: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(edi + 0xC) | eax)); _flag_b = (uint32_t)((MEM32(edi + 0xC) | eax));
    MEM32(edi + 0xC) = MEM32(edi + 0xC) | eax; /* 0x10015ABB: or dword ptr [edi + 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) & 0; /* 0x10015ABE: and dword ptr [edi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10014D23; /* 0x10015AC2: jmp 0x10014d23 */
L_10015AC7:
    eax = 0x100DF520u; /* 0x10015AC7: mov eax, 0x100df520 */
    RECOMP_BACKEDGE();
    goto L_10014CFB; /* 0x10015ACC: jmp 0x10014cfb */
L_10054FFE:
    RECOMP_CALL(sub_1001177D); /* 0x10054FFE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10055003: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10055009: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10014D23; /* 0x1005500E: jmp 0x10014d23 */
L_10055013:
    _flag_a = (uint32_t)((eax | 0x20u)); _flag_b = (uint32_t)((eax | 0x20u));
    eax = eax | 0x20u; /* 0x10055013: or eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xC) = eax; /* 0x10055016: mov dword ptr [edi + 0xc], eax */
    RECOMP_BACKEDGE();
    goto L_10014D23; /* 0x10055019: jmp 0x10014d23 */
L_1005501E:
    _flag_a = (uint32_t)((MEM32(edi + 0xC) | 0x2000u)); _flag_b = (uint32_t)((MEM32(edi + 0xC) | 0x2000u));
    MEM32(edi + 0xC) = MEM32(edi + 0xC) | 0x2000u; /* 0x1005501E: or dword ptr [edi + 0xc], 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10014D08; /* 0x10055025: jmp 0x10014d08 */
L_1005502A:
    /* test MEM8(edi + 0xC), 8 */ /* 0x1005502A: test byte ptr [edi + 0xc], 8 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014D15; /* 0x1005502E: je 0x10014d15 */
L_10055034:
    /* test MEM32(edi + 0xC), 0x400u */ /* 0x10055034: test dword ptr [edi + 0xc], 0x400 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10014D15; /* 0x1005503B: jne 0x10014d15 */
L_10055041:
    MEM32(edi + 0x18) = 0x1000u; /* 0x10055041: mov dword ptr [edi + 0x18], 0x1000 */
    RECOMP_BACKEDGE();
    goto L_10014D15; /* 0x10055048: jmp 0x10014d15 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014D28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014D28u);

L_10014D28:
    eax = POP32_VAL(esp); /* 0x10014D28: pop eax */
    ecx = POP32_VAL(esp); /* 0x10014D29: pop ecx */
    { uint32_t _tmp = MEM32(esp); /* 0x10014D2A: xchg dword ptr [esp], eax */
      MEM32(esp) = eax;
      eax = _tmp; }
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_10014D2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014D2Fu);

L_10014D2F:
    PUSH32(esp, ebp); /* 0x10014D2F: push ebp */
    ebp = esp; /* 0x10014D30: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x10014D32: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x10014D35: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10014D38: push esi */
    eax = MEM32(ecx); /* 0x10014D39: mov eax, dword ptr [ecx] */
    esi = MEM32(ecx + 0x4); /* 0x10014D3B: mov esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x10014D3E: add eax, edx */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x10014D40: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1005B113; /* 0x10014D42: jns 0x1005b113 */
L_10014D48:
    esi = POP32_VAL(esp); /* 0x10014D48: pop esi */
    ebp = POP32_VAL(esp); /* 0x10014D49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014D4A: ret  */
L_1005B113:
    ecx = MEM32(ecx + 0x8); /* 0x1005B113: mov ecx, dword ptr [ecx + 8] */
    edx = MEM32(esi + edx); /* 0x1005B116: mov edx, dword ptr [esi + edx] */
    ecx = MEM32(edx + ecx); /* 0x1005B119: mov ecx, dword ptr [edx + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1005B11C: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1005B11E: add eax, ecx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10014D48; /* 0x1005B120: jmp 0x10014d48 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014D4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014D4Bu);

L_10014D4B:
    PUSH32(esp, ebp); /* 0x10014D4B: push ebp */
    ebp = esp; /* 0x10014D4C: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10014D4E: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x10014D51: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005EFCE; /* 0x10014D54: je 0x1005efce */
L_10014D5A:
    /* test ecx, ecx */ /* 0x10014D5A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10014D84; /* 0x10014D5C: js 0x10014d84 */
L_10014D5E:
    /* cmp ecx, MEM32(0x100DFDD8) */ /* 0x10014D5E: cmp ecx, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10014D84; /* 0x10014D64: jae 0x10014d84 */
L_10014D66:
    eax = ecx; /* 0x10014D66: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10014D68: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10014D6B: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10014D6E: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10014D6E: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x10014D71: mov eax, dword ptr [eax*4 + 0x100df640] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x10014D78: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014D84; /* 0x10014D7D: je 0x10014d84 */
L_10014D7F:
    eax = MEM32(ecx + eax); /* 0x10014D7F: mov eax, dword ptr [ecx + eax] */
    ebp = POP32_VAL(esp); /* 0x10014D82: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014D83: ret  */
L_10014D84:
    RECOMP_CALL(sub_1001E471); /* 0x10014D84: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    goto L_1005EFE3; /* 0x10014D89: jmp 0x1005efe3 */
L_1005EFCE:
    RECOMP_CALL(sub_1001E471); /* 0x1005EFCE: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1005EFD3: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x1005EFD6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005EFDB: mov dword ptr [eax], 9 */
    goto L_1005EFF6; /* 0x1005EFE1: jmp 0x1005eff6 */
L_1005EFE3:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1005EFE3: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x1005EFE6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005EFEB: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_100A4670); /* 0x1005EFF1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005EFF6:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005EFF6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1005EFF9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005EFFA: ret  */
    RECOMP_REGS_OUT();
}

void sub_10014D8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014D8Eu);

L_10014D8E:
    PUSH32(esp, ebp); /* 0x10014D8E: push ebp */
    ebp = esp; /* 0x10014D8F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10014D91: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10014D94: push esi */
    PUSH32(esp, edi); /* 0x10014D95: push edi */
    /* test eax, eax */ /* 0x10014D96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1002F7C1; /* 0x10014D98: js 0x1002f7c1 */
L_10014D9E:
    /* cmp eax, MEM32(0x100DFDD8) */ /* 0x10014D9E: cmp eax, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1002F7C1; /* 0x10014DA4: jae 0x1002f7c1 */
L_10014DAA:
    edi = eax; /* 0x10014DAA: mov edi, eax */
    esi = eax; /* 0x10014DAC: mov esi, eax */
    if (5u) _cf = (((edi) >> 4) & 1u); /* 0x10014DAE: sar edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 5u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x10014DB1: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((esi) >> 26) & 1u); /* 0x10014DB4: shl esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 6u; /* 0x10014DB4: shl esi, 6 */
    ecx = MEM32(edi * 4 + 0x100DF640); /* 0x10014DB7: mov ecx, dword ptr [edi*4 + 0x100df640] */
    /* test MEM8(esi + ecx + 0x4), 1 */ /* 0x10014DBE: test byte ptr [esi + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F7C1; /* 0x10014DC3: je 0x1002f7c1 */
L_10014DC9:
    /* cmp MEM32(esi + ecx), 0xFFFFFFFFu */ /* 0x10014DC9: cmp dword ptr [esi + ecx], -1 */
    _flag_a = (uint32_t)(MEM32(esi + ecx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F7C1; /* 0x10014DCD: je 0x1002f7c1 */
L_10014DD3:
    /* cmp MEM32(0x100DFDE8), 1 */ /* 0x10014DD3: cmp dword ptr [0x100dfde8], 1 */
    _flag_a = (uint32_t)(MEM32(0x100DFDE8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F799; /* 0x10014DDA: je 0x1002f799 */
L_10014DE0:
    eax = MEM32(edi * 4 + 0x100DF640); /* 0x10014DE0: mov eax, dword ptr [edi*4 + 0x100df640] */
    _flag_a = (uint32_t)((MEM32(esi + eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + eax) | 0xFFFFFFFFu));
    MEM32(esi + eax) = MEM32(esi + eax) | 0xFFFFFFFFu; /* 0x10014DE7: or dword ptr [esi + eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10014DEB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10014DED:
    edi = POP32_VAL(esp); /* 0x10014DED: pop edi */
    esi = POP32_VAL(esp); /* 0x10014DEE: pop esi */
    ebp = POP32_VAL(esp); /* 0x10014DEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014DF0: ret  */
L_1002F799:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002F799: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1002F79B: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002F7BC; /* 0x1002F79D: je 0x1002f7bc */
L_1002F79F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002F79F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002F7B7; /* 0x1002F7A0: je 0x1002f7b7 */
L_1002F7A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002F7A2: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10014DE0; /* 0x1002F7A3: jne 0x10014de0 */
L_1002F7A9:
    PUSH32(esp, ecx); /* 0x1002F7A9: push ecx */
    PUSH32(esp, 0xFFFFFFF4u); /* 0x1002F7AA: push -0xc */
L_1002F7AC:
    RECOMP_ICALL(MEM32(0x100E5240)); /* 0x1002F7AC: call dword ptr [0x100e5240] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10014DE0; /* 0x1002F7B2: jmp 0x10014de0 */
L_1002F7B7:
    PUSH32(esp, ecx); /* 0x1002F7B7: push ecx */
    PUSH32(esp, 0xFFFFFFF5u); /* 0x1002F7B8: push -0xb */
    RECOMP_BACKEDGE();
    goto L_1002F7AC; /* 0x1002F7BA: jmp 0x1002f7ac */
L_1002F7BC:
    PUSH32(esp, ecx); /* 0x1002F7BC: push ecx */
    PUSH32(esp, 0xFFFFFFF6u); /* 0x1002F7BD: push -0xa */
    RECOMP_BACKEDGE();
    goto L_1002F7AC; /* 0x1002F7BF: jmp 0x1002f7ac */
L_1002F7C1:
    RECOMP_CALL(sub_1001177D); /* 0x1002F7C1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_1005EFB8; /* 0x1002F7C6: jmp 0x1005efb8 */
L_1005EFB8:
    MEM32(eax) = 9; /* 0x1005EFB8: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_1001E471); /* 0x1005EFBE: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1005EFC3: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005EFC6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10014DED; /* 0x1005EFC9: jmp 0x10014ded */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014DF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014DF1u);

L_10014DF1:
    PUSH32(esp, ebp); /* 0x10014DF1: push ebp */
    ebp = esp; /* 0x10014DF2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10014DF4: push esi */
    PUSH32(esp, edi); /* 0x10014DF5: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10014DF6: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10014DF9: push edi */
    RECOMP_CALL(sub_10014D4B); /* 0x10014DFA: call 0x10014d4b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014DFF: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10014E00: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10014E32; /* 0x10014E03: je 0x10014e32 */
L_10014E05:
    eax = MEM32(0x100DF640); /* 0x10014E05: mov eax, dword ptr [0x100df640] */
    /* cmp edi, 1 */ /* 0x10014E0A: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032A34; /* 0x10014E0D: je 0x10032a34 */
L_10014E13:
    /* cmp edi, 2 */ /* 0x10014E13: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10032A0B; /* 0x10014E16: je 0x10032a0b */
L_10014E1C:
    PUSH32(esp, edi); /* 0x10014E1C: push edi */
    RECOMP_CALL(sub_10014D4B); /* 0x10014E1D: call 0x10014d4b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014E22: pop ecx */
    PUSH32(esp, eax); /* 0x10014E23: push eax */
    RECOMP_ICALL(MEM32(0x100E5074)); /* 0x10014E24: call dword ptr [0x100e5074] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10014E2A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E211; /* 0x10014E2C: je 0x1005e211 */
L_10014E32:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10014E32: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10014E34:
    PUSH32(esp, edi); /* 0x10014E34: push edi */
    RECOMP_CALL(sub_10014D8E); /* 0x10014E35: call 0x10014d8e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014E3A: pop ecx */
    ecx = edi; /* 0x10014E3B: mov ecx, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Fu);
    edi = edi & 0x1Fu; /* 0x10014E3D: and edi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x10014E40: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x10014E43: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x10014E43: shl edi, 6 */
    ecx = MEM32(ecx * 4 + 0x100DF640); /* 0x10014E46: mov ecx, dword ptr [ecx*4 + 0x100df640] */
    MEM8(ecx + edi + 0x4) = (uint8_t)(0); /* 0x10014E4D: mov byte ptr [ecx + edi + 4], 0 */
    /* test esi, esi */ /* 0x10014E52: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E21E; /* 0x10014E54: jne 0x1005e21e */
L_10014E5A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10014E5A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10014E5C:
    edi = POP32_VAL(esp); /* 0x10014E5C: pop edi */
    esi = POP32_VAL(esp); /* 0x10014E5D: pop esi */
    ebp = POP32_VAL(esp); /* 0x10014E5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014E5F: ret  */
L_10032A0B:
    /* test MEM8(eax + 0x44), 1 */ /* 0x10032A0B: test byte ptr [eax + 0x44], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x44)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014E1C; /* 0x10032A0F: je 0x10014e1c */
L_10032A15:
    PUSH32(esp, 2); /* 0x10032A15: push 2 */
    RECOMP_CALL(sub_10014D4B); /* 0x10032A17: call 0x10014d4b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x10032A1C: push 1 */
    esi = eax; /* 0x10032A1E: mov esi, eax */
    RECOMP_CALL(sub_10014D4B); /* 0x10032A20: call 0x10014d4b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10032A25: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10032A26: pop ecx */
    /* cmp eax, esi */ /* 0x10032A27: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10014E1C; /* 0x10032A29: jne 0x10014e1c */
L_10032A2F:
    RECOMP_BACKEDGE();
    goto L_10014E32; /* 0x10032A2F: jmp 0x10014e32 */
L_10032A34:
    /* test MEM8(eax + 0x84), 1 */ /* 0x10032A34: test byte ptr [eax + 0x84], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x84)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014E13; /* 0x10032A3B: je 0x10014e13 */
L_10032A41:
    RECOMP_BACKEDGE();
    goto L_10032A15; /* 0x10032A41: jmp 0x10032a15 */
L_1005E211:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005E211: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1005E217: mov esi, eax */
    RECOMP_BACKEDGE();
    goto L_10014E34; /* 0x1005E219: jmp 0x10014e34 */
L_1005E21E:
    PUSH32(esp, esi); /* 0x1005E21E: push esi */
    RECOMP_CALL(sub_1001E4A7); /* 0x1005E21F: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005E224: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005E225: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10014E5C; /* 0x1005E228: jmp 0x10014e5c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014E60u);

L_10014E60:
    PUSH32(esp, ebp); /* 0x10014E60: push ebp */
    ebp = esp; /* 0x10014E61: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10014E63: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10014E64: mov esi, dword ptr [ebp + 8] */
    /* test MEM8(esi + 0xC), 0x83u */ /* 0x10014E67: test byte ptr [esi + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014E8D; /* 0x10014E6B: je 0x10014e8d */
L_10014E6D:
    /* test MEM8(esi + 0xC), 8 */ /* 0x10014E6D: test byte ptr [esi + 0xc], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014E8D; /* 0x10014E71: je 0x10014e8d */
L_10014E73:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x10014E73: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10014E76: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0xFFFFFBF7u);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0xFFFFFBF7u; /* 0x10014E7B: and dword ptr [esi + 0xc], 0xfffffbf7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10014E82: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10014E84: pop ecx */
    MEM32(esi) = eax; /* 0x10014E85: mov dword ptr [esi], eax */
    MEM32(esi + 0x8) = eax; /* 0x10014E87: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0x4) = eax; /* 0x10014E8A: mov dword ptr [esi + 4], eax */
L_10014E8D:
    esi = POP32_VAL(esp); /* 0x10014E8D: pop esi */
    ebp = POP32_VAL(esp); /* 0x10014E8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014E8F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10014E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014E90u);

L_10014E90:
    PUSH32(esp, esi); /* 0x10014E90: push esi */
    RECOMP_CALL(sub_100141E0); /* 0x10014E91: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014E96: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014E97: ret  */
    RECOMP_REGS_OUT();
}

void sub_10014EA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014EA2u);

    goto L_10014EA2;
L_10014E98:
    RECOMP_CALL(sub_1001E471); /* 0x10014E98: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    goto L_1005E1F7; /* 0x10014E9D: jmp 0x1005e1f7 */
L_10014EA2:
    PUSH32(esp, 0x10u); /* 0x10014EA2: push 0x10 */
    PUSH32(esp, 0x10014F30u); /* 0x10014EA4: push 0x10014f30 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10014EA9: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10014EAE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x10014EB0: mov dword ptr [ebp - 0x1c], ebx */
    esi = MEM32(ebp + 0x8); /* 0x10014EB3: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x10014EB6: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E1BB; /* 0x10014EB9: je 0x1005e1bb */
L_10014EBF:
    /* test esi, esi */ /* 0x10014EBF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10014E98; /* 0x10014EC1: js 0x10014e98 */
L_10014EC3:
    /* cmp esi, MEM32(0x100DFDD8) */ /* 0x10014EC3: cmp esi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_10014E98; /* 0x10014EC9: jae 0x10014e98 */
L_10014ECB:
    ebx = esi; /* 0x10014ECB: mov ebx, esi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x10014ECD: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    edi = esi; /* 0x10014ED0: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Fu);
    edi = edi & 0x1Fu; /* 0x10014ED2: and edi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x10014ED5: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x10014ED5: shl edi, 6 */
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x10014ED8: mov eax, dword ptr [ebx*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + edi + 0x4); /* 0x10014EDF: movsx eax, byte ptr [eax + edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x10014EE4: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E1CF; /* 0x10014EE7: je 0x1005e1cf */
L_10014EED:
    PUSH32(esp, esi); /* 0x10014EED: push esi */
    RECOMP_CALL(sub_10014206); /* 0x10014EEE: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014EF3: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10014EF4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x10014EF8: mov eax, dword ptr [ebx*4 + 0x100df640] */
    /* test MEM8(eax + edi + 0x4), 1 */ /* 0x10014EFF: test byte ptr [eax + edi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E1D9; /* 0x10014F04: je 0x1005e1d9 */
L_10014F0A:
    PUSH32(esp, esi); /* 0x10014F0A: push esi */
    RECOMP_CALL(sub_10014DF1); /* 0x10014F0B: call 0x10014df1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014F10: pop ecx */
    edi = eax; /* 0x10014F11: mov edi, eax */
L_10014F13:
    MEM32(ebp + (-0x1C)) = edi; /* 0x10014F13: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10014F16: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10014E90); /* 0x10014F1D: call 0x10014e90 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x10014F22: mov eax, edi */
L_10014F24:
    RECOMP_CALL(sub_1000EDC3); /* 0x10014F24: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014F29: ret  */
L_1005E1BB:
    RECOMP_CALL(sub_1001E471); /* 0x1005E1BB: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1005E1C0: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x1005E1C2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005E1C7: mov dword ptr [eax], 9 */
    goto L_1005E209; /* 0x1005E1CD: jmp 0x1005e209 */
L_1005E1CF:
    RECOMP_CALL(sub_1001E471); /* 0x1005E1CF: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1005E1D4: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005E1F9; /* 0x1005E1D7: jmp 0x1005e1f9 */
L_1005E1D9:
    RECOMP_CALL(sub_1001177D); /* 0x1005E1D9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005E1DE: mov dword ptr [eax], 9 */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1005E1E4: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10014F13; /* 0x1005E1E7: jmp 0x10014f13 */
L_1005E1F7:
    MEM32(eax) = ebx; /* 0x1005E1F7: mov dword ptr [eax], ebx */
L_1005E1F9:
    RECOMP_CALL(sub_1001177D); /* 0x1005E1F9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005E1FE: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_100A4670); /* 0x1005E204: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005E209:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005E209: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10014F24; /* 0x1005E20C: jmp 0x10014f24 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014F4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014F4Cu);

L_10014F4C:
    PUSH32(esp, ebp); /* 0x10014F4C: push ebp */
    ebp = esp; /* 0x10014F4D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10014F4F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10014F50: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10014F53: push edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10014F54: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x10014F57: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100553EC; /* 0x10014F59: je 0x100553ec */
L_10014F5F:
    /* test MEM8(esi + 0xC), 0x83u */ /* 0x10014F5F: test byte ptr [esi + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10014F94; /* 0x10014F63: je 0x10014f94 */
L_10014F65:
    PUSH32(esp, esi); /* 0x10014F65: push esi */
    RECOMP_CALL(sub_1001428F); /* 0x10014F66: call 0x1001428f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10014F6B: push esi */
    edi = eax; /* 0x10014F6C: mov edi, eax */
    RECOMP_CALL(sub_10014E60); /* 0x10014F6E: call 0x10014e60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10014F73: push esi */
    RECOMP_CALL(sub_1001427C); /* 0x10014F74: call 0x1001427c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10014F79: push eax */
    RECOMP_CALL(sub_10014EA2); /* 0x10014F7A: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10014F7F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10014F82: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10055403; /* 0x10014F84: js 0x10055403 */
L_10014F8A:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x10014F8A: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005540B; /* 0x10014F8E: jne 0x1005540b */
L_10014F94:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x10014F94: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x10014F98: mov eax, edi */
L_10014F9A:
    edi = POP32_VAL(esp); /* 0x10014F9A: pop edi */
    esi = POP32_VAL(esp); /* 0x10014F9B: pop esi */
    ebp = POP32_VAL(esp); /* 0x10014F9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014F9D: ret  */
L_100553EC:
    RECOMP_CALL(sub_1001177D); /* 0x100553EC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100553F1: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100553F7: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x100553FC: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10014F9A; /* 0x100553FE: jmp 0x10014f9a */
L_10055403:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10055403: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10014F94; /* 0x10055406: jmp 0x10014f94 */
L_1005540B:
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x1005540B: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005540E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0; /* 0x10055413: and dword ptr [esi + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10055417: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10014F94; /* 0x10055418: jmp 0x10014f94 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10014F9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10014F9Eu);

L_10014F9E:
    PUSH32(esp, 0xCu); /* 0x10014F9E: push 0xc */
    PUSH32(esp, 0x10014FF8u); /* 0x10014FA0: push 0x10014ff8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10014FA5: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10014FAA: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x10014FAD: mov dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10014FB0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x10014FB2: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x10014FB5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10014FB7: setne al */
    /* test eax, eax */ /* 0x10014FBA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005541D; /* 0x10014FBC: je 0x1005541d */
L_10014FC2:
    /* test MEM8(esi + 0xC), 0x40u */ /* 0x10014FC2: test byte ptr [esi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10055432; /* 0x10014FC6: jne 0x10055432 */
L_10014FCC:
    PUSH32(esp, esi); /* 0x10014FCC: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x10014FCD: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014FD2: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10014FD3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10014FD7: push esi */
    RECOMP_CALL(sub_10014F4C); /* 0x10014FD8: call 0x10014f4c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10014FDD: pop ecx */
    edi = eax; /* 0x10014FDE: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x10014FE0: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10014FE3: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10015014); /* 0x10014FEA: call 0x10015014 */
    RECOMP_FLAGS_IN();
L_10014FEF:
    eax = edi; /* 0x10014FEF: mov eax, edi */
    RECOMP_CALL(sub_1000EDC3); /* 0x10014FF1: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10014FF6: ret  */
L_1005541D:
    RECOMP_CALL(sub_1001177D); /* 0x1005541D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10055422: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10055428: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10014FEF; /* 0x1005542D: jmp 0x10014fef */
L_10055432:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x10055432: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10014FEF; /* 0x10055436: jmp 0x10014fef */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10015014(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015014u);

L_10015014:
    PUSH32(esp, esi); /* 0x10015014: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x10015015: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001501A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001501B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001501C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001501Cu);

L_1001501C:
    PUSH32(esp, ebp); /* 0x1001501C: push ebp */
    ebp = esp; /* 0x1001501D: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1001501F: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x10015022: push ebx */
    PUSH32(esp, edi); /* 0x10015023: push edi */
    /* test ecx, ecx */ /* 0x10015024: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1002F77B; /* 0x10015026: js 0x1002f77b */
L_1001502C:
    /* cmp ecx, MEM32(0x100DFDD8) */ /* 0x1001502C: cmp ecx, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1002F77B; /* 0x10015032: jae 0x1002f77b */
L_10015038:
    ebx = ecx; /* 0x10015038: mov ebx, ecx */
    edi = ecx; /* 0x1001503A: mov edi, ecx */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x1001503C: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Fu);
    edi = edi & 0x1Fu; /* 0x1001503F: and edi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x10015042: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x10015042: shl edi, 6 */
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x10015045: mov eax, dword ptr [ebx*4 + 0x100df640] */
    /* cmp MEM32(edi + eax), 0xFFFFFFFFu */ /* 0x1001504C: cmp dword ptr [edi + eax], -1 */
    _flag_a = (uint32_t)(MEM32(edi + eax)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002F77B; /* 0x10015050: jne 0x1002f77b */
L_10015056:
    /* cmp MEM32(0x100DFDE8), 1 */ /* 0x10015056: cmp dword ptr [0x100dfde8], 1 */
    _flag_a = (uint32_t)(MEM32(0x100DFDE8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1001505D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1001505E: mov esi, dword ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F754; /* 0x10015061: je 0x1002f754 */
L_10015067:
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x10015067: mov eax, dword ptr [ebx*4 + 0x100df640] */
    MEM32(edi + eax) = esi; /* 0x1001506E: mov dword ptr [edi + eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10015071: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10015073: pop esi */
L_10015074:
    edi = POP32_VAL(esp); /* 0x10015074: pop edi */
    ebx = POP32_VAL(esp); /* 0x10015075: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10015076: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015077: ret  */
L_1002F754:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x1002F754: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002F776; /* 0x1002F757: je 0x1002f776 */
L_1002F759:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1002F759: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002F771; /* 0x1002F75A: je 0x1002f771 */
L_1002F75C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1002F75C: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10015067; /* 0x1002F75D: jne 0x10015067 */
L_1002F763:
    PUSH32(esp, esi); /* 0x1002F763: push esi */
    PUSH32(esp, 0xFFFFFFF4u); /* 0x1002F764: push -0xc */
L_1002F766:
    RECOMP_ICALL(MEM32(0x100E5240)); /* 0x1002F766: call dword ptr [0x100e5240] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10015067; /* 0x1002F76C: jmp 0x10015067 */
L_1002F771:
    PUSH32(esp, esi); /* 0x1002F771: push esi */
    PUSH32(esp, 0xFFFFFFF5u); /* 0x1002F772: push -0xb */
    RECOMP_BACKEDGE();
    goto L_1002F766; /* 0x1002F774: jmp 0x1002f766 */
L_1002F776:
    PUSH32(esp, esi); /* 0x1002F776: push esi */
    PUSH32(esp, 0xFFFFFFF6u); /* 0x1002F777: push -0xa */
    RECOMP_BACKEDGE();
    goto L_1002F766; /* 0x1002F779: jmp 0x1002f766 */
L_1002F77B:
    RECOMP_CALL(sub_1001177D); /* 0x1002F77B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_1005EFFB; /* 0x1002F780: jmp 0x1005effb */
L_1005EFFB:
    MEM32(eax) = 9; /* 0x1005EFFB: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_1001E471); /* 0x1005F001: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1005F006: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005F009: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015074; /* 0x1005F00C: jmp 0x10015074 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10015078(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015078u);

L_10015078:
    PUSH32(esp, ebp); /* 0x10015078: push ebp */
    ebp = esp; /* 0x10015079: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1001507B: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1001507E: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x10015081: push ebx */
    PUSH32(esp, esi); /* 0x10015082: push esi */
    esi = MEM32(ebp + 0x10); /* 0x10015083: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x10015086: push edi */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x10015087: push -2 */
    ecx = POP32_VAL(esp); /* 0x10015089: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1001508A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1001508C: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x20)) = edi; /* 0x1001508F: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x28)) = esi; /* 0x10015092: mov dword ptr [ebp - 0x28], esi */
    /* cmp eax, ecx */ /* 0x10015095: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E2A0; /* 0x10015097: je 0x1005e2a0 */
L_1001509D:
    /* test eax, eax */ /* 0x1001509D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001E574; /* 0x1001509F: js 0x1001e574 */
L_100150A5:
    /* cmp eax, MEM32(0x100DFDD8) */ /* 0x100150A5: cmp eax, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001E574; /* 0x100150AB: jae 0x1001e574 */
L_100150B1:
    ecx = eax; /* 0x100150B1: mov ecx, eax */
    ebx = eax; /* 0x100150B3: mov ebx, eax */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x100150B5: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    ebx = ebx & 0x1Fu; /* 0x100150B8: and ebx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ebx) >> 26) & 1u); /* 0x100150BB: shl ebx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ebx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 6u; /* 0x100150BB: shl ebx, 6 */
    MEM32(ebp + (-0xC)) = ecx; /* 0x100150BE: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x24)) = ebx; /* 0x100150C1: mov dword ptr [ebp - 0x24], ebx */
    edx = MEM32(ecx * 4 + 0x100DF640); /* 0x100150C4: mov edx, dword ptr [ecx*4 + 0x100df640] */
    SET_LO8(eax, MEM8(edx + ebx + 0x4)); /* 0x100150CB: mov al, byte ptr [edx + ebx + 4] */
    /* test LO8(eax), 1 */ /* 0x100150CF: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001E574; /* 0x100150D1: je 0x1001e574 */
L_100150D7:
    /* cmp esi, 0x7FFFFFFFu */ /* 0x100150D7: cmp esi, 0x7fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005E2B7; /* 0x100150DD: ja 0x1005e2b7 */
L_100150E3:
    /* test esi, esi */ /* 0x100150E3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001E550; /* 0x100150E5: je 0x1001e550 */
L_100150EB:
    /* test LO8(eax), 2 */ /* 0x100150EB: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001E550; /* 0x100150ED: jne 0x1001e550 */
L_100150F3:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x100150F3: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E2CE; /* 0x100150F6: je 0x1005e2ce */
L_100150FC:
    SET_LO8(eax, MEM8(edx + ebx + 0x24)); /* 0x100150FC: mov al, byte ptr [edx + ebx + 0x24] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(eax)); /* 0x10015100: add al, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (1u) _cf = (((LO8(eax)) >> 0) & 1u); /* 0x10015102: sar al, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int8_t)(LO8(eax)) >> 1u))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, (uint32_t)((int32_t)(int32_t)(int8_t)(LO8(eax)) >> 1u));
    MEM8(ebp + 0x13) = (uint8_t)(LO8(eax)); /* 0x10015104: mov byte ptr [ebp + 0x13], al */
    eax = (int32_t)(int8_t)LO8(eax); /* 0x10015107: movsx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001510A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005E2D7; /* 0x1001510B: je 0x1005e2d7 */
L_10015111:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10015111: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10031710; /* 0x10015112: je 0x10031710 */
L_10015118:
    eax = MEM32(ebp + 0xC); /* 0x10015118: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1001511B: mov dword ptr [ebp - 0x10], eax */
L_1001511E:
    edx = MEM32(ecx * 4 + 0x100DF640); /* 0x1001511E: mov edx, dword ptr [ecx*4 + 0x100df640] */
    ecx = MEM32(ebp + (-0xC)); /* 0x10015125: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x10015128: mov dword ptr [ebp - 0x1c], eax */
    /* test MEM8(edx + ebx + 0x4), 0x48u */ /* 0x1001512B: test byte ptr [edx + ebx + 4], 0x48 */
    _flag_a = (uint32_t)(MEM8(edx + ebx + 0x4)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E340; /* 0x10015130: jne 0x1005e340 */
L_10015136:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10015136: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100142BB); /* 0x10015139: call 0x100142bb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1001513E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0xC)); /* 0x10015140: mov eax, dword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x10015143: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E3EA; /* 0x10015144: jne 0x1005e3ea */
L_1001514A:
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1001514A: mov eax, dword ptr [eax*4 + 0x100df640] */
    ecx = ebp + (-0x14); /* 0x10015151: lea ecx, [ebp - 0x14] */
    PUSH32(esp, 0); /* 0x10015154: push 0 */
    PUSH32(esp, ecx); /* 0x10015156: push ecx */
    PUSH32(esp, esi); /* 0x10015157: push esi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x10015158: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(eax + ebx)); /* 0x1001515B: push dword ptr [eax + ebx] */
    RECOMP_ICALL(MEM32(0x100E50FC)); /* 0x1001515E: call dword ptr [0x100e50fc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10015164: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001E569; /* 0x10015166: je 0x1001e569 */
L_1001516C:
    ecx = MEM32(ebp + (-0x14)); /* 0x1001516C: mov ecx, dword ptr [ebp - 0x14] */
    /* test ecx, ecx */ /* 0x1001516F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001E569; /* 0x10015171: js 0x1001e569 */
L_10015177:
    /* cmp ecx, esi */ /* 0x10015177: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1001E569; /* 0x10015179: ja 0x1001e569 */
L_1001517F:
    edx = MEM32(ebp + (-0xC)); /* 0x1001517F: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x10015182: add edi, ecx */
    _flag_k = FK_ADD;
    esi = MEM32(edx * 4 + 0x100DF640); /* 0x10015184: mov esi, dword ptr [edx*4 + 0x100df640] */
    SET_LO8(eax, MEM8(esi + ebx + 0x4)); /* 0x1001518B: mov al, byte ptr [esi + ebx + 4] */
    /* test LO8(eax), LO8(eax) */ /* 0x1001518F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1002F791; /* 0x10015191: jns 0x1002f791 */
L_10015197:
    /* cmp MEM8(ebp + 0x13), 2 */ /* 0x10015197: cmp byte ptr [ebp + 0x13], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x13)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10031C68; /* 0x1001519B: je 0x10031c68 */
L_100151A1:
    /* test ecx, ecx */ /* 0x100151A1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100151B1; /* 0x100151A3: je 0x100151b1 */
L_100151A5:
    ecx = MEM32(ebp + (-0x10)); /* 0x100151A5: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp MEM8(ecx), 0xAu */ /* 0x100151A8: cmp byte ptr [ecx], 0xa */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100180AE; /* 0x100151AB: je 0x100180ae */
L_100151B1:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFBu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFBu); /* 0x100151B1: and al, 0xfb */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100151B3:
    MEM8(esi + ebx + 0x4) = (uint8_t)(LO8(eax)); /* 0x100151B3: mov byte ptr [esi + ebx + 4], al */
    eax = MEM32(ebp + (-0x10)); /* 0x100151B7: mov eax, dword ptr [ebp - 0x10] */
    esi = eax; /* 0x100151BA: mov esi, eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x100151BC: mov dword ptr [ebp - 0x20], eax */
    ecx = eax + edi; /* 0x100151BF: lea ecx, [eax + edi] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x100151C2: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp eax, ecx */ /* 0x100151C5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100151E9; /* 0x100151C7: jae 0x100151e9 */
L_100151C9:
    PUSH32(esp, 0xDu); /* 0x100151C9: push 0xd */
    ecx = POP32_VAL(esp); /* 0x100151CB: pop ecx */
    edi = eax; /* 0x100151CC: mov edi, eax */
L_100151CE:
    SET_LO8(eax, MEM8(edi)); /* 0x100151CE: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x1Au */ /* 0x100151D0: cmp al, 0x1a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x1Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001E536; /* 0x100151D2: je 0x1001e536 */
L_100151D8:
    /* cmp LO8(eax), LO8(ecx) */ /* 0x100151D8: cmp al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015F6D; /* 0x100151DA: je 0x10015f6d */
L_100151E0:
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x100151E0: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100151E2: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100151E3: inc edi */
    _flag_k = FK_INC;
L_100151E4:
    /* cmp edi, MEM32(ebp + (-0x1C)) */ /* 0x100151E4: cmp edi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100151CE; /* 0x100151E7: jb 0x100151ce */
L_100151E9:
    eax = MEM32(ebp + (-0x10)); /* 0x100151E9: mov eax, dword ptr [ebp - 0x10] */
    edi = esi; /* 0x100151EC: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x100151EE: sub edi, eax */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebp + 0x13), 1 */ /* 0x100151F0: cmp byte ptr [ebp + 0x13], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x13)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E4CC; /* 0x100151F4: je 0x1005e4cc */
L_100151FA:
    ebx = MEM32(ebp + (-0x18)); /* 0x100151FA: mov ebx, dword ptr [ebp - 0x18] */
L_100151FD:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x100151FD: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E5D3; /* 0x10015200: jne 0x1005e5d3 */
L_10015206:
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x10015206: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E5DF; /* 0x10015209: jne 0x1005e5df */
L_1001520F:
    eax = edi; /* 0x1001520F: mov eax, edi */
L_10015211:
    edi = POP32_VAL(esp); /* 0x10015211: pop edi */
    esi = POP32_VAL(esp); /* 0x10015212: pop esi */
    ebx = POP32_VAL(esp); /* 0x10015213: pop ebx */
    esp = ebp; /* 0x10015214: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10015216: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015217: ret  */
L_10015F6D:
    eax = MEM32(ebp + (-0x1C)); /* 0x10015F6D: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10015F70: dec eax */
    _flag_k = FK_DEC;
    /* cmp edi, eax */ /* 0x10015F71: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10018039; /* 0x10015F73: jae 0x10018039 */
L_10015F79:
    eax = edi + 0x1; /* 0x10015F79: lea eax, [edi + 1] */
    /* cmp MEM8(eax), 0xAu */ /* 0x10015F7C: cmp byte ptr [eax], 0xa */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001E52C; /* 0x10015F7F: jne 0x1001e52c */
L_10015F85:
    PUSH32(esp, 0xAu); /* 0x10015F85: push 0xa */
    eax = POP32_VAL(esp); /* 0x10015F87: pop eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x10015F88: add edi, 2 */
    _flag_k = FK_ADD;
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x10015F8B: mov byte ptr [esi], al */
L_10015F8D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10015F8D: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_100151E4; /* 0x10015F8E: jmp 0x100151e4 */
L_10018039:
    PUSH32(esp, 0); /* 0x10018039: push 0 */
    eax = ebp + (-0x14); /* 0x1001803B: lea eax, [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001803E: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1001803F: push eax */
    PUSH32(esp, 1); /* 0x10018040: push 1 */
    eax = ebp + (-0x1); /* 0x10018042: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x10018045: push eax */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x10018046: mov eax, dword ptr [edx*4 + 0x100df640] */
    PUSH32(esp, MEM32(eax + ebx)); /* 0x1001804D: push dword ptr [eax + ebx] */
    RECOMP_ICALL(MEM32(0x100E50FC)); /* 0x10018050: call dword ptr [0x100e50fc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10018056: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E467; /* 0x10018058: je 0x1005e467 */
L_1001805E:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1001805E: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E4BE; /* 0x10018062: je 0x1005e4be */
L_10018068:
    edx = MEM32(ebp + (-0xC)); /* 0x10018068: mov edx, dword ptr [ebp - 0xc] */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x1001806B: mov eax, dword ptr [edx*4 + 0x100df640] */
    /* test MEM8(eax + ebx + 0x4), 0x48u */ /* 0x10018072: test byte ptr [eax + ebx + 4], 0x48 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x4)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E477; /* 0x10018077: jne 0x1005e477 */
L_1001807D:
    /* cmp esi, MEM32(ebp + (-0x10)) */ /* 0x1001807D: cmp esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E4A0; /* 0x10018080: je 0x1005e4a0 */
L_10018086:
    PUSH32(esp, 1); /* 0x10018086: push 1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10018088: push -1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1001808A: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1001808C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10017FDE); /* 0x1001808F: call 0x10017fde */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xC)); /* 0x10018094: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10018097: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xAu); /* 0x1001809A: push 0xa */
    eax = POP32_VAL(esp); /* 0x1001809C: pop eax */
    /* cmp MEM8(ebp + (-0x1)), LO8(eax) */ /* 0x1001809D: cmp byte ptr [ebp - 1], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E4B4; /* 0x100180A0: jne 0x1005e4b4 */
L_100180A6:
    PUSH32(esp, 0xDu); /* 0x100180A6: push 0xd */
L_100180A8:
    ecx = POP32_VAL(esp); /* 0x100180A8: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100151E4; /* 0x100180A9: jmp 0x100151e4 */
L_100180AE:
    _flag_a = (uint32_t)((LO8(eax) | 4)) << 24; _flag_b = (uint32_t)((LO8(eax) | 4)) << 24;
    SET_LO8(eax, LO8(eax) | 4); /* 0x100180AE: or al, 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    goto L_100151B3; /* 0x100180B0: jmp 0x100151b3 */
L_1001E52C:
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1001E52C: mov byte ptr [esi], cl */
    edi = eax; /* 0x1001E52E: mov edi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001E530: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_100151E4; /* 0x1001E531: jmp 0x100151e4 */
L_1001E536:
    ecx = MEM32(edx * 4 + 0x100DF640); /* 0x1001E536: mov ecx, dword ptr [edx*4 + 0x100df640] */
    SET_LO8(eax, MEM8(ecx + ebx + 0x4)); /* 0x1001E53D: mov al, byte ptr [ecx + ebx + 4] */
    /* test LO8(eax), 0x40u */ /* 0x1001E541: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001E557; /* 0x1001E543: jne 0x1001e557 */
L_1001E545:
    _flag_a = (uint32_t)((LO8(eax) | 2)) << 24; _flag_b = (uint32_t)((LO8(eax) | 2)) << 24;
    SET_LO8(eax, LO8(eax) | 2); /* 0x1001E545: or al, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx + ebx + 0x4) = (uint8_t)(LO8(eax)); /* 0x1001E547: mov byte ptr [ecx + ebx + 4], al */
    RECOMP_BACKEDGE();
    goto L_100151E9; /* 0x1001E54B: jmp 0x100151e9 */
L_1001E550:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001E550: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015211; /* 0x1001E552: jmp 0x10015211 */
L_1001E557:
    SET_LO8(eax, MEM8(edi)); /* 0x1001E557: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1001E559: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001E55B: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_100151E9; /* 0x1001E55C: jmp 0x100151e9 */
L_1001E561:
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x1001E561: mov word ptr [esi], cx */
    goto L_10031CC1; /* 0x1001E564: jmp 0x10031cc1 */
L_1001E569:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1001E569: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    goto L_1005E775; /* 0x1001E56F: jmp 0x1005e775 */
L_1001E574:
    RECOMP_CALL(sub_1001E471); /* 0x1001E574: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    goto L_1005E7A3; /* 0x1001E579: jmp 0x1005e7a3 */
L_1002F791:
    eax = MEM32(ebp + (-0x10)); /* 0x1002F791: mov eax, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_100151FA; /* 0x1002F794: jmp 0x100151fa */
L_10031710:
    eax = esi; /* 0x10031710: mov eax, esi */
    eax = ~eax; /* 0x10031712: not eax */
    /* test LO8(eax), 1 */ /* 0x10031714: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E2CE; /* 0x10031716: je 0x1005e2ce */
L_1003171C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    esi = esi & 0xFFFFFFFEu; /* 0x1003171C: and esi, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015118; /* 0x1003171F: jmp 0x10015118 */
L_10031C68:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x10031C68: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E5E6; /* 0x10031C6C: jne 0x1005e5e6 */
L_10031C72:
    /* test ecx, ecx */ /* 0x10031C72: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031C88; /* 0x10031C74: je 0x10031c88 */
L_10031C76:
    ecx = MEM32(ebp + (-0x10)); /* 0x10031C76: mov ecx, dword ptr [ebp - 0x10] */
    PUSH32(esp, 0xAu); /* 0x10031C79: push 0xa */
    edx = POP32_VAL(esp); /* 0x10031C7B: pop edx */
    /* cmp MEM16(ecx), LO16(edx) */ /* 0x10031C7C: cmp word ptr [ecx], dx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edx = MEM32(ebp + (-0xC)); /* 0x10031C7F: mov edx, dword ptr [ebp - 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E65F; /* 0x10031C82: je 0x1005e65f */
L_10031C88:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFBu) << 24;
    SET_LO8(eax, LO8(eax) & 0xFBu); /* 0x10031C88: and al, 0xfb */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10031C8A:
    MEM8(esi + ebx + 0x4) = (uint8_t)(LO8(eax)); /* 0x10031C8A: mov byte ptr [esi + ebx + 4], al */
    eax = MEM32(ebp + (-0x10)); /* 0x10031C8E: mov eax, dword ptr [ebp - 0x10] */
    esi = eax; /* 0x10031C91: mov esi, eax */
    MEM32(ebp + (-0x28)) = eax; /* 0x10031C93: mov dword ptr [ebp - 0x28], eax */
    ecx = eax + edi; /* 0x10031C96: lea ecx, [eax + edi] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x10031C99: mov dword ptr [ebp - 0x20], ecx */
    /* cmp eax, ecx */ /* 0x10031C9C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10031CCC; /* 0x10031C9E: jae 0x10031ccc */
L_10031CA0:
    PUSH32(esp, 0xDu); /* 0x10031CA0: push 0xd */
    ecx = POP32_VAL(esp); /* 0x10031CA2: pop ecx */
    MEM32(ebp + 0x10) = 0x1Au; /* 0x10031CA3: mov dword ptr [ebp + 0x10], 0x1a */
    edi = eax; /* 0x10031CAA: mov edi, eax */
L_10031CAC:
    eax = (uint32_t)MEM16(edi); /* 0x10031CAC: movzx eax, word ptr [edi] */
    /* cmp LO16(eax), MEM16(ebp + 0x10) */ /* 0x10031CAF: cmp ax, word ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x10)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E74D; /* 0x10031CB3: je 0x1005e74d */
L_10031CB9:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x10031CB9: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10031CD8; /* 0x10031CBC: je 0x10031cd8 */
L_10031CBE:
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x10031CBE: mov word ptr [esi], ax */
L_10031CC1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10031CC1: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x10031CC4: add edi, 2 */
    _flag_k = FK_ADD;
L_10031CC7:
    /* cmp edi, MEM32(ebp + (-0x20)) */ /* 0x10031CC7: cmp edi, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10031CAC; /* 0x10031CCA: jb 0x10031cac */
L_10031CCC:
    eax = MEM32(ebp + (-0x10)); /* 0x10031CCC: mov eax, dword ptr [ebp - 0x10] */
    edi = esi; /* 0x10031CCF: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x10031CD1: sub edi, eax */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_100151FA; /* 0x10031CD3: jmp 0x100151fa */
L_10031CD8:
    eax = MEM32(ebp + (-0x20)); /* 0x10031CD8: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x10031CDB: add eax, -2 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x10031CDE: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005E666; /* 0x10031CE0: jae 0x1005e666 */
L_10031CE6:
    PUSH32(esp, 0xAu); /* 0x10031CE6: push 0xa */
    edx = POP32_VAL(esp); /* 0x10031CE8: pop edx */
    /* cmp MEM16(edi + 0x2), LO16(edx) */ /* 0x10031CE9: cmp word ptr [edi + 2], dx */
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edx = MEM32(ebp + (-0xC)); /* 0x10031CED: mov edx, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001E561; /* 0x10031CF0: jne 0x1001e561 */
L_10031CF6:
    PUSH32(esp, 0xAu); /* 0x10031CF6: push 0xa */
    eax = POP32_VAL(esp); /* 0x10031CF8: pop eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x10031CF9: add edi, 4 */
    _flag_k = FK_ADD;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x10031CFC: mov word ptr [esi], ax */
L_10031CFF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x10031CFF: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10031CC7; /* 0x10031D02: jmp 0x10031cc7 */
L_1005E2A0:
    RECOMP_CALL(sub_1001E471); /* 0x1005E2A0: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1005E2A5: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1001177D); /* 0x1005E2A7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005E2AC: mov dword ptr [eax], 9 */
    goto L_1005E7B5; /* 0x1005E2B2: jmp 0x1005e7b5 */
L_1005E2B7:
    RECOMP_CALL(sub_1001E471); /* 0x1005E2B7: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x1005E2BC: mov dword ptr [eax], edi */
L_1005E2BE:
    RECOMP_CALL(sub_1001177D); /* 0x1005E2BE: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005E2C3: mov dword ptr [eax], 0x16 */
    goto L_1005E7B0; /* 0x1005E2C9: jmp 0x1005e7b0 */
L_1005E2CE:
    RECOMP_CALL(sub_1001E471); /* 0x1005E2CE: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    MEM32(eax) = MEM32(eax) & edi; /* 0x1005E2D3: and dword ptr [eax], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1005E2BE; /* 0x1005E2D5: jmp 0x1005e2be */
L_1005E2D7:
    eax = esi; /* 0x1005E2D7: mov eax, esi */
    eax = ~eax; /* 0x1005E2D9: not eax */
    /* test LO8(eax), 1 */ /* 0x1005E2DB: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E2CE; /* 0x1005E2DD: je 0x1005e2ce */
L_1005E2DF:
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1005E2DF: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x1005E2DF: shr esi, 1 */
    /* cmp esi, 4 */ /* 0x1005E2E1: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005E2E9; /* 0x1005E2E4: jae 0x1005e2e9 */
L_1005E2E6:
    PUSH32(esp, 4); /* 0x1005E2E6: push 4 */
    esi = POP32_VAL(esp); /* 0x1005E2E8: pop esi */
L_1005E2E9:
    PUSH32(esp, esi); /* 0x1005E2E9: push esi */
    RECOMP_CALL(sub_10012226); /* 0x1005E2EA: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x1005E2EF: mov dword ptr [ebp - 0x10], eax */
    ecx = POP32_VAL(esp); /* 0x1005E2F2: pop ecx */
    /* test eax, eax */ /* 0x1005E2F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E312; /* 0x1005E2F5: jne 0x1005e312 */
L_1005E2F7:
    RECOMP_CALL(sub_1001177D); /* 0x1005E2F7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1005E2FC: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_1001E471); /* 0x1005E302: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 8; /* 0x1005E307: mov dword ptr [eax], 8 */
    goto L_1005E7B5; /* 0x1005E30D: jmp 0x1005e7b5 */
L_1005E312:
    PUSH32(esp, 1); /* 0x1005E312: push 1 */
    PUSH32(esp, 0); /* 0x1005E314: push 0 */
    PUSH32(esp, 0); /* 0x1005E316: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005E318: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E31B: call 0x10017fde */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1005E320: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E323: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = MEM32(ecx * 4 + 0x100DF640); /* 0x1005E326: mov ecx, dword ptr [ecx*4 + 0x100df640] */
    MEM32(ecx + ebx + 0x28) = eax; /* 0x1005E32D: mov dword ptr [ecx + ebx + 0x28], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1005E331: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ecx + ebx + 0x2C) = edx; /* 0x1005E334: mov dword ptr [ecx + ebx + 0x2c], edx */
    ecx = MEM32(ebp + (-0xC)); /* 0x1005E338: mov ecx, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_1001511E; /* 0x1005E33B: jmp 0x1001511e */
L_1005E340:
    SET_LO8(edx, MEM8(edx + ebx + 0x5)); /* 0x1005E340: mov dl, byte ptr [edx + ebx + 5] */
    /* cmp LO8(edx), 0xAu */ /* 0x1005E344: cmp dl, 0xa */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015136; /* 0x1005E347: je 0x10015136 */
L_1005E34D:
    /* test esi, esi */ /* 0x1005E34D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015136; /* 0x1005E34F: je 0x10015136 */
L_1005E355:
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x1005E355: mov byte ptr [eax], dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1005E357: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax + 0x1; /* 0x1005E359: lea edx, [eax + 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1005E35C: inc edi */
    _flag_k = FK_INC;
    eax = MEM32(ecx * 4 + 0x100DF640); /* 0x1005E35D: mov eax, dword ptr [ecx*4 + 0x100df640] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1005E364: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM8(ebp + 0x13), 0 */ /* 0x1005E365: cmp byte ptr [ebp + 0x13], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x13)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x1C)) = edx; /* 0x1005E369: mov dword ptr [ebp - 0x1c], edx */
    MEM8(eax + ebx + 0x5) = (uint8_t)(0xAu); /* 0x1005E36C: mov byte ptr [eax + ebx + 5], 0xa */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015136; /* 0x1005E371: je 0x10015136 */
L_1005E377:
    eax = MEM32(ecx * 4 + 0x100DF640); /* 0x1005E377: mov eax, dword ptr [ecx*4 + 0x100df640] */
    SET_LO8(eax, MEM8(eax + ebx + 0x25)); /* 0x1005E37E: mov al, byte ptr [eax + ebx + 0x25] */
    /* cmp LO8(eax), 0xAu */ /* 0x1005E382: cmp al, 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015136; /* 0x1005E384: je 0x10015136 */
L_1005E38A:
    /* test esi, esi */ /* 0x1005E38A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015136; /* 0x1005E38C: je 0x10015136 */
L_1005E392:
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x1005E392: mov byte ptr [edx], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005E394: inc edx */
    _flag_k = FK_INC;
    eax = MEM32(ecx * 4 + 0x100DF640); /* 0x1005E395: mov eax, dword ptr [ecx*4 + 0x100df640] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1005E39C: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM8(ebp + 0x13), 1 */ /* 0x1005E39D: cmp byte ptr [ebp + 0x13], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x13)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, 2); /* 0x1005E3A1: push 2 */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1005E3A3: mov dword ptr [ebp - 0x1c], edx */
    edi = POP32_VAL(esp); /* 0x1005E3A6: pop edi */
    MEM8(eax + ebx + 0x25) = (uint8_t)(0xAu); /* 0x1005E3A7: mov byte ptr [eax + ebx + 0x25], 0xa */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015136; /* 0x1005E3AC: jne 0x10015136 */
L_1005E3B2:
    eax = MEM32(ecx * 4 + 0x100DF640); /* 0x1005E3B2: mov eax, dword ptr [ecx*4 + 0x100df640] */
    SET_LO8(eax, MEM8(eax + ebx + 0x26)); /* 0x1005E3B9: mov al, byte ptr [eax + ebx + 0x26] */
    /* cmp LO8(eax), 0xAu */ /* 0x1005E3BD: cmp al, 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015136; /* 0x1005E3BF: je 0x10015136 */
L_1005E3C5:
    /* test esi, esi */ /* 0x1005E3C5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015136; /* 0x1005E3C7: je 0x10015136 */
L_1005E3CD:
    PUSH32(esp, 3); /* 0x1005E3CD: push 3 */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x1005E3CF: mov byte ptr [edx], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005E3D1: inc edx */
    _flag_k = FK_INC;
    eax = MEM32(ecx * 4 + 0x100DF640); /* 0x1005E3D2: mov eax, dword ptr [ecx*4 + 0x100df640] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1005E3D9: dec esi */
    _flag_k = FK_DEC;
    edi = POP32_VAL(esp); /* 0x1005E3DA: pop edi */
    PUSH32(esp, 0xAu); /* 0x1005E3DB: push 0xa */
    ecx = POP32_VAL(esp); /* 0x1005E3DD: pop ecx */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1005E3DE: mov dword ptr [ebp - 0x1c], edx */
    MEM8(eax + ebx + 0x26) = (uint8_t)(LO8(ecx)); /* 0x1005E3E1: mov byte ptr [eax + ebx + 0x26], cl */
    RECOMP_BACKEDGE();
    goto L_10015136; /* 0x1005E3E5: jmp 0x10015136 */
L_1005E3EA:
    ecx = MEM32(eax * 4 + 0x100DF640); /* 0x1005E3EA: mov ecx, dword ptr [eax*4 + 0x100df640] */
    /* test MEM8(ecx + ebx + 0x4), 0x80u */ /* 0x1005E3F1: test byte ptr [ecx + ebx + 4], 0x80 */
    _flag_a = (uint32_t)(MEM8(ecx + ebx + 0x4)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001514A; /* 0x1005E3F6: je 0x1001514a */
L_1005E3FC:
    eax = ebp + (-0x20); /* 0x1005E3FC: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1005E3FF: push eax */
    PUSH32(esp, MEM32(ecx + ebx)); /* 0x1005E400: push dword ptr [ecx + ebx] */
    RECOMP_ICALL(MEM32(0x100E5228)); /* 0x1005E403: call dword ptr [0x100e5228] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x1005E409: mov dword ptr [ebp - 0x20], eax */
    /* test eax, eax */ /* 0x1005E40C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E45F; /* 0x1005E40E: je 0x1005e45f */
L_1005E410:
    /* cmp MEM8(ebp + 0x13), 2 */ /* 0x1005E410: cmp byte ptr [ebp + 0x13], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x13)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E45F; /* 0x1005E414: jne 0x1005e45f */
L_1005E416:
    PUSH32(esp, 0); /* 0x1005E416: push 0 */
    eax = ebp + (-0x14); /* 0x1005E418: lea eax, [ebp - 0x14] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1005E41B: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x1005E41B: shr esi, 1 */
    PUSH32(esp, eax); /* 0x1005E41D: push eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1005E41E: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1005E421: push esi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1005E422: push dword ptr [ebp - 0x1c] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1005E425: mov eax, dword ptr [eax*4 + 0x100df640] */
    PUSH32(esp, MEM32(eax + ebx)); /* 0x1005E42C: push dword ptr [eax + ebx] */
    RECOMP_ICALL(MEM32(0x100E522C)); /* 0x1005E42F: call dword ptr [0x100e522c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1005E435: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E451; /* 0x1005E437: jne 0x1005e451 */
L_1005E439:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005E439: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
L_1005E43F:
    PUSH32(esp, eax); /* 0x1005E43F: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1005E440: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005E445: pop ecx */
L_1005E446:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1005E446: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005E449:
    eax = MEM32(ebp + (-0x10)); /* 0x1005E449: mov eax, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_100151FD; /* 0x1005E44C: jmp 0x100151fd */
L_1005E451:
    eax = MEM32(ebp + (-0x14)); /* 0x1005E451: mov eax, dword ptr [ebp - 0x14] */
    ecx = eax + eax; /* 0x1005E454: lea ecx, [eax + eax] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1005E457: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_BACKEDGE();
    goto L_1001517F; /* 0x1005E45A: jmp 0x1001517f */
L_1005E45F:
    eax = MEM32(ebp + (-0xC)); /* 0x1005E45F: mov eax, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_1001514A; /* 0x1005E462: jmp 0x1001514a */
L_1005E467:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005E467: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1005E46D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001805E; /* 0x1005E46F: je 0x1001805e */
L_1005E475:
    goto L_1005E4BE; /* 0x1005E475: jmp 0x1005e4be */
L_1005E477:
    PUSH32(esp, 0xAu); /* 0x1005E477: push 0xa */
    eax = POP32_VAL(esp); /* 0x1005E479: pop eax */
    PUSH32(esp, 0xDu); /* 0x1005E47A: push 0xd */
    /* cmp MEM8(ebp + (-0x1)), LO8(eax) */ /* 0x1005E47C: cmp byte ptr [ebp - 1], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E489; /* 0x1005E47F: jne 0x1005e489 */
L_1005E481:
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1005E481: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005E483: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_100180A8; /* 0x1005E484: jmp 0x100180a8 */
L_1005E489:
    MEM8(esi) = (uint8_t)(0xDu); /* 0x1005E489: mov byte ptr [esi], 0xd */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005E48C: inc esi */
    _flag_k = FK_INC;
    ecx = MEM32(edx * 4 + 0x100DF640); /* 0x1005E48D: mov ecx, dword ptr [edx*4 + 0x100df640] */
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x1005E494: mov al, byte ptr [ebp - 1] */
    MEM8(ecx + ebx + 0x5) = (uint8_t)(LO8(eax)); /* 0x1005E497: mov byte ptr [ecx + ebx + 5], al */
    RECOMP_BACKEDGE();
    goto L_100180A8; /* 0x1005E49B: jmp 0x100180a8 */
L_1005E4A0:
    PUSH32(esp, 0xAu); /* 0x1005E4A0: push 0xa */
    eax = POP32_VAL(esp); /* 0x1005E4A2: pop eax */
    /* cmp MEM8(ebp + (-0x1)), LO8(eax) */ /* 0x1005E4A3: cmp byte ptr [ebp - 1], al */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10018086; /* 0x1005E4A6: jne 0x10018086 */
L_1005E4AC:
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1005E4AC: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005E4AE: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_100180A6; /* 0x1005E4AF: jmp 0x100180a6 */
L_1005E4B4:
    PUSH32(esp, 0xDu); /* 0x1005E4B4: push 0xd */
    ecx = POP32_VAL(esp); /* 0x1005E4B6: pop ecx */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1005E4B7: mov byte ptr [esi], cl */
    RECOMP_BACKEDGE();
    goto L_10015F8D; /* 0x1005E4B9: jmp 0x10015f8d */
L_1005E4BE:
    edx = MEM32(ebp + (-0xC)); /* 0x1005E4BE: mov edx, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0xDu); /* 0x1005E4C1: push 0xd */
    ecx = POP32_VAL(esp); /* 0x1005E4C3: pop ecx */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1005E4C4: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005E4C6: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_100151E4; /* 0x1005E4C7: jmp 0x100151e4 */
L_1005E4CC:
    /* test edi, edi */ /* 0x1005E4CC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100151FA; /* 0x1005E4CE: je 0x100151fa */
L_1005E4D4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1005E4D4: dec esi */
    _flag_k = FK_DEC;
    SET_LO8(eax, MEM8(esi)); /* 0x1005E4D5: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1005E4D7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1005E4E1; /* 0x1005E4D9: js 0x1005e4e1 */
L_1005E4DB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005E4DB: inc esi */
    _flag_k = FK_INC;
    goto L_1005E590; /* 0x1005E4DC: jmp 0x1005e590 */
L_1005E4E1:
    eax = (uint32_t)LO8(eax); /* 0x1005E4E1: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1005E4E4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005E4E6: inc edx */
    _flag_k = FK_INC;
    /* cmp MEM8(eax + 0x100E1768), 0 */ /* 0x1005E4E7: cmp byte ptr [eax + 0x100e1768], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x100E1768)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E50D; /* 0x1005E4EE: jne 0x1005e50d */
L_1005E4F0:
    ebx = MEM32(ebp + (-0x10)); /* 0x1005E4F0: mov ebx, dword ptr [ebp - 0x10] */
L_1005E4F3:
    /* cmp edx, 4 */ /* 0x1005E4F3: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1005E50A; /* 0x1005E4F6: jg 0x1005e50a */
L_1005E4F8:
    /* cmp esi, ebx */ /* 0x1005E4F8: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1005E50A; /* 0x1005E4FA: jb 0x1005e50a */
L_1005E4FC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1005E4FC: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005E4FD: inc edx */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(esi); /* 0x1005E4FE: movzx eax, byte ptr [esi] */
    /* cmp MEM8(eax + 0x100E1768), 0 */ /* 0x1005E501: cmp byte ptr [eax + 0x100e1768], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x100E1768)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E4F3; /* 0x1005E508: je 0x1005e4f3 */
L_1005E50A:
    ebx = MEM32(ebp + (-0x24)); /* 0x1005E50A: mov ebx, dword ptr [ebp - 0x24] */
L_1005E50D:
    eax = (uint32_t)MEM8(esi); /* 0x1005E50D: movzx eax, byte ptr [esi] */
    eax = (int32_t)(int8_t)MEM8(eax + 0x100E1768); /* 0x1005E510: movsx eax, byte ptr [eax + 0x100e1768] */
    /* test eax, eax */ /* 0x1005E517: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E52B; /* 0x1005E519: jne 0x1005e52b */
L_1005E51B:
    RECOMP_CALL(sub_1001177D); /* 0x1005E51B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1005E520: mov dword ptr [eax], 0x2a */
    RECOMP_BACKEDGE();
    goto L_1005E446; /* 0x1005E526: jmp 0x1005e446 */
L_1005E52B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005E52B: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x1005E52C: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E534; /* 0x1005E52E: jne 0x1005e534 */
L_1005E530:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1005E530: add esi, edx */
    _flag_k = FK_ADD;
    goto L_1005E590; /* 0x1005E532: jmp 0x1005e590 */
L_1005E534:
    eax = MEM32(ebp + (-0xC)); /* 0x1005E534: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax * 4 + 0x100DF640); /* 0x1005E537: mov ecx, dword ptr [eax*4 + 0x100df640] */
    /* test MEM8(ecx + ebx + 0x4), 0x48u */ /* 0x1005E53E: test byte ptr [ecx + ebx + 4], 0x48 */
    _flag_a = (uint32_t)(MEM8(ecx + ebx + 0x4)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E57C; /* 0x1005E543: je 0x1005e57c */
L_1005E545:
    SET_LO8(eax, MEM8(esi)); /* 0x1005E545: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005E547: inc esi */
    _flag_k = FK_INC;
    MEM8(ecx + ebx + 0x5) = (uint8_t)(LO8(eax)); /* 0x1005E548: mov byte ptr [ecx + ebx + 5], al */
    eax = MEM32(ebp + (-0xC)); /* 0x1005E54C: mov eax, dword ptr [ebp - 0xc] */
    /* cmp edx, 2 */ /* 0x1005E54F: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1005E565; /* 0x1005E552: jl 0x1005e565 */
L_1005E554:
    ecx = MEM32(eax * 4 + 0x100DF640); /* 0x1005E554: mov ecx, dword ptr [eax*4 + 0x100df640] */
    SET_LO8(eax, MEM8(esi)); /* 0x1005E55B: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005E55D: inc esi */
    _flag_k = FK_INC;
    MEM8(ecx + ebx + 0x25) = (uint8_t)(LO8(eax)); /* 0x1005E55E: mov byte ptr [ecx + ebx + 0x25], al */
    eax = MEM32(ebp + (-0xC)); /* 0x1005E562: mov eax, dword ptr [ebp - 0xc] */
L_1005E565:
    /* cmp edx, 3 */ /* 0x1005E565: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E578; /* 0x1005E568: jne 0x1005e578 */
L_1005E56A:
    ecx = MEM32(eax * 4 + 0x100DF640); /* 0x1005E56A: mov ecx, dword ptr [eax*4 + 0x100df640] */
    SET_LO8(eax, MEM8(esi)); /* 0x1005E571: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005E573: inc esi */
    _flag_k = FK_INC;
    MEM8(ecx + ebx + 0x26) = (uint8_t)(LO8(eax)); /* 0x1005E574: mov byte ptr [ecx + ebx + 0x26], al */
L_1005E578:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1005E578: sub esi, edx */
    _flag_k = FK_CMP;
    goto L_1005E590; /* 0x1005E57A: jmp 0x1005e590 */
L_1005E57C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1005E57C: neg edx */
    _flag_k = FK_CMP;
    eax = edx; /* 0x1005E57E: mov eax, edx */
    PUSH32(esp, 1); /* 0x1005E580: push 1 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1005E582: cdq  */
    PUSH32(esp, edx); /* 0x1005E583: push edx */
    PUSH32(esp, eax); /* 0x1005E584: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005E585: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E588: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E58D: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1005E590:
    eax = MEM32(ebp + (-0x28)); /* 0x1005E590: mov eax, dword ptr [ebp - 0x28] */
    edi = MEM32(ebp + (-0x10)); /* 0x1005E593: mov edi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1005E596: sub esi, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1005E598: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1005E598: shr eax, 1 */
    PUSH32(esp, eax); /* 0x1005E59A: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1005E59B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1005E59E: push esi */
    PUSH32(esp, edi); /* 0x1005E59F: push edi */
    PUSH32(esp, 0); /* 0x1005E5A0: push 0 */
    PUSH32(esp, 0xFDE9u); /* 0x1005E5A2: push 0xfde9 */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x1005E5A7: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1005E5AD: mov edi, eax */
    /* test edi, edi */ /* 0x1005E5AF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E439; /* 0x1005E5B1: je 0x1005e439 */
L_1005E5B7:
    eax = MEM32(ebp + (-0xC)); /* 0x1005E5B7: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1005E5BA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x1005E5BC: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1005E5BE: setne cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1005E5C1: add edi, edi */
    _flag_k = FK_ADD;
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1005E5C3: mov eax, dword ptr [eax*4 + 0x100df640] */
    MEM32(eax + ebx + 0x30) = ecx; /* 0x1005E5CA: mov dword ptr [eax + ebx + 0x30], ecx */
    RECOMP_BACKEDGE();
    goto L_1002F791; /* 0x1005E5CE: jmp 0x1002f791 */
L_1005E5D3:
    PUSH32(esp, eax); /* 0x1005E5D3: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005E5D4: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005E5D9: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10015206; /* 0x1005E5DA: jmp 0x10015206 */
L_1005E5DF:
    edi = ebx; /* 0x1005E5DF: mov edi, ebx */
    RECOMP_BACKEDGE();
    goto L_1001520F; /* 0x1005E5E1: jmp 0x1001520f */
L_1005E5E6:
    esi = MEM32(ebp + (-0x10)); /* 0x1005E5E6: mov esi, dword ptr [ebp - 0x10] */
    eax = edi; /* 0x1005E5E9: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1005E5EB: cdq  */
    edi = esi; /* 0x1005E5EC: mov edi, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1005E5EE: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x1005E5F0: mov ecx, esi */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1005E5F2: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    edx = edi + eax * 2; /* 0x1005E5F4: lea edx, [edi + eax*2] */
    /* cmp edi, edx */ /* 0x1005E5F7: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005E650; /* 0x1005E5F9: jae 0x1005e650 */
L_1005E5FB:
    PUSH32(esp, 0xDu); /* 0x1005E5FB: push 0xd */
    MEM32(ebp + 0x10) = 0x1Au; /* 0x1005E5FD: mov dword ptr [ebp + 0x10], 0x1a */
    edi = POP32_VAL(esp); /* 0x1005E604: pop edi */
L_1005E605:
    eax = (uint32_t)MEM16(ecx); /* 0x1005E605: movzx eax, word ptr [ecx] */
    /* cmp LO16(eax), MEM16(ebp + 0x10) */ /* 0x1005E608: cmp ax, word ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x10)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E641; /* 0x1005E60C: je 0x1005e641 */
L_1005E60E:
    /* cmp LO16(eax), LO16(edi) */ /* 0x1005E60E: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E61E; /* 0x1005E611: je 0x1005e61e */
L_1005E613:
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1005E613: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1005E616: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1005E619: add ecx, 2 */
    _flag_k = FK_ADD;
    goto L_1005E63B; /* 0x1005E61C: jmp 0x1005e63b */
L_1005E61E:
    eax = edx + (-0x2); /* 0x1005E61E: lea eax, [edx - 2] */
    /* cmp ecx, eax */ /* 0x1005E621: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005E63B; /* 0x1005E623: jae 0x1005e63b */
L_1005E625:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1005E625: add ecx, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xAu); /* 0x1005E628: push 0xa */
    eax = POP32_VAL(esp); /* 0x1005E62A: pop eax */
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x1005E62B: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E635; /* 0x1005E62E: je 0x1005e635 */
L_1005E630:
    PUSH32(esp, 0xDu); /* 0x1005E630: push 0xd */
    eax = POP32_VAL(esp); /* 0x1005E632: pop eax */
    PUSH32(esp, eax); /* 0x1005E633: push eax */
    edi = POP32_VAL(esp); /* 0x1005E634: pop edi */
L_1005E635:
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1005E635: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1005E638: add esi, 2 */
    _flag_k = FK_ADD;
L_1005E63B:
    /* cmp ecx, edx */ /* 0x1005E63B: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005E650; /* 0x1005E63D: jae 0x1005e650 */
L_1005E63F:
    RECOMP_BACKEDGE();
    goto L_1005E605; /* 0x1005E63F: jmp 0x1005e605 */
L_1005E641:
    eax = MEM32(ebp + (-0xC)); /* 0x1005E641: mov eax, dword ptr [ebp - 0xc] */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1005E644: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)((MEM8(eax + ebx + 0x4) | 2)) << 24; _flag_b = (uint32_t)((MEM8(eax + ebx + 0x4) | 2)) << 24;
    MEM8(eax + ebx + 0x4) = (uint8_t)(MEM8(eax + ebx + 0x4) | 2); /* 0x1005E64B: or byte ptr [eax + ebx + 4], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1005E650:
    eax = MEM32(ebp + (-0x10)); /* 0x1005E650: mov eax, dword ptr [ebp - 0x10] */
    edi = esi; /* 0x1005E653: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1005E655: sub edi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    edi = edi & 0xFFFFFFFEu; /* 0x1005E657: and edi, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100151FA; /* 0x1005E65A: jmp 0x100151fa */
L_1005E65F:
    _flag_a = (uint32_t)((LO8(eax) | 4)) << 24; _flag_b = (uint32_t)((LO8(eax) | 4)) << 24;
    SET_LO8(eax, LO8(eax) | 4); /* 0x1005E65F: or al, 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    goto L_10031C8A; /* 0x1005E661: jmp 0x10031c8a */
L_1005E666:
    PUSH32(esp, 0); /* 0x1005E666: push 0 */
    eax = ebp + (-0x14); /* 0x1005E668: lea eax, [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1005E66B: add edi, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1005E66E: push eax */
    PUSH32(esp, 2); /* 0x1005E66F: push 2 */
    eax = ebp + (-0x8); /* 0x1005E671: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005E674: push eax */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x1005E675: mov eax, dword ptr [edx*4 + 0x100df640] */
    PUSH32(esp, MEM32(eax + ebx)); /* 0x1005E67C: push dword ptr [eax + ebx] */
    RECOMP_ICALL(MEM32(0x100E50FC)); /* 0x1005E67F: call dword ptr [0x100e50fc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1005E685: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E697; /* 0x1005E687: jne 0x1005e697 */
L_1005E689:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005E689: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1005E68F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E73C; /* 0x1005E691: jne 0x1005e73c */
L_1005E697:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1005E697: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E73C; /* 0x1005E69B: je 0x1005e73c */
L_1005E6A1:
    edx = MEM32(ebp + (-0xC)); /* 0x1005E6A1: mov edx, dword ptr [ebp - 0xc] */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x1005E6A4: mov eax, dword ptr [edx*4 + 0x100df640] */
    /* test MEM8(eax + ebx + 0x4), 0x48u */ /* 0x1005E6AB: test byte ptr [eax + ebx + 4], 0x48 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x4)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E6FE; /* 0x1005E6B0: je 0x1005e6fe */
L_1005E6B2:
    PUSH32(esp, 0xAu); /* 0x1005E6B2: push 0xa */
    eax = POP32_VAL(esp); /* 0x1005E6B4: pop eax */
    PUSH32(esp, 0xDu); /* 0x1005E6B5: push 0xd */
    /* cmp MEM16(ebp + (-0x8)), LO16(eax) */ /* 0x1005E6B7: cmp word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x8))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E6C5; /* 0x1005E6BB: jne 0x1005e6c5 */
L_1005E6BD:
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1005E6BD: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1005E6C0: add esi, 2 */
    _flag_k = FK_ADD;
    goto L_1005E6F8; /* 0x1005E6C3: jmp 0x1005e6f8 */
L_1005E6C5:
    eax = POP32_VAL(esp); /* 0x1005E6C5: pop eax */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1005E6C6: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1005E6C9: add esi, 2 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx * 4 + 0x100DF640); /* 0x1005E6CC: mov ecx, dword ptr [edx*4 + 0x100df640] */
    SET_LO8(eax, MEM8(ebp + (-0x8))); /* 0x1005E6D3: mov al, byte ptr [ebp - 8] */
    PUSH32(esp, 0xAu); /* 0x1005E6D6: push 0xa */
    MEM8(ecx + ebx + 0x5) = (uint8_t)(LO8(eax)); /* 0x1005E6D8: mov byte ptr [ecx + ebx + 5], al */
    ecx = MEM32(edx * 4 + 0x100DF640); /* 0x1005E6DC: mov ecx, dword ptr [edx*4 + 0x100df640] */
    SET_LO8(eax, MEM8(ebp + (-0x7))); /* 0x1005E6E3: mov al, byte ptr [ebp - 7] */
    MEM8(ecx + ebx + 0x25) = (uint8_t)(LO8(eax)); /* 0x1005E6E6: mov byte ptr [ecx + ebx + 0x25], al */
    eax = MEM32(edx * 4 + 0x100DF640); /* 0x1005E6EA: mov eax, dword ptr [edx*4 + 0x100df640] */
    ecx = POP32_VAL(esp); /* 0x1005E6F1: pop ecx */
    MEM8(eax + ebx + 0x26) = (uint8_t)(LO8(ecx)); /* 0x1005E6F2: mov byte ptr [eax + ebx + 0x26], cl */
L_1005E6F6:
    PUSH32(esp, 0xDu); /* 0x1005E6F6: push 0xd */
L_1005E6F8:
    ecx = POP32_VAL(esp); /* 0x1005E6F8: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10031CC7; /* 0x1005E6F9: jmp 0x10031cc7 */
L_1005E6FE:
    /* cmp esi, MEM32(ebp + (-0x10)) */ /* 0x1005E6FE: cmp esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E714; /* 0x1005E701: jne 0x1005e714 */
L_1005E703:
    PUSH32(esp, 0xAu); /* 0x1005E703: push 0xa */
    eax = POP32_VAL(esp); /* 0x1005E705: pop eax */
    /* cmp MEM16(ebp + (-0x8)), LO16(eax) */ /* 0x1005E706: cmp word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x8))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E714; /* 0x1005E70A: jne 0x1005e714 */
L_1005E70C:
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1005E70C: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1005E70F: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1005E6F6; /* 0x1005E712: jmp 0x1005e6f6 */
L_1005E714:
    PUSH32(esp, 1); /* 0x1005E714: push 1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1005E716: push -1 */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x1005E718: push -2 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005E71A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E71D: call 0x10017fde */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xC)); /* 0x1005E722: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E725: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xAu); /* 0x1005E728: push 0xa */
    eax = POP32_VAL(esp); /* 0x1005E72A: pop eax */
    /* cmp MEM16(ebp + (-0x8)), LO16(eax) */ /* 0x1005E72B: cmp word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x8))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E6F6; /* 0x1005E72F: je 0x1005e6f6 */
L_1005E731:
    PUSH32(esp, 0xDu); /* 0x1005E731: push 0xd */
    ecx = POP32_VAL(esp); /* 0x1005E733: pop ecx */
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x1005E734: mov word ptr [esi], cx */
    RECOMP_BACKEDGE();
    goto L_10031CFF; /* 0x1005E737: jmp 0x10031cff */
L_1005E73C:
    edx = MEM32(ebp + (-0xC)); /* 0x1005E73C: mov edx, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0xDu); /* 0x1005E73F: push 0xd */
    ecx = POP32_VAL(esp); /* 0x1005E741: pop ecx */
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x1005E742: mov word ptr [esi], cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1005E745: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10031CC7; /* 0x1005E748: jmp 0x10031cc7 */
L_1005E74D:
    ecx = MEM32(edx * 4 + 0x100DF640); /* 0x1005E74D: mov ecx, dword ptr [edx*4 + 0x100df640] */
    SET_LO8(eax, MEM8(ecx + ebx + 0x4)); /* 0x1005E754: mov al, byte ptr [ecx + ebx + 4] */
    /* test LO8(eax), 0x40u */ /* 0x1005E758: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E767; /* 0x1005E75A: jne 0x1005e767 */
L_1005E75C:
    _flag_a = (uint32_t)((LO8(eax) | 2)) << 24; _flag_b = (uint32_t)((LO8(eax) | 2)) << 24;
    SET_LO8(eax, LO8(eax) | 2); /* 0x1005E75C: or al, 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx + ebx + 0x4) = (uint8_t)(LO8(eax)); /* 0x1005E75E: mov byte ptr [ecx + ebx + 4], al */
    RECOMP_BACKEDGE();
    goto L_10031CCC; /* 0x1005E762: jmp 0x10031ccc */
L_1005E767:
    SET_LO16(eax, MEM16(edi)); /* 0x1005E767: mov ax, word ptr [edi] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1005E76A: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1005E76D: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10031CCC; /* 0x1005E770: jmp 0x10031ccc */
L_1005E775:
    PUSH32(esp, 5); /* 0x1005E775: push 5 */
    esi = POP32_VAL(esp); /* 0x1005E777: pop esi */
    /* cmp eax, esi */ /* 0x1005E778: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E793; /* 0x1005E77A: jne 0x1005e793 */
L_1005E77C:
    RECOMP_CALL(sub_1001177D); /* 0x1005E77C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005E781: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_1001E471); /* 0x1005E787: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1005E78C: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1005E446; /* 0x1005E78E: jmp 0x1005e446 */
L_1005E793:
    /* cmp eax, 0x6Du */ /* 0x1005E793: cmp eax, 0x6d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E43F; /* 0x1005E796: jne 0x1005e43f */
L_1005E79C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1005E79C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1005E449; /* 0x1005E79E: jmp 0x1005e449 */
L_1005E7A3:
    MEM32(eax) = edi; /* 0x1005E7A3: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1001177D); /* 0x1005E7A5: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005E7AA: mov dword ptr [eax], 9 */
L_1005E7B0:
    RECOMP_CALL(sub_100A4670); /* 0x1005E7B0: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005E7B5:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005E7B5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015211; /* 0x1005E7B8: jmp 0x10015211 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10015218(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015218u);

L_10015218:
    PUSH32(esp, 0x10u); /* 0x10015218: push 0x10 */
    PUSH32(esp, 0x100152C8u); /* 0x1001521A: push 0x100152c8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1001521F: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10015224: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x10015226: mov dword ptr [ebp - 0x1c], ebx */
    esi = MEM32(ebp + 0x8); /* 0x10015229: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x1001522C: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E22D; /* 0x1001522F: je 0x1005e22d */
L_10015235:
    /* test esi, esi */ /* 0x10015235: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100152EC; /* 0x10015237: js 0x100152ec */
L_1001523D:
    /* cmp esi, MEM32(0x100DFDD8) */ /* 0x1001523D: cmp esi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100152EC; /* 0x10015243: jae 0x100152ec */
L_10015249:
    ebx = esi; /* 0x10015249: mov ebx, esi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x1001524B: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    edi = esi; /* 0x1001524E: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Fu);
    edi = edi & 0x1Fu; /* 0x10015250: and edi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edi) >> 26) & 1u); /* 0x10015253: shl edi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 6u; /* 0x10015253: shl edi, 6 */
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x10015256: mov eax, dword ptr [ebx*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + edi + 0x4); /* 0x1001525D: movsx eax, byte ptr [eax + edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x10015262: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E241; /* 0x10015265: je 0x1005e241 */
L_1001526B:
    eax = 0x7FFFFFFFu; /* 0x1001526B: mov eax, 0x7fffffff */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x10015270: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10015273: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10015275: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1005E24B; /* 0x10015276: je 0x1005e24b */
L_1001527C:
    PUSH32(esp, esi); /* 0x1001527C: push esi */
    RECOMP_CALL(sub_10014206); /* 0x1001527D: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10015282: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10015283: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x10015287: mov eax, dword ptr [ebx*4 + 0x100df640] */
    /* test MEM8(eax + edi + 0x4), 1 */ /* 0x1001528E: test byte ptr [eax + edi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E260; /* 0x10015293: je 0x1005e260 */
L_10015299:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10015299: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1001529C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1001529F: push esi */
    RECOMP_CALL(sub_10015078); /* 0x100152A0: call 0x10015078 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100152A5: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x100152A8: mov edi, eax */
L_100152AA:
    MEM32(ebp + (-0x1C)) = edi; /* 0x100152AA: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100152AD: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100152E4); /* 0x100152B4: call 0x100152e4 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x100152B9: mov eax, edi */
L_100152BB:
    RECOMP_CALL(sub_1000EDC3); /* 0x100152BB: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100152C0: ret  */
L_100152EC:
    RECOMP_CALL(sub_1001E471); /* 0x100152EC: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    goto L_1005E286; /* 0x100152F1: jmp 0x1005e286 */
L_1005E22D:
    RECOMP_CALL(sub_1001E471); /* 0x1005E22D: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1005E232: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1001177D); /* 0x1005E234: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005E239: mov dword ptr [eax], 9 */
    goto L_1005E298; /* 0x1005E23F: jmp 0x1005e298 */
L_1005E241:
    RECOMP_CALL(sub_1001E471); /* 0x1005E241: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1005E246: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005E288; /* 0x1005E249: jmp 0x1005e288 */
L_1005E24B:
    RECOMP_CALL(sub_1001E471); /* 0x1005E24B: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1005E250: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x1005E253: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005E258: mov dword ptr [eax], 0x16 */
    goto L_1005E293; /* 0x1005E25E: jmp 0x1005e293 */
L_1005E260:
    RECOMP_CALL(sub_1001177D); /* 0x1005E260: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005E265: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_1001E471); /* 0x1005E26B: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1005E270: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1005E273: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100152AA; /* 0x1005E276: jmp 0x100152aa */
L_1005E286:
    MEM32(eax) = ebx; /* 0x1005E286: mov dword ptr [eax], ebx */
L_1005E288:
    RECOMP_CALL(sub_1001177D); /* 0x1005E288: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x1005E28D: mov dword ptr [eax], 9 */
L_1005E293:
    RECOMP_CALL(sub_100A4670); /* 0x1005E293: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005E298:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005E298: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100152BB; /* 0x1005E29B: jmp 0x100152bb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100152E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100152E4u);

L_100152E4:
    PUSH32(esp, esi); /* 0x100152E4: push esi */
    RECOMP_CALL(sub_100141E0); /* 0x100152E5: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100152EA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100152EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100152F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100152F6u);

L_100152F6:
    PUSH32(esp, ebp); /* 0x100152F6: push ebp */
    ebp = esp; /* 0x100152F7: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x100152F9: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x100152FC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F0B1; /* 0x100152FE: je 0x1005f0b1 */
L_10015304:
    eax = MEM32(0x100DF740); /* 0x10015304: mov eax, dword ptr [0x100df740] */
    MEM32(ecx) = eax; /* 0x10015309: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001530B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1001530D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001530E: ret  */
L_1005F0B1:
    RECOMP_CALL(sub_1001177D); /* 0x1005F0B1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005F0B6: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005F0BC: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005F0C1: push 0x16 */
    eax = POP32_VAL(esp); /* 0x1005F0C3: pop eax */
    ebp = POP32_VAL(esp); /* 0x1005F0C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005F0C5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001530F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001530Fu);

L_1001530F:
    PUSH32(esp, 0x18u); /* 0x1001530F: push 0x18 */
    PUSH32(esp, 0x10015388u); /* 0x10015311: push 0x10015388 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10015316: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1001531B: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1001531E: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x10015321: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xBu); /* 0x10015325: push 0xb */
    RECOMP_CALL(sub_100145F8); /* 0x10015327: call 0x100145f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001532C: pop ecx */
    /* test eax, eax */ /* 0x1001532D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005EF00; /* 0x1001532F: je 0x1005ef00 */
L_10015335:
    PUSH32(esp, 0xBu); /* 0x10015335: push 0xb */
    RECOMP_CALL(sub_1000EDD7); /* 0x10015337: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001533C: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1001533D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10015341: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10015343:
    MEM32(ebp + (-0x28)) = ebx; /* 0x10015343: mov dword ptr [ebp - 0x28], ebx */
    /* cmp ebx, 0x40u */ /* 0x10015346: cmp ebx, 0x40 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100154F5; /* 0x10015349: jge 0x100154f5 */
L_1001534F:
    edi = MEM32(ebx * 4 + 0x100DF640); /* 0x1001534F: mov edi, dword ptr [ebx*4 + 0x100df640] */
    /* test edi, edi */ /* 0x10015356: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005EF2A; /* 0x10015358: je 0x1005ef2a */
L_1001535E:
    MEM32(ebp + (-0x20)) = edi; /* 0x1001535E: mov dword ptr [ebp - 0x20], edi */
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x10015361: mov eax, dword ptr [ebx*4 + 0x100df640] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x800u; /* 0x10015368: add eax, 0x800 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x1001536D: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100154EC; /* 0x1001536F: jae 0x100154ec */
L_10015375:
    /* test MEM8(edi + 0x4), 1 */ /* 0x10015375: test byte ptr [edi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001549B; /* 0x10015379: je 0x1001549b */
L_1001537F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x40u; /* 0x1001537F: add edi, 0x40 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001535E; /* 0x10015382: jmp 0x1001535e */
L_1001549B:
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x1001549B: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002C12A; /* 0x1001549F: je 0x1002c12a */
L_100154A5:
    eax = MEM32(ebp + (-0x24)); /* 0x100154A5: mov eax, dword ptr [ebp - 0x24] */
    /* test eax, eax */ /* 0x100154A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001537F; /* 0x100154AA: jne 0x1001537f */
L_100154B0:
    eax = edi + 0xC; /* 0x100154B0: lea eax, [edi + 0xc] */
    PUSH32(esp, eax); /* 0x100154B3: push eax */
    RECOMP_ICALL(MEM32(0x100E5038)); /* 0x100154B4: call dword ptr [0x100e5038] */
    RECOMP_FLAGS_IN();
    /* test MEM8(edi + 0x4), 1 */ /* 0x100154BA: test byte ptr [edi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005EF07; /* 0x100154BE: jne 0x1005ef07 */
L_100154C4:
    eax = MEM32(ebp + (-0x24)); /* 0x100154C4: mov eax, dword ptr [ebp - 0x24] */
    /* test eax, eax */ /* 0x100154C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001537F; /* 0x100154C9: jne 0x1001537f */
L_100154CF:
    MEM8(edi + 0x4) = (uint8_t)(1); /* 0x100154CF: mov byte ptr [edi + 4], 1 */
    _flag_a = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu));
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu; /* 0x100154D3: or dword ptr [edi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x100154D6: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx * 4 + 0x100DF640));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebx * 4 + 0x100DF640); /* 0x100154D8: sub esi, dword ptr [ebx*4 + 0x100df640] */
    _flag_k = FK_CMP;
    if (6u) _cf = (((esi) >> 5) & 1u); /* 0x100154DF: sar esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 6u);
    eax = ebx; /* 0x100154E2: mov eax, ebx */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x100154E4: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x100154E4: shl eax, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x100154E7: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100154E9: mov dword ptr [ebp - 0x1c], esi */
L_100154EC:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x100154EC: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005EF24; /* 0x100154EF: je 0x1005ef24 */
L_100154F5:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100154F5: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10015492); /* 0x100154FC: call 0x10015492 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10015501: mov eax, esi */
L_10015503:
    RECOMP_CALL(sub_1000EDC3); /* 0x10015503: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015508: ret  */
L_1002C12A:
    PUSH32(esp, 0xAu); /* 0x1002C12A: push 0xa */
    RECOMP_CALL(sub_1000EDD7); /* 0x1002C12C: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002C131: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x1002C132: mov dword ptr [ebp - 4], 1 */
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x1002C139: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002C155; /* 0x1002C13D: jne 0x1002c155 */
L_1002C13F:
    PUSH32(esp, 0); /* 0x1002C13F: push 0 */
    PUSH32(esp, 0xFA0u); /* 0x1002C141: push 0xfa0 */
    eax = edi + 0xC; /* 0x1002C146: lea eax, [edi + 0xc] */
    PUSH32(esp, eax); /* 0x1002C149: push eax */
    RECOMP_CALL(sub_10012426); /* 0x1002C14A: call 0x10012426 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002C14F: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + 1; /* 0x1002C152: inc dword ptr [edi + 8] */
    _flag_k = FK_INC;
L_1002C155:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002C155: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1002C163); /* 0x1002C159: call 0x1002c163 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100154A5; /* 0x1002C15E: jmp 0x100154a5 */
L_1005EF00:
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1005EF00: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015503; /* 0x1005EF02: jmp 0x10015503 */
L_1005EF07:
    eax = edi + 0xC; /* 0x1005EF07: lea eax, [edi + 0xc] */
    PUSH32(esp, eax); /* 0x1005EF0A: push eax */
    RECOMP_ICALL(MEM32(0x100E503C)); /* 0x1005EF0B: call dword ptr [0x100e503c] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1001537F; /* 0x1005EF11: jmp 0x1001537f */
L_1005EF24:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1005EF24: inc ebx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10015343; /* 0x1005EF25: jmp 0x10015343 */
L_1005EF2A:
    PUSH32(esp, 0x40u); /* 0x1005EF2A: push 0x40 */
    PUSH32(esp, 0x20u); /* 0x1005EF2C: push 0x20 */
    RECOMP_CALL(sub_10011208); /* 0x1005EF2E: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005EF33: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005EF34: pop ecx */
    ecx = eax; /* 0x1005EF35: mov ecx, eax */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1005EF37: mov dword ptr [ebp - 0x20], ecx */
    /* test ecx, ecx */ /* 0x1005EF3A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100154F5; /* 0x1005EF3C: je 0x100154f5 */
L_1005EF42:
    MEM32(ebx * 4 + 0x100DF640) = ecx; /* 0x1005EF42: mov dword ptr [ebx*4 + 0x100df640], ecx */
    _flag_a = (uint32_t)(MEM32(0x100DFDD8)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x100DFDD8) = MEM32(0x100DFDD8) + 0x20u; /* 0x1005EF49: add dword ptr [0x100dfdd8], 0x20 */
    _flag_k = FK_ADD;
L_1005EF50:
    eax = MEM32(ebx * 4 + 0x100DF640); /* 0x1005EF50: mov eax, dword ptr [ebx*4 + 0x100df640] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x800u; /* 0x1005EF57: add eax, 0x800 */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x1005EF5C: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005EF75; /* 0x1005EF5E: jae 0x1005ef75 */
L_1005EF60:
    MEM16(ecx + 0x4) = (uint16_t)(0xA00u); /* 0x1005EF60: mov word ptr [ecx + 4], 0xa00 */
    _flag_a = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu));
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu; /* 0x1005EF66: or dword ptr [ecx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x1005EF69: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x40u; /* 0x1005EF6D: add ecx, 0x40 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = ecx; /* 0x1005EF70: mov dword ptr [ebp - 0x20], ecx */
    RECOMP_BACKEDGE();
    goto L_1005EF50; /* 0x1005EF73: jmp 0x1005ef50 */
L_1005EF75:
    esi = ebx; /* 0x1005EF75: mov esi, ebx */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x1005EF77: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x1005EF77: shl esi, 5 */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1005EF7A: mov dword ptr [ebp - 0x1c], esi */
    eax = esi; /* 0x1005EF7D: mov eax, esi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1005EF7F: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = esi; /* 0x1005EF82: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1005EF84: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1005EF87: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1005EF87: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1005EF8A: mov eax, dword ptr [eax*4 + 0x100df640] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(1); /* 0x1005EF91: mov byte ptr [eax + ecx + 4], 1 */
    PUSH32(esp, esi); /* 0x1005EF96: push esi */
    RECOMP_CALL(sub_10014206); /* 0x1005EF97: call 0x10014206 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005EF9C: pop ecx */
    /* test eax, eax */ /* 0x1005EF9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100154F5; /* 0x1005EF9F: jne 0x100154f5 */
L_1005EFA5:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1005EFA5: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1005EFA8: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_BACKEDGE();
    goto L_100154F5; /* 0x1005EFAB: jmp 0x100154f5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100153B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100153B0u);

L_100153B0:
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x100153B0: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100153C6; /* 0x100153B4: je 0x100153c6 */
L_100153B6:
    /* test edi, edi */ /* 0x100153B6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002DE5D; /* 0x100153B8: jne 0x1002de5d */
L_100153BE:
    PUSH32(esp, MEM32(esi)); /* 0x100153BE: push dword ptr [esi] */
    RECOMP_CALL(sub_100141E0); /* 0x100153C0: call 0x100141e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100153C5: pop ecx */
L_100153C6:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100153C6: ret  */
L_1002DE5D:
    ecx = MEM32(esi); /* 0x1002DE5D: mov ecx, dword ptr [esi] */
    eax = ecx; /* 0x1002DE5F: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1002DE61: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1002DE64: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1002DE67: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1002DE67: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1002DE6A: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x1002DE71: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    goto L_100153BE; /* 0x1002DE76: jmp 0x100153be */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100153C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100153C7u);

L_100153C7:
    PUSH32(esp, 0x14u); /* 0x100153C7: push 0x14 */
    PUSH32(esp, 0x10015458u); /* 0x100153C9: push 0x10015458 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100153CE: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100153D3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x100153D5: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x20)) = ecx; /* 0x100153D8: mov dword ptr [ebp - 0x20], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100153DB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x18); /* 0x100153DD: mov esi, dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x100153E0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100153E2: setne al */
    /* test eax, eax */ /* 0x100153E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002DE83; /* 0x100153E7: je 0x1002de83 */
L_100153ED:
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x100153ED: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100153F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x100153F2: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100153F5: setne al */
    /* test eax, eax */ /* 0x100153F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002DE83; /* 0x100153FA: je 0x1002de83 */
L_10015400:
    /* cmp MEM32(ebp + 0x1C), ecx */ /* 0x10015400: cmp dword ptr [ebp + 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015418; /* 0x10015403: je 0x10015418 */
L_10015405:
    eax = MEM32(ebp + 0x14); /* 0x10015405: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFE7Fu);
    eax = eax & 0xFFFFFE7Fu; /* 0x10015408: and eax, 0xfffffe7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1001540D: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1001540F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10015411: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1002DE83; /* 0x10015412: je 0x1002de83 */
L_10015418:
    MEM32(ebp + (-0x4)) = ecx; /* 0x10015418: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1001541B: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1001541E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10015421: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10015424: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10015427: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1001542A: push esi */
    eax = ebp + (-0x20); /* 0x1001542B: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1001542E: push eax */
    RECOMP_CALL(sub_10015509); /* 0x1001542F: call 0x10015509 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x10015434: add esp, 0x1c */
    _flag_k = FK_ADD;
    edi = eax; /* 0x10015437: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x10015439: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1001543C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100153B0); /* 0x10015443: call 0x100153b0 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x10015448: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002DE7B; /* 0x1001544A: jne 0x1002de7b */
L_10015450:
    eax = edi; /* 0x10015450: mov eax, edi */
L_10015452:
    RECOMP_CALL(sub_1000EDC3); /* 0x10015452: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015457: ret  */
L_1002DE7B:
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x1002DE7B: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015450; /* 0x1002DE7E: jmp 0x10015450 */
L_1002DE83:
    RECOMP_CALL(sub_1001177D); /* 0x1002DE83: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_1005DDA4; /* 0x1002DE88: jmp 0x1005dda4 */
L_1005DDA4:
    PUSH32(esp, 0x16u); /* 0x1005DDA4: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1005DDA6: pop esi */
    MEM32(eax) = esi; /* 0x1005DDA7: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1005DDA9: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1005DDAE: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10015452; /* 0x1005DDB0: jmp 0x10015452 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10015474(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015474u);

L_10015474:
    PUSH32(esp, ebp); /* 0x10015474: push ebp */
    ebp = esp; /* 0x10015475: mov ebp, esp */
    PUSH32(esp, 1); /* 0x10015477: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10015479: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1001547C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1001547F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10015482: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10015485: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_100153C7); /* 0x10015488: call 0x100153c7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1001548D: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10015490: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015491: ret  */
    RECOMP_REGS_OUT();
}

void sub_10015492(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015492u);

L_10015492:
    PUSH32(esp, 0xBu); /* 0x10015492: push 0xb */
    RECOMP_CALL(sub_1000EDFC); /* 0x10015494: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10015499: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001549A: ret  */
    RECOMP_REGS_OUT();
}

void sub_10015509(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015509u);

L_10015509:
    PUSH32(esp, ebp); /* 0x10015509: push ebp */
    ebp = esp; /* 0x1001550A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x1001550C: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001550F: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10015510: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = 0xCu; /* 0x10015512: mov dword ptr [ebp - 0x38], 0xc */
    /* test MEM8(ebp + 0x14), 0x80u */ /* 0x10015519: test byte ptr [ebp + 0x14], 0x80 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x1001551D: push edi */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1001551E: mov dword ptr [ebp - 0x20], ebx */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ebx)); /* 0x10015521: mov byte ptr [ebp - 2], bl */
    MEM32(ebp + (-0x34)) = ebx; /* 0x10015524: mov dword ptr [ebp - 0x34], ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005DDC0; /* 0x10015527: jne 0x1005ddc0 */
L_1001552D:
    MEM32(ebp + (-0x30)) = 1; /* 0x1001552D: mov dword ptr [ebp - 0x30], 1 */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x10015534: mov byte ptr [ebp - 1], bl */
L_10015537:
    eax = ebp + (-0x20); /* 0x10015537: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1001553A: push eax */
    RECOMP_CALL(sub_100152F6); /* 0x1001553B: call 0x100152f6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10015540: pop ecx */
    /* test eax, eax */ /* 0x10015541: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E1B0; /* 0x10015543: jne 0x1005e1b0 */
L_10015549:
    ecx = MEM32(ebp + 0x14); /* 0x10015549: mov ecx, dword ptr [ebp + 0x14] */
    eax = 0x8000u; /* 0x1001554C: mov eax, 0x8000 */
    /* test eax, ecx */ /* 0x10015551: test eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10015566; /* 0x10015553: jne 0x10015566 */
L_10015555:
    /* test ecx, 0x00074000u */ /* 0x10015555: test ecx, 0x74000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00074000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10015562; /* 0x1001555B: jne 0x10015562 */
L_1001555D:
    /* cmp MEM32(ebp + (-0x20)), eax */ /* 0x1001555D: cmp dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015566; /* 0x10015560: je 0x10015566 */
L_10015562:
    _flag_a = (uint32_t)((MEM8(ebp + (-0x1)) | 0x80u)) << 24; _flag_b = (uint32_t)((MEM8(ebp + (-0x1)) | 0x80u)) << 24;
    MEM8(ebp + (-0x1)) = (uint8_t)(MEM8(ebp + (-0x1)) | 0x80u); /* 0x10015562: or byte ptr [ebp - 1], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10015566:
    eax = ecx; /* 0x10015566: mov eax, ecx */
    edx = 0xC0000000u; /* 0x10015568: mov edx, 0xc0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1001556D: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x10015570: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002FC72; /* 0x10015572: jne 0x1002fc72 */
L_10015578:
    edi = 0x80000000u; /* 0x10015578: mov edi, 0x80000000 */
L_1001557D:
    MEM32(ebp + (-0x8)) = edi; /* 0x1001557D: mov dword ptr [ebp - 8], edi */
L_10015580:
    eax = MEM32(ebp + 0x18); /* 0x10015580: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x10015583: push esi */
    PUSH32(esp, 0x10u); /* 0x10015584: push 0x10 */
    esi = POP32_VAL(esp); /* 0x10015586: pop esi */
    PUSH32(esp, 2); /* 0x10015587: push 2 */
    edx = POP32_VAL(esp); /* 0x10015589: pop edx */
    MEM32(ebp + (-0x28)) = edx; /* 0x1001558A: mov dword ptr [ebp - 0x28], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1001558D: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002DF6F; /* 0x1001558F: je 0x1002df6f */
L_10015595:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x10015595: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002F785; /* 0x10015597: je 0x1002f785 */
L_1001559D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1001559D: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002DF77; /* 0x1001559F: je 0x1002df77 */
L_100155A5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x100155A5: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002DC5D; /* 0x100155A7: jne 0x1002dc5d */
L_100155AD:
    MEM32(ebp + (-0xC)) = 3; /* 0x100155AD: mov dword ptr [ebp - 0xc], 3 */
L_100155B4:
    eax = ecx; /* 0x100155B4: mov eax, ecx */
    esi = 0x400u; /* 0x100155B6: mov esi, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x100155BB: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x100155C0: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1005DE05; /* 0x100155C2: jg 0x1005de05 */
L_100155C8:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100155D2; /* 0x100155C8: je 0x100155d2 */
L_100155CA:
    /* test eax, eax */ /* 0x100155CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002FC87; /* 0x100155CC: jne 0x1002fc87 */
L_100155D2:
    PUSH32(esp, 3); /* 0x100155D2: push 3 */
L_100155D4:
    esi = POP32_VAL(esp); /* 0x100155D4: pop esi */
L_100155D5:
    edx = 0x80u; /* 0x100155D5: mov edx, 0x80 */
    eax = ebx; /* 0x100155DA: mov eax, ebx */
    MEM32(ebp + (-0x18)) = edx; /* 0x100155DC: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x10)) = eax; /* 0x100155DF: mov dword ptr [ebp - 0x10], eax */
    /* test ecx, 0x100u */ /* 0x100155E2: test ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002FCAF; /* 0x100155E8: jne 0x1002fcaf */
L_100155EE:
    /* test LO8(ecx), 0x40u */ /* 0x100155EE: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005DE53; /* 0x100155F1: jne 0x1005de53 */
L_100155F7:
    /* test ecx, 0x1000u */ /* 0x100155F7: test ecx, 0x1000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100326BB; /* 0x100155FD: jne 0x100326bb */
L_10015603:
    /* test ecx, 0x2000u */ /* 0x10015603: test ecx, 0x2000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005DE6D; /* 0x10015609: jne 0x1005de6d */
L_1001560F:
    /* test LO8(ecx), 0x20u */ /* 0x1001560F: test cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005DE7A; /* 0x10015612: jne 0x1005de7a */
L_10015618:
    /* test LO8(ecx), 0x10u */ /* 0x10015618: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005DE81; /* 0x1001561B: jne 0x1005de81 */
L_10015621:
    RECOMP_CALL(sub_1001530F); /* 0x10015621: call 0x1001530f */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x10015626: mov edi, dword ptr [ebp + 0xc] */
    MEM32(edi) = eax; /* 0x10015629: mov dword ptr [edi], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1001562B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DE8E; /* 0x1001562E: je 0x1005de8e */
L_10015634:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x10015634: push dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x10015637: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1001563A: push dword ptr [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x1001563D: push esi */
    MEM32(eax) = 1; /* 0x1001563E: mov dword ptr [eax], 1 */
    eax = ebp + (-0x38); /* 0x10015644: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x10015647: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x10015648: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1001564B: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001564E: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100157A1); /* 0x10015651: call 0x100157a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x10015656: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x10015659: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1001565C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002E2A3; /* 0x1001565F: je 0x1002e2a3 */
L_10015665:
    PUSH32(esp, eax); /* 0x10015665: push eax */
    RECOMP_ICALL(MEM32(0x100E5210)); /* 0x10015666: call dword ptr [0x100e5210] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1001566C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005DEED; /* 0x1001566E: je 0x1005deed */
L_10015674:
    /* cmp eax, 2 */ /* 0x10015674: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DF36; /* 0x10015677: je 0x1005df36 */
L_1001567D:
    /* cmp eax, 3 */ /* 0x1001567D: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DF3F; /* 0x10015680: je 0x1005df3f */
L_10015686:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x10015686: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(edi)); /* 0x10015689: push dword ptr [edi] */
    RECOMP_CALL(sub_1001501C); /* 0x1001568B: call 0x1001501c */
    RECOMP_FLAGS_IN();
    SET_LO8(edx, MEM8(ebp + (-0x1))); /* 0x10015690: mov dl, byte ptr [ebp - 1] */
    ecx = POP32_VAL(esp); /* 0x10015693: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10015694: pop ecx */
    ecx = MEM32(edi); /* 0x10015695: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)((LO8(edx) | 1)) << 24; _flag_b = (uint32_t)((LO8(edx) | 1)) << 24;
    SET_LO8(edx, LO8(edx) | 1); /* 0x10015697: or dl, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ecx; /* 0x1001569A: mov eax, ecx */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x1001569C: mov byte ptr [ebp - 1], dl */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1001569F: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100156A2: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100156A5: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100156A5: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100156A8: mov eax, dword ptr [eax*4 + 0x100df640] */
    MEM8(eax + ecx + 0x4) = (uint8_t)(LO8(edx)); /* 0x100156AF: mov byte ptr [eax + ecx + 4], dl */
    ecx = MEM32(edi); /* 0x100156B3: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x100156B5: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x100156B7: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100156BA: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x100156BD: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x100156BD: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x100156C0: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    MEM8(eax + ecx + 0x24) = (uint8_t)(MEM8(eax + ecx + 0x24) & 0x80u); /* 0x100156C7: and byte ptr [eax + ecx + 0x24], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, LO8(edx)); /* 0x100156CC: mov al, dl */
    ecx = MEM32(ebp + 0x14); /* 0x100156CE: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x48u) << 24;
    SET_LO8(eax, LO8(eax) & 0x48u); /* 0x100156D1: and al, 0x48 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x3)) = (uint8_t)(LO8(eax)); /* 0x100156D3: mov byte ptr [ebp - 3], al */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100156E5; /* 0x100156D6: jne 0x100156e5 */
L_100156D8:
    /* test LO8(edx), LO8(edx) */ /* 0x100156D8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10015729; /* 0x100156DA: jns 0x10015729 */
L_100156DC:
    /* test LO8(ecx), 2 */ /* 0x100156DC: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005DF48; /* 0x100156DF: jne 0x1005df48 */
L_100156E5:
    /* test LO8(edx), LO8(edx) */ /* 0x100156E5: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10015729; /* 0x100156E7: jns 0x10015729 */
L_100156E9:
    /* test ecx, 0x00074000u */ /* 0x100156E9: test ecx, 0x74000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00074000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10015708; /* 0x100156EF: jne 0x10015708 */
L_100156F1:
    eax = MEM32(ebp + (-0x20)); /* 0x100156F1: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00074000u);
    eax = eax & 0x00074000u; /* 0x100156F4: and eax, 0x74000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002DFA3; /* 0x100156F9: jne 0x1002dfa3 */
L_100156FF:
    _flag_a = (uint32_t)((ecx | 0x4000u)); _flag_b = (uint32_t)((ecx | 0x4000u));
    ecx = ecx | 0x4000u; /* 0x100156FF: or ecx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10015705:
    MEM32(ebp + 0x14) = ecx; /* 0x10015705: mov dword ptr [ebp + 0x14], ecx */
L_10015708:
    eax = ecx; /* 0x10015708: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00074000u);
    eax = eax & 0x00074000u; /* 0x1001570A: and eax, 0x74000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x4000u */ /* 0x1001570F: cmp eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10031644; /* 0x10015714: jne 0x10031644 */
L_1001571A:
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ebx)); /* 0x1001571A: mov byte ptr [ebp - 2], bl */
L_1001571D:
    /* test ecx, 0x00070000u */ /* 0x1001571D: test ecx, 0x70000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00070000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1003166D; /* 0x10015723: jne 0x1003166d */
L_10015729:
    edx = MEM32(edi); /* 0x10015729: mov edx, dword ptr [edi] */
    eax = edx; /* 0x1001572B: mov eax, edx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1001572D: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10015730: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x10015733: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x10015733: shl edx, 6 */
    ecx = MEM32(eax * 4 + 0x100DF640); /* 0x10015736: mov ecx, dword ptr [eax*4 + 0x100df640] */
    SET_LO8(eax, MEM8(ecx + edx + 0x24)); /* 0x1001573D: mov al, byte ptr [ecx + edx + 0x24] */
    _flag_a = (uint32_t)((LO8(eax) ^ MEM8(ebp + (-0x2)))) << 24; _flag_b = (uint32_t)((LO8(eax) ^ MEM8(ebp + (-0x2)))) << 24;
    SET_LO8(eax, LO8(eax) ^ MEM8(ebp + (-0x2))); /* 0x10015741: xor al, byte ptr [ebp - 2] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x7Fu); /* 0x10015744: and al, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(ecx + edx + 0x24) ^ LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ecx + edx + 0x24) ^ LO8(eax))) << 24;
    MEM8(ecx + edx + 0x24) = (uint8_t)(MEM8(ecx + edx + 0x24) ^ LO8(eax)); /* 0x10015746: xor byte ptr [ecx + edx + 0x24], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(edi); /* 0x1001574A: mov esi, dword ptr [edi] */
    eax = esi; /* 0x1001574C: mov eax, esi */
    ecx = MEM32(ebp + 0x14); /* 0x1001574E: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    esi = esi & 0x1Fu; /* 0x10015751: and esi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10015754: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    if (6u) _cf = (((esi) >> 26) & 1u); /* 0x10015757: shl esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 6u; /* 0x10015757: shl esi, 6 */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x1001575A: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x1001575A: shr ecx, 0x10 */
    if (7u) _cf = (((LO8(ecx)) >> 1) & 1u); /* 0x1001575D: shl cl, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 7u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 7u); /* 0x1001575D: shl cl, 7 */
    edx = MEM32(eax * 4 + 0x100DF640); /* 0x10015760: mov edx, dword ptr [eax*4 + 0x100df640] */
    SET_LO8(eax, MEM8(edx + esi + 0x24)); /* 0x10015767: mov al, byte ptr [edx + esi + 0x24] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x7Fu); /* 0x1001576B: and al, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(ecx) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(ecx) | LO8(eax))) << 24;
    SET_LO8(ecx, LO8(ecx) | LO8(eax)); /* 0x1001576D: or cl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + esi + 0x24) = (uint8_t)(LO8(ecx)); /* 0x1001576F: mov byte ptr [edx + esi + 0x24], cl */
    ecx = MEM32(ebp + 0x14); /* 0x10015773: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp MEM8(ebp + (-0x3)), LO8(ebx) */ /* 0x10015776: cmp byte ptr [ebp - 3], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x3))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015784; /* 0x10015779: jne 0x10015784 */
L_1001577B:
    /* test LO8(ecx), 8 */ /* 0x1001577B: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E112; /* 0x1001577E: jne 0x1005e112 */
L_10015784:
    esi = MEM32(ebp + (-0x8)); /* 0x10015784: mov esi, dword ptr [ebp - 8] */
    edx = 0xC0000000u; /* 0x10015787: mov edx, 0xc0000000 */
    eax = esi; /* 0x1001578C: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1001578E: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x10015790: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100326C9; /* 0x10015792: je 0x100326c9 */
L_10015798:
    eax = ebx; /* 0x10015798: mov eax, ebx */
L_1001579A:
    esi = POP32_VAL(esp); /* 0x1001579A: pop esi */
L_1001579B:
    edi = POP32_VAL(esp); /* 0x1001579B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1001579C: pop ebx */
    esp = ebp; /* 0x1001579D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1001579F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100157A0: ret  */
L_1002DC5D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x40u; /* 0x1002DC5D: sub eax, 0x40 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1002DF86; /* 0x1002DC60: jne 0x1002df86 */
L_1002DC66:
    /* cmp edi, 0x80000000u */ /* 0x1002DC66: cmp edi, 0x80000000 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1002DC6C: sete al */
    MEM32(ebp + (-0xC)) = eax; /* 0x1002DC6F: mov dword ptr [ebp - 0xc], eax */
    RECOMP_BACKEDGE();
    goto L_100155B4; /* 0x1002DC72: jmp 0x100155b4 */
L_1002DF6F:
    MEM32(ebp + (-0xC)) = ebx; /* 0x1002DF6F: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_BACKEDGE();
    goto L_100155B4; /* 0x1002DF72: jmp 0x100155b4 */
L_1002DF77:
    MEM32(ebp + (-0xC)) = edx; /* 0x1002DF77: mov dword ptr [ebp - 0xc], edx */
    RECOMP_BACKEDGE();
    goto L_100155B4; /* 0x1002DF7A: jmp 0x100155b4 */
L_1002DF7F:
    PUSH32(esp, 4); /* 0x1002DF7F: push 4 */
    RECOMP_BACKEDGE();
    goto L_100155D4; /* 0x1002DF81: jmp 0x100155d4 */
L_1002DF86:
    RECOMP_CALL(sub_1001E471); /* 0x1002DF86: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    goto L_1005DE24; /* 0x1002DF8B: jmp 0x1005de24 */
L_1002DF90:
    PUSH32(esp, 5); /* 0x1002DF90: push 5 */
    RECOMP_BACKEDGE();
    goto L_100155D4; /* 0x1002DF92: jmp 0x100155d4 */
L_1002DF97:
    PUSH32(esp, MEM32(edi)); /* 0x1002DF97: push dword ptr [edi] */
    RECOMP_CALL(sub_10014DF1); /* 0x1002DF99: call 0x10014df1 */
    RECOMP_FLAGS_IN();
    goto L_1002E2DC; /* 0x1002DF9E: jmp 0x1002e2dc */
L_1002DFA3:
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1002DFA3: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015705; /* 0x1002DFA5: jmp 0x10015705 */
L_1002DFAA:
    /* test esi, esi */ /* 0x1002DFAA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005E082; /* 0x1002DFAC: jne 0x1005e082 */
L_1002DFB2:
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1002DFB2: jmp 0x10015729 */
L_1002E2A3:
    ecx = MEM32(ebp + (-0x8)); /* 0x1002E2A3: mov ecx, dword ptr [ebp - 8] */
    edx = 0xC0000000u; /* 0x1002E2A6: mov edx, 0xc0000000 */
    eax = ecx; /* 0x1002E2AB: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1002E2AD: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x1002E2AF: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DEAF; /* 0x1002E2B1: je 0x1005deaf */
L_1002E2B7:
    ecx = MEM32(edi); /* 0x1002E2B7: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1002E2B9: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1002E2BB: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1002E2BE: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1002E2C1: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1002E2C1: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1002E2C4: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x1002E2CB: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1002E2D0: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1002E2D6: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1002E2D7: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
L_1002E2DC:
    ecx = POP32_VAL(esp); /* 0x1002E2DC: pop ecx */
L_1002E2DD:
    RECOMP_CALL(sub_1001177D); /* 0x1002E2DD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x1002E2E2: mov ebx, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_10015798; /* 0x1002E2E4: jmp 0x10015798 */
L_1002F785:
    MEM32(ebp + (-0xC)) = 1; /* 0x1002F785: mov dword ptr [ebp - 0xc], 1 */
    RECOMP_BACKEDGE();
    goto L_100155B4; /* 0x1002F78C: jmp 0x100155b4 */
L_1002FC72:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002FC72: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1003130E; /* 0x1002FC73: je 0x1003130e */
L_1002FC79:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002FC79: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1005DDCC; /* 0x1002FC7A: jne 0x1005ddcc */
L_1002FC80:
    edi = edx; /* 0x1002FC80: mov edi, edx */
    RECOMP_BACKEDGE();
    goto L_1001557D; /* 0x1002FC82: jmp 0x1001557d */
L_1002FC87:
    /* cmp eax, 0x100u */ /* 0x1002FC87: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF7F; /* 0x1002FC8C: je 0x1002df7f */
L_1002FC92:
    /* cmp eax, 0x200u */ /* 0x1002FC92: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF90; /* 0x1002FC97: je 0x1002df90 */
L_1002FC9D:
    /* cmp eax, 0x300u */ /* 0x1002FC9D: cmp eax, 0x300 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x300u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002DF86; /* 0x1002FCA2: jne 0x1002df86 */
L_1002FCA8:
    esi = edx; /* 0x1002FCA8: mov esi, edx */
    RECOMP_BACKEDGE();
    goto L_100155D5; /* 0x1002FCAA: jmp 0x100155d5 */
L_1002FCAF:
    eax = MEM32(0x100E0668); /* 0x1002FCAF: mov eax, dword ptr [0x100e0668] */
    eax = ~eax; /* 0x1002FCB4: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    eax = eax & MEM32(ebp + 0x1C); /* 0x1002FCB6: and eax, dword ptr [ebp + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), LO8(eax) */ /* 0x1002FCB9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebx; /* 0x1002FCBB: mov eax, ebx */
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100155EE; /* 0x1002FCBD: js 0x100155ee */
L_1002FCC3:
    goto L_1005DE48; /* 0x1002FCC3: jmp 0x1005de48 */
L_1003130E:
    /* test LO8(ecx), 8 */ /* 0x1003130E: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005DDEF; /* 0x10031311: jne 0x1005ddef */
L_10031317:
    edi = 0x40000000u; /* 0x10031317: mov edi, 0x40000000 */
    RECOMP_BACKEDGE();
    goto L_1001557D; /* 0x1003131C: jmp 0x1001557d */
L_10031644:
    /* cmp eax, 0x00010000u */ /* 0x10031644: cmp eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10031656; /* 0x10031649: je 0x10031656 */
L_1003164B:
    /* cmp eax, 0x00014000u */ /* 0x1003164B: cmp eax, 0x14000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00014000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005DFD4; /* 0x10031650: jne 0x1005dfd4 */
L_10031656:
    eax = ecx; /* 0x10031656: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x301u);
    eax = eax & 0x301u; /* 0x10031658: and eax, 0x301 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x301u */ /* 0x1003165D: cmp eax, 0x301 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x301u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001571D; /* 0x10031662: jne 0x1001571d */
L_10031668:
    goto L_1005DFFD; /* 0x10031668: jmp 0x1005dffd */
L_1003166D:
    MEM32(ebp + (-0x14)) = ebx; /* 0x1003166D: mov dword ptr [ebp - 0x14], ebx */
    /* test LO8(edx), 0x40u */ /* 0x10031670: test dl, 0x40 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10015729; /* 0x10031673: jne 0x10015729 */
L_10031679:
    eax = MEM32(ebp + (-0x8)); /* 0x10031679: mov eax, dword ptr [ebp - 8] */
    ecx = 0xC0000000u; /* 0x1003167C: mov ecx, 0xc0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x10031681: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x40000000u */ /* 0x10031683: cmp eax, 0x40000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DFAA; /* 0x10031688: je 0x1002dfaa */
L_1003168E:
    /* cmp eax, 0x80000000u */ /* 0x1003168E: cmp eax, 0x80000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E006; /* 0x10031693: jne 0x1005e006 */
L_10031699:
    PUSH32(esp, 3); /* 0x10031699: push 3 */
    eax = ebp + (-0x14); /* 0x1003169B: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1003169E: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1003169F: push dword ptr [edi] */
    RECOMP_CALL(sub_10015078); /* 0x100316A1: call 0x10015078 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100316A6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100316A9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x100316AC: je 0x1002df97 */
L_100316B2:
    ecx = MEM32(ebp + (-0x14)); /* 0x100316B2: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, 2); /* 0x100316B5: push 2 */
    edx = POP32_VAL(esp); /* 0x100316B7: pop edx */
    /* cmp eax, edx */ /* 0x100316B8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100316D1; /* 0x100316BA: je 0x100316d1 */
L_100316BC:
    /* cmp eax, 3 */ /* 0x100316BC: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E09F; /* 0x100316BF: jne 0x1005e09f */
L_100316C5:
    /* cmp ecx, 0x00BFBBEFu */ /* 0x100316C5: cmp ecx, 0xbfbbef */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00BFBBEFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E062; /* 0x100316CB: je 0x1005e062 */
L_100316D1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    ecx = ecx & 0xFFFFu; /* 0x100316D1: and ecx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFEu */ /* 0x100316D7: cmp ecx, 0xfffe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005E06B; /* 0x100316DD: je 0x1005e06b */
L_100316E3:
    /* cmp ecx, 0xFEFFu */ /* 0x100316E3: cmp ecx, 0xfeff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFEFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E09F; /* 0x100316E9: jne 0x1005e09f */
L_100316EF:
    PUSH32(esp, ebx); /* 0x100316EF: push ebx */
    PUSH32(esp, ebx); /* 0x100316F0: push ebx */
    PUSH32(esp, edx); /* 0x100316F1: push edx */
    PUSH32(esp, MEM32(edi)); /* 0x100316F2: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x100316F4: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x100316F9: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100316FB: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100316FE: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x10031701: je 0x1002df97 */
L_10031707:
    MEM8(ebp + (-0x2)) = (uint8_t)(2); /* 0x10031707: mov byte ptr [ebp - 2], 2 */
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1003170B: jmp 0x10015729 */
L_100326BB:
    _flag_a = (uint32_t)((edx | 0x100u)); _flag_b = (uint32_t)((edx | 0x100u));
    edx = edx | 0x100u; /* 0x100326BB: or edx, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = edx; /* 0x100326C1: mov dword ptr [ebp - 0x18], edx */
    RECOMP_BACKEDGE();
    goto L_10015603; /* 0x100326C4: jmp 0x10015603 */
L_100326C9:
    /* test LO8(ecx), 1 */ /* 0x100326C9: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015798; /* 0x100326CC: je 0x10015798 */
L_100326D2:
    goto L_1005E133; /* 0x100326D2: jmp 0x1005e133 */
L_1005DDC0:
    MEM32(ebp + (-0x30)) = ebx; /* 0x1005DDC0: mov dword ptr [ebp - 0x30], ebx */
    MEM8(ebp + (-0x1)) = (uint8_t)(0x10u); /* 0x1005DDC3: mov byte ptr [ebp - 1], 0x10 */
    RECOMP_BACKEDGE();
    goto L_10015537; /* 0x1005DDC7: jmp 0x10015537 */
L_1005DDCC:
    RECOMP_CALL(sub_1001E471); /* 0x1005DDCC: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1005DDD1: mov dword ptr [eax], ebx */
    eax = MEM32(ebp + 0xC); /* 0x1005DDD3: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1005DDD6: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x1005DDD9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005DDDE: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1005DDE0: pop ebx */
    MEM32(eax) = ebx; /* 0x1005DDE1: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1005DDE3: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1005DDE8: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_1001579B; /* 0x1005DDEA: jmp 0x1001579b */
L_1005DDEF:
    /* test ecx, 0x00070000u */ /* 0x1005DDEF: test ecx, 0x70000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00070000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10031317; /* 0x1005DDF5: je 0x10031317 */
L_1005DDFB:
    edi = edx; /* 0x1005DDFB: mov edi, edx */
    MEM32(ebp + (-0x8)) = edx; /* 0x1005DDFD: mov dword ptr [ebp - 8], edx */
    RECOMP_BACKEDGE();
    goto L_10015580; /* 0x1005DE00: jmp 0x10015580 */
L_1005DE05:
    /* cmp eax, 0x500u */ /* 0x1005DE05: cmp eax, 0x500 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x500u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DE40; /* 0x1005DE0A: je 0x1005de40 */
L_1005DE0C:
    /* cmp eax, 0x600u */ /* 0x1005DE0C: cmp eax, 0x600 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x600u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF90; /* 0x1005DE11: je 0x1002df90 */
L_1005DE17:
    /* cmp eax, 0x700u */ /* 0x1005DE17: cmp eax, 0x700 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002DF86; /* 0x1005DE1C: jne 0x1002df86 */
L_1005DE22:
    goto L_1005DE40; /* 0x1005DE22: jmp 0x1005de40 */
L_1005DE24:
    MEM32(eax) = ebx; /* 0x1005DE24: mov dword ptr [eax], ebx */
    eax = MEM32(ebp + 0xC); /* 0x1005DE26: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1005DE29: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x1005DE2C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005DE31: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1005DE33: pop ebx */
    MEM32(eax) = ebx; /* 0x1005DE34: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x1005DE36: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10015798; /* 0x1005DE3B: jmp 0x10015798 */
L_1005DE40:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1005DE40: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005DE42: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_100155D5; /* 0x1005DE43: jmp 0x100155d5 */
L_1005DE48:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1005DE48: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005DE4A: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = edx; /* 0x1005DE4B: mov dword ptr [ebp - 0x18], edx */
    RECOMP_BACKEDGE();
    goto L_100155EE; /* 0x1005DE4E: jmp 0x100155ee */
L_1005DE53:
    _flag_a = (uint32_t)((edi | 0x00010000u)); _flag_b = (uint32_t)((edi | 0x00010000u));
    edi = edi | 0x00010000u; /* 0x1005DE53: or edi, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x04000000u; /* 0x1005DE59: mov eax, 0x4000000 */
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | 4)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | 4));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | 4; /* 0x1005DE5E: or dword ptr [ebp - 0xc], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x1005DE62: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x8)) = edi; /* 0x1005DE65: mov dword ptr [ebp - 8], edi */
    RECOMP_BACKEDGE();
    goto L_100155F7; /* 0x1005DE68: jmp 0x100155f7 */
L_1005DE6D:
    _flag_a = (uint32_t)((eax | 0x02000000u)); _flag_b = (uint32_t)((eax | 0x02000000u));
    eax = eax | 0x02000000u; /* 0x1005DE6D: or eax, 0x2000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x1005DE72: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    goto L_1001560F; /* 0x1005DE75: jmp 0x1001560f */
L_1005DE7A:
    _flag_a = (uint32_t)((eax | 0x08000000u)); _flag_b = (uint32_t)((eax | 0x08000000u));
    eax = eax | 0x08000000u; /* 0x1005DE7A: or eax, 0x8000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1005DE86; /* 0x1005DE7F: jmp 0x1005de86 */
L_1005DE81:
    _flag_a = (uint32_t)((eax | 0x10000000u)); _flag_b = (uint32_t)((eax | 0x10000000u));
    eax = eax | 0x10000000u; /* 0x1005DE81: or eax, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005DE86:
    MEM32(ebp + (-0x10)) = eax; /* 0x1005DE86: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    goto L_10015621; /* 0x1005DE89: jmp 0x10015621 */
L_1005DE8E:
    RECOMP_CALL(sub_1001E471); /* 0x1005DE8E: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1005DE93: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu));
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu; /* 0x1005DE95: or dword ptr [edi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1001177D); /* 0x1005DE98: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x1005DE9D: mov dword ptr [eax], 0x18 */
    RECOMP_CALL(sub_1001177D); /* 0x1005DEA3: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x1005DEA8: mov eax, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_1001579A; /* 0x1005DEAA: jmp 0x1001579a */
L_1005DEAF:
    /* test MEM8(ebp + 0x14), 1 */ /* 0x1005DEAF: test byte ptr [ebp + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002E2B7; /* 0x1005DEB3: je 0x1002e2b7 */
L_1005DEB9:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1005DEB9: push dword ptr [ebp - 0x10] */
    eax = ebp + (-0x38); /* 0x1005DEBC: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    ecx = ecx & 0x7FFFFFFFu; /* 0x1005DEBF: and ecx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1005DEC5: push dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1005DEC8: mov dword ptr [ebp - 8], ecx */
    PUSH32(esp, esi); /* 0x1005DECB: push esi */
    PUSH32(esp, eax); /* 0x1005DECC: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1005DECD: push dword ptr [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1005DED0: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1005DED1: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100157A1); /* 0x1005DED4: call 0x100157a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1005DED9: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1005DEDC: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005DEDF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002E2B7; /* 0x1005DEE2: je 0x1002e2b7 */
L_1005DEE8:
    RECOMP_BACKEDGE();
    goto L_10015665; /* 0x1005DEE8: jmp 0x10015665 */
L_1005DEED:
    ecx = MEM32(edi); /* 0x1005DEED: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1005DEEF: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1005DEF1: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1005DEF4: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1005DEF7: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1005DEF7: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1005DEFA: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x1005DF01: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005DF06: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1005DF0C: mov esi, eax */
    PUSH32(esp, esi); /* 0x1005DF0E: push esi */
    RECOMP_CALL(sub_1001E4A7); /* 0x1005DF0F: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005DF14: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1005DF15: push dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x100E5074)); /* 0x1005DF18: call dword ptr [0x100e5074] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1005DF1E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002E2DD; /* 0x1005DF20: jne 0x1002e2dd */
L_1005DF26:
    RECOMP_CALL(sub_1001177D); /* 0x1005DF26: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xDu; /* 0x1005DF2B: mov dword ptr [eax], 0xd */
    RECOMP_BACKEDGE();
    goto L_1002E2DD; /* 0x1005DF31: jmp 0x1002e2dd */
L_1005DF36:
    _flag_a = (uint32_t)((MEM8(ebp + (-0x1)) | 0x40u)) << 24; _flag_b = (uint32_t)((MEM8(ebp + (-0x1)) | 0x40u)) << 24;
    MEM8(ebp + (-0x1)) = (uint8_t)(MEM8(ebp + (-0x1)) | 0x40u); /* 0x1005DF36: or byte ptr [ebp - 1], 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    goto L_10015686; /* 0x1005DF3A: jmp 0x10015686 */
L_1005DF3F:
    _flag_a = (uint32_t)((MEM8(ebp + (-0x1)) | 8)) << 24; _flag_b = (uint32_t)((MEM8(ebp + (-0x1)) | 8)) << 24;
    MEM8(ebp + (-0x1)) = (uint8_t)(MEM8(ebp + (-0x1)) | 8); /* 0x1005DF3F: or byte ptr [ebp - 1], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    goto L_10015686; /* 0x1005DF43: jmp 0x10015686 */
L_1005DF48:
    PUSH32(esp, 2); /* 0x1005DF48: push 2 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1005DF4A: push -1 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1005DF4C: push -1 */
    PUSH32(esp, MEM32(edi)); /* 0x1005DF4E: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005DF50: call 0x10017fde */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005DF55: mov ecx, eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1005DF57: mov dword ptr [ebp - 0x2c], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x1005DF5A: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edx; /* 0x1005DF5C: mov dword ptr [ebp - 0x14], edx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005DF5F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1005DF62: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005DF7A; /* 0x1005DF65: jne 0x1005df7a */
L_1005DF67:
    RECOMP_CALL(sub_1001E471); /* 0x1005DF67: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x83u */ /* 0x1005DF6C: cmp dword ptr [eax], 0x83 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x83u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002DF97; /* 0x1005DF72: jne 0x1002df97 */
L_1005DF78:
    goto L_1005DFC9; /* 0x1005DF78: jmp 0x1005dfc9 */
L_1005DF7A:
    PUSH32(esp, 1); /* 0x1005DF7A: push 1 */
    eax = ebp + (-0x24); /* 0x1005DF7C: lea eax, [ebp - 0x24] */
    MEM32(ebp + (-0x24)) = ebx; /* 0x1005DF7F: mov dword ptr [ebp - 0x24], ebx */
    PUSH32(esp, eax); /* 0x1005DF82: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1005DF83: push dword ptr [edi] */
    RECOMP_CALL(sub_10015078); /* 0x1005DF85: call 0x10015078 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005DF8A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1005DF8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005DFB1; /* 0x1005DF8F: jne 0x1005dfb1 */
L_1005DF91:
    /* cmp MEM16(ebp + (-0x24)), 0x1Au */ /* 0x1005DF91: cmp word ptr [ebp - 0x24], 0x1a */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x24))) << 16; _flag_b = (uint32_t)(0x1Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005DFB1; /* 0x1005DF96: jne 0x1005dfb1 */
L_1005DF98:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1005DF98: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1005DF9B: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, MEM32(edi)); /* 0x1005DF9E: push dword ptr [edi] */
    RECOMP_CALL(sub_100A320E); /* 0x1005DFA0: call 0x100a320e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005DFA5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005DFA8: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x1005DFAB: je 0x1002df97 */
L_1005DFB1:
    PUSH32(esp, ebx); /* 0x1005DFB1: push ebx */
    PUSH32(esp, ebx); /* 0x1005DFB2: push ebx */
    PUSH32(esp, ebx); /* 0x1005DFB3: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005DFB4: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005DFB6: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005DFBB: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005DFBD: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005DFC0: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x1005DFC3: je 0x1002df97 */
L_1005DFC9:
    SET_LO8(edx, MEM8(ebp + (-0x1))); /* 0x1005DFC9: mov dl, byte ptr [ebp - 1] */
    ecx = MEM32(ebp + 0x14); /* 0x1005DFCC: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_BACKEDGE();
    goto L_100156E5; /* 0x1005DFCF: jmp 0x100156e5 */
L_1005DFD4:
    /* cmp eax, 0x00020000u */ /* 0x1005DFD4: cmp eax, 0x20000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DFFD; /* 0x1005DFD9: je 0x1005dffd */
L_1005DFDB:
    /* cmp eax, 0x00024000u */ /* 0x1005DFDB: cmp eax, 0x24000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00024000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DFFD; /* 0x1005DFE0: je 0x1005dffd */
L_1005DFE2:
    /* cmp eax, 0x00040000u */ /* 0x1005DFE2: cmp eax, 0x40000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DFF4; /* 0x1005DFE7: je 0x1005dff4 */
L_1005DFE9:
    /* cmp eax, 0x00044000u */ /* 0x1005DFE9: cmp eax, 0x44000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00044000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001571D; /* 0x1005DFEE: jne 0x1001571d */
L_1005DFF4:
    MEM8(ebp + (-0x2)) = (uint8_t)(1); /* 0x1005DFF4: mov byte ptr [ebp - 2], 1 */
    RECOMP_BACKEDGE();
    goto L_1001571D; /* 0x1005DFF8: jmp 0x1001571d */
L_1005DFFD:
    MEM8(ebp + (-0x2)) = (uint8_t)(2); /* 0x1005DFFD: mov byte ptr [ebp - 2], 2 */
    RECOMP_BACKEDGE();
    goto L_1001571D; /* 0x1005E001: jmp 0x1001571d */
L_1005E006:
    /* cmp eax, ecx */ /* 0x1005E006: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E008: jne 0x10015729 */
L_1005E00E:
    /* test esi, esi */ /* 0x1005E00E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E010: je 0x10015729 */
L_1005E016:
    PUSH32(esp, 2); /* 0x1005E016: push 2 */
    ecx = POP32_VAL(esp); /* 0x1005E018: pop ecx */
    /* cmp esi, ecx */ /* 0x1005E019: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005E0BF; /* 0x1005E01B: jbe 0x1005e0bf */
L_1005E021:
    /* cmp esi, 4 */ /* 0x1005E021: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005E034; /* 0x1005E024: jbe 0x1005e034 */
L_1005E026:
    /* cmp esi, 5 */ /* 0x1005E026: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E029: jne 0x10015729 */
L_1005E02F:
    goto L_1005E0BF; /* 0x1005E02F: jmp 0x1005e0bf */
L_1005E034:
    PUSH32(esp, ecx); /* 0x1005E034: push ecx */
    PUSH32(esp, ebx); /* 0x1005E035: push ebx */
    PUSH32(esp, ebx); /* 0x1005E036: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E037: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E039: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E03E: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1005E041: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E0BC; /* 0x1005E043: je 0x1005e0bc */
L_1005E045:
    PUSH32(esp, ebx); /* 0x1005E045: push ebx */
    PUSH32(esp, ebx); /* 0x1005E046: push ebx */
    PUSH32(esp, ebx); /* 0x1005E047: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E048: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E04A: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005E04F: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E051: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E054: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10031699; /* 0x1005E057: jne 0x10031699 */
L_1005E05D:
    RECOMP_BACKEDGE();
    goto L_1002DF97; /* 0x1005E05D: jmp 0x1002df97 */
L_1005E062:
    MEM8(ebp + (-0x2)) = (uint8_t)(1); /* 0x1005E062: mov byte ptr [ebp - 2], 1 */
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1005E066: jmp 0x10015729 */
L_1005E06B:
    PUSH32(esp, MEM32(edi)); /* 0x1005E06B: push dword ptr [edi] */
    RECOMP_CALL(sub_10014DF1); /* 0x1005E06D: call 0x10014df1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005E072: pop ecx */
    RECOMP_CALL(sub_1001177D); /* 0x1005E073: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1005E078: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x1005E07A: pop ebx */
    MEM32(eax) = ebx; /* 0x1005E07B: mov dword ptr [eax], ebx */
    RECOMP_BACKEDGE();
    goto L_10015798; /* 0x1005E07D: jmp 0x10015798 */
L_1005E082:
    PUSH32(esp, 2); /* 0x1005E082: push 2 */
    ecx = POP32_VAL(esp); /* 0x1005E084: pop ecx */
    /* cmp esi, ecx */ /* 0x1005E085: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1005E0BF; /* 0x1005E087: jbe 0x1005e0bf */
L_1005E089:
    /* cmp esi, 4 */ /* 0x1005E089: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1005E026; /* 0x1005E08C: ja 0x1005e026 */
L_1005E08E:
    PUSH32(esp, ecx); /* 0x1005E08E: push ecx */
    PUSH32(esp, ebx); /* 0x1005E08F: push ebx */
    PUSH32(esp, ebx); /* 0x1005E090: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E091: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E093: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E098: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1005E09B: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005E0BC; /* 0x1005E09D: je 0x1005e0bc */
L_1005E09F:
    PUSH32(esp, ebx); /* 0x1005E09F: push ebx */
    PUSH32(esp, ebx); /* 0x1005E0A0: push ebx */
    PUSH32(esp, ebx); /* 0x1005E0A1: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x1005E0A2: push dword ptr [edi] */
    RECOMP_CALL(sub_10017FDE); /* 0x1005E0A4: call 0x10017fde */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1005E0A9: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005E0AB: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E0AE: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x1005E0B1: je 0x1002df97 */
L_1005E0B7:
    RECOMP_BACKEDGE();
    goto L_10015729; /* 0x1005E0B7: jmp 0x10015729 */
L_1005E0BC:
    PUSH32(esp, 2); /* 0x1005E0BC: push 2 */
    ecx = POP32_VAL(esp); /* 0x1005E0BE: pop ecx */
L_1005E0BF:
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x2)); /* 0x1005E0BF: movsx eax, byte ptr [ebp - 2] */
    esi = ebx; /* 0x1005E0C3: mov esi, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005E0C5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005E0D8; /* 0x1005E0C6: je 0x1005e0d8 */
L_1005E0C8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005E0C8: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E0C9: jne 0x10015729 */
L_1005E0CF:
    MEM32(ebp + (-0x14)) = 0xFEFFu; /* 0x1005E0CF: mov dword ptr [ebp - 0x14], 0xfeff */
    goto L_1005E0E5; /* 0x1005E0D6: jmp 0x1005e0e5 */
L_1005E0D8:
    PUSH32(esp, 3); /* 0x1005E0D8: push 3 */
    ecx = POP32_VAL(esp); /* 0x1005E0DA: pop ecx */
    MEM32(ebp + (-0x14)) = 0x00BFBBEFu; /* 0x1005E0DB: mov dword ptr [ebp - 0x14], 0xbfbbef */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1005E0E2: mov dword ptr [ebp - 0x28], ecx */
L_1005E0E5:
    eax = ecx; /* 0x1005E0E5: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1005E0E7: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1005E0E9: push eax */
    eax = ebp + (-0x14); /* 0x1005E0EA: lea eax, [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1005E0ED: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1005E0EF: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x1005E0F0: push dword ptr [edi] */
    RECOMP_CALL(sub_1002029C); /* 0x1005E0F2: call 0x1002029c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005E0F7: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E0FA: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002DF97; /* 0x1005E0FD: je 0x1002df97 */
L_1005E103:
    ecx = MEM32(ebp + (-0x28)); /* 0x1005E103: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1005E106: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp ecx, esi */ /* 0x1005E108: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_10015729; /* 0x1005E10A: jle 0x10015729 */
L_1005E110:
    RECOMP_BACKEDGE();
    goto L_1005E0E5; /* 0x1005E110: jmp 0x1005e0e5 */
L_1005E112:
    ecx = MEM32(edi); /* 0x1005E112: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1005E114: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1005E116: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1005E119: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1005E11C: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1005E11C: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1005E11F: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(eax + ecx + 0x4) | 0x20u)) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) | 0x20u); /* 0x1005E126: or byte ptr [eax + ecx + 4], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + 0x14); /* 0x1005E12B: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_BACKEDGE();
    goto L_10015784; /* 0x1005E12E: jmp 0x10015784 */
L_1005E133:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1005E133: push dword ptr [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x100E5074)); /* 0x1005E136: call dword ptr [0x100e5074] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1005E13C: push dword ptr [ebp - 0x10] */
    eax = ebp + (-0x38); /* 0x1005E13F: lea eax, [ebp - 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    esi = esi & 0x7FFFFFFFu; /* 0x1005E142: and esi, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1005E148: push dword ptr [ebp - 0x18] */
    PUSH32(esp, 3); /* 0x1005E14B: push 3 */
    PUSH32(esp, eax); /* 0x1005E14D: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1005E14E: push dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1005E151: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1005E152: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100157A1); /* 0x1005E155: call 0x100157a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1005E15A: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1005E15D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005E194; /* 0x1005E160: jne 0x1005e194 */
L_1005E162:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005E162: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005E168: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1005E169: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x1005E16E: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x1005E170: mov eax, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1005E172: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1005E175: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1005E178: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1005E178: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x1005E17B: mov eax, dword ptr [eax*4 + 0x100df640] */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    MEM8(eax + ecx + 0x4) = (uint8_t)(MEM8(eax + ecx + 0x4) & 0xFEu); /* 0x1005E182: and byte ptr [eax + ecx + 4], 0xfe */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, MEM32(edi)); /* 0x1005E187: push dword ptr [edi] */
    RECOMP_CALL(sub_10014D8E); /* 0x1005E189: call 0x10014d8e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005E18E: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002E2DC; /* 0x1005E18F: jmp 0x1002e2dc */
L_1005E194:
    edx = MEM32(edi); /* 0x1005E194: mov edx, dword ptr [edi] */
    ecx = edx; /* 0x1005E196: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1005E198: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1005E19B: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x1005E19E: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x1005E19E: shl edx, 6 */
    ecx = MEM32(ecx * 4 + 0x100DF640); /* 0x1005E1A1: mov ecx, dword ptr [ecx*4 + 0x100df640] */
    MEM32(edx + ecx) = eax; /* 0x1005E1A8: mov dword ptr [edx + ecx], eax */
    RECOMP_BACKEDGE();
    goto L_10015798; /* 0x1005E1AB: jmp 0x10015798 */
L_1005E1B0:
    PUSH32(esp, ebx); /* 0x1005E1B0: push ebx */
    PUSH32(esp, ebx); /* 0x1005E1B1: push ebx */
    PUSH32(esp, ebx); /* 0x1005E1B2: push ebx */
    PUSH32(esp, ebx); /* 0x1005E1B3: push ebx */
    PUSH32(esp, ebx); /* 0x1005E1B4: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x1005E1B5: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005E1BAu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100157A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100157A1u);

L_100157A1:
    PUSH32(esp, ebp); /* 0x100157A1: push ebp */
    ebp = esp; /* 0x100157A2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100157A4: sub esp, 0x18 */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_10014BD1); /* 0x100157A7: call 0x10014bd1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100157AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005DD3B; /* 0x100157AE: jne 0x1005dd3b */
L_100157B4:
    eax = MEM32(ebp + 0x1C); /* 0x100157B4: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x20))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x20)));
    eax = eax | MEM32(ebp + 0x20); /* 0x100157B7: or eax, dword ptr [ebp + 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x100157BA: push 0 */
    PUSH32(esp, eax); /* 0x100157BC: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100157BD: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100157C0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100157C3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100157C6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100157C9: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E5224)); /* 0x100157CC: call dword ptr [0x100e5224] */
    RECOMP_FLAGS_IN();
L_100157D2:
    esp = ebp; /* 0x100157D2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100157D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100157D5: ret  */
L_1005DD3B:
    PUSH32(esp, 0x1005DD98u); /* 0x1005DD3B: push 0x1005dd98 */
    PUSH32(esp, 0x1001FB64u); /* 0x1005DD40: push 0x1001fb64 */
    RECOMP_ICALL(MEM32(0x100E5014)); /* 0x1005DD45: call dword ptr [0x100e5014] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005DD4B: push eax */
    RECOMP_ICALL(MEM32(0x100E501C)); /* 0x1005DD4C: call dword ptr [0x100e501c] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005DD52: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1005DD54: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005DD60; /* 0x1005DD56: jne 0x1005dd60 */
L_1005DD58:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1005DD58: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100157D2; /* 0x1005DD5B: jmp 0x100157d2 */
L_1005DD60:
    eax = MEM32(ebp + 0x1C); /* 0x1005DD60: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1005DD63: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1005DD67: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x1005DD6B: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + 0x20); /* 0x1005DD6E: mov eax, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1005DD71: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + 0x14); /* 0x1005DD74: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1005DD77: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x18); /* 0x1005DD7A: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1005DD7D: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1005DD7E: push dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x18)) = 0x18u; /* 0x1005DD81: mov dword ptr [ebp - 0x18], 0x18 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1005DD88: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1005DD8B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005DD8E: push dword ptr [ebp + 8] */
    RECOMP_ICALL(ecx); /* 0x1005DD91: call ecx */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100157D2; /* 0x1005DD93: jmp 0x100157d2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100157D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100157D6u);

L_100157D6:
    PUSH32(esp, 1); /* 0x100157D6: push 1 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100157D8: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100157DD: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100157DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_10015857(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015857u);

    goto L_10015857;
L_100157DF:
    /* test MEM32(eax + 0xC), 0x8000u */ /* 0x100157DF: test dword ptr [eax + 0xc], 0x8000 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001589C; /* 0x100157E6: jne 0x1001589c */
L_100157EC:
    eax = edi + (-0x3); /* 0x100157EC: lea eax, [edi - 3] */
    /* cmp eax, 0x10u */ /* 0x100157EF: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10015802; /* 0x100157F2: ja 0x10015802 */
L_100157F4:
    eax = edi + 0x10; /* 0x100157F4: lea eax, [edi + 0x10] */
    PUSH32(esp, eax); /* 0x100157F7: push eax */
    RECOMP_CALL(sub_100145F8); /* 0x100157F8: call 0x100145f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100157FD: pop ecx */
    /* test eax, eax */ /* 0x100157FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015829; /* 0x10015800: je 0x10015829 */
L_10015802:
    eax = MEM32(0x100DFDF8); /* 0x10015802: mov eax, dword ptr [0x100dfdf8] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x10015807: push dword ptr [eax + edi*4] */
    PUSH32(esp, edi); /* 0x1001580A: push edi */
    RECOMP_CALL(sub_100142FC); /* 0x1001580B: call 0x100142fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10015810: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10015811: pop ecx */
    eax = MEM32(0x100DFDF8); /* 0x10015812: mov eax, dword ptr [0x100dfdf8] */
    eax = MEM32(eax + edi * 4); /* 0x10015817: mov eax, dword ptr [eax + edi*4] */
    /* test MEM8(eax + 0xC), 0x83u */ /* 0x1001581A: test byte ptr [eax + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10055A27; /* 0x1001581E: jne 0x10055a27 */
L_10015824:
    esi = eax; /* 0x10015824: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x10015826: mov dword ptr [ebp - 0x1c], esi */
L_10015829:
    /* test esi, esi */ /* 0x10015829: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015843; /* 0x1001582B: je 0x10015843 */
L_1001582D:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x8000u);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0x8000u; /* 0x1001582D: and dword ptr [esi + 0xc], 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = ebx; /* 0x10015834: mov dword ptr [esi + 4], ebx */
    MEM32(esi + 0x8) = ebx; /* 0x10015837: mov dword ptr [esi + 8], ebx */
    MEM32(esi) = ebx; /* 0x1001583A: mov dword ptr [esi], ebx */
    MEM32(esi + 0x1C) = ebx; /* 0x1001583C: mov dword ptr [esi + 0x1c], ebx */
    _flag_a = (uint32_t)((MEM32(esi + 0x10) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x10) | 0xFFFFFFFFu));
    MEM32(esi + 0x10) = MEM32(esi + 0x10) | 0xFFFFFFFFu; /* 0x1001583F: or dword ptr [esi + 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_10015843:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10015843: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100157D6); /* 0x1001584A: call 0x100157d6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1001584F: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x10015851: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015856: ret  */
L_10015857:
    PUSH32(esp, 0x10u); /* 0x10015857: push 0x10 */
    PUSH32(esp, 0x100158A0u); /* 0x10015859: push 0x100158a0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1001585E: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10015863: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x10015865: mov esi, ebx */
    MEM32(ebp + (-0x1C)) = esi; /* 0x10015867: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, 1); /* 0x1001586A: push 1 */
    RECOMP_CALL(sub_1000EDD7); /* 0x1001586C: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10015871: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x10015872: mov dword ptr [ebp - 4], ebx */
    edi = ebx; /* 0x10015875: mov edi, ebx */
L_10015877:
    MEM32(ebp + (-0x20)) = edi; /* 0x10015877: mov dword ptr [ebp - 0x20], edi */
    /* cmp edi, MEM32(0x100DFDF0) */ /* 0x1001587A: cmp edi, dword ptr [0x100dfdf0] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x100DFDF0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_10015829; /* 0x10015880: jge 0x10015829 */
L_10015882:
    eax = MEM32(0x100DFDF8); /* 0x10015882: mov eax, dword ptr [0x100dfdf8] */
    eax = MEM32(eax + edi * 4); /* 0x10015887: mov eax, dword ptr [eax + edi*4] */
    /* test eax, eax */ /* 0x1001588A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055A35; /* 0x1001588C: je 0x10055a35 */
L_10015892:
    /* test MEM8(eax + 0xC), 0x83u */ /* 0x10015892: test byte ptr [eax + 0xc], 0x83 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100157DF; /* 0x10015896: je 0x100157df */
L_1001589C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1001589C: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10015877; /* 0x1001589D: jmp 0x10015877 */
L_10055A27:
    PUSH32(esp, eax); /* 0x10055A27: push eax */
    PUSH32(esp, edi); /* 0x10055A28: push edi */
    RECOMP_CALL(sub_10020611); /* 0x10055A29: call 0x10020611 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10055A2E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10055A2F: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1001589C; /* 0x10055A30: jmp 0x1001589c */
L_10055A35:
    PUSH32(esp, 0x38u); /* 0x10055A35: push 0x38 */
    RECOMP_CALL(sub_10012226); /* 0x10055A37: call 0x10012226 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10055A3C: pop ecx */
    ecx = eax; /* 0x10055A3D: mov ecx, eax */
    eax = MEM32(0x100DFDF8); /* 0x10055A3F: mov eax, dword ptr [0x100dfdf8] */
    MEM32(eax + edi * 4) = ecx; /* 0x10055A44: mov dword ptr [eax + edi*4], ecx */
    /* test ecx, ecx */ /* 0x10055A47: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015829; /* 0x10055A49: je 0x10015829 */
L_10055A4F:
    PUSH32(esp, ebx); /* 0x10055A4F: push ebx */
    PUSH32(esp, 0xFA0u); /* 0x10055A50: push 0xfa0 */
    eax = MEM32(0x100DFDF8); /* 0x10055A55: mov eax, dword ptr [0x100dfdf8] */
    eax = MEM32(eax + edi * 4); /* 0x10055A5A: mov eax, dword ptr [eax + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x10055A5D: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10055A60: push eax */
    RECOMP_CALL(sub_10012426); /* 0x10055A61: call 0x10012426 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10055A66: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(0x100DFDF8); /* 0x10055A69: mov eax, dword ptr [0x100dfdf8] */
    eax = MEM32(eax + edi * 4); /* 0x10055A6E: mov eax, dword ptr [eax + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x10055A71: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10055A74: push eax */
    RECOMP_ICALL(MEM32(0x100E5038)); /* 0x10055A75: call dword ptr [0x100e5038] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100DFDF8); /* 0x10055A7B: mov eax, dword ptr [0x100dfdf8] */
    esi = MEM32(eax + edi * 4); /* 0x10055A80: mov esi, dword ptr [eax + edi*4] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x10055A83: mov dword ptr [ebp - 0x1c], esi */
    MEM32(esi + 0xC) = ebx; /* 0x10055A86: mov dword ptr [esi + 0xc], ebx */
    RECOMP_BACKEDGE();
    goto L_10015829; /* 0x10055A89: jmp 0x10015829 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100158BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100158BCu);

L_100158BC:
    PUSH32(esp, ebp); /* 0x100158BC: push ebp */
    ebp = esp; /* 0x100158BD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100158BF: push esi */
    esi = 0x1000u; /* 0x100158C0: mov esi, 0x1000 */
    PUSH32(esp, esi); /* 0x100158C5: push esi */
    RECOMP_CALL(sub_10012226); /* 0x100158C6: call 0x10012226 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100158CB: pop ecx */
    ecx = MEM32(ebp + 0x8); /* 0x100158CC: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x100158CF: mov dword ptr [ecx + 8], eax */
    /* test eax, eax */ /* 0x100158D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005530E; /* 0x100158D4: je 0x1005530e */
L_100158DA:
    _flag_a = (uint32_t)((MEM32(ecx + 0xC) | 8)); _flag_b = (uint32_t)((MEM32(ecx + 0xC) | 8));
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 8; /* 0x100158DA: or dword ptr [ecx + 0xc], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x18) = esi; /* 0x100158DE: mov dword ptr [ecx + 0x18], esi */
L_100158E1:
    eax = MEM32(ecx + 0x8); /* 0x100158E1: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x100158E4: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x100158E8: mov dword ptr [ecx], eax */
    esi = POP32_VAL(esp); /* 0x100158EA: pop esi */
    ebp = POP32_VAL(esp); /* 0x100158EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100158EC: ret  */
L_1005530E:
    _flag_a = (uint32_t)((MEM32(ecx + 0xC) | 4)); _flag_b = (uint32_t)((MEM32(ecx + 0xC) | 4));
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 4; /* 0x1005530E: or dword ptr [ecx + 0xc], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x14; /* 0x10055312: lea eax, [ecx + 0x14] */
    MEM32(ecx + 0x8) = eax; /* 0x10055315: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0x18) = 2; /* 0x10055318: mov dword ptr [ecx + 0x18], 2 */
    RECOMP_BACKEDGE();
    goto L_100158E1; /* 0x1005531F: jmp 0x100158e1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100158ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100158EDu);

L_100158ED:
    PUSH32(esp, esi); /* 0x100158ED: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x100158EE: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100158F3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100158F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_10015938(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015938u);

    goto L_10015938;
L_100158FC:
    /* cmp ebx, ecx */ /* 0x100158FC: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10015F1A; /* 0x100158FE: jae 0x10015f1a */
L_10015904:
    PUSH32(esp, esi); /* 0x10015904: push esi */
    RECOMP_CALL(sub_10014C47); /* 0x10015905: call 0x10014c47 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001590A: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1001590B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015AD1; /* 0x1001590E: je 0x10015ad1 */
L_10015914:
    ecx = MEM32(ebp + (-0x8)); /* 0x10015914: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x10015917: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015AE6; /* 0x10015919: je 0x10015ae6 */
L_1001591F:
    edx = MEM32(ebp + (-0x4)); /* 0x1001591F: mov edx, dword ptr [ebp - 4] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x10015922: mov byte ptr [edx], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10015924: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x10015925: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edx; /* 0x10015926: mov dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10015929: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1001592A: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(esi + 0x18); /* 0x1001592D: mov ecx, dword ptr [esi + 0x18] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x10015930: mov dword ptr [ebp - 0xc], ecx */
    goto L_100159FB; /* 0x10015933: jmp 0x100159fb */
L_10015938:
    PUSH32(esp, ebp); /* 0x10015938: push ebp */
    ebp = esp; /* 0x10015939: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1001593B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1001593E: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x10015942: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x10015945: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x10015948: push ebx */
    PUSH32(esp, esi); /* 0x10015949: push esi */
    PUSH32(esp, edi); /* 0x1001594A: push edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1001594B: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1001594E: mov dword ptr [ebp - 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015ADF; /* 0x10015951: je 0x10015adf */
L_10015957:
    ebx = MEM32(ebp + 0x14); /* 0x10015957: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x1001595A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015ADF; /* 0x1001595C: je 0x10015adf */
L_10015962:
    /* test ecx, ecx */ /* 0x10015962: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055577; /* 0x10015964: je 0x10055577 */
L_1001596A:
    esi = MEM32(ebp + 0x18); /* 0x1001596A: mov esi, dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x1001596D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005558C; /* 0x1001596F: je 0x1005558c */
L_10015975:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10015975: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10015978: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x10); /* 0x1001597A: div dword ptr [ebp + 0x10] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp ebx, eax */ /* 0x1001597D: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005558C; /* 0x1001597F: ja 0x1005558c */
L_10015985:
    edi = MEM32(ebp + 0x10); /* 0x10015985: mov edi, dword ptr [ebp + 0x10] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx); /* 0x10015988: imul edi, ebx */
    /* test MEM32(esi + 0xC), 0x10Cu */ /* 0x1001598B: test dword ptr [esi + 0xc], 0x10c */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x10Cu);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi; /* 0x10015992: mov ebx, edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015AA7; /* 0x10015994: je 0x10015aa7 */
L_1001599A:
    ecx = MEM32(esi + 0x18); /* 0x1001599A: mov ecx, dword ptr [esi + 0x18] */
L_1001599D:
    MEM32(ebp + (-0xC)) = ecx; /* 0x1001599D: mov dword ptr [ebp - 0xc], ecx */
    /* test edi, edi */ /* 0x100159A0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100159FF; /* 0x100159A2: je 0x100159ff */
L_100159A4:
    /* test MEM32(esi + 0xC), 0x10Cu */ /* 0x100159A4: test dword ptr [esi + 0xc], 0x10c */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x10Cu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100158FC; /* 0x100159AB: je 0x100158fc */
L_100159B1:
    eax = MEM32(esi + 0x4); /* 0x100159B1: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x100159B4: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x100159B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100158FC; /* 0x100159B9: je 0x100158fc */
L_100159BF:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10015AF5; /* 0x100159BF: js 0x10015af5 */
L_100159C5:
    /* cmp ebx, eax */ /* 0x100159C5: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100159CE; /* 0x100159C7: jae 0x100159ce */
L_100159C9:
    eax = ebx; /* 0x100159C9: mov eax, ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x100159CB: mov dword ptr [ebp - 0x10], ebx */
L_100159CE:
    ecx = MEM32(ebp + (-0x8)); /* 0x100159CE: mov ecx, dword ptr [ebp - 8] */
    /* cmp eax, ecx */ /* 0x100159D1: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10015AE6; /* 0x100159D3: ja 0x10015ae6 */
L_100159D9:
    PUSH32(esp, eax); /* 0x100159D9: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x100159DA: push dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x100159DC: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100159DD: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000F62F); /* 0x100159E0: call 0x1000f62f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x100159E5: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100159E8: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - eax; /* 0x100159EB: sub dword ptr [esi + 4], eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x100159EE: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x100159F0: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
L_100159F2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + eax; /* 0x100159F2: add dword ptr [ebp - 4], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - eax; /* 0x100159F5: sub dword ptr [ebp - 8], eax */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0xC)); /* 0x100159F8: mov ecx, dword ptr [ebp - 0xc] */
L_100159FB:
    /* test ebx, ebx */ /* 0x100159FB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100159A4; /* 0x100159FD: jne 0x100159a4 */
L_100159FF:
    eax = MEM32(ebp + 0x14); /* 0x100159FF: mov eax, dword ptr [ebp + 0x14] */
L_10015A02:
    edi = POP32_VAL(esp); /* 0x10015A02: pop edi */
    esi = POP32_VAL(esp); /* 0x10015A03: pop esi */
    ebx = POP32_VAL(esp); /* 0x10015A04: pop ebx */
    esp = ebp; /* 0x10015A05: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10015A07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015A08: ret  */
L_10015AA7:
    ecx = 0x1000u; /* 0x10015AA7: mov ecx, 0x1000 */
    RECOMP_BACKEDGE();
    goto L_1001599D; /* 0x10015AAC: jmp 0x1001599d */
L_10015AD1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x10015AD1: sub edi, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10015AD3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x10015AD5: mov eax, edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x10); /* 0x10015AD7: div dword ptr [ebp + 0x10] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    RECOMP_BACKEDGE();
    goto L_10015A02; /* 0x10015ADA: jmp 0x10015a02 */
L_10015ADF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10015ADF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015A02; /* 0x10015AE1: jmp 0x10015a02 */
L_10015AE6:
    /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu */ /* 0x10015AE6: cmp dword ptr [ebp + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100555DF; /* 0x10015AEA: jne 0x100555df */
L_10015AF0:
    goto L_100555EF; /* 0x10015AF0: jmp 0x100555ef */
L_10015AF5:
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0x20u));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20u; /* 0x10015AF5: or dword ptr [esi + 0xc], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015AD1; /* 0x10015AF9: jmp 0x10015ad1 */
L_10015AFB:
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0x10u)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0x10u));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x10u; /* 0x10015AFB: or dword ptr [esi + 0xc], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015AD1; /* 0x10015AFF: jmp 0x10015ad1 */
L_10015F1A:
    /* test ecx, ecx */ /* 0x10015F1A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100555C7; /* 0x10015F1C: je 0x100555c7 */
L_10015F22:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10015F22: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x10015F24: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100555B6; /* 0x10015F2A: ja 0x100555b6 */
L_10015F30:
    eax = ebx; /* 0x10015F30: mov eax, ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10015F32: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = ebx; /* 0x10015F34: mov eax, ebx */
L_10015F36:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x10015F36: sub eax, edx */
    _flag_k = FK_CMP;
L_10015F38:
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x10015F38: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_10015AE6; /* 0x10015F3B: ja 0x10015ae6 */
L_10015F41:
    PUSH32(esp, eax); /* 0x10015F41: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10015F42: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x10015F45: push esi */
    RECOMP_CALL(sub_1001427C); /* 0x10015F46: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10015F4B: pop ecx */
    PUSH32(esp, eax); /* 0x10015F4C: push eax */
    RECOMP_CALL(sub_10015078); /* 0x10015F4D: call 0x10015078 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10015F52: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10015F55: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015AFB; /* 0x10015F57: je 0x10015afb */
L_10015F5D:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10015F5D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015AF5; /* 0x10015F60: je 0x10015af5 */
L_10015F66:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x10015F66: sub ebx, eax */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_100159F2; /* 0x10015F68: jmp 0x100159f2 */
L_10055577:
    RECOMP_CALL(sub_1001177D); /* 0x10055577: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005557C: mov dword ptr [eax], 0x16 */
L_10055582:
    RECOMP_CALL(sub_100A4670); /* 0x10055582: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10015ADF; /* 0x10055587: jmp 0x10015adf */
L_1005558C:
    /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu */ /* 0x1005558C: cmp dword ptr [ebp + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100555A0; /* 0x10055590: je 0x100555a0 */
L_10055592:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10055592: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x10055595: push 0 */
    PUSH32(esp, ecx); /* 0x10055597: push ecx */
    RECOMP_CALL(sub_10011533); /* 0x10055598: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005559D: add esp, 0xc */
    _flag_k = FK_ADD;
L_100555A0:
    /* test esi, esi */ /* 0x100555A0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055577; /* 0x100555A2: je 0x10055577 */
L_100555A4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100555A4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100555A7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x10); /* 0x100555A9: div dword ptr [ebp + 0x10] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp ebx, eax */ /* 0x100555AC: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_10015985; /* 0x100555AE: jbe 0x10015985 */
L_100555B4:
    RECOMP_BACKEDGE();
    goto L_10055577; /* 0x100555B4: jmp 0x10055577 */
L_100555B6:
    eax = 0x7FFFFFFFu; /* 0x100555B6: mov eax, 0x7fffffff */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x100555BB: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = 0x7FFFFFFFu; /* 0x100555BD: mov eax, 0x7fffffff */
    RECOMP_BACKEDGE();
    goto L_10015F36; /* 0x100555C2: jmp 0x10015f36 */
L_100555C7:
    eax = 0x7FFFFFFFu; /* 0x100555C7: mov eax, 0x7fffffff */
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x100555CC: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_10015F38; /* 0x100555D2: ja 0x10015f38 */
L_100555D8:
    eax = ebx; /* 0x100555D8: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_10015F38; /* 0x100555DA: jmp 0x10015f38 */
L_100555DF:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100555DF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x100555E2: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100555E4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10011533); /* 0x100555E7: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100555EC: add esp, 0xc */
    _flag_k = FK_ADD;
L_100555EF:
    RECOMP_CALL(sub_1001177D); /* 0x100555EF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x100555F4: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_10055582; /* 0x100555FA: jmp 0x10055582 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10015A09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015A09u);

    goto L_10015A09;
L_100158F5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100158F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10015A69; /* 0x100158F7: jmp 0x10015a69 */
L_10015A09:
    PUSH32(esp, 0xCu); /* 0x10015A09: push 0xc */
    PUSH32(esp, 0x10015A70u); /* 0x10015A0B: push 0x10015a70 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10015A10: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10015A15: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x10015A17: mov dword ptr [ebp - 0x1c], edi */
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x10015A1A: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100158F5; /* 0x10015A1D: je 0x100158f5 */
L_10015A23:
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x10015A23: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100158F5; /* 0x10015A26: je 0x100158f5 */
L_10015A2C:
    esi = MEM32(ebp + 0x18); /* 0x10015A2C: mov esi, dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x10015A2F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100555FC; /* 0x10015A31: je 0x100555fc */
L_10015A37:
    PUSH32(esp, esi); /* 0x10015A37: push esi */
    RECOMP_CALL(sub_10014B96); /* 0x10015A38: call 0x10014b96 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10015A3D: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x10015A3E: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, esi); /* 0x10015A41: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10015A42: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10015A45: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10015A48: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10015A4B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10015938); /* 0x10015A4E: call 0x10015938 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10015A53: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x10015A56: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x10015A58: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10015A5B: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100158ED); /* 0x10015A62: call 0x100158ed */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x10015A67: mov eax, edi */
L_10015A69:
    RECOMP_CALL(sub_1000EDC3); /* 0x10015A69: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015A6E: ret  */
L_100555FC:
    /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu */ /* 0x100555FC: cmp dword ptr [ebp + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10055611; /* 0x10055600: je 0x10055611 */
L_10055602:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10055602: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x10055605: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10055606: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10011533); /* 0x10055609: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005560E: add esp, 0xc */
    _flag_k = FK_ADD;
L_10055611:
    RECOMP_CALL(sub_1001177D); /* 0x10055611: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10055616: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005561C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100158F5; /* 0x10055621: jmp 0x100158f5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10015A8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015A8Cu);

L_10015A8C:
    PUSH32(esp, ebp); /* 0x10015A8C: push ebp */
    ebp = esp; /* 0x10015A8D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10015A8F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10015A92: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10015A95: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10015A98: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10015A9A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10015A09); /* 0x10015A9D: call 0x10015a09 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10015AA2: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10015AA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015AA6: ret  */
    RECOMP_REGS_OUT();
}

void sub_10015B01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015B01u);

L_10015B01:
    PUSH32(esp, ebp); /* 0x10015B01: push ebp */
    ebp = esp; /* 0x10015B02: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10015B04: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x10015B07: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005659B; /* 0x10015B09: je 0x1005659b */
L_10015B0F:
    eax = MEM32(0x100DF280); /* 0x10015B0F: mov eax, dword ptr [0x100df280] */
    MEM32(ecx) = eax; /* 0x10015B14: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10015B16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10015B18: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015B19: ret  */
L_1005659B:
    RECOMP_CALL(sub_1001177D); /* 0x1005659B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100565A0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100565A6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100565AB: push 0x16 */
    eax = POP32_VAL(esp); /* 0x100565AD: pop eax */
    ebp = POP32_VAL(esp); /* 0x100565AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100565AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_10015B1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015B1Au);

L_10015B1A:
    PUSH32(esp, ebp); /* 0x10015B1A: push ebp */
    ebp = esp; /* 0x10015B1B: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10015B1D: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x10015B20: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056571; /* 0x10015B22: je 0x10056571 */
L_10015B28:
    eax = MEM32(0x100DF284); /* 0x10015B28: mov eax, dword ptr [0x100df284] */
    MEM32(ecx) = eax; /* 0x10015B2D: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10015B2F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10015B31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015B32: ret  */
L_10056571:
    RECOMP_CALL(sub_1001177D); /* 0x10056571: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10056576: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005657C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10056581: push 0x16 */
    eax = POP32_VAL(esp); /* 0x10056583: pop eax */
    ebp = POP32_VAL(esp); /* 0x10056584: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10056585: ret  */
    RECOMP_REGS_OUT();
}

void sub_10015B33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015B33u);

L_10015B33:
    PUSH32(esp, ebp); /* 0x10015B33: push ebp */
    ebp = esp; /* 0x10015B34: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10015B36: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x10015B39: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056586; /* 0x10015B3B: je 0x10056586 */
L_10015B41:
    eax = MEM32(0x100DF288); /* 0x10015B41: mov eax, dword ptr [0x100df288] */
    MEM32(ecx) = eax; /* 0x10015B46: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10015B48: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10015B4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015B4B: ret  */
L_10056586:
    RECOMP_CALL(sub_1001177D); /* 0x10056586: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005658B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10056591: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10056596: push 0x16 */
    eax = POP32_VAL(esp); /* 0x10056598: pop eax */
    ebp = POP32_VAL(esp); /* 0x10056599: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005659A: ret  */
    RECOMP_REGS_OUT();
}

void sub_10015B4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015B4Cu);

L_10015B4C:
    PUSH32(esp, 8); /* 0x10015B4C: push 8 */
    PUSH32(esp, 0x10015B70u); /* 0x10015B4E: push 0x10015b70 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10015B53: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x100DFE6C), 0 */ /* 0x10015B58: cmp dword ptr [0x100dfe6c], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DFE6C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10029142; /* 0x10015B5F: je 0x10029142 */
L_10015B65:
    RECOMP_CALL(sub_1000EDC3); /* 0x10015B65: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015B6A: ret  */
L_10029142:
    PUSH32(esp, 6); /* 0x10029142: push 6 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10029144: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10029149: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1002914A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100DFE6C), 0 */ /* 0x1002914E: cmp dword ptr [0x100dfe6c], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DFE6C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10029162; /* 0x10029155: jne 0x10029162 */
L_10029157:
    RECOMP_CALL(sub_10028D59); /* 0x10029157: call 0x10028d59 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x100DFE6C)); _flag_b = (uint32_t)(1);
    MEM32(0x100DFE6C) = MEM32(0x100DFE6C) + 1; /* 0x1002915C: inc dword ptr [0x100dfe6c] */
    _flag_k = FK_INC;
L_10029162:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10029162: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10029173); /* 0x10029169: call 0x10029173 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10015B65; /* 0x1002916E: jmp 0x10015b65 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10015B8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015B8Cu);

L_10015B8C:
    eax = MEM32(esp + 0x8); /* 0x10015B8C: mov eax, dword ptr [esp + 8] */
    ecx = MEM32(esp + 0x10); /* 0x10015B90: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10015B94: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0xC); /* 0x10015B96: mov ecx, dword ptr [esp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10017622; /* 0x10015B9A: jne 0x10017622 */
L_10015BA0:
    eax = MEM32(esp + 0x4); /* 0x10015BA0: mov eax, dword ptr [esp + 4] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x10015BA4: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10015BA6: ret 0x10 */
L_10017622:
    PUSH32(esp, ebx); /* 0x10017622: push ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x10017623: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ebx = eax; /* 0x10017625: mov ebx, eax */
    eax = MEM32(esp + 0x8); /* 0x10017627: mov eax, dword ptr [esp + 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x1001762B: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1001762F: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esp + 0x8); /* 0x10017631: mov eax, dword ptr [esp + 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x10017635: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x10017637: add edx, ebx */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x10017639: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1001763A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_10015BA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015BA9u);

L_10015BA9:
    PUSH32(esp, 6); /* 0x10015BA9: push 6 */
    RECOMP_CALL(sub_1000EDFC); /* 0x10015BAB: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10015BB0: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015BB1: ret  */
    RECOMP_REGS_OUT();
}

void sub_10015BB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015BB2u);

L_10015BB2:
    PUSH32(esp, 0xCu); /* 0x10015BB2: push 0xc */
    PUSH32(esp, 0x10015BF0u); /* 0x10015BB4: push 0x10015bf0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x10015BB9: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x10015BBE: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 6); /* 0x10015BC2: push 6 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10015BC4: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10015BC9: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10015BCA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10015BCE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10015C0C); /* 0x10015BD1: call 0x10015c0c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10015BD6: pop ecx */
    esi = eax; /* 0x10015BD7: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x10015BD9: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10015BDC: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_10015BA9); /* 0x10015BE3: call 0x10015ba9 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10015BE8: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x10015BEA: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015BEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_10015C0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015C0Cu);

L_10015C0C:
    PUSH32(esp, ebp); /* 0x10015C0C: push ebp */
    ebp = esp; /* 0x10015C0D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10015C0F: push ecx */
    PUSH32(esp, ebx); /* 0x10015C10: push ebx */
    eax = ebp + (-0x4); /* 0x10015C11: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10015C14: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10015C16: push eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x10015C17: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_10015B1A); /* 0x10015C1A: call 0x10015b1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10015C1F: pop ecx */
    /* test eax, eax */ /* 0x10015C20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056687; /* 0x10015C22: jne 0x10056687 */
L_10015C28:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x10015C28: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015C8C; /* 0x10015C2B: je 0x10015c8c */
L_10015C2D:
    PUSH32(esp, esi); /* 0x10015C2D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10015C2E: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10015C31: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10015C32: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10015C34: inc edi */
    _flag_k = FK_INC;
    ecx = MEM32(esi + 0x14); /* 0x10015C35: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, MEM32(0x100DFE20) */ /* 0x10015C38: cmp ecx, dword ptr [0x100dfe20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x100DFE20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10029079; /* 0x10015C3E: jne 0x10029079 */
L_10015C44:
    /* cmp ecx, MEM32(0x100DFE2C) */ /* 0x10015C44: cmp ecx, dword ptr [0x100dfe2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x100DFE2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10029079; /* 0x10015C4A: jne 0x10029079 */
L_10015C50:
    edx = MEM32(0x100DFE24); /* 0x10015C50: mov edx, dword ptr [0x100dfe24] */
    edi = MEM32(0x100DFE30); /* 0x10015C56: mov edi, dword ptr [0x100dfe30] */
    ecx = MEM32(esi + 0x1C); /* 0x10015C5C: mov ecx, dword ptr [esi + 0x1c] */
    /* cmp edx, edi */ /* 0x10015C5F: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1002912E; /* 0x10015C61: jge 0x1002912e */
L_10015C67:
    /* cmp ecx, edx */ /* 0x10015C67: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1002913B; /* 0x10015C69: jl 0x1002913b */
L_10015C6F:
    /* cmp ecx, edi */ /* 0x10015C6F: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1002913B; /* 0x10015C71: jg 0x1002913b */
L_10015C77:
    /* cmp ecx, edx */ /* 0x10015C77: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10056653; /* 0x10015C79: jle 0x10056653 */
L_10015C7F:
    /* cmp ecx, edi */ /* 0x10015C7F: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10056653; /* 0x10015C81: jge 0x10056653 */
L_10015C87:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10015C87: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10015C89: inc eax */
    _flag_k = FK_INC;
L_10015C8A:
    edi = POP32_VAL(esp); /* 0x10015C8A: pop edi */
    esi = POP32_VAL(esp); /* 0x10015C8B: pop esi */
L_10015C8C:
    ebx = POP32_VAL(esp); /* 0x10015C8C: pop ebx */
    esp = ebp; /* 0x10015C8D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10015C8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015C90: ret  */
L_10029079:
    /* cmp MEM32(0x100E0BF8), ebx */ /* 0x10029079: cmp dword ptr [0x100e0bf8], ebx */
    _flag_a = (uint32_t)(MEM32(0x100E0BF8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100565EC; /* 0x1002907F: je 0x100565ec */
L_10029085:
    eax = (uint32_t)MEM16(0x100E0CA6); /* 0x10029085: movzx eax, word ptr [0x100e0ca6] */
    PUSH32(esp, eax); /* 0x1002908C: push eax */
    eax = (uint32_t)MEM16(0x100E0CA4); /* 0x1002908D: movzx eax, word ptr [0x100e0ca4] */
    PUSH32(esp, eax); /* 0x10029094: push eax */
    eax = (uint32_t)MEM16(0x100E0CA2); /* 0x10029095: movzx eax, word ptr [0x100e0ca2] */
    PUSH32(esp, eax); /* 0x1002909C: push eax */
    eax = (uint32_t)MEM16(0x100E0CA0); /* 0x1002909D: movzx eax, word ptr [0x100e0ca0] */
    PUSH32(esp, eax); /* 0x100290A4: push eax */
    /* cmp MEM16(0x100E0C98), LO16(ebx) */ /* 0x100290A5: cmp word ptr [0x100e0c98], bx */
    _flag_a = (uint32_t)(MEM16(0x100E0C98)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100565B8; /* 0x100290AC: jne 0x100565b8 */
L_100290B2:
    eax = (uint32_t)MEM16(0x100E0C9C); /* 0x100290B2: movzx eax, word ptr [0x100e0c9c] */
    PUSH32(esp, ebx); /* 0x100290B9: push ebx */
    PUSH32(esp, eax); /* 0x100290BA: push eax */
    eax = (uint32_t)MEM16(0x100E0C9E); /* 0x100290BB: movzx eax, word ptr [0x100e0c9e] */
    PUSH32(esp, eax); /* 0x100290C2: push eax */
    eax = (uint32_t)MEM16(0x100E0C9A); /* 0x100290C3: movzx eax, word ptr [0x100e0c9a] */
    PUSH32(esp, eax); /* 0x100290CA: push eax */
    PUSH32(esp, ecx); /* 0x100290CB: push ecx */
    PUSH32(esp, edi); /* 0x100290CC: push edi */
L_100290CD:
    PUSH32(esp, edi); /* 0x100290CD: push edi */
    RECOMP_CALL(sub_10028F92); /* 0x100290CE: call 0x10028f92 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(0x100E0C52); /* 0x100290D3: movzx eax, word ptr [0x100e0c52] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x100290DA: add esp, 0x2c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100290DD: push eax */
    eax = (uint32_t)MEM16(0x100E0C50); /* 0x100290DE: movzx eax, word ptr [0x100e0c50] */
    PUSH32(esp, eax); /* 0x100290E5: push eax */
    eax = (uint32_t)MEM16(0x100E0C4E); /* 0x100290E6: movzx eax, word ptr [0x100e0c4e] */
    PUSH32(esp, eax); /* 0x100290ED: push eax */
    eax = (uint32_t)MEM16(0x100E0C4C); /* 0x100290EE: movzx eax, word ptr [0x100e0c4c] */
    PUSH32(esp, eax); /* 0x100290F5: push eax */
    /* cmp MEM16(0x100E0C44), LO16(ebx) */ /* 0x100290F6: cmp word ptr [0x100e0c44], bx */
    _flag_a = (uint32_t)(MEM16(0x100E0C44)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100565D1; /* 0x100290FD: jne 0x100565d1 */
L_10029103:
    eax = (uint32_t)MEM16(0x100E0C48); /* 0x10029103: movzx eax, word ptr [0x100e0c48] */
    PUSH32(esp, ebx); /* 0x1002910A: push ebx */
    PUSH32(esp, eax); /* 0x1002910B: push eax */
    eax = (uint32_t)MEM16(0x100E0C4A); /* 0x1002910C: movzx eax, word ptr [0x100e0c4a] */
    PUSH32(esp, eax); /* 0x10029113: push eax */
    eax = (uint32_t)MEM16(0x100E0C46); /* 0x10029114: movzx eax, word ptr [0x100e0c46] */
    PUSH32(esp, eax); /* 0x1002911B: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1002911C: push dword ptr [esi + 0x14] */
    PUSH32(esp, edi); /* 0x1002911F: push edi */
L_10029120:
    PUSH32(esp, ebx); /* 0x10029120: push ebx */
    RECOMP_CALL(sub_10028F92); /* 0x10029121: call 0x10028f92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x10029126: add esp, 0x2c */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10015C50; /* 0x10029129: jmp 0x10015c50 */
L_1002912E:
    /* cmp ecx, edi */ /* 0x1002912E: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1005663F; /* 0x10029130: jge 0x1005663f */
L_10029136:
    RECOMP_BACKEDGE();
    goto L_10015C87; /* 0x10029136: jmp 0x10015c87 */
L_1002913B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002913B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015C8A; /* 0x1002913D: jmp 0x10015c8a */
L_100565B8:
    eax = (uint32_t)MEM16(0x100E0C9E); /* 0x100565B8: movzx eax, word ptr [0x100e0c9e] */
    PUSH32(esp, eax); /* 0x100565BF: push eax */
    eax = (uint32_t)MEM16(0x100E0C9A); /* 0x100565C0: movzx eax, word ptr [0x100e0c9a] */
    PUSH32(esp, ebx); /* 0x100565C7: push ebx */
    PUSH32(esp, ebx); /* 0x100565C8: push ebx */
    PUSH32(esp, eax); /* 0x100565C9: push eax */
    PUSH32(esp, ecx); /* 0x100565CA: push ecx */
    PUSH32(esp, ebx); /* 0x100565CB: push ebx */
    RECOMP_BACKEDGE();
    goto L_100290CD; /* 0x100565CC: jmp 0x100290cd */
L_100565D1:
    eax = (uint32_t)MEM16(0x100E0C4A); /* 0x100565D1: movzx eax, word ptr [0x100e0c4a] */
    PUSH32(esp, eax); /* 0x100565D8: push eax */
    eax = (uint32_t)MEM16(0x100E0C46); /* 0x100565D9: movzx eax, word ptr [0x100e0c46] */
    PUSH32(esp, ebx); /* 0x100565E0: push ebx */
    PUSH32(esp, ebx); /* 0x100565E1: push ebx */
    PUSH32(esp, eax); /* 0x100565E2: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x100565E3: push dword ptr [esi + 0x14] */
    PUSH32(esp, ebx); /* 0x100565E6: push ebx */
    RECOMP_BACKEDGE();
    goto L_10029120; /* 0x100565E7: jmp 0x10029120 */
L_100565EC:
    PUSH32(esp, 3); /* 0x100565EC: push 3 */
    eax = POP32_VAL(esp); /* 0x100565EE: pop eax */
    PUSH32(esp, 2); /* 0x100565EF: push 2 */
    edx = POP32_VAL(esp); /* 0x100565F1: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100565F2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xBu); /* 0x100565F4: push 0xb */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100565F6: inc ebx */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x100565F7: pop edi */
    /* cmp ecx, 0x6Bu */ /* 0x100565F8: cmp ecx, 0x6b */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10056609; /* 0x100565FB: jge 0x10056609 */
L_100565FD:
    PUSH32(esp, 4); /* 0x100565FD: push 4 */
    eax = POP32_VAL(esp); /* 0x100565FF: pop eax */
    PUSH32(esp, 0xAu); /* 0x10056600: push 0xa */
    edi = POP32_VAL(esp); /* 0x10056602: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10056603: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 5); /* 0x10056605: push 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10056607: inc edx */
    _flag_k = FK_INC;
    ebx = POP32_VAL(esp); /* 0x10056608: pop ebx */
L_10056609:
    PUSH32(esp, 0); /* 0x10056609: push 0 */
    PUSH32(esp, 0); /* 0x1005660B: push 0 */
    PUSH32(esp, 0); /* 0x1005660D: push 0 */
    PUSH32(esp, 2); /* 0x1005660F: push 2 */
    PUSH32(esp, 0); /* 0x10056611: push 0 */
    PUSH32(esp, 0); /* 0x10056613: push 0 */
    PUSH32(esp, edx); /* 0x10056615: push edx */
    PUSH32(esp, eax); /* 0x10056616: push eax */
    PUSH32(esp, ecx); /* 0x10056617: push ecx */
    PUSH32(esp, 1); /* 0x10056618: push 1 */
    PUSH32(esp, 1); /* 0x1005661A: push 1 */
    RECOMP_CALL(sub_10028F92); /* 0x1005661C: call 0x10028f92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10056621: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10056623: push eax */
    PUSH32(esp, eax); /* 0x10056624: push eax */
    PUSH32(esp, eax); /* 0x10056625: push eax */
    PUSH32(esp, 2); /* 0x10056626: push 2 */
    PUSH32(esp, eax); /* 0x10056628: push eax */
    PUSH32(esp, eax); /* 0x10056629: push eax */
    PUSH32(esp, ebx); /* 0x1005662A: push ebx */
    PUSH32(esp, edi); /* 0x1005662B: push edi */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1005662C: push dword ptr [esi + 0x14] */
    PUSH32(esp, 1); /* 0x1005662F: push 1 */
    PUSH32(esp, eax); /* 0x10056631: push eax */
    RECOMP_CALL(sub_10028F92); /* 0x10056632: call 0x10028f92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x58u; /* 0x10056637: add esp, 0x58 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10015C50; /* 0x1005663A: jmp 0x10015c50 */
L_1005663F:
    /* cmp ecx, edx */ /* 0x1005663F: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_10015C87; /* 0x10056641: jg 0x10015c87 */
L_10056647:
    /* cmp ecx, edi */ /* 0x10056647: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10056653; /* 0x10056649: jle 0x10056653 */
L_1005664B:
    /* cmp ecx, edx */ /* 0x1005664B: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1002913B; /* 0x1005664D: jl 0x1002913b */
L_10056653:
    eax = (uint32_t)((int32_t)MEM32(esi + 0x8) * (int32_t)0x3Cu); /* 0x10056653: imul eax, dword ptr [esi + 8], 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x4); /* 0x10056657: add eax, dword ptr [esi + 4] */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3Cu); /* 0x1005665A: imul eax, eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x1005665D: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    esi = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x1005665F: imul esi, eax, 0x3e8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10056665: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edx */ /* 0x10056667: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10056679; /* 0x10056669: jne 0x10056679 */
L_1005666B:
    /* cmp esi, MEM32(0x100DFE28) */ /* 0x1005666B: cmp esi, dword ptr [0x100dfe28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFE28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_GE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10056671: setge al */
    RECOMP_BACKEDGE();
    goto L_10015C8A; /* 0x10056674: jmp 0x10015c8a */
L_10056679:
    /* cmp esi, MEM32(0x100DFE34) */ /* 0x10056679: cmp esi, dword ptr [0x100dfe34] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x100DFE34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_L(_flag_a, _flag_b)) ? 1 : 0); /* 0x1005667F: setl al */
    RECOMP_BACKEDGE();
    goto L_10015C8A; /* 0x10056682: jmp 0x10015c8a */
L_10056687:
    PUSH32(esp, ebx); /* 0x10056687: push ebx */
    PUSH32(esp, ebx); /* 0x10056688: push ebx */
    PUSH32(esp, ebx); /* 0x10056689: push ebx */
    PUSH32(esp, ebx); /* 0x1005668A: push ebx */
    PUSH32(esp, ebx); /* 0x1005668B: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x1005668C: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10056691u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10015C91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015C91u);

L_10015C91:
    PUSH32(esp, ebp); /* 0x10015C91: push ebp */
    ebp = esp; /* 0x10015C92: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x478u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x478u; /* 0x10015C94: sub esp, 0x478 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10015C9A: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10015C9F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10015CA1: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10015CA4: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10015CA5: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10015CA8: push esi */
    esi = MEM32(ebp + 0xC); /* 0x10015CA9: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x10015CAC: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10015CAD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x10015CAF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100543BF; /* 0x10015CB1: je 0x100543bf */
L_10015CB7:
    /* test esi, esi */ /* 0x10015CB7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100543BF; /* 0x10015CB9: je 0x100543bf */
L_10015CBF:
    PUSH32(esp, 0x10015F14u); /* 0x10015CBF: push 0x10015f14 */
    PUSH32(esp, ebx); /* 0x10015CC4: push ebx */
    RECOMP_CALL(sub_10011E8E); /* 0x10015CC5: call 0x10011e8e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10015CCA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10015CCB: pop ecx */
    /* test eax, eax */ /* 0x10015CCC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002F6E1; /* 0x10015CCE: jne 0x1002f6e1 */
L_10015CD4:
    /* cmp MEM16(ebx + 0x2), 0x3Au */ /* 0x10015CD4: cmp word ptr [ebx + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(ebx + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002F5D8; /* 0x10015CD9: jne 0x1002f5d8 */
L_10015CDF:
    eax = (uint32_t)MEM16(ebx); /* 0x10015CDF: movzx eax, word ptr [ebx] */
    /* test LO16(eax), LO16(eax) */ /* 0x10015CE2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015CF1; /* 0x10015CE5: je 0x10015cf1 */
L_10015CE7:
    /* cmp MEM16(ebx + 0x4), LO16(edi) */ /* 0x10015CE7: cmp word ptr [ebx + 4], di */
    _flag_a = (uint32_t)(MEM16(ebx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F6E1; /* 0x10015CEB: je 0x1002f6e1 */
L_10015CF1:
    PUSH32(esp, eax); /* 0x10015CF1: push eax */
    RECOMP_CALL(sub_10011E57); /* 0x10015CF2: call 0x10011e57 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO16(eax); /* 0x10015CF7: movzx eax, ax */
    ecx = POP32_VAL(esp); /* 0x10015CFA: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x60u; /* 0x10015CFB: sub eax, 0x60 */
    _flag_k = FK_CMP;
L_10015CFE:
    PUSH32(esp, edi); /* 0x10015CFE: push edi */
    PUSH32(esp, edi); /* 0x10015CFF: push edi */
    PUSH32(esp, edi); /* 0x10015D00: push edi */
    MEM32(ebp + (-0x478)) = eax; /* 0x10015D01: mov dword ptr [ebp - 0x478], eax */
    eax = ebp + (-0x46C); /* 0x10015D07: lea eax, [ebp - 0x46c] */
    PUSH32(esp, eax); /* 0x10015D0D: push eax */
    PUSH32(esp, edi); /* 0x10015D0E: push edi */
    PUSH32(esp, ebx); /* 0x10015D0F: push ebx */
    RECOMP_ICALL(MEM32(0x100E506C)); /* 0x10015D10: call dword ptr [0x100e506c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x474)) = eax; /* 0x10015D16: mov dword ptr [ebp - 0x474], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10015D1C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F673; /* 0x10015D1F: je 0x1002f673 */
L_10015D25:
    /* test MEM32(ebp + (-0x46C)), 0x400u */ /* 0x10015D25: test dword ptr [ebp - 0x46c], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x46C))); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10054464; /* 0x10015D2F: jne 0x10054464 */
L_10015D35:
    /* cmp MEM32(ebp + (-0x458)), edi */ /* 0x10015D35: cmp dword ptr [ebp - 0x458], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x458))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100544D2; /* 0x10015D3B: je 0x100544d2 */
L_10015D41:
    eax = ebp + (-0x21C); /* 0x10015D41: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x10015D47: push eax */
    eax = ebp + (-0x458); /* 0x10015D48: lea eax, [ebp - 0x458] */
    PUSH32(esp, eax); /* 0x10015D4E: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x10015D4F: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10015D55: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F5ED; /* 0x10015D57: je 0x1002f5ed */
L_10015D5D:
    eax = ebp + (-0x21C); /* 0x10015D5D: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x10015D63: push eax */
    PUSH32(esp, eax); /* 0x10015D64: push eax */
    PUSH32(esp, edi); /* 0x10015D65: push edi */
    RECOMP_ICALL(MEM32(0x100E5088)); /* 0x10015D66: call dword ptr [0x100e5088] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10015D6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F5ED; /* 0x10015D6E: je 0x1002f5ed */
L_10015D74:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x10015D74: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10015D7B: push -1 */
    PUSH32(esp, eax); /* 0x10015D7D: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x10015D7E: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x10015D85: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x10015D86: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x10015D8D: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x10015D8E: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x10015D95: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x10015D96: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x10015D9D: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x10015D9E: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x10015DA5: push eax */
    RECOMP_CALL(sub_10015F93); /* 0x10015DA6: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x10015DAB: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x20) = eax; /* 0x10015DAE: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x24) = edx; /* 0x10015DB1: mov dword ptr [esi + 0x24], edx */
L_10015DB4:
    /* cmp MEM32(ebp + (-0x460)), edi */ /* 0x10015DB4: cmp dword ptr [ebp - 0x460], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x460))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100544E9; /* 0x10015DBA: je 0x100544e9 */
L_10015DC0:
    eax = ebp + (-0x21C); /* 0x10015DC0: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x10015DC6: push eax */
    eax = ebp + (-0x460); /* 0x10015DC7: lea eax, [ebp - 0x460] */
    PUSH32(esp, eax); /* 0x10015DCD: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x10015DCE: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10015DD4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F5E2; /* 0x10015DD6: je 0x1002f5e2 */
L_10015DDC:
    eax = ebp + (-0x21C); /* 0x10015DDC: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x10015DE2: push eax */
    PUSH32(esp, eax); /* 0x10015DE3: push eax */
    PUSH32(esp, edi); /* 0x10015DE4: push edi */
    RECOMP_ICALL(MEM32(0x100E5088)); /* 0x10015DE5: call dword ptr [0x100e5088] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10015DEB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F5E2; /* 0x10015DED: je 0x1002f5e2 */
L_10015DF3:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x10015DF3: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10015DFA: push -1 */
    PUSH32(esp, eax); /* 0x10015DFC: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x10015DFD: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x10015E04: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x10015E05: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x10015E0C: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x10015E0D: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x10015E14: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x10015E15: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x10015E1C: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x10015E1D: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x10015E24: push eax */
    RECOMP_CALL(sub_10015F93); /* 0x10015E25: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x10015E2A: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = eax; /* 0x10015E2D: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0x1C) = edx; /* 0x10015E30: mov dword ptr [esi + 0x1c], edx */
L_10015E33:
    /* cmp MEM32(ebp + (-0x468)), edi */ /* 0x10015E33: cmp dword ptr [ebp - 0x468], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x468))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054506; /* 0x10015E39: je 0x10054506 */
L_10015E3F:
    eax = ebp + (-0x21C); /* 0x10015E3F: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x10015E45: push eax */
    eax = ebp + (-0x468); /* 0x10015E46: lea eax, [ebp - 0x468] */
    PUSH32(esp, eax); /* 0x10015E4C: push eax */
    RECOMP_ICALL(MEM32(0x100E508C)); /* 0x10015E4D: call dword ptr [0x100e508c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10015E53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F5E2; /* 0x10015E55: je 0x1002f5e2 */
L_10015E5B:
    eax = ebp + (-0x21C); /* 0x10015E5B: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x10015E61: push eax */
    PUSH32(esp, eax); /* 0x10015E62: push eax */
    PUSH32(esp, edi); /* 0x10015E63: push edi */
    RECOMP_ICALL(MEM32(0x100E5088)); /* 0x10015E64: call dword ptr [0x100e5088] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10015E6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F5E2; /* 0x10015E6C: je 0x1002f5e2 */
L_10015E72:
    eax = (uint32_t)MEM16(ebp + (-0x210)); /* 0x10015E72: movzx eax, word ptr [ebp - 0x210] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10015E79: push -1 */
    PUSH32(esp, eax); /* 0x10015E7B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x212)); /* 0x10015E7C: movzx eax, word ptr [ebp - 0x212] */
    PUSH32(esp, eax); /* 0x10015E83: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x214)); /* 0x10015E84: movzx eax, word ptr [ebp - 0x214] */
    PUSH32(esp, eax); /* 0x10015E8B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x216)); /* 0x10015E8C: movzx eax, word ptr [ebp - 0x216] */
    PUSH32(esp, eax); /* 0x10015E93: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21A)); /* 0x10015E94: movzx eax, word ptr [ebp - 0x21a] */
    PUSH32(esp, eax); /* 0x10015E9B: push eax */
    eax = (uint32_t)MEM16(ebp + (-0x21C)); /* 0x10015E9C: movzx eax, word ptr [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x10015EA3: push eax */
    RECOMP_CALL(sub_10015F93); /* 0x10015EA4: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x10015EA9: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x28) = eax; /* 0x10015EAC: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = edx; /* 0x10015EAF: mov dword ptr [esi + 0x2c], edx */
L_10015EB2:
    PUSH32(esp, MEM32(ebp + (-0x474))); /* 0x10015EB2: push dword ptr [ebp - 0x474] */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x10015EB8: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
L_10015EBE:
    PUSH32(esp, ebx); /* 0x10015EBE: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x46C))); /* 0x10015EBF: push dword ptr [ebp - 0x46c] */
    RECOMP_CALL(sub_1001619F); /* 0x10015EC5: call 0x1001619f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10015ECA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10015ECB: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10015ECC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x10015ECE: mov word ptr [esi + 6], ax */
    eax = MEM32(ebp + (-0x44C)); /* 0x10015ED2: mov eax, dword ptr [ebp - 0x44c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10015ED8: inc ecx */
    _flag_k = FK_INC;
    MEM16(esi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x10015ED9: mov word ptr [esi + 8], cx */
    MEM32(esi + 0x14) = eax; /* 0x10015EDD: mov dword ptr [esi + 0x14], eax */
    /* cmp MEM32(ebp + (-0x450)), edi */ /* 0x10015EE0: cmp dword ptr [ebp - 0x450], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x450))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10054523; /* 0x10015EE6: jne 0x10054523 */
L_10015EEC:
    ecx = MEM32(ebp + (-0x478)); /* 0x10015EEC: mov ecx, dword ptr [ebp - 0x478] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10015EF2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10015EF4: dec ecx */
    _flag_k = FK_DEC;
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x10015EF5: mov word ptr [esi + 4], ax */
    MEM32(esi + 0xA) = eax; /* 0x10015EF9: mov dword ptr [esi + 0xa], eax */
    eax = edi; /* 0x10015EFC: mov eax, edi */
    MEM32(esi) = ecx; /* 0x10015EFE: mov dword ptr [esi], ecx */
    MEM32(esi + 0x10) = ecx; /* 0x10015F00: mov dword ptr [esi + 0x10], ecx */
L_10015F03:
    ecx = MEM32(ebp + (-0x4)); /* 0x10015F03: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10015F06: pop edi */
    esi = POP32_VAL(esp); /* 0x10015F07: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10015F08: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10015F0A: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10015F0B: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10015F10: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10015F12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015F13: ret  */
L_1002F5D8:
    RECOMP_CALL(sub_10014728); /* 0x1002F5D8: call 0x10014728 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10015CFE; /* 0x1002F5DD: jmp 0x10015cfe */
L_1002F5E2:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1002F5E2: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    goto L_10054539; /* 0x1002F5E8: jmp 0x10054539 */
L_1002F5ED:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1002F5ED: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    goto L_10054556; /* 0x1002F5F3: jmp 0x10054556 */
L_1002F673:
    PUSH32(esp, 0x1002F634u); /* 0x1002F673: push 0x1002f634 */
    PUSH32(esp, ebx); /* 0x1002F678: push ebx */
    MEM32(ebp + (-0x470)) = edi; /* 0x1002F679: mov dword ptr [ebp - 0x470], edi */
    RECOMP_CALL(sub_10011E8E); /* 0x1002F67F: call 0x10011e8e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F684: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002F685: pop ecx */
    /* test eax, eax */ /* 0x1002F686: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F6E1; /* 0x1002F688: je 0x1002f6e1 */
L_1002F68A:
    eax = ebp + (-0x470); /* 0x1002F68A: lea eax, [ebp - 0x470] */
    PUSH32(esp, eax); /* 0x1002F690: push eax */
    PUSH32(esp, 0x104u); /* 0x1002F691: push 0x104 */
    eax = ebp + (-0x20C); /* 0x1002F696: lea eax, [ebp - 0x20c] */
    PUSH32(esp, ebx); /* 0x1002F69C: push ebx */
    PUSH32(esp, eax); /* 0x1002F69D: push eax */
    RECOMP_CALL(sub_1002F5F8); /* 0x1002F69E: call 0x1002f5f8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002F6A3: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x474)) = eax; /* 0x1002F6A6: mov dword ptr [ebp - 0x474], eax */
    /* test eax, eax */ /* 0x1002F6AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002F6D4; /* 0x1002F6AE: je 0x1002f6d4 */
L_1002F6B0:
    PUSH32(esp, eax); /* 0x1002F6B0: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x1002F6B1: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F6B6: pop ecx */
    /* cmp eax, 3 */ /* 0x1002F6B7: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100543DB; /* 0x1002F6BA: je 0x100543db */
L_1002F6C0:
    PUSH32(esp, MEM32(ebp + (-0x474))); /* 0x1002F6C0: push dword ptr [ebp - 0x474] */
    RECOMP_CALL(sub_1002F63C); /* 0x1002F6C6: call 0x1002f63c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002F6CB: pop ecx */
    /* test eax, eax */ /* 0x1002F6CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100543DB; /* 0x1002F6CE: jne 0x100543db */
L_1002F6D4:
    /* cmp MEM32(ebp + (-0x470)), edi */ /* 0x1002F6D4: cmp dword ptr [ebp - 0x470], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F6E1; /* 0x1002F6DA: je 0x1002f6e1 */
L_1002F6DC:
    goto L_10054453; /* 0x1002F6DC: jmp 0x10054453 */
L_1002F6E1:
    RECOMP_CALL(sub_1001177D); /* 0x1002F6E1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1002F6E6: push 2 */
    esi = POP32_VAL(esp); /* 0x1002F6E8: pop esi */
    MEM32(eax) = esi; /* 0x1002F6E9: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1001E471); /* 0x1002F6EB: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1002F6F0: mov dword ptr [eax], esi */
L_1002F6F2:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1002F6F2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015F03; /* 0x1002F6F5: jmp 0x10015f03 */
L_100543BF:
    RECOMP_CALL(sub_1001E471); /* 0x100543BF: call 0x1001e471 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x100543C4: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1001177D); /* 0x100543C6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100543CB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100543D1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002F6F2; /* 0x100543D6: jmp 0x1002f6f2 */
L_100543DB:
    PUSH32(esp, MEM32(ebp + (-0x474))); /* 0x100543DB: push dword ptr [ebp - 0x474] */
    RECOMP_ICALL(MEM32(0x100E50C4)); /* 0x100543E1: call dword ptr [0x100e50c4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100543E7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100543E9: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x100543EA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1002F6D4; /* 0x100543EC: jbe 0x1002f6d4 */
L_100543F2:
    /* cmp MEM32(ebp + (-0x470)), edi */ /* 0x100543F2: cmp dword ptr [ebp - 0x470], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10054406; /* 0x100543F8: je 0x10054406 */
L_100543FA:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x100543FA: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10054400: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10054405: pop ecx */
L_10054406:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10054406: push -1 */
    PUSH32(esp, edi); /* 0x10054408: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10054409: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x46C)) = 0x10u; /* 0x1005440B: mov dword ptr [ebp - 0x46c], 0x10 */
    PUSH32(esp, edi); /* 0x10054415: push edi */
    MEM16(ebp + (-0x440)) = (uint16_t)(LO16(eax)); /* 0x10054416: mov word ptr [ebp - 0x440], ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005441D: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x1005441E: push edi */
    PUSH32(esp, eax); /* 0x1005441F: push eax */
    PUSH32(esp, eax); /* 0x10054420: push eax */
    PUSH32(esp, 0x7BCu); /* 0x10054421: push 0x7bc */
    MEM32(ebp + (-0x450)) = edi; /* 0x10054426: mov dword ptr [ebp - 0x450], edi */
    MEM32(ebp + (-0x44C)) = edi; /* 0x1005442C: mov dword ptr [ebp - 0x44c], edi */
    RECOMP_CALL(sub_10015F93); /* 0x10054432: call 0x10015f93 */
    RECOMP_FLAGS_IN();
    ecx = edx; /* 0x10054437: mov ecx, edx */
    MEM32(esi + 0x20) = eax; /* 0x10054439: mov dword ptr [esi + 0x20], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1005443C: add esp, 0x1c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x24) = edx; /* 0x1005443F: mov dword ptr [esi + 0x24], edx */
    MEM32(esi + 0x18) = eax; /* 0x10054442: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0x1C) = ecx; /* 0x10054445: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi + 0x28) = eax; /* 0x10054448: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = ecx; /* 0x1005444B: mov dword ptr [esi + 0x2c], ecx */
    RECOMP_BACKEDGE();
    goto L_10015EBE; /* 0x1005444E: jmp 0x10015ebe */
L_10054453:
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x10054453: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10054459: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005445E: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002F6E1; /* 0x1005445F: jmp 0x1002f6e1 */
L_10054464:
    /* cmp MEM32(ebp + (-0x448)), 0xA000000Cu */ /* 0x10054464: cmp dword ptr [ebp - 0x448], 0xa000000c */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x448))); _flag_b = (uint32_t)(0xA000000Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015D35; /* 0x1005446E: jne 0x10015d35 */
L_10054474:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x470)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x470)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x470)) = MEM32(ebp + (-0x470)) | 0xFFFFFFFFu; /* 0x10054474: or dword ptr [ebp - 0x470], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x1005447B: mov eax, edi */
    /* test MEM8(ebp + (-0x46C)), 0x10u */ /* 0x1005447D: test byte ptr [ebp - 0x46c], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x46C))) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005448B; /* 0x10054484: je 0x1005448b */
L_10054486:
    eax = 0x2000u; /* 0x10054486: mov eax, 0x2000 */
L_1005448B:
    PUSH32(esp, edi); /* 0x1005448B: push edi */
    PUSH32(esp, 0x40u); /* 0x1005448C: push 0x40 */
    PUSH32(esp, eax); /* 0x1005448E: push eax */
    eax = ebp + (-0x470); /* 0x1005448F: lea eax, [ebp - 0x470] */
    PUSH32(esp, ebx); /* 0x10054495: push ebx */
    PUSH32(esp, eax); /* 0x10054496: push eax */
    RECOMP_CALL(sub_10015474); /* 0x10054497: call 0x10015474 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1005449C: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1005449F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002F6E1; /* 0x100544A1: jne 0x1002f6e1 */
L_100544A7:
    /* cmp MEM32(ebp + (-0x470)), 0xFFFFFFFFu */ /* 0x100544A7: cmp dword ptr [ebp - 0x470], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x470))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002F6E1; /* 0x100544AE: je 0x1002f6e1 */
L_100544B4:
    PUSH32(esp, esi); /* 0x100544B4: push esi */
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x100544B5: push dword ptr [ebp - 0x470] */
    RECOMP_CALL(sub_100A11E4); /* 0x100544BB: call 0x100a11e4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x470))); /* 0x100544C0: push dword ptr [ebp - 0x470] */
    esi = eax; /* 0x100544C6: mov esi, eax */
    RECOMP_CALL(sub_10014EA2); /* 0x100544C8: call 0x10014ea2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100544CD: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_10054543; /* 0x100544D0: jmp 0x10054543 */
L_100544D2:
    /* cmp MEM32(ebp + (-0x454)), edi */ /* 0x100544D2: cmp dword ptr [ebp - 0x454], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x454))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015D41; /* 0x100544D8: jne 0x10015d41 */
L_100544DE:
    MEM32(esi + 0x20) = edi; /* 0x100544DE: mov dword ptr [esi + 0x20], edi */
    MEM32(esi + 0x24) = edi; /* 0x100544E1: mov dword ptr [esi + 0x24], edi */
    RECOMP_BACKEDGE();
    goto L_10015DB4; /* 0x100544E4: jmp 0x10015db4 */
L_100544E9:
    /* cmp MEM32(ebp + (-0x45C)), edi */ /* 0x100544E9: cmp dword ptr [ebp - 0x45c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x45C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015DC0; /* 0x100544EF: jne 0x10015dc0 */
L_100544F5:
    eax = MEM32(esi + 0x20); /* 0x100544F5: mov eax, dword ptr [esi + 0x20] */
    MEM32(esi + 0x18) = eax; /* 0x100544F8: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x24); /* 0x100544FB: mov eax, dword ptr [esi + 0x24] */
    MEM32(esi + 0x1C) = eax; /* 0x100544FE: mov dword ptr [esi + 0x1c], eax */
    RECOMP_BACKEDGE();
    goto L_10015E33; /* 0x10054501: jmp 0x10015e33 */
L_10054506:
    /* cmp MEM32(ebp + (-0x464)), edi */ /* 0x10054506: cmp dword ptr [ebp - 0x464], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x464))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10015E3F; /* 0x1005450C: jne 0x10015e3f */
L_10054512:
    eax = MEM32(esi + 0x20); /* 0x10054512: mov eax, dword ptr [esi + 0x20] */
    MEM32(esi + 0x28) = eax; /* 0x10054515: mov dword ptr [esi + 0x28], eax */
    eax = MEM32(esi + 0x24); /* 0x10054518: mov eax, dword ptr [esi + 0x24] */
    MEM32(esi + 0x2C) = eax; /* 0x1005451B: mov dword ptr [esi + 0x2c], eax */
    RECOMP_BACKEDGE();
    goto L_10015EB2; /* 0x1005451E: jmp 0x10015eb2 */
L_10054523:
    RECOMP_CALL(sub_1001177D); /* 0x10054523: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x84u; /* 0x10054528: mov dword ptr [eax], 0x84 */
    MEM32(esi + 0x14) = edi; /* 0x1005452E: mov dword ptr [esi + 0x14], edi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x10054531: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015EEC; /* 0x10054534: jmp 0x10015eec */
L_10054539:
    PUSH32(esp, eax); /* 0x10054539: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1005453A: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1005453F: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10054542: pop ecx */
L_10054543:
    PUSH32(esp, MEM32(ebp + (-0x474))); /* 0x10054543: push dword ptr [ebp - 0x474] */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x10054549: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1005454F: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10015F03; /* 0x10054551: jmp 0x10015f03 */
L_10054556:
    PUSH32(esp, eax); /* 0x10054556: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x10054557: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005455C: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x474))); /* 0x1005455D: push dword ptr [ebp - 0x474] */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x10054563: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002F6F2; /* 0x10054569: jmp 0x1002f6f2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10015F14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015F14u);

    goto L_10015F14;
L_100158FC:
    /* cmp ebx, ecx */ /* 0x100158FC: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10015F1A; /* 0x100158FE: jae 0x10015f1a */
L_10015904:
    PUSH32(esp, esi); /* 0x10015904: push esi */
    RECOMP_CALL(sub_10014C47); /* 0x10015905: call 0x10014c47 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001590A: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1001590B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015AD1; /* 0x1001590E: je 0x10015ad1 */
L_10015914:
    ecx = MEM32(ebp + (-0x8)); /* 0x10015914: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x10015917: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015AE6; /* 0x10015919: je 0x10015ae6 */
L_1001591F:
    edx = MEM32(ebp + (-0x4)); /* 0x1001591F: mov edx, dword ptr [ebp - 4] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x10015922: mov byte ptr [edx], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10015924: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x10015925: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edx; /* 0x10015926: mov dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10015929: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1001592A: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(esi + 0x18); /* 0x1001592D: mov ecx, dword ptr [esi + 0x18] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x10015930: mov dword ptr [ebp - 0xc], ecx */
    goto L_100159FB; /* 0x10015933: jmp 0x100159fb */
L_100159A4:
    /* test MEM32(esi + 0xC), 0x10Cu */ /* 0x100159A4: test dword ptr [esi + 0xc], 0x10c */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x10Cu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100158FC; /* 0x100159AB: je 0x100158fc */
L_100159B1:
    eax = MEM32(esi + 0x4); /* 0x100159B1: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x100159B4: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x100159B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100158FC; /* 0x100159B9: je 0x100158fc */
L_100159BF:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10015AF5; /* 0x100159BF: js 0x10015af5 */
L_100159C5:
    /* cmp ebx, eax */ /* 0x100159C5: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100159CE; /* 0x100159C7: jae 0x100159ce */
L_100159C9:
    eax = ebx; /* 0x100159C9: mov eax, ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x100159CB: mov dword ptr [ebp - 0x10], ebx */
L_100159CE:
    ecx = MEM32(ebp + (-0x8)); /* 0x100159CE: mov ecx, dword ptr [ebp - 8] */
    /* cmp eax, ecx */ /* 0x100159D1: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10015AE6; /* 0x100159D3: ja 0x10015ae6 */
L_100159D9:
    PUSH32(esp, eax); /* 0x100159D9: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x100159DA: push dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x100159DC: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100159DD: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1000F62F); /* 0x100159E0: call 0x1000f62f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x100159E5: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100159E8: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - eax; /* 0x100159EB: sub dword ptr [esi + 4], eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x100159EE: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + eax; /* 0x100159F0: add dword ptr [esi], eax */
    _flag_k = FK_ADD;
L_100159F2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + eax; /* 0x100159F2: add dword ptr [ebp - 4], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - eax; /* 0x100159F5: sub dword ptr [ebp - 8], eax */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0xC)); /* 0x100159F8: mov ecx, dword ptr [ebp - 0xc] */
L_100159FB:
    /* test ebx, ebx */ /* 0x100159FB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100159A4; /* 0x100159FD: jne 0x100159a4 */
L_100159FF:
    eax = MEM32(ebp + 0x14); /* 0x100159FF: mov eax, dword ptr [ebp + 0x14] */
L_10015A02:
    edi = POP32_VAL(esp); /* 0x10015A02: pop edi */
    esi = POP32_VAL(esp); /* 0x10015A03: pop esi */
    ebx = POP32_VAL(esp); /* 0x10015A04: pop ebx */
    esp = ebp; /* 0x10015A05: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10015A07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10015A08: ret  */
L_10015AD1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x10015AD1: sub edi, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10015AD3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x10015AD5: mov eax, edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x10); /* 0x10015AD7: div dword ptr [ebp + 0x10] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    RECOMP_BACKEDGE();
    goto L_10015A02; /* 0x10015ADA: jmp 0x10015a02 */
L_10015ADF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10015ADF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015A02; /* 0x10015AE1: jmp 0x10015a02 */
L_10015AE6:
    /* cmp MEM32(ebp + 0xC), 0xFFFFFFFFu */ /* 0x10015AE6: cmp dword ptr [ebp + 0xc], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100555DF; /* 0x10015AEA: jne 0x100555df */
L_10015AF0:
    goto L_100555EF; /* 0x10015AF0: jmp 0x100555ef */
L_10015AF5:
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0x20u));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20u; /* 0x10015AF5: or dword ptr [esi + 0xc], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015AD1; /* 0x10015AF9: jmp 0x10015ad1 */
L_10015AFB:
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0x10u)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0x10u));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x10u; /* 0x10015AFB: or dword ptr [esi + 0xc], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10015AD1; /* 0x10015AFF: jmp 0x10015ad1 */
L_10015F14:
    void_lift_trap(0x10015F14u, "aas ");
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ecx)); /* 0x10015F15: add byte ptr [edx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10015F17: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x5A7BF037))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x5A7BF037)) = (uint8_t)(MEM8(ebp + (-0x5A7BF037)) + LO8(eax)); /* 0x10015F19: add byte ptr [ebp - 0x5a7bf037], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10015F1F; /* falls through past a gap */
L_10015F1A:
    /* test ecx, ecx */ /* 0x10015F1A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100555C7; /* 0x10015F1C: je 0x100555c7 */
    goto L_10015F22; /* falls through past a gap */
L_10015F1F:
    /* test MEM8(ebx), 0 */ /* 0x10015F1F: test byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10015F22:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10015F22: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x10015F24: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100555B6; /* 0x10015F2A: ja 0x100555b6 */
L_10015F30:
    eax = ebx; /* 0x10015F30: mov eax, ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10015F32: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = ebx; /* 0x10015F34: mov eax, ebx */
L_10015F36:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x10015F36: sub eax, edx */
    _flag_k = FK_CMP;
L_10015F38:
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x10015F38: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_10015AE6; /* 0x10015F3B: ja 0x10015ae6 */
L_10015F41:
    PUSH32(esp, eax); /* 0x10015F41: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10015F42: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x10015F45: push esi */
    RECOMP_CALL(sub_1001427C); /* 0x10015F46: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10015F4B: pop ecx */
    PUSH32(esp, eax); /* 0x10015F4C: push eax */
    RECOMP_CALL(sub_10015078); /* 0x10015F4D: call 0x10015078 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10015F52: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10015F55: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10015AFB; /* 0x10015F57: je 0x10015afb */
L_10015F5D:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10015F5D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10015AF5; /* 0x10015F60: je 0x10015af5 */
L_10015F66:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x10015F66: sub ebx, eax */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_100159F2; /* 0x10015F68: jmp 0x100159f2 */
L_10055582:
    RECOMP_CALL(sub_100A4670); /* 0x10055582: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10015ADF; /* 0x10055587: jmp 0x10015adf */
L_100555B6:
    eax = 0x7FFFFFFFu; /* 0x100555B6: mov eax, 0x7fffffff */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x100555BB: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = 0x7FFFFFFFu; /* 0x100555BD: mov eax, 0x7fffffff */
    RECOMP_BACKEDGE();
    goto L_10015F36; /* 0x100555C2: jmp 0x10015f36 */
L_100555C7:
    eax = 0x7FFFFFFFu; /* 0x100555C7: mov eax, 0x7fffffff */
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x100555CC: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_10015F38; /* 0x100555D2: ja 0x10015f38 */
L_100555D8:
    eax = ebx; /* 0x100555D8: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_10015F38; /* 0x100555DA: jmp 0x10015f38 */
L_100555DF:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100555DF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x100555E2: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100555E4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10011533); /* 0x100555E7: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100555EC: add esp, 0xc */
    _flag_k = FK_ADD;
L_100555EF:
    RECOMP_CALL(sub_1001177D); /* 0x100555EF: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x100555F4: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_10055582; /* 0x100555FA: jmp 0x10055582 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10015F93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10015F93u);

L_10015F93:
    PUSH32(esp, ebp); /* 0x10015F93: push ebp */
    ebp = esp; /* 0x10015F94: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x10015F96: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10015F99: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10015F9E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10015FA0: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0xC); /* 0x10015FA3: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10015FA6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10015FA8: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10015FA9: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFF894u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFF894u; /* 0x10015FAC: add ebx, 0xfffff894 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = ecx; /* 0x10015FB2: mov dword ptr [ebp - 0x40], ecx */
    MEM32(ebp + (-0x30)) = eax; /* 0x10015FB5: mov dword ptr [ebp - 0x30], eax */
    MEM32(ebp + (-0x34)) = eax; /* 0x10015FB8: mov dword ptr [ebp - 0x34], eax */
    MEM32(ebp + (-0x38)) = eax; /* 0x10015FBB: mov dword ptr [ebp - 0x38], eax */
    PUSH32(esp, esi); /* 0x10015FBE: push esi */
    PUSH32(esp, edi); /* 0x10015FBF: push edi */
    /* cmp ebx, 0x46u */ /* 0x10015FC0: cmp ebx, 0x46 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10016195; /* 0x10015FC3: jl 0x10016195 */
L_10015FC9:
    /* cmp ebx, 0x44Cu */ /* 0x10015FC9: cmp ebx, 0x44c */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x44Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10016195; /* 0x10015FCF: jg 0x10016195 */
L_10015FD5:
    eax = ecx + (-0x1); /* 0x10015FD5: lea eax, [ecx - 1] */
    /* cmp eax, 0xBu */ /* 0x10015FD8: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10016195; /* 0x10015FDB: ja 0x10016195 */
L_10015FE1:
    /* cmp MEM32(ebp + 0x14), 0x17u */ /* 0x10015FE1: cmp dword ptr [ebp + 0x14], 0x17 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10016195; /* 0x10015FE5: ja 0x10016195 */
L_10015FEB:
    /* cmp MEM32(ebp + 0x18), 0x3Bu */ /* 0x10015FEB: cmp dword ptr [ebp + 0x18], 0x3b */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10016195; /* 0x10015FEF: ja 0x10016195 */
L_10015FF5:
    /* cmp MEM32(ebp + 0x1C), 0x3Bu */ /* 0x10015FF5: cmp dword ptr [ebp + 0x1c], 0x3b */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10016195; /* 0x10015FF9: ja 0x10016195 */
L_10015FFF:
    esi = MEM32(ebp + 0x10); /* 0x10015FFF: mov esi, dword ptr [ebp + 0x10] */
    /* cmp esi, 1 */ /* 0x10016002: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10016195; /* 0x10016005: jl 0x10016195 */
L_1001600B:
    eax = MEM32(ecx * 4 + 0x100DFE38); /* 0x1001600B: mov eax, dword ptr [ecx*4 + 0x100dfe38] */
    edi = MEM32(ecx * 4 + 0x100DFE34); /* 0x10016012: mov edi, dword ptr [ecx*4 + 0x100dfe34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x10016019: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = 0x64u; /* 0x1001601B: mov dword ptr [ebp - 0x2c], 0x64 */
    MEM32(ebp + (-0x3C)) = 0x190u; /* 0x10016022: mov dword ptr [ebp - 0x3c], 0x190 */
    /* cmp eax, esi */ /* 0x10016029: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10056953; /* 0x1001602B: jl 0x10056953 */
L_10016031:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x10016031: add esi, edi */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x10016033: mov eax, ebx */
    MEM32(ebp + (-0x2C)) = esi; /* 0x10016035: mov dword ptr [ebp - 0x2c], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x10016038: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10056996; /* 0x1001603D: js 0x10056996 */
L_10016043:
    PUSH32(esp, 0x64u); /* 0x10016043: push 0x64 */
    edi = POP32_VAL(esp); /* 0x10016045: pop edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100569A0; /* 0x10016046: je 0x100569a0 */
L_1001604C:
    eax = ebx + 0x76C; /* 0x1001604C: lea eax, [ebx + 0x76c] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10016052: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x3C)); /* 0x10016053: idiv dword ptr [ebp - 0x3c] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x10016056: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100569AD; /* 0x10016058: je 0x100569ad */
L_1001605E:
    RECOMP_CALL(sub_10015B4C); /* 0x1001605E: call 0x10015b4c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x30); /* 0x10016063: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x10016066: push eax */
    RECOMP_CALL(sub_10015B1A); /* 0x10016067: call 0x10015b1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001606C: pop ecx */
    /* test eax, eax */ /* 0x1001606D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100569CF; /* 0x1001606F: jne 0x100569cf */
L_10016075:
    eax = ebp + (-0x34); /* 0x10016075: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x10016078: push eax */
    RECOMP_CALL(sub_10015B33); /* 0x10016079: call 0x10015b33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001607E: pop ecx */
    /* test eax, eax */ /* 0x1001607F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100569CF; /* 0x10016081: jne 0x100569cf */
L_10016087:
    eax = ebp + (-0x38); /* 0x10016087: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1001608A: push eax */
    RECOMP_CALL(sub_10015B01); /* 0x1001608B: call 0x10015b01 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10016090: pop ecx */
    /* test eax, eax */ /* 0x10016091: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100569CF; /* 0x10016093: jne 0x100569cf */
L_10016099:
    eax = ebx + 0x12B; /* 0x10016099: lea eax, [ebx + 0x12b] */
    esi = 0x190u; /* 0x1001609F: mov esi, 0x190 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100160A4: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x100160A5: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0); /* 0x100160A7: push 0 */
    esi = eax; /* 0x100160A9: mov esi, eax */
    eax = ebx + (-0x1); /* 0x100160AB: lea eax, [ebx - 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100160AE: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x100160AF: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0x16Du); /* 0x100160B1: push 0x16d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x100160B6: sub esi, eax */
    _flag_k = FK_CMP;
    eax = ebx + (-0x1); /* 0x100160B8: lea eax, [ebx - 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100160BB: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x100160BC: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x100160BF: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x100160C1: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFEFu; /* 0x100160C4: add eax, -0x11 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x100160C7: add eax, esi */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100160C9: cdq  */
    edi = eax; /* 0x100160CA: mov edi, eax */
    esi = edx; /* 0x100160CC: mov esi, edx */
    eax = ebx; /* 0x100160CE: mov eax, ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100160D0: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x46u; /* 0x100160D1: sub eax, 0x46 */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100160D4: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edx); /* 0x100160D7: push edx */
    PUSH32(esp, eax); /* 0x100160D8: push eax */
    RECOMP_CALL(sub_10015B8C); /* 0x100160D9: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x100160DE: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x2C)); /* 0x100160E0: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 0); /* 0x100160E3: push 0 */
    { uint32_t _aa = esi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100160E5: adc esi, edx */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100160E7: cdq  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x100160E8: add edi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x18u); /* 0x100160EA: push 0x18 */
    { uint32_t _aa = esi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100160EC: adc esi, edx */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, esi); /* 0x100160EE: push esi */
    PUSH32(esp, edi); /* 0x100160EF: push edi */
    RECOMP_CALL(sub_10015B8C); /* 0x100160F0: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100160F5: mov esi, eax */
    ecx = edx; /* 0x100160F7: mov ecx, edx */
    eax = MEM32(ebp + 0x14); /* 0x100160F9: mov eax, dword ptr [ebp + 0x14] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100160FC: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x100160FD: add esi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x100160FF: push 0 */
    PUSH32(esp, 0x3Cu); /* 0x10016101: push 0x3c */
    { uint32_t _aa = ecx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10016103: adc ecx, edx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ecx); /* 0x10016105: push ecx */
    PUSH32(esp, esi); /* 0x10016106: push esi */
    RECOMP_CALL(sub_10015B8C); /* 0x10016107: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1001610C: mov esi, eax */
    ecx = edx; /* 0x1001610E: mov ecx, edx */
    eax = MEM32(ebp + 0x18); /* 0x10016110: mov eax, dword ptr [ebp + 0x18] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10016113: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10016114: add esi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x10016116: push 0 */
    PUSH32(esp, 0x3Cu); /* 0x10016118: push 0x3c */
    { uint32_t _aa = ecx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1001611A: adc ecx, edx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ecx); /* 0x1001611C: push ecx */
    PUSH32(esp, esi); /* 0x1001611D: push esi */
    RECOMP_CALL(sub_10015B8C); /* 0x1001611E: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x1C); /* 0x10016123: mov ecx, dword ptr [ebp + 0x1c] */
    esi = eax; /* 0x10016126: mov esi, eax */
    eax = MEM32(ebp + (-0x38)); /* 0x10016128: mov eax, dword ptr [ebp - 0x38] */
    edi = edx; /* 0x1001612B: mov edi, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1001612D: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1001612E: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ebx; /* 0x10016130: mov dword ptr [ebp - 0x14], ebx */
    eax = ecx; /* 0x10016133: mov eax, ecx */
    { uint32_t _aa = edi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10016135: adc edi, edx */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10016137: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10016138: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x2C)); /* 0x1001613A: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1001613D: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x40)); /* 0x10016140: mov eax, dword ptr [ebp - 0x40] */
    { uint32_t _aa = edi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10016143: adc edi, edx */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10016145: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18)) = eax; /* 0x10016146: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + 0x14); /* 0x10016149: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1001614C: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + 0x18); /* 0x1001614F: mov eax, dword ptr [ebp + 0x18] */
    /* cmp MEM32(ebp + 0x20), 1 */ /* 0x10016152: cmp dword ptr [ebp + 0x20], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = eax; /* 0x10016156: mov dword ptr [ebp - 0x24], eax */
    MEM32(ebp + (-0x28)) = ecx; /* 0x10016159: mov dword ptr [ebp - 0x28], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016178; /* 0x1001615C: je 0x10016178 */
L_1001615E:
    /* cmp MEM32(ebp + 0x20), 0xFFFFFFFFu */ /* 0x1001615E: cmp dword ptr [ebp + 0x20], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10016180; /* 0x10016162: jne 0x10016180 */
L_10016164:
    /* cmp MEM32(ebp + (-0x30)), 0 */ /* 0x10016164: cmp dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016180; /* 0x10016168: je 0x10016180 */
L_1001616A:
    eax = ebp + (-0x28); /* 0x1001616A: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1001616D: push eax */
    RECOMP_CALL(sub_10015BB2); /* 0x1001616E: call 0x10015bb2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10016173: pop ecx */
    /* test eax, eax */ /* 0x10016174: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016180; /* 0x10016176: je 0x10016180 */
L_10016178:
    eax = MEM32(ebp + (-0x34)); /* 0x10016178: mov eax, dword ptr [ebp - 0x34] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1001617B: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1001617C: add esi, eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = edi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1001617E: adc edi, edx */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10016180:
    eax = esi; /* 0x10016180: mov eax, esi */
    edx = edi; /* 0x10016182: mov edx, edi */
L_10016184:
    ecx = MEM32(ebp + (-0x4)); /* 0x10016184: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x10016187: pop edi */
    esi = POP32_VAL(esp); /* 0x10016188: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10016189: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1001618B: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x1001618C: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10016191: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10016193: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10016194: ret  */
L_10016195:
    RECOMP_CALL(sub_1001177D); /* 0x10016195: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_100569BF; /* 0x1001619A: jmp 0x100569bf */
L_10056953:
    eax = ebx; /* 0x10056953: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x10056955: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10056961; /* 0x1005695A: jns 0x10056961 */
L_1005695C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005695C: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x1005695D: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10056960: inc eax */
    _flag_k = FK_INC;
L_10056961:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1005696D; /* 0x10056961: jne 0x1005696d */
L_10056963:
    eax = ebx; /* 0x10056963: mov eax, ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056965: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x2C)); /* 0x10056966: idiv dword ptr [ebp - 0x2c] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x10056969: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005697F; /* 0x1005696B: jne 0x1005697f */
L_1005696D:
    eax = ebx + 0x76C; /* 0x1005696D: lea eax, [ebx + 0x76c] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056973: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x3C)); /* 0x10056974: idiv dword ptr [ebp - 0x3c] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x10056977: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016195; /* 0x10056979: jne 0x10016195 */
L_1005697F:
    /* cmp ecx, 2 */ /* 0x1005697F: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10016195; /* 0x10056982: jne 0x10016195 */
L_10056988:
    /* cmp esi, 0x1Du */ /* 0x10056988: cmp esi, 0x1d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_10016031; /* 0x1005698B: jle 0x10016031 */
L_10056991:
    RECOMP_BACKEDGE();
    goto L_10016195; /* 0x10056991: jmp 0x10016195 */
L_10056996:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10056996: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x10056997: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005699A: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10016043; /* 0x1005699B: jmp 0x10016043 */
L_100569A0:
    eax = ebx; /* 0x100569A0: mov eax, ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100569A2: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x100569A3: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x100569A5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001604C; /* 0x100569A7: je 0x1001604c */
L_100569AD:
    /* cmp ecx, 2 */ /* 0x100569AD: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1001605E; /* 0x100569B0: jle 0x1001605e */
L_100569B6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100569B6: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = esi; /* 0x100569B7: mov dword ptr [ebp - 0x2c], esi */
    RECOMP_BACKEDGE();
    goto L_1001605E; /* 0x100569BA: jmp 0x1001605e */
L_100569BF:
    MEM32(eax) = 0x16u; /* 0x100569BF: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100569C5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x100569C8: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016184; /* 0x100569CA: jmp 0x10016184 */
L_100569CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100569CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100569D1: push eax */
    PUSH32(esp, eax); /* 0x100569D2: push eax */
    PUSH32(esp, eax); /* 0x100569D3: push eax */
    PUSH32(esp, eax); /* 0x100569D4: push eax */
    PUSH32(esp, eax); /* 0x100569D5: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x100569D6: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100569DBu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001619F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001619Fu);

L_1001619F:
    PUSH32(esp, ebp); /* 0x1001619F: push ebp */
    ebp = esp; /* 0x100161A0: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100161A2: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100161A5: push esi */
    PUSH32(esp, edi); /* 0x100161A6: push edi */
    edi = MEM32(ebp + 0xC); /* 0x100161A7: mov edi, dword ptr [ebp + 0xc] */
    edx = edi; /* 0x100161AA: mov edx, edi */
    eax = (uint32_t)LO8(eax); /* 0x100161AC: movzx eax, al */
    /* cmp MEM16(edi + 0x2), 0x3Au */ /* 0x100161AF: cmp word ptr [edi + 2], 0x3a */
    _flag_a = (uint32_t)(MEM16(edi + 0x2)) << 16; _flag_b = (uint32_t)(0x3Au) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100161B9; /* 0x100161B4: jne 0x100161b9 */
L_100161B6:
    edx = edi + 0x4; /* 0x100161B6: lea edx, [edi + 4] */
L_100161B9:
    ecx = (uint32_t)MEM16(edx); /* 0x100161B9: movzx ecx, word ptr [edx] */
    /* cmp ecx, 0x5Cu */ /* 0x100161BC: cmp ecx, 0x5c */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10016263; /* 0x100161BF: jne 0x10016263 */
L_100161C5:
    /* cmp MEM16(edx + 0x2), 0 */ /* 0x100161C5: cmp word ptr [edx + 2], 0 */
    _flag_a = (uint32_t)(MEM16(edx + 0x2)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016271; /* 0x100161CA: je 0x10016271 */
L_100161D0:
    /* test LO8(eax), 0x10u */ /* 0x100161D0: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016271; /* 0x100161D2: jne 0x10016271 */
L_100161D8:
    esi = 0x8000u; /* 0x100161D8: mov esi, 0x8000 */
    /* test LO16(ecx), LO16(ecx) */ /* 0x100161DD: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016271; /* 0x100161E0: je 0x10016271 */
L_100161E6:
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x100161E6: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x100161E6: shl eax, 7 */
    eax = ~eax; /* 0x100161E9: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    eax = eax & 0x80u; /* 0x100161EB: and eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x100u)); _flag_b = (uint32_t)((eax | 0x100u));
    eax = eax | 0x100u; /* 0x100161F0: or eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x2Eu); /* 0x100161F5: push 0x2e */
    PUSH32(esp, edi); /* 0x100161F7: push edi */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x100161F8: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_10011E16); /* 0x100161FA: call 0x10011e16 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100161FF: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x10016201: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10016202: pop ecx */
    /* test edi, edi */ /* 0x10016203: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001624B; /* 0x10016205: je 0x1001624b */
L_10016207:
    PUSH32(esp, 0x10016280u); /* 0x10016207: push 0x10016280 */
    PUSH32(esp, edi); /* 0x1001620C: push edi */
    RECOMP_CALL(sub_1000F840); /* 0x1001620D: call 0x1000f840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10016212: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10016213: pop ecx */
    /* test eax, eax */ /* 0x10016214: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001627B; /* 0x10016216: je 0x1001627b */
L_10016218:
    PUSH32(esp, 0x1001628Cu); /* 0x10016218: push 0x1001628c */
    PUSH32(esp, edi); /* 0x1001621D: push edi */
    RECOMP_CALL(sub_1000F840); /* 0x1001621E: call 0x1000f840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10016223: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10016224: pop ecx */
    /* test eax, eax */ /* 0x10016225: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001627B; /* 0x10016227: je 0x1001627b */
L_10016229:
    PUSH32(esp, 0x10016298u); /* 0x10016229: push 0x10016298 */
    PUSH32(esp, edi); /* 0x1001622E: push edi */
    RECOMP_CALL(sub_1000F840); /* 0x1001622F: call 0x1000f840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10016234: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10016235: pop ecx */
    /* test eax, eax */ /* 0x10016236: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001627B; /* 0x10016238: je 0x1001627b */
L_1001623A:
    PUSH32(esp, 0x100162A4u); /* 0x1001623A: push 0x100162a4 */
    PUSH32(esp, edi); /* 0x1001623F: push edi */
    RECOMP_CALL(sub_1000F840); /* 0x10016240: call 0x1000f840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10016245: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10016246: pop ecx */
    /* test eax, eax */ /* 0x10016247: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001627B; /* 0x10016249: je 0x1001627b */
L_1001624B:
    eax = esi; /* 0x1001624B: mov eax, esi */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x1001624D: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x1001624D: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    eax = eax & 0x38u; /* 0x10016250: and eax, 0x38 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x10016253: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x10016255: mov eax, esi */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x10016257: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x10016257: shr eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x1001625A: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1001625D: pop edi */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1001625E: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x10016260: pop esi */
    ebp = POP32_VAL(esp); /* 0x10016261: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10016262: ret  */
L_10016263:
    /* cmp ecx, 0x2Fu */ /* 0x10016263: cmp ecx, 0x2f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100161C5; /* 0x10016266: je 0x100161c5 */
L_1001626C:
    RECOMP_BACKEDGE();
    goto L_100161D0; /* 0x1001626C: jmp 0x100161d0 */
L_10016271:
    esi = 0x4040u; /* 0x10016271: mov esi, 0x4040 */
    RECOMP_BACKEDGE();
    goto L_100161E6; /* 0x10016276: jmp 0x100161e6 */
L_1001627B:
    _flag_a = (uint32_t)((esi | 0x40u)); _flag_b = (uint32_t)((esi | 0x40u));
    esi = esi | 0x40u; /* 0x1001627B: or esi, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001624B; /* 0x1001627E: jmp 0x1001624b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10016280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10016280u);

L_10016280:
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x10016280: add byte ptr cs:[ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_10016286; /* 0x10016284: js 0x10016286 */
L_10016286:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + LO8(eax)); /* 0x10016286: add byte ptr gs:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x63002E90)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x63002E90) = (uint8_t)(MEM8(eax + 0x63002E90) + LO8(edx)); /* 0x10016289: add byte ptr [eax + 0x63002e90], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x1001628F: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (eax))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (eax)) = (uint8_t)(MEM8(FS_BASE + (eax)) + LO8(eax)); /* 0x10016292: add byte ptr fs:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x62002E90)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x62002E90) = (uint8_t)(MEM8(eax + 0x62002E90) + LO8(edx)); /* 0x10016295: add byte ptr [eax + 0x62002e90], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x1001629B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100162A0; /* 0x1001629E: je 0x100162a0 */
L_100162A0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100162A0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100162A2: nop  */
    /* nop */ /* 0x100162A3: nop  */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100162A4: add byte ptr cs:[ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100162A8: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100162A9: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100162AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100162AE:
    /* test ecx, ecx */ /* 0x100162AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016381; /* 0x100162B0: je 0x10016381 */
L_100162B6:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x100162B6: movsx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x100162B9: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10016376; /* 0x100162BC: je 0x10016376 */
L_100162C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x100162C2: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100554B7; /* 0x100162C5: je 0x100554b7 */
L_100162CB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x37u; /* 0x100162CB: sub eax, 0x37 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1005547C; /* 0x100162CE: jne 0x1005547c */
L_100162D4:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100162D4: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001640C; /* 0x100162D8: jne 0x1001640c */
L_100162DE:
    MEM32(ebp + 0xC) = 1; /* 0x100162DE: mov dword ptr [ebp + 0xc], 1 */
    goto L_10016376; /* 0x100162E5: jmp 0x10016376 */
L_10016376:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10016376: inc edx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(edx)); /* 0x10016377: mov al, byte ptr [edx] */
    /* test LO8(eax), LO8(eax) */ /* 0x10016379: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100162AE; /* 0x1001637B: jne 0x100162ae */
L_10016381:
    /* cmp MEM8(edx), 0x20u */ /* 0x10016381: cmp byte ptr [edx], 0x20 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016413; /* 0x10016384: je 0x10016413 */
L_1001638A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001638A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edx), LO8(eax) */ /* 0x1001638C: cmp byte ptr [edx], al */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001638E: sete al */
    /* test eax, eax */ /* 0x10016391: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055446; /* 0x10016393: je 0x10055446 */
L_10016399:
    RECOMP_CALL(sub_10015857); /* 0x10016399: call 0x10015857 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1001639E: mov esi, eax */
    MEM32(ebp + 0xC) = esi; /* 0x100163A0: mov dword ptr [ebp + 0xc], esi */
    /* test esi, esi */ /* 0x100163A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100554CD; /* 0x100163A5: je 0x100554cd */
L_100163AB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100163AB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = ebx; /* 0x100163AF: mov dword ptr [esi + 0xc], ebx */
    MEM32(esi + 0x10) = edi; /* 0x100163B2: mov dword ptr [esi + 0x10], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100163B5: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100163EC); /* 0x100163BC: call 0x100163ec */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100163C1: mov eax, esi */
L_100163C3:
    RECOMP_CALL(sub_1000EDC3); /* 0x100163C3: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100163C8: ret  */
L_1001640C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001640C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x1001640E: jmp 0x10016376 */
L_10016413:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10016413: inc edx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10016381; /* 0x10016414: jmp 0x10016381 */
L_10055446:
    RECOMP_CALL(sub_1001177D); /* 0x10055446: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005544B: mov dword ptr [eax], 0x16 */
    goto L_10055466; /* 0x10055451: jmp 0x10055466 */
L_10055466:
    RECOMP_CALL(sub_100A4670); /* 0x10055466: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005546B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005546B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100163C3; /* 0x1005546D: jmp 0x100163c3 */
L_1005547C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005547C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100554A3; /* 0x1005547D: je 0x100554a3 */
L_1005547F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x1005547F: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005548F; /* 0x10055482: je 0x1005548f */
L_10055484:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x10055484: sub eax, 6 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100162D4; /* 0x10055487: je 0x100162d4 */
L_1005548D:
    RECOMP_BACKEDGE();
    goto L_10055446; /* 0x1005548D: jmp 0x10055446 */
L_1005548F:
    /* test esi, esi */ /* 0x1005548F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001640C; /* 0x10055491: jne 0x1001640c */
L_10055497:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10055497: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFBFFFu);
    ebx = ebx & 0xFFFFBFFFu; /* 0x10055498: and ebx, 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x1005549E: jmp 0x10016376 */
L_100554A3:
    /* test esi, esi */ /* 0x100554A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001640C; /* 0x100554A5: jne 0x1001640c */
L_100554AB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100554AB: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((ebx | 0x4000u)); _flag_b = (uint32_t)((ebx | 0x4000u));
    ebx = ebx | 0x4000u; /* 0x100554AC: or ebx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x100554B2: jmp 0x10016376 */
L_100554B7:
    /* test LO8(ebx), LO8(ebx) */ /* 0x100554B7: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001640C; /* 0x100554B9: js 0x1001640c */
L_100554BF:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ebx = ebx & 0xFFFFFFFCu; /* 0x100554BF: and ebx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 0x80u)); _flag_b = (uint32_t)((ebx | 0x80u));
    ebx = ebx | 0x80u; /* 0x100554C2: or ebx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x100554C8: jmp 0x10016376 */
L_100554CD:
    RECOMP_CALL(sub_1001177D); /* 0x100554CD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x100554D2: mov dword ptr [eax], 0x18 */
    RECOMP_BACKEDGE();
    goto L_1005546B; /* 0x100554D8: jmp 0x1005546b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1001628C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001628Cu);

L_1001628C:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x1001628C: add byte ptr cs:[ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x10016290u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(eax)); /* 0x10016291: add byte ptr [eax + eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x62002E90)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x62002E90) = (uint8_t)(MEM8(eax + 0x62002E90) + LO8(edx)); /* 0x10016295: add byte ptr [eax + 0x62002e90], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x1001629B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100162A0; /* 0x1001629E: je 0x100162a0 */
L_100162A0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100162A0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100162A2: nop  */
    /* nop */ /* 0x100162A3: nop  */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100162A4: add byte ptr cs:[ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100162A8: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100162A9: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100162AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100162AE:
    /* test ecx, ecx */ /* 0x100162AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016381; /* 0x100162B0: je 0x10016381 */
L_100162B6:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x100162B6: movsx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x100162B9: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10016376; /* 0x100162BC: je 0x10016376 */
L_100162C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x100162C2: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100554B7; /* 0x100162C5: je 0x100554b7 */
L_100162CB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x37u; /* 0x100162CB: sub eax, 0x37 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1005547C; /* 0x100162CE: jne 0x1005547c */
L_100162D4:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100162D4: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001640C; /* 0x100162D8: jne 0x1001640c */
L_100162DE:
    MEM32(ebp + 0xC) = 1; /* 0x100162DE: mov dword ptr [ebp + 0xc], 1 */
    goto L_10016376; /* 0x100162E5: jmp 0x10016376 */
L_10016376:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10016376: inc edx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(edx)); /* 0x10016377: mov al, byte ptr [edx] */
    /* test LO8(eax), LO8(eax) */ /* 0x10016379: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100162AE; /* 0x1001637B: jne 0x100162ae */
L_10016381:
    /* cmp MEM8(edx), 0x20u */ /* 0x10016381: cmp byte ptr [edx], 0x20 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016413; /* 0x10016384: je 0x10016413 */
L_1001638A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001638A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edx), LO8(eax) */ /* 0x1001638C: cmp byte ptr [edx], al */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001638E: sete al */
    /* test eax, eax */ /* 0x10016391: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055446; /* 0x10016393: je 0x10055446 */
L_10016399:
    RECOMP_CALL(sub_10015857); /* 0x10016399: call 0x10015857 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1001639E: mov esi, eax */
    MEM32(ebp + 0xC) = esi; /* 0x100163A0: mov dword ptr [ebp + 0xc], esi */
    /* test esi, esi */ /* 0x100163A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100554CD; /* 0x100163A5: je 0x100554cd */
L_100163AB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100163AB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = ebx; /* 0x100163AF: mov dword ptr [esi + 0xc], ebx */
    MEM32(esi + 0x10) = edi; /* 0x100163B2: mov dword ptr [esi + 0x10], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100163B5: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100163EC); /* 0x100163BC: call 0x100163ec */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100163C1: mov eax, esi */
L_100163C3:
    RECOMP_CALL(sub_1000EDC3); /* 0x100163C3: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100163C8: ret  */
L_1001640C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001640C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x1001640E: jmp 0x10016376 */
L_10016413:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10016413: inc edx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10016381; /* 0x10016414: jmp 0x10016381 */
L_10055446:
    RECOMP_CALL(sub_1001177D); /* 0x10055446: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005544B: mov dword ptr [eax], 0x16 */
    goto L_10055466; /* 0x10055451: jmp 0x10055466 */
L_10055466:
    RECOMP_CALL(sub_100A4670); /* 0x10055466: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005546B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005546B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100163C3; /* 0x1005546D: jmp 0x100163c3 */
L_1005547C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005547C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100554A3; /* 0x1005547D: je 0x100554a3 */
L_1005547F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x1005547F: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005548F; /* 0x10055482: je 0x1005548f */
L_10055484:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x10055484: sub eax, 6 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100162D4; /* 0x10055487: je 0x100162d4 */
L_1005548D:
    RECOMP_BACKEDGE();
    goto L_10055446; /* 0x1005548D: jmp 0x10055446 */
L_1005548F:
    /* test esi, esi */ /* 0x1005548F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001640C; /* 0x10055491: jne 0x1001640c */
L_10055497:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10055497: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFBFFFu);
    ebx = ebx & 0xFFFFBFFFu; /* 0x10055498: and ebx, 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x1005549E: jmp 0x10016376 */
L_100554A3:
    /* test esi, esi */ /* 0x100554A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001640C; /* 0x100554A5: jne 0x1001640c */
L_100554AB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100554AB: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((ebx | 0x4000u)); _flag_b = (uint32_t)((ebx | 0x4000u));
    ebx = ebx | 0x4000u; /* 0x100554AC: or ebx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x100554B2: jmp 0x10016376 */
L_100554B7:
    /* test LO8(ebx), LO8(ebx) */ /* 0x100554B7: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001640C; /* 0x100554B9: js 0x1001640c */
L_100554BF:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ebx = ebx & 0xFFFFFFFCu; /* 0x100554BF: and ebx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 0x80u)); _flag_b = (uint32_t)((ebx | 0x80u));
    ebx = ebx | 0x80u; /* 0x100554C2: or ebx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x100554C8: jmp 0x10016376 */
L_100554CD:
    RECOMP_CALL(sub_1001177D); /* 0x100554CD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x100554D2: mov dword ptr [eax], 0x18 */
    RECOMP_BACKEDGE();
    goto L_1005546B; /* 0x100554D8: jmp 0x1005546b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10016298(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10016298u);

L_10016298:
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x10016298: add byte ptr cs:[edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    POPAD(); /* 0x1001629C: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(edx)); /* 0x1001629D: add byte ptr [eax + eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x63002E90)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x63002E90) = (uint8_t)(MEM8(eax + 0x63002E90) + LO8(edx)); /* 0x100162A1: add byte ptr [eax + 0x63002e90], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100162A7: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100162AAu, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100162AB: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x347BF037))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x347BF037)) = (uint8_t)(MEM8(ebp + (-0x347BF037)) + LO8(eax)); /* 0x100162AD: add byte ptr [ebp - 0x347bf037], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100162B3; /* falls through past a gap */
L_100162AE:
    /* test ecx, ecx */ /* 0x100162AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016381; /* 0x100162B0: je 0x10016381 */
    goto L_100162B6; /* falls through past a gap */
L_100162B3:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100162B3: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x100162B5: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100162B7; /* falls through past a gap */
L_100162B6:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x100162B6: movsx eax, al */
    goto L_100162B9; /* falls through past a gap */
L_100162B7:
    esi = 0x20E883C0u; /* 0x100162B7: mov esi, 0x20e883c0 */
    goto L_100162BC; /* falls through past a gap */
L_100162B9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x100162B9: sub eax, 0x20 */
    _flag_k = FK_CMP;
L_100162BC:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10016376; /* 0x100162BC: je 0x10016376 */
L_100162C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x100162C2: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100554B7; /* 0x100162C5: je 0x100554b7 */
L_100162CB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x37u; /* 0x100162CB: sub eax, 0x37 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1005547C; /* 0x100162CE: jne 0x1005547c */
L_100162D4:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100162D4: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001640C; /* 0x100162D8: jne 0x1001640c */
L_100162DE:
    MEM32(ebp + 0xC) = 1; /* 0x100162DE: mov dword ptr [ebp + 0xc], 1 */
    goto L_10016376; /* 0x100162E5: jmp 0x10016376 */
L_10016376:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10016376: inc edx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(edx)); /* 0x10016377: mov al, byte ptr [edx] */
    /* test LO8(eax), LO8(eax) */ /* 0x10016379: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100162AE; /* 0x1001637B: jne 0x100162ae */
L_10016381:
    /* cmp MEM8(edx), 0x20u */ /* 0x10016381: cmp byte ptr [edx], 0x20 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016413; /* 0x10016384: je 0x10016413 */
L_1001638A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001638A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edx), LO8(eax) */ /* 0x1001638C: cmp byte ptr [edx], al */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001638E: sete al */
    /* test eax, eax */ /* 0x10016391: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055446; /* 0x10016393: je 0x10055446 */
L_10016399:
    RECOMP_CALL(sub_10015857); /* 0x10016399: call 0x10015857 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1001639E: mov esi, eax */
    MEM32(ebp + 0xC) = esi; /* 0x100163A0: mov dword ptr [ebp + 0xc], esi */
    /* test esi, esi */ /* 0x100163A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100554CD; /* 0x100163A5: je 0x100554cd */
L_100163AB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100163AB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = ebx; /* 0x100163AF: mov dword ptr [esi + 0xc], ebx */
    MEM32(esi + 0x10) = edi; /* 0x100163B2: mov dword ptr [esi + 0x10], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100163B5: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100163EC); /* 0x100163BC: call 0x100163ec */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100163C1: mov eax, esi */
L_100163C3:
    RECOMP_CALL(sub_1000EDC3); /* 0x100163C3: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100163C8: ret  */
L_1001640C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001640C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x1001640E: jmp 0x10016376 */
L_10016413:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10016413: inc edx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10016381; /* 0x10016414: jmp 0x10016381 */
L_10055446:
    RECOMP_CALL(sub_1001177D); /* 0x10055446: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005544B: mov dword ptr [eax], 0x16 */
    goto L_10055466; /* 0x10055451: jmp 0x10055466 */
L_10055466:
    RECOMP_CALL(sub_100A4670); /* 0x10055466: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005546B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005546B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100163C3; /* 0x1005546D: jmp 0x100163c3 */
L_1005547C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005547C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100554A3; /* 0x1005547D: je 0x100554a3 */
L_1005547F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x1005547F: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005548F; /* 0x10055482: je 0x1005548f */
L_10055484:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x10055484: sub eax, 6 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100162D4; /* 0x10055487: je 0x100162d4 */
L_1005548D:
    RECOMP_BACKEDGE();
    goto L_10055446; /* 0x1005548D: jmp 0x10055446 */
L_1005548F:
    /* test esi, esi */ /* 0x1005548F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001640C; /* 0x10055491: jne 0x1001640c */
L_10055497:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10055497: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFBFFFu);
    ebx = ebx & 0xFFFFBFFFu; /* 0x10055498: and ebx, 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x1005549E: jmp 0x10016376 */
L_100554A3:
    /* test esi, esi */ /* 0x100554A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001640C; /* 0x100554A5: jne 0x1001640c */
L_100554AB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100554AB: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((ebx | 0x4000u)); _flag_b = (uint32_t)((ebx | 0x4000u));
    ebx = ebx | 0x4000u; /* 0x100554AC: or ebx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x100554B2: jmp 0x10016376 */
L_100554B7:
    /* test LO8(ebx), LO8(ebx) */ /* 0x100554B7: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001640C; /* 0x100554B9: js 0x1001640c */
L_100554BF:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ebx = ebx & 0xFFFFFFFCu; /* 0x100554BF: and ebx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 0x80u)); _flag_b = (uint32_t)((ebx | 0x80u));
    ebx = ebx | 0x80u; /* 0x100554C2: or ebx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x100554C8: jmp 0x10016376 */
L_100554CD:
    RECOMP_CALL(sub_1001177D); /* 0x100554CD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x100554D2: mov dword ptr [eax], 0x18 */
    RECOMP_BACKEDGE();
    goto L_1005546B; /* 0x100554D8: jmp 0x1005546b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100162A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100162A4u);

L_100162A4:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100162A4: add byte ptr cs:[ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100162A8: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100162A9: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100162AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100162AE:
    /* test ecx, ecx */ /* 0x100162AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016381; /* 0x100162B0: je 0x10016381 */
L_100162B6:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x100162B6: movsx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x100162B9: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10016376; /* 0x100162BC: je 0x10016376 */
L_100162C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x100162C2: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100554B7; /* 0x100162C5: je 0x100554b7 */
L_100162CB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x37u; /* 0x100162CB: sub eax, 0x37 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1005547C; /* 0x100162CE: jne 0x1005547c */
L_100162D4:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100162D4: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001640C; /* 0x100162D8: jne 0x1001640c */
L_100162DE:
    MEM32(ebp + 0xC) = 1; /* 0x100162DE: mov dword ptr [ebp + 0xc], 1 */
    goto L_10016376; /* 0x100162E5: jmp 0x10016376 */
L_10016376:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10016376: inc edx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(edx)); /* 0x10016377: mov al, byte ptr [edx] */
    /* test LO8(eax), LO8(eax) */ /* 0x10016379: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100162AE; /* 0x1001637B: jne 0x100162ae */
L_10016381:
    /* cmp MEM8(edx), 0x20u */ /* 0x10016381: cmp byte ptr [edx], 0x20 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016413; /* 0x10016384: je 0x10016413 */
L_1001638A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001638A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edx), LO8(eax) */ /* 0x1001638C: cmp byte ptr [edx], al */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001638E: sete al */
    /* test eax, eax */ /* 0x10016391: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055446; /* 0x10016393: je 0x10055446 */
L_10016399:
    RECOMP_CALL(sub_10015857); /* 0x10016399: call 0x10015857 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1001639E: mov esi, eax */
    MEM32(ebp + 0xC) = esi; /* 0x100163A0: mov dword ptr [ebp + 0xc], esi */
    /* test esi, esi */ /* 0x100163A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100554CD; /* 0x100163A5: je 0x100554cd */
L_100163AB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100163AB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = ebx; /* 0x100163AF: mov dword ptr [esi + 0xc], ebx */
    MEM32(esi + 0x10) = edi; /* 0x100163B2: mov dword ptr [esi + 0x10], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100163B5: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100163EC); /* 0x100163BC: call 0x100163ec */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100163C1: mov eax, esi */
L_100163C3:
    RECOMP_CALL(sub_1000EDC3); /* 0x100163C3: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100163C8: ret  */
L_1001640C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001640C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x1001640E: jmp 0x10016376 */
L_10016413:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10016413: inc edx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10016381; /* 0x10016414: jmp 0x10016381 */
L_10055446:
    RECOMP_CALL(sub_1001177D); /* 0x10055446: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005544B: mov dword ptr [eax], 0x16 */
    goto L_10055466; /* 0x10055451: jmp 0x10055466 */
L_10055466:
    RECOMP_CALL(sub_100A4670); /* 0x10055466: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005546B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005546B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100163C3; /* 0x1005546D: jmp 0x100163c3 */
L_1005547C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005547C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100554A3; /* 0x1005547D: je 0x100554a3 */
L_1005547F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x1005547F: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005548F; /* 0x10055482: je 0x1005548f */
L_10055484:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x10055484: sub eax, 6 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100162D4; /* 0x10055487: je 0x100162d4 */
L_1005548D:
    RECOMP_BACKEDGE();
    goto L_10055446; /* 0x1005548D: jmp 0x10055446 */
L_1005548F:
    /* test esi, esi */ /* 0x1005548F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001640C; /* 0x10055491: jne 0x1001640c */
L_10055497:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10055497: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFBFFFu);
    ebx = ebx & 0xFFFFBFFFu; /* 0x10055498: and ebx, 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x1005549E: jmp 0x10016376 */
L_100554A3:
    /* test esi, esi */ /* 0x100554A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001640C; /* 0x100554A5: jne 0x1001640c */
L_100554AB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100554AB: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((ebx | 0x4000u)); _flag_b = (uint32_t)((ebx | 0x4000u));
    ebx = ebx | 0x4000u; /* 0x100554AC: or ebx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x100554B2: jmp 0x10016376 */
L_100554B7:
    /* test LO8(ebx), LO8(ebx) */ /* 0x100554B7: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001640C; /* 0x100554B9: js 0x1001640c */
L_100554BF:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ebx = ebx & 0xFFFFFFFCu; /* 0x100554BF: and ebx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 0x80u)); _flag_b = (uint32_t)((ebx | 0x80u));
    ebx = ebx | 0x80u; /* 0x100554C2: or ebx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x100554C8: jmp 0x10016376 */
L_100554CD:
    RECOMP_CALL(sub_1001177D); /* 0x100554CD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x100554D2: mov dword ptr [eax], 0x18 */
    RECOMP_BACKEDGE();
    goto L_1005546B; /* 0x100554D8: jmp 0x1005546b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100162EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100162EAu);

    goto L_100162EA;
L_100162AE:
    /* test ecx, ecx */ /* 0x100162AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016381; /* 0x100162B0: je 0x10016381 */
L_100162B6:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x100162B6: movsx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x100162B9: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10016376; /* 0x100162BC: je 0x10016376 */
L_100162C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x100162C2: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100554B7; /* 0x100162C5: je 0x100554b7 */
L_100162CB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x37u; /* 0x100162CB: sub eax, 0x37 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1005547C; /* 0x100162CE: jne 0x1005547c */
L_100162D4:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100162D4: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001640C; /* 0x100162D8: jne 0x1001640c */
L_100162DE:
    MEM32(ebp + 0xC) = 1; /* 0x100162DE: mov dword ptr [ebp + 0xc], 1 */
    goto L_10016376; /* 0x100162E5: jmp 0x10016376 */
L_100162EA:
    PUSH32(esp, 8); /* 0x100162EA: push 8 */
    PUSH32(esp, 0x100163D0u); /* 0x100162EC: push 0x100163d0 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100162F1: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100162F6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0xC); /* 0x100162F8: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x100162FB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100162FD: setne al */
    /* test eax, eax */ /* 0x10016300: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055446; /* 0x10016302: je 0x10055446 */
L_10016308:
    edi = MEM32(ebp + 0x8); /* 0x10016308: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x1001630B: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10055453; /* 0x1001630E: je 0x10055453 */
L_10016314:
    /* test edi, edi */ /* 0x10016314: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100163F4; /* 0x10016316: js 0x100163f4 */
L_1001631C:
    /* cmp edi, MEM32(0x100DFDD8) */ /* 0x1001631C: cmp edi, dword ptr [0x100dfdd8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x100DFDD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100163F4; /* 0x10016322: jae 0x100163f4 */
L_10016328:
    eax = edi; /* 0x10016328: mov eax, edi */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1001632A: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    ecx = edi; /* 0x1001632D: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1001632F: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10016332: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10016332: shl ecx, 6 */
    eax = MEM32(eax * 4 + 0x100DF640); /* 0x10016335: mov eax, dword ptr [eax*4 + 0x100df640] */
    eax = (int32_t)(int8_t)MEM8(eax + ecx + 0x4); /* 0x1001633C: movsx eax, byte ptr [eax + ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x10016341: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100163F4; /* 0x10016344: je 0x100163f4 */
L_1001634A:
    /* cmp MEM8(edx), 0x20u */ /* 0x1001634A: cmp byte ptr [edx], 0x20 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100163FE; /* 0x1001634D: je 0x100163fe */
L_10016353:
    SET_LO8(eax, MEM8(edx)); /* 0x10016353: mov al, byte ptr [edx] */
    /* cmp LO8(eax), 0x61u */ /* 0x10016355: cmp al, 0x61 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x61u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016404; /* 0x10016357: je 0x10016404 */
L_1001635D:
    /* cmp LO8(eax), 0x72u */ /* 0x1001635D: cmp al, 0x72 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x72u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10055472; /* 0x1001635F: jne 0x10055472 */
L_10016365:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10016365: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10016367: inc ebx */
    _flag_k = FK_INC;
L_10016368:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10016368: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1001636A: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1001636B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & esi; /* 0x1001636D: and dword ptr [ebp + 0xc], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | MEM32(0x100DF638))); _flag_b = (uint32_t)((ebx | MEM32(0x100DF638)));
    ebx = ebx | MEM32(0x100DF638); /* 0x10016370: or ebx, dword ptr [0x100df638] */
    _cf = 0;
    _flag_k = FK_TEST;
L_10016376:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10016376: inc edx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(edx)); /* 0x10016377: mov al, byte ptr [edx] */
    /* test LO8(eax), LO8(eax) */ /* 0x10016379: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100162AE; /* 0x1001637B: jne 0x100162ae */
L_10016381:
    /* cmp MEM8(edx), 0x20u */ /* 0x10016381: cmp byte ptr [edx], 0x20 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016413; /* 0x10016384: je 0x10016413 */
L_1001638A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001638A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edx), LO8(eax) */ /* 0x1001638C: cmp byte ptr [edx], al */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1001638E: sete al */
    /* test eax, eax */ /* 0x10016391: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10055446; /* 0x10016393: je 0x10055446 */
L_10016399:
    RECOMP_CALL(sub_10015857); /* 0x10016399: call 0x10015857 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1001639E: mov esi, eax */
    MEM32(ebp + 0xC) = esi; /* 0x100163A0: mov dword ptr [ebp + 0xc], esi */
    /* test esi, esi */ /* 0x100163A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100554CD; /* 0x100163A5: je 0x100554cd */
L_100163AB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100163AB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC) = ebx; /* 0x100163AF: mov dword ptr [esi + 0xc], ebx */
    MEM32(esi + 0x10) = edi; /* 0x100163B2: mov dword ptr [esi + 0x10], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100163B5: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100163EC); /* 0x100163BC: call 0x100163ec */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100163C1: mov eax, esi */
L_100163C3:
    RECOMP_CALL(sub_1000EDC3); /* 0x100163C3: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100163C8: ret  */
L_100163F4:
    RECOMP_CALL(sub_1001177D); /* 0x100163F4: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_10055460; /* 0x100163F9: jmp 0x10055460 */
L_100163FE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100163FE: inc edx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1001634A; /* 0x100163FF: jmp 0x1001634a */
L_10016404:
    PUSH32(esp, 2); /* 0x10016404: push 2 */
    ebx = POP32_VAL(esp); /* 0x10016406: pop ebx */
    RECOMP_BACKEDGE();
    goto L_10016368; /* 0x10016407: jmp 0x10016368 */
L_1001640C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1001640C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x1001640E: jmp 0x10016376 */
L_10016413:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10016413: inc edx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10016381; /* 0x10016414: jmp 0x10016381 */
L_10055446:
    RECOMP_CALL(sub_1001177D); /* 0x10055446: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005544B: mov dword ptr [eax], 0x16 */
    goto L_10055466; /* 0x10055451: jmp 0x10055466 */
L_10055453:
    RECOMP_CALL(sub_1001177D); /* 0x10055453: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x10055458: mov dword ptr [eax], 9 */
    goto L_1005546B; /* 0x1005545E: jmp 0x1005546b */
L_10055460:
    MEM32(eax) = 9; /* 0x10055460: mov dword ptr [eax], 9 */
L_10055466:
    RECOMP_CALL(sub_100A4670); /* 0x10055466: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_1005546B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005546B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100163C3; /* 0x1005546D: jmp 0x100163c3 */
L_10055472:
    /* cmp LO8(eax), 0x77u */ /* 0x10055472: cmp al, 0x77 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x77u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016404; /* 0x10055474: je 0x10016404 */
L_1005547A:
    RECOMP_BACKEDGE();
    goto L_10055446; /* 0x1005547A: jmp 0x10055446 */
L_1005547C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005547C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100554A3; /* 0x1005547D: je 0x100554a3 */
L_1005547F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xBu; /* 0x1005547F: sub eax, 0xb */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005548F; /* 0x10055482: je 0x1005548f */
L_10055484:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x10055484: sub eax, 6 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100162D4; /* 0x10055487: je 0x100162d4 */
L_1005548D:
    RECOMP_BACKEDGE();
    goto L_10055446; /* 0x1005548D: jmp 0x10055446 */
L_1005548F:
    /* test esi, esi */ /* 0x1005548F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001640C; /* 0x10055491: jne 0x1001640c */
L_10055497:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10055497: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFBFFFu);
    ebx = ebx & 0xFFFFBFFFu; /* 0x10055498: and ebx, 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x1005549E: jmp 0x10016376 */
L_100554A3:
    /* test esi, esi */ /* 0x100554A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001640C; /* 0x100554A5: jne 0x1001640c */
L_100554AB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100554AB: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((ebx | 0x4000u)); _flag_b = (uint32_t)((ebx | 0x4000u));
    ebx = ebx | 0x4000u; /* 0x100554AC: or ebx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x100554B2: jmp 0x10016376 */
L_100554B7:
    /* test LO8(ebx), LO8(ebx) */ /* 0x100554B7: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1001640C; /* 0x100554B9: js 0x1001640c */
L_100554BF:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ebx = ebx & 0xFFFFFFFCu; /* 0x100554BF: and ebx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | 0x80u)); _flag_b = (uint32_t)((ebx | 0x80u));
    ebx = ebx | 0x80u; /* 0x100554C2: or ebx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016376; /* 0x100554C8: jmp 0x10016376 */
L_100554CD:
    RECOMP_CALL(sub_1001177D); /* 0x100554CD: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x18u; /* 0x100554D2: mov dword ptr [eax], 0x18 */
    RECOMP_BACKEDGE();
    goto L_1005546B; /* 0x100554D8: jmp 0x1005546b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100163EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100163ECu);

L_100163EC:
    PUSH32(esp, esi); /* 0x100163EC: push esi */
    RECOMP_CALL(sub_10014B60); /* 0x100163ED: call 0x10014b60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100163F2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100163F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_10016C0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10016C0Fu);

    goto L_10016C0F;
L_10016419:
    eax = (int32_t)(int8_t)LO8(edx); /* 0x10016419: movsx eax, dl */
    /* cmp eax, 0x64u */ /* 0x1001641C: cmp eax, 0x64 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10020AFC; /* 0x1001641F: jle 0x10020afc */
L_10016425:
    /* cmp eax, 0x70u */ /* 0x10016425: cmp eax, 0x70 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1001BD25; /* 0x10016428: jle 0x1001bd25 */
L_1001642E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x73u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x73u; /* 0x1001642E: sub eax, 0x73 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10016DFB; /* 0x10016431: je 0x10016dfb */
L_10016437:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10016437: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10016438: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10016929; /* 0x10016439: jne 0x10016929 */
L_1001643F:
    MEM32(ebp + (-0x224)) = 0xAu; /* 0x1001643F: mov dword ptr [ebp - 0x224], 0xa */
L_10016449:
    /* test ebx, 0x8000u */ /* 0x10016449: test ebx, 0x8000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016856; /* 0x1001644F: jne 0x10016856 */
L_10016455:
    /* test ebx, 0x1000u */ /* 0x10016455: test ebx, 0x1000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016856; /* 0x1001645B: jne 0x10016856 */
L_10016461:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x10016461: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10016464: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x21C)) = edi; /* 0x10016466: mov dword ptr [ebp - 0x21c], edi */
    /* test LO8(ebx), 0x20u */ /* 0x1001646C: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001696B; /* 0x1001646F: jne 0x1001696b */
L_10016475:
    /* test LO8(ebx), 0x40u */ /* 0x10016475: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10020B10; /* 0x10016478: jne 0x10020b10 */
L_1001647E:
    ecx = MEM32(edi + (-0x4)); /* 0x1001647E: mov ecx, dword ptr [edi - 4] */
    edi = esi; /* 0x10016481: mov edi, esi */
L_10016483:
    /* test LO8(ebx), 0x40u */ /* 0x10016483: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10020B1D; /* 0x10016486: jne 0x10020b1d */
L_1001648C:
    /* test ebx, 0x9000u */ /* 0x1001648C: test ebx, 0x9000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x9000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016496; /* 0x10016492: jne 0x10016496 */
L_10016494:
    edi = esi; /* 0x10016494: mov edi, esi */
L_10016496:
    edx = MEM32(ebp + (-0x228)); /* 0x10016496: mov edx, dword ptr [ebp - 0x228] */
    /* test edx, edx */ /* 0x1001649C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10016999; /* 0x1001649E: jns 0x10016999 */
L_100164A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100164A4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100164A6: inc edx */
    _flag_k = FK_INC;
L_100164A7:
    eax = ecx; /* 0x100164A7: mov eax, ecx */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x100164A9: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100169B6; /* 0x100164AB: je 0x100169b6 */
L_100164B1:
    esi = ebp + (-0xD); /* 0x100164B1: lea esi, [ebp - 0xd] */
    goto L_10016E6D; /* 0x100164B4: jmp 0x10016e6d */
L_100164B9:
    eax = (int32_t)(int8_t)LO8(edx); /* 0x100164B9: movsx eax, dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x100164BC: sub eax, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10016501; /* 0x100164BF: je 0x10016501 */
L_100164C1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x100164C1: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100164F9; /* 0x100164C4: je 0x100164f9 */
L_100164C6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x100164C6: sub eax, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100164F4; /* 0x100164C9: je 0x100164f4 */
L_100164CB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100164CB: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100164CC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100164E6; /* 0x100164CD: je 0x100164e6 */
L_100164CF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x100164CF: sub eax, 3 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x210)); /* 0x100164D2: mov eax, dword ptr [ebp - 0x210] */
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_10016D8E; /* 0x100164D8: jne 0x10016d8e */
L_100164DE:
    _flag_a = (uint32_t)((ebx | 8)); _flag_b = (uint32_t)((ebx | 8));
    ebx = ebx | 8; /* 0x100164DE: or ebx, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10016E62; /* 0x100164E1: jmp 0x10016e62 */
L_100164E6:
    _flag_a = (uint32_t)((ebx | 4)); _flag_b = (uint32_t)((ebx | 4));
    ebx = ebx | 4; /* 0x100164E6: or ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100164E9:
    MEM32(ebp + (-0x218)) = ebx; /* 0x100164E9: mov dword ptr [ebp - 0x218], ebx */
    goto L_10016D88; /* 0x100164EF: jmp 0x10016d88 */
L_100164F4:
    _flag_a = (uint32_t)((ebx | 1)); _flag_b = (uint32_t)((ebx | 1));
    ebx = ebx | 1; /* 0x100164F4: or ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100164E9; /* 0x100164F7: jmp 0x100164e9 */
L_100164F9:
    _flag_a = (uint32_t)((ebx | 0x80u)); _flag_b = (uint32_t)((ebx | 0x80u));
    ebx = ebx | 0x80u; /* 0x100164F9: or ebx, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100164E9; /* 0x100164FF: jmp 0x100164e9 */
L_10016501:
    _flag_a = (uint32_t)((ebx | 2)); _flag_b = (uint32_t)((ebx | 2));
    ebx = ebx | 2; /* 0x10016501: or ebx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100164E9; /* 0x10016504: jmp 0x100164e9 */
L_10016506:
    /* cmp LO8(edx), 0x2Au */ /* 0x10016506: cmp dl, 0x2a */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001653A; /* 0x10016509: jne 0x1001653a */
L_1001650B:
    eax = MEM32(edi); /* 0x1001650B: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1001650D: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x21C)) = edi; /* 0x10016510: mov dword ptr [ebp - 0x21c], edi */
    MEM32(ebp + (-0x240)) = eax; /* 0x10016516: mov dword ptr [ebp - 0x240], eax */
    /* test eax, eax */ /* 0x1001651C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10016D88; /* 0x1001651E: jns 0x10016d88 */
L_10016524:
    _flag_a = (uint32_t)((ebx | 4)); _flag_b = (uint32_t)((ebx | 4));
    ebx = ebx | 4; /* 0x10016524: or ebx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10016527: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x218)) = ebx; /* 0x10016529: mov dword ptr [ebp - 0x218], ebx */
    MEM32(ebp + (-0x240)) = eax; /* 0x1001652F: mov dword ptr [ebp - 0x240], eax */
    goto L_10016D88; /* 0x10016535: jmp 0x10016d88 */
L_1001653A:
    ecx = (uint32_t)((int32_t)MEM32(ebp + (-0x240)) * (int32_t)0xAu); /* 0x1001653A: imul ecx, dword ptr [ebp - 0x240], 0xa */
    eax = (int32_t)(int8_t)LO8(edx); /* 0x10016541: movsx eax, dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFD0u; /* 0x10016544: add ecx, -0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x10016547: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x240)) = eax; /* 0x10016549: mov dword ptr [ebp - 0x240], eax */
    goto L_10016D82; /* 0x1001654F: jmp 0x10016d82 */
L_10016554:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x228)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x228)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x228)) = MEM32(ebp + (-0x228)) | 0xFFFFFFFFu; /* 0x10016554: or dword ptr [ebp - 0x228], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10016D8E; /* 0x1001655B: jmp 0x10016d8e */
L_10016560:
    ecx = (uint32_t)((int32_t)MEM32(ebp + (-0x228)) * (int32_t)0xAu); /* 0x10016560: imul ecx, dword ptr [ebp - 0x228], 0xa */
    eax = (int32_t)(int8_t)LO8(edx); /* 0x10016567: movsx eax, dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFD0u; /* 0x1001656A: add ecx, -0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1001656D: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x228)) = eax; /* 0x1001656F: mov dword ptr [ebp - 0x228], eax */
    goto L_10016D82; /* 0x10016575: jmp 0x10016d82 */
L_1001657A:
    _flag_a = (uint32_t)((ebx | 0x800u)); _flag_b = (uint32_t)((ebx | 0x800u));
    ebx = ebx | 0x800u; /* 0x1001657A: or ebx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10016E62; /* 0x10016580: jmp 0x10016e62 */
L_10016585:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10016585: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((ebx | 0x1000u)); _flag_b = (uint32_t)((ebx | 0x1000u));
    ebx = ebx | 0x1000u; /* 0x10016586: or ebx, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10016E62; /* 0x1001658C: jmp 0x10016e62 */
L_10016591:
    _flag_a = (uint32_t)((ebx | 0x20u)); _flag_b = (uint32_t)((ebx | 0x20u));
    ebx = ebx | 0x20u; /* 0x10016591: or ebx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100164E9; /* 0x10016594: jmp 0x100164e9 */
L_10016599:
    eax = MEM32(ebp + (-0x210)); /* 0x10016599: mov eax, dword ptr [ebp - 0x210] */
    SET_LO8(eax, MEM8(eax)); /* 0x1001659F: mov al, byte ptr [eax] */
    /* cmp LO8(eax), 0x36u */ /* 0x100165A1: cmp al, 0x36 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x36u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100165C1; /* 0x100165A3: jne 0x100165c1 */
L_100165A5:
    edi = MEM32(ebp + (-0x210)); /* 0x100165A5: mov edi, dword ptr [ebp - 0x210] */
    /* cmp MEM8(edi + 0x1), 0x34u */ /* 0x100165AB: cmp byte ptr [edi + 1], 0x34 */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0x34u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100165C1; /* 0x100165AF: jne 0x100165c1 */
L_100165B1:
    eax = edi; /* 0x100165B1: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100165B3: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ebx | 0x8000u)); _flag_b = (uint32_t)((ebx | 0x8000u));
    ebx = ebx | 0x8000u; /* 0x100165B6: or ebx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10016E62; /* 0x100165BC: jmp 0x10016e62 */
L_100165C1:
    /* cmp LO8(eax), 0x33u */ /* 0x100165C1: cmp al, 0x33 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x33u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100165E1; /* 0x100165C3: jne 0x100165e1 */
L_100165C5:
    edi = MEM32(ebp + (-0x210)); /* 0x100165C5: mov edi, dword ptr [ebp - 0x210] */
    /* cmp MEM8(edi + 0x1), 0x32u */ /* 0x100165CB: cmp byte ptr [edi + 1], 0x32 */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0x32u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100165E1; /* 0x100165CF: jne 0x100165e1 */
L_100165D1:
    eax = edi; /* 0x100165D1: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100165D3: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFF7FFFu);
    ebx = ebx & 0xFFFF7FFFu; /* 0x100165D6: and ebx, 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10016E62; /* 0x100165DC: jmp 0x10016e62 */
L_100165E1:
    /* cmp LO8(eax), 0x64u */ /* 0x100165E1: cmp al, 0x64 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x64u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016D88; /* 0x100165E3: je 0x10016d88 */
L_100165E9:
    /* cmp LO8(eax), 0x69u */ /* 0x100165E9: cmp al, 0x69 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x69u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016D88; /* 0x100165EB: je 0x10016d88 */
L_100165F1:
    /* cmp LO8(eax), 0x6Fu */ /* 0x100165F1: cmp al, 0x6f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016D88; /* 0x100165F3: je 0x10016d88 */
L_100165F9:
    /* cmp LO8(eax), 0x75u */ /* 0x100165F9: cmp al, 0x75 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x75u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016D88; /* 0x100165FB: je 0x10016d88 */
L_10016601:
    /* cmp LO8(eax), 0x78u */ /* 0x10016601: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016D88; /* 0x10016603: je 0x10016d88 */
L_10016609:
    /* cmp LO8(eax), 0x58u */ /* 0x10016609: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016D88; /* 0x1001660B: je 0x10016d88 */
L_10016611:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10016611: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x244)) = eax; /* 0x10016613: mov dword ptr [ebp - 0x244], eax */
    goto L_10016D47; /* 0x10016619: jmp 0x10016d47 */
L_1001661E:
    eax = ebp + (-0x220); /* 0x1001661E: lea eax, [ebp - 0x220] */
    PUSH32(esp, eax); /* 0x10016624: push eax */
    PUSH32(esp, MEM32(ebp + (-0x230))); /* 0x10016625: push dword ptr [ebp - 0x230] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x1001662B: push dword ptr [ebp - 0x248] */
    RECOMP_CALL(sub_100134DD); /* 0x10016631: call 0x100134dd */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x210)); /* 0x10016636: mov ecx, dword ptr [ebp - 0x210] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1001663C: add esp, 0xc */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ecx)); /* 0x1001663F: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10016641: inc ecx */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x248)) = (uint8_t)(LO8(eax)); /* 0x10016642: mov byte ptr [ebp - 0x248], al */
    MEM32(ebp + (-0x210)) = ecx; /* 0x10016648: mov dword ptr [ebp - 0x210], ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x1001664E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016D67; /* 0x10016650: jne 0x10016d67 */
L_10016656:
    goto L_10020C3B; /* 0x10016656: jmp 0x10020c3b */
L_1001665B:
    /* cmp eax, 0x53u */ /* 0x1001665B: cmp eax, 0x53 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x53u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10016712; /* 0x1001665E: jg 0x10016712 */
L_10016664:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100166BC; /* 0x10016664: je 0x100166bc */
L_10016666:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x41u; /* 0x10016666: sub eax, 0x41 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1001667B; /* 0x10016669: je 0x1001667b */
L_1001666B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001666B: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001666C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100166A2; /* 0x1001666D: je 0x100166a2 */
L_1001666F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001666F: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10016670: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1001667B; /* 0x10016671: je 0x1001667b */
L_10016673:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10016673: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10016674: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10016B40; /* 0x10016675: jne 0x10016b40 */
L_1001667B:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x20u); /* 0x1001667B: add dl, 0x20 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM32(ebp + (-0x25C)) = 1; /* 0x1001667E: mov dword ptr [ebp - 0x25c], 1 */
    MEM8(ebp + (-0x211)) = (uint8_t)(LO8(edx)); /* 0x10016688: mov byte ptr [ebp - 0x211], dl */
    goto L_1001BD3E; /* 0x1001668E: jmp 0x1001bd3e */
L_10016693:
    MEM32(ebp + (-0x228)) = 6; /* 0x10016693: mov dword ptr [ebp - 0x228], 6 */
    goto L_1001BD7F; /* 0x1001669D: jmp 0x1001bd7f */
L_100166A2:
    /* test ebx, 0x830u */ /* 0x100166A2: test ebx, 0x830 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x830u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016730; /* 0x100166A8: jne 0x10016730 */
L_100166AE:
    _flag_a = (uint32_t)((ebx | 0x800u)); _flag_b = (uint32_t)((ebx | 0x800u));
    ebx = ebx | 0x800u; /* 0x100166AE: or ebx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x218)) = ebx; /* 0x100166B4: mov dword ptr [ebp - 0x218], ebx */
    goto L_10016730; /* 0x100166BA: jmp 0x10016730 */
L_100166BC:
    /* test ebx, 0x830u */ /* 0x100166BC: test ebx, 0x830 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x830u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016DFB; /* 0x100166C2: jne 0x10016dfb */
L_100166C8:
    _flag_a = (uint32_t)((ebx | 0x800u)); _flag_b = (uint32_t)((ebx | 0x800u));
    ebx = ebx | 0x800u; /* 0x100166C8: or ebx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x218)) = ebx; /* 0x100166CE: mov dword ptr [ebp - 0x218], ebx */
    goto L_10016DFB; /* 0x100166D4: jmp 0x10016dfb */
L_100166D9:
    eax = edx; /* 0x100166D9: mov eax, edx */
    goto L_10016E0F; /* 0x100166DB: jmp 0x10016e0f */
L_100166E0:
    /* test esi, esi */ /* 0x100166E0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100166EA; /* 0x100166E2: jne 0x100166ea */
L_100166E4:
    esi = MEM32(0x100E1760); /* 0x100166E4: mov esi, dword ptr [0x100e1760] */
L_100166EA:
    MEM32(ebp + (-0x238)) = 1; /* 0x100166EA: mov dword ptr [ebp - 0x238], 1 */
    ecx = esi; /* 0x100166F4: mov ecx, esi */
    /* test eax, eax */ /* 0x100166F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016709; /* 0x100166F8: je 0x10016709 */
L_100166FA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100166FA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100166FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100166FC: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM16(ecx), LO16(edx) */ /* 0x100166FD: cmp word ptr [ecx], dx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016709; /* 0x10016700: je 0x10016709 */
L_10016702:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10016702: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10016705: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100166FC; /* 0x10016707: jne 0x100166fc */
L_10016709:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x10016709: sub ecx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1001670B: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    goto L_10016B3A; /* 0x1001670D: jmp 0x10016b3a */
L_10016712:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x58u; /* 0x10016712: sub eax, 0x58 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10016925; /* 0x10016715: je 0x10016925 */
L_1001671B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001671B: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1001671C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1001678F; /* 0x1001671D: je 0x1001678f */
L_1001671F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x1001671F: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1001BD3E; /* 0x10016722: je 0x1001bd3e */
L_10016728:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10016728: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10016729: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10016B40; /* 0x1001672A: jne 0x10016b40 */
L_10016730:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x10016730: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x21C)) = edi; /* 0x10016733: mov dword ptr [ebp - 0x21c], edi */
    /* test ebx, 0x810u */ /* 0x10016739: test ebx, 0x810 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x810u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016771; /* 0x1001673F: je 0x10016771 */
L_10016741:
    eax = (uint32_t)MEM16(edi + (-0x4)); /* 0x10016741: movzx eax, word ptr [edi - 4] */
    PUSH32(esp, eax); /* 0x10016745: push eax */
    PUSH32(esp, 0x200u); /* 0x10016746: push 0x200 */
    eax = ebp + (-0x20C); /* 0x1001674B: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x10016751: push eax */
    eax = ebp + (-0x224); /* 0x10016752: lea eax, [ebp - 0x224] */
    PUSH32(esp, eax); /* 0x10016758: push eax */
    RECOMP_CALL(sub_10020636); /* 0x10016759: call 0x10020636 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1001675E: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10016761: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016784; /* 0x10016763: je 0x10016784 */
L_10016765:
    MEM32(ebp + (-0x24C)) = 1; /* 0x10016765: mov dword ptr [ebp - 0x24c], 1 */
    goto L_10016784; /* 0x1001676F: jmp 0x10016784 */
L_10016771:
    SET_LO8(eax, MEM8(edi + (-0x4))); /* 0x10016771: mov al, byte ptr [edi - 4] */
    MEM8(ebp + (-0x20C)) = (uint8_t)(LO8(eax)); /* 0x10016774: mov byte ptr [ebp - 0x20c], al */
    MEM32(ebp + (-0x224)) = 1; /* 0x1001677A: mov dword ptr [ebp - 0x224], 1 */
L_10016784:
    esi = ebp + (-0x20C); /* 0x10016784: lea esi, [ebp - 0x20c] */
    goto L_10016B40; /* 0x1001678A: jmp 0x10016b40 */
L_1001678F:
    eax = MEM32(edi); /* 0x1001678F: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x10016791: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x21C)) = edi; /* 0x10016794: mov dword ptr [ebp - 0x21c], edi */
    /* test eax, eax */ /* 0x1001679A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100167D7; /* 0x1001679C: je 0x100167d7 */
L_1001679E:
    esi = MEM32(eax + 0x4); /* 0x1001679E: mov esi, dword ptr [eax + 4] */
    /* test esi, esi */ /* 0x100167A1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100167D7; /* 0x100167A3: je 0x100167d7 */
L_100167A5:
    eax = (int32_t)(int16_t)MEM16(eax); /* 0x100167A5: movsx eax, word ptr [eax] */
    /* test ebx, 0x800u */ /* 0x100167A8: test ebx, 0x800 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100167CA; /* 0x100167AE: je 0x100167ca */
L_100167B0:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100167B0: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x100167B1: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x238)) = 1; /* 0x100167B3: mov dword ptr [ebp - 0x238], 1 */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x100167BD: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(ebp + (-0x224)) = eax; /* 0x100167BF: mov dword ptr [ebp - 0x224], eax */
    goto L_10016B40; /* 0x100167C5: jmp 0x10016b40 */
L_100167CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100167CA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x238)) = ecx; /* 0x100167CC: mov dword ptr [ebp - 0x238], ecx */
    goto L_1001BDF1; /* 0x100167D2: jmp 0x1001bdf1 */
L_100167D7:
    esi = MEM32(0x100E175C); /* 0x100167D7: mov esi, dword ptr [0x100e175c] */
    goto L_1001BDEA; /* 0x100167DD: jmp 0x1001bdea */
L_100167E2:
    /* cmp eax, 0x69u */ /* 0x100167E2: cmp eax, 0x69 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x69u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10020B02; /* 0x100167E5: je 0x10020b02 */
L_100167EB:
    /* cmp eax, 0x6Eu */ /* 0x100167EB: cmp eax, 0x6e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001681C; /* 0x100167EE: je 0x1001681c */
L_100167F0:
    /* cmp eax, 0x6Fu */ /* 0x100167F0: cmp eax, 0x6f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10016B40; /* 0x100167F3: jne 0x10016b40 */
L_100167F9:
    MEM32(ebp + (-0x224)) = 8; /* 0x100167F9: mov dword ptr [ebp - 0x224], 8 */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10016803: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10016449; /* 0x10016805: jns 0x10016449 */
L_1001680B:
    _flag_a = (uint32_t)((ebx | 0x200u)); _flag_b = (uint32_t)((ebx | 0x200u));
    ebx = ebx | 0x200u; /* 0x1001680B: or ebx, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x218)) = ebx; /* 0x10016811: mov dword ptr [ebp - 0x218], ebx */
    RECOMP_BACKEDGE();
    goto L_10016449; /* 0x10016817: jmp 0x10016449 */
L_1001681C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1001681C: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x21C)) = edi; /* 0x1001681F: mov dword ptr [ebp - 0x21c], edi */
    edi = MEM32(edi + (-0x4)); /* 0x10016825: mov edi, dword ptr [edi - 4] */
    RECOMP_CALL(sub_10082F41); /* 0x10016828: call 0x10082f41 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1001682D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10020C3B; /* 0x1001682F: je 0x10020c3b */
L_10016835:
    eax = MEM32(ebp + (-0x220)); /* 0x10016835: mov eax, dword ptr [ebp - 0x220] */
    /* test LO8(ebx), 0x20u */ /* 0x1001683B: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016845; /* 0x1001683E: je 0x10016845 */
L_10016840:
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x10016840: mov word ptr [edi], ax */
    goto L_10016847; /* 0x10016843: jmp 0x10016847 */
L_10016845:
    MEM32(edi) = eax; /* 0x10016845: mov dword ptr [edi], eax */
L_10016847:
    MEM32(ebp + (-0x24C)) = 1; /* 0x10016847: mov dword ptr [ebp - 0x24c], 1 */
    goto L_10020C30; /* 0x10016851: jmp 0x10020c30 */
L_10016856:
    ecx = MEM32(edi); /* 0x10016856: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x10016858: add edi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x21C)) = edi; /* 0x1001685B: mov dword ptr [ebp - 0x21c], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10016861: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(edi + (-0x4)); /* 0x10016863: mov edi, dword ptr [edi - 4] */
    RECOMP_BACKEDGE();
    goto L_10016483; /* 0x10016866: jmp 0x10016483 */
L_1001686B:
    /* cmp LO8(edx), 0x67u */ /* 0x1001686B: cmp dl, 0x67 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x67u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001BD7F; /* 0x1001686E: jne 0x1001bd7f */
L_10016874:
    MEM32(ebp + (-0x228)) = 1; /* 0x10016874: mov dword ptr [ebp - 0x228], 1 */
    goto L_1001BD7F; /* 0x1001687E: jmp 0x1001bd7f */
L_10016883:
    eax = ecx; /* 0x10016883: mov eax, ecx */
    MEM32(ebp + (-0x228)) = eax; /* 0x10016885: mov dword ptr [ebp - 0x228], eax */
    goto L_1001BD74; /* 0x1001688B: jmp 0x1001bd74 */
L_10016890:
    edi = eax + 0x15D; /* 0x10016890: lea edi, [eax + 0x15d] */
    PUSH32(esp, edi); /* 0x10016896: push edi */
    RECOMP_CALL(sub_10012226); /* 0x10016897: call 0x10012226 */
    RECOMP_FLAGS_IN();
    SET_LO8(edx, MEM8(ebp + (-0x211))); /* 0x1001689C: mov dl, byte ptr [ebp - 0x211] */
    MEM32(ebp + (-0x250)) = eax; /* 0x100168A2: mov dword ptr [ebp - 0x250], eax */
    ecx = POP32_VAL(esp); /* 0x100168A8: pop ecx */
    /* test eax, eax */ /* 0x100168A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100168B7; /* 0x100168AB: je 0x100168b7 */
L_100168AD:
    esi = eax; /* 0x100168AD: mov esi, eax */
    MEM32(ebp + (-0x23C)) = edi; /* 0x100168AF: mov dword ptr [ebp - 0x23c], edi */
    goto L_100168C1; /* 0x100168B5: jmp 0x100168c1 */
L_100168B7:
    MEM32(ebp + (-0x228)) = 0xA3u; /* 0x100168B7: mov dword ptr [ebp - 0x228], 0xa3 */
L_100168C1:
    edi = MEM32(ebp + (-0x21C)); /* 0x100168C1: mov edi, dword ptr [ebp - 0x21c] */
    goto L_1001BD7F; /* 0x100168C7: jmp 0x1001bd7f */
L_100168CC:
    /* cmp MEM32(ebp + (-0x228)), 0 */ /* 0x100168CC: cmp dword ptr [ebp - 0x228], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x228))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001BDD4; /* 0x100168D3: jne 0x1001bdd4 */
L_100168D9:
    eax = ebp + (-0x270); /* 0x100168D9: lea eax, [ebp - 0x270] */
    PUSH32(esp, eax); /* 0x100168DF: push eax */
    PUSH32(esp, esi); /* 0x100168E0: push esi */
    RECOMP_CALL(sub_100AA9D4); /* 0x100168E1: call 0x100aa9d4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100168E6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100168E7: pop ecx */
    goto L_1001BDD4; /* 0x100168E8: jmp 0x1001bdd4 */
L_100168ED:
    /* test edi, edi */ /* 0x100168ED: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001BDE1; /* 0x100168EF: jne 0x1001bde1 */
L_100168F5:
    eax = ebp + (-0x270); /* 0x100168F5: lea eax, [ebp - 0x270] */
    PUSH32(esp, eax); /* 0x100168FB: push eax */
    PUSH32(esp, esi); /* 0x100168FC: push esi */
    RECOMP_CALL(sub_100AA954); /* 0x100168FD: call 0x100aa954 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10016902: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10016903: pop ecx */
    goto L_1001BDE1; /* 0x10016904: jmp 0x1001bde1 */
L_10016909:
    _flag_a = (uint32_t)((ebx | 0x100u)); _flag_b = (uint32_t)((ebx | 0x100u));
    ebx = ebx | 0x100u; /* 0x10016909: or ebx, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1001690F: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x218)) = ebx; /* 0x10016910: mov dword ptr [ebp - 0x218], ebx */
    goto L_1001BDEA; /* 0x10016916: jmp 0x1001bdea */
L_1001691B:
    MEM32(ebp + (-0x228)) = 8; /* 0x1001691B: mov dword ptr [ebp - 0x228], 8 */
L_10016925:
    PUSH32(esp, 7); /* 0x10016925: push 7 */
    goto L_10016934; /* 0x10016927: jmp 0x10016934 */
L_10016929:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x10016929: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_10016B40; /* 0x1001692C: jne 0x10016b40 */
L_10016932:
    PUSH32(esp, 0x27u); /* 0x10016932: push 0x27 */
L_10016934:
    MEM32(ebp + (-0x224)) = 0x10u; /* 0x10016934: mov dword ptr [ebp - 0x224], 0x10 */
    eax = POP32_VAL(esp); /* 0x1001693E: pop eax */
    MEM32(ebp + (-0x254)) = eax; /* 0x1001693F: mov dword ptr [ebp - 0x254], eax */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10016945: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10016449; /* 0x10016947: jns 0x10016449 */
L_1001694D:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x51u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x51u); /* 0x1001694D: add al, 0x51 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebp + (-0x22C)) = (uint8_t)(0x30u); /* 0x1001694F: mov byte ptr [ebp - 0x22c], 0x30 */
    MEM8(ebp + (-0x22B)) = (uint8_t)(LO8(eax)); /* 0x10016956: mov byte ptr [ebp - 0x22b], al */
    MEM32(ebp + (-0x234)) = 2; /* 0x1001695C: mov dword ptr [ebp - 0x234], 2 */
    RECOMP_BACKEDGE();
    goto L_10016449; /* 0x10016966: jmp 0x10016449 */
L_1001696B:
    /* test LO8(ebx), 0x40u */ /* 0x1001696B: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016979; /* 0x1001696E: je 0x10016979 */
L_10016970:
    eax = (int32_t)(int16_t)MEM16(edi + (-0x4)); /* 0x10016970: movsx eax, word ptr [edi - 4] */
    goto L_10020B13; /* 0x10016974: jmp 0x10020b13 */
L_10016979:
    eax = (uint32_t)MEM16(edi + (-0x4)); /* 0x10016979: movzx eax, word ptr [edi - 4] */
    goto L_10020B13; /* 0x1001697D: jmp 0x10020b13 */
L_10016982:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10016982: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _aa = edi, _ab = esi, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10016984: adc edi, esi */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x10016986: neg edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ebx | 0x100u)); _flag_b = (uint32_t)((ebx | 0x100u));
    ebx = ebx | 0x100u; /* 0x10016988: or ebx, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x218)) = ebx; /* 0x1001698E: mov dword ptr [ebp - 0x218], ebx */
    RECOMP_BACKEDGE();
    goto L_1001648C; /* 0x10016994: jmp 0x1001648c */
L_10016999:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFF7u);
    ebx = ebx & 0xFFFFFFF7u; /* 0x10016999: and ebx, 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x200u; /* 0x1001699C: mov eax, 0x200 */
    MEM32(ebp + (-0x218)) = ebx; /* 0x100169A1: mov dword ptr [ebp - 0x218], ebx */
    /* cmp edx, eax */ /* 0x100169A7: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_100164A7; /* 0x100169A9: jle 0x100164a7 */
L_100169AF:
    edx = eax; /* 0x100169AF: mov edx, eax */
    RECOMP_BACKEDGE();
    goto L_100164A7; /* 0x100169B1: jmp 0x100164a7 */
L_100169B6:
    MEM32(ebp + (-0x234)) = esi; /* 0x100169B6: mov dword ptr [ebp - 0x234], esi */
    RECOMP_BACKEDGE();
    goto L_100164B1; /* 0x100169BC: jmp 0x100164b1 */
L_100169C1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x254)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x254)); /* 0x100169C1: add ecx, dword ptr [ebp - 0x254] */
    _flag_k = FK_ADD;
    goto L_10016EAA; /* 0x100169C7: jmp 0x10016eaa */
L_100169CC:
    /* test eax, eax */ /* 0x100169CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100169D9; /* 0x100169CE: je 0x100169d9 */
L_100169D0:
    /* cmp MEM8(esi), 0x30u */ /* 0x100169D0: cmp byte ptr [esi], 0x30 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016B40; /* 0x100169D3: je 0x10016b40 */
L_100169D9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100169D9: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x224))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x224)) = MEM32(ebp + (-0x224)) + 1; /* 0x100169DA: inc dword ptr [ebp - 0x224] */
    _flag_k = FK_INC;
    MEM8(esi) = (uint8_t)(0x30u); /* 0x100169E0: mov byte ptr [esi], 0x30 */
    goto L_10016B40; /* 0x100169E3: jmp 0x10016b40 */
L_100169E8:
    esi = MEM32(0x100E175C); /* 0x100169E8: mov esi, dword ptr [0x100e175c] */
    goto L_10016E2E; /* 0x100169EE: jmp 0x10016e2e */
L_100169F3:
    MEM8(ebp + (-0x22C)) = (uint8_t)(0x2Du); /* 0x100169F3: mov byte ptr [ebp - 0x22c], 0x2d */
    goto L_10016A0C; /* 0x100169FA: jmp 0x10016a0c */
L_100169FC:
    MEM8(ebp + (-0x22C)) = (uint8_t)(0x2Bu); /* 0x100169FC: mov byte ptr [ebp - 0x22c], 0x2b */
    goto L_10016A0C; /* 0x10016A03: jmp 0x10016a0c */
L_10016A05:
    MEM8(ebp + (-0x22C)) = (uint8_t)(0x20u); /* 0x10016A05: mov byte ptr [ebp - 0x22c], 0x20 */
L_10016A0C:
    MEM32(ebp + (-0x234)) = 1; /* 0x10016A0C: mov dword ptr [ebp - 0x234], 1 */
    goto L_10016B56; /* 0x10016A16: jmp 0x10016b56 */
L_10016A1B:
    /* test LO8(ebx), 4 */ /* 0x10016A1B: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016BB9; /* 0x10016A1E: jne 0x10016bb9 */
L_10016A24:
    eax = ebp + (-0x220); /* 0x10016A24: lea eax, [ebp - 0x220] */
    PUSH32(esp, eax); /* 0x10016A2A: push eax */
    PUSH32(esp, MEM32(ebp + (-0x230))); /* 0x10016A2B: push dword ptr [ebp - 0x230] */
    PUSH32(esp, edi); /* 0x10016A31: push edi */
    PUSH32(esp, 0x30u); /* 0x10016A32: push 0x30 */
    RECOMP_CALL(sub_100134CB); /* 0x10016A34: call 0x100134cb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10016A39: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_10016BB9; /* 0x10016A3C: jmp 0x10016bb9 */
L_10016A41:
    /* test eax, eax */ /* 0x10016A41: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10016BCC; /* 0x10016A43: jle 0x10016bcc */
L_10016A49:
    ecx = esi; /* 0x10016A49: mov ecx, esi */
L_10016A4B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10016A4B: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x23C)) = eax; /* 0x10016A4C: mov dword ptr [ebp - 0x23c], eax */
    eax = (uint32_t)MEM16(ecx); /* 0x10016A52: movzx eax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x10016A55: add ecx, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10016A58: push eax */
    PUSH32(esp, 6); /* 0x10016A59: push 6 */
    eax = ebp + (-0xC); /* 0x10016A5B: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0x27C)) = ecx; /* 0x10016A5E: mov dword ptr [ebp - 0x27c], ecx */
    PUSH32(esp, eax); /* 0x10016A64: push eax */
    eax = ebp + (-0x260); /* 0x10016A65: lea eax, [ebp - 0x260] */
    PUSH32(esp, eax); /* 0x10016A6B: push eax */
    RECOMP_CALL(sub_10020636); /* 0x10016A6C: call 0x10020636 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10016A71: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10016A74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016ABB; /* 0x10016A76: jne 0x10016abb */
L_10016A78:
    /* cmp MEM32(ebp + (-0x260)), eax */ /* 0x10016A78: cmp dword ptr [ebp - 0x260], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x260))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016ABB; /* 0x10016A7E: je 0x10016abb */
L_10016A80:
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x10016A80: push dword ptr [ebp - 0x258] */
    eax = ebp + (-0x220); /* 0x10016A86: lea eax, [ebp - 0x220] */
    PUSH32(esp, eax); /* 0x10016A8C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x230))); /* 0x10016A8D: push dword ptr [ebp - 0x230] */
    eax = ebp + (-0xC); /* 0x10016A93: lea eax, [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x260))); /* 0x10016A96: push dword ptr [ebp - 0x260] */
    PUSH32(esp, eax); /* 0x10016A9C: push eax */
    RECOMP_CALL(sub_10013514); /* 0x10016A9D: call 0x10013514 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x23C)); /* 0x10016AA2: mov eax, dword ptr [ebp - 0x23c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10016AA8: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x27C)); /* 0x10016AAB: mov ecx, dword ptr [ebp - 0x27c] */
    /* test eax, eax */ /* 0x10016AB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016BE9; /* 0x10016AB3: je 0x10016be9 */
L_10016AB9:
    RECOMP_BACKEDGE();
    goto L_10016A4B; /* 0x10016AB9: jmp 0x10016a4b */
L_10016ABB:
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10016ABB: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x220)) = ecx; /* 0x10016ABE: mov dword ptr [ebp - 0x220], ecx */
    goto L_10016BEF; /* 0x10016AC4: jmp 0x10016bef */
L_10016AC9:
    eax = ebp + (-0x220); /* 0x10016AC9: lea eax, [ebp - 0x220] */
    PUSH32(esp, eax); /* 0x10016ACF: push eax */
    PUSH32(esp, MEM32(ebp + (-0x230))); /* 0x10016AD0: push dword ptr [ebp - 0x230] */
    PUSH32(esp, edi); /* 0x10016AD6: push edi */
    PUSH32(esp, 0x20u); /* 0x10016AD7: push 0x20 */
    RECOMP_CALL(sub_100134CB); /* 0x10016AD9: call 0x100134cb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10016ADE: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_10020C30; /* 0x10016AE1: jmp 0x10020c30 */
L_10016AE6:
    PUSH32(esp, eax); /* 0x10016AE6: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10016AE7: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10016AEC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10016AEE: pop ecx */
    MEM32(ebp + (-0x250)) = eax; /* 0x10016AEF: mov dword ptr [ebp - 0x250], eax */
    goto L_10016D82; /* 0x10016AF5: jmp 0x10016d82 */
L_10016AFA:
    MEM32(eax) = 0x16u; /* 0x10016AFA: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10016B00: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10016B05: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10016DA6; /* 0x10016B08: jmp 0x10016da6 */
L_10016B2D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10016B2D: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM8(ecx), 0 */ /* 0x10016B2E: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016B38; /* 0x10016B31: je 0x10016b38 */
L_10016B33:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10016B33: inc ecx */
    _flag_k = FK_INC;
L_10016B34:
    /* test eax, eax */ /* 0x10016B34: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016B2D; /* 0x10016B36: jne 0x10016b2d */
L_10016B38:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x10016B38: sub ecx, esi */
    _flag_k = FK_CMP;
L_10016B3A:
    MEM32(ebp + (-0x224)) = ecx; /* 0x10016B3A: mov dword ptr [ebp - 0x224], ecx */
L_10016B40:
    /* cmp MEM32(ebp + (-0x24C)), 0 */ /* 0x10016B40: cmp dword ptr [ebp - 0x24c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10020C30; /* 0x10016B47: jne 0x10020c30 */
L_10016B4D:
    /* test LO8(ebx), 0x40u */ /* 0x10016B4D: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001905E; /* 0x10016B50: jne 0x1001905e */
L_10016B56:
    edi = MEM32(ebp + (-0x240)); /* 0x10016B56: mov edi, dword ptr [ebp - 0x240] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x224)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x224)); /* 0x10016B5C: sub edi, dword ptr [ebp - 0x224] */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x234)); /* 0x10016B62: mov eax, dword ptr [ebp - 0x234] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x10016B68: sub edi, eax */
    _flag_k = FK_CMP;
    /* test LO8(ebx), 0xCu */ /* 0x10016B6A: test bl, 0xc */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0xCu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016B8D; /* 0x10016B6D: jne 0x10016b8d */
L_10016B6F:
    eax = ebp + (-0x220); /* 0x10016B6F: lea eax, [ebp - 0x220] */
    PUSH32(esp, eax); /* 0x10016B75: push eax */
    PUSH32(esp, MEM32(ebp + (-0x230))); /* 0x10016B76: push dword ptr [ebp - 0x230] */
    PUSH32(esp, edi); /* 0x10016B7C: push edi */
    PUSH32(esp, 0x20u); /* 0x10016B7D: push 0x20 */
    RECOMP_CALL(sub_100134CB); /* 0x10016B7F: call 0x100134cb */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x234)); /* 0x10016B84: mov eax, dword ptr [ebp - 0x234] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10016B8A: add esp, 0x10 */
    _flag_k = FK_ADD;
L_10016B8D:
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x10016B8D: push dword ptr [ebp - 0x258] */
    ecx = ebp + (-0x220); /* 0x10016B93: lea ecx, [ebp - 0x220] */
    PUSH32(esp, ecx); /* 0x10016B99: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x230))); /* 0x10016B9A: push dword ptr [ebp - 0x230] */
    PUSH32(esp, eax); /* 0x10016BA0: push eax */
    eax = ebp + (-0x22C); /* 0x10016BA1: lea eax, [ebp - 0x22c] */
    PUSH32(esp, eax); /* 0x10016BA7: push eax */
    RECOMP_CALL(sub_10013514); /* 0x10016BA8: call 0x10013514 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10016BAD: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), 8 */ /* 0x10016BB0: test bl, 8 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016A1B; /* 0x10016BB3: jne 0x10016a1b */
L_10016BB9:
    /* cmp MEM32(ebp + (-0x238)), 0 */ /* 0x10016BB9: cmp dword ptr [ebp - 0x238], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x238))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x224)); /* 0x10016BC0: mov eax, dword ptr [ebp - 0x224] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10016A41; /* 0x10016BC6: jne 0x10016a41 */
L_10016BCC:
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x10016BCC: push dword ptr [ebp - 0x258] */
    ecx = ebp + (-0x220); /* 0x10016BD2: lea ecx, [ebp - 0x220] */
    PUSH32(esp, ecx); /* 0x10016BD8: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x230))); /* 0x10016BD9: push dword ptr [ebp - 0x230] */
    PUSH32(esp, eax); /* 0x10016BDF: push eax */
    PUSH32(esp, esi); /* 0x10016BE0: push esi */
    RECOMP_CALL(sub_10013514); /* 0x10016BE1: call 0x10013514 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10016BE6: add esp, 0x14 */
    _flag_k = FK_ADD;
L_10016BE9:
    ecx = MEM32(ebp + (-0x220)); /* 0x10016BE9: mov ecx, dword ptr [ebp - 0x220] */
L_10016BEF:
    /* test ecx, ecx */ /* 0x10016BEF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10016BFC; /* 0x10016BF1: js 0x10016bfc */
L_10016BF3:
    /* test LO8(ebx), 4 */ /* 0x10016BF3: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016AC9; /* 0x10016BF6: jne 0x10016ac9 */
L_10016BFC:
    eax = MEM32(ebp + (-0x250)); /* 0x10016BFC: mov eax, dword ptr [ebp - 0x250] */
    /* test eax, eax */ /* 0x10016C02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016D88; /* 0x10016C04: je 0x10016d88 */
L_10016C0A:
    RECOMP_BACKEDGE();
    goto L_10016AE6; /* 0x10016C0A: jmp 0x10016ae6 */
L_10016C0F:
    PUSH32(esp, ebp); /* 0x10016C0F: push ebp */
    ebp = esp; /* 0x10016C10: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x280u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x280u; /* 0x10016C12: sub esp, 0x280 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10016C18: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10016C1D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10016C1F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x10016C22: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x270); /* 0x10016C25: lea ecx, [ebp - 0x270] */
    PUSH32(esp, ebx); /* 0x10016C2B: push ebx */
    PUSH32(esp, esi); /* 0x10016C2C: push esi */
    MEM32(ebp + (-0x230)) = eax; /* 0x10016C2D: mov dword ptr [ebp - 0x230], eax */
    eax = MEM32(ebp + 0xC); /* 0x10016C33: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x10016C36: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10016C37: push dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x14); /* 0x10016C3A: mov edi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x210)) = eax; /* 0x10016C3D: mov dword ptr [ebp - 0x210], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10016C43: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x10016C45: mov ebx, eax */
    MEM32(ebp + (-0x21C)) = edi; /* 0x10016C47: mov dword ptr [ebp - 0x21c], edi */
    MEM32(ebp + (-0x254)) = eax; /* 0x10016C4D: mov dword ptr [ebp - 0x254], eax */
    esi = eax; /* 0x10016C53: mov esi, eax */
    MEM32(ebp + (-0x218)) = ebx; /* 0x10016C55: mov dword ptr [ebp - 0x218], ebx */
    MEM32(ebp + (-0x240)) = eax; /* 0x10016C5B: mov dword ptr [ebp - 0x240], eax */
    MEM32(ebp + (-0x228)) = eax; /* 0x10016C61: mov dword ptr [ebp - 0x228], eax */
    MEM32(ebp + (-0x234)) = eax; /* 0x10016C67: mov dword ptr [ebp - 0x234], eax */
    MEM32(ebp + (-0x25C)) = eax; /* 0x10016C6D: mov dword ptr [ebp - 0x25c], eax */
    MEM32(ebp + (-0x24C)) = eax; /* 0x10016C73: mov dword ptr [ebp - 0x24c], eax */
    MEM32(ebp + (-0x238)) = eax; /* 0x10016C79: mov dword ptr [ebp - 0x238], eax */
    RECOMP_CALL(sub_1000F764); /* 0x10016C7F: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1001177D); /* 0x10016C84: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x258)) = eax; /* 0x10016C89: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + (-0x230)); /* 0x10016C8F: mov eax, dword ptr [ebp - 0x230] */
    /* test eax, eax */ /* 0x10016C95: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10020C3B; /* 0x10016C97: je 0x10020c3b */
L_10016C9D:
    /* test MEM8(eax + 0xC), 0x40u */ /* 0x10016C9D: test byte ptr [eax + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10020BCF; /* 0x10016CA1: je 0x10020bcf */
L_10016CA7:
    edx = MEM32(ebp + (-0x210)); /* 0x10016CA7: mov edx, dword ptr [ebp - 0x210] */
    /* test edx, edx */ /* 0x10016CAD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10020C3B; /* 0x10016CAF: je 0x10020c3b */
L_10016CB5:
    SET_LO8(edx, MEM8(edx)); /* 0x10016CB5: mov dl, byte ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10016CB7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x224)) = eax; /* 0x10016CB9: mov dword ptr [ebp - 0x224], eax */
    ecx = eax; /* 0x10016CBF: mov ecx, eax */
    MEM32(ebp + (-0x220)) = ecx; /* 0x10016CC1: mov dword ptr [ebp - 0x220], ecx */
    MEM32(ebp + (-0x244)) = eax; /* 0x10016CC7: mov dword ptr [ebp - 0x244], eax */
    MEM32(ebp + (-0x250)) = eax; /* 0x10016CCD: mov dword ptr [ebp - 0x250], eax */
    MEM8(ebp + (-0x211)) = (uint8_t)(LO8(edx)); /* 0x10016CD3: mov byte ptr [ebp - 0x211], dl */
    MEM8(ebp + (-0x248)) = (uint8_t)(LO8(edx)); /* 0x10016CD9: mov byte ptr [ebp - 0x248], dl */
    /* test LO8(edx), LO8(edx) */ /* 0x10016CDF: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016DA4; /* 0x10016CE1: je 0x10016da4 */
L_10016CE7:
    eax = MEM32(ebp + (-0x210)); /* 0x10016CE7: mov eax, dword ptr [ebp - 0x210] */
L_10016CED:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10016CED: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x210)) = eax; /* 0x10016CEE: mov dword ptr [ebp - 0x210], eax */
    /* test ecx, ecx */ /* 0x10016CF4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10016DA4; /* 0x10016CF6: js 0x10016da4 */
L_10016CFC:
    eax = edx + (-0x20); /* 0x10016CFC: lea eax, [edx - 0x20] */
    /* cmp LO8(eax), 0x58u */ /* 0x10016CFF: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_10017C57; /* 0x10016D01: ja 0x10017c57 */
L_10016D07:
    eax = (int32_t)(int8_t)LO8(edx); /* 0x10016D07: movsx eax, dl */
    eax = (int32_t)(int8_t)MEM8(eax + 0x100117D0); /* 0x10016D0A: movsx eax, byte ptr [eax + 0x100117d0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x10016D11: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
L_10016D14:
    edi = MEM32(ebp + (-0x244)); /* 0x10016D14: mov edi, dword ptr [ebp - 0x244] */
    edi = (int32_t)(int8_t)MEM8(edi + eax * 8 + 0x100117F0); /* 0x10016D1A: movsx edi, byte ptr [edi + eax*8 + 0x100117f0] */
    eax = edi; /* 0x10016D22: mov eax, edi */
    MEM32(ebp + (-0x244)) = edi; /* 0x10016D24: mov dword ptr [ebp - 0x244], edi */
    edi = MEM32(ebp + (-0x21C)); /* 0x10016D2A: mov edi, dword ptr [ebp - 0x21c] */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x10016D30: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    MEM32(ebp + (-0x244)) = eax; /* 0x10016D33: mov dword ptr [ebp - 0x244], eax */
    /* cmp eax, 7 */ /* 0x10016D39: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10016D88; /* 0x10016D3C: ja 0x10016d88 */
L_10016D3E:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x10016B0D)); goto _ljump; }
L_10016D45:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10016D45: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10016D47:
    MEM32(ebp + (-0x238)) = eax; /* 0x10016D47: mov dword ptr [ebp - 0x238], eax */
    eax = ebp + (-0x270); /* 0x10016D4D: lea eax, [ebp - 0x270] */
    PUSH32(esp, eax); /* 0x10016D53: push eax */
    eax = (uint32_t)LO8(edx); /* 0x10016D54: movzx eax, dl */
    PUSH32(esp, eax); /* 0x10016D57: push eax */
    RECOMP_CALL(sub_10011D42); /* 0x10016D58: call 0x10011d42 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10016D5D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10016D5E: pop ecx */
    /* test eax, eax */ /* 0x10016D5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001661E; /* 0x10016D61: jne 0x1001661e */
L_10016D67:
    eax = ebp + (-0x220); /* 0x10016D67: lea eax, [ebp - 0x220] */
    PUSH32(esp, eax); /* 0x10016D6D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x230))); /* 0x10016D6E: push dword ptr [ebp - 0x230] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x10016D74: push dword ptr [ebp - 0x248] */
    RECOMP_CALL(sub_100134DD); /* 0x10016D7A: call 0x100134dd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10016D7F: add esp, 0xc */
    _flag_k = FK_ADD;
L_10016D82:
    ecx = MEM32(ebp + (-0x220)); /* 0x10016D82: mov ecx, dword ptr [ebp - 0x220] */
L_10016D88:
    eax = MEM32(ebp + (-0x210)); /* 0x10016D88: mov eax, dword ptr [ebp - 0x210] */
L_10016D8E:
    SET_LO8(edx, MEM8(eax)); /* 0x10016D8E: mov dl, byte ptr [eax] */
    MEM8(ebp + (-0x211)) = (uint8_t)(LO8(edx)); /* 0x10016D90: mov byte ptr [ebp - 0x211], dl */
    MEM8(ebp + (-0x248)) = (uint8_t)(LO8(edx)); /* 0x10016D96: mov byte ptr [ebp - 0x248], dl */
    /* test LO8(edx), LO8(edx) */ /* 0x10016D9C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10016CED; /* 0x10016D9E: jne 0x10016ced */
L_10016DA4:
    eax = ecx; /* 0x10016DA4: mov eax, ecx */
L_10016DA6:
    /* cmp MEM8(ebp + (-0x264)), 0 */ /* 0x10016DA6: cmp byte ptr [ebp - 0x264], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x264))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x10016DAD: pop edi */
    esi = POP32_VAL(esp); /* 0x10016DAE: pop esi */
    ebx = POP32_VAL(esp); /* 0x10016DAF: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016DBC; /* 0x10016DB0: je 0x10016dbc */
L_10016DB2:
    ecx = MEM32(ebp + (-0x268)); /* 0x10016DB2: mov ecx, dword ptr [ebp - 0x268] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x10016DB8: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10016DBC:
    ecx = MEM32(ebp + (-0x4)); /* 0x10016DBC: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10016DBF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x10016DC1: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10016DC6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10016DC8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10016DC9: ret  */
L_10016DCA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10016DCA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x228)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x228)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x228)) = MEM32(ebp + (-0x228)) | 0xFFFFFFFFu; /* 0x10016DCC: or dword ptr [ebp - 0x228], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x10016DD3: mov ebx, eax */
    MEM32(ebp + (-0x25C)) = eax; /* 0x10016DD5: mov dword ptr [ebp - 0x25c], eax */
    MEM32(ebp + (-0x24C)) = eax; /* 0x10016DDB: mov dword ptr [ebp - 0x24c], eax */
    MEM32(ebp + (-0x240)) = eax; /* 0x10016DE1: mov dword ptr [ebp - 0x240], eax */
    MEM32(ebp + (-0x234)) = eax; /* 0x10016DE7: mov dword ptr [ebp - 0x234], eax */
    MEM32(ebp + (-0x218)) = ebx; /* 0x10016DED: mov dword ptr [ebp - 0x218], ebx */
    MEM32(ebp + (-0x238)) = eax; /* 0x10016DF3: mov dword ptr [ebp - 0x238], eax */
    RECOMP_BACKEDGE();
    goto L_10016D88; /* 0x10016DF9: jmp 0x10016d88 */
L_10016DFB:
    edx = MEM32(ebp + (-0x228)); /* 0x10016DFB: mov edx, dword ptr [ebp - 0x228] */
    eax = 0x7FFFFFFFu; /* 0x10016E01: mov eax, 0x7fffffff */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x10016E06: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100166D9; /* 0x10016E09: jne 0x100166d9 */
L_10016E0F:
    esi = MEM32(edi); /* 0x10016E0F: mov esi, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x10016E11: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x21C)) = edi; /* 0x10016E14: mov dword ptr [ebp - 0x21c], edi */
    /* test ebx, 0x810u */ /* 0x10016E1A: test ebx, 0x810 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x810u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100166E0; /* 0x10016E20: jne 0x100166e0 */
L_10016E26:
    /* test esi, esi */ /* 0x10016E26: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100169E8; /* 0x10016E28: je 0x100169e8 */
L_10016E2E:
    ecx = esi; /* 0x10016E2E: mov ecx, esi */
    RECOMP_BACKEDGE();
    goto L_10016B34; /* 0x10016E30: jmp 0x10016b34 */
L_10016E35:
    /* cmp LO8(edx), 0x49u */ /* 0x10016E35: cmp dl, 0x49 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x49u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016599; /* 0x10016E38: je 0x10016599 */
L_10016E3E:
    /* cmp LO8(edx), 0x68u */ /* 0x10016E3E: cmp dl, 0x68 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x68u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016591; /* 0x10016E41: je 0x10016591 */
L_10016E47:
    eax = MEM32(ebp + (-0x210)); /* 0x10016E47: mov eax, dword ptr [ebp - 0x210] */
    /* cmp LO8(edx), 0x6Cu */ /* 0x10016E4D: cmp dl, 0x6c */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x6Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1001B810; /* 0x10016E50: jne 0x1001b810 */
L_10016E56:
    /* cmp MEM8(eax), 0x6Cu */ /* 0x10016E56: cmp byte ptr [eax], 0x6c */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x6Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016585; /* 0x10016E59: je 0x10016585 */
L_10016E5F:
    _flag_a = (uint32_t)((ebx | 0x10u)); _flag_b = (uint32_t)((ebx | 0x10u));
    ebx = ebx | 0x10u; /* 0x10016E5F: or ebx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10016E62:
    MEM32(ebp + (-0x218)) = ebx; /* 0x10016E62: mov dword ptr [ebp - 0x218], ebx */
    RECOMP_BACKEDGE();
    goto L_10016D8E; /* 0x10016E68: jmp 0x10016d8e */
L_10016E6D:
    eax = edx; /* 0x10016E6D: mov eax, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10016E6F: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x228)) = edx; /* 0x10016E70: mov dword ptr [ebp - 0x228], edx */
    /* test eax, eax */ /* 0x10016E76: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10016E80; /* 0x10016E78: jg 0x10016e80 */
L_10016E7A:
    eax = ecx; /* 0x10016E7A: mov eax, ecx */
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x10016E7C: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016EBB; /* 0x10016E7E: je 0x10016ebb */
L_10016E80:
    eax = MEM32(ebp + (-0x224)); /* 0x10016E80: mov eax, dword ptr [ebp - 0x224] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10016E86: cdq  */
    PUSH32(esp, edx); /* 0x10016E87: push edx */
    PUSH32(esp, eax); /* 0x10016E88: push eax */
    PUSH32(esp, edi); /* 0x10016E89: push edi */
    PUSH32(esp, ecx); /* 0x10016E8A: push ecx */
    RECOMP_CALL(sub_10011849); /* 0x10016E8B: call 0x10011849 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x10016E90: add ecx, 0x30 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x27C)) = ebx; /* 0x10016E93: mov dword ptr [ebp - 0x27c], ebx */
    MEM32(ebp + (-0x23C)) = eax; /* 0x10016E99: mov dword ptr [ebp - 0x23c], eax */
    edi = edx; /* 0x10016E9F: mov edi, edx */
    /* cmp ecx, 0x39u */ /* 0x10016EA1: cmp ecx, 0x39 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_100169C1; /* 0x10016EA4: jg 0x100169c1 */
L_10016EAA:
    edx = MEM32(ebp + (-0x228)); /* 0x10016EAA: mov edx, dword ptr [ebp - 0x228] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x10016EB0: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10016EB2: dec esi */
    _flag_k = FK_DEC;
    ecx = MEM32(ebp + (-0x23C)); /* 0x10016EB3: mov ecx, dword ptr [ebp - 0x23c] */
    RECOMP_BACKEDGE();
    goto L_10016E6D; /* 0x10016EB9: jmp 0x10016e6d */
L_10016EBB:
    ebx = MEM32(ebp + (-0x218)); /* 0x10016EBB: mov ebx, dword ptr [ebp - 0x218] */
    eax = ebp + (-0xD); /* 0x10016EC1: lea eax, [ebp - 0xd] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x10016EC4: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10016EC6: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x224)) = eax; /* 0x10016EC7: mov dword ptr [ebp - 0x224], eax */
    /* test ebx, 0x200u */ /* 0x10016ECD: test ebx, 0x200 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016B40; /* 0x10016ED3: je 0x10016b40 */
L_10016ED9:
    RECOMP_BACKEDGE();
    goto L_100169CC; /* 0x10016ED9: jmp 0x100169cc */
L_10017C57:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10017C57: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016D14; /* 0x10017C59: jmp 0x10016d14 */
L_1001905E:
    /* test ebx, 0x100u */ /* 0x1001905E: test ebx, 0x100 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100169F3; /* 0x10019064: jne 0x100169f3 */
L_1001906A:
    /* test LO8(ebx), 1 */ /* 0x1001906A: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100169FC; /* 0x1001906D: jne 0x100169fc */
L_10019073:
    /* test LO8(ebx), 2 */ /* 0x10019073: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016B56; /* 0x10019076: je 0x10016b56 */
L_1001907C:
    RECOMP_BACKEDGE();
    goto L_10016A05; /* 0x1001907C: jmp 0x10016a05 */
L_1001B7D6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001B7D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x228)) = eax; /* 0x1001B7D8: mov dword ptr [ebp - 0x228], eax */
    RECOMP_BACKEDGE();
    goto L_10016D88; /* 0x1001B7DE: jmp 0x10016d88 */
L_1001B7E3:
    /* cmp LO8(edx), 0x2Au */ /* 0x1001B7E3: cmp dl, 0x2a */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10016560; /* 0x1001B7E6: jne 0x10016560 */
L_1001B7EC:
    eax = MEM32(edi); /* 0x1001B7EC: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1001B7EE: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x228)) = eax; /* 0x1001B7F1: mov dword ptr [ebp - 0x228], eax */
    /* test eax, eax */ /* 0x1001B7F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x210)); /* 0x1001B7F9: mov eax, dword ptr [ebp - 0x210] */
    MEM32(ebp + (-0x21C)) = edi; /* 0x1001B7FF: mov dword ptr [ebp - 0x21c], edi */
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10016D8E; /* 0x1001B805: jns 0x10016d8e */
L_1001B80B:
    RECOMP_BACKEDGE();
    goto L_10016554; /* 0x1001B80B: jmp 0x10016554 */
L_1001B810:
    /* cmp LO8(edx), 0x77u */ /* 0x1001B810: cmp dl, 0x77 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x77u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10016D8E; /* 0x1001B813: jne 0x10016d8e */
L_1001B819:
    RECOMP_BACKEDGE();
    goto L_1001657A; /* 0x1001B819: jmp 0x1001657a */
L_1001BD25:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1001691B; /* 0x1001BD25: je 0x1001691b */
L_1001BD2B:
    /* cmp eax, 0x65u */ /* 0x1001BD2B: cmp eax, 0x65 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10016B40; /* 0x1001BD2E: jl 0x10016b40 */
L_1001BD34:
    /* cmp eax, 0x67u */ /* 0x1001BD34: cmp eax, 0x67 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x67u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1001BD3E; /* 0x1001BD37: jle 0x1001bd3e */
L_1001BD39:
    RECOMP_BACKEDGE();
    goto L_100167E2; /* 0x1001BD39: jmp 0x100167e2 */
L_1001BD3E:
    eax = MEM32(ebp + (-0x228)); /* 0x1001BD3E: mov eax, dword ptr [ebp - 0x228] */
    esi = ebp + (-0x20C); /* 0x1001BD44: lea esi, [ebp - 0x20c] */
    _flag_a = (uint32_t)((ebx | 0x40u)); _flag_b = (uint32_t)((ebx | 0x40u));
    ebx = ebx | 0x40u; /* 0x1001BD4A: or ebx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x200u; /* 0x1001BD4D: mov ecx, 0x200 */
    MEM32(ebp + (-0x218)) = ebx; /* 0x1001BD52: mov dword ptr [ebp - 0x218], ebx */
    MEM32(ebp + (-0x23C)) = ecx; /* 0x1001BD58: mov dword ptr [ebp - 0x23c], ecx */
    /* test eax, eax */ /* 0x1001BD5E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10016693; /* 0x1001BD60: js 0x10016693 */
L_1001BD66:
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001686B; /* 0x1001BD66: je 0x1001686b */
L_1001BD6C:
    /* cmp eax, ecx */ /* 0x1001BD6C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_10016883; /* 0x1001BD6E: jg 0x10016883 */
L_1001BD74:
    /* cmp eax, 0xA3u */ /* 0x1001BD74: cmp eax, 0xa3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA3u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_10016890; /* 0x1001BD79: jg 0x10016890 */
L_1001BD7F:
    eax = MEM32(edi); /* 0x1001BD7F: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1001BD81: add edi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x278)) = eax; /* 0x1001BD84: mov dword ptr [ebp - 0x278], eax */
    MEM32(ebp + (-0x21C)) = edi; /* 0x1001BD8A: mov dword ptr [ebp - 0x21c], edi */
    eax = MEM32(edi + (-0x4)); /* 0x1001BD90: mov eax, dword ptr [edi - 4] */
    MEM32(ebp + (-0x274)) = eax; /* 0x1001BD93: mov dword ptr [ebp - 0x274], eax */
    eax = ebp + (-0x270); /* 0x1001BD99: lea eax, [ebp - 0x270] */
    PUSH32(esp, eax); /* 0x1001BD9F: push eax */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x1001BDA0: push dword ptr [ebp - 0x25c] */
    eax = (int32_t)(int8_t)LO8(edx); /* 0x1001BDA6: movsx eax, dl */
    PUSH32(esp, MEM32(ebp + (-0x228))); /* 0x1001BDA9: push dword ptr [ebp - 0x228] */
    PUSH32(esp, eax); /* 0x1001BDAF: push eax */
    PUSH32(esp, MEM32(ebp + (-0x23C))); /* 0x1001BDB0: push dword ptr [ebp - 0x23c] */
    eax = ebp + (-0x278); /* 0x1001BDB6: lea eax, [ebp - 0x278] */
    PUSH32(esp, esi); /* 0x1001BDBC: push esi */
    PUSH32(esp, eax); /* 0x1001BDBD: push eax */
    RECOMP_CALL(sub_1001AFC6); /* 0x1001BDBE: call 0x1001afc6 */
    RECOMP_FLAGS_IN();
    edi = ebx; /* 0x1001BDC3: mov edi, ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1001BDC5: add esp, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80u);
    edi = edi & 0x80u; /* 0x1001BDC8: and edi, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100168CC; /* 0x1001BDCE: jne 0x100168cc */
L_1001BDD4:
    /* cmp MEM8(ebp + (-0x211)), 0x67u */ /* 0x1001BDD4: cmp byte ptr [ebp - 0x211], 0x67 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x211))) << 24; _flag_b = (uint32_t)(0x67u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100168ED; /* 0x1001BDDB: je 0x100168ed */
L_1001BDE1:
    /* cmp MEM8(esi), 0x2Du */ /* 0x1001BDE1: cmp byte ptr [esi], 0x2d */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10016909; /* 0x1001BDE4: je 0x10016909 */
L_1001BDEA:
    PUSH32(esp, esi); /* 0x1001BDEA: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x1001BDEB: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001BDF0: pop ecx */
L_1001BDF1:
    MEM32(ebp + (-0x224)) = eax; /* 0x1001BDF1: mov dword ptr [ebp - 0x224], eax */
    RECOMP_BACKEDGE();
    goto L_10016B40; /* 0x1001BDF7: jmp 0x10016b40 */
L_10020AFC:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1001665B; /* 0x10020AFC: jne 0x1001665b */
L_10020B02:
    _flag_a = (uint32_t)((ebx | 0x40u)); _flag_b = (uint32_t)((ebx | 0x40u));
    ebx = ebx | 0x40u; /* 0x10020B02: or ebx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x218)) = ebx; /* 0x10020B05: mov dword ptr [ebp - 0x218], ebx */
    RECOMP_BACKEDGE();
    goto L_1001643F; /* 0x10020B0B: jmp 0x1001643f */
L_10020B10:
    eax = MEM32(edi + (-0x4)); /* 0x10020B10: mov eax, dword ptr [edi - 4] */
L_10020B13:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10020B13: cdq  */
    ecx = eax; /* 0x10020B14: mov ecx, eax */
    edi = edx; /* 0x10020B16: mov edi, edx */
    RECOMP_BACKEDGE();
    goto L_10016483; /* 0x10020B18: jmp 0x10016483 */
L_10020B1D:
    /* cmp edi, esi */ /* 0x10020B1D: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1001648C; /* 0x10020B1F: jg 0x1001648c */
L_10020B25:
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10016982; /* 0x10020B25: jl 0x10016982 */
L_10020B2B:
    /* cmp ecx, esi */ /* 0x10020B2B: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1001648C; /* 0x10020B2D: jae 0x1001648c */
L_10020B33:
    RECOMP_BACKEDGE();
    goto L_10016982; /* 0x10020B33: jmp 0x10016982 */
L_10020BCF:
    PUSH32(esp, eax); /* 0x10020BCF: push eax */
    RECOMP_CALL(sub_1001427C); /* 0x10020BD0: call 0x1001427c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10020BD5: pop ecx */
    ecx = eax; /* 0x10020BD6: mov ecx, eax */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x10020BD8: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10020C22; /* 0x10020BDB: je 0x10020c22 */
L_10020BDD:
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x10020BDD: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10020C22; /* 0x10020BE0: je 0x10020c22 */
L_10020BE2:
    edx = ecx; /* 0x10020BE2: mov edx, ecx */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10020BE4: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x10020BE7: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((edx) >> 26) & 1u); /* 0x10020BEA: shl edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((edx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 6u; /* 0x10020BEA: shl edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax * 4 + 0x100DF640); /* 0x10020BED: add edx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
L_10020BF4:
    /* test MEM8(edx + 0x24), 0x7Fu */ /* 0x10020BF4: test byte ptr [edx + 0x24], 0x7f */
    _flag_a = (uint32_t)(MEM8(edx + 0x24)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10020C3B; /* 0x10020BF8: jne 0x10020c3b */
L_10020BFA:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x10020BFA: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10020C29; /* 0x10020BFD: je 0x10020c29 */
L_10020BFF:
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x10020BFF: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10020C29; /* 0x10020C02: je 0x10020c29 */
L_10020C04:
    eax = ecx; /* 0x10020C04: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10020C06: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x10020C09: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x10020C0C: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x10020C0C: shl ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 4 + 0x100DF640));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax * 4 + 0x100DF640); /* 0x10020C0F: add ecx, dword ptr [eax*4 + 0x100df640] */
    _flag_k = FK_ADD;
L_10020C16:
    /* test MEM8(ecx + 0x24), 0x80u */ /* 0x10020C16: test byte ptr [ecx + 0x24], 0x80 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x24)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10016CA7; /* 0x10020C1A: je 0x10016ca7 */
L_10020C20:
    goto L_10020C3B; /* 0x10020C20: jmp 0x10020c3b */
L_10020C22:
    edx = 0x100DF520u; /* 0x10020C22: mov edx, 0x100df520 */
    RECOMP_BACKEDGE();
    goto L_10020BF4; /* 0x10020C27: jmp 0x10020bf4 */
L_10020C29:
    ecx = 0x100DF520u; /* 0x10020C29: mov ecx, 0x100df520 */
    RECOMP_BACKEDGE();
    goto L_10020C16; /* 0x10020C2E: jmp 0x10020c16 */
L_10020C30:
    ecx = MEM32(ebp + (-0x220)); /* 0x10020C30: mov ecx, dword ptr [ebp - 0x220] */
    RECOMP_BACKEDGE();
    goto L_10016BFC; /* 0x10020C36: jmp 0x10016bfc */
L_10020C3B:
    RECOMP_CALL(sub_1001177D); /* 0x10020C3B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10016AFA; /* 0x10020C40: jmp 0x10016afa */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x10016419u: goto L_10016419;
      case 0x100164B9u: goto L_100164B9;
      case 0x10016506u: goto L_10016506;
      case 0x10016D45u: goto L_10016D45;
      case 0x10016DCAu: goto L_10016DCA;
      case 0x10016E35u: goto L_10016E35;
      case 0x1001B7D6u: goto L_1001B7D6;
      case 0x1001B7E3u: goto L_1001B7E3;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_10016EDE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10016EDEu);

L_10016EDE:
    PUSH32(esp, ebp); /* 0x10016EDE: push ebp */
    ebp = esp; /* 0x10016EDF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10016EE1: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10016EE4: push ebx */
    PUSH32(esp, edi); /* 0x10016EE5: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10016EE6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x1C); /* 0x10016EE8: lea edi, [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x10016EEB: push 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10016EED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x10016EEF: mov dword ptr [ebp - 0x20], ebx */
    ecx = POP32_VAL(esp); /* 0x10016EF2: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x10016EF3: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x10016EF5: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100559E6; /* 0x10016EF8: je 0x100559e6 */
L_10016EFE:
    eax = MEM32(ebp + 0x8); /* 0x10016EFE: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x10016F01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100559E6; /* 0x10016F03: je 0x100559e6 */
L_10016F09:
    PUSH32(esp, esi); /* 0x10016F09: push esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x10016F0A: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x10016F0D: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + 0x10; /* 0x10016F10: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10016F13: push eax */
    PUSH32(esp, ebx); /* 0x10016F14: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10016F15: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x20); /* 0x10016F18: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x10016F1B: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    PUSH32(esp, eax); /* 0x10016F22: push eax */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x10016F23: mov dword ptr [ebp - 0x14], 0x42 */
    RECOMP_CALL(sub_10016C0F); /* 0x10016F2A: call 0x10016c0f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10016F2F: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x10016F32: mov esi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x10016F34: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_100559FE; /* 0x10016F37: js 0x100559fe */
L_10016F3D:
    ecx = MEM32(ebp + (-0x20)); /* 0x10016F3D: mov ecx, dword ptr [ebp - 0x20] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x10016F40: mov byte ptr [ecx], bl */
L_10016F42:
    eax = esi; /* 0x10016F42: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10016F44: pop esi */
L_10016F45:
    edi = POP32_VAL(esp); /* 0x10016F45: pop edi */
    ebx = POP32_VAL(esp); /* 0x10016F46: pop ebx */
    esp = ebp; /* 0x10016F47: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10016F49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10016F4A: ret  */
L_100559E6:
    RECOMP_CALL(sub_1001177D); /* 0x100559E6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100559EB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100559F1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100559F6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016F45; /* 0x100559F9: jmp 0x10016f45 */
L_100559FE:
    eax = ebp + (-0x20); /* 0x100559FE: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10055A01: push eax */
    PUSH32(esp, ebx); /* 0x10055A02: push ebx */
    RECOMP_CALL(sub_1002C35B); /* 0x10055A03: call 0x1002c35b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10055A08: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10055A09: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10016F42; /* 0x10055A0A: jmp 0x10016f42 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10016F4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10016F4Bu);

L_10016F4B:
    PUSH32(esp, ebp); /* 0x10016F4B: push ebp */
    ebp = esp; /* 0x10016F4C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10016F4E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x10016F51: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x10016F54: push ebx */
    PUSH32(esp, esi); /* 0x10016F55: push esi */
    PUSH32(esp, edi); /* 0x10016F56: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10016F57: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x10016F5A: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x10016F5F: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x10016F62: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AB91; /* 0x10016F64: je 0x1005ab91 */
L_10016F6A:
    ecx = MEM32(ebp + 0x8); /* 0x10016F6A: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x10016F6D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AB98; /* 0x10016F6F: je 0x1005ab98 */
L_10016F75:
    edx = MEM32(ebp + 0xC); /* 0x10016F75: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x10016F78: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005AB98; /* 0x10016F7A: je 0x1005ab98 */
L_10016F80:
    esi = 0x7FFFFFFFu; /* 0x10016F80: mov esi, 0x7fffffff */
    /* cmp eax, esi */ /* 0x10016F85: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005ABB2; /* 0x10016F87: ja 0x1005abb2 */
L_10016F8D:
    edi = MEM32(ebp + (-0x10)); /* 0x10016F8D: mov edi, dword ptr [ebp - 0x10] */
    ebx = MEM32(edi + 0xA4); /* 0x10016F90: mov ebx, dword ptr [edi + 0xa4] */
    /* test ebx, ebx */ /* 0x10016F96: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002E3EF; /* 0x10016F98: je 0x1002e3ef */
L_10016F9E:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x10016F9E: push dword ptr [edi + 8] */
    PUSH32(esp, eax); /* 0x10016FA1: push eax */
    PUSH32(esp, edx); /* 0x10016FA2: push edx */
    PUSH32(esp, eax); /* 0x10016FA3: push eax */
    PUSH32(esp, ecx); /* 0x10016FA4: push ecx */
    PUSH32(esp, 0x1001u); /* 0x10016FA5: push 0x1001 */
    eax = ebp + (-0x10); /* 0x10016FAA: lea eax, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x10016FAD: push ebx */
    PUSH32(esp, eax); /* 0x10016FAE: push eax */
    RECOMP_CALL(sub_10017B92); /* 0x10016FAF: call 0x10017b92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x10016FB4: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10016FB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005ABC7; /* 0x10016FB9: je 0x1005abc7 */
L_10016FBF:
    esi = eax + (-0x2); /* 0x10016FBF: lea esi, [eax - 2] */
L_10016FC2:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x10016FC2: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005ABD7; /* 0x10016FC6: jne 0x1005abd7 */
L_10016FCC:
    edi = POP32_VAL(esp); /* 0x10016FCC: pop edi */
    eax = esi; /* 0x10016FCD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10016FCF: pop esi */
    ebx = POP32_VAL(esp); /* 0x10016FD0: pop ebx */
    esp = ebp; /* 0x10016FD1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10016FD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10016FD4: ret  */
L_1002E3EF:
    esi = ebp + (-0x10); /* 0x1002E3EF: lea esi, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1002E3F2: push esi */
    PUSH32(esp, eax); /* 0x1002E3F3: push eax */
    PUSH32(esp, edx); /* 0x1002E3F4: push edx */
    PUSH32(esp, ecx); /* 0x1002E3F5: push ecx */
    RECOMP_CALL(sub_1002E311); /* 0x1002E3F6: call 0x1002e311 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002E3FB: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1002E3FE: mov esi, eax */
    RECOMP_BACKEDGE();
    goto L_10016FC2; /* 0x1002E400: jmp 0x10016fc2 */
L_1005AB91:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1005AB91: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016FC2; /* 0x1005AB93: jmp 0x10016fc2 */
L_1005AB98:
    RECOMP_CALL(sub_1001177D); /* 0x1005AB98: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005AB9D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005ABA3: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    esi = 0x7FFFFFFFu; /* 0x1005ABA8: mov esi, 0x7fffffff */
    RECOMP_BACKEDGE();
    goto L_10016FC2; /* 0x1005ABAD: jmp 0x10016fc2 */
L_1005ABB2:
    RECOMP_CALL(sub_1001177D); /* 0x1005ABB2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005ABB7: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005ABBD: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10016FC2; /* 0x1005ABC2: jmp 0x10016fc2 */
L_1005ABC7:
    RECOMP_CALL(sub_1001177D); /* 0x1005ABC7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005ABCC: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_10016FC2; /* 0x1005ABD2: jmp 0x10016fc2 */
L_1005ABD7:
    ecx = MEM32(ebp + (-0x8)); /* 0x1005ABD7: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1005ABDA: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10016FCC; /* 0x1005ABDE: jmp 0x10016fcc */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10016FD5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10016FD5u);

L_10016FD5:
    PUSH32(esp, ebp); /* 0x10016FD5: push ebp */
    ebp = esp; /* 0x10016FD6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10016FD8: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x10016FDB: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x10016FDE: push esi */
    PUSH32(esp, edi); /* 0x10016FDF: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10016FE0: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1000F764); /* 0x10016FE3: call 0x1000f764 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x10016FE8: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x10016FEB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10057775; /* 0x10016FED: je 0x10057775 */
L_10016FF3:
    ecx = MEM32(ebp + 0x8); /* 0x10016FF3: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x10016FF6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005777C; /* 0x10016FF8: je 0x1005777c */
L_10016FFE:
    edx = MEM32(ebp + 0xC); /* 0x10016FFE: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x10017001: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005777C; /* 0x10017003: je 0x1005777c */
L_10017009:
    esi = 0x7FFFFFFFu; /* 0x10017009: mov esi, 0x7fffffff */
    /* cmp eax, esi */ /* 0x1001700E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10057796; /* 0x10017010: ja 0x10057796 */
L_10017016:
    edi = MEM32(ebp + (-0xC)); /* 0x10017016: mov edi, dword ptr [ebp - 0xc] */
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x10017019: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100577AB; /* 0x1001701D: jne 0x100577ab */
L_10017023:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10017023: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x10017026: push eax */
    PUSH32(esp, edx); /* 0x10017027: push edx */
    PUSH32(esp, ecx); /* 0x10017028: push ecx */
    RECOMP_CALL(sub_10016F4B); /* 0x10017029: call 0x10016f4b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1001702E: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x10017031: mov esi, eax */
L_10017033:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x10017033: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10017040; /* 0x10017037: je 0x10017040 */
L_10017039:
    ecx = MEM32(ebp + (-0x8)); /* 0x10017039: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1001703C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_10017040:
    edi = POP32_VAL(esp); /* 0x10017040: pop edi */
    eax = esi; /* 0x10017041: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10017043: pop esi */
    esp = ebp; /* 0x10017044: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10017046: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017047: ret  */
L_10057775:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10057775: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10017033; /* 0x10057777: jmp 0x10017033 */
L_1005777C:
    RECOMP_CALL(sub_1001177D); /* 0x1005777C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x10057781: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x10057787: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    esi = 0x7FFFFFFFu; /* 0x1005778C: mov esi, 0x7fffffff */
    RECOMP_BACKEDGE();
    goto L_10017033; /* 0x10057791: jmp 0x10017033 */
L_10057796:
    RECOMP_CALL(sub_1001177D); /* 0x10057796: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005779B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100577A1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10017033; /* 0x100577A6: jmp 0x10017033 */
L_100577AB:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x100577AB: push dword ptr [edi + 4] */
    PUSH32(esp, eax); /* 0x100577AE: push eax */
    PUSH32(esp, edx); /* 0x100577AF: push edx */
    PUSH32(esp, eax); /* 0x100577B0: push eax */
    PUSH32(esp, ecx); /* 0x100577B1: push ecx */
    PUSH32(esp, 0x1001u); /* 0x100577B2: push 0x1001 */
    PUSH32(esp, MEM32(edi + 0x21C)); /* 0x100577B7: push dword ptr [edi + 0x21c] */
    eax = ebp + (-0x10); /* 0x100577BD: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x100577C0: push eax */
    RECOMP_CALL(sub_10017B92); /* 0x100577C1: call 0x10017b92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x100577C6: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100577C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10017033; /* 0x100577CB: je 0x10017033 */
L_100577D1:
    esi = eax + (-0x2); /* 0x100577D1: lea esi, [eax - 2] */
    RECOMP_BACKEDGE();
    goto L_10017033; /* 0x100577D4: jmp 0x10017033 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10017048(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017048u);

L_10017048:
    PUSH32(esp, ebp); /* 0x10017048: push ebp */
    ebp = esp; /* 0x10017049: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1001704B: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1001704D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10017050: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10017053: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10016FD5); /* 0x10017056: call 0x10016fd5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1001705B: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1001705E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001705F: ret  */
    RECOMP_REGS_OUT();
}

void sub_10017060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017060u);

L_10017060:
    PUSH32(esp, ebp); /* 0x10017060: push ebp */
    ebp = esp; /* 0x10017061: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10017063: push esi */
    esi = MEM32(0x100DF618); /* 0x10017064: mov esi, dword ptr [0x100df618] */
    PUSH32(esp, edi); /* 0x1001706A: push edi */
    /* test esi, esi */ /* 0x1001706B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F48A; /* 0x1001706D: je 0x1005f48a */
L_10017073:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x10017073: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100170B5; /* 0x10017077: je 0x100170b5 */
L_10017079:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10017079: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100129AF); /* 0x1001707C: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10017081: pop ecx */
    edi = eax; /* 0x10017082: mov edi, eax */
L_10017084:
    ecx = MEM32(esi); /* 0x10017084: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x10017086: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100170B5; /* 0x10017088: je 0x100170b5 */
L_1001708A:
    PUSH32(esp, ecx); /* 0x1001708A: push ecx */
    RECOMP_CALL(sub_100129AF); /* 0x1001708B: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10017090: pop ecx */
    /* cmp eax, edi */ /* 0x10017091: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001709D; /* 0x10017093: jbe 0x1001709d */
L_10017095:
    eax = MEM32(esi); /* 0x10017095: mov eax, dword ptr [esi] */
    /* cmp MEM8(eax + edi), 0x3Du */ /* 0x10017097: cmp byte ptr [eax + edi], 0x3d */
    _flag_a = (uint32_t)(MEM8(eax + edi)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100170A2; /* 0x1001709B: je 0x100170a2 */
L_1001709D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1001709D: add esi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10017084; /* 0x100170A0: jmp 0x10017084 */
L_100170A2:
    PUSH32(esp, edi); /* 0x100170A2: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100170A3: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x100170A6: push eax */
    RECOMP_CALL(sub_10017048); /* 0x100170A7: call 0x10017048 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100170AC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100170AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1001709D; /* 0x100170B1: jne 0x1001709d */
L_100170B3:
    goto L_100170BB; /* 0x100170B3: jmp 0x100170bb */
L_100170B5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100170B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100170B7:
    edi = POP32_VAL(esp); /* 0x100170B7: pop edi */
    esi = POP32_VAL(esp); /* 0x100170B8: pop esi */
    ebp = POP32_VAL(esp); /* 0x100170B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100170BA: ret  */
L_100170BB:
    eax = MEM32(esi); /* 0x100170BB: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100170BD: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x100170BE: add eax, edi */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100170B7; /* 0x100170C0: jmp 0x100170b7 */
L_1005F48A:
    /* cmp MEM32(0x100DF61C), esi */ /* 0x1005F48A: cmp dword ptr [0x100df61c], esi */
    _flag_a = (uint32_t)(MEM32(0x100DF61C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100170B5; /* 0x1005F490: je 0x100170b5 */
L_1005F496:
    RECOMP_CALL(sub_100A92D0); /* 0x1005F496: call 0x100a92d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1005F49B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100170B5; /* 0x1005F49D: jne 0x100170b5 */
L_1005F4A3:
    esi = MEM32(0x100DF618); /* 0x1005F4A3: mov esi, dword ptr [0x100df618] */
    /* test esi, esi */ /* 0x1005F4A9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10017073; /* 0x1005F4AB: jne 0x10017073 */
L_1005F4B1:
    RECOMP_BACKEDGE();
    goto L_100170B5; /* 0x1005F4B1: jmp 0x100170b5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100170C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100170C2u);

L_100170C2:
    PUSH32(esp, 7); /* 0x100170C2: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100170C4: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100170C9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100170CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100170CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100170CBu);

L_100170CB:
    PUSH32(esp, 0xCu); /* 0x100170CB: push 0xc */
    PUSH32(esp, 0x10017138u); /* 0x100170CD: push 0x10017138 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100170D2: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100170D7: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100170DB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x100170DD: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100170E0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100170E2: setne al */
    /* test eax, eax */ /* 0x100170E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F4B6; /* 0x100170E7: je 0x1005f4b6 */
L_100170ED:
    edi = 0x7FFFu; /* 0x100170ED: mov edi, 0x7fff */
    PUSH32(esp, edi); /* 0x100170F2: push edi */
    PUSH32(esp, esi); /* 0x100170F3: push esi */
    RECOMP_CALL(sub_10017154); /* 0x100170F4: call 0x10017154 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100170F9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100170FA: pop ecx */
    /* cmp eax, edi */ /* 0x100170FB: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100170FD: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100170FF: neg eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005F4B6; /* 0x10017101: je 0x1005f4b6 */
L_10017107:
    PUSH32(esp, 7); /* 0x10017107: push 7 */
    RECOMP_CALL(sub_1000EDD7); /* 0x10017109: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1001710E: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1001710F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10017113: push esi */
    RECOMP_CALL(sub_10017060); /* 0x10017114: call 0x10017060 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10017119: pop ecx */
    esi = eax; /* 0x1001711A: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1001711C: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1001711F: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100170C2); /* 0x10017126: call 0x100170c2 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1001712B: mov eax, esi */
L_1001712D:
    RECOMP_CALL(sub_1000EDC3); /* 0x1001712D: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017132: ret  */
L_1005F4B6:
    RECOMP_CALL(sub_1001177D); /* 0x1005F4B6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1005F4BB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1005F4C1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005F4C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1001712D; /* 0x1005F4C8: jmp 0x1001712d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10017154(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017154u);

L_10017154:
    PUSH32(esp, ebp); /* 0x10017154: push ebp */
    ebp = esp; /* 0x10017155: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10017157: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x10017159: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1001716D; /* 0x1001715C: jbe 0x1001716d */
L_1001715E:
    ecx = MEM32(ebp + 0x8); /* 0x1001715E: mov ecx, dword ptr [ebp + 8] */
L_10017161:
    /* cmp MEM8(ecx), 0 */ /* 0x10017161: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001716D; /* 0x10017164: je 0x1001716d */
L_10017166:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10017166: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10017167: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x10017168: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10017161; /* 0x1001716B: jb 0x10017161 */
L_1001716D:
    ebp = POP32_VAL(esp); /* 0x1001716D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1001716E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1001767D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1001767Du);

L_1001767D:
    PUSH32(esp, edi); /* 0x1001767D: push edi */
    PUSH32(esp, esi); /* 0x1001767E: push esi */
    PUSH32(esp, ebx); /* 0x1001767F: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10017680: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x14); /* 0x10017682: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x10017686: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10034C5A; /* 0x10017688: jl 0x10034c5a */
L_1001768E:
    eax = MEM32(esp + 0x1C); /* 0x1001768E: mov eax, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x10017692: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10034C73; /* 0x10017694: jl 0x10034c73 */
L_1001769A:
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x1001769A: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034C8C; /* 0x1001769C: jne 0x10034c8c */
L_100176A2:
    ecx = MEM32(esp + 0x18); /* 0x100176A2: mov ecx, dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x14); /* 0x100176A6: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100176AA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x100176AC: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x100176AE: mov ebx, eax */
    eax = MEM32(esp + 0x10); /* 0x100176B0: mov eax, dword ptr [esp + 0x10] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x100176B4: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = ebx; /* 0x100176B6: mov edx, ebx */
L_100176B8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100176B8: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10034CD2; /* 0x100176B9: je 0x10034cd2 */
L_100176BF:
    ebx = POP32_VAL(esp); /* 0x100176BF: pop ebx */
    esi = POP32_VAL(esp); /* 0x100176C0: pop esi */
    edi = POP32_VAL(esp); /* 0x100176C1: pop edi */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x100176C2: ret 0x10 */
L_10034C5A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10034C5A: inc edi */
    _flag_k = FK_INC;
    edx = MEM32(esp + 0x10); /* 0x10034C5B: mov edx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10034C5F: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10034C61: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034C63: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esp + 0x14) = eax; /* 0x10034C66: mov dword ptr [esp + 0x14], eax */
    MEM32(esp + 0x10) = edx; /* 0x10034C6A: mov dword ptr [esp + 0x10], edx */
    RECOMP_BACKEDGE();
    goto L_1001768E; /* 0x10034C6E: jmp 0x1001768e */
L_10034C73:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10034C73: inc edi */
    _flag_k = FK_INC;
    edx = MEM32(esp + 0x18); /* 0x10034C74: mov edx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10034C78: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10034C7A: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034C7C: sbb eax, 0 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(esp + 0x1C) = eax; /* 0x10034C7F: mov dword ptr [esp + 0x1c], eax */
    MEM32(esp + 0x18) = edx; /* 0x10034C83: mov dword ptr [esp + 0x18], edx */
    RECOMP_BACKEDGE();
    goto L_1001769A; /* 0x10034C87: jmp 0x1001769a */
L_10034C8C:
    ebx = eax; /* 0x10034C8C: mov ebx, eax */
    ecx = MEM32(esp + 0x18); /* 0x10034C8E: mov ecx, dword ptr [esp + 0x18] */
    edx = MEM32(esp + 0x14); /* 0x10034C92: mov edx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x10); /* 0x10034C96: mov eax, dword ptr [esp + 0x10] */
L_10034C9A:
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x10034C9A: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x10034C9A: shr ebx, 1 */
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x10034C9C: rcr ecx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x10034C9E: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x10034C9E: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x10034CA0: rcr eax, 1 */
    _flag_a = (uint32_t)((ebx | ebx)); _flag_b = (uint32_t)((ebx | ebx));
    ebx = ebx | ebx; /* 0x10034CA2: or ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10034C9A; /* 0x10034CA4: jne 0x10034c9a */
L_10034CA6:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10034CA6: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x10034CA8: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x1C)); /* 0x10034CAA: mul dword ptr [esp + 0x1c] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x10034CAE: mov ecx, eax */
    eax = MEM32(esp + 0x18); /* 0x10034CB0: mov eax, dword ptr [esp + 0x18] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x10034CB4: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x10034CB6: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10034CC8; /* 0x10034CB8: jb 0x10034cc8 */
L_10034CBA:
    /* cmp edx, MEM32(esp + 0x14) */ /* 0x10034CBA: cmp edx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10034CC8; /* 0x10034CBE: ja 0x10034cc8 */
L_10034CC0:
    if (CMP_B(_flag_a, _flag_b)) goto L_10034CC9; /* 0x10034CC0: jb 0x10034cc9 */
L_10034CC2:
    /* cmp eax, MEM32(esp + 0x10) */ /* 0x10034CC2: cmp eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10034CC9; /* 0x10034CC6: jbe 0x10034cc9 */
L_10034CC8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10034CC8: dec esi */
    _flag_k = FK_DEC;
L_10034CC9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10034CC9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x10034CCB: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_100176B8; /* 0x10034CCD: jmp 0x100176b8 */
L_10034CD2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10034CD2: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10034CD4: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10034CD6: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_BACKEDGE();
    goto L_100176BF; /* 0x10034CD9: jmp 0x100176bf */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100176C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100176C5u);

L_100176C5:
    PUSH32(esp, ebp); /* 0x100176C5: push ebp */
    ebp = esp; /* 0x100176C6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100176C8: sub esp, 0x18 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100176CB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x100176CF: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100176D2: push esi */
    /* test eax, eax */ /* 0x100176D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100569DC; /* 0x100176D5: je 0x100569dc */
L_100176DB:
    PUSH32(esp, 0x24u); /* 0x100176DB: push 0x24 */
    PUSH32(esp, 0xFFu); /* 0x100176DD: push 0xff */
    PUSH32(esp, eax); /* 0x100176E2: push eax */
    RECOMP_CALL(sub_10011533); /* 0x100176E3: call 0x10011533 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x100176E8: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100176EB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100176EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100569DC; /* 0x100176F0: je 0x100569dc */
L_100176F6:
    PUSH32(esp, ebx); /* 0x100176F6: push ebx */
    ebx = MEM32(eax); /* 0x100176F7: mov ebx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x100176F9: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x100176FC: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x100176FF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100569F2; /* 0x10017702: jle 0x100569f2 */
L_10017708:
    PUSH32(esp, 7); /* 0x10017708: push 7 */
    ecx = POP32_VAL(esp); /* 0x1001770A: pop ecx */
    /* cmp eax, ecx */ /* 0x1001770B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10056A02; /* 0x1001770D: jge 0x10056a02 */
L_10017713:
    PUSH32(esp, edi); /* 0x10017713: push edi */
    PUSH32(esp, 0); /* 0x10017714: push 0 */
    PUSH32(esp, 0x01E13380u); /* 0x10017716: push 0x1e13380 */
    PUSH32(esp, eax); /* 0x1001771B: push eax */
    PUSH32(esp, ebx); /* 0x1001771C: push ebx */
    RECOMP_CALL(sub_1001767D); /* 0x1001771D: call 0x1001767d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x46u; /* 0x10017722: add eax, 0x46 */
    _flag_k = FK_ADD;
    ecx = 0x190u; /* 0x10017725: mov ecx, 0x190 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1001772A: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, 0x64u); /* 0x1001772D: push 0x64 */
    edi = POP32_VAL(esp); /* 0x1001772F: pop edi */
    esi = eax + (-0x1); /* 0x10017730: lea esi, [eax - 1] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10017733: mov dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12Bu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x12Bu; /* 0x10017736: add eax, 0x12b */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = esi; /* 0x1001773B: mov dword ptr [ebp - 0x18], esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1001773E: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1001773F: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10017741: push -1 */
    ecx = eax; /* 0x10017743: mov ecx, eax */
    MEM32(ebp + (-0xC)) = edi; /* 0x10017745: mov dword ptr [ebp - 0xc], edi */
    eax = esi; /* 0x10017748: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1001774A: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x1001774B: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0xFFFFFE93u); /* 0x1001774D: push 0xfffffe93 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x10017752: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = esi; /* 0x10017754: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10017756: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x10017757: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1001775A: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x1001775C: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFEFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFEFu; /* 0x1001775F: add eax, -0x11 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x10017762: add eax, ecx */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10017764: cdq  */
    esi = eax; /* 0x10017765: mov esi, eax */
    edi = edx; /* 0x10017767: mov edi, edx */
    eax = MEM32(ebp + (-0x8)); /* 0x10017769: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFBAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFBAu; /* 0x1001776C: add eax, -0x46 */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1001776F: cdq  */
    PUSH32(esp, edx); /* 0x10017770: push edx */
    PUSH32(esp, eax); /* 0x10017771: push eax */
    RECOMP_CALL(sub_10015B8C); /* 0x10017772: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x10017777: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x10017779: push 0 */
    PUSH32(esp, 0x00015180u); /* 0x1001777B: push 0x15180 */
    { uint32_t _sa = edx, _sb = edi, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10017780: sbb edx, edi */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edx); /* 0x10017782: push edx */
    PUSH32(esp, eax); /* 0x10017783: push eax */
    RECOMP_CALL(sub_10015B8C); /* 0x10017784: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x14)); /* 0x10017789: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1001778C: add ebx, eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = esi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1001778E: adc esi, edx */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10017790: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10017792: inc edi */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x10017793: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100177A5; /* 0x10017795: jg 0x100177a5 */
L_10017797:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10056A21; /* 0x10017797: jl 0x10056a21 */
L_1001779D:
    /* test ebx, ebx */ /* 0x1001779D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_10056A21; /* 0x1001779F: jb 0x10056a21 */
L_100177A5:
    ecx = MEM32(ebp + (-0x8)); /* 0x100177A5: mov ecx, dword ptr [ebp - 8] */
    eax = ecx; /* 0x100177A8: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x100177AA: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10056A64; /* 0x100177AF: js 0x10056a64 */
L_100177B5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10056A6E; /* 0x100177B5: je 0x10056a6e */
L_100177BB:
    eax = ecx + 0x76C; /* 0x100177BB: lea eax, [ecx + 0x76c] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100177C1: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x10)); /* 0x100177C2: idiv dword ptr [ebp - 0x10] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x100177C5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056A7C; /* 0x100177C7: je 0x10056a7c */
L_100177CD:
    edi = MEM32(ebp + 0x8); /* 0x100177CD: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x100177D0: push 0 */
    PUSH32(esp, 0x00015180u); /* 0x100177D2: push 0x15180 */
    PUSH32(esp, esi); /* 0x100177D7: push esi */
    PUSH32(esp, ebx); /* 0x100177D8: push ebx */
    MEM32(edi + 0x14) = ecx; /* 0x100177D9: mov dword ptr [edi + 0x14], ecx */
    RECOMP_CALL(sub_1001767D); /* 0x100177DC: call 0x1001767d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100177E1: push -1 */
    MEM32(edi + 0x1C) = eax; /* 0x100177E3: mov dword ptr [edi + 0x1c], eax */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100177E6: cdq  */
    PUSH32(esp, 0xFFFEAE80u); /* 0x100177E7: push 0xfffeae80 */
    PUSH32(esp, edx); /* 0x100177EC: push edx */
    PUSH32(esp, eax); /* 0x100177ED: push eax */
    RECOMP_CALL(sub_10015B8C); /* 0x100177EE: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100177F3: add ebx, eax */
    _flag_k = FK_ADD;
    ecx = 0x100DFE70u; /* 0x100177F5: mov ecx, 0x100dfe70 */
    { uint32_t _aa = esi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100177FA: adc esi, edx */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x100177FC: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10017807; /* 0x10017800: jne 0x10017807 */
L_10017802:
    ecx = 0x100DFE38u; /* 0x10017802: mov ecx, 0x100dfe38 */
L_10017807:
    edx = MEM32(edi + 0x1C); /* 0x10017807: mov edx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001780A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1001780C: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ecx + 0x4), edx */ /* 0x1001780D: cmp dword ptr [ecx + 4], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10017818; /* 0x10017810: jge 0x10017818 */
L_10017812:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10017812: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ecx + eax * 4), edx */ /* 0x10017813: cmp dword ptr [ecx + eax*4], edx */
    _flag_a = (uint32_t)(MEM32(ecx + eax * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10017812; /* 0x10017816: jl 0x10017812 */
L_10017818:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10017818: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi + 0x10) = eax; /* 0x10017819: mov dword ptr [edi + 0x10], eax */
    PUSH32(esp, 0); /* 0x1001781C: push 0 */
    PUSH32(esp, 0x00015180u); /* 0x1001781E: push 0x15180 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + eax * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx + eax * 4); /* 0x10017823: sub edx, dword ptr [ecx + eax*4] */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x10017826: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edi + 0xC) = edx; /* 0x10017829: mov dword ptr [edi + 0xc], edx */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1001782C: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x1001782F: push dword ptr [eax] */
    RECOMP_CALL(sub_1001767D); /* 0x10017831: call 0x1001767d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x10017836: push 7 */
    ecx = POP32_VAL(esp); /* 0x10017838: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x10017839: add eax, 4 */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1001783C: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1001783D: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0); /* 0x1001783F: push 0 */
    PUSH32(esp, 0xE10u); /* 0x10017841: push 0xe10 */
    PUSH32(esp, esi); /* 0x10017846: push esi */
    PUSH32(esp, ebx); /* 0x10017847: push ebx */
    MEM32(edi + 0x18) = edx; /* 0x10017848: mov dword ptr [edi + 0x18], edx */
    RECOMP_CALL(sub_1001767D); /* 0x1001784B: call 0x1001767d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10017850: push -1 */
    MEM32(edi + 0x8) = eax; /* 0x10017852: mov dword ptr [edi + 8], eax */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10017855: cdq  */
    PUSH32(esp, 0xFFFFF1F0u); /* 0x10017856: push 0xfffff1f0 */
    PUSH32(esp, edx); /* 0x1001785B: push edx */
    PUSH32(esp, eax); /* 0x1001785C: push eax */
    RECOMP_CALL(sub_10015B8C); /* 0x1001785D: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x10017862: add ebx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x10017864: push 0 */
    PUSH32(esp, 0x3Cu); /* 0x10017866: push 0x3c */
    { uint32_t _aa = esi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10017868: adc esi, edx */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, esi); /* 0x1001786A: push esi */
    PUSH32(esp, ebx); /* 0x1001786B: push ebx */
    RECOMP_CALL(sub_1001767D); /* 0x1001786C: call 0x1001767d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x20) = MEM32(edi + 0x20) & 0; /* 0x10017871: and dword ptr [edi + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x10017875: mov dword ptr [edi + 4], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3Cu); /* 0x10017878: imul eax, eax, 0x3c */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1001787B: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001787D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = ebx; /* 0x1001787F: mov dword ptr [edi], ebx */
    edi = POP32_VAL(esp); /* 0x10017881: pop edi */
L_10017882:
    ebx = POP32_VAL(esp); /* 0x10017882: pop ebx */
L_10017883:
    esi = POP32_VAL(esp); /* 0x10017883: pop esi */
    esp = ebp; /* 0x10017884: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10017886: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017887: ret  */
L_100569DC:
    RECOMP_CALL(sub_1001177D); /* 0x100569DC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100569E1: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100569E3: pop esi */
    MEM32(eax) = esi; /* 0x100569E4: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100569E6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100569EB: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10017883; /* 0x100569ED: jmp 0x10017883 */
L_100569F2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_L, _cf)) goto L_10056A10; /* 0x100569F2: jl 0x10056a10 */
L_100569F4:
    /* cmp ebx, 0xFFFF5740u */ /* 0x100569F4: cmp ebx, 0xffff5740 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFF5740u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_10017708; /* 0x100569FA: jae 0x10017708 */
L_10056A00:
    goto L_10056A10; /* 0x10056A00: jmp 0x10056a10 */
L_10056A02:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_10056A10; /* 0x10056A02: jg 0x10056a10 */
L_10056A04:
    /* cmp ebx, 0x934126CFu */ /* 0x10056A04: cmp ebx, 0x934126cf */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x934126CFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_10017713; /* 0x10056A0A: jbe 0x10017713 */
L_10056A10:
    RECOMP_CALL(sub_1001177D); /* 0x10056A10: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10056A15: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10056A17: pop esi */
    MEM32(eax) = esi; /* 0x10056A18: mov dword ptr [eax], esi */
    eax = esi; /* 0x10056A1A: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10017882; /* 0x10056A1C: jmp 0x10017882 */
L_10056A21:
    ecx = MEM32(ebp + (-0x18)); /* 0x10056A21: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x01E13380u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x01E13380u; /* 0x10056A24: add ebx, 0x1e13380 */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x10056A2A: mov eax, ecx */
    { uint32_t _aa = esi, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10056A2C: adc esi, 0 */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x10056A2F: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10056A3B; /* 0x10056A34: jns 0x10056a3b */
L_10056A36:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10056A36: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x10056A37: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10056A3A: inc eax */
    _flag_k = FK_INC;
L_10056A3B:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10056A47; /* 0x10056A3B: jne 0x10056a47 */
L_10056A3D:
    eax = ecx; /* 0x10056A3D: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056A3F: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0xC)); /* 0x10056A40: idiv dword ptr [ebp - 0xc] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x10056A43: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056A59; /* 0x10056A45: jne 0x10056a59 */
L_10056A47:
    eax = ecx + 0x76C; /* 0x10056A47: lea eax, [ecx + 0x76c] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056A4D: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x10)); /* 0x10056A4E: idiv dword ptr [ebp - 0x10] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x10056A51: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100177CD; /* 0x10056A53: jne 0x100177cd */
L_10056A59:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00015180u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x00015180u; /* 0x10056A59: add ebx, 0x15180 */
    _flag_k = FK_ADD;
    { uint32_t _aa = esi, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10056A5F: adc esi, 0 */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10056A7C; /* 0x10056A62: jmp 0x10056a7c */
L_10056A64:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10056A64: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x10056A65: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10056A68: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_100177B5; /* 0x10056A69: jmp 0x100177b5 */
L_10056A6E:
    eax = ecx; /* 0x10056A6E: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056A70: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0xC)); /* 0x10056A71: idiv dword ptr [ebp - 0xc] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x10056A74: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100177BB; /* 0x10056A76: je 0x100177bb */
L_10056A7C:
    MEM32(ebp + (-0x4)) = edi; /* 0x10056A7C: mov dword ptr [ebp - 4], edi */
    RECOMP_BACKEDGE();
    goto L_100177CD; /* 0x10056A7F: jmp 0x100177cd */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10017888(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10017888u);

L_10017888:
    PUSH32(esp, ebp); /* 0x10017888: push ebp */
    ebp = esp; /* 0x10017889: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1001788B: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1001788E: push ebx */
    PUSH32(esp, esi); /* 0x1001788F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10017890: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10017892: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10017893: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x10017896: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x10017899: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1001789C: mov dword ptr [ebp - 4], ebx */
    /* test edi, edi */ /* 0x1001789F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056A84; /* 0x100178A1: je 0x10056a84 */
L_100178A7:
    PUSH32(esp, 0x24u); /* 0x100178A7: push 0x24 */
    PUSH32(esp, 0xFFu); /* 0x100178A9: push 0xff */
    PUSH32(esp, edi); /* 0x100178AE: push edi */
    RECOMP_CALL(sub_10011533); /* 0x100178AF: call 0x10011533 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x100178B4: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100178B7: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x100178BA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056A84; /* 0x100178BC: je 0x10056a84 */
L_100178C2:
    /* cmp MEM32(esi + 0x4), ebx */ /* 0x100178C2: cmp dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100178D5; /* 0x100178C5: jg 0x100178d5 */
L_100178C7:
    if (CMP_L(_flag_a, _flag_b)) goto L_10056A9A; /* 0x100178C7: jl 0x10056a9a */
L_100178CD:
    /* cmp MEM32(esi), ebx */ /* 0x100178CD: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10056A9A; /* 0x100178CF: jb 0x10056a9a */
L_100178D5:
    PUSH32(esp, 7); /* 0x100178D5: push 7 */
    eax = POP32_VAL(esp); /* 0x100178D7: pop eax */
    /* cmp MEM32(esi + 0x4), eax */ /* 0x100178D8: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10056AA6; /* 0x100178DB: jge 0x10056aa6 */
L_100178E1:
    RECOMP_CALL(sub_10015B4C); /* 0x100178E1: call 0x10015b4c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x100178E6: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100178E9: push eax */
    RECOMP_CALL(sub_10015B1A); /* 0x100178EA: call 0x10015b1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100178EF: pop ecx */
    /* test eax, eax */ /* 0x100178F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056C02; /* 0x100178F2: jne 0x10056c02 */
L_100178F8:
    eax = ebp + (-0xC); /* 0x100178F8: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x100178FB: push eax */
    RECOMP_CALL(sub_10015B33); /* 0x100178FC: call 0x10015b33 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10017901: pop ecx */
    /* test eax, eax */ /* 0x10017902: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056C02; /* 0x10017904: jne 0x10056c02 */
L_1001790A:
    eax = ebp + (-0x4); /* 0x1001790A: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1001790D: push eax */
    RECOMP_CALL(sub_10015B01); /* 0x1001790E: call 0x10015b01 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10017913: pop ecx */
    /* test eax, eax */ /* 0x10017914: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10056C02; /* 0x10017916: jne 0x10056c02 */
L_1001791C:
    ebx = MEM32(esi + 0x4); /* 0x1001791C: mov ebx, dword ptr [esi + 4] */
    ecx = MEM32(esi); /* 0x1001791F: mov ecx, dword ptr [esi] */
    /* test ebx, ebx */ /* 0x10017921: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10017987; /* 0x10017923: jl 0x10017987 */
L_10017925:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001792F; /* 0x10017925: jg 0x1001792f */
L_10017927:
    /* cmp ecx, 0x0003F480u */ /* 0x10017927: cmp ecx, 0x3f480 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x0003F480u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10017987; /* 0x1001792D: jbe 0x10017987 */
L_1001792F:
    eax = MEM32(ebp + (-0x4)); /* 0x1001792F: mov eax, dword ptr [ebp - 4] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10017932: cdq  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x10017933: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = ebp + (-0x14); /* 0x10017935: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x10017938: push eax */
    { uint32_t _sa = ebx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10017939: sbb ebx, edx */
      ebx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x14)) = ecx; /* 0x1001793B: mov dword ptr [ebp - 0x14], ecx */
    PUSH32(esp, edi); /* 0x1001793E: push edi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1001793F: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_100176C5); /* 0x10017942: call 0x100176c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10017947: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10017948: pop ecx */
    /* test eax, eax */ /* 0x10017949: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10017980; /* 0x1001794B: jne 0x10017980 */
L_1001794D:
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x1001794D: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1001797E; /* 0x10017950: je 0x1001797e */
L_10017952:
    PUSH32(esp, edi); /* 0x10017952: push edi */
    RECOMP_CALL(sub_10015BB2); /* 0x10017953: call 0x10015bb2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10017958: pop ecx */
    /* test eax, eax */ /* 0x10017959: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1001797E; /* 0x1001795B: je 0x1001797e */
L_1001795D:
    eax = MEM32(ebp + (-0xC)); /* 0x1001795D: mov eax, dword ptr [ebp - 0xc] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10017960: cdq  */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - eax; /* 0x10017961: sub dword ptr [ebp - 0x14], eax */
    _flag_k = FK_CMP;
    eax = ebp + (-0x14); /* 0x10017964: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x10017967: push eax */
    { uint32_t _sa = MEM32(ebp + (-0x10)), _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10017968: sbb dword ptr [ebp - 0x10], edx */
      MEM32(ebp + (-0x10)) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edi); /* 0x1001796B: push edi */
    RECOMP_CALL(sub_100176C5); /* 0x1001796C: call 0x100176c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10017971: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10017972: pop ecx */
    /* test eax, eax */ /* 0x10017973: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10017980; /* 0x10017975: jne 0x10017980 */
L_10017977:
    MEM32(edi + 0x20) = 1; /* 0x10017977: mov dword ptr [edi + 0x20], 1 */
L_1001797E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1001797E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10017980:
    edi = POP32_VAL(esp); /* 0x10017980: pop edi */
    esi = POP32_VAL(esp); /* 0x10017981: pop esi */
    ebx = POP32_VAL(esp); /* 0x10017982: pop ebx */
    esp = ebp; /* 0x10017983: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10017985: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10017986: ret  */
L_10017987:
    PUSH32(esp, esi); /* 0x10017987: push esi */
    PUSH32(esp, edi); /* 0x10017988: push edi */
    RECOMP_CALL(sub_100176C5); /* 0x10017989: call 0x100176c5 */
    RECOMP_FLAGS_IN();
    goto L_10056AB6; /* 0x1001798E: jmp 0x10056ab6 */
L_10056A84:
    RECOMP_CALL(sub_1001177D); /* 0x10056A84: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10056A89: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10056A8B: pop esi */
    MEM32(eax) = esi; /* 0x10056A8C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x10056A8E: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_10056A93:
    eax = esi; /* 0x10056A93: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10017980; /* 0x10056A95: jmp 0x10017980 */
L_10056A9A:
    RECOMP_CALL(sub_1001177D); /* 0x10056A9A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x10056A9F: push 0x16 */
    esi = POP32_VAL(esp); /* 0x10056AA1: pop esi */
    MEM32(eax) = esi; /* 0x10056AA2: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_10056A93; /* 0x10056AA4: jmp 0x10056a93 */
L_10056AA6:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_10056A9A; /* 0x10056AA6: jg 0x10056a9a */
L_10056AA8:
    /* cmp MEM32(esi), 0x93406FFFu */ /* 0x10056AA8: cmp dword ptr [esi], 0x93406fff */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x93406FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_100178E1; /* 0x10056AAE: jbe 0x100178e1 */
L_10056AB4:
    RECOMP_BACKEDGE();
    goto L_10056A9A; /* 0x10056AB4: jmp 0x10056a9a */
L_10056AB6:
    ecx = POP32_VAL(esp); /* 0x10056AB6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10056AB7: pop ecx */
    /* test eax, eax */ /* 0x10056AB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10017980; /* 0x10056ABA: jne 0x10017980 */
L_10056AC0:
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x10056AC0: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10056AF2; /* 0x10056AC3: je 0x10056af2 */
L_10056AC5:
    PUSH32(esp, edi); /* 0x10056AC5: push edi */
    RECOMP_CALL(sub_10015BB2); /* 0x10056AC6: call 0x10015bb2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10056ACB: pop ecx */
    /* test eax, eax */ /* 0x10056ACC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056AF2; /* 0x10056ACE: je 0x10056af2 */
L_10056AD0:
    eax = MEM32(ebp + (-0xC)); /* 0x10056AD0: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x10056AD3: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056AD6: cdq  */
    ecx = eax; /* 0x10056AD7: mov ecx, eax */
    MEM32(edi + 0x20) = 1; /* 0x10056AD9: mov dword ptr [edi + 0x20], 1 */
    eax = MEM32(edi); /* 0x10056AE0: mov eax, dword ptr [edi] */
    esi = edx; /* 0x10056AE2: mov esi, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056AE4: cdq  */
    ebx = eax; /* 0x10056AE5: mov ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x10056AE7: sub ebx, ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = esi, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10056AE9: sbb edx, esi */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + 0x8) = edx; /* 0x10056AEB: mov dword ptr [ebp + 8], edx */
    esi = edx; /* 0x10056AEE: mov esi, edx */
    goto L_10056B01; /* 0x10056AF0: jmp 0x10056b01 */
L_10056AF2:
    eax = MEM32(edi); /* 0x10056AF2: mov eax, dword ptr [edi] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056AF4: cdq  */
    ebx = eax; /* 0x10056AF5: mov ebx, eax */
    esi = edx; /* 0x10056AF7: mov esi, edx */
    eax = MEM32(ebp + (-0x4)); /* 0x10056AF9: mov eax, dword ptr [ebp - 4] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056AFC: cdq  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x10056AFD: sub ebx, eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10056AFF: sbb esi, edx */
      esi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10056B01:
    PUSH32(esp, 0); /* 0x10056B01: push 0 */
    PUSH32(esp, 0x3Cu); /* 0x10056B03: push 0x3c */
    PUSH32(esp, esi); /* 0x10056B05: push esi */
    PUSH32(esp, ebx); /* 0x10056B06: push ebx */
    RECOMP_CALL(sub_10034DBD); /* 0x10056B07: call 0x10034dbd */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x10056B0C: mov dword ptr [edi], eax */
    /* test eax, eax */ /* 0x10056B0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10056B1D; /* 0x10056B10: jns 0x10056b1d */
L_10056B12:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3Cu; /* 0x10056B12: add eax, 0x3c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFC4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFC4u; /* 0x10056B15: add ebx, -0x3c */
    _flag_k = FK_ADD;
    MEM32(edi) = eax; /* 0x10056B18: mov dword ptr [edi], eax */
    { uint32_t _aa = esi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10056B1A: adc esi, -1 */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10056B1D:
    PUSH32(esp, 0); /* 0x10056B1D: push 0 */
    PUSH32(esp, 0x3Cu); /* 0x10056B1F: push 0x3c */
    PUSH32(esp, esi); /* 0x10056B21: push esi */
    PUSH32(esp, ebx); /* 0x10056B22: push ebx */
    RECOMP_CALL(sub_1001767D); /* 0x10056B23: call 0x1001767d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10056B28: mov esi, eax */
    ebx = edx; /* 0x10056B2A: mov ebx, edx */
    eax = MEM32(edi + 0x4); /* 0x10056B2C: mov eax, dword ptr [edi + 4] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056B2F: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10056B30: add esi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x10056B32: push 0 */
    PUSH32(esp, 0x3Cu); /* 0x10056B34: push 0x3c */
    { uint32_t _aa = ebx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10056B36: adc ebx, edx */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ebx); /* 0x10056B38: push ebx */
    PUSH32(esp, esi); /* 0x10056B39: push esi */
    RECOMP_CALL(sub_10034DBD); /* 0x10056B3A: call 0x10034dbd */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x10056B3F: mov dword ptr [edi + 4], eax */
    /* test eax, eax */ /* 0x10056B42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10056B52; /* 0x10056B44: jns 0x10056b52 */
L_10056B46:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3Cu; /* 0x10056B46: add eax, 0x3c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFC4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFC4u; /* 0x10056B49: add esi, -0x3c */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x10056B4C: mov dword ptr [edi + 4], eax */
    { uint32_t _aa = ebx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10056B4F: adc ebx, -1 */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10056B52:
    PUSH32(esp, 0); /* 0x10056B52: push 0 */
    PUSH32(esp, 0x3Cu); /* 0x10056B54: push 0x3c */
    PUSH32(esp, ebx); /* 0x10056B56: push ebx */
    PUSH32(esp, esi); /* 0x10056B57: push esi */
    RECOMP_CALL(sub_1001767D); /* 0x10056B58: call 0x1001767d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10056B5D: mov esi, eax */
    ebx = edx; /* 0x10056B5F: mov ebx, edx */
    eax = MEM32(edi + 0x8); /* 0x10056B61: mov eax, dword ptr [edi + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056B64: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x10056B65: add esi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x10056B67: push 0 */
    PUSH32(esp, 0x18u); /* 0x10056B69: push 0x18 */
    { uint32_t _aa = ebx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10056B6B: adc ebx, edx */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ebx); /* 0x10056B6D: push ebx */
    PUSH32(esp, esi); /* 0x10056B6E: push esi */
    RECOMP_CALL(sub_10034DBD); /* 0x10056B6F: call 0x10034dbd */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x10056B74: mov dword ptr [edi + 8], eax */
    /* test eax, eax */ /* 0x10056B77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10056B87; /* 0x10056B79: jns 0x10056b87 */
L_10056B7B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x10056B7B: add eax, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFE8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFE8u; /* 0x10056B7E: add esi, -0x18 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x8) = eax; /* 0x10056B81: mov dword ptr [edi + 8], eax */
    { uint32_t _aa = ebx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10056B84: adc ebx, -1 */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_10056B87:
    PUSH32(esp, 0); /* 0x10056B87: push 0 */
    PUSH32(esp, 0x18u); /* 0x10056B89: push 0x18 */
    PUSH32(esp, ebx); /* 0x10056B8B: push ebx */
    PUSH32(esp, esi); /* 0x10056B8C: push esi */
    RECOMP_CALL(sub_1001767D); /* 0x10056B8D: call 0x1001767d */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10056B92: mov ecx, eax */
    /* test edx, edx */ /* 0x10056B94: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10056BC9; /* 0x10056B96: jl 0x10056bc9 */
L_10056B98:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10056B9E; /* 0x10056B98: jg 0x10056b9e */
L_10056B9A:
    /* test ecx, ecx */ /* 0x10056B9A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10056BB7; /* 0x10056B9C: je 0x10056bb7 */
L_10056B9E:
    eax = MEM32(edi + 0x18); /* 0x10056B9E: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x10056BA1: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 7); /* 0x10056BA3: push 7 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056BA5: cdq  */
    esi = POP32_VAL(esp); /* 0x10056BA6: pop esi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x10056BA7: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + ecx; /* 0x10056BA9: add dword ptr [edi + 0xc], ecx */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = edx; /* 0x10056BAC: mov dword ptr [edi + 0x18], edx */
L_10056BAF:
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) + ecx; /* 0x10056BAF: add dword ptr [edi + 0x1c], ecx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1001797E; /* 0x10056BB2: jmp 0x1001797e */
L_10056BB7:
    /* test edx, edx */ /* 0x10056BB7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1001797E; /* 0x10056BB9: jg 0x1001797e */
L_10056BBF:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10056BC9; /* 0x10056BBF: jl 0x10056bc9 */
L_10056BC1:
    /* test ecx, ecx */ /* 0x10056BC1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (1) goto L_1001797E; /* 0x10056BC3: jae 0x1001797e */
L_10056BC9:
    eax = MEM32(edi + 0x18); /* 0x10056BC9: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x10056BCC: add eax, 7 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + ecx; /* 0x10056BCF: add dword ptr [edi + 0xc], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x10056BD2: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 7); /* 0x10056BD4: push 7 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x10056BD6: cdq  */
    esi = POP32_VAL(esp); /* 0x10056BD7: pop esi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x10056BD8: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(edi + 0xC); /* 0x10056BDA: mov eax, dword ptr [edi + 0xc] */
    MEM32(edi + 0x18) = edx; /* 0x10056BDD: mov dword ptr [edi + 0x18], edx */
    /* test eax, eax */ /* 0x10056BE0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10056BAF; /* 0x10056BE2: jg 0x10056baf */
L_10056BE4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Fu; /* 0x10056BE4: add eax, 0x1f */
    _flag_k = FK_ADD;
    MEM32(edi + 0x10) = 0xBu; /* 0x10056BE7: mov dword ptr [edi + 0x10], 0xb */
    MEM32(edi + 0xC) = eax; /* 0x10056BEE: mov dword ptr [edi + 0xc], eax */
    eax = ecx + 0x16D; /* 0x10056BF1: lea eax, [ecx + 0x16d] */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) + eax; /* 0x10056BF7: add dword ptr [edi + 0x1c], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x14) = MEM32(edi + 0x14) - 1; /* 0x10056BFA: dec dword ptr [edi + 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_1001797E; /* 0x10056BFD: jmp 0x1001797e */
L_10056C02:
    PUSH32(esp, ebx); /* 0x10056C02: push ebx */
    PUSH32(esp, ebx); /* 0x10056C03: push ebx */
    PUSH32(esp, ebx); /* 0x10056C04: push ebx */
    PUSH32(esp, ebx); /* 0x10056C05: push ebx */
    PUSH32(esp, ebx); /* 0x10056C06: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x10056C07: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10056C0Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
