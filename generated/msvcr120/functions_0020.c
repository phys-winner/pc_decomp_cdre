#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1007B12D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B12Du);

L_1007B12D:
    PUSH32(esp, ebp); /* 0x1007B12D: push ebp */
    ebp = esp; /* 0x1007B12E: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1007B130: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + 0x2C; /* 0x1007B133: lea eax, [ecx + 0x2c] */
    ecx = MEM32(ecx + 0x3C); /* 0x1007B136: mov ecx, dword ptr [ecx + 0x3c] */
    PUSH32(esp, eax); /* 0x1007B139: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xA8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xA8u; /* 0x1007B13A: add ecx, 0xa8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10023B15); /* 0x1007B140: call 0x10023b15 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1007B145: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B146: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B147(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B147u);

L_1007B147:
    PUSH32(esp, ecx); /* 0x1007B147: push ecx */
    PUSH32(esp, esi); /* 0x1007B148: push esi */
    PUSH32(esp, edi); /* 0x1007B149: push edi */
    edi = ecx; /* 0x1007B14A: mov edi, ecx */
    RECOMP_CALL(sub_10023AF4); /* 0x1007B14C: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x70; /* 0x1007B151: lea ecx, [edi + 0x70] */
    RECOMP_CALL(sub_10023D1E); /* 0x1007B154: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007B159: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x100E44FCu; /* 0x1007B15B: mov ecx, 0x100e44fc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007B160: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1007B161: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007B165: inc eax */
    _flag_k = FK_INC;
    MEM32(edi + 0x40) = eax; /* 0x1007B166: mov dword ptr [edi + 0x40], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007B169: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x1007B16B: mov dword ptr [edi], eax */
    MEM32(edi + 0x4) = eax; /* 0x1007B16D: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0x4C) = eax; /* 0x1007B170: mov dword ptr [edi + 0x4c], eax */
    MEM32(edi + 0x50) = eax; /* 0x1007B173: mov dword ptr [edi + 0x50], eax */
    MEM32(edi + 0x64) = eax; /* 0x1007B176: mov dword ptr [edi + 0x64], eax */
    MEM8(edi + 0x60) = (uint8_t)(LO8(eax)); /* 0x1007B179: mov byte ptr [edi + 0x60], al */
    MEM32(edi + 0x58) = eax; /* 0x1007B17C: mov dword ptr [edi + 0x58], eax */
    MEM32(edi + 0x38) = eax; /* 0x1007B17F: mov dword ptr [edi + 0x38], eax */
    MEM32(edi + 0x48) = eax; /* 0x1007B182: mov dword ptr [edi + 0x48], eax */
    MEM32(edi + 0x70) = eax; /* 0x1007B185: mov dword ptr [edi + 0x70], eax */
    RECOMP_CALL(sub_10023AF4); /* 0x1007B188: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1007B18D: pop edi */
    esi = POP32_VAL(esp); /* 0x1007B18E: pop esi */
    ecx = POP32_VAL(esp); /* 0x1007B18F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B190: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B191(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B191u);

L_1007B191:
    PUSH32(esp, ebp); /* 0x1007B191: push ebp */
    ebp = esp; /* 0x1007B192: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1007B194: push ebx */
    PUSH32(esp, esi); /* 0x1007B195: push esi */
    PUSH32(esp, edi); /* 0x1007B196: push edi */
    esi = ecx; /* 0x1007B197: mov esi, ecx */
    goto L_1007B1F2; /* 0x1007B199: jmp 0x1007b1f2 */
L_1007B19B:
    edi = MEM32(esi); /* 0x1007B19B: mov edi, dword ptr [esi] */
    ecx = MEM32(esi + 0x8); /* 0x1007B19D: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(esi + 0xC); /* 0x1007B1A0: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1007B1A3: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(eax + ecx * 4), 1 */ /* 0x1007B1A5: test byte ptr [eax + ecx*4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B1C0; /* 0x1007B1A9: je 0x1007b1c0 */
L_1007B1AB:
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x1007B1AB: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007B1C0; /* 0x1007B1AF: jne 0x1007b1c0 */
L_1007B1B1:
    eax = MEM32(esi + 0x10); /* 0x1007B1B1: mov eax, dword ptr [esi + 0x10] */
    ecx = eax + ecx * 8; /* 0x1007B1B4: lea ecx, [eax + ecx*8] */
    RECOMP_CALL(sub_1007B33A); /* 0x1007B1B7: call 0x1007b33a */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007B1BC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007B1F9; /* 0x1007B1BE: jne 0x1007b1f9 */
L_1007B1C0:
    eax = MEM32(esi + 0xC); /* 0x1007B1C0: mov eax, dword ptr [esi + 0xc] */
    ecx = edi; /* 0x1007B1C3: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    ecx = ecx & MEM32(esi + 0x8); /* 0x1007B1C5: and ecx, dword ptr [esi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007B1C8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + ecx * 4; /* 0x1007B1CA: lea eax, [eax + ecx*4] */
    { uint32_t _tmp = MEM32(eax); /* 0x1007B1CD: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
    /* test LO8(ebx), 1 */ /* 0x1007B1CF: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B202; /* 0x1007B1D2: je 0x1007b202 */
L_1007B1D4:
    eax = MEM32(esi + 0x10); /* 0x1007B1D4: mov eax, dword ptr [esi + 0x10] */
    ecx = edi; /* 0x1007B1D7: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    ecx = ecx & MEM32(esi + 0x8); /* 0x1007B1D9: and ecx, dword ptr [esi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x1007B1DC: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x1007B1DF: push 0 */
    ecx = eax + ecx * 8; /* 0x1007B1E1: lea ecx, [eax + ecx*8] */
    RECOMP_CALL(sub_1006ACAB); /* 0x1007B1E4: call 0x1006acab */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007B1E9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007B202; /* 0x1007B1EB: jne 0x1007b202 */
L_1007B1ED:
    eax = edi + 0x1; /* 0x1007B1ED: lea eax, [edi + 1] */
    MEM32(esi) = eax; /* 0x1007B1F0: mov dword ptr [esi], eax */
L_1007B1F2:
    eax = MEM32(esi); /* 0x1007B1F2: mov eax, dword ptr [esi] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1007B1F4: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007B19B; /* 0x1007B1F7: jl 0x1007b19b */
L_1007B1F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007B1F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007B1FB:
    edi = POP32_VAL(esp); /* 0x1007B1FB: pop edi */
    esi = POP32_VAL(esp); /* 0x1007B1FC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007B1FD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1007B1FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007B1FF: ret 4 */
L_1007B202:
    /* test ebx, ebx */ /* 0x1007B202: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B20B; /* 0x1007B204: je 0x1007b20b */
L_1007B206:
    ecx = edi + 0x1; /* 0x1007B206: lea ecx, [edi + 1] */
    MEM32(esi) = ecx; /* 0x1007B209: mov dword ptr [esi], ecx */
L_1007B20B:
    eax = ebx; /* 0x1007B20B: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_1007B1FB; /* 0x1007B20D: jmp 0x1007b1fb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007B20F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B20Fu);

L_1007B20F:
    PUSH32(esp, ebp); /* 0x1007B20F: push ebp */
    ebp = esp; /* 0x1007B210: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1007B212: push ebx */
    PUSH32(esp, esi); /* 0x1007B213: push esi */
    PUSH32(esp, edi); /* 0x1007B214: push edi */
    esi = ecx; /* 0x1007B215: mov esi, ecx */
    goto L_1007B27E; /* 0x1007B217: jmp 0x1007b27e */
L_1007B219:
    ecx = MEM32(esi + 0x8); /* 0x1007B219: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(esi + 0x1C); /* 0x1007B21C: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1007B21F: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(eax + ecx * 4), 1 */ /* 0x1007B221: test byte ptr [eax + ecx*4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx * 4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B23C; /* 0x1007B225: je 0x1007b23c */
L_1007B227:
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x1007B227: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007B23C; /* 0x1007B22B: jne 0x1007b23c */
L_1007B22D:
    eax = MEM32(esi + 0x20); /* 0x1007B22D: mov eax, dword ptr [esi + 0x20] */
    ecx = eax + ecx * 8; /* 0x1007B230: lea ecx, [eax + ecx*8] */
    RECOMP_CALL(sub_1007B33A); /* 0x1007B233: call 0x1007b33a */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007B238: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007B297; /* 0x1007B23A: jne 0x1007b297 */
L_1007B23C:
    /* cmp MEM8(esi + 0x14), 0 */ /* 0x1007B23C: cmp byte ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007B24D; /* 0x1007B240: je 0x1007b24d */
L_1007B242:
    eax = MEM32(esi); /* 0x1007B242: mov eax, dword ptr [esi] */
    /* cmp eax, MEM32(esi + 0x18) */ /* 0x1007B244: cmp eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1007B24D; /* 0x1007B247: jl 0x1007b24d */
L_1007B249:
    MEM8(esi + 0x14) = (uint8_t)(0); /* 0x1007B249: mov byte ptr [esi + 0x14], 0 */
L_1007B24D:
    ecx = MEM32(esi + 0x8); /* 0x1007B24D: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007B250: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x1C); /* 0x1007B252: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1007B255: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + ecx * 4; /* 0x1007B257: lea eax, [eax + ecx*4] */
    { uint32_t _tmp = MEM32(eax); /* 0x1007B25A: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
    /* test ebx, ebx */ /* 0x1007B25C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B280; /* 0x1007B25E: je 0x1007b280 */
L_1007B260:
    /* test LO8(ebx), 1 */ /* 0x1007B260: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B28E; /* 0x1007B263: je 0x1007b28e */
L_1007B265:
    ecx = MEM32(esi + 0x8); /* 0x1007B265: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x1007B268: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x20); /* 0x1007B26B: mov eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1007B26E: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x1007B270: push 0 */
    ecx = eax + ecx * 8; /* 0x1007B272: lea ecx, [eax + ecx*8] */
    RECOMP_CALL(sub_1006ACAB); /* 0x1007B275: call 0x1006acab */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007B27A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007B28E; /* 0x1007B27C: jne 0x1007b28e */
L_1007B27E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007B27E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007B280:
    edi = MEM32(esi); /* 0x1007B280: mov edi, dword ptr [esi] */
    eax = edi + 0x1; /* 0x1007B282: lea eax, [edi + 1] */
    { uint32_t _tmp = MEM32(esi); /* 0x1007B285: xchg dword ptr [esi], eax */
      MEM32(esi) = eax;
      eax = _tmp; }
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x1007B287: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007B219; /* 0x1007B28A: jl 0x1007b219 */
L_1007B28C:
    MEM32(esi) = edi; /* 0x1007B28C: mov dword ptr [esi], edi */
L_1007B28E:
    eax = ebx; /* 0x1007B28E: mov eax, ebx */
L_1007B290:
    edi = POP32_VAL(esp); /* 0x1007B290: pop edi */
    esi = POP32_VAL(esp); /* 0x1007B291: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007B292: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1007B293: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1007B294: ret 8 */
L_1007B297:
    MEM32(esi) = edi; /* 0x1007B297: mov dword ptr [esi], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007B299: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1007B290; /* 0x1007B29B: jmp 0x1007b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007B29D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B29Du);

L_1007B29D:
    PUSH32(esp, 0xCu); /* 0x1007B29D: push 0xc */
    eax = 0x100DC548u; /* 0x1007B29F: mov eax, 0x100dc548 */
    RECOMP_CALL(sub_100149A4); /* 0x1007B2A4: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1007B2A9: mov edi, ecx */
    esi = MEM32(edi + 0x10); /* 0x1007B2AB: mov esi, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x18)) = esi; /* 0x1007B2AE: mov dword ptr [ebp - 0x18], esi */
    RECOMP_CALL(sub_10023AF4); /* 0x1007B2B1: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1007B2B6: mov ecx, esi */
    RECOMP_CALL(sub_10023D1E); /* 0x1007B2B8: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1007B2BD: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x4; /* 0x1007B2C1: lea eax, [edi + 4] */
    ebx = MEM32(eax); /* 0x1007B2C4: mov ebx, dword ptr [eax] */
    esi = MEM32(eax); /* 0x1007B2C6: mov esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1007B2C8: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = eax; /* 0x1007B2C9: mov dword ptr [ebp - 0x14], eax */
    /* cmp esi, MEM32(edi) */ /* 0x1007B2CC: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1007B322; /* 0x1007B2CE: jl 0x1007b322 */
L_1007B2D0:
    eax = esi + 0x1; /* 0x1007B2D0: lea eax, [esi + 1] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1007B2D3: mov dword ptr [ebp - 0x10], eax */
    edx = eax; /* 0x1007B2D6: mov edx, eax */
L_1007B2D8:
    ecx = MEM32(edi + 0x8); /* 0x1007B2D8: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(edi + 0x1C); /* 0x1007B2DB: mov eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1007B2DE: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + ecx * 4); /* 0x1007B2E0: mov eax, dword ptr [eax + ecx*4] */
    /* test eax, eax */ /* 0x1007B2E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B316; /* 0x1007B2E5: je 0x1007b316 */
L_1007B2E7:
    edx = MEM32(ebp + 0xC); /* 0x1007B2E7: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x8); /* 0x1007B2EA: mov ecx, dword ptr [eax + 8] */
    /* cmp ecx, MEM32(edx) */ /* 0x1007B2ED: cmp ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x10)); /* 0x1007B2EF: mov edx, dword ptr [ebp - 0x10] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007B316; /* 0x1007B2F2: jne 0x1007b316 */
L_1007B2F4:
    edx = MEM32(ebp + 0xC); /* 0x1007B2F4: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1007B2F7: push eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) + 1; /* 0x1007B2F8: inc dword ptr [edx + 4] */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_100788A3); /* 0x1007B2FB: call 0x100788a3 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1007B300: mov edx, dword ptr [ebp - 0x10] */
    /* cmp edx, ebx */ /* 0x1007B303: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007B30A; /* 0x1007B305: jne 0x1007b30a */
L_1007B307:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1007B307: dec ebx */
    _flag_k = FK_DEC;
    goto L_1007B316; /* 0x1007B308: jmp 0x1007b316 */
L_1007B30A:
    ecx = MEM32(edi + 0x8); /* 0x1007B30A: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(edi + 0x1C); /* 0x1007B30D: mov eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x1007B310: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + ecx * 4) = MEM32(eax + ecx * 4) & 0; /* 0x1007B312: and dword ptr [eax + ecx*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007B316:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1007B316: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1007B317: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = edx; /* 0x1007B318: mov dword ptr [ebp - 0x10], edx */
    /* cmp esi, MEM32(edi) */ /* 0x1007B31B: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1007B2D8; /* 0x1007B31D: jge 0x1007b2d8 */
L_1007B31F:
    eax = MEM32(ebp + (-0x14)); /* 0x1007B31F: mov eax, dword ptr [ebp - 0x14] */
L_1007B322:
    { uint32_t _tmp = MEM32(eax); /* 0x1007B322: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
    eax = MEM32(ebp + (-0x18)); /* 0x1007B324: mov eax, dword ptr [ebp - 0x18] */
    MEM32(eax) = 0; /* 0x1007B327: mov dword ptr [eax], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x1007B32D: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100149D7); /* 0x1007B332: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1007B337: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1007B33A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B33Au);

L_1007B33A:
    PUSH32(esp, ebx); /* 0x1007B33A: push ebx */
    PUSH32(esp, esi); /* 0x1007B33B: push esi */
    PUSH32(esp, edi); /* 0x1007B33C: push edi */
    edi = ecx; /* 0x1007B33D: mov edi, ecx */
    RECOMP_CALL(sub_10023AF4); /* 0x1007B33F: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007B344: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B34D; /* 0x1007B346: je 0x1007b34d */
L_1007B348:
    esi = eax + (-0x4); /* 0x1007B348: lea esi, [eax - 4] */
    goto L_1007B34F; /* 0x1007B34B: jmp 0x1007b34f */
L_1007B34D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007B34D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007B34F:
    ecx = MEM32(edi); /* 0x1007B34F: mov ecx, dword ptr [edi] */
    eax = ecx + 0x4; /* 0x1007B351: lea eax, [ecx + 4] */
    ecx = MEM32(ecx); /* 0x1007B354: mov ecx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1007B356: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x3Cu; /* 0x1007B357: add ecx, 0x3c */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10068C05); /* 0x1007B35A: call 0x10068c05 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007B35F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B388; /* 0x1007B361: je 0x1007b388 */
L_1007B363:
    eax = MEM32(esi + 0xA0); /* 0x1007B363: mov eax, dword ptr [esi + 0xa0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007B369: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007B36B: inc ebx */
    _flag_k = FK_INC;
    ecx = MEM32(eax + 0x90); /* 0x1007B36C: mov ecx, dword ptr [eax + 0x90] */
    esi = ecx; /* 0x1007B372: mov esi, ecx */
    eax = MEM32(edi); /* 0x1007B374: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x1007B376: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x1007B379: shr esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 5u; /* 0x1007B379: shr esi, 5 */
    edx = MEM32(eax + 0x8); /* 0x1007B37C: mov edx, dword ptr [eax + 8] */
    eax = ebx; /* 0x1007B37F: mov eax, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1007B381: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1007B381: shl eax, cl */
    /* test MEM32(edx + esi * 4), eax */ /* 0x1007B383: test dword ptr [edx + esi*4], eax */
    _flag_a = (uint32_t)(MEM32(edx + esi * 4)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B38A; /* 0x1007B386: je 0x1007b38a */
L_1007B388:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007B388: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007B38A:
    edi = POP32_VAL(esp); /* 0x1007B38A: pop edi */
    esi = POP32_VAL(esp); /* 0x1007B38B: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x1007B38C: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x1007B38E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B38F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B390u);

L_1007B390:
    PUSH32(esp, MEM32(0x100E0D54)); /* 0x1007B390: push dword ptr [0x100e0d54] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x1007B396: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B39C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B39D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B39Du);

L_1007B39D:
    PUSH32(esp, 0); /* 0x1007B39D: push 0 */
    RECOMP_CALL(sub_10031770); /* 0x1007B39F: call 0x10031770 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007B3A4: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B3A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B3A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B3A6u);

L_1007B3A6:
    PUSH32(esp, ebp); /* 0x1007B3A6: push ebp */
    ebp = esp; /* 0x1007B3A7: mov ebp, esp */
    PUSH32(esp, MEM32(0x100E0D54)); /* 0x1007B3A9: push dword ptr [0x100e0d54] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x1007B3AF: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007B3B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B3C8; /* 0x1007B3B7: je 0x1007b3c8 */
L_1007B3B9:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007B3B9: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x1007B3BC: call eax */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007B3BE: pop ecx */
    /* test eax, eax */ /* 0x1007B3BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B3C8; /* 0x1007B3C1: je 0x1007b3c8 */
L_1007B3C3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007B3C3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007B3C5: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1007B3C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B3C7: ret  */
L_1007B3C8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007B3C8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007B3CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B3CB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B3CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B3CCu);

L_1007B3CC:
    PUSH32(esp, 0); /* 0x1007B3CC: push 0 */
    RECOMP_CALL(sub_10031770); /* 0x1007B3CE: call 0x10031770 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007B3D3: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007B3D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B3D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B3D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B3D7u);

L_1007B3D7:
    PUSH32(esp, ebp); /* 0x1007B3D7: push ebp */
    ebp = esp; /* 0x1007B3D8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1007B3DA: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1007B3DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1007B402; /* 0x1007B3DF: js 0x1007b402 */
L_1007B3E1:
    /* cmp eax, 2 */ /* 0x1007B3E1: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007B3F3; /* 0x1007B3E4: jle 0x1007b3f3 */
L_1007B3E6:
    /* cmp eax, 3 */ /* 0x1007B3E6: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007B402; /* 0x1007B3E9: jne 0x1007b402 */
L_1007B3EB:
    ecx = MEM32(0x100E355C); /* 0x1007B3EB: mov ecx, dword ptr [0x100e355c] */
    goto L_1007B3FE; /* 0x1007B3F1: jmp 0x1007b3fe */
L_1007B3F3:
    ecx = MEM32(0x100E355C); /* 0x1007B3F3: mov ecx, dword ptr [0x100e355c] */
    MEM32(0x100E355C) = eax; /* 0x1007B3F9: mov dword ptr [0x100e355c], eax */
L_1007B3FE:
    eax = ecx; /* 0x1007B3FE: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1007B400: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B401: ret  */
L_1007B402:
    RECOMP_CALL(sub_1001177D); /* 0x1007B402: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007B407: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007B40D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007B412: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007B415: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B416: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B417(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B417u);

L_1007B417:
    PUSH32(esp, 4); /* 0x1007B417: push 4 */
    eax = 0x100DC588u; /* 0x1007B419: mov eax, 0x100dc588 */
    RECOMP_CALL(sub_1001FB2C); /* 0x1007B41E: call 0x1001fb2c */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1007B423: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1007B425: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1007B429: push 0x10 */
    RECOMP_CALL(sub_1000EE11); /* 0x1007B42B: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007B430: pop ecx */
    /* test eax, eax */ /* 0x1007B431: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B44C; /* 0x1007B433: je 0x1007b44c */
L_1007B435:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007B435: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x1007B488u; /* 0x1007B437: mov dword ptr [eax], 0x1007b488 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007B43D: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax + 0x4) = ecx; /* 0x1007B43E: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x1007B441: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1007B444: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0xC) = ecx; /* 0x1007B447: mov dword ptr [eax + 0xc], ecx */
    goto L_1007B451; /* 0x1007B44A: jmp 0x1007b451 */
L_1007B44C:
    ecx = MEM32(ebp + 0x8); /* 0x1007B44C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007B44F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007B451:
    PUSH32(esp, eax); /* 0x1007B451: push eax */
    PUSH32(esp, ecx); /* 0x1007B452: push ecx */
    ecx = esi; /* 0x1007B453: mov ecx, esi */
    RECOMP_CALL(sub_1002D220); /* 0x1007B455: call 0x1002d220 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100149D7); /* 0x1007B45A: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007B45F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007B488(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B488u);

L_1007B488:
    edx = POP32_VAL(esp); /* 0x1007B488: pop edx */
    SET_HI8(ebx, 7); /* 0x1007B489: mov bh, 7 */
    { uint32_t _aa = MEM8(esi + (-0x49)), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007B48B: adc byte ptr [esi - 0x49], cl */
      MEM8(esi + (-0x49)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x1007B48E: pop es */
    { uint32_t _aa = MEM8(ecx + (-0x69EFFCC2)), _ab = HI8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007B48F: adc byte ptr [ecx - 0x69effcc2], dh */
      MEM8(ecx + (-0x69EFFCC2)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    SET_HI8(ebx, 7); /* 0x1007B495: mov bh, 7 */
    { uint32_t _aa = MEM8(ebp + (-0x75)), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007B497: adc byte ptr [ebp - 0x75], dl */
      MEM8(ebp + (-0x75)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* in: no port I/O under Win32 */ /* 0x1007B49A: in al, dx */
    PUSH32(esp, ecx); /* 0x1007B49B: push ecx */
    PUSH32(esp, ecx); /* 0x1007B49C: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1007B49D: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1007B4A1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1007B4A5: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007B4A6: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1007B4A9: mov esi, ecx */
    ecx = ebp + (-0x8); /* 0x1007B4AB: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1007B417); /* 0x1007B4AE: call 0x1007b417 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x1007B4B3: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ebp + (-0x4)); /* 0x1007B4B6: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0x4) = eax; /* 0x1007B4B9: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1007B4BC: mov eax, dword ptr [ebp - 8] */
    MEM32(esi) = eax; /* 0x1007B4BF: mov dword ptr [esi], eax */
    esi = POP32_VAL(esp); /* 0x1007B4C1: pop esi */
    /* test ecx, ecx */ /* 0x1007B4C2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B4CB; /* 0x1007B4C4: je 0x1007b4cb */
L_1007B4C6:
    RECOMP_CALL(sub_10033EE4); /* 0x1007B4C6: call 0x10033ee4 */
    RECOMP_FLAGS_IN();
L_1007B4CB:
    esp = ebp; /* 0x1007B4CB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007B4CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007B4CE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007B498(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B498u);

L_1007B498:
    PUSH32(esp, ebp); /* 0x1007B498: push ebp */
    ebp = esp; /* 0x1007B499: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007B49B: push ecx */
    PUSH32(esp, ecx); /* 0x1007B49C: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1007B49D: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1007B4A1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1007B4A5: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007B4A6: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1007B4A9: mov esi, ecx */
    ecx = ebp + (-0x8); /* 0x1007B4AB: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1007B417); /* 0x1007B4AE: call 0x1007b417 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x1007B4B3: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ebp + (-0x4)); /* 0x1007B4B6: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0x4) = eax; /* 0x1007B4B9: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1007B4BC: mov eax, dword ptr [ebp - 8] */
    MEM32(esi) = eax; /* 0x1007B4BF: mov dword ptr [esi], eax */
    esi = POP32_VAL(esp); /* 0x1007B4C1: pop esi */
    /* test ecx, ecx */ /* 0x1007B4C2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B4CB; /* 0x1007B4C4: je 0x1007b4cb */
L_1007B4C6:
    RECOMP_CALL(sub_10033EE4); /* 0x1007B4C6: call 0x10033ee4 */
    RECOMP_FLAGS_IN();
L_1007B4CB:
    esp = ebp; /* 0x1007B4CB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007B4CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007B4CE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007B557(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B557u);

L_1007B557:
    PUSH32(esp, ebp); /* 0x1007B557: push ebp */
    ebp = esp; /* 0x1007B558: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007B55A: push ecx */
    PUSH32(esp, ecx); /* 0x1007B55B: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1007B55C: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1007B560: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1007B564: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007B565: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1007B568: mov esi, ecx */
    ecx = ebp + (-0x8); /* 0x1007B56A: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002CB5D); /* 0x1007B56D: call 0x1002cb5d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x1007B572: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ebp + (-0x4)); /* 0x1007B575: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0x4) = eax; /* 0x1007B578: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1007B57B: mov eax, dword ptr [ebp - 8] */
    MEM32(esi) = eax; /* 0x1007B57E: mov dword ptr [esi], eax */
    /* test ecx, ecx */ /* 0x1007B580: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B589; /* 0x1007B582: je 0x1007b589 */
L_1007B584:
    RECOMP_CALL(sub_10033EE4); /* 0x1007B584: call 0x10033ee4 */
    RECOMP_FLAGS_IN();
L_1007B589:
    eax = esi; /* 0x1007B589: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007B58B: pop esi */
    esp = ebp; /* 0x1007B58C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007B58E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007B58F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007B592(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B592u);

L_1007B592:
    PUSH32(esp, ebp); /* 0x1007B592: push ebp */
    ebp = esp; /* 0x1007B593: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007B595: push ecx */
    PUSH32(esp, ecx); /* 0x1007B596: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1007B597: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1007B59A: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1007B59E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1007B5A2: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1007B5A3: push dword ptr [eax + 4] */
    esi = ecx; /* 0x1007B5A6: mov esi, ecx */
    ecx = ebp + (-0x8); /* 0x1007B5A8: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(eax)); /* 0x1007B5AB: push dword ptr [eax] */
    RECOMP_CALL(sub_1007B79B); /* 0x1007B5AD: call 0x1007b79b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x1007B5B2: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ebp + (-0x4)); /* 0x1007B5B5: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0x4) = eax; /* 0x1007B5B8: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1007B5BB: mov eax, dword ptr [ebp - 8] */
    MEM32(esi) = eax; /* 0x1007B5BE: mov dword ptr [esi], eax */
    /* test ecx, ecx */ /* 0x1007B5C0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B5C9; /* 0x1007B5C2: je 0x1007b5c9 */
L_1007B5C4:
    RECOMP_CALL(sub_10033EE4); /* 0x1007B5C4: call 0x10033ee4 */
    RECOMP_FLAGS_IN();
L_1007B5C9:
    eax = esi; /* 0x1007B5C9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007B5CB: pop esi */
    esp = ebp; /* 0x1007B5CC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007B5CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007B5CF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007B5D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B5D2u);

L_1007B5D2:
    PUSH32(esp, ebp); /* 0x1007B5D2: push ebp */
    ebp = esp; /* 0x1007B5D3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1007B5D5: push esi */
    esi = ecx; /* 0x1007B5D6: mov esi, ecx */
    ecx = MEM32(esi + 0x4); /* 0x1007B5D8: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x1007B5DB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B5E4; /* 0x1007B5DD: je 0x1007b5e4 */
L_1007B5DF:
    RECOMP_CALL(sub_10033EE4); /* 0x1007B5DF: call 0x10033ee4 */
    RECOMP_FLAGS_IN();
L_1007B5E4:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1007B5E4: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B5F1; /* 0x1007B5E8: je 0x1007b5f1 */
L_1007B5EA:
    PUSH32(esp, esi); /* 0x1007B5EA: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007B5EB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007B5F0: pop ecx */
L_1007B5F1:
    eax = esi; /* 0x1007B5F1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007B5F3: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007B5F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007B5F5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007B649(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B649u);

L_1007B649:
    PUSH32(esp, 0x1Cu); /* 0x1007B649: push 0x1c */
    eax = 0x100DC6EBu; /* 0x1007B64B: mov eax, 0x100dc6eb */
    RECOMP_CALL(sub_1001FB2C); /* 0x1007B650: call 0x1001fb2c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007B655: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1007B657: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edi; /* 0x1007B659: mov dword ptr [ebp - 0x14], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007B65C: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1007B65D: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_1000F750); /* 0x1007B660: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x88), edi */ /* 0x1007B665: cmp dword ptr [eax + 0x88], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x88)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007B740; /* 0x1007B66B: je 0x1007b740 */
L_1007B671:
    RECOMP_CALL(sub_1000F750); /* 0x1007B671: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x90), edi */ /* 0x1007B676: cmp dword ptr [eax + 0x90], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x90)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007B740; /* 0x1007B67C: jne 0x1007b740 */
L_1007B682:
    RECOMP_CALL(sub_1000F750); /* 0x1007B682: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x88); /* 0x1007B687: mov eax, dword ptr [eax + 0x88] */
    /* cmp MEM32(eax), 0xE0434F4Du */ /* 0x1007B68D: cmp dword ptr [eax], 0xe0434f4d */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE0434F4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007B740; /* 0x1007B693: je 0x1007b740 */
L_1007B699:
    RECOMP_CALL(sub_1000F750); /* 0x1007B699: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x88); /* 0x1007B69E: mov eax, dword ptr [eax + 0x88] */
    /* cmp MEM32(eax), 0xE0434352u */ /* 0x1007B6A4: cmp dword ptr [eax], 0xe0434352 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xE0434352u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007B740; /* 0x1007B6AA: je 0x1007b740 */
L_1007B6B0:
    PUSH32(esp, 0x54u); /* 0x1007B6B0: push 0x54 */
    RECOMP_CALL(sub_1000EE11); /* 0x1007B6B2: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007B6B7: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1007B6B9: pop ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1007B6BA: mov dword ptr [ebp - 0x18], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1007B6BD: mov byte ptr [ebp - 4], 2 */
    /* test esi, esi */ /* 0x1007B6C1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B6DA; /* 0x1007B6C3: je 0x1007b6da */
L_1007B6C5:
    PUSH32(esp, ebx); /* 0x1007B6C5: push ebx */
    RECOMP_CALL(sub_1000F750); /* 0x1007B6C6: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1007B6CB: mov ecx, esi */
    PUSH32(esp, MEM32(eax + 0x88)); /* 0x1007B6CD: push dword ptr [eax + 0x88] */
    RECOMP_CALL(sub_1002D049); /* 0x1007B6D3: call 0x1002d049 */
    RECOMP_FLAGS_IN();
    goto L_1007B6DC; /* 0x1007B6D8: jmp 0x1007b6dc */
L_1007B6DA:
    eax = edi; /* 0x1007B6DA: mov eax, edi */
L_1007B6DC:
    PUSH32(esp, eax); /* 0x1007B6DC: push eax */
    ecx = ebp + (-0x1C); /* 0x1007B6DD: lea ecx, [ebp - 0x1c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1007B6E0: mov byte ptr [ebp - 4], bl */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1007B6E3: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x18)) = edi; /* 0x1007B6E6: mov dword ptr [ebp - 0x18], edi */
    RECOMP_CALL(sub_1007B417); /* 0x1007B6E9: call 0x1007b417 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1007B6EE: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0x1C); /* 0x1007B6F1: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1007B6F4: push eax */
    ecx = esi; /* 0x1007B6F5: mov ecx, esi */
    MEM32(esi) = edi; /* 0x1007B6F7: mov dword ptr [esi], edi */
    MEM32(esi + 0x4) = edi; /* 0x1007B6F9: mov dword ptr [esi + 4], edi */
    RECOMP_CALL(sub_1002CB5D); /* 0x1007B6FC: call 0x1002cb5d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x1007B701: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1007B704: mov dword ptr [ebp - 0x14], ebx */
    /* test ecx, ecx */ /* 0x1007B707: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B710; /* 0x1007B709: je 0x1007b710 */
L_1007B70B:
    RECOMP_CALL(sub_10033EE4); /* 0x1007B70B: call 0x10033ee4 */
    RECOMP_FLAGS_IN();
L_1007B710:
    eax = esi; /* 0x1007B710: mov eax, esi */
    goto L_1007B748; /* 0x1007B712: jmp 0x1007b748 */
L_1007B740:
    eax = MEM32(ebp + 0x8); /* 0x1007B740: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edi; /* 0x1007B743: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = edi; /* 0x1007B745: mov dword ptr [eax + 4], edi */
L_1007B748:
    RECOMP_CALL(sub_100149D7); /* 0x1007B748: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B74D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B772(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B772u);

L_1007B772:
    PUSH32(esp, ebp); /* 0x1007B772: push ebp */
    ebp = esp; /* 0x1007B773: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1007B775: push esi */
    esi = ecx; /* 0x1007B776: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1007B778: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x100E29F0u); /* 0x1007B77B: push 0x100e29f0 */
    RECOMP_CALL(sub_1009DE16); /* 0x1007B780: call 0x1009de16 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x1007B785: movzx eax, al */
    ecx = esi + 0x10; /* 0x1007B788: lea ecx, [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007B78B: neg eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1007B78D: pop esi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007B78E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x1007B790: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007B792: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007B793: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007B79B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B79Bu);

L_1007B79B:
    PUSH32(esp, ebp); /* 0x1007B79B: push ebp */
    ebp = esp; /* 0x1007B79C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1007B79E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007B79F: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1007B7A2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B7B0; /* 0x1007B7A4: je 0x1007b7b0 */
L_1007B7A6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007B7A6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x4; /* 0x1007B7A8: lea eax, [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007B7AB: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x1007B7AC: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
L_1007B7B0:
    PUSH32(esp, esi); /* 0x1007B7B0: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007B7B1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002D220); /* 0x1007B7B4: call 0x1002d220 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1007B7B9: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007B7BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1007B7BB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1007B8D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B8D5u);

L_1007B8D5:
    PUSH32(esp, ebp); /* 0x1007B8D5: push ebp */
    ebp = esp; /* 0x1007B8D6: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007B8D8: push dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1007B8DB: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007B592); /* 0x1007B8DE: call 0x1007b592 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1007B8E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B8E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B8E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B8E5u);

L_1007B8E5:
    PUSH32(esp, ebp); /* 0x1007B8E5: push ebp */
    ebp = esp; /* 0x1007B8E6: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1007B8E8: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1007B8EB: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x1007B8EE: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx); /* 0x1007B8F0: sub eax, dword ptr [ecx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007B8F2: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007B8F4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007B8F6: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1007B8F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B8F8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B8F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B8F9u);

L_1007B8F9:
    PUSH32(esp, ebp); /* 0x1007B8F9: push ebp */
    ebp = esp; /* 0x1007B8FA: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1007B8FC: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1007B8FF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B917; /* 0x1007B901: je 0x1007b917 */
L_1007B903:
    eax = MEM32(ebp + 0xC); /* 0x1007B903: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1007B906: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1007B909: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1007B90D: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x1007B910: push dword ptr [eax] */
    RECOMP_CALL(sub_1007B79B); /* 0x1007B912: call 0x1007b79b */
    RECOMP_FLAGS_IN();
L_1007B917:
    ebp = POP32_VAL(esp); /* 0x1007B917: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B918: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B919(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B919u);

L_1007B919:
    PUSH32(esp, ebp); /* 0x1007B919: push ebp */
    ebp = esp; /* 0x1007B91A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007B91C: push ecx */
    PUSH32(esp, ecx); /* 0x1007B91D: push ecx */
    PUSH32(esp, 1); /* 0x1007B91E: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007B920: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x8); /* 0x1007B923: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007B926: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1007B929: push eax */
    RECOMP_CALL(sub_1002CB83); /* 0x1007B92A: call 0x1002cb83 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1007B92F: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007B932: add esp, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1007B935: push eax */
    RECOMP_CALL(sub_1007B557); /* 0x1007B936: call 0x1007b557 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1007B93B: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1007B93E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B947; /* 0x1007B940: je 0x1007b947 */
L_1007B942:
    RECOMP_CALL(sub_10033EE4); /* 0x1007B942: call 0x10033ee4 */
    RECOMP_FLAGS_IN();
L_1007B947:
    esp = ebp; /* 0x1007B947: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007B949: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B94A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B94B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B94Bu);

L_1007B94B:
    PUSH32(esp, ebp); /* 0x1007B94B: push ebp */
    ebp = esp; /* 0x1007B94C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1007B94E: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1007B951: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B95C; /* 0x1007B953: je 0x1007b95c */
L_1007B955:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1007B955: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1007B958: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007B95C:
    ebp = POP32_VAL(esp); /* 0x1007B95C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B95D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B95E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B95Eu);

L_1007B95E:
    PUSH32(esp, 8); /* 0x1007B95E: push 8 */
    eax = 0x100DC78Cu; /* 0x1007B960: mov eax, 0x100dc78c */
    RECOMP_CALL(sub_100149A4); /* 0x1007B965: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1007B96A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1007B96D: push eax */
    RECOMP_CALL(sub_1007B649); /* 0x1007B96E: call 0x1007b649 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1007B973: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x14); /* 0x1007B977: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1007B97A: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007B97B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007B8F9); /* 0x1007B97E: call 0x1007b8f9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1007B983: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007B987: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x10)); /* 0x1007B98A: mov ecx, dword ptr [ebp - 0x10] */
    /* test ecx, ecx */ /* 0x1007B98D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B996; /* 0x1007B98F: je 0x1007b996 */
L_1007B991:
    RECOMP_CALL(sub_10033EE4); /* 0x1007B991: call 0x10033ee4 */
    RECOMP_FLAGS_IN();
L_1007B996:
    RECOMP_CALL(sub_100149D7); /* 0x1007B996: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B99B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B99C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B99Cu);

L_1007B99C:
    PUSH32(esp, ebp); /* 0x1007B99C: push ebp */
    ebp = esp; /* 0x1007B99D: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1007B99F: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1007B9A2: push 0 */
    RECOMP_CALL(sub_1007B5D2); /* 0x1007B9A4: call 0x1007b5d2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1007B9A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B9AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B9AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B9ABu);

    goto L_1007B9AB;
L_1007B7BE:
    PUSH32(esp, ebp); /* 0x1007B7BE: push ebp */
    ebp = esp; /* 0x1007B7BF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x64u; /* 0x1007B7C1: sub esp, 0x64 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007B7C4: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007B7C9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007B7CB: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1007B7CE: push ebx */
    ebx = ecx; /* 0x1007B7CF: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x1007B7D1: push esi */
    PUSH32(esp, edi); /* 0x1007B7D2: push edi */
    /* test ebx, ebx */ /* 0x1007B7D3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B8A7; /* 0x1007B7D5: je 0x1007b8a7 */
L_1007B7DB:
    PUSH32(esp, 0x14u); /* 0x1007B7DB: push 0x14 */
    ecx = POP32_VAL(esp); /* 0x1007B7DD: pop ecx */
    esi = ebx; /* 0x1007B7DE: mov esi, ebx */
    edi = ebp + (-0x54); /* 0x1007B7E0: lea edi, [ebp - 0x54] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1007B7E3: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edx = MEM32(ebp + (-0x54)); /* 0x1007B7E5: mov edx, dword ptr [ebp - 0x54] */
    eax = MEM32(ebp + (-0x44)); /* 0x1007B7E8: mov eax, dword ptr [ebp - 0x44] */
    /* cmp edx, 0xE06D7363u */ /* 0x1007B7EB: cmp edx, 0xe06d7363 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xE06D7363u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007B879; /* 0x1007B7F1: jne 0x1007b879 */
L_1007B7F7:
    /* cmp eax, 3 */ /* 0x1007B7F7: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007B879; /* 0x1007B7FA: jne 0x1007b879 */
L_1007B7FC:
    ecx = MEM32(ebp + (-0x40)); /* 0x1007B7FC: mov ecx, dword ptr [ebp - 0x40] */
    /* cmp ecx, 0x19930520u */ /* 0x1007B7FF: cmp ecx, 0x19930520 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19930520u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007B81F; /* 0x1007B805: je 0x1007b81f */
L_1007B807:
    /* cmp ecx, 0x19930521u */ /* 0x1007B807: cmp ecx, 0x19930521 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19930521u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007B81F; /* 0x1007B80D: je 0x1007b81f */
L_1007B80F:
    /* cmp ecx, 0x19930522u */ /* 0x1007B80F: cmp ecx, 0x19930522 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19930522u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007B81F; /* 0x1007B815: je 0x1007b81f */
L_1007B817:
    /* cmp ecx, 0x01994000u */ /* 0x1007B817: cmp ecx, 0x1994000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x01994000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007B884; /* 0x1007B81D: jne 0x1007b884 */
L_1007B81F:
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1007B81F: push dword ptr [ebp - 0x38] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x1007B822: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x1007B828: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007B8CF; /* 0x1007B82C: je 0x1007b8cf */
L_1007B832:
    /* test eax, eax */ /* 0x1007B832: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B8CF; /* 0x1007B834: je 0x1007b8cf */
L_1007B83A:
    ecx = MEM32(eax + 0xC); /* 0x1007B83A: mov ecx, dword ptr [eax + 0xc] */
    /* test ecx, ecx */ /* 0x1007B83D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007B8CF; /* 0x1007B83F: je 0x1007b8cf */
L_1007B845:
    /* cmp MEM32(ecx), 0 */ /* 0x1007B845: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007B8CF; /* 0x1007B848: jle 0x1007b8cf */
L_1007B84E:
    MEM32(ebp + (-0x38)) = eax; /* 0x1007B84E: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(eax + 0xC); /* 0x1007B851: mov eax, dword ptr [eax + 0xc] */
    esi = MEM32(eax + 0x4); /* 0x1007B854: mov esi, dword ptr [eax + 4] */
    eax = MEM32(esi + 0x14); /* 0x1007B857: mov eax, dword ptr [esi + 0x14] */
    RECOMP_CALL(sub_10012BBF); /* 0x1007B85A: call 0x10012bbf */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x1007B85F: mov edi, esp */
    ecx = ebx; /* 0x1007B861: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x1007B863: push esi */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1007B864: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x1007B867: push dword ptr [ebp - 0x3c] */
    PUSH32(esp, edi); /* 0x1007B86A: push edi */
    RECOMP_CALL(sub_1002CFF8); /* 0x1007B86B: call 0x1002cff8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x44)); /* 0x1007B870: mov eax, dword ptr [ebp - 0x44] */
    edx = MEM32(ebp + (-0x54)); /* 0x1007B873: mov edx, dword ptr [ebp - 0x54] */
    MEM32(ebp + (-0x3C)) = edi; /* 0x1007B876: mov dword ptr [ebp - 0x3c], edi */
L_1007B879:
    /* cmp eax, 0xFu */ /* 0x1007B879: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007B884; /* 0x1007B87C: jbe 0x1007b884 */
L_1007B87E:
    PUSH32(esp, 0xFu); /* 0x1007B87E: push 0xf */
    eax = POP32_VAL(esp); /* 0x1007B880: pop eax */
    MEM32(ebp + (-0x44)) = eax; /* 0x1007B881: mov dword ptr [ebp - 0x44], eax */
L_1007B884:
    ecx = ebp + (-0x40); /* 0x1007B884: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1007B887: push ecx */
    PUSH32(esp, eax); /* 0x1007B888: push eax */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x1007B889: push dword ptr [ebp - 0x50] */
    PUSH32(esp, edx); /* 0x1007B88C: push edx */
    RECOMP_ICALL(MEM32(0x100E5008)); /* 0x1007B88D: call dword ptr [0x100e5008] */
    RECOMP_FLAGS_IN();
    esp = ebp + (-0x70); /* 0x1007B893: lea esp, [ebp - 0x70] */
    edi = POP32_VAL(esp); /* 0x1007B896: pop edi */
    esi = POP32_VAL(esp); /* 0x1007B897: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007B898: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1007B899: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007B89C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1000F7C6); /* 0x1007B89E: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007B8A3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007B8A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B8A6: ret  */
L_1007B8A7:
    eax = ebp + (-0x58); /* 0x1007B8A7: lea eax, [ebp - 0x58] */
    MEM32(ebp + (-0x58)) = 0x10061788u; /* 0x1007B8AA: mov dword ptr [ebp - 0x58], 0x10061788 */
    PUSH32(esp, eax); /* 0x1007B8B1: push eax */
    ecx = ebp + (-0x64); /* 0x1007B8B2: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_1009DD30); /* 0x1007B8B5: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCDFCu); /* 0x1007B8BA: push 0x100dcdfc */
    eax = ebp + (-0x64); /* 0x1007B8BF: lea eax, [ebp - 0x64] */
    MEM32(ebp + (-0x64)) = 0x1006174Cu; /* 0x1007B8C2: mov dword ptr [ebp - 0x64], 0x1006174c */
    PUSH32(esp, eax); /* 0x1007B8C9: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1007B8CA: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_1007B8CF:
    RECOMP_CALL(sub_1009DC2C); /* 0x1007B8CF: call 0x1009dc2c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007B8D4u, "int3 ");
L_1007B9AB:
    PUSH32(esp, ebp); /* 0x1007B9AB: push ebp */
    ebp = esp; /* 0x1007B9AC: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1007B9AE: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx); /* 0x1007B9B1: mov ecx, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1007B9B3: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1007B7BE; /* 0x1007B9B4: jmp 0x1007b7be */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007B9B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B9B9u);

L_1007B9B9:
    PUSH32(esp, ebp); /* 0x1007B9B9: push ebp */
    ebp = esp; /* 0x1007B9BA: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1007B9BC: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007B9BF: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007B9C0: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(edx + 0x4); /* 0x1007B9C3: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(esi + 0x4); /* 0x1007B9C6: mov eax, dword ptr [esi + 4] */
    MEM32(edx + 0x4) = eax; /* 0x1007B9C9: mov dword ptr [edx + 4], eax */
    MEM32(esi + 0x4) = ecx; /* 0x1007B9CC: mov dword ptr [esi + 4], ecx */
    eax = MEM32(esi); /* 0x1007B9CF: mov eax, dword ptr [esi] */
    ecx = MEM32(edx); /* 0x1007B9D1: mov ecx, dword ptr [edx] */
    MEM32(edx) = eax; /* 0x1007B9D3: mov dword ptr [edx], eax */
    MEM32(esi) = ecx; /* 0x1007B9D5: mov dword ptr [esi], ecx */
    esi = POP32_VAL(esp); /* 0x1007B9D7: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007B9D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B9D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B9DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B9DAu);

L_1007B9DA:
    PUSH32(esp, ebp); /* 0x1007B9DA: push ebp */
    ebp = esp; /* 0x1007B9DB: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1007B9DD: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007B9E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), eax */ /* 0x1007B9E2: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1007B9E4: setne al */
    ebp = POP32_VAL(esp); /* 0x1007B9E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007B9E8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007B9E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007B9E9u);

L_1007B9E9:
    PUSH32(esp, ebp); /* 0x1007B9E9: push ebp */
    ebp = esp; /* 0x1007B9EA: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007B9EC: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1007B9EF: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x100E1444)); _flag_b = (uint32_t)(0);
    MEM32(0x100E1444) = MEM32(0x100E1444) & 0; /* 0x1007B9F5: and dword ptr [0x100e1444], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E3560) = eax; /* 0x1007B9FC: mov dword ptr [0x100e3560], eax */
    ebp = POP32_VAL(esp); /* 0x1007BA01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BA02: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BA03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BA03u);

L_1007BA03:
    PUSH32(esp, ebp); /* 0x1007BA03: push ebp */
    ebp = esp; /* 0x1007BA04: mov ebp, esp */
    /* cmp MEM32(0x100E1444), 0 */ /* 0x1007BA06: cmp dword ptr [0x100e1444], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E1444)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007BA22; /* 0x1007BA0D: jne 0x1007ba22 */
L_1007BA0F:
    PUSH32(esp, MEM32(0x100E3560)); /* 0x1007BA0F: push dword ptr [0x100e3560] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x1007BA15: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007BA1B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007BA22; /* 0x1007BA1D: je 0x1007ba22 */
L_1007BA1F:
    ebp = POP32_VAL(esp); /* 0x1007BA1F: pop ebp */
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_1007BA22:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007BA22: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007BA24: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BA25: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1007BA26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BA26u);

L_1007BA26:
    PUSH32(esp, ebp); /* 0x1007BA26: push ebp */
    ebp = esp; /* 0x1007BA27: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007BA29: push ecx */
    PUSH32(esp, ebx); /* 0x1007BA2A: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007BA2B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1007BA2D: push esi */
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1007BA2E: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007BA49; /* 0x1007BA31: jne 0x1007ba49 */
L_1007BA33:
    RECOMP_CALL(sub_1001177D); /* 0x1007BA33: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1007BA38: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1007BA3A: pop esi */
    MEM32(eax) = esi; /* 0x1007BA3B: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1007BA3D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1007BA42: mov eax, esi */
    goto L_1007BAD2; /* 0x1007BA44: jmp 0x1007bad2 */
L_1007BA49:
    esi = MEM32(ebp + 0xC); /* 0x1007BA49: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1007BA4C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007BA33; /* 0x1007BA4E: je 0x1007ba33 */
L_1007BA50:
    RECOMP_CALL(sub_10014BD1); /* 0x1007BA50: call 0x10014bd1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007BA55: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BA66; /* 0x1007BA57: jne 0x1007ba66 */
L_1007BA59:
    RECOMP_ICALL(MEM32(0x100E5020)); /* 0x1007BA59: call dword ptr [0x100e5020] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007BA5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BA66; /* 0x1007BA61: jne 0x1007ba66 */
L_1007BA63:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007BA63: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007BA65: inc ebx */
    _flag_k = FK_INC;
L_1007BA66:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007BA66: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1007BA68: push eax */
    PUSH32(esp, eax); /* 0x1007BA69: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007BA6A: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007BA6C: push dword ptr [ebp + 8] */
    MEM32(esi) = eax; /* 0x1007BA6F: mov dword ptr [esi], eax */
    PUSH32(esp, eax); /* 0x1007BA71: push eax */
    PUSH32(esp, ebx); /* 0x1007BA72: push ebx */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x1007BA73: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1007BA79: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x1007BA7C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BA91; /* 0x1007BA7E: jne 0x1007ba91 */
L_1007BA80:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007BA80: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007BA86: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007BA87: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
L_1007BA8C:
    ecx = POP32_VAL(esp); /* 0x1007BA8C: pop ecx */
L_1007BA8D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007BA8D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007BAD2; /* 0x1007BA8F: jmp 0x1007bad2 */
L_1007BA91:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1007BA91: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1007BA93: push eax */
    RECOMP_CALL(sub_10012226); /* 0x1007BA94: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1007BA99: mov dword ptr [esi], eax */
    ecx = POP32_VAL(esp); /* 0x1007BA9B: pop ecx */
    /* test eax, eax */ /* 0x1007BA9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007BA8D; /* 0x1007BA9E: je 0x1007ba8d */
L_1007BAA0:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007BAA0: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007BAA3: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007BAA4: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007BAA6: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1007BAA9: push 0 */
    PUSH32(esp, ebx); /* 0x1007BAAB: push ebx */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x1007BAAC: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007BAB2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BACF; /* 0x1007BAB4: jne 0x1007bacf */
L_1007BAB6:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007BAB6: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007BABC: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007BABD: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x1007BAC2: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007BAC4: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1007BAC9: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1007BACC: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1007BA8C; /* 0x1007BACD: jmp 0x1007ba8c */
L_1007BACF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007BACF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007BAD1: inc eax */
    _flag_k = FK_INC;
L_1007BAD2:
    esi = POP32_VAL(esp); /* 0x1007BAD2: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007BAD3: pop ebx */
    esp = ebp; /* 0x1007BAD4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007BAD6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BAD7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BAD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BAD8u);

L_1007BAD8:
    PUSH32(esp, ebp); /* 0x1007BAD8: push ebp */
    ebp = esp; /* 0x1007BAD9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007BADB: push ecx */
    PUSH32(esp, ebx); /* 0x1007BADC: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007BADD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1007BADF: push esi */
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1007BAE0: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007BAFB; /* 0x1007BAE3: jne 0x1007bafb */
L_1007BAE5:
    RECOMP_CALL(sub_1001177D); /* 0x1007BAE5: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1007BAEA: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1007BAEC: pop esi */
    MEM32(eax) = esi; /* 0x1007BAED: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1007BAEF: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1007BAF4: mov eax, esi */
    goto L_1007BB87; /* 0x1007BAF6: jmp 0x1007bb87 */
L_1007BAFB:
    esi = MEM32(ebp + 0xC); /* 0x1007BAFB: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1007BAFE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007BAE5; /* 0x1007BB00: je 0x1007bae5 */
L_1007BB02:
    RECOMP_CALL(sub_10014BD1); /* 0x1007BB02: call 0x10014bd1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007BB07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BB18; /* 0x1007BB09: jne 0x1007bb18 */
L_1007BB0B:
    RECOMP_ICALL(MEM32(0x100E5020)); /* 0x1007BB0B: call dword ptr [0x100e5020] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007BB11: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BB18; /* 0x1007BB13: jne 0x1007bb18 */
L_1007BB15:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007BB15: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007BB17: inc ebx */
    _flag_k = FK_INC;
L_1007BB18:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007BB18: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1007BB1A: push eax */
    PUSH32(esp, eax); /* 0x1007BB1B: push eax */
    PUSH32(esp, eax); /* 0x1007BB1C: push eax */
    PUSH32(esp, eax); /* 0x1007BB1D: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007BB1E: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007BB20: push dword ptr [ebp + 8] */
    MEM32(esi) = eax; /* 0x1007BB23: mov dword ptr [esi], eax */
    PUSH32(esp, eax); /* 0x1007BB25: push eax */
    PUSH32(esp, ebx); /* 0x1007BB26: push ebx */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x1007BB27: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1007BB2D: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x1007BB30: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BB45; /* 0x1007BB32: jne 0x1007bb45 */
L_1007BB34:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007BB34: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007BB3A: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007BB3B: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
L_1007BB40:
    ecx = POP32_VAL(esp); /* 0x1007BB40: pop ecx */
L_1007BB41:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007BB41: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007BB87; /* 0x1007BB43: jmp 0x1007bb87 */
L_1007BB45:
    PUSH32(esp, eax); /* 0x1007BB45: push eax */
    RECOMP_CALL(sub_10012226); /* 0x1007BB46: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1007BB4B: mov dword ptr [esi], eax */
    ecx = POP32_VAL(esp); /* 0x1007BB4D: pop ecx */
    /* test eax, eax */ /* 0x1007BB4E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007BB41; /* 0x1007BB50: je 0x1007bb41 */
L_1007BB52:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007BB52: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1007BB54: push ecx */
    PUSH32(esp, ecx); /* 0x1007BB55: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1007BB56: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007BB59: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007BB5A: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007BB5C: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1007BB5F: push ecx */
    PUSH32(esp, ebx); /* 0x1007BB60: push ebx */
    RECOMP_ICALL(MEM32(0x100E5028)); /* 0x1007BB61: call dword ptr [0x100e5028] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007BB67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BB84; /* 0x1007BB69: jne 0x1007bb84 */
L_1007BB6B:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007BB6B: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007BB71: push eax */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007BB72: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x1007BB77: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007BB79: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1007BB7E: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1007BB81: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1007BB40; /* 0x1007BB82: jmp 0x1007bb40 */
L_1007BB84:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007BB84: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007BB86: inc eax */
    _flag_k = FK_INC;
L_1007BB87:
    esi = POP32_VAL(esp); /* 0x1007BB87: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007BB88: pop ebx */
    esp = ebp; /* 0x1007BB89: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007BB8B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BB8C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BB8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BB8Du);

L_1007BB8D:
    PUSH32(esp, ebp); /* 0x1007BB8D: push ebp */
    ebp = esp; /* 0x1007BB8E: mov ebp, esp */
    RECOMP_CALL(sub_1007BD25); /* 0x1007BB90: call 0x1007bd25 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007BB95: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007BE40); /* 0x1007BB98: call 0x1007be40 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007BB9D: pop ecx */
    PUSH32(esp, 0xFFu); /* 0x1007BB9E: push 0xff */
    RECOMP_CALL(sub_1007BBB8); /* 0x1007BBA3: call 0x1007bbb8 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007BBA8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007BBA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BBA9u);

L_1007BBA9:
    PUSH32(esp, 1); /* 0x1007BBA9: push 1 */
    PUSH32(esp, 1); /* 0x1007BBAB: push 1 */
    PUSH32(esp, 0); /* 0x1007BBAD: push 0 */
    RECOMP_CALL(sub_10034152); /* 0x1007BBAF: call 0x10034152 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007BBB4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BBB7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BBB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BBB8u);

L_1007BBB8:
    PUSH32(esp, ebp); /* 0x1007BBB8: push ebp */
    ebp = esp; /* 0x1007BBB9: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1007BBBB: push 0 */
    PUSH32(esp, 1); /* 0x1007BBBD: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007BBBF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10034152); /* 0x1007BBC2: call 0x10034152 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007BBC7: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007BBCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BBCB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BBCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BBCCu);

L_1007BBCC:
    PUSH32(esp, ebp); /* 0x1007BBCC: push ebp */
    ebp = esp; /* 0x1007BBCD: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1007BBCF: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007BBD2: push esi */
    /* test eax, eax */ /* 0x1007BBD3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BBEA; /* 0x1007BBD5: jne 0x1007bbea */
L_1007BBD7:
    RECOMP_CALL(sub_1001177D); /* 0x1007BBD7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1007BBDC: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1007BBDE: pop esi */
    MEM32(eax) = esi; /* 0x1007BBDF: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x1007BBE1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1007BBE6: mov eax, esi */
    goto L_1007BBF8; /* 0x1007BBE8: jmp 0x1007bbf8 */
L_1007BBEA:
    ecx = MEM32(0x100DF620); /* 0x1007BBEA: mov ecx, dword ptr [0x100df620] */
    /* test ecx, ecx */ /* 0x1007BBF0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007BBD7; /* 0x1007BBF2: je 0x1007bbd7 */
L_1007BBF4:
    MEM32(eax) = ecx; /* 0x1007BBF4: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007BBF6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007BBF8:
    esi = POP32_VAL(esp); /* 0x1007BBF8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007BBF9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BBFA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BBFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BBFBu);

L_1007BBFB:
    eax = 0x100DF60Cu; /* 0x1007BBFB: mov eax, 0x100df60c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BC00: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BC01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC01u);

L_1007BC01:
    eax = 0x100DF610u; /* 0x1007BC01: mov eax, 0x100df610 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BC06: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BC07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC07u);

L_1007BC07:
    eax = 0x100DF62Cu; /* 0x1007BC07: mov eax, 0x100df62c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BC0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BC0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC0Du);

L_1007BC0D:
    RECOMP_CALL(sub_1000F750); /* 0x1007BC0D: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1007BC12: mov edx, eax */
    eax = MEM32(edx + 0x6C); /* 0x1007BC14: mov eax, dword ptr [edx + 0x6c] */
    /* cmp eax, MEM32(0x100DFA84) */ /* 0x1007BC17: cmp eax, dword ptr [0x100dfa84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DFA84));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007BC2F; /* 0x1007BC1D: je 0x1007bc2f */
L_1007BC1F:
    ecx = MEM32(0x100DFDD4); /* 0x1007BC1F: mov ecx, dword ptr [0x100dfdd4] */
    /* test MEM32(edx + 0x70), ecx */ /* 0x1007BC25: test dword ptr [edx + 0x70], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x70)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BC2F; /* 0x1007BC28: jne 0x1007bc2f */
L_1007BC2A:
    RECOMP_CALL(sub_10012C8B); /* 0x1007BC2A: call 0x10012c8b */
    RECOMP_FLAGS_IN();
L_1007BC2F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x74u; /* 0x1007BC2F: add eax, 0x74 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BC32: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BC33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC33u);

L_1007BC33:
    eax = 0x100DF614u; /* 0x1007BC33: mov eax, 0x100df614 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BC38: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BC39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC39u);

L_1007BC39:
    eax = 0x100DF628u; /* 0x1007BC39: mov eax, 0x100df628 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BC3E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BC3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC3Fu);

L_1007BC3F:
    eax = 0x100DF630u; /* 0x1007BC3F: mov eax, 0x100df630 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BC44: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BC45(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC45u);

    goto L_1007BC45;
L_10028D26:
    eax = 0x100DF284u; /* 0x10028D26: mov eax, 0x100df284 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028D2B: ret  */
L_1007BC45:
    RECOMP_BACKEDGE();
    goto L_10028D26; /* 0x1007BC45: jmp 0x10028d26 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007BC4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC4Au);

    goto L_1007BC4A;
L_10028F3C:
    eax = 0x100DF288u; /* 0x10028F3C: mov eax, 0x100df288 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028F41: ret  */
L_1007BC4A:
    RECOMP_BACKEDGE();
    goto L_10028F3C; /* 0x1007BC4A: jmp 0x10028f3c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007BC4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC4Fu);

L_1007BC4F:
    eax = 0x100DF618u; /* 0x1007BC4F: mov eax, 0x100df618 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BC54: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BC55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC55u);

L_1007BC55:
    eax = 0x100DF420u; /* 0x1007BC55: mov eax, 0x100df420 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BC5A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BC5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC5Bu);

L_1007BC5B:
    eax = 0x100DF318u; /* 0x1007BC5B: mov eax, 0x100df318 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BC60: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BC61(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC61u);

L_1007BC61:
    RECOMP_CALL(sub_1000F750); /* 0x1007BC61: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1007BC66: mov edx, eax */
    eax = MEM32(edx + 0x6C); /* 0x1007BC68: mov eax, dword ptr [edx + 0x6c] */
    /* cmp eax, MEM32(0x100DFA84) */ /* 0x1007BC6B: cmp eax, dword ptr [0x100dfa84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DFA84));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007BC83; /* 0x1007BC71: je 0x1007bc83 */
L_1007BC73:
    ecx = MEM32(0x100DFDD4); /* 0x1007BC73: mov ecx, dword ptr [0x100dfdd4] */
    /* test MEM32(edx + 0x70), ecx */ /* 0x1007BC79: test dword ptr [edx + 0x70], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x70)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BC83; /* 0x1007BC7C: jne 0x1007bc83 */
L_1007BC7E:
    RECOMP_CALL(sub_10012C8B); /* 0x1007BC7E: call 0x10012c8b */
    RECOMP_FLAGS_IN();
L_1007BC83:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x90u; /* 0x1007BC83: add eax, 0x90 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BC88: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BC89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC89u);

L_1007BC89:
    eax = 0x100DF620u; /* 0x1007BC89: mov eax, 0x100df620 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BC8E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BC8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC8Fu);

L_1007BC8F:
    eax = 0x100DF564u; /* 0x1007BC8F: mov eax, 0x100df564 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BC94: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BC95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC95u);

    goto L_1007BC95;
L_10028D20:
    eax = 0x100DF280u; /* 0x10028D20: mov eax, 0x100df280 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028D25: ret  */
L_1007BC95:
    RECOMP_BACKEDGE();
    goto L_10028D20; /* 0x1007BC95: jmp 0x10028d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007BC9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC9Au);

    goto L_1007BC9A;
L_10028D1A:
    eax = 0x100DF290u; /* 0x10028D1A: mov eax, 0x100df290 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10028D1F: ret  */
L_1007BC9A:
    RECOMP_BACKEDGE();
    goto L_10028D1A; /* 0x1007BC9A: jmp 0x10028d1a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007BC9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BC9Fu);

L_1007BC9F:
    eax = 0x100DF634u; /* 0x1007BC9F: mov eax, 0x100df634 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BCA4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BCA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BCA5u);

L_1007BCA5:
    eax = 0x100DF61Cu; /* 0x1007BCA5: mov eax, 0x100df61c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BCAA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BCAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BCABu);

L_1007BCAB:
    eax = 0x100DF624u; /* 0x1007BCAB: mov eax, 0x100df624 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BCB0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BD05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BD05u);

L_1007BD05:
    { _itail_tgt = (uint32_t)(MEM32(0x100E504C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1007BD0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BD0Bu);

    goto L_1007BD0B;
L_1007BCB1:
    PUSH32(esp, esi); /* 0x1007BCB1: push esi */
    PUSH32(esp, edi); /* 0x1007BCB2: push edi */
    esi = 0x100DFCB0u; /* 0x1007BCB3: mov esi, 0x100dfcb0 */
    edi = esi; /* 0x1007BCB8: mov edi, esi */
    PUSH32(esp, ebx); /* 0x1007BCBA: push ebx */
L_1007BCBB:
    ebx = MEM32(edi); /* 0x1007BCBB: mov ebx, dword ptr [edi] */
    /* test ebx, ebx */ /* 0x1007BCBD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007BCD8; /* 0x1007BCBF: je 0x1007bcd8 */
L_1007BCC1:
    /* cmp MEM32(edi + 0x4), 1 */ /* 0x1007BCC1: cmp dword ptr [edi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007BCD8; /* 0x1007BCC5: je 0x1007bcd8 */
L_1007BCC7:
    PUSH32(esp, ebx); /* 0x1007BCC7: push ebx */
    RECOMP_ICALL(MEM32(0x100E5040)); /* 0x1007BCC8: call dword ptr [0x100e5040] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1007BCCE: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007BCCF: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1007BCD4: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1007BCD7: pop ecx */
L_1007BCD8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1007BCD8: add edi, 8 */
    _flag_k = FK_ADD;
    /* cmp edi, 0x100DFDD0u */ /* 0x1007BCDB: cmp edi, 0x100dfdd0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x100DFDD0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007BCBB; /* 0x1007BCE1: jl 0x1007bcbb */
L_1007BCE3:
    ebx = POP32_VAL(esp); /* 0x1007BCE3: pop ebx */
L_1007BCE4:
    /* cmp MEM32(esi), 0 */ /* 0x1007BCE4: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007BCF7; /* 0x1007BCE7: je 0x1007bcf7 */
L_1007BCE9:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x1007BCE9: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007BCF7; /* 0x1007BCED: jne 0x1007bcf7 */
L_1007BCEF:
    PUSH32(esp, MEM32(esi)); /* 0x1007BCEF: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x100E5040)); /* 0x1007BCF1: call dword ptr [0x100e5040] */
    RECOMP_FLAGS_IN();
L_1007BCF7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1007BCF7: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x100DFDD0u */ /* 0x1007BCFA: cmp esi, 0x100dfdd0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x100DFDD0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007BCE4; /* 0x1007BD00: jl 0x1007bce4 */
L_1007BD02:
    edi = POP32_VAL(esp); /* 0x1007BD02: pop edi */
    esi = POP32_VAL(esp); /* 0x1007BD03: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BD04: ret  */
L_1007BD0B:
    eax = MEM32(0x100DF9EC); /* 0x1007BD0B: mov eax, dword ptr [0x100df9ec] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1007BD10: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007BCB1; /* 0x1007BD13: je 0x1007bcb1 */
L_1007BD15:
    PUSH32(esp, eax); /* 0x1007BD15: push eax */
    RECOMP_CALL(sub_100A4735); /* 0x1007BD16: call 0x100a4735 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(0x100DF9EC) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(0x100DF9EC) | 0xFFFFFFFFu));
    MEM32(0x100DF9EC) = MEM32(0x100DF9EC) | 0xFFFFFFFFu; /* 0x1007BD1B: or dword ptr [0x100df9ec], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1007BD22: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1007BCB1; /* 0x1007BD23: jmp 0x1007bcb1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007BD25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BD25u);

L_1007BD25:
    PUSH32(esp, 3); /* 0x1007BD25: push 3 */
    RECOMP_CALL(sub_1007B3D7); /* 0x1007BD27: call 0x1007b3d7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007BD2C: pop ecx */
    /* cmp eax, 1 */ /* 0x1007BD2D: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007BD47; /* 0x1007BD30: je 0x1007bd47 */
L_1007BD32:
    PUSH32(esp, 3); /* 0x1007BD32: push 3 */
    RECOMP_CALL(sub_1007B3D7); /* 0x1007BD34: call 0x1007b3d7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007BD39: pop ecx */
    /* test eax, eax */ /* 0x1007BD3A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BD5D; /* 0x1007BD3C: jne 0x1007bd5d */
L_1007BD3E:
    /* cmp MEM32(0x100DFDE8), 1 */ /* 0x1007BD3E: cmp dword ptr [0x100dfde8], 1 */
    _flag_a = (uint32_t)(MEM32(0x100DFDE8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007BD5D; /* 0x1007BD45: jne 0x1007bd5d */
L_1007BD47:
    PUSH32(esp, 0xFCu); /* 0x1007BD47: push 0xfc */
    RECOMP_CALL(sub_1007BE40); /* 0x1007BD4C: call 0x1007be40 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFu); /* 0x1007BD51: push 0xff */
    RECOMP_CALL(sub_1007BE40); /* 0x1007BD56: call 0x1007be40 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007BD5B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007BD5C: pop ecx */
L_1007BD5D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BD5D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BD5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BD5Eu);

L_1007BD5E:
    PUSH32(esp, ebp); /* 0x1007BD5E: push ebp */
    ebp = esp; /* 0x1007BD5F: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1007BD61: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007BD64: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007BD66:
    /* cmp ecx, MEM32(eax * 8 + 0x1007BD88) */ /* 0x1007BD66: cmp ecx, dword ptr [eax*8 + 0x1007bd88] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 8 + 0x1007BD88));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007BD79; /* 0x1007BD6D: je 0x1007bd79 */
L_1007BD6F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007BD6F: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x17u */ /* 0x1007BD70: cmp eax, 0x17 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007BD66; /* 0x1007BD73: jb 0x1007bd66 */
L_1007BD75:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007BD75: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007BD77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BD78: ret  */
L_1007BD79:
    eax = MEM32(eax * 8 + 0x1007BD8C); /* 0x1007BD79: mov eax, dword ptr [eax*8 + 0x1007bd8c] */
    ebp = POP32_VAL(esp); /* 0x1007BD80: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BD81: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007BE40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007BE40u);

L_1007BE40:
    PUSH32(esp, ebp); /* 0x1007BE40: push ebp */
    ebp = esp; /* 0x1007BE41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1FCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1FCu; /* 0x1007BE43: sub esp, 0x1fc */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x1007BE49: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007BE4E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007BE50: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1007BE53: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1007BE54: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1007BE57: push edi */
    PUSH32(esp, esi); /* 0x1007BE58: push esi */
    RECOMP_CALL(sub_1007BD5E); /* 0x1007BE59: call 0x1007bd5e */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007BE5E: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1007BE60: pop ecx */
    /* test edi, edi */ /* 0x1007BE61: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007BFE2; /* 0x1007BE63: je 0x1007bfe2 */
L_1007BE69:
    PUSH32(esp, ebx); /* 0x1007BE69: push ebx */
    PUSH32(esp, 3); /* 0x1007BE6A: push 3 */
    RECOMP_CALL(sub_1007B3D7); /* 0x1007BE6C: call 0x1007b3d7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007BE71: pop ecx */
    /* cmp eax, 1 */ /* 0x1007BE72: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007BF8A; /* 0x1007BE75: je 0x1007bf8a */
L_1007BE7B:
    PUSH32(esp, 3); /* 0x1007BE7B: push 3 */
    RECOMP_CALL(sub_1007B3D7); /* 0x1007BE7D: call 0x1007b3d7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007BE82: pop ecx */
    /* test eax, eax */ /* 0x1007BE83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BE94; /* 0x1007BE85: jne 0x1007be94 */
L_1007BE87:
    /* cmp MEM32(0x100DFDE8), 1 */ /* 0x1007BE87: cmp dword ptr [0x100dfde8], 1 */
    _flag_a = (uint32_t)(MEM32(0x100DFDE8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007BF8A; /* 0x1007BE8E: je 0x1007bf8a */
L_1007BE94:
    /* cmp esi, 0xFCu */ /* 0x1007BE94: cmp esi, 0xfc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007BFE1; /* 0x1007BE9A: je 0x1007bfe1 */
L_1007BEA0:
    PUSH32(esp, 0x1007C000u); /* 0x1007BEA0: push 0x1007c000 */
    PUSH32(esp, 0x314u); /* 0x1007BEA5: push 0x314 */
    PUSH32(esp, 0x100E3568u); /* 0x1007BEAA: push 0x100e3568 */
    RECOMP_CALL(sub_10011693); /* 0x1007BEAF: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007BEB4: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007BEB7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1007BEB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BFF2; /* 0x1007BEBB: jne 0x1007bff2 */
L_1007BEC1:
    PUSH32(esp, 0x104u); /* 0x1007BEC1: push 0x104 */
    PUSH32(esp, 0x100E359Au); /* 0x1007BEC6: push 0x100e359a */
    PUSH32(esp, ebx); /* 0x1007BECB: push ebx */
    MEM16(0x100E37A2) = (uint16_t)(LO16(eax)); /* 0x1007BECC: mov word ptr [0x100e37a2], ax */
    RECOMP_ICALL(MEM32(0x100E5050)); /* 0x1007BED2: call dword ptr [0x100e5050] */
    RECOMP_FLAGS_IN();
    esi = 0x2FBu; /* 0x1007BED8: mov esi, 0x2fb */
    /* test eax, eax */ /* 0x1007BEDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BEFC; /* 0x1007BEDF: jne 0x1007befc */
L_1007BEE1:
    PUSH32(esp, 0x100620B8u); /* 0x1007BEE1: push 0x100620b8 */
    PUSH32(esp, esi); /* 0x1007BEE6: push esi */
    PUSH32(esp, 0x100E359Au); /* 0x1007BEE7: push 0x100e359a */
    RECOMP_CALL(sub_10011693); /* 0x1007BEEC: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007BEF1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007BEF4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BFF2; /* 0x1007BEF6: jne 0x1007bff2 */
L_1007BEFC:
    PUSH32(esp, 0x100E359Au); /* 0x1007BEFC: push 0x100e359a */
    RECOMP_CALL(sub_1000F1F3); /* 0x1007BF01: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007BF06: inc eax */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1007BF07: pop ecx */
    /* cmp eax, 0x3Cu */ /* 0x1007BF08: cmp eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007BF42; /* 0x1007BF0B: jbe 0x1007bf42 */
L_1007BF0D:
    PUSH32(esp, 0x100E359Au); /* 0x1007BF0D: push 0x100e359a */
    RECOMP_CALL(sub_1000F1F3); /* 0x1007BF12: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x1007BF17: push 3 */
    PUSH32(esp, 0x1007C034u); /* 0x1007BF19: push 0x1007c034 */
    ecx = eax * 2 + 0x100E3524; /* 0x1007BF1E: lea ecx, [eax*2 + 0x100e3524] */
    eax = ecx; /* 0x1007BF25: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100E359Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x100E359Au; /* 0x1007BF27: sub eax, 0x100e359a */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1007BF2C: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1007BF2E: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1007BF30: push esi */
    PUSH32(esp, ecx); /* 0x1007BF31: push ecx */
    RECOMP_CALL(sub_1001218A); /* 0x1007BF32: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007BF37: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007BF3A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BFF2; /* 0x1007BF3C: jne 0x1007bff2 */
L_1007BF42:
    PUSH32(esp, 0x1007C03Cu); /* 0x1007BF42: push 0x1007c03c */
    PUSH32(esp, 0x314u); /* 0x1007BF47: push 0x314 */
    esi = 0x100E3568u; /* 0x1007BF4C: mov esi, 0x100e3568 */
    PUSH32(esp, esi); /* 0x1007BF51: push esi */
    RECOMP_CALL(sub_1001212A); /* 0x1007BF52: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007BF57: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007BF5A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BFF2; /* 0x1007BF5C: jne 0x1007bff2 */
L_1007BF62:
    PUSH32(esp, edi); /* 0x1007BF62: push edi */
    PUSH32(esp, 0x314u); /* 0x1007BF63: push 0x314 */
    PUSH32(esp, esi); /* 0x1007BF68: push esi */
    RECOMP_CALL(sub_1001212A); /* 0x1007BF69: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007BF6E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007BF71: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007BFF2; /* 0x1007BF73: jne 0x1007bff2 */
L_1007BF75:
    PUSH32(esp, 0x00012010u); /* 0x1007BF75: push 0x12010 */
    PUSH32(esp, 0x100620E8u); /* 0x1007BF7A: push 0x100620e8 */
    PUSH32(esp, esi); /* 0x1007BF7F: push esi */
    RECOMP_CALL(sub_100A4E66); /* 0x1007BF80: call 0x100a4e66 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007BF85: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1007BFE1; /* 0x1007BF88: jmp 0x1007bfe1 */
L_1007BF8A:
    PUSH32(esp, 0xFFFFFFF4u); /* 0x1007BF8A: push -0xc */
    RECOMP_ICALL(MEM32(0x100E5058)); /* 0x1007BF8C: call dword ptr [0x100e5058] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007BF92: mov esi, eax */
    /* test esi, esi */ /* 0x1007BF94: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007BFE1; /* 0x1007BF96: je 0x1007bfe1 */
L_1007BF98:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1007BF98: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007BFE1; /* 0x1007BF9B: je 0x1007bfe1 */
L_1007BF9D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007BF9D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x1007BF9F: mov ecx, ebx */
L_1007BFA1:
    SET_LO8(eax, MEM8(edi + ecx * 2)); /* 0x1007BFA1: mov al, byte ptr [edi + ecx*2] */
    MEM8(ebp + ecx + (-0x1F8)) = (uint8_t)(LO8(eax)); /* 0x1007BFA4: mov byte ptr [ebp + ecx - 0x1f8], al */
    /* cmp MEM16(edi + ecx * 2), LO16(ebx) */ /* 0x1007BFAB: cmp word ptr [edi + ecx*2], bx */
    _flag_a = (uint32_t)(MEM16(edi + ecx * 2)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007BFBA; /* 0x1007BFAF: je 0x1007bfba */
L_1007BFB1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007BFB1: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 0x1F4u */ /* 0x1007BFB2: cmp ecx, 0x1f4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1F4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007BFA1; /* 0x1007BFB8: jb 0x1007bfa1 */
L_1007BFBA:
    PUSH32(esp, ebx); /* 0x1007BFBA: push ebx */
    eax = ebp + (-0x1FC); /* 0x1007BFBB: lea eax, [ebp - 0x1fc] */
    MEM8(ebp + (-0x5)) = (uint8_t)(LO8(ebx)); /* 0x1007BFC1: mov byte ptr [ebp - 5], bl */
    PUSH32(esp, eax); /* 0x1007BFC4: push eax */
    eax = ebp + (-0x1F8); /* 0x1007BFC5: lea eax, [ebp - 0x1f8] */
    PUSH32(esp, eax); /* 0x1007BFCB: push eax */
    RECOMP_CALL(sub_100129AF); /* 0x1007BFCC: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007BFD1: pop ecx */
    PUSH32(esp, eax); /* 0x1007BFD2: push eax */
    eax = ebp + (-0x1F8); /* 0x1007BFD3: lea eax, [ebp - 0x1f8] */
    PUSH32(esp, eax); /* 0x1007BFD9: push eax */
    PUSH32(esp, esi); /* 0x1007BFDA: push esi */
    RECOMP_ICALL(MEM32(0x100E505C)); /* 0x1007BFDB: call dword ptr [0x100e505c] */
    RECOMP_FLAGS_IN();
L_1007BFE1:
    ebx = POP32_VAL(esp); /* 0x1007BFE1: pop ebx */
L_1007BFE2:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007BFE2: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1007BFE5: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1007BFE6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1007BFE8: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x1007BFE9: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1007BFEE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007BFF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007BFF1: ret  */
L_1007BFF2:
    PUSH32(esp, ebx); /* 0x1007BFF2: push ebx */
    PUSH32(esp, ebx); /* 0x1007BFF3: push ebx */
    PUSH32(esp, ebx); /* 0x1007BFF4: push ebx */
    PUSH32(esp, ebx); /* 0x1007BFF5: push ebx */
    PUSH32(esp, ebx); /* 0x1007BFF6: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x1007BFF7: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007BFFCu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007C000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C000u);

L_1007C000:
    PUSH32(esp, edx); /* 0x1007C000: push edx */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x1007C001: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x1007C004: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x69)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x69) = (uint8_t)(MEM8(eax + eax + 0x69) + HI8(edx)); /* 0x1007C005: add byte ptr [eax + eax + 0x69], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x1007C009: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x1007C00C: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + LO8(eax)); /* 0x1007C00F: add byte ptr [ebp], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_1007C014; /* 0x1007C012: jb 0x1007c014 */
L_1007C014:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1007C016; /* 0x1007C014: jb 0x1007c016 */
L_1007C016:
    /* outsd: no port I/O under Win32 */ /* 0x1007C016: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x1007C017: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    MEM32(eax) = MEM32(eax) & eax; /* 0x1007C01A: and dword ptr [eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x1007C01C: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x1007C01E: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, eax); /* 0x1007C020: push eax */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x1007C021: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x1007C024: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x1007C025: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_1007C02A; /* 0x1007C028: jb 0x1007c02a */
L_1007C02A:
    POPAD(); /* 0x1007C02A: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x1007C02B: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), MEM8(eax) */ /* 0x1007C02E: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x1007C030: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1007C032: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x1007C034: add byte ptr cs:[esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x1007C037: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1007C039: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ecx)); /* 0x1007C03B: add byte ptr [edx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ecx)); /* 0x1007C03D: add byte ptr [edx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1007C03F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1007C041: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1007C044: in al, dx */
    PUSH32(esp, ecx); /* 0x1007C045: push ecx */
    PUSH32(esp, ecx); /* 0x1007C046: push ecx */
    PUSH32(esp, ebx); /* 0x1007C047: push ebx */
    PUSH32(esp, esi); /* 0x1007C048: push esi */
    PUSH32(esp, edi); /* 0x1007C049: push edi */
    PUSH32(esp, 0x104u); /* 0x1007C04A: push 0x104 */
    edi = 0x100E3B90u; /* 0x1007C04F: mov edi, 0x100e3b90 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007C054: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1007C056: push edi */
    PUSH32(esp, ebx); /* 0x1007C057: push ebx */
    MEM8(0x100E3C94) = (uint8_t)(LO8(ebx)); /* 0x1007C058: mov byte ptr [0x100e3c94], bl */
    RECOMP_ICALL(MEM32(0x100E5044)); /* 0x1007C05E: call dword ptr [0x100e5044] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF630); /* 0x1007C064: mov esi, dword ptr [0x100df630] */
    MEM32(0x100DF620) = edi; /* 0x1007C06A: mov dword ptr [0x100df620], edi */
    /* test esi, esi */ /* 0x1007C070: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C078; /* 0x1007C072: je 0x1007c078 */
L_1007C074:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1007C074: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C07A; /* 0x1007C076: jne 0x1007c07a */
L_1007C078:
    esi = edi; /* 0x1007C078: mov esi, edi */
L_1007C07A:
    eax = ebp + (-0x8); /* 0x1007C07A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1007C07D: push eax */
    eax = ebp + (-0x4); /* 0x1007C07E: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007C081: push eax */
    PUSH32(esp, ebx); /* 0x1007C082: push ebx */
    PUSH32(esp, ebx); /* 0x1007C083: push ebx */
    PUSH32(esp, esi); /* 0x1007C084: push esi */
    RECOMP_CALL(sub_1007C0EE); /* 0x1007C085: call 0x1007c0ee */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x1007C08A: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007C08D: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ebx, 0x3FFFFFFFu */ /* 0x1007C090: cmp ebx, 0x3fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C096: jae 0x1007c0e4 */
L_1007C098:
    ecx = MEM32(ebp + (-0x8)); /* 0x1007C098: mov ecx, dword ptr [ebp - 8] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1007C09B: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C09E: jae 0x1007c0e4 */
L_1007C0A0:
    edx = ecx + ebx * 4; /* 0x1007C0A0: lea edx, [ecx + ebx*4] */
    /* cmp edx, ecx */ /* 0x1007C0A3: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C0A5: jb 0x1007c0e4 */
L_1007C0A7:
    PUSH32(esp, edx); /* 0x1007C0A7: push edx */
    RECOMP_CALL(sub_10012226); /* 0x1007C0A8: call 0x10012226 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007C0AD: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1007C0AF: pop ecx */
    /* test edi, edi */ /* 0x1007C0B0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C0B2: je 0x1007c0e4 */
L_1007C0B4:
    eax = ebp + (-0x8); /* 0x1007C0B4: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1007C0B7: push eax */
    eax = ebp + (-0x4); /* 0x1007C0B8: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007C0BB: push eax */
    eax = edi + ebx * 4; /* 0x1007C0BC: lea eax, [edi + ebx*4] */
    PUSH32(esp, eax); /* 0x1007C0BF: push eax */
    PUSH32(esp, edi); /* 0x1007C0C0: push edi */
    PUSH32(esp, esi); /* 0x1007C0C1: push esi */
    RECOMP_CALL(sub_1007C0EE); /* 0x1007C0C2: call 0x1007c0ee */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1007C0C7: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007C0CA: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1007C0CD: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x100DF610) = edi; /* 0x1007C0CE: mov dword ptr [0x100df610], edi */
    MEM32(0x100DF60C) = eax; /* 0x1007C0D4: mov dword ptr [0x100df60c], eax */
    RECOMP_CALL(sub_1007C280); /* 0x1007C0D9: call 0x1007c280 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007C0DE: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007C0E0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1007C0E7; /* 0x1007C0E2: jmp 0x1007c0e7 */
L_1007C0E4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C0E4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007C0E7:
    edi = POP32_VAL(esp); /* 0x1007C0E7: pop edi */
    esi = POP32_VAL(esp); /* 0x1007C0E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007C0E9: pop ebx */
    esp = ebp; /* 0x1007C0EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007C0EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C0ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007C034(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C034u);

L_1007C034:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x1007C034: add byte ptr cs:[esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x1007C037: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1007C039: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ecx)); /* 0x1007C03B: add byte ptr [edx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(ecx)); /* 0x1007C03D: add byte ptr [edx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1007C03F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1007C041: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1007C044: in al, dx */
    PUSH32(esp, ecx); /* 0x1007C045: push ecx */
    PUSH32(esp, ecx); /* 0x1007C046: push ecx */
    PUSH32(esp, ebx); /* 0x1007C047: push ebx */
    PUSH32(esp, esi); /* 0x1007C048: push esi */
    PUSH32(esp, edi); /* 0x1007C049: push edi */
    PUSH32(esp, 0x104u); /* 0x1007C04A: push 0x104 */
    edi = 0x100E3B90u; /* 0x1007C04F: mov edi, 0x100e3b90 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007C054: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1007C056: push edi */
    PUSH32(esp, ebx); /* 0x1007C057: push ebx */
    MEM8(0x100E3C94) = (uint8_t)(LO8(ebx)); /* 0x1007C058: mov byte ptr [0x100e3c94], bl */
    RECOMP_ICALL(MEM32(0x100E5044)); /* 0x1007C05E: call dword ptr [0x100e5044] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF630); /* 0x1007C064: mov esi, dword ptr [0x100df630] */
    MEM32(0x100DF620) = edi; /* 0x1007C06A: mov dword ptr [0x100df620], edi */
    /* test esi, esi */ /* 0x1007C070: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C078; /* 0x1007C072: je 0x1007c078 */
L_1007C074:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1007C074: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C07A; /* 0x1007C076: jne 0x1007c07a */
L_1007C078:
    esi = edi; /* 0x1007C078: mov esi, edi */
L_1007C07A:
    eax = ebp + (-0x8); /* 0x1007C07A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1007C07D: push eax */
    eax = ebp + (-0x4); /* 0x1007C07E: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007C081: push eax */
    PUSH32(esp, ebx); /* 0x1007C082: push ebx */
    PUSH32(esp, ebx); /* 0x1007C083: push ebx */
    PUSH32(esp, esi); /* 0x1007C084: push esi */
    RECOMP_CALL(sub_1007C0EE); /* 0x1007C085: call 0x1007c0ee */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x1007C08A: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007C08D: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ebx, 0x3FFFFFFFu */ /* 0x1007C090: cmp ebx, 0x3fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C096: jae 0x1007c0e4 */
L_1007C098:
    ecx = MEM32(ebp + (-0x8)); /* 0x1007C098: mov ecx, dword ptr [ebp - 8] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1007C09B: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C09E: jae 0x1007c0e4 */
L_1007C0A0:
    edx = ecx + ebx * 4; /* 0x1007C0A0: lea edx, [ecx + ebx*4] */
    /* cmp edx, ecx */ /* 0x1007C0A3: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C0A5: jb 0x1007c0e4 */
L_1007C0A7:
    PUSH32(esp, edx); /* 0x1007C0A7: push edx */
    RECOMP_CALL(sub_10012226); /* 0x1007C0A8: call 0x10012226 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007C0AD: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1007C0AF: pop ecx */
    /* test edi, edi */ /* 0x1007C0B0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C0B2: je 0x1007c0e4 */
L_1007C0B4:
    eax = ebp + (-0x8); /* 0x1007C0B4: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1007C0B7: push eax */
    eax = ebp + (-0x4); /* 0x1007C0B8: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007C0BB: push eax */
    eax = edi + ebx * 4; /* 0x1007C0BC: lea eax, [edi + ebx*4] */
    PUSH32(esp, eax); /* 0x1007C0BF: push eax */
    PUSH32(esp, edi); /* 0x1007C0C0: push edi */
    PUSH32(esp, esi); /* 0x1007C0C1: push esi */
    RECOMP_CALL(sub_1007C0EE); /* 0x1007C0C2: call 0x1007c0ee */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1007C0C7: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007C0CA: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1007C0CD: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x100DF610) = edi; /* 0x1007C0CE: mov dword ptr [0x100df610], edi */
    MEM32(0x100DF60C) = eax; /* 0x1007C0D4: mov dword ptr [0x100df60c], eax */
    RECOMP_CALL(sub_1007C280); /* 0x1007C0D9: call 0x1007c280 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007C0DE: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007C0E0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1007C0E7; /* 0x1007C0E2: jmp 0x1007c0e7 */
L_1007C0E4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C0E4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007C0E7:
    edi = POP32_VAL(esp); /* 0x1007C0E7: pop edi */
    esi = POP32_VAL(esp); /* 0x1007C0E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007C0E9: pop ebx */
    esp = ebp; /* 0x1007C0EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007C0EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C0ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007C03C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C03Cu);

L_1007C03C:
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x1007C03C: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x1007C03E: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1007C040: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x1007C042: push ebp */
    ebp = esp; /* 0x1007C043: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007C045: push ecx */
    PUSH32(esp, ecx); /* 0x1007C046: push ecx */
    PUSH32(esp, ebx); /* 0x1007C047: push ebx */
    PUSH32(esp, esi); /* 0x1007C048: push esi */
    PUSH32(esp, edi); /* 0x1007C049: push edi */
    PUSH32(esp, 0x104u); /* 0x1007C04A: push 0x104 */
    edi = 0x100E3B90u; /* 0x1007C04F: mov edi, 0x100e3b90 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007C054: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1007C056: push edi */
    PUSH32(esp, ebx); /* 0x1007C057: push ebx */
    MEM8(0x100E3C94) = (uint8_t)(LO8(ebx)); /* 0x1007C058: mov byte ptr [0x100e3c94], bl */
    RECOMP_ICALL(MEM32(0x100E5044)); /* 0x1007C05E: call dword ptr [0x100e5044] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF630); /* 0x1007C064: mov esi, dword ptr [0x100df630] */
    MEM32(0x100DF620) = edi; /* 0x1007C06A: mov dword ptr [0x100df620], edi */
    /* test esi, esi */ /* 0x1007C070: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C078; /* 0x1007C072: je 0x1007c078 */
L_1007C074:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1007C074: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C07A; /* 0x1007C076: jne 0x1007c07a */
L_1007C078:
    esi = edi; /* 0x1007C078: mov esi, edi */
L_1007C07A:
    eax = ebp + (-0x8); /* 0x1007C07A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1007C07D: push eax */
    eax = ebp + (-0x4); /* 0x1007C07E: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007C081: push eax */
    PUSH32(esp, ebx); /* 0x1007C082: push ebx */
    PUSH32(esp, ebx); /* 0x1007C083: push ebx */
    PUSH32(esp, esi); /* 0x1007C084: push esi */
    RECOMP_CALL(sub_1007C0EE); /* 0x1007C085: call 0x1007c0ee */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x1007C08A: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007C08D: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ebx, 0x3FFFFFFFu */ /* 0x1007C090: cmp ebx, 0x3fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C096: jae 0x1007c0e4 */
L_1007C098:
    ecx = MEM32(ebp + (-0x8)); /* 0x1007C098: mov ecx, dword ptr [ebp - 8] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1007C09B: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C09E: jae 0x1007c0e4 */
L_1007C0A0:
    edx = ecx + ebx * 4; /* 0x1007C0A0: lea edx, [ecx + ebx*4] */
    /* cmp edx, ecx */ /* 0x1007C0A3: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C0A5: jb 0x1007c0e4 */
L_1007C0A7:
    PUSH32(esp, edx); /* 0x1007C0A7: push edx */
    RECOMP_CALL(sub_10012226); /* 0x1007C0A8: call 0x10012226 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007C0AD: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1007C0AF: pop ecx */
    /* test edi, edi */ /* 0x1007C0B0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C0B2: je 0x1007c0e4 */
L_1007C0B4:
    eax = ebp + (-0x8); /* 0x1007C0B4: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1007C0B7: push eax */
    eax = ebp + (-0x4); /* 0x1007C0B8: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007C0BB: push eax */
    eax = edi + ebx * 4; /* 0x1007C0BC: lea eax, [edi + ebx*4] */
    PUSH32(esp, eax); /* 0x1007C0BF: push eax */
    PUSH32(esp, edi); /* 0x1007C0C0: push edi */
    PUSH32(esp, esi); /* 0x1007C0C1: push esi */
    RECOMP_CALL(sub_1007C0EE); /* 0x1007C0C2: call 0x1007c0ee */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1007C0C7: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007C0CA: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1007C0CD: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x100DF610) = edi; /* 0x1007C0CE: mov dword ptr [0x100df610], edi */
    MEM32(0x100DF60C) = eax; /* 0x1007C0D4: mov dword ptr [0x100df60c], eax */
    RECOMP_CALL(sub_1007C280); /* 0x1007C0D9: call 0x1007c280 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007C0DE: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007C0E0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1007C0E7; /* 0x1007C0E2: jmp 0x1007c0e7 */
L_1007C0E4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C0E4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007C0E7:
    edi = POP32_VAL(esp); /* 0x1007C0E7: pop edi */
    esi = POP32_VAL(esp); /* 0x1007C0E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007C0E9: pop ebx */
    esp = ebp; /* 0x1007C0EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007C0EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C0ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007C042(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C042u);

L_1007C042:
    PUSH32(esp, ebp); /* 0x1007C042: push ebp */
    ebp = esp; /* 0x1007C043: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007C045: push ecx */
    PUSH32(esp, ecx); /* 0x1007C046: push ecx */
    PUSH32(esp, ebx); /* 0x1007C047: push ebx */
    PUSH32(esp, esi); /* 0x1007C048: push esi */
    PUSH32(esp, edi); /* 0x1007C049: push edi */
    PUSH32(esp, 0x104u); /* 0x1007C04A: push 0x104 */
    edi = 0x100E3B90u; /* 0x1007C04F: mov edi, 0x100e3b90 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007C054: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1007C056: push edi */
    PUSH32(esp, ebx); /* 0x1007C057: push ebx */
    MEM8(0x100E3C94) = (uint8_t)(LO8(ebx)); /* 0x1007C058: mov byte ptr [0x100e3c94], bl */
    RECOMP_ICALL(MEM32(0x100E5044)); /* 0x1007C05E: call dword ptr [0x100e5044] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100DF630); /* 0x1007C064: mov esi, dword ptr [0x100df630] */
    MEM32(0x100DF620) = edi; /* 0x1007C06A: mov dword ptr [0x100df620], edi */
    /* test esi, esi */ /* 0x1007C070: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C078; /* 0x1007C072: je 0x1007c078 */
L_1007C074:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1007C074: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C07A; /* 0x1007C076: jne 0x1007c07a */
L_1007C078:
    esi = edi; /* 0x1007C078: mov esi, edi */
L_1007C07A:
    eax = ebp + (-0x8); /* 0x1007C07A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1007C07D: push eax */
    eax = ebp + (-0x4); /* 0x1007C07E: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007C081: push eax */
    PUSH32(esp, ebx); /* 0x1007C082: push ebx */
    PUSH32(esp, ebx); /* 0x1007C083: push ebx */
    PUSH32(esp, esi); /* 0x1007C084: push esi */
    RECOMP_CALL(sub_1007C0EE); /* 0x1007C085: call 0x1007c0ee */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x1007C08A: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007C08D: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ebx, 0x3FFFFFFFu */ /* 0x1007C090: cmp ebx, 0x3fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C096: jae 0x1007c0e4 */
L_1007C098:
    ecx = MEM32(ebp + (-0x8)); /* 0x1007C098: mov ecx, dword ptr [ebp - 8] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1007C09B: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C09E: jae 0x1007c0e4 */
L_1007C0A0:
    edx = ecx + ebx * 4; /* 0x1007C0A0: lea edx, [ecx + ebx*4] */
    /* cmp edx, ecx */ /* 0x1007C0A3: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C0A5: jb 0x1007c0e4 */
L_1007C0A7:
    PUSH32(esp, edx); /* 0x1007C0A7: push edx */
    RECOMP_CALL(sub_10012226); /* 0x1007C0A8: call 0x10012226 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007C0AD: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1007C0AF: pop ecx */
    /* test edi, edi */ /* 0x1007C0B0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C0E4; /* 0x1007C0B2: je 0x1007c0e4 */
L_1007C0B4:
    eax = ebp + (-0x8); /* 0x1007C0B4: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1007C0B7: push eax */
    eax = ebp + (-0x4); /* 0x1007C0B8: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1007C0BB: push eax */
    eax = edi + ebx * 4; /* 0x1007C0BC: lea eax, [edi + ebx*4] */
    PUSH32(esp, eax); /* 0x1007C0BF: push eax */
    PUSH32(esp, edi); /* 0x1007C0C0: push edi */
    PUSH32(esp, esi); /* 0x1007C0C1: push esi */
    RECOMP_CALL(sub_1007C0EE); /* 0x1007C0C2: call 0x1007c0ee */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1007C0C7: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1007C0CA: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1007C0CD: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x100DF610) = edi; /* 0x1007C0CE: mov dword ptr [0x100df610], edi */
    MEM32(0x100DF60C) = eax; /* 0x1007C0D4: mov dword ptr [0x100df60c], eax */
    RECOMP_CALL(sub_1007C280); /* 0x1007C0D9: call 0x1007c280 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007C0DE: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007C0E0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1007C0E7; /* 0x1007C0E2: jmp 0x1007c0e7 */
L_1007C0E4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C0E4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007C0E7:
    edi = POP32_VAL(esp); /* 0x1007C0E7: pop edi */
    esi = POP32_VAL(esp); /* 0x1007C0E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007C0E9: pop ebx */
    esp = ebp; /* 0x1007C0EA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007C0EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C0ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007C0EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C0EEu);

L_1007C0EE:
    PUSH32(esp, ebp); /* 0x1007C0EE: push ebp */
    ebp = esp; /* 0x1007C0EF: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x1007C0F1: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1007C0F4: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x1007C0F5: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1007C0F8: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1007C0F9: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1007C0FC: push edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x1007C0FD: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x1007C100: mov edi, dword ptr [ebp + 8] */
    MEM32(eax) = 1; /* 0x1007C103: mov dword ptr [eax], 1 */
    eax = MEM32(ebp + 0xC); /* 0x1007C109: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1007C10C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C118; /* 0x1007C10E: je 0x1007c118 */
L_1007C110:
    MEM32(eax) = esi; /* 0x1007C110: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1007C112: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x1007C115: mov dword ptr [ebp + 0xc], eax */
L_1007C118:
    /* test esi, esi */ /* 0x1007C118: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C121; /* 0x1007C11A: je 0x1007c121 */
L_1007C11C:
    SET_LO8(eax, MEM8(edi)); /* 0x1007C11C: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1007C11E: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007C120: inc esi */
    _flag_k = FK_INC;
L_1007C121:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1007C121: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007C123: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = ecx; /* 0x1007C125: mov dword ptr [ebp + 8], ecx */
L_1007C128:
    /* cmp MEM8(edi), 0x22u */ /* 0x1007C128: cmp byte ptr [edi], 0x22 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C13E; /* 0x1007C12B: jne 0x1007c13e */
L_1007C12D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007C12D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1007C12F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1007C131: sete al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007C134: inc edi */
    _flag_k = FK_INC;
    ecx = eax; /* 0x1007C135: mov ecx, eax */
    SET_LO8(eax, 0x22u); /* 0x1007C137: mov al, 0x22 */
    MEM32(ebp + 0x8) = ecx; /* 0x1007C139: mov dword ptr [ebp + 8], ecx */
    goto L_1007C173; /* 0x1007C13C: jmp 0x1007c173 */
L_1007C13E:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1007C13E: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x1007C140: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C149; /* 0x1007C142: je 0x1007c149 */
L_1007C144:
    SET_LO8(eax, MEM8(edi)); /* 0x1007C144: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1007C146: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007C148: inc esi */
    _flag_k = FK_INC;
L_1007C149:
    SET_LO8(eax, MEM8(edi)); /* 0x1007C149: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007C14B: inc edi */
    _flag_k = FK_INC;
    MEM8(ebp + 0x1B) = (uint8_t)(LO8(eax)); /* 0x1007C14C: mov byte ptr [ebp + 0x1b], al */
    eax = (uint32_t)LO8(eax); /* 0x1007C14F: movzx eax, al */
    PUSH32(esp, eax); /* 0x1007C152: push eax */
    RECOMP_CALL(sub_1002E05B); /* 0x1007C153: call 0x1002e05b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C158: pop ecx */
    /* test eax, eax */ /* 0x1007C159: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C169; /* 0x1007C15B: je 0x1007c169 */
L_1007C15D:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1007C15D: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x1007C15F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C168; /* 0x1007C161: je 0x1007c168 */
L_1007C163:
    SET_LO8(eax, MEM8(edi)); /* 0x1007C163: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1007C165: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007C167: inc esi */
    _flag_k = FK_INC;
L_1007C168:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007C168: inc edi */
    _flag_k = FK_INC;
L_1007C169:
    SET_LO8(eax, MEM8(ebp + 0x1B)); /* 0x1007C169: mov al, byte ptr [ebp + 0x1b] */
    /* test LO8(eax), LO8(eax) */ /* 0x1007C16C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C189; /* 0x1007C16E: je 0x1007c189 */
L_1007C170:
    ecx = MEM32(ebp + 0x8); /* 0x1007C170: mov ecx, dword ptr [ebp + 8] */
L_1007C173:
    /* test ecx, ecx */ /* 0x1007C173: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C128; /* 0x1007C175: jne 0x1007c128 */
L_1007C177:
    /* cmp LO8(eax), 0x20u */ /* 0x1007C177: cmp al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C17F; /* 0x1007C179: je 0x1007c17f */
L_1007C17B:
    /* cmp LO8(eax), 9 */ /* 0x1007C17B: cmp al, 9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C128; /* 0x1007C17D: jne 0x1007c128 */
L_1007C17F:
    /* test esi, esi */ /* 0x1007C17F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C18A; /* 0x1007C181: je 0x1007c18a */
L_1007C183:
    MEM8(esi + (-0x1)) = (uint8_t)(0); /* 0x1007C183: mov byte ptr [esi - 1], 0 */
    goto L_1007C18A; /* 0x1007C187: jmp 0x1007c18a */
L_1007C189:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1007C189: dec edi */
    _flag_k = FK_DEC;
L_1007C18A:
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 0; /* 0x1007C18A: and dword ptr [ebp + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007C18E:
    /* cmp MEM8(edi), 0 */ /* 0x1007C18E: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C26C; /* 0x1007C191: je 0x1007c26c */
L_1007C197:
    SET_LO8(eax, MEM8(edi)); /* 0x1007C197: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x20u */ /* 0x1007C199: cmp al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C1A1; /* 0x1007C19B: je 0x1007c1a1 */
L_1007C19D:
    /* cmp LO8(eax), 9 */ /* 0x1007C19D: cmp al, 9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C1A4; /* 0x1007C19F: jne 0x1007c1a4 */
L_1007C1A1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007C1A1: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1007C197; /* 0x1007C1A2: jmp 0x1007c197 */
L_1007C1A4:
    /* cmp MEM8(edi), 0 */ /* 0x1007C1A4: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C26C; /* 0x1007C1A7: je 0x1007c26c */
L_1007C1AD:
    edx = MEM32(ebp + 0xC); /* 0x1007C1AD: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1007C1B0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C1BC; /* 0x1007C1B2: je 0x1007c1bc */
L_1007C1B4:
    MEM32(edx) = esi; /* 0x1007C1B4: mov dword ptr [edx], esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1007C1B6: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edx; /* 0x1007C1B9: mov dword ptr [ebp + 0xc], edx */
L_1007C1BC:
    eax = MEM32(ebp + 0x14); /* 0x1007C1BC: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1007C1BF: inc dword ptr [eax] */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x1007C1C1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C1CA; /* 0x1007C1C3: je 0x1007c1ca */
L_1007C1C5:
    SET_LO8(eax, MEM8(edi)); /* 0x1007C1C5: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1007C1C7: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007C1C9: inc esi */
    _flag_k = FK_INC;
L_1007C1CA:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1007C1CA: inc dword ptr [ebx] */
    _flag_k = FK_INC;
L_1007C1CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007C1CC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007C1CE: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007C1CF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007C1D5; /* 0x1007C1D1: jmp 0x1007c1d5 */
L_1007C1D3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007C1D3: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007C1D4: inc ecx */
    _flag_k = FK_INC;
L_1007C1D5:
    /* cmp MEM8(edi), 0x5Cu */ /* 0x1007C1D5: cmp byte ptr [edi], 0x5c */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C1D3; /* 0x1007C1D8: je 0x1007c1d3 */
L_1007C1DA:
    /* cmp MEM8(edi), 0x22u */ /* 0x1007C1DA: cmp byte ptr [edi], 0x22 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C212; /* 0x1007C1DD: jne 0x1007c212 */
L_1007C1DF:
    /* test LO8(ecx), 1 */ /* 0x1007C1DF: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C203; /* 0x1007C1E2: jne 0x1007c203 */
L_1007C1E4:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1007C1E4: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C1F6; /* 0x1007C1E8: je 0x1007c1f6 */
L_1007C1EA:
    eax = edi + 0x1; /* 0x1007C1EA: lea eax, [edi + 1] */
    /* cmp MEM8(eax), 0x22u */ /* 0x1007C1ED: cmp byte ptr [eax], 0x22 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C1F6; /* 0x1007C1F0: jne 0x1007c1f6 */
L_1007C1F2:
    edi = eax; /* 0x1007C1F2: mov edi, eax */
    goto L_1007C203; /* 0x1007C1F4: jmp 0x1007c203 */
L_1007C1F6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007C1F6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007C1F8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), eax */ /* 0x1007C1FA: cmp dword ptr [ebp + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1007C1FD: sete al */
    MEM32(ebp + 0x18) = eax; /* 0x1007C200: mov dword ptr [ebp + 0x18], eax */
L_1007C203:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1007C203: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1007C203: shr ecx, 1 */
    goto L_1007C212; /* 0x1007C205: jmp 0x1007c212 */
L_1007C207:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1007C207: dec ecx */
    _flag_k = FK_DEC;
    /* test esi, esi */ /* 0x1007C208: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C210; /* 0x1007C20A: je 0x1007c210 */
L_1007C20C:
    MEM8(esi) = (uint8_t)(0x5Cu); /* 0x1007C20C: mov byte ptr [esi], 0x5c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007C20F: inc esi */
    _flag_k = FK_INC;
L_1007C210:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1007C210: inc dword ptr [ebx] */
    _flag_k = FK_INC;
L_1007C212:
    /* test ecx, ecx */ /* 0x1007C212: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C207; /* 0x1007C214: jne 0x1007c207 */
L_1007C216:
    SET_LO8(eax, MEM8(edi)); /* 0x1007C216: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1007C218: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C25D; /* 0x1007C21A: je 0x1007c25d */
L_1007C21C:
    /* cmp MEM32(ebp + 0x18), ecx */ /* 0x1007C21C: cmp dword ptr [ebp + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C229; /* 0x1007C21F: jne 0x1007c229 */
L_1007C221:
    /* cmp LO8(eax), 0x20u */ /* 0x1007C221: cmp al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C25D; /* 0x1007C223: je 0x1007c25d */
L_1007C225:
    /* cmp LO8(eax), 9 */ /* 0x1007C225: cmp al, 9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C25D; /* 0x1007C227: je 0x1007c25d */
L_1007C229:
    /* test edx, edx */ /* 0x1007C229: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C257; /* 0x1007C22B: je 0x1007c257 */
L_1007C22D:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1007C22D: movsx eax, al */
    PUSH32(esp, eax); /* 0x1007C230: push eax */
    RECOMP_CALL(sub_1002E05B); /* 0x1007C231: call 0x1002e05b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C236: pop ecx */
    /* test esi, esi */ /* 0x1007C237: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C24E; /* 0x1007C239: je 0x1007c24e */
L_1007C23B:
    /* test eax, eax */ /* 0x1007C23B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C247; /* 0x1007C23D: je 0x1007c247 */
L_1007C23F:
    SET_LO8(eax, MEM8(edi)); /* 0x1007C23F: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1007C241: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007C243: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007C244: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1007C245: inc dword ptr [ebx] */
    _flag_k = FK_INC;
L_1007C247:
    SET_LO8(eax, MEM8(edi)); /* 0x1007C247: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1007C249: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007C24B: inc esi */
    _flag_k = FK_INC;
    goto L_1007C255; /* 0x1007C24C: jmp 0x1007c255 */
L_1007C24E:
    /* test eax, eax */ /* 0x1007C24E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C255; /* 0x1007C250: je 0x1007c255 */
L_1007C252:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007C252: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1007C253: inc dword ptr [ebx] */
    _flag_k = FK_INC;
L_1007C255:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1007C255: inc dword ptr [ebx] */
    _flag_k = FK_INC;
L_1007C257:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007C257: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1007C1CC; /* 0x1007C258: jmp 0x1007c1cc */
L_1007C25D:
    /* test esi, esi */ /* 0x1007C25D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C265; /* 0x1007C25F: je 0x1007c265 */
L_1007C261:
    MEM8(esi) = (uint8_t)(0); /* 0x1007C261: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007C264: inc esi */
    _flag_k = FK_INC;
L_1007C265:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1007C265: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1007C18E; /* 0x1007C267: jmp 0x1007c18e */
L_1007C26C:
    edx = MEM32(ebp + 0xC); /* 0x1007C26C: mov edx, dword ptr [ebp + 0xc] */
    edi = POP32_VAL(esp); /* 0x1007C26F: pop edi */
    esi = POP32_VAL(esp); /* 0x1007C270: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007C271: pop ebx */
    /* test edx, edx */ /* 0x1007C272: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C279; /* 0x1007C274: je 0x1007c279 */
L_1007C276:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x1007C276: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007C279:
    eax = MEM32(ebp + 0x14); /* 0x1007C279: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1007C27C: inc dword ptr [eax] */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1007C27E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C27F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007C280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C280u);

L_1007C280:
    PUSH32(esp, esi); /* 0x1007C280: push esi */
    esi = MEM32(0x100DF610); /* 0x1007C281: mov esi, dword ptr [0x100df610] */
    PUSH32(esp, edi); /* 0x1007C287: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1007C288: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x1007C28A: mov eax, edi */
    MEM32(0x100E3C9C) = edi; /* 0x1007C28C: mov dword ptr [0x100e3c9c], edi */
    MEM32(0x100E3C98) = eax; /* 0x1007C292: mov dword ptr [0x100e3c98], eax */
    /* cmp MEM32(esi), edi */ /* 0x1007C297: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C2D2; /* 0x1007C299: je 0x1007c2d2 */
L_1007C29B:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x1007C29B: inc dword ptr [esi] */
    _flag_k = FK_INC;
    PUSH32(esp, 0x1007C340u); /* 0x1007C29D: push 0x1007c340 */
    PUSH32(esp, MEM32(esi)); /* 0x1007C2A2: push dword ptr [esi] */
    RECOMP_CALL(sub_1008E4D1); /* 0x1007C2A4: call 0x1008e4d1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C2A9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C2AA: pop ecx */
    /* test eax, eax */ /* 0x1007C2AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C2BA; /* 0x1007C2AD: je 0x1007c2ba */
L_1007C2AF:
    PUSH32(esp, eax); /* 0x1007C2AF: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x1007C2B0: push dword ptr [esi] */
    RECOMP_CALL(sub_1007C41C); /* 0x1007C2B2: call 0x1007c41c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C2B7: pop ecx */
    goto L_1007C2C1; /* 0x1007C2B8: jmp 0x1007c2c1 */
L_1007C2BA:
    PUSH32(esp, MEM32(esi)); /* 0x1007C2BA: push dword ptr [esi] */
    RECOMP_CALL(sub_1007C343); /* 0x1007C2BC: call 0x1007c343 */
    RECOMP_FLAGS_IN();
L_1007C2C1:
    ecx = POP32_VAL(esp); /* 0x1007C2C1: pop ecx */
    /* test eax, eax */ /* 0x1007C2C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C2D6; /* 0x1007C2C4: jne 0x1007c2d6 */
L_1007C2C6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1007C2C6: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), edi */ /* 0x1007C2C9: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C29B; /* 0x1007C2CB: jne 0x1007c29b */
L_1007C2CD:
    eax = MEM32(0x100E3C98); /* 0x1007C2CD: mov eax, dword ptr [0x100e3c98] */
L_1007C2D2:
    esi = edi; /* 0x1007C2D2: mov esi, edi */
    goto L_1007C2DF; /* 0x1007C2D4: jmp 0x1007c2df */
L_1007C2D6:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C2D6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007C33C; /* 0x1007C2D9: jmp 0x1007c33c */
L_1007C2DB:
    eax = MEM32(eax + 0x4); /* 0x1007C2DB: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007C2DE: inc esi */
    _flag_k = FK_INC;
L_1007C2DF:
    /* test eax, eax */ /* 0x1007C2DF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C2DB; /* 0x1007C2E1: jne 0x1007c2db */
L_1007C2E3:
    eax = esi + 0x1; /* 0x1007C2E3: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x1007C2E6: push eax */
    PUSH32(esp, 4); /* 0x1007C2E7: push 4 */
    RECOMP_CALL(sub_10011208); /* 0x1007C2E9: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C2EE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C2EF: pop ecx */
    ecx = eax; /* 0x1007C2F0: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1007C2F2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C2D6; /* 0x1007C2F4: je 0x1007c2d6 */
L_1007C2F6:
    MEM32(0x100DF60C) = esi; /* 0x1007C2F6: mov dword ptr [0x100df60c], esi */
    esi = MEM32(0x100E3C98); /* 0x1007C2FC: mov esi, dword ptr [0x100e3c98] */
    edx = esi; /* 0x1007C302: mov edx, esi */
    MEM32(0x100DF610) = ecx; /* 0x1007C304: mov dword ptr [0x100df610], ecx */
    /* test esi, esi */ /* 0x1007C30A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C31C; /* 0x1007C30C: je 0x1007c31c */
L_1007C30E:
    eax = MEM32(edx); /* 0x1007C30E: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x1007C310: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1007C312: add ecx, 4 */
    _flag_k = FK_ADD;
    edx = MEM32(edx + 0x4); /* 0x1007C315: mov edx, dword ptr [edx + 4] */
    /* test edx, edx */ /* 0x1007C318: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C30E; /* 0x1007C31A: jne 0x1007c30e */
L_1007C31C:
    MEM32(ecx) = edi; /* 0x1007C31C: mov dword ptr [ecx], edi */
    eax = esi; /* 0x1007C31E: mov eax, esi */
    /* test esi, esi */ /* 0x1007C320: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C33A; /* 0x1007C322: je 0x1007c33a */
L_1007C324:
    esi = MEM32(esi + 0x4); /* 0x1007C324: mov esi, dword ptr [esi + 4] */
    PUSH32(esp, eax); /* 0x1007C327: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007C328: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1007C32D: mov eax, esi */
    ecx = POP32_VAL(esp); /* 0x1007C32F: pop ecx */
    /* test esi, esi */ /* 0x1007C330: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C324; /* 0x1007C332: jne 0x1007c324 */
L_1007C334:
    MEM32(0x100E3C98) = esi; /* 0x1007C334: mov dword ptr [0x100e3c98], esi */
L_1007C33A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007C33A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007C33C:
    edi = POP32_VAL(esp); /* 0x1007C33C: pop edi */
    esi = POP32_VAL(esp); /* 0x1007C33D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C33E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007C340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C340u);

L_1007C340:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_HI8(ebx, HI8(ebx) - MEM8(edi)); /* 0x1007C340: sub bh, byte ptr [edi] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1007C342: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1007C345: in al, dx */
    PUSH32(esp, 8); /* 0x1007C346: push 8 */
    RECOMP_CALL(sub_10012226); /* 0x1007C348: call 0x10012226 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C34D: pop ecx */
    ecx = eax; /* 0x1007C34E: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1007C350: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C359; /* 0x1007C352: jne 0x1007c359 */
L_1007C354:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C354: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007C357: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C358: ret  */
L_1007C359:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1007C359: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E3C98), 0 */ /* 0x1007C35D: cmp dword ptr [0x100e3c98], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E3C98)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1007C364: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1007C367: mov dword ptr [ecx], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C375; /* 0x1007C369: je 0x1007c375 */
L_1007C36B:
    eax = MEM32(0x100E3C9C); /* 0x1007C36B: mov eax, dword ptr [0x100e3c9c] */
    MEM32(eax + 0x4) = ecx; /* 0x1007C370: mov dword ptr [eax + 4], ecx */
    goto L_1007C37B; /* 0x1007C373: jmp 0x1007c37b */
L_1007C375:
    MEM32(0x100E3C98) = ecx; /* 0x1007C375: mov dword ptr [0x100e3c98], ecx */
L_1007C37B:
    MEM32(0x100E3C9C) = ecx; /* 0x1007C37B: mov dword ptr [0x100e3c9c], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007C381: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007C383: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C384: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007C343(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C343u);

L_1007C343:
    PUSH32(esp, ebp); /* 0x1007C343: push ebp */
    ebp = esp; /* 0x1007C344: mov ebp, esp */
    PUSH32(esp, 8); /* 0x1007C346: push 8 */
    RECOMP_CALL(sub_10012226); /* 0x1007C348: call 0x10012226 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C34D: pop ecx */
    ecx = eax; /* 0x1007C34E: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1007C350: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C359; /* 0x1007C352: jne 0x1007c359 */
L_1007C354:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C354: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007C357: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C358: ret  */
L_1007C359:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1007C359: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E3C98), 0 */ /* 0x1007C35D: cmp dword ptr [0x100e3c98], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E3C98)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1007C364: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1007C367: mov dword ptr [ecx], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C375; /* 0x1007C369: je 0x1007c375 */
L_1007C36B:
    eax = MEM32(0x100E3C9C); /* 0x1007C36B: mov eax, dword ptr [0x100e3c9c] */
    MEM32(eax + 0x4) = ecx; /* 0x1007C370: mov dword ptr [eax + 4], ecx */
    goto L_1007C37B; /* 0x1007C373: jmp 0x1007c37b */
L_1007C375:
    MEM32(0x100E3C98) = ecx; /* 0x1007C375: mov dword ptr [0x100e3c98], ecx */
L_1007C37B:
    MEM32(0x100E3C9C) = ecx; /* 0x1007C37B: mov dword ptr [0x100e3c9c], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007C381: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007C383: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C384: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007C385(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C385u);

L_1007C385:
    PUSH32(esp, ebp); /* 0x1007C385: push ebp */
    ebp = esp; /* 0x1007C386: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1007C388: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C3F1; /* 0x1007C38C: je 0x1007c3f1 */
L_1007C38E:
    eax = MEM32(0x100E3CA4); /* 0x1007C38E: mov eax, dword ptr [0x100e3ca4] */
    /* test eax, eax */ /* 0x1007C393: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C3AF; /* 0x1007C395: jne 0x1007c3af */
L_1007C397:
    PUSH32(esp, 0x244u); /* 0x1007C397: push 0x244 */
    RECOMP_CALL(sub_10012226); /* 0x1007C39C: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E3CA4) = eax; /* 0x1007C3A1: mov dword ptr [0x100e3ca4], eax */
    ecx = POP32_VAL(esp); /* 0x1007C3A6: pop ecx */
    /* test eax, eax */ /* 0x1007C3A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C3AF; /* 0x1007C3A9: jne 0x1007c3af */
L_1007C3AB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007C3AB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007C3AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C3AE: ret  */
L_1007C3AF:
    ecx = MEM32(0x100E3CA0); /* 0x1007C3AF: mov ecx, dword ptr [0x100e3ca0] */
    PUSH32(esp, esi); /* 0x1007C3B5: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007C3B6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1007C3B8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C3CE; /* 0x1007C3BA: je 0x1007c3ce */
L_1007C3BC:
    PUSH32(esp, ecx); /* 0x1007C3BC: push ecx */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007C3BD: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E3CA4); /* 0x1007C3C3: mov eax, dword ptr [0x100e3ca4] */
    MEM32(0x100E3CA0) = esi; /* 0x1007C3C8: mov dword ptr [0x100e3ca0], esi */
L_1007C3CE:
    PUSH32(esp, esi); /* 0x1007C3CE: push esi */
    PUSH32(esp, esi); /* 0x1007C3CF: push esi */
    PUSH32(esp, esi); /* 0x1007C3D0: push esi */
    PUSH32(esp, eax); /* 0x1007C3D1: push eax */
    PUSH32(esp, esi); /* 0x1007C3D2: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007C3D3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E5064)); /* 0x1007C3D6: call dword ptr [0x100e5064] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E3CA0) = eax; /* 0x1007C3DC: mov dword ptr [0x100e3ca0], eax */
    esi = POP32_VAL(esp); /* 0x1007C3E1: pop esi */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1007C3E2: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C3AB; /* 0x1007C3E5: je 0x1007c3ab */
L_1007C3E7:
    eax = MEM32(0x100E3CA4); /* 0x1007C3E7: mov eax, dword ptr [0x100e3ca4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2Cu; /* 0x1007C3EC: add eax, 0x2c */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007C3EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C3F0: ret  */
L_1007C3F1:
    PUSH32(esp, MEM32(0x100E3CA4)); /* 0x1007C3F1: push dword ptr [0x100e3ca4] */
    PUSH32(esp, MEM32(0x100E3CA0)); /* 0x1007C3F7: push dword ptr [0x100e3ca0] */
    RECOMP_ICALL(MEM32(0x100E5068)); /* 0x1007C3FD: call dword ptr [0x100e5068] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007C403: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C3E7; /* 0x1007C405: jne 0x1007c3e7 */
L_1007C407:
    PUSH32(esp, MEM32(0x100E3CA0)); /* 0x1007C407: push dword ptr [0x100e3ca0] */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007C40D: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x100E3CA0)); _flag_b = (uint32_t)(0);
    MEM32(0x100E3CA0) = MEM32(0x100E3CA0) & 0; /* 0x1007C413: and dword ptr [0x100e3ca0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1007C3AB; /* 0x1007C41A: jmp 0x1007c3ab */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007C41C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C41Cu);

L_1007C41C:
    PUSH32(esp, ebp); /* 0x1007C41C: push ebp */
    ebp = esp; /* 0x1007C41D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1007C41F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1007C422: push ebx */
    PUSH32(esp, esi); /* 0x1007C423: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007C424: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007C427: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007C429: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007C42B: mov dword ptr [ebp - 4], eax */
    /* test esi, esi */ /* 0x1007C42E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C43A; /* 0x1007C430: jne 0x1007c43a */
L_1007C432:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C432: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007C5D9; /* 0x1007C435: jmp 0x1007c5d9 */
L_1007C43A:
    PUSH32(esp, edi); /* 0x1007C43A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1007C43B: mov edi, dword ptr [ebp + 8] */
    goto L_1007C461; /* 0x1007C43E: jmp 0x1007c461 */
L_1007C440:
    SET_LO8(eax, MEM8(esi)); /* 0x1007C440: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x1007C442: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C465; /* 0x1007C444: je 0x1007c465 */
L_1007C446:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1007C446: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C465; /* 0x1007C448: je 0x1007c465 */
L_1007C44A:
    /* cmp LO8(eax), 0x3Au */ /* 0x1007C44A: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C46A; /* 0x1007C44C: je 0x1007c46a */
L_1007C44E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1007C44E: dec esi */
    _flag_k = FK_DEC;
    /* cmp esi, edi */ /* 0x1007C44F: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007C463; /* 0x1007C451: jbe 0x1007c463 */
L_1007C453:
    eax = esi + 0x1; /* 0x1007C453: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x1007C456: push eax */
    PUSH32(esp, edi); /* 0x1007C457: push edi */
    RECOMP_CALL(sub_1008CE86); /* 0x1007C458: call 0x1008ce86 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C45D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C45E: pop ecx */
    esi = eax; /* 0x1007C45F: mov esi, eax */
L_1007C461:
    /* cmp esi, edi */ /* 0x1007C461: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1007C463:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1007C440; /* 0x1007C463: jne 0x1007c440 */
L_1007C465:
    /* cmp MEM8(esi), 0x3Au */ /* 0x1007C465: cmp byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C475; /* 0x1007C468: jne 0x1007c475 */
L_1007C46A:
    eax = edi + 0x1; /* 0x1007C46A: lea eax, [edi + 1] */
    /* cmp esi, eax */ /* 0x1007C46D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C5D1; /* 0x1007C46F: jne 0x1007c5d1 */
L_1007C475:
    SET_LO8(eax, MEM8(esi)); /* 0x1007C475: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x1007C477: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C483; /* 0x1007C479: je 0x1007c483 */
L_1007C47B:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1007C47B: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C483; /* 0x1007C47D: je 0x1007c483 */
L_1007C47F:
    /* cmp LO8(eax), 0x3Au */ /* 0x1007C47F: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C488; /* 0x1007C481: jne 0x1007c488 */
L_1007C483:
    ebx = esi; /* 0x1007C483: mov ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x1007C485: sub ebx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007C487: inc ebx */
    _flag_k = FK_INC;
L_1007C488:
    PUSH32(esp, edi); /* 0x1007C488: push edi */
    RECOMP_CALL(sub_1007C385); /* 0x1007C489: call 0x1007c385 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x1007C48E: mov dword ptr [ebp + 0xc], eax */
    ecx = POP32_VAL(esp); /* 0x1007C491: pop ecx */
    /* test eax, eax */ /* 0x1007C492: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C5D1; /* 0x1007C494: je 0x1007c5d1 */
L_1007C49A:
    ecx = MEM32(0x100E3C9C); /* 0x1007C49A: mov ecx, dword ptr [0x100e3c9c] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1007C4A0: mov dword ptr [ebp - 0x10], ecx */
L_1007C4A3:
    PUSH32(esp, 0x10062134u); /* 0x1007C4A3: push 0x10062134 */
    PUSH32(esp, eax); /* 0x1007C4A8: push eax */
    RECOMP_CALL(sub_1008CC09); /* 0x1007C4A9: call 0x1008cc09 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C4AE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C4AF: pop ecx */
    /* test eax, eax */ /* 0x1007C4B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C56D; /* 0x1007C4B2: je 0x1007c56d */
L_1007C4B8:
    PUSH32(esp, 0x1007C5ECu); /* 0x1007C4B8: push 0x1007c5ec */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007C4BD: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1008CC09); /* 0x1007C4C0: call 0x1008cc09 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C4C5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C4C6: pop ecx */
    /* test eax, eax */ /* 0x1007C4C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C56D; /* 0x1007C4C9: je 0x1007c56d */
L_1007C4CF:
    SET_LO8(eax, MEM8(esi)); /* 0x1007C4CF: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x1007C4D1: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C4F3; /* 0x1007C4D3: je 0x1007c4f3 */
L_1007C4D5:
    /* cmp LO8(eax), 0x3Au */ /* 0x1007C4D5: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C4F3; /* 0x1007C4D7: je 0x1007c4f3 */
L_1007C4D9:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1007C4D9: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C4F3; /* 0x1007C4DB: je 0x1007c4f3 */
L_1007C4DD:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007C4DD: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1002C50F); /* 0x1007C4E0: call 0x1002c50f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007C4E5: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1007C4E7: pop ecx */
    /* test edi, edi */ /* 0x1007C4E8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C593; /* 0x1007C4EA: je 0x1007c593 */
L_1007C4F0:
    PUSH32(esp, edi); /* 0x1007C4F0: push edi */
    goto L_1007C560; /* 0x1007C4F1: jmp 0x1007c560 */
L_1007C4F3:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007C4F3: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_100129AF); /* 0x1007C4F6: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007C4FB: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1007C4FC: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1007C4FE: mov dword ptr [ebp - 8], eax */
    ecx = POP32_VAL(esp); /* 0x1007C501: pop ecx */
    /* test ebx, ebx */ /* 0x1007C502: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1007C593; /* 0x1007C504: js 0x1007c593 */
L_1007C50A:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1007C50A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007C593; /* 0x1007C50D: jae 0x1007c593 */
L_1007C513:
    /* cmp eax, ebx */ /* 0x1007C513: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007C593; /* 0x1007C515: jb 0x1007c593 */
L_1007C517:
    PUSH32(esp, 1); /* 0x1007C517: push 1 */
    PUSH32(esp, eax); /* 0x1007C519: push eax */
    RECOMP_CALL(sub_10011208); /* 0x1007C51A: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x1007C51F: mov dword ptr [ebp - 0xc], eax */
    ecx = POP32_VAL(esp); /* 0x1007C522: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C523: pop ecx */
    /* test eax, eax */ /* 0x1007C524: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C593; /* 0x1007C526: je 0x1007c593 */
L_1007C528:
    PUSH32(esp, ebx); /* 0x1007C528: push ebx */
    PUSH32(esp, edi); /* 0x1007C529: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1007C52A: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1007C52D: push eax */
    RECOMP_CALL(sub_1008D8A4); /* 0x1007C52E: call 0x1008d8a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007C533: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007C536: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C5DF; /* 0x1007C538: jne 0x1007c5df */
L_1007C53E:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007C53E: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x8)); /* 0x1007C541: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1007C544: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1007C546: push eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1007C547: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1007C54A: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1007C54C: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x1007C54D: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007C552: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007C555: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C5DF; /* 0x1007C557: jne 0x1007c5df */
L_1007C55D:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1007C55D: push dword ptr [ebp - 0xc] */
L_1007C560:
    RECOMP_CALL(sub_1007C343); /* 0x1007C560: call 0x1007c343 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C565: pop ecx */
    /* test eax, eax */ /* 0x1007C566: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C593; /* 0x1007C568: jne 0x1007c593 */
L_1007C56A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1007C56A: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
L_1007C56D:
    PUSH32(esp, 0); /* 0x1007C56D: push 0 */
    RECOMP_CALL(sub_1007C385); /* 0x1007C56F: call 0x1007c385 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x1007C574: mov dword ptr [ebp + 0xc], eax */
    ecx = POP32_VAL(esp); /* 0x1007C577: pop ecx */
    /* test eax, eax */ /* 0x1007C578: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C4A3; /* 0x1007C57A: jne 0x1007c4a3 */
L_1007C580:
    eax = MEM32(ebp + (-0x4)); /* 0x1007C580: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1007C583: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C5D1; /* 0x1007C585: je 0x1007c5d1 */
L_1007C587:
    eax = MEM32(ebp + (-0x10)); /* 0x1007C587: mov eax, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x1007C58A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C598; /* 0x1007C58C: je 0x1007c598 */
L_1007C58E:
    edi = MEM32(eax + 0x4); /* 0x1007C58E: mov edi, dword ptr [eax + 4] */
    goto L_1007C59E; /* 0x1007C591: jmp 0x1007c59e */
L_1007C593:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C593: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007C5D8; /* 0x1007C596: jmp 0x1007c5d8 */
L_1007C598:
    edi = MEM32(0x100E3C98); /* 0x1007C598: mov edi, dword ptr [0x100e3c98] */
L_1007C59E:
    /* test edi, edi */ /* 0x1007C59E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C5C4; /* 0x1007C5A0: jne 0x1007c5c4 */
L_1007C5A2:
    goto L_1007C5CD; /* 0x1007C5A2: jmp 0x1007c5cd */
L_1007C5A4:
    PUSH32(esp, MEM32(edi)); /* 0x1007C5A4: push dword ptr [edi] */
    PUSH32(esp, MEM32(esi)); /* 0x1007C5A6: push dword ptr [esi] */
    RECOMP_CALL(sub_1008CF23); /* 0x1007C5A8: call 0x1008cf23 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C5AD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C5AE: pop ecx */
    /* test eax, eax */ /* 0x1007C5AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1007C5BB; /* 0x1007C5B1: jns 0x1007c5bb */
L_1007C5B3:
    ecx = MEM32(edi); /* 0x1007C5B3: mov ecx, dword ptr [edi] */
    eax = MEM32(esi); /* 0x1007C5B5: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x1007C5B7: mov dword ptr [edi], eax */
    MEM32(esi) = ecx; /* 0x1007C5B9: mov dword ptr [esi], ecx */
L_1007C5BB:
    esi = MEM32(esi + 0x4); /* 0x1007C5BB: mov esi, dword ptr [esi + 4] */
    /* test esi, esi */ /* 0x1007C5BE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C5A4; /* 0x1007C5C0: jne 0x1007c5a4 */
L_1007C5C2:
    edi = MEM32(ebx); /* 0x1007C5C2: mov edi, dword ptr [ebx] */
L_1007C5C4:
    ebx = edi + 0x4; /* 0x1007C5C4: lea ebx, [edi + 4] */
    esi = MEM32(ebx); /* 0x1007C5C7: mov esi, dword ptr [ebx] */
    /* test esi, esi */ /* 0x1007C5C9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C5A4; /* 0x1007C5CB: jne 0x1007c5a4 */
L_1007C5CD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007C5CD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007C5D8; /* 0x1007C5CF: jmp 0x1007c5d8 */
L_1007C5D1:
    PUSH32(esp, edi); /* 0x1007C5D1: push edi */
    RECOMP_CALL(sub_1007C343); /* 0x1007C5D2: call 0x1007c343 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C5D7: pop ecx */
L_1007C5D8:
    edi = POP32_VAL(esp); /* 0x1007C5D8: pop edi */
L_1007C5D9:
    esi = POP32_VAL(esp); /* 0x1007C5D9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007C5DA: pop ebx */
    esp = ebp; /* 0x1007C5DB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007C5DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C5DE: ret  */
L_1007C5DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007C5DF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1007C5E1: push eax */
    PUSH32(esp, eax); /* 0x1007C5E2: push eax */
    PUSH32(esp, eax); /* 0x1007C5E3: push eax */
    PUSH32(esp, eax); /* 0x1007C5E4: push eax */
    PUSH32(esp, eax); /* 0x1007C5E5: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x1007C5E6: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007C5EBu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007C5EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C5ECu);

L_1007C5EC:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1007C5EC: add byte ptr cs:[ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1007C5F1: in al, dx */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1007C5F2: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C65B; /* 0x1007C5F6: je 0x1007c65b */
L_1007C5F8:
    eax = MEM32(0x100E3CAC); /* 0x1007C5F8: mov eax, dword ptr [0x100e3cac] */
    /* test eax, eax */ /* 0x1007C5FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C619; /* 0x1007C5FF: jne 0x1007c619 */
L_1007C601:
    PUSH32(esp, 0x354u); /* 0x1007C601: push 0x354 */
    RECOMP_CALL(sub_10012226); /* 0x1007C606: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E3CAC) = eax; /* 0x1007C60B: mov dword ptr [0x100e3cac], eax */
    ecx = POP32_VAL(esp); /* 0x1007C610: pop ecx */
    /* test eax, eax */ /* 0x1007C611: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C619; /* 0x1007C613: jne 0x1007c619 */
L_1007C615:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007C615: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007C617: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C618: ret  */
L_1007C619:
    ecx = MEM32(0x100E3CA8); /* 0x1007C619: mov ecx, dword ptr [0x100e3ca8] */
    PUSH32(esp, esi); /* 0x1007C61F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007C620: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1007C622: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C638; /* 0x1007C624: je 0x1007c638 */
L_1007C626:
    PUSH32(esp, ecx); /* 0x1007C626: push ecx */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007C627: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E3CAC); /* 0x1007C62D: mov eax, dword ptr [0x100e3cac] */
    MEM32(0x100E3CA8) = esi; /* 0x1007C632: mov dword ptr [0x100e3ca8], esi */
L_1007C638:
    PUSH32(esp, esi); /* 0x1007C638: push esi */
    PUSH32(esp, esi); /* 0x1007C639: push esi */
    PUSH32(esp, esi); /* 0x1007C63A: push esi */
    PUSH32(esp, eax); /* 0x1007C63B: push eax */
    PUSH32(esp, esi); /* 0x1007C63C: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007C63D: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E506C)); /* 0x1007C640: call dword ptr [0x100e506c] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E3CA8) = eax; /* 0x1007C646: mov dword ptr [0x100e3ca8], eax */
    esi = POP32_VAL(esp); /* 0x1007C64B: pop esi */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1007C64C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C615; /* 0x1007C64F: je 0x1007c615 */
L_1007C651:
    eax = MEM32(0x100E3CAC); /* 0x1007C651: mov eax, dword ptr [0x100e3cac] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2Cu; /* 0x1007C656: add eax, 0x2c */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007C659: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C65A: ret  */
L_1007C65B:
    PUSH32(esp, MEM32(0x100E3CAC)); /* 0x1007C65B: push dword ptr [0x100e3cac] */
    PUSH32(esp, MEM32(0x100E3CA8)); /* 0x1007C661: push dword ptr [0x100e3ca8] */
    RECOMP_ICALL(MEM32(0x100E5070)); /* 0x1007C667: call dword ptr [0x100e5070] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007C66D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C651; /* 0x1007C66F: jne 0x1007c651 */
L_1007C671:
    PUSH32(esp, MEM32(0x100E3CA8)); /* 0x1007C671: push dword ptr [0x100e3ca8] */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007C677: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x100E3CA8)); _flag_b = (uint32_t)(0);
    MEM32(0x100E3CA8) = MEM32(0x100E3CA8) & 0; /* 0x1007C67D: and dword ptr [0x100e3ca8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1007C615; /* 0x1007C684: jmp 0x1007c615 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007C5EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C5EFu);

L_1007C5EF:
    PUSH32(esp, ebp); /* 0x1007C5EF: push ebp */
    ebp = esp; /* 0x1007C5F0: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1007C5F2: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C65B; /* 0x1007C5F6: je 0x1007c65b */
L_1007C5F8:
    eax = MEM32(0x100E3CAC); /* 0x1007C5F8: mov eax, dword ptr [0x100e3cac] */
    /* test eax, eax */ /* 0x1007C5FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C619; /* 0x1007C5FF: jne 0x1007c619 */
L_1007C601:
    PUSH32(esp, 0x354u); /* 0x1007C601: push 0x354 */
    RECOMP_CALL(sub_10012226); /* 0x1007C606: call 0x10012226 */
    RECOMP_FLAGS_IN();
    MEM32(0x100E3CAC) = eax; /* 0x1007C60B: mov dword ptr [0x100e3cac], eax */
    ecx = POP32_VAL(esp); /* 0x1007C610: pop ecx */
    /* test eax, eax */ /* 0x1007C611: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C619; /* 0x1007C613: jne 0x1007c619 */
L_1007C615:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007C615: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1007C617: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C618: ret  */
L_1007C619:
    ecx = MEM32(0x100E3CA8); /* 0x1007C619: mov ecx, dword ptr [0x100e3ca8] */
    PUSH32(esp, esi); /* 0x1007C61F: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007C620: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1007C622: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C638; /* 0x1007C624: je 0x1007c638 */
L_1007C626:
    PUSH32(esp, ecx); /* 0x1007C626: push ecx */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007C627: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E3CAC); /* 0x1007C62D: mov eax, dword ptr [0x100e3cac] */
    MEM32(0x100E3CA8) = esi; /* 0x1007C632: mov dword ptr [0x100e3ca8], esi */
L_1007C638:
    PUSH32(esp, esi); /* 0x1007C638: push esi */
    PUSH32(esp, esi); /* 0x1007C639: push esi */
    PUSH32(esp, esi); /* 0x1007C63A: push esi */
    PUSH32(esp, eax); /* 0x1007C63B: push eax */
    PUSH32(esp, esi); /* 0x1007C63C: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007C63D: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E506C)); /* 0x1007C640: call dword ptr [0x100e506c] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E3CA8) = eax; /* 0x1007C646: mov dword ptr [0x100e3ca8], eax */
    esi = POP32_VAL(esp); /* 0x1007C64B: pop esi */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1007C64C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C615; /* 0x1007C64F: je 0x1007c615 */
L_1007C651:
    eax = MEM32(0x100E3CAC); /* 0x1007C651: mov eax, dword ptr [0x100e3cac] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2Cu; /* 0x1007C656: add eax, 0x2c */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007C659: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C65A: ret  */
L_1007C65B:
    PUSH32(esp, MEM32(0x100E3CAC)); /* 0x1007C65B: push dword ptr [0x100e3cac] */
    PUSH32(esp, MEM32(0x100E3CA8)); /* 0x1007C661: push dword ptr [0x100e3ca8] */
    RECOMP_ICALL(MEM32(0x100E5070)); /* 0x1007C667: call dword ptr [0x100e5070] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007C66D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C651; /* 0x1007C66F: jne 0x1007c651 */
L_1007C671:
    PUSH32(esp, MEM32(0x100E3CA8)); /* 0x1007C671: push dword ptr [0x100e3ca8] */
    RECOMP_ICALL(MEM32(0x100E5060)); /* 0x1007C677: call dword ptr [0x100e5060] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x100E3CA8)); _flag_b = (uint32_t)(0);
    MEM32(0x100E3CA8) = MEM32(0x100E3CA8) & 0; /* 0x1007C67D: and dword ptr [0x100e3ca8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1007C615; /* 0x1007C684: jmp 0x1007c615 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007C686(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C686u);

L_1007C686:
    PUSH32(esp, ebp); /* 0x1007C686: push ebp */
    ebp = esp; /* 0x1007C687: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1007C689: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1007C68C: push ebx */
    PUSH32(esp, esi); /* 0x1007C68D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007C68E: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007C691: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007C693: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007C695: mov dword ptr [ebp - 4], eax */
    /* test esi, esi */ /* 0x1007C698: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C6A4; /* 0x1007C69A: jne 0x1007c6a4 */
L_1007C69C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C69C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007C85E; /* 0x1007C69F: jmp 0x1007c85e */
L_1007C6A4:
    PUSH32(esp, edi); /* 0x1007C6A4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1007C6A5: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x5Cu); /* 0x1007C6A8: push 0x5c */
    edx = POP32_VAL(esp); /* 0x1007C6AA: pop edx */
    PUSH32(esp, 0x3Au); /* 0x1007C6AB: push 0x3a */
    MEM32(ebp + 0xC) = 0x2Fu; /* 0x1007C6AD: mov dword ptr [ebp + 0xc], 0x2f */
    ecx = POP32_VAL(esp); /* 0x1007C6B4: pop ecx */
    goto L_1007C6CD; /* 0x1007C6B5: jmp 0x1007c6cd */
L_1007C6B7:
    eax = (uint32_t)MEM16(esi); /* 0x1007C6B7: movzx eax, word ptr [esi] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1007C6BA: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C6D1; /* 0x1007C6BD: je 0x1007c6d1 */
L_1007C6BF:
    /* cmp LO16(eax), MEM16(ebp + 0xC) */ /* 0x1007C6BF: cmp ax, word ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0xC)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C6D1; /* 0x1007C6C3: je 0x1007c6d1 */
L_1007C6C5:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1007C6C5: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C6D6; /* 0x1007C6C8: je 0x1007c6d6 */
L_1007C6CA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x1007C6CA: sub esi, 2 */
    _flag_k = FK_CMP;
L_1007C6CD:
    /* cmp esi, edi */ /* 0x1007C6CD: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C6B7; /* 0x1007C6CF: jne 0x1007c6b7 */
L_1007C6D1:
    /* cmp MEM16(esi), LO16(ecx) */ /* 0x1007C6D1: cmp word ptr [esi], cx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C6E1; /* 0x1007C6D4: jne 0x1007c6e1 */
L_1007C6D6:
    eax = edi + 0x2; /* 0x1007C6D6: lea eax, [edi + 2] */
    /* cmp esi, eax */ /* 0x1007C6D9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C856; /* 0x1007C6DB: jne 0x1007c856 */
L_1007C6E1:
    eax = (uint32_t)MEM16(esi); /* 0x1007C6E1: movzx eax, word ptr [esi] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1007C6E4: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C6F6; /* 0x1007C6E7: je 0x1007c6f6 */
L_1007C6E9:
    PUSH32(esp, 0x2Fu); /* 0x1007C6E9: push 0x2f */
    edx = POP32_VAL(esp); /* 0x1007C6EB: pop edx */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1007C6EC: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C6F6; /* 0x1007C6EF: je 0x1007c6f6 */
L_1007C6F1:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1007C6F1: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007C6FD; /* 0x1007C6F4: jne 0x1007c6fd */
L_1007C6F6:
    ebx = esi; /* 0x1007C6F6: mov ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x1007C6F8: sub ebx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x1007C6FA: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007C6FC: inc ebx */
    _flag_k = FK_INC;
L_1007C6FD:
    PUSH32(esp, edi); /* 0x1007C6FD: push edi */
    RECOMP_CALL(sub_1007C5EF); /* 0x1007C6FE: call 0x1007c5ef */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x1007C703: mov dword ptr [ebp + 0xc], eax */
    ecx = POP32_VAL(esp); /* 0x1007C706: pop ecx */
    /* test eax, eax */ /* 0x1007C707: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C856; /* 0x1007C709: je 0x1007c856 */
L_1007C70F:
    ecx = MEM32(0x100E1428); /* 0x1007C70F: mov ecx, dword ptr [0x100e1428] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1007C715: mov dword ptr [ebp - 0x10], ecx */
L_1007C718:
    PUSH32(esp, 0x100282D8u); /* 0x1007C718: push 0x100282d8 */
    PUSH32(esp, eax); /* 0x1007C71D: push eax */
    RECOMP_CALL(sub_1001310D); /* 0x1007C71E: call 0x1001310d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C723: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C724: pop ecx */
    /* test eax, eax */ /* 0x1007C725: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C7F2; /* 0x1007C727: je 0x1007c7f2 */
L_1007C72D:
    PUSH32(esp, 0x1007C874u); /* 0x1007C72D: push 0x1007c874 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007C732: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1001310D); /* 0x1007C735: call 0x1001310d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C73A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C73B: pop ecx */
    /* test eax, eax */ /* 0x1007C73C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C7F2; /* 0x1007C73E: je 0x1007c7f2 */
L_1007C744:
    eax = (uint32_t)MEM16(esi); /* 0x1007C744: movzx eax, word ptr [esi] */
    PUSH32(esp, 0x5Cu); /* 0x1007C747: push 0x5c */
    ecx = POP32_VAL(esp); /* 0x1007C749: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1007C74A: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C775; /* 0x1007C74D: je 0x1007c775 */
L_1007C74F:
    PUSH32(esp, 0x3Au); /* 0x1007C74F: push 0x3a */
    ecx = POP32_VAL(esp); /* 0x1007C751: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1007C752: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C775; /* 0x1007C755: je 0x1007c775 */
L_1007C757:
    PUSH32(esp, 0x2Fu); /* 0x1007C757: push 0x2f */
    ecx = POP32_VAL(esp); /* 0x1007C759: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1007C75A: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C775; /* 0x1007C75D: je 0x1007c775 */
L_1007C75F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007C75F: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10030E8C); /* 0x1007C762: call 0x10030e8c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007C767: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1007C769: pop ecx */
    /* test edi, edi */ /* 0x1007C76A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C818; /* 0x1007C76C: je 0x1007c818 */
L_1007C772:
    PUSH32(esp, edi); /* 0x1007C772: push edi */
    goto L_1007C7E5; /* 0x1007C773: jmp 0x1007c7e5 */
L_1007C775:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007C775: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1000F1F3); /* 0x1007C778: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007C77D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1007C77E: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1007C780: mov dword ptr [ebp - 8], eax */
    ecx = POP32_VAL(esp); /* 0x1007C783: pop ecx */
    /* test ebx, ebx */ /* 0x1007C784: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1007C818; /* 0x1007C786: js 0x1007c818 */
L_1007C78C:
    /* cmp eax, 0x7FFFFFFFu */ /* 0x1007C78C: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007C818; /* 0x1007C791: jae 0x1007c818 */
L_1007C797:
    /* cmp eax, ebx */ /* 0x1007C797: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007C818; /* 0x1007C799: jb 0x1007c818 */
L_1007C79B:
    PUSH32(esp, 2); /* 0x1007C79B: push 2 */
    PUSH32(esp, eax); /* 0x1007C79D: push eax */
    RECOMP_CALL(sub_10011208); /* 0x1007C79E: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x1007C7A3: mov dword ptr [ebp - 0xc], eax */
    ecx = POP32_VAL(esp); /* 0x1007C7A6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C7A7: pop ecx */
    /* test eax, eax */ /* 0x1007C7A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C818; /* 0x1007C7AA: je 0x1007c818 */
L_1007C7AC:
    PUSH32(esp, ebx); /* 0x1007C7AC: push ebx */
    PUSH32(esp, edi); /* 0x1007C7AD: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1007C7AE: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1007C7B1: push eax */
    RECOMP_CALL(sub_1001218A); /* 0x1007C7B2: call 0x1001218a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007C7B7: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007C7BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C864; /* 0x1007C7BC: jne 0x1007c864 */
L_1007C7C2:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007C7C2: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x8)); /* 0x1007C7C5: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1007C7C8: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1007C7CA: push eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1007C7CB: mov eax, dword ptr [ebp - 0xc] */
    eax = eax + ebx * 2; /* 0x1007C7CE: lea eax, [eax + ebx*2] */
    PUSH32(esp, eax); /* 0x1007C7D1: push eax */
    RECOMP_CALL(sub_10011693); /* 0x1007C7D2: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007C7D7: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007C7DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C864; /* 0x1007C7DC: jne 0x1007c864 */
L_1007C7E2:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1007C7E2: push dword ptr [ebp - 0xc] */
L_1007C7E5:
    RECOMP_CALL(sub_10032C27); /* 0x1007C7E5: call 0x10032c27 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C7EA: pop ecx */
    /* test eax, eax */ /* 0x1007C7EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C818; /* 0x1007C7ED: jne 0x1007c818 */
L_1007C7EF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1007C7EF: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
L_1007C7F2:
    PUSH32(esp, 0); /* 0x1007C7F2: push 0 */
    RECOMP_CALL(sub_1007C5EF); /* 0x1007C7F4: call 0x1007c5ef */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x1007C7F9: mov dword ptr [ebp + 0xc], eax */
    ecx = POP32_VAL(esp); /* 0x1007C7FC: pop ecx */
    /* test eax, eax */ /* 0x1007C7FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C718; /* 0x1007C7FF: jne 0x1007c718 */
L_1007C805:
    eax = MEM32(ebp + (-0x4)); /* 0x1007C805: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1007C808: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C856; /* 0x1007C80A: je 0x1007c856 */
L_1007C80C:
    eax = MEM32(ebp + (-0x10)); /* 0x1007C80C: mov eax, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x1007C80F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C81D; /* 0x1007C811: je 0x1007c81d */
L_1007C813:
    edi = MEM32(eax + 0x4); /* 0x1007C813: mov edi, dword ptr [eax + 4] */
    goto L_1007C823; /* 0x1007C816: jmp 0x1007c823 */
L_1007C818:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C818: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007C85D; /* 0x1007C81B: jmp 0x1007c85d */
L_1007C81D:
    edi = MEM32(0x100E1424); /* 0x1007C81D: mov edi, dword ptr [0x100e1424] */
L_1007C823:
    /* test edi, edi */ /* 0x1007C823: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C849; /* 0x1007C825: jne 0x1007c849 */
L_1007C827:
    goto L_1007C852; /* 0x1007C827: jmp 0x1007c852 */
L_1007C829:
    PUSH32(esp, MEM32(edi)); /* 0x1007C829: push dword ptr [edi] */
    PUSH32(esp, MEM32(esi)); /* 0x1007C82B: push dword ptr [esi] */
    RECOMP_CALL(sub_1000F840); /* 0x1007C82D: call 0x1000f840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C832: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C833: pop ecx */
    /* test eax, eax */ /* 0x1007C834: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1007C840; /* 0x1007C836: jns 0x1007c840 */
L_1007C838:
    ecx = MEM32(edi); /* 0x1007C838: mov ecx, dword ptr [edi] */
    eax = MEM32(esi); /* 0x1007C83A: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x1007C83C: mov dword ptr [edi], eax */
    MEM32(esi) = ecx; /* 0x1007C83E: mov dword ptr [esi], ecx */
L_1007C840:
    esi = MEM32(esi + 0x4); /* 0x1007C840: mov esi, dword ptr [esi + 4] */
    /* test esi, esi */ /* 0x1007C843: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C829; /* 0x1007C845: jne 0x1007c829 */
L_1007C847:
    edi = MEM32(ebx); /* 0x1007C847: mov edi, dword ptr [ebx] */
L_1007C849:
    ebx = edi + 0x4; /* 0x1007C849: lea ebx, [edi + 4] */
    esi = MEM32(ebx); /* 0x1007C84C: mov esi, dword ptr [ebx] */
    /* test esi, esi */ /* 0x1007C84E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C829; /* 0x1007C850: jne 0x1007c829 */
L_1007C852:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007C852: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007C85D; /* 0x1007C854: jmp 0x1007c85d */
L_1007C856:
    PUSH32(esp, edi); /* 0x1007C856: push edi */
    RECOMP_CALL(sub_10032C27); /* 0x1007C857: call 0x10032c27 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C85C: pop ecx */
L_1007C85D:
    edi = POP32_VAL(esp); /* 0x1007C85D: pop edi */
L_1007C85E:
    esi = POP32_VAL(esp); /* 0x1007C85E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007C85F: pop ebx */
    esp = ebp; /* 0x1007C860: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007C862: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C863: ret  */
L_1007C864:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007C864: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1007C866: push eax */
    PUSH32(esp, eax); /* 0x1007C867: push eax */
    PUSH32(esp, eax); /* 0x1007C868: push eax */
    PUSH32(esp, eax); /* 0x1007C869: push eax */
    PUSH32(esp, eax); /* 0x1007C86A: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x1007C86B: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007C870u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007C874(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C874u);

L_1007C874:
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x1007C874: add byte ptr cs:[esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1007C877: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1007C879: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1007C87C: in al, dx */
    PUSH32(esp, ebx); /* 0x1007C87D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1007C87E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007C881: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007C882: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1007C884: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C89D; /* 0x1007C886: jne 0x1007c89d */
L_1007C888:
    RECOMP_CALL(sub_1001177D); /* 0x1007C888: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007C88D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007C893: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C898: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007C905; /* 0x1007C89B: jmp 0x1007c905 */
L_1007C89D:
    PUSH32(esp, edi); /* 0x1007C89D: push edi */
    PUSH32(esp, 0x3BCu); /* 0x1007C89E: push 0x3bc */
    PUSH32(esp, 1); /* 0x1007C8A3: push 1 */
    RECOMP_CALL(sub_10011208); /* 0x1007C8A5: call 0x10011208 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007C8AA: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1007C8AC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C8AD: pop ecx */
    /* test edi, edi */ /* 0x1007C8AE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C8EF; /* 0x1007C8B0: je 0x1007c8ef */
L_1007C8B2:
    RECOMP_CALL(sub_1000F750); /* 0x1007C8B2: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax + 0x6C)); /* 0x1007C8B7: push dword ptr [eax + 0x6c] */
    PUSH32(esp, edi); /* 0x1007C8BA: push edi */
    RECOMP_CALL(sub_10011BFD); /* 0x1007C8BB: call 0x10011bfd */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1007C8C0: mov eax, dword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x1007C8C3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C8C4: pop ecx */
    PUSH32(esp, edi); /* 0x1007C8C5: push edi */
    PUSH32(esp, 4); /* 0x1007C8C6: push 4 */
    PUSH32(esp, edi); /* 0x1007C8C8: push edi */
    PUSH32(esp, 0x1007C9A7u); /* 0x1007C8C9: push 0x1007c9a7 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007C8CE: push dword ptr [ebp + 0xc] */
    MEM32(edi + 0x54) = ebx; /* 0x1007C8D1: mov dword ptr [edi + 0x54], ebx */
    PUSH32(esp, esi); /* 0x1007C8D4: push esi */
    MEM32(edi + 0x58) = eax; /* 0x1007C8D5: mov dword ptr [edi + 0x58], eax */
    RECOMP_ICALL(MEM32(0x100E5078)); /* 0x1007C8D8: call dword ptr [0x100e5078] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007C8DE: mov esi, eax */
    MEM32(edi + 0x4) = esi; /* 0x1007C8E0: mov dword ptr [edi + 4], esi */
    /* test esi, esi */ /* 0x1007C8E3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C909; /* 0x1007C8E5: jne 0x1007c909 */
L_1007C8E7:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007C8E7: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007C8ED: mov esi, eax */
L_1007C8EF:
    PUSH32(esp, edi); /* 0x1007C8EF: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007C8F0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C8F5: pop ecx */
    /* test esi, esi */ /* 0x1007C8F6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C901; /* 0x1007C8F8: je 0x1007c901 */
L_1007C8FA:
    PUSH32(esp, esi); /* 0x1007C8FA: push esi */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007C8FB: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C900: pop ecx */
L_1007C901:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C901: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007C904:
    edi = POP32_VAL(esp); /* 0x1007C904: pop edi */
L_1007C905:
    esi = POP32_VAL(esp); /* 0x1007C905: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007C906: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1007C907: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C908: ret  */
L_1007C909:
    PUSH32(esp, esi); /* 0x1007C909: push esi */
    RECOMP_ICALL(MEM32(0x100E5080)); /* 0x1007C90A: call dword ptr [0x100e5080] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1007C910: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C8E7; /* 0x1007C913: je 0x1007c8e7 */
L_1007C915:
    eax = esi; /* 0x1007C915: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1007C904; /* 0x1007C917: jmp 0x1007c904 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007C87A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C87Au);

L_1007C87A:
    PUSH32(esp, ebp); /* 0x1007C87A: push ebp */
    ebp = esp; /* 0x1007C87B: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1007C87D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1007C87E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007C881: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007C882: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1007C884: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C89D; /* 0x1007C886: jne 0x1007c89d */
L_1007C888:
    RECOMP_CALL(sub_1001177D); /* 0x1007C888: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007C88D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x1007C893: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C898: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1007C905; /* 0x1007C89B: jmp 0x1007c905 */
L_1007C89D:
    PUSH32(esp, edi); /* 0x1007C89D: push edi */
    PUSH32(esp, 0x3BCu); /* 0x1007C89E: push 0x3bc */
    PUSH32(esp, 1); /* 0x1007C8A3: push 1 */
    RECOMP_CALL(sub_10011208); /* 0x1007C8A5: call 0x10011208 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007C8AA: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1007C8AC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C8AD: pop ecx */
    /* test edi, edi */ /* 0x1007C8AE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C8EF; /* 0x1007C8B0: je 0x1007c8ef */
L_1007C8B2:
    RECOMP_CALL(sub_1000F750); /* 0x1007C8B2: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax + 0x6C)); /* 0x1007C8B7: push dword ptr [eax + 0x6c] */
    PUSH32(esp, edi); /* 0x1007C8BA: push edi */
    RECOMP_CALL(sub_10011BFD); /* 0x1007C8BB: call 0x10011bfd */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1007C8C0: mov eax, dword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x1007C8C3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C8C4: pop ecx */
    PUSH32(esp, edi); /* 0x1007C8C5: push edi */
    PUSH32(esp, 4); /* 0x1007C8C6: push 4 */
    PUSH32(esp, edi); /* 0x1007C8C8: push edi */
    PUSH32(esp, 0x1007C9A7u); /* 0x1007C8C9: push 0x1007c9a7 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007C8CE: push dword ptr [ebp + 0xc] */
    MEM32(edi + 0x54) = ebx; /* 0x1007C8D1: mov dword ptr [edi + 0x54], ebx */
    PUSH32(esp, esi); /* 0x1007C8D4: push esi */
    MEM32(edi + 0x58) = eax; /* 0x1007C8D5: mov dword ptr [edi + 0x58], eax */
    RECOMP_ICALL(MEM32(0x100E5078)); /* 0x1007C8D8: call dword ptr [0x100e5078] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007C8DE: mov esi, eax */
    MEM32(edi + 0x4) = esi; /* 0x1007C8E0: mov dword ptr [edi + 4], esi */
    /* test esi, esi */ /* 0x1007C8E3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C909; /* 0x1007C8E5: jne 0x1007c909 */
L_1007C8E7:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007C8E7: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007C8ED: mov esi, eax */
L_1007C8EF:
    PUSH32(esp, edi); /* 0x1007C8EF: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007C8F0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C8F5: pop ecx */
    /* test esi, esi */ /* 0x1007C8F6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C901; /* 0x1007C8F8: je 0x1007c901 */
L_1007C8FA:
    PUSH32(esp, esi); /* 0x1007C8FA: push esi */
    RECOMP_CALL(sub_1001E4A7); /* 0x1007C8FB: call 0x1001e4a7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C900: pop ecx */
L_1007C901:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007C901: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007C904:
    edi = POP32_VAL(esp); /* 0x1007C904: pop edi */
L_1007C905:
    esi = POP32_VAL(esp); /* 0x1007C905: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007C906: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1007C907: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C908: ret  */
L_1007C909:
    PUSH32(esp, esi); /* 0x1007C909: push esi */
    RECOMP_ICALL(MEM32(0x100E5080)); /* 0x1007C90A: call dword ptr [0x100e5080] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1007C910: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C8E7; /* 0x1007C913: je 0x1007c8e7 */
L_1007C915:
    eax = esi; /* 0x1007C915: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1007C904; /* 0x1007C917: jmp 0x1007c904 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007C919(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C919u);

L_1007C919:
    PUSH32(esp, 0xCu); /* 0x1007C919: push 0xc */
    PUSH32(esp, 0x1007C960u); /* 0x1007C91B: push 0x1007c960 */
    RECOMP_CALL(sub_1000ED7E); /* 0x1007C920: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000F750); /* 0x1007C925: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1007C92A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(eax + 0x58)); /* 0x1007C92E: push dword ptr [eax + 0x58] */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x1007C931: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C934: pop ecx */
    RECOMP_CALL(sub_1007C97C); /* 0x1007C935: call 0x1007c97c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x1007C93A: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x1007C93D: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x1007C93F: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1007C941: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, ecx); /* 0x1007C944: push ecx */
    PUSH32(esp, eax); /* 0x1007C945: push eax */
    RECOMP_CALL(sub_100A4CED); /* 0x1007C946: call 0x100a4ced */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C94B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C94C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007C94D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007C97C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C97Cu);

L_1007C97C:
    PUSH32(esp, esi); /* 0x1007C97C: push esi */
    RECOMP_CALL(sub_1000F720); /* 0x1007C97D: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1007C982: mov esi, eax */
    /* test esi, esi */ /* 0x1007C984: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007C99E; /* 0x1007C986: je 0x1007c99e */
L_1007C988:
    /* cmp MEM32(esi + 0x4), 0xFFFFFFFFu */ /* 0x1007C988: cmp dword ptr [esi + 4], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007C997; /* 0x1007C98C: je 0x1007c997 */
L_1007C98E:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1007C98E: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x100E5074)); /* 0x1007C991: call dword ptr [0x100e5074] */
    RECOMP_FLAGS_IN();
L_1007C997:
    PUSH32(esp, esi); /* 0x1007C997: push esi */
    RECOMP_CALL(sub_10011BA9); /* 0x1007C998: call 0x10011ba9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C99D: pop ecx */
L_1007C99E:
    PUSH32(esp, 0); /* 0x1007C99E: push 0 */
    RECOMP_ICALL(MEM32(0x100E507C)); /* 0x1007C9A0: call dword ptr [0x100e507c] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007C9A6u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007C9A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C9A7u);

L_1007C9A7:
    PUSH32(esp, ebp); /* 0x1007C9A7: push ebp */
    ebp = esp; /* 0x1007C9A8: mov ebp, esp */
    RECOMP_CALL(sub_1002BFAE); /* 0x1007C9AA: call 0x1002bfae */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007C9AF: push eax */
    RECOMP_CALL(sub_1000ED10); /* 0x1007C9B0: call 0x1000ed10 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1007C9B5: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x1007C9B7: pop ecx */
    /* test edx, edx */ /* 0x1007C9B8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C9DD; /* 0x1007C9BA: jne 0x1007c9dd */
L_1007C9BC:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007C9BC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002BFAE); /* 0x1007C9BF: call 0x1002bfae */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007C9C4: push eax */
    RECOMP_CALL(sub_10011A66); /* 0x1007C9C5: call 0x10011a66 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007C9CA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1007C9CB: pop ecx */
    /* test eax, eax */ /* 0x1007C9CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007C9F8; /* 0x1007C9CE: jne 0x1007c9f8 */
L_1007C9D0:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007C9D0: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007C9D6: push eax */
    RECOMP_ICALL(MEM32(0x100E507C)); /* 0x1007C9D7: call dword ptr [0x100e507c] */
    RECOMP_FLAGS_IN();
L_1007C9DD:
    ecx = MEM32(ebp + 0x8); /* 0x1007C9DD: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1007C9E0: push ecx */
    eax = MEM32(ecx + 0x54); /* 0x1007C9E1: mov eax, dword ptr [ecx + 0x54] */
    MEM32(edx + 0x54) = eax; /* 0x1007C9E4: mov dword ptr [edx + 0x54], eax */
    eax = MEM32(ecx + 0x58); /* 0x1007C9E7: mov eax, dword ptr [ecx + 0x58] */
    MEM32(edx + 0x58) = eax; /* 0x1007C9EA: mov dword ptr [edx + 0x58], eax */
    eax = MEM32(ecx + 0x4); /* 0x1007C9ED: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x1007C9F0: mov dword ptr [edx + 4], eax */
    RECOMP_CALL(sub_10011A8D); /* 0x1007C9F3: call 0x10011a8d */
    RECOMP_FLAGS_IN();
L_1007C9F8:
    RECOMP_CALL(sub_1007C919); /* 0x1007C9F8: call 0x1007c919 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007C9FDu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007C9FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007C9FEu);

L_1007C9FE:
    /* cmp MEM32(0x100E3CB4), 0 */ /* 0x1007C9FE: cmp dword ptr [0x100e3cb4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E3CB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007CA40; /* 0x1007CA05: jne 0x1007ca40 */
L_1007CA07:
    PUSH32(esp, 0x10024900u); /* 0x1007CA07: push 0x10024900 */
    PUSH32(esp, 0x800u); /* 0x1007CA0C: push 0x800 */
    PUSH32(esp, 0); /* 0x1007CA11: push 0 */
    PUSH32(esp, 0x100248E8u); /* 0x1007CA13: push 0x100248e8 */
    RECOMP_ICALL(MEM32(0x100E5084)); /* 0x1007CA18: call dword ptr [0x100e5084] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007CA1E: push eax */
    RECOMP_ICALL(MEM32(0x100E501C)); /* 0x1007CA1F: call dword ptr [0x100e501c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007CA25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007CA2A; /* 0x1007CA27: jne 0x1007ca2a */
L_1007CA29:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CA29: ret  */
L_1007CA2A:
    PUSH32(esp, eax); /* 0x1007CA2A: push eax */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1007CA2B: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E3CB0) = eax; /* 0x1007CA31: mov dword ptr [0x100e3cb0], eax */
    MEM32(0x100E3CB4) = 1; /* 0x1007CA36: mov dword ptr [0x100e3cb4], 1 */
L_1007CA40:
    PUSH32(esp, 1); /* 0x1007CA40: push 1 */
    PUSH32(esp, MEM32(0x100E3CB0)); /* 0x1007CA42: push dword ptr [0x100e3cb0] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x1007CA48: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(eax); /* 0x1007CA4E: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007CA50: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007CA52: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007CA54: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CA55: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CA56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CA56u);

L_1007CA56:
    /* cmp MEM32(0x100E3CBC), 0 */ /* 0x1007CA56: cmp dword ptr [0x100e3cbc], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E3CBC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007CA97; /* 0x1007CA5D: jne 0x1007ca97 */
L_1007CA5F:
    PUSH32(esp, 0x10026D08u); /* 0x1007CA5F: push 0x10026d08 */
    PUSH32(esp, 0x800u); /* 0x1007CA64: push 0x800 */
    PUSH32(esp, 0); /* 0x1007CA69: push 0 */
    PUSH32(esp, 0x100248E8u); /* 0x1007CA6B: push 0x100248e8 */
    RECOMP_ICALL(MEM32(0x100E5084)); /* 0x1007CA70: call dword ptr [0x100e5084] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1007CA76: push eax */
    RECOMP_ICALL(MEM32(0x100E501C)); /* 0x1007CA77: call dword ptr [0x100e501c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1007CA7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007CAA5; /* 0x1007CA7F: je 0x1007caa5 */
L_1007CA81:
    PUSH32(esp, eax); /* 0x1007CA81: push eax */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x1007CA82: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E3CB8) = eax; /* 0x1007CA88: mov dword ptr [0x100e3cb8], eax */
    MEM32(0x100E3CBC) = 1; /* 0x1007CA8D: mov dword ptr [0x100e3cbc], 1 */
L_1007CA97:
    PUSH32(esp, MEM32(0x100E3CB8)); /* 0x1007CA97: push dword ptr [0x100e3cb8] */
    RECOMP_ICALL(MEM32(0x100E5004)); /* 0x1007CA9D: call dword ptr [0x100e5004] */
    RECOMP_FLAGS_IN();
    { _itail_tgt = (uint32_t)(eax); goto _ljump; }
L_1007CAA5:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CAA5: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1007CAA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CAA6u);

L_1007CAA6:
    PUSH32(esp, esi); /* 0x1007CAA6: push esi */
    PUSH32(esp, 0x00030000u); /* 0x1007CAA7: push 0x30000 */
    PUSH32(esp, 0x00010000u); /* 0x1007CAAC: push 0x10000 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007CAB1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1007CAB3: push esi */
    RECOMP_CALL(sub_1002C9B5); /* 0x1007CAB4: call 0x1002c9b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007CAB9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1007CABC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007CAC2; /* 0x1007CABE: jne 0x1007cac2 */
L_1007CAC0:
    esi = POP32_VAL(esp); /* 0x1007CAC0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CAC1: ret  */
L_1007CAC2:
    PUSH32(esp, esi); /* 0x1007CAC2: push esi */
    PUSH32(esp, esi); /* 0x1007CAC3: push esi */
    PUSH32(esp, esi); /* 0x1007CAC4: push esi */
    PUSH32(esp, esi); /* 0x1007CAC5: push esi */
    PUSH32(esp, esi); /* 0x1007CAC6: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x1007CAC7: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1007CACCu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1007CACD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CACDu);

L_1007CACD:
    PUSH32(esp, ebp); /* 0x1007CACD: push ebp */
    ebp = esp; /* 0x1007CACE: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1007CAD0: pop ebp */
    goto L_1007CAD3; /* 0x1007CAD1: jmp 0x1007cad3 */
L_1007CAD3:
    PUSH32(esp, ebp); /* 0x1007CAD3: push ebp */
    ebp = esp; /* 0x1007CAD4: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CAD6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xAu); /* 0x1007CAD9: push 0xa */
    PUSH32(esp, 0); /* 0x1007CADB: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CADD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10089C92); /* 0x1007CAE0: call 0x10089c92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007CAE5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007CAE8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CAE9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CAD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CAD3u);

L_1007CAD3:
    PUSH32(esp, ebp); /* 0x1007CAD3: push ebp */
    ebp = esp; /* 0x1007CAD4: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CAD6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xAu); /* 0x1007CAD9: push 0xa */
    PUSH32(esp, 0); /* 0x1007CADB: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CADD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10089C92); /* 0x1007CAE0: call 0x10089c92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007CAE5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007CAE8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CAE9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CAEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CAEAu);

L_1007CAEA:
    PUSH32(esp, ebp); /* 0x1007CAEA: push ebp */
    ebp = esp; /* 0x1007CAEB: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CAED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xAu); /* 0x1007CAF0: push 0xa */
    PUSH32(esp, 0); /* 0x1007CAF2: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CAF4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10089F82); /* 0x1007CAF7: call 0x10089f82 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007CAFC: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007CAFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CB00: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CB01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CB01u);

L_1007CB01:
    PUSH32(esp, ebp); /* 0x1007CB01: push ebp */
    ebp = esp; /* 0x1007CB02: mov ebp, esp */
    PUSH32(esp, 0xAu); /* 0x1007CB04: push 0xa */
    PUSH32(esp, 0); /* 0x1007CB06: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CB08: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10089F58); /* 0x1007CB0B: call 0x10089f58 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007CB10: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007CB13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CB14: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CB15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CB15u);

L_1007CB15:
    PUSH32(esp, ebp); /* 0x1007CB15: push ebp */
    ebp = esp; /* 0x1007CB16: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1007CB18: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1007CB1B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007CB30; /* 0x1007CB1D: jne 0x1007cb30 */
L_1007CB1F:
    RECOMP_CALL(sub_1001177D); /* 0x1007CB1F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007CB24: mov dword ptr [eax], 0x16 */
L_1007CB2A:
    ebp = POP32_VAL(esp); /* 0x1007CB2A: pop ebp */
    goto L_100A4670; /* 0x1007CB2B: jmp 0x100a4670 */
L_1007CB30:
    PUSH32(esp, esi); /* 0x1007CB30: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007CB31: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1007CB34: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007CB46; /* 0x1007CB36: jne 0x1007cb46 */
L_1007CB38:
    RECOMP_CALL(sub_1001177D); /* 0x1007CB38: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1007CB3D: mov dword ptr [eax], 0x16 */
L_1007CB43:
    esi = POP32_VAL(esp); /* 0x1007CB43: pop esi */
    RECOMP_BACKEDGE();
    goto L_1007CB2A; /* 0x1007CB44: jmp 0x1007cb2a */
L_1007CB46:
    PUSH32(esp, edi); /* 0x1007CB46: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1007CB47: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1007CB4A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1007CB5C; /* 0x1007CB4C: jns 0x1007cb5c */
L_1007CB4E:
    RECOMP_CALL(sub_1001177D); /* 0x1007CB4E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1007CB53: pop edi */
    MEM32(eax) = 0x16u; /* 0x1007CB54: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_1007CB43; /* 0x1007CB5A: jmp 0x1007cb43 */
L_1007CB5C:
    /* cmp edi, 1 */ /* 0x1007CB5C: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007CB7A; /* 0x1007CB5F: jle 0x1007cb7a */
L_1007CB61:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFEu; /* 0x1007CB61: add edi, -2 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1007CB64: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x1007CB64: shr edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007CB66: inc edi */
    _flag_k = FK_INC;
L_1007CB67:
    SET_LO8(eax, MEM8(edx + 0x1)); /* 0x1007CB67: mov al, byte ptr [edx + 1] */
    SET_LO8(ecx, MEM8(edx)); /* 0x1007CB6A: mov cl, byte ptr [edx] */
    edx = edx + 0x2; /* 0x1007CB6C: lea edx, [edx + 2] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1007CB6F: mov byte ptr [esi], al */
    esi = esi + 0x2; /* 0x1007CB71: lea esi, [esi + 2] */
    MEM8(esi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x1007CB74: mov byte ptr [esi - 1], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1007CB77: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1007CB67; /* 0x1007CB78: jne 0x1007cb67 */
L_1007CB7A:
    edi = POP32_VAL(esp); /* 0x1007CB7A: pop edi */
    esi = POP32_VAL(esp); /* 0x1007CB7B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007CB7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CB7D: ret  */
L_100A4670:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A4670: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A4672: push eax */
    PUSH32(esp, eax); /* 0x100A4673: push eax */
    PUSH32(esp, eax); /* 0x100A4674: push eax */
    PUSH32(esp, eax); /* 0x100A4675: push eax */
    PUSH32(esp, eax); /* 0x100A4676: push eax */
    RECOMP_CALL(sub_100A4645); /* 0x100A4677: call 0x100a4645 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A467C: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A467F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CB7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CB7Eu);

L_1007CB7E:
    PUSH32(esp, ebp); /* 0x1007CB7E: push ebp */
    ebp = esp; /* 0x1007CB7F: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1007CB81: pop ebp */
    goto L_1007CB84; /* 0x1007CB82: jmp 0x1007cb84 */
L_1007CB84:
    PUSH32(esp, ebp); /* 0x1007CB84: push ebp */
    ebp = esp; /* 0x1007CB85: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CB87: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xAu); /* 0x1007CB8A: push 0xa */
    PUSH32(esp, 0); /* 0x1007CB8C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CB8E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001C8CB); /* 0x1007CB91: call 0x1001c8cb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007CB96: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007CB99: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CB9A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CB84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CB84u);

L_1007CB84:
    PUSH32(esp, ebp); /* 0x1007CB84: push ebp */
    ebp = esp; /* 0x1007CB85: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CB87: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xAu); /* 0x1007CB8A: push 0xa */
    PUSH32(esp, 0); /* 0x1007CB8C: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CB8E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1001C8CB); /* 0x1007CB91: call 0x1001c8cb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007CB96: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007CB99: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CB9A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CB9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CB9Bu);

L_1007CB9B:
    PUSH32(esp, ebp); /* 0x1007CB9B: push ebp */
    ebp = esp; /* 0x1007CB9C: mov ebp, esp */
    PUSH32(esp, 0xAu); /* 0x1007CB9E: push 0xa */
    PUSH32(esp, 0); /* 0x1007CBA0: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CBA2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008AA1E); /* 0x1007CBA5: call 0x1008aa1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1007CBAA: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007CBAD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CBAE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CBAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CBAFu);

L_1007CBAF:
    PUSH32(esp, ebp); /* 0x1007CBAF: push ebp */
    ebp = esp; /* 0x1007CBB0: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CBB2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xAu); /* 0x1007CBB5: push 0xa */
    PUSH32(esp, 0); /* 0x1007CBB7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CBB9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1008AA48); /* 0x1007CBBC: call 0x1008aa48 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1007CBC1: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1007CBC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CBC5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CBC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CBC6u);

L_1007CBC6:
    PUSH32(esp, ebp); /* 0x1007CBC6: push ebp */
    ebp = esp; /* 0x1007CBC7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007CBC9: push ecx */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1007CBCA: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1007CBCE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007CBD1: push esi */
    MEM32(ebp + (-0x4)) = edx; /* 0x1007CBD2: mov dword ptr [ebp - 4], edx */
    esi = ecx; /* 0x1007CBD5: mov esi, ecx */
    edx = MEM32(ebp + 0xC); /* 0x1007CBD7: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1007CBDA: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007CBE8; /* 0x1007CBDB: je 0x1007cbe8 */
L_1007CBDD:
    MEM8(esi) = (uint8_t)(0x2Du); /* 0x1007CBDD: mov byte ptr [esi], 0x2d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007CBE0: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007CBE1: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _aa = edx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007CBE3: adc edx, 0 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1007CBE6: neg edx */
    _flag_k = FK_CMP;
L_1007CBE8:
    edi = MEM32(ebp + (-0x4)); /* 0x1007CBE8: mov edi, dword ptr [ebp - 4] */
    MEM32(ebp + 0x10) = esi; /* 0x1007CBEB: mov dword ptr [ebp + 0x10], esi */
    PUSH32(esp, ebx); /* 0x1007CBEE: push ebx */
L_1007CBEF:
    PUSH32(esp, 0); /* 0x1007CBEF: push 0 */
    PUSH32(esp, edi); /* 0x1007CBF1: push edi */
    PUSH32(esp, edx); /* 0x1007CBF2: push edx */
    PUSH32(esp, eax); /* 0x1007CBF3: push eax */
    RECOMP_CALL(sub_10011849); /* 0x1007CBF4: call 0x10011849 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = ebx; /* 0x1007CBF9: mov dword ptr [ebp + 0xc], ebx */
    /* cmp ecx, 9 */ /* 0x1007CBFC: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007CC06; /* 0x1007CBFF: jbe 0x1007cc06 */
L_1007CC01:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x57u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x57u); /* 0x1007CC01: add cl, 0x57 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1007CC09; /* 0x1007CC04: jmp 0x1007cc09 */
L_1007CC06:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x30u); /* 0x1007CC06: add cl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1007CC09:
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1007CC09: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007CC0B: inc esi */
    _flag_k = FK_INC;
    /* test edx, edx */ /* 0x1007CC0C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007CBEF; /* 0x1007CC0E: ja 0x1007cbef */
L_1007CC10:
    if (0) goto L_1007CC16; /* 0x1007CC10: jb 0x1007cc16 */
L_1007CC12:
    /* test eax, eax */ /* 0x1007CC12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007CBEF; /* 0x1007CC14: jne 0x1007cbef */
L_1007CC16:
    edi = MEM32(ebp + 0x10); /* 0x1007CC16: mov edi, dword ptr [ebp + 0x10] */
    MEM8(esi) = (uint8_t)(0); /* 0x1007CC19: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1007CC1C: dec esi */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x1007CC1D: pop ebx */
L_1007CC1E:
    SET_LO8(eax, MEM8(edi)); /* 0x1007CC1E: mov al, byte ptr [edi] */
    SET_LO8(ecx, MEM8(esi)); /* 0x1007CC20: mov cl, byte ptr [esi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1007CC22: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1007CC24: dec esi */
    _flag_k = FK_DEC;
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1007CC25: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007CC27: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, esi */ /* 0x1007CC28: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007CC1E; /* 0x1007CC2A: jb 0x1007cc1e */
L_1007CC2C:
    edi = POP32_VAL(esp); /* 0x1007CC2C: pop edi */
    esi = POP32_VAL(esp); /* 0x1007CC2D: pop esi */
    esp = ebp; /* 0x1007CC2E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007CC30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1007CC31: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1007CC34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CC34u);

L_1007CC34:
    PUSH32(esp, ebp); /* 0x1007CC34: push ebp */
    ebp = esp; /* 0x1007CC35: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x1007CC37: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007CC3A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0xAu */ /* 0x1007CC3C: cmp edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007CC50; /* 0x1007CC3F: jne 0x1007cc50 */
L_1007CC41:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1007CC41: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1007CC50; /* 0x1007CC44: jg 0x1007cc50 */
L_1007CC46:
    if (CMP_L(_flag_a, _flag_b)) goto L_1007CC4D; /* 0x1007CC46: jl 0x1007cc4d */
L_1007CC48:
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1007CC48: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007CC50; /* 0x1007CC4B: jae 0x1007cc50 */
L_1007CC4D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007CC4D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007CC4F: inc eax */
    _flag_k = FK_INC;
L_1007CC50:
    ecx = MEM32(ebp + 0x10); /* 0x1007CC50: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1007CC53: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CC54: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CC57: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007CBC6); /* 0x1007CC5A: call 0x1007cbc6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1007CC5F: mov eax, dword ptr [ebp + 0x10] */
    ebp = POP32_VAL(esp); /* 0x1007CC62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CC63: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CC64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CC64u);

L_1007CC64:
    PUSH32(esp, ebp); /* 0x1007CC64: push ebp */
    ebp = esp; /* 0x1007CC65: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0xAu */ /* 0x1007CC67: cmp dword ptr [ebp + 0x10], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1007CC6B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007CC6E: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007CC7B; /* 0x1007CC6F: jne 0x1007cc7b */
L_1007CC71:
    /* test eax, eax */ /* 0x1007CC71: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1007CC7B; /* 0x1007CC73: jns 0x1007cc7b */
L_1007CC75:
    PUSH32(esp, 1); /* 0x1007CC75: push 1 */
    PUSH32(esp, 0xAu); /* 0x1007CC77: push 0xa */
    goto L_1007CC80; /* 0x1007CC79: jmp 0x1007cc80 */
L_1007CC7B:
    PUSH32(esp, 0); /* 0x1007CC7B: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007CC7D: push dword ptr [ebp + 0x10] */
L_1007CC80:
    esi = MEM32(ebp + 0xC); /* 0x1007CC80: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1007CC83: push esi */
    PUSH32(esp, eax); /* 0x1007CC84: push eax */
    RECOMP_CALL(sub_1007CCEC); /* 0x1007CC85: call 0x1007ccec */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1007CC8A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007CC8C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007CC8D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CC8E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CC8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CC8Fu);

L_1007CC8F:
    PUSH32(esp, ebp); /* 0x1007CC8F: push ebp */
    ebp = esp; /* 0x1007CC90: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0xAu */ /* 0x1007CC92: cmp dword ptr [ebp + 0x10], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007CCA3; /* 0x1007CC96: jne 0x1007cca3 */
L_1007CC98:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1007CC98: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1007CCA3; /* 0x1007CC9C: jge 0x1007cca3 */
L_1007CC9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007CC9E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007CCA0: inc eax */
    _flag_k = FK_INC;
    goto L_1007CCA5; /* 0x1007CCA1: jmp 0x1007cca5 */
L_1007CCA3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1007CCA3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007CCA5:
    PUSH32(esp, eax); /* 0x1007CCA5: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007CCA6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CCA9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CCAC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007CCEC); /* 0x1007CCAF: call 0x1007ccec */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1007CCB4: mov eax, dword ptr [ebp + 0xc] */
    ebp = POP32_VAL(esp); /* 0x1007CCB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CCB8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CCB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CCB9u);

L_1007CCB9:
    PUSH32(esp, ebp); /* 0x1007CCB9: push ebp */
    ebp = esp; /* 0x1007CCBA: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x1007CCBC: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x1007CCBF: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1007CCC2: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CCC4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CCC7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007CBC6); /* 0x1007CCCA: call 0x1007cbc6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1007CCCF: mov eax, dword ptr [ebp + 0x10] */
    ebp = POP32_VAL(esp); /* 0x1007CCD2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CCD3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CCD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CCD4u);

L_1007CCD4:
    PUSH32(esp, ebp); /* 0x1007CCD4: push ebp */
    ebp = esp; /* 0x1007CCD5: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1007CCD7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007CCD9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007CCDC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1007CCDF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1007CCEC); /* 0x1007CCE2: call 0x1007ccec */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1007CCE7: mov eax, dword ptr [ebp + 0xc] */
    ebp = POP32_VAL(esp); /* 0x1007CCEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007CCEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007CCEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007CCECu);

L_1007CCEC:
    PUSH32(esp, ebp); /* 0x1007CCEC: push ebp */
    ebp = esp; /* 0x1007CCED: mov ebp, esp */
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1007CCEF: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1007CCF3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1007CCF6: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1007CCF7: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1007CCFA: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007CD03; /* 0x1007CCFB: je 0x1007cd03 */
L_1007CCFD:
    MEM8(esi) = (uint8_t)(0x2Du); /* 0x1007CCFD: mov byte ptr [esi], 0x2d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007CD00: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1007CD01: neg eax */
    _flag_k = FK_CMP;
L_1007CD03:
    edi = esi; /* 0x1007CD03: mov edi, esi */
L_1007CD05:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007CD05: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x10); /* 0x1007CD07: div dword ptr [ebp + 0x10] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp edx, 9 */ /* 0x1007CD0A: cmp edx, 9 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007CD14; /* 0x1007CD0D: jbe 0x1007cd14 */
L_1007CD0F:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x57u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x57u); /* 0x1007CD0F: add dl, 0x57 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1007CD17; /* 0x1007CD12: jmp 0x1007cd17 */
L_1007CD14:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x30u); /* 0x1007CD14: add dl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1007CD17:
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x1007CD17: mov byte ptr [esi], dl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007CD19: inc esi */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1007CD1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007CD05; /* 0x1007CD1C: jne 0x1007cd05 */
L_1007CD1E:
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1007CD1E: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1007CD20: dec esi */
    _flag_k = FK_DEC;
L_1007CD21:
    SET_LO8(eax, MEM8(edi)); /* 0x1007CD21: mov al, byte ptr [edi] */
    SET_LO8(ecx, MEM8(esi)); /* 0x1007CD23: mov cl, byte ptr [esi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1007CD25: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1007CD27: dec esi */
    _flag_k = FK_DEC;
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1007CD28: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1007CD2A: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, esi */ /* 0x1007CD2B: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007CD21; /* 0x1007CD2D: jb 0x1007cd21 */
L_1007CD2F:
    edi = POP32_VAL(esp); /* 0x1007CD2F: pop edi */
    esi = POP32_VAL(esp); /* 0x1007CD30: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007CD31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1007CD32: ret 0x10 */
    RECOMP_REGS_OUT();
}
