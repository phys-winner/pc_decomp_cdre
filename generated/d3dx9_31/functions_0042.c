#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_171B3060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3060u);

L_171B3060:
    edi = edi; /* 0x171B3060: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3062: push ebp */
    ebp = esp; /* 0x171B3063: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B3065: push ebx */
    PUSH32(esp, esi); /* 0x171B3066: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B3067: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171B306A: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B306B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx; /* 0x171B306D: lea ecx, [ecx] */
L_171B3070:
    /* cmp MEM32(esi + 0x1A4), edi */ /* 0x171B3070: cmp dword ptr [esi + 0x1a4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x1A4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B3094; /* 0x171B3076: jne 0x171b3094 */
L_171B3078:
    eax = MEM32(esi + 0x1BC); /* 0x171B3078: mov eax, dword ptr [esi + 0x1bc] */
    /* cmp MEM32(eax + 0xC), edi */ /* 0x171B307E: cmp dword ptr [eax + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171B3081: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B308B; /* 0x171B3082: jne 0x171b308b */
L_171B3084:
    RECOMP_CALL(sub_171B2FB0); /* 0x171B3084: call 0x171b2fb0 */
    RECOMP_FLAGS_IN();
    goto L_171B3090; /* 0x171B3089: jmp 0x171b3090 */
L_171B308B:
    RECOMP_CALL(sub_171B2E90); /* 0x171B308B: call 0x171b2e90 */
    RECOMP_FLAGS_IN();
L_171B3090:
    /* test eax, eax */ /* 0x171B3090: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B30DC; /* 0x171B3092: je 0x171b30dc */
L_171B3094:
    eax = MEM32(esi + 0x1A4); /* 0x171B3094: mov eax, dword ptr [esi + 0x1a4] */
    ecx = eax + (-0x1); /* 0x171B309A: lea ecx, [eax - 1] */
    /* cmp ecx, 0xFDu */ /* 0x171B309D: cmp ecx, 0xfd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B31D1; /* 0x171B30A3: ja 0x171b31d1 */
L_171B30A9:
    ecx = (uint32_t)MEM8(ecx + 0x171B326C); /* 0x171B30A9: movzx ecx, byte ptr [ecx + 0x171b326c] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x171B322C)); goto _ljump; }
L_171B30B7:
    RECOMP_CALL(sub_171B1CC0); /* 0x171B30B7: call 0x171b1cc0 */
    RECOMP_FLAGS_IN();
    goto L_171B30F4; /* 0x171B30BC: jmp 0x171b30f4 */
L_171B30BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B30BE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B30C0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171B30EF; /* 0x171B30C2: jmp 0x171b30ef */
L_171B30C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B30C4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171B30EA; /* 0x171B30C6: jmp 0x171b30ea */
L_171B30C8:
    edx = 1; /* 0x171B30C8: mov edx, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B30CD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_171B1D70); /* 0x171B30CF: call 0x171b1d70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B30D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B31E0; /* 0x171B30D6: jne 0x171b31e0 */
L_171B30DC:
    edi = POP32_VAL(esp); /* 0x171B30DC: pop edi */
    esi = POP32_VAL(esp); /* 0x171B30DD: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B30DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B30E0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B30E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B30E2: ret 4 */
L_171B30E5:
    edx = 1; /* 0x171B30E5: mov edx, 1 */
L_171B30EA:
    ecx = 1; /* 0x171B30EA: mov ecx, 1 */
L_171B30EF:
    RECOMP_CALL(sub_171B1D70); /* 0x171B30EF: call 0x171b1d70 */
    RECOMP_FLAGS_IN();
L_171B30F4:
    /* test eax, eax */ /* 0x171B30F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B30DC; /* 0x171B30F6: je 0x171b30dc */
L_171B30F8:
    MEM32(esi + 0x1A4) = edi; /* 0x171B30F8: mov dword ptr [esi + 0x1a4], edi */
    RECOMP_BACKEDGE();
    goto L_171B3070; /* 0x171B30FE: jmp 0x171b3070 */
L_171B3103:
    ecx = MEM32(esi); /* 0x171B3103: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x14) = 0x3Cu; /* 0x171B3105: mov dword ptr [ecx + 0x14], 0x3c */
    PUSH32(esp, esi); /* 0x171B310C: push esi */
    MEM32(ecx + 0x18) = eax; /* 0x171B310D: mov dword ptr [ecx + 0x18], eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171B3110: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1A4) = edi; /* 0x171B3112: mov dword ptr [esi + 0x1a4], edi */
    RECOMP_BACKEDGE();
    goto L_171B3070; /* 0x171B3118: jmp 0x171b3070 */
L_171B311D:
    ebx = esi; /* 0x171B311D: mov ebx, esi */
    RECOMP_CALL(sub_171B2310); /* 0x171B311F: call 0x171b2310 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B3124: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B30DC; /* 0x171B3126: je 0x171b30dc */
L_171B3128:
    MEM32(esi + 0x1A4) = edi; /* 0x171B3128: mov dword ptr [esi + 0x1a4], edi */
    RECOMP_BACKEDGE();
    goto L_171B3070; /* 0x171B312E: jmp 0x171b3070 */
L_171B3133:
    PUSH32(esp, esi); /* 0x171B3133: push esi */
    RECOMP_CALL(sub_171B2690); /* 0x171B3134: call 0x171b2690 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B3139: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B30DC; /* 0x171B313B: je 0x171b30dc */
L_171B313D:
    MEM32(esi + 0x1A4) = edi; /* 0x171B313D: mov dword ptr [esi + 0x1a4], edi */
    RECOMP_BACKEDGE();
    goto L_171B3070; /* 0x171B3143: jmp 0x171b3070 */
L_171B3148:
    PUSH32(esp, esi); /* 0x171B3148: push esi */
    RECOMP_CALL(sub_171B28E0); /* 0x171B3149: call 0x171b28e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B314E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B30DC; /* 0x171B3150: je 0x171b30dc */
L_171B3152:
    MEM32(esi + 0x1A4) = edi; /* 0x171B3152: mov dword ptr [esi + 0x1a4], edi */
    RECOMP_BACKEDGE();
    goto L_171B3070; /* 0x171B3158: jmp 0x171b3070 */
L_171B315D:
    edx = MEM32(esi + 0x1BC); /* 0x171B315D: mov edx, dword ptr [esi + 0x1bc] */
    PUSH32(esp, esi); /* 0x171B3163: push esi */
    RECOMP_ICALL(MEM32(edx + eax * 4 + (-0x360))); /* 0x171B3164: call dword ptr [edx + eax*4 - 0x360] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B316B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B30DC; /* 0x171B316D: je 0x171b30dc */
L_171B3173:
    MEM32(esi + 0x1A4) = edi; /* 0x171B3173: mov dword ptr [esi + 0x1a4], edi */
    RECOMP_BACKEDGE();
    goto L_171B3070; /* 0x171B3179: jmp 0x171b3070 */
L_171B317E:
    eax = MEM32(esi + 0x1BC); /* 0x171B317E: mov eax, dword ptr [esi + 0x1bc] */
    PUSH32(esp, esi); /* 0x171B3184: push esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x171B3185: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B3188: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B30DC; /* 0x171B318A: je 0x171b30dc */
L_171B3190:
    MEM32(esi + 0x1A4) = edi; /* 0x171B3190: mov dword ptr [esi + 0x1a4], edi */
    RECOMP_BACKEDGE();
    goto L_171B3070; /* 0x171B3196: jmp 0x171b3070 */
L_171B319B:
    ecx = MEM32(esi); /* 0x171B319B: mov ecx, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171B319D: push 1 */
    MEM32(ecx + 0x14) = 0x5Cu; /* 0x171B319F: mov dword ptr [ecx + 0x14], 0x5c */
    PUSH32(esp, esi); /* 0x171B31A6: push esi */
    MEM32(ecx + 0x18) = eax; /* 0x171B31A7: mov dword ptr [ecx + 0x18], eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171B31AA: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1A4) = edi; /* 0x171B31AD: mov dword ptr [esi + 0x1a4], edi */
    RECOMP_BACKEDGE();
    goto L_171B3070; /* 0x171B31B3: jmp 0x171b3070 */
L_171B31B8:
    PUSH32(esp, esi); /* 0x171B31B8: push esi */
    RECOMP_CALL(sub_171B2DE0); /* 0x171B31B9: call 0x171b2de0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B31BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B30DC; /* 0x171B31C0: je 0x171b30dc */
L_171B31C6:
    MEM32(esi + 0x1A4) = edi; /* 0x171B31C6: mov dword ptr [esi + 0x1a4], edi */
    RECOMP_BACKEDGE();
    goto L_171B3070; /* 0x171B31CC: jmp 0x171b3070 */
L_171B31D1:
    ecx = MEM32(esi); /* 0x171B31D1: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x14) = 0x44u; /* 0x171B31D3: mov dword ptr [ecx + 0x14], 0x44 */
    PUSH32(esp, esi); /* 0x171B31DA: push esi */
    MEM32(ecx + 0x18) = eax; /* 0x171B31DB: mov dword ptr [ecx + 0x18], eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171B31DE: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
L_171B31E0:
    MEM32(esi + 0x1A4) = edi; /* 0x171B31E0: mov dword ptr [esi + 0x1a4], edi */
    RECOMP_BACKEDGE();
    goto L_171B3070; /* 0x171B31E6: jmp 0x171b3070 */
L_171B31EB:
    RECOMP_CALL(sub_171B2050); /* 0x171B31EB: call 0x171b2050 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B31F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B30DC; /* 0x171B31F2: je 0x171b30dc */
L_171B31F8:
    MEM32(esi + 0x1A4) = edi; /* 0x171B31F8: mov dword ptr [esi + 0x1a4], edi */
    edi = POP32_VAL(esp); /* 0x171B31FE: pop edi */
    esi = POP32_VAL(esp); /* 0x171B31FF: pop esi */
    eax = 1; /* 0x171B3200: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x171B3205: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B3206: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B3207: ret 4 */
L_171B320A:
    eax = MEM32(esi); /* 0x171B320A: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171B320C: push 1 */
    PUSH32(esp, esi); /* 0x171B320E: push esi */
    MEM32(eax + 0x14) = 0x55u; /* 0x171B320F: mov dword ptr [eax + 0x14], 0x55 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B3216: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1A4) = edi; /* 0x171B3219: mov dword ptr [esi + 0x1a4], edi */
    edi = POP32_VAL(esp); /* 0x171B321F: pop edi */
    esi = POP32_VAL(esp); /* 0x171B3220: pop esi */
    eax = 2; /* 0x171B3221: mov eax, 2 */
    ebx = POP32_VAL(esp); /* 0x171B3226: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B3227: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B3228: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x171B30B7u: goto L_171B30B7;
      case 0x171B30BEu: goto L_171B30BE;
      case 0x171B30C4u: goto L_171B30C4;
      case 0x171B30C8u: goto L_171B30C8;
      case 0x171B30E5u: goto L_171B30E5;
      case 0x171B3103u: goto L_171B3103;
      case 0x171B311Du: goto L_171B311D;
      case 0x171B3133u: goto L_171B3133;
      case 0x171B3148u: goto L_171B3148;
      case 0x171B315Du: goto L_171B315D;
      case 0x171B317Eu: goto L_171B317E;
      case 0x171B319Bu: goto L_171B319B;
      case 0x171B31B8u: goto L_171B31B8;
      case 0x171B31D1u: goto L_171B31D1;
      case 0x171B31EBu: goto L_171B31EB;
      case 0x171B320Au: goto L_171B320A;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_171B3370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3370u);

L_171B3370:
    edi = edi; /* 0x171B3370: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3372: push ebp */
    ebp = esp; /* 0x171B3373: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B3375: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B3376: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x1A4); /* 0x171B3379: mov eax, dword ptr [esi + 0x1a4] */
    /* test eax, eax */ /* 0x171B337F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B338D; /* 0x171B3381: jne 0x171b338d */
L_171B3383:
    PUSH32(esp, esi); /* 0x171B3383: push esi */
    RECOMP_CALL(sub_171B2E90); /* 0x171B3384: call 0x171b2e90 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B3389: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B33ED; /* 0x171B338B: je 0x171b33ed */
L_171B338D:
    ecx = MEM32(esi + 0x1BC); /* 0x171B338D: mov ecx, dword ptr [esi + 0x1bc] */
    eax = MEM32(ecx + 0x14); /* 0x171B3393: mov eax, dword ptr [ecx + 0x14] */
    PUSH32(esp, edi); /* 0x171B3396: push edi */
    edi = MEM32(esi + 0x1A4); /* 0x171B3397: mov edi, dword ptr [esi + 0x1a4] */
    edx = eax + 0xD0; /* 0x171B339D: lea edx, [eax + 0xd0] */
    /* cmp edi, edx */ /* 0x171B33A3: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x171B33A5: pop edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B33E1; /* 0x171B33A6: jne 0x171b33e1 */
L_171B33A8:
    eax = MEM32(esi); /* 0x171B33A8: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x62u; /* 0x171B33AA: mov dword ptr [eax + 0x14], 0x62 */
    ecx = MEM32(ecx + 0x14); /* 0x171B33B1: mov ecx, dword ptr [ecx + 0x14] */
    PUSH32(esp, 3); /* 0x171B33B4: push 3 */
    PUSH32(esp, esi); /* 0x171B33B6: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B33B7: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B33BA: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1A4) = 0; /* 0x171B33BD: mov dword ptr [esi + 0x1a4], 0 */
L_171B33C7:
    esi = MEM32(esi + 0x1BC); /* 0x171B33C7: mov esi, dword ptr [esi + 0x1bc] */
    eax = MEM32(esi + 0x14); /* 0x171B33CD: mov eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B33D0: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x171B33D1: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = eax; /* 0x171B33D4: mov dword ptr [esi + 0x14], eax */
    eax = 1; /* 0x171B33D7: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x171B33DC: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B33DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B33DE: ret 4 */
L_171B33E1:
    edx = MEM32(esi + 0x18); /* 0x171B33E1: mov edx, dword ptr [esi + 0x18] */
    PUSH32(esp, eax); /* 0x171B33E4: push eax */
    PUSH32(esp, esi); /* 0x171B33E5: push esi */
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x171B33E6: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B33E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B33C7; /* 0x171B33EB: jne 0x171b33c7 */
L_171B33ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B33ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171B33EF: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B33F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B33F1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B3400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3400u);

L_171B3400:
    edi = edi; /* 0x171B3400: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3402: push ebp */
    ebp = esp; /* 0x171B3403: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B3405: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171B3406: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx); /* 0x171B3409: mov eax, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x171B340B: push esi */
    esi = MEM32(ebx + 0x1A4); /* 0x171B340C: mov esi, dword ptr [ebx + 0x1a4] */
    PUSH32(esp, edi); /* 0x171B3412: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171B3413: mov edi, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x14) = 0x79u; /* 0x171B3416: mov dword ptr [eax + 0x14], 0x79 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171B341D: push -1 */
    MEM32(eax + 0x18) = esi; /* 0x171B341F: mov dword ptr [eax + 0x18], esi */
    PUSH32(esp, ebx); /* 0x171B3422: push ebx */
    MEM32(eax + 0x1C) = edi; /* 0x171B3423: mov dword ptr [eax + 0x1c], edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B3426: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    esp = esp; /* 0x171B3429: lea esp, [esp] */
L_171B3430:
    /* cmp esi, 0xC0u */ /* 0x171B3430: cmp esi, 0xc0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B343F; /* 0x171B3436: jge 0x171b343f */
L_171B3438:
    edi = 2; /* 0x171B3438: mov edi, 2 */
    goto L_171B349A; /* 0x171B343D: jmp 0x171b349a */
L_171B343F:
    /* cmp esi, 0xD0u */ /* 0x171B343F: cmp esi, 0xd0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B3495; /* 0x171B3445: jl 0x171b3495 */
L_171B3447:
    /* cmp esi, 0xD7u */ /* 0x171B3447: cmp esi, 0xd7 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xD7u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B3495; /* 0x171B344D: jg 0x171b3495 */
L_171B344F:
    eax = edi + 0x1; /* 0x171B344F: lea eax, [edi + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x171B3452: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xD0u; /* 0x171B3455: add eax, 0xd0 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x171B345A: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B3495; /* 0x171B345C: je 0x171b3495 */
L_171B345E:
    ecx = edi + 0x2; /* 0x171B345E: lea ecx, [edi + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x171B3461: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xD0u; /* 0x171B3464: add ecx, 0xd0 */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x171B346A: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B3495; /* 0x171B346C: je 0x171b3495 */
L_171B346E:
    edx = edi + (-0x1); /* 0x171B346E: lea edx, [edi - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x171B3471: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xD0u; /* 0x171B3474: add edx, 0xd0 */
    _flag_k = FK_ADD;
    /* cmp esi, edx */ /* 0x171B347A: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B3438; /* 0x171B347C: je 0x171b3438 */
L_171B347E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFEu; /* 0x171B347E: add edi, -2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(7);
    edi = edi & 7; /* 0x171B3481: and edi, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xD0u; /* 0x171B3484: add edi, 0xd0 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x171B348A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B3438; /* 0x171B348C: je 0x171b3438 */
L_171B348E:
    edi = 1; /* 0x171B348E: mov edi, 1 */
    goto L_171B349A; /* 0x171B3493: jmp 0x171b349a */
L_171B3495:
    edi = 3; /* 0x171B3495: mov edi, 3 */
L_171B349A:
    eax = MEM32(ebx); /* 0x171B349A: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x61u; /* 0x171B349C: mov dword ptr [eax + 0x14], 0x61 */
    PUSH32(esp, 4); /* 0x171B34A3: push 4 */
    MEM32(eax + 0x18) = esi; /* 0x171B34A5: mov dword ptr [eax + 0x18], esi */
    PUSH32(esp, ebx); /* 0x171B34A8: push ebx */
    MEM32(eax + 0x1C) = edi; /* 0x171B34A9: mov dword ptr [eax + 0x1c], edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B34AC: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B34AF: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B34E1; /* 0x171B34B0: je 0x171b34e1 */
L_171B34B2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B34B2: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B34C0; /* 0x171B34B3: je 0x171b34c0 */
L_171B34B5:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B34B5: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B34EB; /* 0x171B34B6: je 0x171b34eb */
L_171B34B8:
    edi = MEM32(ebp + 0xC); /* 0x171B34B8: mov edi, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_171B3430; /* 0x171B34BB: jmp 0x171b3430 */
L_171B34C0:
    PUSH32(esp, ebx); /* 0x171B34C0: push ebx */
    RECOMP_CALL(sub_171B2E90); /* 0x171B34C1: call 0x171b2e90 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B34C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B34D8; /* 0x171B34C8: je 0x171b34d8 */
L_171B34CA:
    esi = MEM32(ebx + 0x1A4); /* 0x171B34CA: mov esi, dword ptr [ebx + 0x1a4] */
    edi = MEM32(ebp + 0xC); /* 0x171B34D0: mov edi, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_171B3430; /* 0x171B34D3: jmp 0x171b3430 */
L_171B34D8:
    edi = POP32_VAL(esp); /* 0x171B34D8: pop edi */
    esi = POP32_VAL(esp); /* 0x171B34D9: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B34DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B34DC: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B34DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B34DE: ret 8 */
L_171B34E1:
    MEM32(ebx + 0x1A4) = 0; /* 0x171B34E1: mov dword ptr [ebx + 0x1a4], 0 */
L_171B34EB:
    edi = POP32_VAL(esp); /* 0x171B34EB: pop edi */
    esi = POP32_VAL(esp); /* 0x171B34EC: pop esi */
    eax = 1; /* 0x171B34ED: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x171B34F2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B34F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B34F4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B3500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3500u);

L_171B3500:
    edi = edi; /* 0x171B3500: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3502: push ebp */
    ebp = esp; /* 0x171B3503: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171B3505: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x1BC); /* 0x171B3508: mov eax, dword ptr [ecx + 0x1bc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B350E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0xDC) = edx; /* 0x171B3510: mov dword ptr [ecx + 0xdc], edx */
    MEM32(ecx + 0x94) = edx; /* 0x171B3516: mov dword ptr [ecx + 0x94], edx */
    MEM32(ecx + 0x1A4) = edx; /* 0x171B351C: mov dword ptr [ecx + 0x1a4], edx */
    MEM32(eax + 0xC) = edx; /* 0x171B3522: mov dword ptr [eax + 0xc], edx */
    MEM32(eax + 0x10) = edx; /* 0x171B3525: mov dword ptr [eax + 0x10], edx */
    MEM32(eax + 0x18) = edx; /* 0x171B3528: mov dword ptr [eax + 0x18], edx */
    MEM32(eax + 0xA4) = edx; /* 0x171B352B: mov dword ptr [eax + 0xa4], edx */
    ebp = POP32_VAL(esp); /* 0x171B3531: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B3532: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B3540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3540u);

L_171B3540:
    edi = edi; /* 0x171B3540: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3542: push ebp */
    ebp = esp; /* 0x171B3543: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B3545: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B3546: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171B3549: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x171B354C: push edi */
    PUSH32(esp, 0xACu); /* 0x171B354D: push 0xac */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B3552: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171B3554: push edi */
    PUSH32(esp, esi); /* 0x171B3555: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B3556: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1BC) = eax; /* 0x171B3558: mov dword ptr [esi + 0x1bc], eax */
    MEM32(eax) = 0x171B3500u; /* 0x171B355E: mov dword ptr [eax], 0x171b3500 */
    MEM32(eax + 0x4) = 0x171B3060u; /* 0x171B3564: mov dword ptr [eax + 4], 0x171b3060 */
    MEM32(eax + 0x8) = 0x171B3370u; /* 0x171B356B: mov dword ptr [eax + 8], 0x171b3370 */
    MEM32(eax + 0x1C) = 0x171B2DE0u; /* 0x171B3572: mov dword ptr [eax + 0x1c], 0x171b2de0 */
    MEM32(eax + 0x60) = edi; /* 0x171B3579: mov dword ptr [eax + 0x60], edi */
    ecx = eax + 0x64; /* 0x171B357C: lea ecx, [eax + 0x64] */
    edx = 0x10u; /* 0x171B357F: mov edx, 0x10 */
L_171B3584:
    MEM32(ecx + (-0x44)) = 0x171B2DE0u; /* 0x171B3584: mov dword ptr [ecx - 0x44], 0x171b2de0 */
    MEM32(ecx) = edi; /* 0x171B358B: mov dword ptr [ecx], edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171B358D: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171B3590: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B3584; /* 0x171B3591: jne 0x171b3584 */
L_171B3593:
    ecx = 0x171B2C60u; /* 0x171B3593: mov ecx, 0x171b2c60 */
    MEM32(eax + 0x20) = ecx; /* 0x171B3598: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x58) = ecx; /* 0x171B359B: mov dword ptr [eax + 0x58], ecx */
    MEM32(esi + 0xDC) = edi; /* 0x171B359E: mov dword ptr [esi + 0xdc], edi */
    MEM32(esi + 0x94) = edi; /* 0x171B35A4: mov dword ptr [esi + 0x94], edi */
    MEM32(esi + 0x1A4) = edi; /* 0x171B35AA: mov dword ptr [esi + 0x1a4], edi */
    MEM32(eax + 0xC) = edi; /* 0x171B35B0: mov dword ptr [eax + 0xc], edi */
    MEM32(eax + 0x10) = edi; /* 0x171B35B3: mov dword ptr [eax + 0x10], edi */
    MEM32(eax + 0x18) = edi; /* 0x171B35B6: mov dword ptr [eax + 0x18], edi */
    MEM32(eax + 0xA4) = edi; /* 0x171B35B9: mov dword ptr [eax + 0xa4], edi */
    edi = POP32_VAL(esp); /* 0x171B35BF: pop edi */
    esi = POP32_VAL(esp); /* 0x171B35C0: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B35C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B35C2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B35D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B35D0u);

L_171B35D0:
    edi = edi; /* 0x171B35D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B35D2: push ebp */
    ebp = esp; /* 0x171B35D3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B35D5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B35D6: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x171B35D9: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B35DB: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171B35DC: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171B35DF: push esi */
    RECOMP_CALL(sub_171B5C50); /* 0x171B35E0: call 0x171b5c50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x171B35E5: push 1 */
    RECOMP_CALL(sub_1721B5C0); /* 0x171B35E7: call 0x1721b5c0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x171B35ECu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171B3600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3600u);

L_171B3600:
    edi = edi; /* 0x171B3600: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3602: push ebp */
    ebp = esp; /* 0x171B3603: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCCu; /* 0x171B3605: sub esp, 0xcc */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171B360B: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B3610: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x171B3613: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x171B3616: mov ecx, dword ptr [eax] */
    edx = ebp + (-0xCC); /* 0x171B3618: lea edx, [ebp - 0xcc] */
    PUSH32(esp, edx); /* 0x171B361E: push edx */
    PUSH32(esp, eax); /* 0x171B361F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x171B3620: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x171B3623: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B76C); /* 0x171B3626: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x171B362B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B362D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B362E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B3640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3640u);

L_171B3640:
    edi = edi; /* 0x171B3640: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3642: push ebp */
    ebp = esp; /* 0x171B3643: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171B3645: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171B3648: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x171B364A: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171B364D: push esi */
    esi = MEM32(ecx); /* 0x171B364E: mov esi, dword ptr [ecx] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171B366B; /* 0x171B3650: jge 0x171b366b */
L_171B3652:
    eax = MEM32(esi + 0x6C); /* 0x171B3652: mov eax, dword ptr [esi + 0x6c] */
    /* test eax, eax */ /* 0x171B3655: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B365F; /* 0x171B3657: je 0x171b365f */
L_171B3659:
    /* cmp MEM32(esi + 0x68), 3 */ /* 0x171B3659: cmp dword ptr [esi + 0x68], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B3663; /* 0x171B365D: jl 0x171b3663 */
L_171B365F:
    PUSH32(esp, ecx); /* 0x171B365F: push ecx */
    RECOMP_ICALL(MEM32(esi + 0x8)); /* 0x171B3660: call dword ptr [esi + 8] */
    RECOMP_FLAGS_IN();
L_171B3663:
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) + 1; /* 0x171B3663: inc dword ptr [esi + 0x6c] */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x171B3666: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B3667: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B3668: ret 8 */
L_171B366B:
    /* cmp MEM32(esi + 0x68), eax */ /* 0x171B366B: cmp dword ptr [esi + 0x68], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B3674; /* 0x171B366E: jl 0x171b3674 */
L_171B3670:
    PUSH32(esp, ecx); /* 0x171B3670: push ecx */
    RECOMP_ICALL(MEM32(esi + 0x8)); /* 0x171B3671: call dword ptr [esi + 8] */
    RECOMP_FLAGS_IN();
L_171B3674:
    esi = POP32_VAL(esp); /* 0x171B3674: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B3675: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B3676: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B3680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3680u);

L_171B3680:
    edi = edi; /* 0x171B3680: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3682: push ebp */
    ebp = esp; /* 0x171B3683: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171B3685: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x171B3688: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B368A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x6C) = ecx; /* 0x171B368C: mov dword ptr [eax + 0x6c], ecx */
    MEM32(eax + 0x14) = ecx; /* 0x171B368F: mov dword ptr [eax + 0x14], ecx */
    ebp = POP32_VAL(esp); /* 0x171B3692: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B3693: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B36A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B36A0u);

L_171B36A0:
    edi = edi; /* 0x171B36A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B36A2: push ebp */
    ebp = esp; /* 0x171B36A3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171B36A5: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x171B36A8: mov eax, dword ptr [eax] */
    ecx = MEM32(eax + 0x14); /* 0x171B36AA: mov ecx, dword ptr [eax + 0x14] */
    /* test ecx, ecx */ /* 0x171B36AD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171B36AF: push esi */
    PUSH32(esp, edi); /* 0x171B36B0: push edi */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B36C0; /* 0x171B36B1: jle 0x171b36c0 */
L_171B36B3:
    /* cmp ecx, MEM32(eax + 0x74) */ /* 0x171B36B3: cmp ecx, dword ptr [eax + 0x74] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B36C0; /* 0x171B36B6: jg 0x171b36c0 */
L_171B36B8:
    edx = MEM32(eax + 0x70); /* 0x171B36B8: mov edx, dword ptr [eax + 0x70] */
    edx = MEM32(edx + ecx * 4); /* 0x171B36BB: mov edx, dword ptr [edx + ecx*4] */
    goto L_171B36DD; /* 0x171B36BE: jmp 0x171b36dd */
L_171B36C0:
    esi = MEM32(eax + 0x78); /* 0x171B36C0: mov esi, dword ptr [eax + 0x78] */
    /* test esi, esi */ /* 0x171B36C3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B36E1; /* 0x171B36C5: je 0x171b36e1 */
L_171B36C7:
    edx = MEM32(eax + 0x7C); /* 0x171B36C7: mov edx, dword ptr [eax + 0x7c] */
    /* cmp ecx, edx */ /* 0x171B36CA: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B36E1; /* 0x171B36CC: jl 0x171b36e1 */
L_171B36CE:
    /* cmp ecx, MEM32(eax + 0x80) */ /* 0x171B36CE: cmp ecx, dword ptr [eax + 0x80] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x80));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B36E1; /* 0x171B36D4: jg 0x171b36e1 */
L_171B36D6:
    edi = ecx; /* 0x171B36D6: mov edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x171B36D8: sub edi, edx */
    _flag_k = FK_CMP;
    edx = MEM32(esi + edi * 4); /* 0x171B36DA: mov edx, dword ptr [esi + edi*4] */
L_171B36DD:
    /* test edx, edx */ /* 0x171B36DD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B36E9; /* 0x171B36DF: jne 0x171b36e9 */
L_171B36E1:
    MEM32(eax + 0x18) = ecx; /* 0x171B36E1: mov dword ptr [eax + 0x18], ecx */
    ecx = MEM32(eax + 0x70); /* 0x171B36E4: mov ecx, dword ptr [eax + 0x70] */
    edx = MEM32(ecx); /* 0x171B36E7: mov edx, dword ptr [ecx] */
L_171B36E9:
    SET_LO8(ecx, MEM8(edx)); /* 0x171B36E9: mov cl, byte ptr [edx] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x171B36EB: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = edx; /* 0x171B36ED: mov esi, edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B36FD; /* 0x171B36EF: je 0x171b36fd */
L_171B36F1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B36F1: inc esi */
    _flag_k = FK_INC;
    /* cmp LO8(ecx), 0x25u */ /* 0x171B36F2: cmp cl, 0x25 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B3735; /* 0x171B36F5: je 0x171b3735 */
L_171B36F7:
    SET_LO8(ecx, MEM8(esi)); /* 0x171B36F7: mov cl, byte ptr [esi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x171B36F9: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B36F1; /* 0x171B36FB: jne 0x171b36f1 */
L_171B36FD:
    ecx = MEM32(eax + 0x34); /* 0x171B36FD: mov ecx, dword ptr [eax + 0x34] */
    PUSH32(esp, ecx); /* 0x171B3700: push ecx */
    ecx = MEM32(eax + 0x30); /* 0x171B3701: mov ecx, dword ptr [eax + 0x30] */
    PUSH32(esp, ecx); /* 0x171B3704: push ecx */
    ecx = MEM32(eax + 0x2C); /* 0x171B3705: mov ecx, dword ptr [eax + 0x2c] */
    PUSH32(esp, ecx); /* 0x171B3708: push ecx */
    ecx = MEM32(eax + 0x28); /* 0x171B3709: mov ecx, dword ptr [eax + 0x28] */
    PUSH32(esp, ecx); /* 0x171B370C: push ecx */
    ecx = MEM32(eax + 0x24); /* 0x171B370D: mov ecx, dword ptr [eax + 0x24] */
    PUSH32(esp, ecx); /* 0x171B3710: push ecx */
    ecx = MEM32(eax + 0x20); /* 0x171B3711: mov ecx, dword ptr [eax + 0x20] */
    PUSH32(esp, ecx); /* 0x171B3714: push ecx */
    ecx = MEM32(eax + 0x1C); /* 0x171B3715: mov ecx, dword ptr [eax + 0x1c] */
    eax = MEM32(eax + 0x18); /* 0x171B3718: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, ecx); /* 0x171B371B: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171B371C: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171B371F: push eax */
    PUSH32(esp, edx); /* 0x171B3720: push edx */
    PUSH32(esp, 0xC8u); /* 0x171B3721: push 0xc8 */
    PUSH32(esp, ecx); /* 0x171B3726: push ecx */
    RECOMP_CALL(sub_1705338C); /* 0x171B3727: call 0x1705338c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x171B372C: add esp, 0x2c */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x171B372F: pop edi */
    esi = POP32_VAL(esp); /* 0x171B3730: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B3731: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B3732: ret 8 */
L_171B3735:
    /* cmp MEM8(esi), 0x73u */ /* 0x171B3735: cmp byte ptr [esi], 0x73 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x73u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B36FD; /* 0x171B3738: jne 0x171b36fd */
L_171B373A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x171B373A: add eax, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171B373D: push eax */
    PUSH32(esp, edx); /* 0x171B373E: push edx */
    edx = MEM32(ebp + 0xC); /* 0x171B373F: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xC8u); /* 0x171B3742: push 0xc8 */
    PUSH32(esp, edx); /* 0x171B3747: push edx */
    RECOMP_CALL(sub_1705338C); /* 0x171B3748: call 0x1705338c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x171B374D: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x171B3750: pop edi */
    esi = POP32_VAL(esp); /* 0x171B3751: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B3752: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B3753: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B3760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3760u);

L_171B3760:
    edi = edi; /* 0x171B3760: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3762: push ebp */
    ebp = esp; /* 0x171B3763: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171B3765: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B3768: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x171B35D0u; /* 0x171B376A: mov dword ptr [eax], 0x171b35d0 */
    MEM32(eax + 0x4) = 0x171B3640u; /* 0x171B3770: mov dword ptr [eax + 4], 0x171b3640 */
    MEM32(eax + 0x8) = 0x171B3600u; /* 0x171B3777: mov dword ptr [eax + 8], 0x171b3600 */
    MEM32(eax + 0xC) = 0x171B36A0u; /* 0x171B377E: mov dword ptr [eax + 0xc], 0x171b36a0 */
    MEM32(eax + 0x10) = 0x171B3680u; /* 0x171B3785: mov dword ptr [eax + 0x10], 0x171b3680 */
    MEM32(eax + 0x68) = ecx; /* 0x171B378C: mov dword ptr [eax + 0x68], ecx */
    MEM32(eax + 0x6C) = ecx; /* 0x171B378F: mov dword ptr [eax + 0x6c], ecx */
    MEM32(eax + 0x14) = ecx; /* 0x171B3792: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x70) = 0x17023F48u; /* 0x171B3795: mov dword ptr [eax + 0x70], 0x17023f48 */
    MEM32(eax + 0x74) = 0x7Bu; /* 0x171B379C: mov dword ptr [eax + 0x74], 0x7b */
    MEM32(eax + 0x78) = ecx; /* 0x171B37A3: mov dword ptr [eax + 0x78], ecx */
    MEM32(eax + 0x7C) = ecx; /* 0x171B37A6: mov dword ptr [eax + 0x7c], ecx */
    MEM32(eax + 0x80) = ecx; /* 0x171B37A9: mov dword ptr [eax + 0x80], ecx */
    ebp = POP32_VAL(esp); /* 0x171B37AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B37B0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B37C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B37C0u);

L_171B37C0:
    edi = edi; /* 0x171B37C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B37C2: push ebp */
    ebp = esp; /* 0x171B37C3: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x171B37C5: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171B37C8: push ebx */
    PUSH32(esp, esi); /* 0x171B37C9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B37CA: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B37CD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x3Eu */ /* 0x171B37CF: cmp ecx, 0x3e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171B37D2: push edi */
    MEM32(esi + 0x4) = ebx; /* 0x171B37D3: mov dword ptr [esi + 4], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B37EE; /* 0x171B37D6: je 0x171b37ee */
L_171B37D8:
    eax = MEM32(esi); /* 0x171B37D8: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xCu; /* 0x171B37DA: mov dword ptr [eax + 0x14], 0xc */
    MEM32(eax + 0x18) = 0x3Eu; /* 0x171B37E1: mov dword ptr [eax + 0x18], 0x3e */
    PUSH32(esp, esi); /* 0x171B37E8: push esi */
    MEM32(eax + 0x1C) = ecx; /* 0x171B37E9: mov dword ptr [eax + 0x1c], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B37EC: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B37EE:
    ecx = MEM32(ebp + 0x10); /* 0x171B37EE: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, 0x180u */ /* 0x171B37F1: cmp ecx, 0x180 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x180u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B380F; /* 0x171B37F7: je 0x171b380f */
L_171B37F9:
    eax = MEM32(esi); /* 0x171B37F9: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x15u; /* 0x171B37FB: mov dword ptr [eax + 0x14], 0x15 */
    MEM32(eax + 0x18) = 0x180u; /* 0x171B3802: mov dword ptr [eax + 0x18], 0x180 */
    PUSH32(esp, esi); /* 0x171B3809: push esi */
    MEM32(eax + 0x1C) = ecx; /* 0x171B380A: mov dword ptr [eax + 0x1c], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B380D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B380F:
    eax = MEM32(esi + 0xC); /* 0x171B380F: mov eax, dword ptr [esi + 0xc] */
    edx = MEM32(esi); /* 0x171B3812: mov edx, dword ptr [esi] */
    MEM32(ebp + 0x8) = eax; /* 0x171B3814: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B3817: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x60u; /* 0x171B3819: mov ecx, 0x60 */
    edi = esi; /* 0x171B381E: mov edi, esi */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B3820: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = MEM32(ebp + 0x8); /* 0x171B3822: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171B3825: push esi */
    MEM32(esi) = edx; /* 0x171B3826: mov dword ptr [esi], edx */
    MEM32(esi + 0xC) = ecx; /* 0x171B3828: mov dword ptr [esi + 0xc], ecx */
    MEM32(esi + 0x10) = ebx; /* 0x171B382B: mov dword ptr [esi + 0x10], ebx */
    RECOMP_CALL(sub_171B5B40); /* 0x171B382E: call 0x171b5b40 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = ebx; /* 0x171B3833: mov dword ptr [esi + 8], ebx */
    fp_push(*(double*)ADDR(0x17001D88)); /* 0x171B3836: fld qword ptr [0x17001d88] */
    MEM32(esi + 0x18) = ebx; /* 0x171B383C: mov dword ptr [esi + 0x18], ebx */
    MEM32(esi + 0x44) = ebx; /* 0x171B383F: mov dword ptr [esi + 0x44], ebx */
    MEM32(esi + 0x48) = ebx; /* 0x171B3842: mov dword ptr [esi + 0x48], ebx */
    MEM32(esi + 0x4C) = ebx; /* 0x171B3845: mov dword ptr [esi + 0x4c], ebx */
    MEM32(esi + 0x50) = ebx; /* 0x171B3848: mov dword ptr [esi + 0x50], ebx */
    MEM32(esi + 0x54) = ebx; /* 0x171B384B: mov dword ptr [esi + 0x54], ebx */
    MEM32(esi + 0x58) = ebx; /* 0x171B384E: mov dword ptr [esi + 0x58], ebx */
    MEM32(esi + 0x68) = ebx; /* 0x171B3851: mov dword ptr [esi + 0x68], ebx */
    MEM32(esi + 0x5C) = ebx; /* 0x171B3854: mov dword ptr [esi + 0x5c], ebx */
    MEM32(esi + 0x6C) = ebx; /* 0x171B3857: mov dword ptr [esi + 0x6c], ebx */
    MEM32(esi + 0x60) = ebx; /* 0x171B385A: mov dword ptr [esi + 0x60], ebx */
    MEM32(esi + 0x70) = ebx; /* 0x171B385D: mov dword ptr [esi + 0x70], ebx */
    MEM32(esi + 0x64) = ebx; /* 0x171B3860: mov dword ptr [esi + 0x64], ebx */
    MEM32(esi + 0x74) = ebx; /* 0x171B3863: mov dword ptr [esi + 0x74], ebx */
    edi = POP32_VAL(esp); /* 0x171B3866: pop edi */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x30) = _v; } /* 0x171B3867: fstp qword ptr [esi + 0x30] */
    MEM32(esi + 0x178) = ebx; /* 0x171B386A: mov dword ptr [esi + 0x178], ebx */
    MEM32(esi + 0x14) = 0x64u; /* 0x171B3870: mov dword ptr [esi + 0x14], 0x64 */
    esi = POP32_VAL(esp); /* 0x171B3877: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B3878: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B3879: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171B387A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171B3890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3890u);

L_171B3890:
    edi = edi; /* 0x171B3890: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3892: push ebp */
    ebp = esp; /* 0x171B3893: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171B3895: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x48); /* 0x171B3898: mov ecx, dword ptr [eax + 0x48] */
    /* test ecx, ecx */ /* 0x171B389B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0xC); /* 0x171B389D: mov edx, dword ptr [ebp + 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B38A8; /* 0x171B38A0: je 0x171b38a8 */
L_171B38A2:
    MEM32(ecx + 0x80) = edx; /* 0x171B38A2: mov dword ptr [ecx + 0x80], edx */
L_171B38A8:
    ecx = MEM32(eax + 0x4C); /* 0x171B38A8: mov ecx, dword ptr [eax + 0x4c] */
    /* test ecx, ecx */ /* 0x171B38AB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B38B5; /* 0x171B38AD: je 0x171b38b5 */
L_171B38AF:
    MEM32(ecx + 0x80) = edx; /* 0x171B38AF: mov dword ptr [ecx + 0x80], edx */
L_171B38B5:
    ecx = MEM32(eax + 0x50); /* 0x171B38B5: mov ecx, dword ptr [eax + 0x50] */
    /* test ecx, ecx */ /* 0x171B38B8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B38C2; /* 0x171B38BA: je 0x171b38c2 */
L_171B38BC:
    MEM32(ecx + 0x80) = edx; /* 0x171B38BC: mov dword ptr [ecx + 0x80], edx */
L_171B38C2:
    ecx = MEM32(eax + 0x54); /* 0x171B38C2: mov ecx, dword ptr [eax + 0x54] */
    /* test ecx, ecx */ /* 0x171B38C5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B38CF; /* 0x171B38C7: je 0x171b38cf */
L_171B38C9:
    MEM32(ecx + 0x80) = edx; /* 0x171B38C9: mov dword ptr [ecx + 0x80], edx */
L_171B38CF:
    PUSH32(esp, esi); /* 0x171B38CF: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x68u; /* 0x171B38D0: add eax, 0x68 */
    _flag_k = FK_ADD;
    esi = 4; /* 0x171B38D3: mov esi, 4 */
L_171B38D8:
    ecx = MEM32(eax + (-0x10)); /* 0x171B38D8: mov ecx, dword ptr [eax - 0x10] */
    /* test ecx, ecx */ /* 0x171B38DB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B38E5; /* 0x171B38DD: je 0x171b38e5 */
L_171B38DF:
    MEM32(ecx + 0x114) = edx; /* 0x171B38DF: mov dword ptr [ecx + 0x114], edx */
L_171B38E5:
    ecx = MEM32(eax); /* 0x171B38E5: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x171B38E7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B38F1; /* 0x171B38E9: je 0x171b38f1 */
L_171B38EB:
    MEM32(ecx + 0x114) = edx; /* 0x171B38EB: mov dword ptr [ecx + 0x114], edx */
L_171B38F1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B38F1: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171B38F4: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B38D8; /* 0x171B38F5: jne 0x171b38d8 */
L_171B38F7:
    esi = POP32_VAL(esp); /* 0x171B38F7: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B38F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B38F9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B3910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3910u);

L_171B3910:
    edi = edi; /* 0x171B3910: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3912: push ebp */
    ebp = esp; /* 0x171B3913: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B3915: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B3916: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x14); /* 0x171B3919: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 0x65u */ /* 0x171B391C: cmp ecx, 0x65 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B393C; /* 0x171B391F: je 0x171b393c */
L_171B3921:
    /* cmp ecx, 0x66u */ /* 0x171B3921: cmp ecx, 0x66 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x66u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B393C; /* 0x171B3924: je 0x171b393c */
L_171B3926:
    /* cmp ecx, 0x67u */ /* 0x171B3926: cmp ecx, 0x67 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x67u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B395D; /* 0x171B3929: je 0x171b395d */
L_171B392B:
    eax = MEM32(esi); /* 0x171B392B: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x171B392D: mov dword ptr [eax + 0x14], 0x14 */
    PUSH32(esp, esi); /* 0x171B3934: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B3935: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B3938: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    goto L_171B395D; /* 0x171B393A: jmp 0x171b395d */
L_171B393C:
    eax = MEM32(esi + 0xE8); /* 0x171B393C: mov eax, dword ptr [esi + 0xe8] */
    /* cmp eax, MEM32(esi + 0x20) */ /* 0x171B3942: cmp eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B3953; /* 0x171B3945: jae 0x171b3953 */
L_171B3947:
    eax = MEM32(esi); /* 0x171B3947: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B3949: push esi */
    MEM32(eax + 0x14) = 0x43u; /* 0x171B394A: mov dword ptr [eax + 0x14], 0x43 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B3951: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B3953:
    ecx = MEM32(esi + 0x154); /* 0x171B3953: mov ecx, dword ptr [esi + 0x154] */
    PUSH32(esp, esi); /* 0x171B3959: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171B395A: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_171B395D:
    eax = MEM32(esi + 0x154); /* 0x171B395D: mov eax, dword ptr [esi + 0x154] */
    ecx = MEM32(eax + 0x10); /* 0x171B3963: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x171B3966: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B39CC; /* 0x171B3968: jne 0x171b39cc */
L_171B396A:
    PUSH32(esp, ebx); /* 0x171B396A: push ebx */
    PUSH32(esp, edi); /* 0x171B396B: push edi */
    ebx = 0x18u; /* 0x171B396C: mov ebx, 0x18 */
L_171B3971:
    PUSH32(esp, esi); /* 0x171B3971: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B3972: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xF8); /* 0x171B3974: mov ecx, dword ptr [esi + 0xf8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B397A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171B397C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B39B3; /* 0x171B397E: jbe 0x171b39b3 */
L_171B3980:
    eax = MEM32(esi + 0x8); /* 0x171B3980: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x171B3983: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B3990; /* 0x171B3985: je 0x171b3990 */
L_171B3987:
    MEM32(eax + 0x4) = edi; /* 0x171B3987: mov dword ptr [eax + 4], edi */
    PUSH32(esp, esi); /* 0x171B398A: push esi */
    MEM32(eax + 0x8) = ecx; /* 0x171B398B: mov dword ptr [eax + 8], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B398E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B3990:
    edx = MEM32(esi + 0x160); /* 0x171B3990: mov edx, dword ptr [esi + 0x160] */
    PUSH32(esp, 0); /* 0x171B3996: push 0 */
    PUSH32(esp, esi); /* 0x171B3998: push esi */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x171B3999: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B399C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B39A8; /* 0x171B399E: jne 0x171b39a8 */
L_171B39A0:
    eax = MEM32(esi); /* 0x171B39A0: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B39A2: push esi */
    MEM32(eax + 0x14) = ebx; /* 0x171B39A3: mov dword ptr [eax + 0x14], ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B39A6: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B39A8:
    ecx = MEM32(esi + 0xF8); /* 0x171B39A8: mov ecx, dword ptr [esi + 0xf8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B39AE: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ecx */ /* 0x171B39AF: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B3980; /* 0x171B39B1: jb 0x171b3980 */
L_171B39B3:
    eax = MEM32(esi + 0x154); /* 0x171B39B3: mov eax, dword ptr [esi + 0x154] */
    PUSH32(esp, esi); /* 0x171B39B9: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171B39BA: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x154); /* 0x171B39BD: mov eax, dword ptr [esi + 0x154] */
    ecx = MEM32(eax + 0x10); /* 0x171B39C3: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x171B39C6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B3971; /* 0x171B39C8: je 0x171b3971 */
L_171B39CA:
    edi = POP32_VAL(esp); /* 0x171B39CA: pop edi */
    ebx = POP32_VAL(esp); /* 0x171B39CB: pop ebx */
L_171B39CC:
    ecx = MEM32(esi + 0x164); /* 0x171B39CC: mov ecx, dword ptr [esi + 0x164] */
    PUSH32(esp, esi); /* 0x171B39D2: push esi */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x171B39D3: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x18); /* 0x171B39D6: mov edx, dword ptr [esi + 0x18] */
    PUSH32(esp, esi); /* 0x171B39D9: push esi */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x171B39DA: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171B39DD: push esi */
    RECOMP_CALL(sub_171B5C00); /* 0x171B39DE: call 0x171b5c00 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171B39E3: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B39E4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B39E5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B39F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B39F0u);

L_171B39F0:
    edi = edi; /* 0x171B39F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B39F2: push ebp */
    ebp = esp; /* 0x171B39F3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B39F5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B39F6: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x14); /* 0x171B39F9: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 0x64u */ /* 0x171B39FC: cmp ecx, 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B3A10; /* 0x171B39FF: je 0x171b3a10 */
L_171B3A01:
    eax = MEM32(esi); /* 0x171B3A01: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x171B3A03: mov dword ptr [eax + 0x14], 0x14 */
    PUSH32(esp, esi); /* 0x171B3A0A: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B3A0B: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B3A0E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B3A10:
    eax = MEM32(ebp + 0xC); /* 0x171B3A10: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171B3A13: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B3A1F; /* 0x171B3A15: je 0x171b3a1f */
L_171B3A17:
    PUSH32(esp, 0); /* 0x171B3A17: push 0 */
    PUSH32(esp, esi); /* 0x171B3A19: push esi */
    RECOMP_CALL(sub_171B3890); /* 0x171B3A1A: call 0x171b3890 */
    RECOMP_FLAGS_IN();
L_171B3A1F:
    eax = MEM32(esi); /* 0x171B3A1F: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B3A21: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171B3A22: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x18); /* 0x171B3A25: mov ecx, dword ptr [esi + 0x18] */
    PUSH32(esp, esi); /* 0x171B3A28: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171B3A29: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171B3A2C: push esi */
    RECOMP_CALL(sub_171B6ED0); /* 0x171B3A2D: call 0x171b6ed0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x154); /* 0x171B3A32: mov edx, dword ptr [esi + 0x154] */
    PUSH32(esp, esi); /* 0x171B3A38: push esi */
    RECOMP_ICALL(MEM32(edx)); /* 0x171B3A39: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0xB0); /* 0x171B3A3B: mov edx, dword ptr [esi + 0xb0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B3A41: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x171B3A43: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x171B3A45: setne al */
    MEM32(esi + 0xE8) = 0; /* 0x171B3A48: mov dword ptr [esi + 0xe8], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x65u; /* 0x171B3A52: add eax, 0x65 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x14) = eax; /* 0x171B3A55: mov dword ptr [esi + 0x14], eax */
    esi = POP32_VAL(esp); /* 0x171B3A58: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B3A59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B3A5A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B3A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3A70u);

L_171B3A70:
    edi = edi; /* 0x171B3A70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3A72: push ebp */
    ebp = esp; /* 0x171B3A73: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B3A75: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B3A76: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x14); /* 0x171B3A79: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 0x65u */ /* 0x171B3A7C: cmp ecx, 0x65 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B3A90; /* 0x171B3A7F: je 0x171b3a90 */
L_171B3A81:
    eax = MEM32(esi); /* 0x171B3A81: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x171B3A83: mov dword ptr [eax + 0x14], 0x14 */
    PUSH32(esp, esi); /* 0x171B3A8A: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B3A8B: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B3A8E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B3A90:
    eax = MEM32(esi + 0xE8); /* 0x171B3A90: mov eax, dword ptr [esi + 0xe8] */
    /* cmp eax, MEM32(esi + 0x20) */ /* 0x171B3A96: cmp eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171B3AAA; /* 0x171B3A99: jb 0x171b3aaa */
L_171B3A9B:
    eax = MEM32(esi); /* 0x171B3A9B: mov eax, dword ptr [esi] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171B3A9D: push -1 */
    PUSH32(esp, esi); /* 0x171B3A9F: push esi */
    MEM32(eax + 0x14) = 0x7Bu; /* 0x171B3AA0: mov dword ptr [eax + 0x14], 0x7b */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B3AA7: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_171B3AAA:
    eax = MEM32(esi + 0x8); /* 0x171B3AAA: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x171B3AAD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B3AC3; /* 0x171B3AAF: je 0x171b3ac3 */
L_171B3AB1:
    ecx = MEM32(esi + 0xE8); /* 0x171B3AB1: mov ecx, dword ptr [esi + 0xe8] */
    edx = MEM32(esi + 0x20); /* 0x171B3AB7: mov edx, dword ptr [esi + 0x20] */
    MEM32(eax + 0x4) = ecx; /* 0x171B3ABA: mov dword ptr [eax + 4], ecx */
    PUSH32(esp, esi); /* 0x171B3ABD: push esi */
    MEM32(eax + 0x8) = edx; /* 0x171B3ABE: mov dword ptr [eax + 8], edx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B3AC1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B3AC3:
    eax = MEM32(esi + 0x154); /* 0x171B3AC3: mov eax, dword ptr [esi + 0x154] */
    ecx = MEM32(eax + 0xC); /* 0x171B3AC9: mov ecx, dword ptr [eax + 0xc] */
    /* test ecx, ecx */ /* 0x171B3ACC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B3AD4; /* 0x171B3ACE: je 0x171b3ad4 */
L_171B3AD0:
    PUSH32(esp, esi); /* 0x171B3AD0: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B3AD1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_171B3AD4:
    ecx = MEM32(esi + 0xE8); /* 0x171B3AD4: mov ecx, dword ptr [esi + 0xe8] */
    eax = MEM32(esi + 0x20); /* 0x171B3ADA: mov eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B3ADD: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x171B3ADF: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, eax */ /* 0x171B3AE2: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B3AE8; /* 0x171B3AE4: jbe 0x171b3ae8 */
L_171B3AE6:
    ecx = eax; /* 0x171B3AE6: mov ecx, eax */
L_171B3AE8:
    edx = MEM32(ebp + 0xC); /* 0x171B3AE8: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(esi + 0x158); /* 0x171B3AEB: mov eax, dword ptr [esi + 0x158] */
    PUSH32(esp, ecx); /* 0x171B3AF1: push ecx */
    ecx = ebp + 0x8; /* 0x171B3AF2: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x171B3AF5: push ecx */
    PUSH32(esp, edx); /* 0x171B3AF6: push edx */
    PUSH32(esp, esi); /* 0x171B3AF7: push esi */
    MEM32(ebp + 0x8) = 0; /* 0x171B3AF8: mov dword ptr [ebp + 8], 0 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B3AFF: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xE8); /* 0x171B3B02: mov ecx, dword ptr [esi + 0xe8] */
    eax = MEM32(ebp + 0x8); /* 0x171B3B08: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171B3B0B: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0xE8) = ecx; /* 0x171B3B0D: mov dword ptr [esi + 0xe8], ecx */
    esi = POP32_VAL(esp); /* 0x171B3B13: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B3B14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171B3B15: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171B3B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3B20u);

L_171B3B20:
    edi = edi; /* 0x171B3B20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3B22: push ebp */
    ebp = esp; /* 0x171B3B23: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B3B25: push ebx */
    PUSH32(esp, esi); /* 0x171B3B26: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B3B27: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x14); /* 0x171B3B2A: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 0x64u */ /* 0x171B3B2D: cmp ecx, 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171B3B30: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B3B42; /* 0x171B3B31: je 0x171b3b42 */
L_171B3B33:
    eax = MEM32(esi); /* 0x171B3B33: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x171B3B35: mov dword ptr [eax + 0x14], 0x14 */
    PUSH32(esp, esi); /* 0x171B3B3C: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B3B3D: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B3B40: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B3B42:
    edi = MEM32(ebp + 0xC); /* 0x171B3B42: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x171B3B45: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B3B4E; /* 0x171B3B47: jl 0x171b3b4e */
L_171B3B49:
    /* cmp edi, 4 */ /* 0x171B3B49: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B3B5D; /* 0x171B3B4C: jl 0x171b3b5d */
L_171B3B4E:
    eax = MEM32(esi); /* 0x171B3B4E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Fu; /* 0x171B3B50: mov dword ptr [eax + 0x14], 0x1f */
    PUSH32(esp, esi); /* 0x171B3B57: push esi */
    MEM32(eax + 0x18) = edi; /* 0x171B3B58: mov dword ptr [eax + 0x18], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B3B5B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B3B5D:
    eax = MEM32(esi + edi * 4 + 0x48); /* 0x171B3B5D: mov eax, dword ptr [esi + edi*4 + 0x48] */
    /* test eax, eax */ /* 0x171B3B61: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B3B6F; /* 0x171B3B63: jne 0x171b3b6f */
L_171B3B65:
    PUSH32(esp, esi); /* 0x171B3B65: push esi */
    RECOMP_CALL(sub_171B5C80); /* 0x171B3B66: call 0x171b5c80 */
    RECOMP_FLAGS_IN();
    MEM32(esi + edi * 4 + 0x48) = eax; /* 0x171B3B6B: mov dword ptr [esi + edi*4 + 0x48], eax */
L_171B3B6F:
    edi = MEM32(esi + edi * 4 + 0x48); /* 0x171B3B6F: mov edi, dword ptr [esi + edi*4 + 0x48] */
    esi = MEM32(ebp + 0x10); /* 0x171B3B73: mov esi, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + 0x14); /* 0x171B3B76: mov ebx, dword ptr [ebp + 0x14] */
    MEM32(ebp + 0xC) = edi; /* 0x171B3B79: mov dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171B3B7C: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x171B3B7F: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = 0x10u; /* 0x171B3B82: mov dword ptr [ebp + 8], 0x10 */
    esp = esp; /* 0x171B3B89: lea esp, [esp] */
L_171B3B90:
    ecx = MEM32(esi + (-0x8)); /* 0x171B3B90: mov ecx, dword ptr [esi - 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x171B3B93: imul ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x32u; /* 0x171B3B96: add ecx, 0x32 */
    _flag_k = FK_ADD;
    eax = 0x51EB851Fu; /* 0x171B3B99: mov eax, 0x51eb851f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x171B3B9E: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x171B3BA0: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x171B3BA3: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x171B3BA5: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x171B3BA5: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B3BA8: add eax, edx */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x171B3BAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171B3BB5; /* 0x171B3BAC: jg 0x171b3bb5 */
L_171B3BAE:
    eax = 1; /* 0x171B3BAE: mov eax, 1 */
    goto L_171B3BC1; /* 0x171B3BB3: jmp 0x171b3bc1 */
L_171B3BB5:
    /* cmp eax, 0x7FFFu */ /* 0x171B3BB5: cmp eax, 0x7fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B3BC1; /* 0x171B3BBA: jle 0x171b3bc1 */
L_171B3BBC:
    eax = 0x7FFFu; /* 0x171B3BBC: mov eax, 0x7fff */
L_171B3BC1:
    ecx = MEM32(ebp + 0x18); /* 0x171B3BC1: mov ecx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x171B3BC4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B3BD4; /* 0x171B3BC6: je 0x171b3bd4 */
L_171B3BC8:
    /* cmp eax, 0xFFu */ /* 0x171B3BC8: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B3BD4; /* 0x171B3BCD: jle 0x171b3bd4 */
L_171B3BCF:
    eax = 0xFFu; /* 0x171B3BCF: mov eax, 0xff */
L_171B3BD4:
    ecx = MEM32(esi + (-0x4)); /* 0x171B3BD4: mov ecx, dword ptr [esi - 4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x171B3BD7: imul ecx, ebx */
    MEM16(edi + (-0x4)) = (uint16_t)(LO16(eax)); /* 0x171B3BDA: mov word ptr [edi - 4], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x32u; /* 0x171B3BDE: add ecx, 0x32 */
    _flag_k = FK_ADD;
    eax = 0x51EB851Fu; /* 0x171B3BE1: mov eax, 0x51eb851f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x171B3BE6: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x171B3BE8: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x171B3BEB: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x171B3BED: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x171B3BED: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B3BF0: add eax, edx */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x171B3BF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171B3BFD; /* 0x171B3BF4: jg 0x171b3bfd */
L_171B3BF6:
    eax = 1; /* 0x171B3BF6: mov eax, 1 */
    goto L_171B3C09; /* 0x171B3BFB: jmp 0x171b3c09 */
L_171B3BFD:
    /* cmp eax, 0x7FFFu */ /* 0x171B3BFD: cmp eax, 0x7fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B3C09; /* 0x171B3C02: jle 0x171b3c09 */
L_171B3C04:
    eax = 0x7FFFu; /* 0x171B3C04: mov eax, 0x7fff */
L_171B3C09:
    ecx = MEM32(ebp + 0x18); /* 0x171B3C09: mov ecx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x171B3C0C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B3C1C; /* 0x171B3C0E: je 0x171b3c1c */
L_171B3C10:
    /* cmp eax, 0xFFu */ /* 0x171B3C10: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B3C1C; /* 0x171B3C15: jle 0x171b3c1c */
L_171B3C17:
    eax = 0xFFu; /* 0x171B3C17: mov eax, 0xff */
L_171B3C1C:
    ecx = MEM32(esi); /* 0x171B3C1C: mov ecx, dword ptr [esi] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x171B3C1E: imul ecx, ebx */
    MEM16(edi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x171B3C21: mov word ptr [edi - 2], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x32u; /* 0x171B3C25: add ecx, 0x32 */
    _flag_k = FK_ADD;
    eax = 0x51EB851Fu; /* 0x171B3C28: mov eax, 0x51eb851f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x171B3C2D: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x171B3C2F: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x171B3C32: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x171B3C34: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x171B3C34: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B3C37: add eax, edx */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x171B3C39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171B3C44; /* 0x171B3C3B: jg 0x171b3c44 */
L_171B3C3D:
    eax = 1; /* 0x171B3C3D: mov eax, 1 */
    goto L_171B3C50; /* 0x171B3C42: jmp 0x171b3c50 */
L_171B3C44:
    /* cmp eax, 0x7FFFu */ /* 0x171B3C44: cmp eax, 0x7fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B3C50; /* 0x171B3C49: jle 0x171b3c50 */
L_171B3C4B:
    eax = 0x7FFFu; /* 0x171B3C4B: mov eax, 0x7fff */
L_171B3C50:
    ecx = MEM32(ebp + 0x18); /* 0x171B3C50: mov ecx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x171B3C53: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B3C63; /* 0x171B3C55: je 0x171b3c63 */
L_171B3C57:
    /* cmp eax, 0xFFu */ /* 0x171B3C57: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B3C63; /* 0x171B3C5C: jle 0x171b3c63 */
L_171B3C5E:
    eax = 0xFFu; /* 0x171B3C5E: mov eax, 0xff */
L_171B3C63:
    ecx = MEM32(esi + 0x4); /* 0x171B3C63: mov ecx, dword ptr [esi + 4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x171B3C66: imul ecx, ebx */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x171B3C69: mov word ptr [edi], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x32u; /* 0x171B3C6C: add ecx, 0x32 */
    _flag_k = FK_ADD;
    eax = 0x51EB851Fu; /* 0x171B3C6F: mov eax, 0x51eb851f */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x171B3C74: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x171B3C76: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x171B3C79: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x171B3C7B: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x171B3C7B: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B3C7E: add eax, edx */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x171B3C80: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171B3C8B; /* 0x171B3C82: jg 0x171b3c8b */
L_171B3C84:
    eax = 1; /* 0x171B3C84: mov eax, 1 */
    goto L_171B3C97; /* 0x171B3C89: jmp 0x171b3c97 */
L_171B3C8B:
    /* cmp eax, 0x7FFFu */ /* 0x171B3C8B: cmp eax, 0x7fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B3C97; /* 0x171B3C90: jle 0x171b3c97 */
L_171B3C92:
    eax = 0x7FFFu; /* 0x171B3C92: mov eax, 0x7fff */
L_171B3C97:
    ecx = MEM32(ebp + 0x18); /* 0x171B3C97: mov ecx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x171B3C9A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B3CAA; /* 0x171B3C9C: je 0x171b3caa */
L_171B3C9E:
    /* cmp eax, 0xFFu */ /* 0x171B3C9E: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B3CAA; /* 0x171B3CA3: jle 0x171b3caa */
L_171B3CA5:
    eax = 0xFFu; /* 0x171B3CA5: mov eax, 0xff */
L_171B3CAA:
    MEM16(edi + 0x2) = (uint16_t)(LO16(eax)); /* 0x171B3CAA: mov word ptr [edi + 2], ax */
    eax = MEM32(ebp + 0x8); /* 0x171B3CAE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x171B3CB1: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x171B3CB4: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B3CB7: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = eax; /* 0x171B3CB8: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B3B90; /* 0x171B3CBB: jne 0x171b3b90 */
L_171B3CC1:
    eax = MEM32(ebp + 0xC); /* 0x171B3CC1: mov eax, dword ptr [ebp + 0xc] */
    edi = POP32_VAL(esp); /* 0x171B3CC4: pop edi */
    esi = POP32_VAL(esp); /* 0x171B3CC5: pop esi */
    MEM32(eax + 0x80) = 0; /* 0x171B3CC6: mov dword ptr [eax + 0x80], 0 */
    ebx = POP32_VAL(esp); /* 0x171B3CD0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B3CD1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171B3CD2: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171B3CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3CE0u);

L_171B3CE0:
    edi = edi; /* 0x171B3CE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3CE2: push ebp */
    ebp = esp; /* 0x171B3CE3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B3CE5: push esi */
    PUSH32(esp, edi); /* 0x171B3CE6: push edi */
    edi = eax; /* 0x171B3CE7: mov edi, eax */
    /* cmp MEM32(ebx), 0 */ /* 0x171B3CE9: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B3CF9; /* 0x171B3CEC: jne 0x171b3cf9 */
L_171B3CEE:
    eax = MEM32(ebp + 0x8); /* 0x171B3CEE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x171B3CF1: push eax */
    RECOMP_CALL(sub_171B5CB0); /* 0x171B3CF2: call 0x171b5cb0 */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = eax; /* 0x171B3CF7: mov dword ptr [ebx], eax */
L_171B3CF9:
    edx = MEM32(ebx); /* 0x171B3CF9: mov edx, dword ptr [ebx] */
    ecx = edi; /* 0x171B3CFB: mov ecx, edi */
    eax = MEM32(ecx); /* 0x171B3CFD: mov eax, dword ptr [ecx] */
    MEM32(edx) = eax; /* 0x171B3CFF: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x4); /* 0x171B3D01: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x171B3D04: mov dword ptr [edx + 4], eax */
    eax = MEM32(ecx + 0x8); /* 0x171B3D07: mov eax, dword ptr [ecx + 8] */
    MEM32(edx + 0x8) = eax; /* 0x171B3D0A: mov dword ptr [edx + 8], eax */
    eax = MEM32(ecx + 0xC); /* 0x171B3D0D: mov eax, dword ptr [ecx + 0xc] */
    SET_LO8(ecx, MEM8(ecx + 0x10)); /* 0x171B3D10: mov cl, byte ptr [ecx + 0x10] */
    MEM32(edx + 0xC) = eax; /* 0x171B3D13: mov dword ptr [edx + 0xc], eax */
    MEM8(edx + 0x10) = (uint8_t)(LO8(ecx)); /* 0x171B3D16: mov byte ptr [edx + 0x10], cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171B3D19: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x3; /* 0x171B3D1B: lea eax, [edi + 3] */
    ecx = 4; /* 0x171B3D1E: mov ecx, 4 */
L_171B3D23:
    edi = (uint32_t)MEM8(eax + (-0x1)); /* 0x171B3D23: movzx edi, byte ptr [eax - 1] */
    edx = (uint32_t)MEM8(eax + (-0x2)); /* 0x171B3D27: movzx edx, byte ptr [eax - 2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x171B3D2B: add edx, edi */
    _flag_k = FK_ADD;
    edi = (uint32_t)MEM8(eax + 0x1); /* 0x171B3D2D: movzx edi, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x171B3D31: add edx, edi */
    _flag_k = FK_ADD;
    edi = (uint32_t)MEM8(eax); /* 0x171B3D33: movzx edi, byte ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x171B3D36: add edi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B3D38: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B3D3B: dec ecx */
    _flag_k = FK_DEC;
    esi = edi + edx; /* 0x171B3D3C: lea esi, [edi + edx] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B3D23; /* 0x171B3D3F: jne 0x171b3d23 */
L_171B3D41:
    /* cmp esi, 1 */ /* 0x171B3D41: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B3D4E; /* 0x171B3D44: jl 0x171b3d4e */
L_171B3D46:
    /* cmp esi, 0x100u */ /* 0x171B3D46: cmp esi, 0x100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B3D5D; /* 0x171B3D4C: jle 0x171b3d5d */
L_171B3D4E:
    ecx = MEM32(ebp + 0x8); /* 0x171B3D4E: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171B3D51: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171B3D53: push ecx */
    MEM32(eax + 0x14) = 8; /* 0x171B3D54: mov dword ptr [eax + 0x14], 8 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B3D5B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B3D5D:
    eax = MEM32(ebx); /* 0x171B3D5D: mov eax, dword ptr [ebx] */
    ecx = esi; /* 0x171B3D5F: mov ecx, esi */
    esi = MEM32(ebp + 0xC); /* 0x171B3D61: mov esi, dword ptr [ebp + 0xc] */
    edx = ecx; /* 0x171B3D64: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171B3D66: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171B3D66: shr ecx, 2 */
    edi = eax + 0x11; /* 0x171B3D69: lea edi, [eax + 0x11] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171B3D6C: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x171B3D6E: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171B3D70: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171B3D73: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = POP32_VAL(esp); /* 0x171B3D75: pop edi */
    MEM32(eax + 0x114) = 0; /* 0x171B3D76: mov dword ptr [eax + 0x114], 0 */
    esi = POP32_VAL(esp); /* 0x171B3D80: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B3D81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B3D82: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B3D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3D90u);

L_171B3D90:
    edi = edi; /* 0x171B3D90: mov edi, edi */
    PUSH32(esp, ebx); /* 0x171B3D92: push ebx */
    PUSH32(esp, 0x170256A0u); /* 0x171B3D93: push 0x170256a0 */
    ebx = esi + 0x58; /* 0x171B3D98: lea ebx, [esi + 0x58] */
    PUSH32(esp, esi); /* 0x171B3D9B: push esi */
    eax = 0x17025764u; /* 0x171B3D9C: mov eax, 0x17025764 */
    RECOMP_CALL(sub_171B3CE0); /* 0x171B3DA1: call 0x171b3ce0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x170256C0u); /* 0x171B3DA6: push 0x170256c0 */
    ebx = esi + 0x68; /* 0x171B3DAB: lea ebx, [esi + 0x68] */
    PUSH32(esp, esi); /* 0x171B3DAE: push esi */
    eax = 0x170256ACu; /* 0x171B3DAF: mov eax, 0x170256ac */
    RECOMP_CALL(sub_171B3CE0); /* 0x171B3DB4: call 0x171b3ce0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x170256A0u); /* 0x171B3DB9: push 0x170256a0 */
    ebx = esi + 0x5C; /* 0x171B3DBE: lea ebx, [esi + 0x5c] */
    PUSH32(esp, esi); /* 0x171B3DC1: push esi */
    eax = 0x1702568Cu; /* 0x171B3DC2: mov eax, 0x1702568c */
    RECOMP_CALL(sub_171B3CE0); /* 0x171B3DC7: call 0x171b3ce0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x170255E8u); /* 0x171B3DCC: push 0x170255e8 */
    ebx = esi + 0x6C; /* 0x171B3DD1: lea ebx, [esi + 0x6c] */
    PUSH32(esp, esi); /* 0x171B3DD4: push esi */
    eax = 0x170255D0u; /* 0x171B3DD5: mov eax, 0x170255d0 */
    RECOMP_CALL(sub_171B3CE0); /* 0x171B3DDA: call 0x171b3ce0 */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x171B3DDF: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B3DE0: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B3DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B3DF0u);

L_171B3DF0:
    edi = edi; /* 0x171B3DF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B3DF2: push ebp */
    ebp = esp; /* 0x171B3DF3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B3DF5: push ebx */
    PUSH32(esp, esi); /* 0x171B3DF6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B3DF7: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x14); /* 0x171B3DFA: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 0x64u */ /* 0x171B3DFD: cmp ecx, 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171B3E00: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B3E12; /* 0x171B3E01: je 0x171b3e12 */
L_171B3E03:
    eax = MEM32(esi); /* 0x171B3E03: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x171B3E05: mov dword ptr [eax + 0x14], 0x14 */
    PUSH32(esp, esi); /* 0x171B3E0C: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B3E0D: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B3E10: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B3E12:
    eax = MEM32(ebp + 0xC); /* 0x171B3E12: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B3E15: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 5 */ /* 0x171B3E17: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = 1; /* 0x171B3E1A: mov edi, 1 */
    MEM32(esi + 0x40) = eax; /* 0x171B3E1F: mov dword ptr [esi + 0x40], eax */
    MEM32(esi + 0xD0) = ebx; /* 0x171B3E22: mov dword ptr [esi + 0xd0], ebx */
    MEM32(esi + 0xDC) = ebx; /* 0x171B3E28: mov dword ptr [esi + 0xdc], ebx */
    MEM32(esi + 0xE0) = edi; /* 0x171B3E2E: mov dword ptr [esi + 0xe0], edi */
    MEM32(esi + 0xE4) = edi; /* 0x171B3E34: mov dword ptr [esi + 0xe4], edi */
    if (CMP_A(_flag_a, _flag_b)) goto L_171B40A8; /* 0x171B3E3A: ja 0x171b40a8 */
L_171B3E40:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x171B40BC)); goto _ljump; }
L_171B3E47:
    MEM32(esi + 0xD0) = edi; /* 0x171B3E47: mov dword ptr [esi + 0xd0], edi */
    MEM32(esi + 0x3C) = edi; /* 0x171B3E4D: mov dword ptr [esi + 0x3c], edi */
    esi = MEM32(esi + 0x44); /* 0x171B3E50: mov esi, dword ptr [esi + 0x44] */
    MEM32(esi) = edi; /* 0x171B3E53: mov dword ptr [esi], edi */
    MEM32(esi + 0x8) = edi; /* 0x171B3E55: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x171B3E58: mov dword ptr [esi + 0xc], edi */
    edi = POP32_VAL(esp); /* 0x171B3E5B: pop edi */
    MEM32(esi + 0x10) = ebx; /* 0x171B3E5C: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x14) = ebx; /* 0x171B3E5F: mov dword ptr [esi + 0x14], ebx */
    MEM32(esi + 0x18) = ebx; /* 0x171B3E62: mov dword ptr [esi + 0x18], ebx */
    esi = POP32_VAL(esp); /* 0x171B3E65: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B3E66: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B3E67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B3E68: ret 8 */
L_171B3E6B:
    MEM32(esi + 0xDC) = edi; /* 0x171B3E6B: mov dword ptr [esi + 0xdc], edi */
    MEM32(esi + 0x3C) = 3; /* 0x171B3E71: mov dword ptr [esi + 0x3c], 3 */
    esi = MEM32(esi + 0x44); /* 0x171B3E78: mov esi, dword ptr [esi + 0x44] */
    MEM32(esi + 0x8) = edi; /* 0x171B3E7B: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x171B3E7E: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = ebx; /* 0x171B3E81: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x14) = ebx; /* 0x171B3E84: mov dword ptr [esi + 0x14], ebx */
    MEM32(esi + 0x18) = ebx; /* 0x171B3E87: mov dword ptr [esi + 0x18], ebx */
    MEM32(esi) = 0x52u; /* 0x171B3E8A: mov dword ptr [esi], 0x52 */
    MEM32(esi + 0x5C) = edi; /* 0x171B3E90: mov dword ptr [esi + 0x5c], edi */
    MEM32(esi + 0x60) = edi; /* 0x171B3E93: mov dword ptr [esi + 0x60], edi */
    MEM32(esi + 0x64) = ebx; /* 0x171B3E96: mov dword ptr [esi + 0x64], ebx */
    MEM32(esi + 0x68) = ebx; /* 0x171B3E99: mov dword ptr [esi + 0x68], ebx */
    MEM32(esi + 0x6C) = ebx; /* 0x171B3E9C: mov dword ptr [esi + 0x6c], ebx */
    MEM32(esi + 0x54) = 0x47u; /* 0x171B3E9F: mov dword ptr [esi + 0x54], 0x47 */
    MEM32(esi + 0xB0) = edi; /* 0x171B3EA6: mov dword ptr [esi + 0xb0], edi */
    MEM32(esi + 0xB4) = edi; /* 0x171B3EAC: mov dword ptr [esi + 0xb4], edi */
    edi = POP32_VAL(esp); /* 0x171B3EB2: pop edi */
    MEM32(esi + 0xB8) = ebx; /* 0x171B3EB3: mov dword ptr [esi + 0xb8], ebx */
    MEM32(esi + 0xBC) = ebx; /* 0x171B3EB9: mov dword ptr [esi + 0xbc], ebx */
    MEM32(esi + 0xC0) = ebx; /* 0x171B3EBF: mov dword ptr [esi + 0xc0], ebx */
    MEM32(esi + 0xA8) = 0x42u; /* 0x171B3EC5: mov dword ptr [esi + 0xa8], 0x42 */
    esi = POP32_VAL(esp); /* 0x171B3ECF: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B3ED0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B3ED1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B3ED2: ret 8 */
L_171B3ED5:
    eax = 3; /* 0x171B3ED5: mov eax, 3 */
    MEM32(esi + 0xD0) = edi; /* 0x171B3EDA: mov dword ptr [esi + 0xd0], edi */
    MEM32(esi + 0x3C) = eax; /* 0x171B3EE0: mov dword ptr [esi + 0x3c], eax */
    esi = MEM32(esi + 0x44); /* 0x171B3EE3: mov esi, dword ptr [esi + 0x44] */
    MEM32(esi) = edi; /* 0x171B3EE6: mov dword ptr [esi], edi */
    MEM32(esi + 0x10) = ebx; /* 0x171B3EE8: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x14) = ebx; /* 0x171B3EEB: mov dword ptr [esi + 0x14], ebx */
    MEM32(esi + 0x18) = ebx; /* 0x171B3EEE: mov dword ptr [esi + 0x18], ebx */
    ecx = 2; /* 0x171B3EF1: mov ecx, 2 */
    MEM32(esi + 0x8) = ecx; /* 0x171B3EF6: mov dword ptr [esi + 8], ecx */
    MEM32(esi + 0xC) = ecx; /* 0x171B3EF9: mov dword ptr [esi + 0xc], ecx */
    MEM32(esi + 0x5C) = edi; /* 0x171B3EFC: mov dword ptr [esi + 0x5c], edi */
    MEM32(esi + 0x60) = edi; /* 0x171B3EFF: mov dword ptr [esi + 0x60], edi */
    MEM32(esi + 0x64) = edi; /* 0x171B3F02: mov dword ptr [esi + 0x64], edi */
    MEM32(esi + 0x68) = edi; /* 0x171B3F05: mov dword ptr [esi + 0x68], edi */
    MEM32(esi + 0x6C) = edi; /* 0x171B3F08: mov dword ptr [esi + 0x6c], edi */
    MEM32(esi + 0x54) = ecx; /* 0x171B3F0B: mov dword ptr [esi + 0x54], ecx */
    MEM32(esi + 0xB0) = edi; /* 0x171B3F0E: mov dword ptr [esi + 0xb0], edi */
    MEM32(esi + 0xB4) = edi; /* 0x171B3F14: mov dword ptr [esi + 0xb4], edi */
    MEM32(esi + 0xB8) = edi; /* 0x171B3F1A: mov dword ptr [esi + 0xb8], edi */
    MEM32(esi + 0xBC) = edi; /* 0x171B3F20: mov dword ptr [esi + 0xbc], edi */
    MEM32(esi + 0xC0) = edi; /* 0x171B3F26: mov dword ptr [esi + 0xc0], edi */
    edi = POP32_VAL(esp); /* 0x171B3F2C: pop edi */
    MEM32(esi + 0xA8) = eax; /* 0x171B3F2D: mov dword ptr [esi + 0xa8], eax */
    esi = POP32_VAL(esp); /* 0x171B3F33: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B3F34: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B3F35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B3F36: ret 8 */
L_171B3F39:
    MEM32(esi + 0xDC) = edi; /* 0x171B3F39: mov dword ptr [esi + 0xdc], edi */
    MEM32(esi + 0x3C) = 4; /* 0x171B3F3F: mov dword ptr [esi + 0x3c], 4 */
    esi = MEM32(esi + 0x44); /* 0x171B3F46: mov esi, dword ptr [esi + 0x44] */
    MEM32(esi + 0x8) = edi; /* 0x171B3F49: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x171B3F4C: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = ebx; /* 0x171B3F4F: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x14) = ebx; /* 0x171B3F52: mov dword ptr [esi + 0x14], ebx */
    MEM32(esi + 0x18) = ebx; /* 0x171B3F55: mov dword ptr [esi + 0x18], ebx */
    MEM32(esi) = 0x43u; /* 0x171B3F58: mov dword ptr [esi], 0x43 */
    MEM32(esi + 0x5C) = edi; /* 0x171B3F5E: mov dword ptr [esi + 0x5c], edi */
    MEM32(esi + 0x60) = edi; /* 0x171B3F61: mov dword ptr [esi + 0x60], edi */
    MEM32(esi + 0x64) = ebx; /* 0x171B3F64: mov dword ptr [esi + 0x64], ebx */
    MEM32(esi + 0x68) = ebx; /* 0x171B3F67: mov dword ptr [esi + 0x68], ebx */
    MEM32(esi + 0x6C) = ebx; /* 0x171B3F6A: mov dword ptr [esi + 0x6c], ebx */
    MEM32(esi + 0x54) = 0x4Du; /* 0x171B3F6D: mov dword ptr [esi + 0x54], 0x4d */
    MEM32(esi + 0xB0) = edi; /* 0x171B3F74: mov dword ptr [esi + 0xb0], edi */
    MEM32(esi + 0xB4) = edi; /* 0x171B3F7A: mov dword ptr [esi + 0xb4], edi */
    MEM32(esi + 0xB8) = ebx; /* 0x171B3F80: mov dword ptr [esi + 0xb8], ebx */
    MEM32(esi + 0xBC) = ebx; /* 0x171B3F86: mov dword ptr [esi + 0xbc], ebx */
    MEM32(esi + 0xC0) = ebx; /* 0x171B3F8C: mov dword ptr [esi + 0xc0], ebx */
    MEM32(esi + 0xA8) = 0x59u; /* 0x171B3F92: mov dword ptr [esi + 0xa8], 0x59 */
    MEM32(esi + 0x104) = edi; /* 0x171B3F9C: mov dword ptr [esi + 0x104], edi */
    MEM32(esi + 0x108) = edi; /* 0x171B3FA2: mov dword ptr [esi + 0x108], edi */
    edi = POP32_VAL(esp); /* 0x171B3FA8: pop edi */
    MEM32(esi + 0x10C) = ebx; /* 0x171B3FA9: mov dword ptr [esi + 0x10c], ebx */
    MEM32(esi + 0x110) = ebx; /* 0x171B3FAF: mov dword ptr [esi + 0x110], ebx */
    MEM32(esi + 0x114) = ebx; /* 0x171B3FB5: mov dword ptr [esi + 0x114], ebx */
    MEM32(esi + 0xFC) = 0x4Bu; /* 0x171B3FBB: mov dword ptr [esi + 0xfc], 0x4b */
    esi = POP32_VAL(esp); /* 0x171B3FC5: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B3FC6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B3FC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B3FC8: ret 8 */
L_171B3FCB:
    eax = MEM32(esi + 0x44); /* 0x171B3FCB: mov eax, dword ptr [esi + 0x44] */
    MEM32(eax) = edi; /* 0x171B3FCE: mov dword ptr [eax], edi */
    MEM32(eax + 0x10) = ebx; /* 0x171B3FD0: mov dword ptr [eax + 0x10], ebx */
    MEM32(eax + 0x14) = ebx; /* 0x171B3FD3: mov dword ptr [eax + 0x14], ebx */
    MEM32(eax + 0x18) = ebx; /* 0x171B3FD6: mov dword ptr [eax + 0x18], ebx */
    ecx = 2; /* 0x171B3FD9: mov ecx, 2 */
    MEM32(eax + 0x8) = ecx; /* 0x171B3FDE: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x171B3FE1: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x5C) = edi; /* 0x171B3FE4: mov dword ptr [eax + 0x5c], edi */
    MEM32(eax + 0x60) = edi; /* 0x171B3FE7: mov dword ptr [eax + 0x60], edi */
    MEM32(eax + 0x64) = edi; /* 0x171B3FEA: mov dword ptr [eax + 0x64], edi */
    MEM32(eax + 0x68) = edi; /* 0x171B3FED: mov dword ptr [eax + 0x68], edi */
    MEM32(eax + 0x6C) = edi; /* 0x171B3FF0: mov dword ptr [eax + 0x6c], edi */
    MEM32(eax + 0x54) = ecx; /* 0x171B3FF3: mov dword ptr [eax + 0x54], ecx */
    MEM32(eax + 0xB0) = edi; /* 0x171B3FF6: mov dword ptr [eax + 0xb0], edi */
    MEM32(eax + 0xB4) = edi; /* 0x171B3FFC: mov dword ptr [eax + 0xb4], edi */
    MEM32(eax + 0xB8) = edi; /* 0x171B4002: mov dword ptr [eax + 0xb8], edi */
    MEM32(eax + 0xBC) = edi; /* 0x171B4008: mov dword ptr [eax + 0xbc], edi */
    MEM32(eax + 0xC0) = edi; /* 0x171B400E: mov dword ptr [eax + 0xc0], edi */
    MEM32(eax + 0xA8) = 3; /* 0x171B4014: mov dword ptr [eax + 0xa8], 3 */
    MEM32(esi + 0xDC) = edi; /* 0x171B401E: mov dword ptr [esi + 0xdc], edi */
    edx = 4; /* 0x171B4024: mov edx, 4 */
    edi = POP32_VAL(esp); /* 0x171B4029: pop edi */
    MEM32(esi + 0x3C) = edx; /* 0x171B402A: mov dword ptr [esi + 0x3c], edx */
    esi = POP32_VAL(esp); /* 0x171B402D: pop esi */
    MEM32(eax + 0x10C) = ebx; /* 0x171B402E: mov dword ptr [eax + 0x10c], ebx */
    MEM32(eax + 0x110) = ebx; /* 0x171B4034: mov dword ptr [eax + 0x110], ebx */
    MEM32(eax + 0x114) = ebx; /* 0x171B403A: mov dword ptr [eax + 0x114], ebx */
    MEM32(eax + 0xFC) = edx; /* 0x171B4040: mov dword ptr [eax + 0xfc], edx */
    MEM32(eax + 0x104) = ecx; /* 0x171B4046: mov dword ptr [eax + 0x104], ecx */
    MEM32(eax + 0x108) = ecx; /* 0x171B404C: mov dword ptr [eax + 0x108], ecx */
    ebx = POP32_VAL(esp); /* 0x171B4052: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B4053: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B4054: ret 8 */
L_171B4057:
    ecx = MEM32(esi + 0x24); /* 0x171B4057: mov ecx, dword ptr [esi + 0x24] */
    /* cmp ecx, edi */ /* 0x171B405A: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x3C) = ecx; /* 0x171B405C: mov dword ptr [esi + 0x3c], ecx */
    if (CMP_L(_flag_a, _flag_b)) goto L_171B4066; /* 0x171B405F: jl 0x171b4066 */
L_171B4061:
    /* cmp ecx, 0xAu */ /* 0x171B4061: cmp ecx, 0xa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B407C; /* 0x171B4064: jle 0x171b407c */
L_171B4066:
    eax = MEM32(esi); /* 0x171B4066: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Au; /* 0x171B4068: mov dword ptr [eax + 0x14], 0x1a */
    MEM32(eax + 0x18) = ecx; /* 0x171B406F: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, esi); /* 0x171B4072: push esi */
    MEM32(eax + 0x1C) = 0xAu; /* 0x171B4073: mov dword ptr [eax + 0x1c], 0xa */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B407A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B407C:
    ecx = MEM32(esi + 0x3C); /* 0x171B407C: mov ecx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B407F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, ebx */ /* 0x171B4081: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B40B4; /* 0x171B4083: jle 0x171b40b4 */
L_171B4085:
    esi = MEM32(esi + 0x44); /* 0x171B4085: mov esi, dword ptr [esi + 0x44] */
L_171B4088:
    MEM32(esi) = eax; /* 0x171B4088: mov dword ptr [esi], eax */
    MEM32(esi + 0x8) = edi; /* 0x171B408A: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x171B408D: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = ebx; /* 0x171B4090: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x14) = ebx; /* 0x171B4093: mov dword ptr [esi + 0x14], ebx */
    MEM32(esi + 0x18) = ebx; /* 0x171B4096: mov dword ptr [esi + 0x18], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B4099: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x54u; /* 0x171B409A: add esi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x171B409D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B4088; /* 0x171B409F: jl 0x171b4088 */
L_171B40A1:
    edi = POP32_VAL(esp); /* 0x171B40A1: pop edi */
    esi = POP32_VAL(esp); /* 0x171B40A2: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B40A3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B40A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B40A5: ret 8 */
L_171B40A8:
    eax = MEM32(esi); /* 0x171B40A8: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B40AA: push esi */
    MEM32(eax + 0x14) = 0xAu; /* 0x171B40AB: mov dword ptr [eax + 0x14], 0xa */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B40B2: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B40B4:
    edi = POP32_VAL(esp); /* 0x171B40B4: pop edi */
    esi = POP32_VAL(esp); /* 0x171B40B5: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B40B6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B40B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B40B8: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x171B3E47u: goto L_171B3E47;
      case 0x171B3E6Bu: goto L_171B3E6B;
      case 0x171B3ED5u: goto L_171B3ED5;
      case 0x171B3F39u: goto L_171B3F39;
      case 0x171B3FCBu: goto L_171B3FCB;
      case 0x171B4057u: goto L_171B4057;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_171B40E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B40E0u);

L_171B40E0:
    edi = edi; /* 0x171B40E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B40E2: push ebp */
    ebp = esp; /* 0x171B40E3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B40E5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B40E6: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x28); /* 0x171B40E9: mov eax, dword ptr [esi + 0x28] */
    /* cmp eax, 8 */ /* 0x171B40EC: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B423C; /* 0x171B40EF: ja 0x171b423c */
L_171B40F5:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x171B4250)); goto _ljump; }
L_171B40FC:
    ecx = MEM32(esi + 0x14); /* 0x171B40FC: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 0x64u */ /* 0x171B40FF: cmp ecx, 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B4113; /* 0x171B4102: je 0x171b4113 */
L_171B4104:
    eax = MEM32(esi); /* 0x171B4104: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x171B4106: mov dword ptr [eax + 0x14], 0x14 */
    PUSH32(esp, esi); /* 0x171B410D: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B410E: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4111: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B4113:
    ecx = 1; /* 0x171B4113: mov ecx, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B4118: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x40) = ecx; /* 0x171B411A: mov dword ptr [esi + 0x40], ecx */
    MEM32(esi + 0xDC) = edx; /* 0x171B411D: mov dword ptr [esi + 0xdc], edx */
    MEM32(esi + 0xE0) = ecx; /* 0x171B4123: mov dword ptr [esi + 0xe0], ecx */
    MEM32(esi + 0xE4) = ecx; /* 0x171B4129: mov dword ptr [esi + 0xe4], ecx */
    MEM32(esi + 0xD0) = ecx; /* 0x171B412F: mov dword ptr [esi + 0xd0], ecx */
    MEM32(esi + 0x3C) = ecx; /* 0x171B4135: mov dword ptr [esi + 0x3c], ecx */
    esi = MEM32(esi + 0x44); /* 0x171B4138: mov esi, dword ptr [esi + 0x44] */
    MEM32(esi) = ecx; /* 0x171B413B: mov dword ptr [esi], ecx */
    MEM32(esi + 0x8) = ecx; /* 0x171B413D: mov dword ptr [esi + 8], ecx */
    MEM32(esi + 0xC) = ecx; /* 0x171B4140: mov dword ptr [esi + 0xc], ecx */
    MEM32(esi + 0x10) = edx; /* 0x171B4143: mov dword ptr [esi + 0x10], edx */
    MEM32(esi + 0x14) = edx; /* 0x171B4146: mov dword ptr [esi + 0x14], edx */
    MEM32(esi + 0x18) = edx; /* 0x171B4149: mov dword ptr [esi + 0x18], edx */
    esi = POP32_VAL(esp); /* 0x171B414C: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B414D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B414E: ret 4 */
L_171B4151:
    PUSH32(esp, 3); /* 0x171B4151: push 3 */
    PUSH32(esp, esi); /* 0x171B4153: push esi */
    RECOMP_CALL(sub_171B3DF0); /* 0x171B4154: call 0x171b3df0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171B4159: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B415A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B415B: ret 4 */
L_171B415E:
    PUSH32(esp, 4); /* 0x171B415E: push 4 */
    PUSH32(esp, esi); /* 0x171B4160: push esi */
    RECOMP_CALL(sub_171B3DF0); /* 0x171B4161: call 0x171b3df0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171B4166: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B4167: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B4168: ret 4 */
L_171B416B:
    ecx = MEM32(esi + 0x14); /* 0x171B416B: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 0x64u */ /* 0x171B416E: cmp ecx, 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B4182; /* 0x171B4171: je 0x171b4182 */
L_171B4173:
    eax = MEM32(esi); /* 0x171B4173: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x171B4175: mov dword ptr [eax + 0x14], 0x14 */
    PUSH32(esp, esi); /* 0x171B417C: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B417D: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4180: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B4182:
    eax = MEM32(esi + 0x44); /* 0x171B4182: mov eax, dword ptr [esi + 0x44] */
    ecx = 1; /* 0x171B4185: mov ecx, 1 */
    MEM32(eax) = ecx; /* 0x171B418A: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B418C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x10) = edx; /* 0x171B418E: mov dword ptr [eax + 0x10], edx */
    MEM32(eax + 0x14) = edx; /* 0x171B4191: mov dword ptr [eax + 0x14], edx */
    MEM32(eax + 0x18) = edx; /* 0x171B4194: mov dword ptr [eax + 0x18], edx */
    MEM32(esi + 0x40) = 5; /* 0x171B4197: mov dword ptr [esi + 0x40], 5 */
    MEM32(esi + 0xD0) = edx; /* 0x171B419E: mov dword ptr [esi + 0xd0], edx */
    MEM32(esi + 0xE0) = ecx; /* 0x171B41A4: mov dword ptr [esi + 0xe0], ecx */
    MEM32(esi + 0xE4) = ecx; /* 0x171B41AA: mov dword ptr [esi + 0xe4], ecx */
    MEM32(esi + 0xDC) = ecx; /* 0x171B41B0: mov dword ptr [esi + 0xdc], ecx */
    MEM32(esi + 0x3C) = 4; /* 0x171B41B6: mov dword ptr [esi + 0x3c], 4 */
    esi = 2; /* 0x171B41BD: mov esi, 2 */
    MEM32(eax + 0x8) = esi; /* 0x171B41C2: mov dword ptr [eax + 8], esi */
    MEM32(eax + 0xC) = esi; /* 0x171B41C5: mov dword ptr [eax + 0xc], esi */
    MEM32(eax + 0x54) = esi; /* 0x171B41C8: mov dword ptr [eax + 0x54], esi */
    MEM32(eax + 0x5C) = ecx; /* 0x171B41CB: mov dword ptr [eax + 0x5c], ecx */
    MEM32(eax + 0x60) = ecx; /* 0x171B41CE: mov dword ptr [eax + 0x60], ecx */
    MEM32(eax + 0x64) = ecx; /* 0x171B41D1: mov dword ptr [eax + 0x64], ecx */
    MEM32(eax + 0x68) = ecx; /* 0x171B41D4: mov dword ptr [eax + 0x68], ecx */
    MEM32(eax + 0x6C) = ecx; /* 0x171B41D7: mov dword ptr [eax + 0x6c], ecx */
    MEM32(eax + 0xA8) = 3; /* 0x171B41DA: mov dword ptr [eax + 0xa8], 3 */
    MEM32(eax + 0xB0) = ecx; /* 0x171B41E4: mov dword ptr [eax + 0xb0], ecx */
    MEM32(eax + 0xB4) = ecx; /* 0x171B41EA: mov dword ptr [eax + 0xb4], ecx */
    MEM32(eax + 0xB8) = ecx; /* 0x171B41F0: mov dword ptr [eax + 0xb8], ecx */
    MEM32(eax + 0xBC) = ecx; /* 0x171B41F6: mov dword ptr [eax + 0xbc], ecx */
    MEM32(eax + 0xC0) = ecx; /* 0x171B41FC: mov dword ptr [eax + 0xc0], ecx */
    MEM32(eax + 0x104) = esi; /* 0x171B4202: mov dword ptr [eax + 0x104], esi */
    MEM32(eax + 0x108) = esi; /* 0x171B4208: mov dword ptr [eax + 0x108], esi */
    MEM32(eax + 0xFC) = 4; /* 0x171B420E: mov dword ptr [eax + 0xfc], 4 */
    MEM32(eax + 0x10C) = edx; /* 0x171B4218: mov dword ptr [eax + 0x10c], edx */
    MEM32(eax + 0x110) = edx; /* 0x171B421E: mov dword ptr [eax + 0x110], edx */
    MEM32(eax + 0x114) = edx; /* 0x171B4224: mov dword ptr [eax + 0x114], edx */
    esi = POP32_VAL(esp); /* 0x171B422A: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B422B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B422C: ret 4 */
L_171B422F:
    PUSH32(esp, 0); /* 0x171B422F: push 0 */
    PUSH32(esp, esi); /* 0x171B4231: push esi */
    RECOMP_CALL(sub_171B3DF0); /* 0x171B4232: call 0x171b3df0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171B4237: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B4238: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B4239: ret 4 */
L_171B423C:
    eax = MEM32(esi); /* 0x171B423C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B423E: push esi */
    MEM32(eax + 0x14) = 9; /* 0x171B423F: mov dword ptr [eax + 0x14], 9 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4246: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171B4248: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B4249: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B424A: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x171B40FCu: goto L_171B40FC;
      case 0x171B4151u: goto L_171B4151;
      case 0x171B415Eu: goto L_171B415E;
      case 0x171B416Bu: goto L_171B416B;
      case 0x171B422Fu: goto L_171B422F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_171B4280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B4280u);

L_171B4280:
    edi = edi; /* 0x171B4280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B4282: push ebp */
    ebp = esp; /* 0x171B4283: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B4285: push ebx */
    PUSH32(esp, esi); /* 0x171B4286: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B4287: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x14); /* 0x171B428A: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 0x64u */ /* 0x171B428D: cmp ecx, 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B42A1; /* 0x171B4290: je 0x171b42a1 */
L_171B4292:
    eax = MEM32(esi); /* 0x171B4292: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x171B4294: mov dword ptr [eax + 0x14], 0x14 */
    PUSH32(esp, esi); /* 0x171B429B: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B429C: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B429F: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B42A1:
    eax = MEM32(esi + 0x44); /* 0x171B42A1: mov eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B42A4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171B42A6: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B42B9; /* 0x171B42A8: jne 0x171b42b9 */
L_171B42AA:
    eax = MEM32(esi + 0x4); /* 0x171B42AA: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 0x348u); /* 0x171B42AD: push 0x348 */
    PUSH32(esp, ebx); /* 0x171B42B2: push ebx */
    PUSH32(esp, esi); /* 0x171B42B3: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B42B4: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x44) = eax; /* 0x171B42B6: mov dword ptr [esi + 0x44], eax */
L_171B42B9:
    PUSH32(esp, 1); /* 0x171B42B9: push 1 */
    PUSH32(esp, 0x32u); /* 0x171B42BB: push 0x32 */
    PUSH32(esp, 0x170254D0u); /* 0x171B42BD: push 0x170254d0 */
    PUSH32(esp, ebx); /* 0x171B42C2: push ebx */
    PUSH32(esp, esi); /* 0x171B42C3: push esi */
    MEM32(esi + 0x38) = 8; /* 0x171B42C4: mov dword ptr [esi + 0x38], 8 */
    RECOMP_CALL(sub_171B3B20); /* 0x171B42CB: call 0x171b3b20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x171B42D0: push 1 */
    PUSH32(esp, 0x32u); /* 0x171B42D2: push 0x32 */
    PUSH32(esp, 0x170253D0u); /* 0x171B42D4: push 0x170253d0 */
    PUSH32(esp, 1); /* 0x171B42D9: push 1 */
    PUSH32(esp, esi); /* 0x171B42DB: push esi */
    RECOMP_CALL(sub_171B3B20); /* 0x171B42DC: call 0x171b3b20 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_171B3D90); /* 0x171B42E1: call 0x171b3d90 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x88; /* 0x171B42E6: lea eax, [esi + 0x88] */
    ecx = 0x10u; /* 0x171B42EC: mov ecx, 0x10 */
    SET_LO8(edx, 5); /* 0x171B42F1: mov dl, 5 */
L_171B42F3:
    MEM8(eax + (-0x10)) = (uint8_t)(LO8(ebx)); /* 0x171B42F3: mov byte ptr [eax - 0x10], bl */
    MEM8(eax) = (uint8_t)(1); /* 0x171B42F6: mov byte ptr [eax], 1 */
    MEM8(eax + 0x10) = (uint8_t)(LO8(edx)); /* 0x171B42F9: mov byte ptr [eax + 0x10], dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B42FC: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B42FD: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B42F3; /* 0x171B42FE: jne 0x171b42f3 */
L_171B4300:
    /* cmp MEM32(esi + 0x38), 8 */ /* 0x171B4300: cmp dword ptr [esi + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0xAC) = ebx; /* 0x171B4304: mov dword ptr [esi + 0xac], ebx */
    MEM32(esi + 0xA8) = ebx; /* 0x171B430A: mov dword ptr [esi + 0xa8], ebx */
    MEM32(esi + 0xB0) = ebx; /* 0x171B4310: mov dword ptr [esi + 0xb0], ebx */
    MEM32(esi + 0xB4) = ebx; /* 0x171B4316: mov dword ptr [esi + 0xb4], ebx */
    MEM32(esi + 0xB8) = ebx; /* 0x171B431C: mov dword ptr [esi + 0xb8], ebx */
    eax = 1; /* 0x171B4322: mov eax, 1 */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B432F; /* 0x171B4327: jle 0x171b432f */
L_171B4329:
    MEM32(esi + 0xB8) = eax; /* 0x171B4329: mov dword ptr [esi + 0xb8], eax */
L_171B432F:
    PUSH32(esp, esi); /* 0x171B432F: push esi */
    MEM32(esi + 0xBC) = ebx; /* 0x171B4330: mov dword ptr [esi + 0xbc], ebx */
    MEM32(esi + 0xC0) = ebx; /* 0x171B4336: mov dword ptr [esi + 0xc0], ebx */
    MEM32(esi + 0xC4) = ebx; /* 0x171B433C: mov dword ptr [esi + 0xc4], ebx */
    MEM32(esi + 0xC8) = ebx; /* 0x171B4342: mov dword ptr [esi + 0xc8], ebx */
    MEM32(esi + 0xCC) = ebx; /* 0x171B4348: mov dword ptr [esi + 0xcc], ebx */
    MEM8(esi + 0xD4) = (uint8_t)(1); /* 0x171B434E: mov byte ptr [esi + 0xd4], 1 */
    MEM8(esi + 0xD5) = (uint8_t)(1); /* 0x171B4355: mov byte ptr [esi + 0xd5], 1 */
    MEM8(esi + 0xD6) = (uint8_t)(LO8(ebx)); /* 0x171B435C: mov byte ptr [esi + 0xd6], bl */
    MEM16(esi + 0xD8) = (uint16_t)(LO16(eax)); /* 0x171B4362: mov word ptr [esi + 0xd8], ax */
    MEM16(esi + 0xDA) = (uint16_t)(LO16(eax)); /* 0x171B4369: mov word ptr [esi + 0xda], ax */
    RECOMP_CALL(sub_171B40E0); /* 0x171B4370: call 0x171b40e0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171B4375: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B4376: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B4377: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B4378: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B4380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B4380u);

L_171B4380:
    eax = MEM32(edx + 0x4C); /* 0x171B4380: mov eax, dword ptr [edx + 0x4c] */
    /* test eax, eax */ /* 0x171B4383: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B43FD; /* 0x171B4385: jne 0x171b43fd */
L_171B4387:
    eax = MEM32(edx + 0x130); /* 0x171B4387: mov eax, dword ptr [edx + 0x130] */
    /* test eax, eax */ /* 0x171B438D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B43FD; /* 0x171B438F: jne 0x171b43fd */
L_171B4391:
    ecx = MEM32(edx + 0x28); /* 0x171B4391: mov ecx, dword ptr [edx + 0x28] */
    eax = 3; /* 0x171B4394: mov eax, 3 */
    /* cmp ecx, eax */ /* 0x171B4399: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B43FD; /* 0x171B439B: jne 0x171b43fd */
L_171B439D:
    /* cmp MEM32(edx + 0x24), eax */ /* 0x171B439D: cmp dword ptr [edx + 0x24], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B43FD; /* 0x171B43A0: jne 0x171b43fd */
L_171B43A2:
    /* cmp MEM32(edx + 0x2C), 2 */ /* 0x171B43A2: cmp dword ptr [edx + 0x2c], 2 */
    _flag_a = (uint32_t)(MEM32(edx + 0x2C)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B43FD; /* 0x171B43A6: jne 0x171b43fd */
L_171B43A8:
    /* cmp MEM32(edx + 0x78), eax */ /* 0x171B43A8: cmp dword ptr [edx + 0x78], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x78)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B43FD; /* 0x171B43AB: jne 0x171b43fd */
L_171B43AD:
    ecx = MEM32(edx + 0xDC); /* 0x171B43AD: mov ecx, dword ptr [edx + 0xdc] */
    /* cmp MEM32(ecx + 0x8), 2 */ /* 0x171B43B3: cmp dword ptr [ecx + 8], 2 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171B43B7: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B43F9; /* 0x171B43B8: jne 0x171b43f9 */
L_171B43BA:
    edi = MEM32(ecx + 0x5C); /* 0x171B43BA: mov edi, dword ptr [ecx + 0x5c] */
    eax = 1; /* 0x171B43BD: mov eax, 1 */
    /* cmp edi, eax */ /* 0x171B43C2: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B43F9; /* 0x171B43C4: jne 0x171b43f9 */
L_171B43C6:
    /* cmp MEM32(ecx + 0xB0), eax */ /* 0x171B43C6: cmp dword ptr [ecx + 0xb0], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xB0)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B43F9; /* 0x171B43CC: jne 0x171b43f9 */
L_171B43CE:
    /* cmp MEM32(ecx + 0xC), 2 */ /* 0x171B43CE: cmp dword ptr [ecx + 0xc], 2 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B43F9; /* 0x171B43D2: jg 0x171b43f9 */
L_171B43D4:
    /* cmp MEM32(ecx + 0x60), eax */ /* 0x171B43D4: cmp dword ptr [ecx + 0x60], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x60)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B43F9; /* 0x171B43D7: jne 0x171b43f9 */
L_171B43D9:
    /* cmp MEM32(ecx + 0xB4), eax */ /* 0x171B43D9: cmp dword ptr [ecx + 0xb4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xB4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B43F9; /* 0x171B43DF: jne 0x171b43f9 */
L_171B43E1:
    edx = MEM32(edx + 0x140); /* 0x171B43E1: mov edx, dword ptr [edx + 0x140] */
    /* cmp MEM32(ecx + 0x24), edx */ /* 0x171B43E7: cmp dword ptr [ecx + 0x24], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x24)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B43F9; /* 0x171B43EA: jne 0x171b43f9 */
L_171B43EC:
    /* cmp MEM32(ecx + 0x78), edx */ /* 0x171B43EC: cmp dword ptr [ecx + 0x78], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x78)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B43F9; /* 0x171B43EF: jne 0x171b43f9 */
L_171B43F1:
    /* cmp MEM32(ecx + 0xCC), edx */ /* 0x171B43F1: cmp dword ptr [ecx + 0xcc], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0xCC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B43FB; /* 0x171B43F7: je 0x171b43fb */
L_171B43F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B43F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B43FB:
    edi = POP32_VAL(esp); /* 0x171B43FB: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B43FC: ret  */
L_171B43FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B43FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B43FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B4410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B4410u);

L_171B4410:
    edi = edi; /* 0x171B4410: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B4412: push ebp */
    ebp = esp; /* 0x171B4413: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B4415: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B4416: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x14); /* 0x171B4419: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 0xCAu */ /* 0x171B441C: cmp ecx, 0xca */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B4433; /* 0x171B4422: je 0x171b4433 */
L_171B4424:
    eax = MEM32(esi); /* 0x171B4424: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x171B4426: mov dword ptr [eax + 0x14], 0x14 */
    PUSH32(esp, esi); /* 0x171B442D: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B442E: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4431: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B4433:
    eax = MEM32(esi + 0x30); /* 0x171B4433: mov eax, dword ptr [esi + 0x30] */
    ecx = MEM32(esi + 0x34); /* 0x171B4436: mov ecx, dword ptr [esi + 0x34] */
    edx = eax * 8; /* 0x171B4439: lea edx, [eax*8] */
    /* cmp edx, ecx */ /* 0x171B4440: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B4469; /* 0x171B4442: ja 0x171b4469 */
L_171B4444:
    eax = MEM32(esi + 0x1C); /* 0x171B4444: mov eax, dword ptr [esi + 0x1c] */
    PUSH32(esp, 8); /* 0x171B4447: push 8 */
    PUSH32(esp, eax); /* 0x171B4449: push eax */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B444A: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x20); /* 0x171B444F: mov ecx, dword ptr [esi + 0x20] */
    PUSH32(esp, 8); /* 0x171B4452: push 8 */
    PUSH32(esp, ecx); /* 0x171B4454: push ecx */
    MEM32(esi + 0x70) = eax; /* 0x171B4455: mov dword ptr [esi + 0x70], eax */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B4458: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x140) = 1; /* 0x171B445D: mov dword ptr [esi + 0x140], 1 */
    goto L_171B44D8; /* 0x171B4467: jmp 0x171b44d8 */
L_171B4469:
    edx = eax * 4; /* 0x171B4469: lea edx, [eax*4] */
    /* cmp edx, ecx */ /* 0x171B4470: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B4499; /* 0x171B4472: ja 0x171b4499 */
L_171B4474:
    eax = MEM32(esi + 0x1C); /* 0x171B4474: mov eax, dword ptr [esi + 0x1c] */
    PUSH32(esp, 4); /* 0x171B4477: push 4 */
    PUSH32(esp, eax); /* 0x171B4479: push eax */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B447A: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x20); /* 0x171B447F: mov ecx, dword ptr [esi + 0x20] */
    PUSH32(esp, 4); /* 0x171B4482: push 4 */
    PUSH32(esp, ecx); /* 0x171B4484: push ecx */
    MEM32(esi + 0x70) = eax; /* 0x171B4485: mov dword ptr [esi + 0x70], eax */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B4488: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x140) = 2; /* 0x171B448D: mov dword ptr [esi + 0x140], 2 */
    goto L_171B44D8; /* 0x171B4497: jmp 0x171b44d8 */
L_171B4499:
    edx = eax + eax; /* 0x171B4499: lea edx, [eax + eax] */
    /* cmp edx, ecx */ /* 0x171B449C: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B44C5; /* 0x171B449E: ja 0x171b44c5 */
L_171B44A0:
    eax = MEM32(esi + 0x1C); /* 0x171B44A0: mov eax, dword ptr [esi + 0x1c] */
    PUSH32(esp, 2); /* 0x171B44A3: push 2 */
    PUSH32(esp, eax); /* 0x171B44A5: push eax */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B44A6: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x20); /* 0x171B44AB: mov ecx, dword ptr [esi + 0x20] */
    PUSH32(esp, 2); /* 0x171B44AE: push 2 */
    PUSH32(esp, ecx); /* 0x171B44B0: push ecx */
    MEM32(esi + 0x70) = eax; /* 0x171B44B1: mov dword ptr [esi + 0x70], eax */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B44B4: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x140) = 4; /* 0x171B44B9: mov dword ptr [esi + 0x140], 4 */
    goto L_171B44D8; /* 0x171B44C3: jmp 0x171b44d8 */
L_171B44C5:
    edx = MEM32(esi + 0x1C); /* 0x171B44C5: mov edx, dword ptr [esi + 0x1c] */
    eax = MEM32(esi + 0x20); /* 0x171B44C8: mov eax, dword ptr [esi + 0x20] */
    MEM32(esi + 0x70) = edx; /* 0x171B44CB: mov dword ptr [esi + 0x70], edx */
    MEM32(esi + 0x140) = 8; /* 0x171B44CE: mov dword ptr [esi + 0x140], 8 */
L_171B44D8:
    ecx = MEM32(esi + 0xDC); /* 0x171B44D8: mov ecx, dword ptr [esi + 0xdc] */
    MEM32(esi + 0x74) = eax; /* 0x171B44DE: mov dword ptr [esi + 0x74], eax */
    eax = MEM32(esi + 0x24); /* 0x171B44E1: mov eax, dword ptr [esi + 0x24] */
    /* test eax, eax */ /* 0x171B44E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171B44E6: push ebx */
    PUSH32(esp, edi); /* 0x171B44E7: push edi */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B4540; /* 0x171B44E8: jle 0x171b4540 */
L_171B44EA:
    edx = eax; /* 0x171B44EA: mov edx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x171B44EC: add ecx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edx; /* 0x171B44EF: mov dword ptr [ebp + 8], edx */
L_171B44F2:
    eax = MEM32(esi + 0x140); /* 0x171B44F2: mov eax, dword ptr [esi + 0x140] */
    /* cmp eax, 8 */ /* 0x171B44F8: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B4531; /* 0x171B44FB: jge 0x171b4531 */
L_171B44FD:
    edx = MEM32(esi + 0x138); /* 0x171B44FD: mov edx, dword ptr [esi + 0x138] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x171B4503: imul edx, eax */
L_171B4506:
    edi = MEM32(ecx + (-0x4)); /* 0x171B4506: mov edi, dword ptr [ecx - 4] */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax); /* 0x171B4509: imul edi, eax */
    if (1u) _cf = (((edi) >> 31) & 1u); /* 0x171B450C: shl edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 1u; /* 0x171B450C: shl edi, 1 */
    /* cmp edi, edx */ /* 0x171B450E: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B4531; /* 0x171B4510: jg 0x171b4531 */
L_171B4512:
    ebx = MEM32(ecx); /* 0x171B4512: mov ebx, dword ptr [ecx] */
    edi = MEM32(esi + 0x13C); /* 0x171B4514: mov edi, dword ptr [esi + 0x13c] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x171B451A: imul ebx, eax */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esi + 0x140)); /* 0x171B451D: imul edi, dword ptr [esi + 0x140] */
    if (1u) _cf = (((ebx) >> 31) & 1u); /* 0x171B4524: shl ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 1u; /* 0x171B4524: shl ebx, 1 */
    /* cmp ebx, edi */ /* 0x171B4526: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B4531; /* 0x171B4528: jg 0x171b4531 */
L_171B452A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x171B452A: add eax, eax */
    _flag_k = FK_ADD;
    /* cmp eax, 8 */ /* 0x171B452C: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B4506; /* 0x171B452F: jl 0x171b4506 */
L_171B4531:
    MEM32(ecx + 0x18) = eax; /* 0x171B4531: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ebp + 0x8); /* 0x171B4534: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x54u; /* 0x171B4537: add ecx, 0x54 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B453A: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = eax; /* 0x171B453B: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B44F2; /* 0x171B453E: jne 0x171b44f2 */
L_171B4540:
    eax = MEM32(esi + 0x24); /* 0x171B4540: mov eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B4543: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171B4545: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B4597; /* 0x171B4547: jle 0x171b4597 */
L_171B4549:
    edi = MEM32(esi + 0xDC); /* 0x171B4549: mov edi, dword ptr [esi + 0xdc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x24u; /* 0x171B454F: add edi, 0x24 */
    _flag_k = FK_ADD;
L_171B4552:
    ecx = MEM32(edi + (-0x1C)); /* 0x171B4552: mov ecx, dword ptr [edi - 0x1c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edi)); /* 0x171B4555: imul ecx, dword ptr [edi] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x1C)); /* 0x171B4558: imul ecx, dword ptr [esi + 0x1c] */
    eax = MEM32(esi + 0x138); /* 0x171B455C: mov eax, dword ptr [esi + 0x138] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x171B4562: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x171B4562: shl eax, 3 */
    PUSH32(esp, eax); /* 0x171B4565: push eax */
    PUSH32(esp, ecx); /* 0x171B4566: push ecx */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B4567: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x13C); /* 0x171B456C: mov edx, dword ptr [esi + 0x13c] */
    MEM32(edi + 0x4) = eax; /* 0x171B4572: mov dword ptr [edi + 4], eax */
    eax = MEM32(edi + (-0x18)); /* 0x171B4575: mov eax, dword ptr [edi - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x20)); /* 0x171B4578: imul eax, dword ptr [esi + 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi)); /* 0x171B457C: imul eax, dword ptr [edi] */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x171B457F: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x171B457F: shl edx, 3 */
    PUSH32(esp, edx); /* 0x171B4582: push edx */
    PUSH32(esp, eax); /* 0x171B4583: push eax */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B4584: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x171B4589: mov dword ptr [edi + 8], eax */
    eax = MEM32(esi + 0x24); /* 0x171B458C: mov eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B458F: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x171B4590: add edi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x171B4593: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B4552; /* 0x171B4595: jl 0x171b4552 */
L_171B4597:
    eax = MEM32(esi + 0x2C); /* 0x171B4597: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B459A: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 4 */ /* 0x171B459B: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x171B459E: pop edi */
    ebx = POP32_VAL(esp); /* 0x171B459F: pop ebx */
    if (CMP_A(_flag_a, _flag_b)) goto L_171B45C4; /* 0x171B45A0: ja 0x171b45c4 */
L_171B45A2:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x171B4608)); goto _ljump; }
L_171B45A9:
    MEM32(esi + 0x78) = 1; /* 0x171B45A9: mov dword ptr [esi + 0x78], 1 */
    goto L_171B45CA; /* 0x171B45B0: jmp 0x171b45ca */
L_171B45B2:
    MEM32(esi + 0x78) = 3; /* 0x171B45B2: mov dword ptr [esi + 0x78], 3 */
    goto L_171B45CA; /* 0x171B45B9: jmp 0x171b45ca */
L_171B45BB:
    MEM32(esi + 0x78) = 4; /* 0x171B45BB: mov dword ptr [esi + 0x78], 4 */
    goto L_171B45CA; /* 0x171B45C2: jmp 0x171b45ca */
L_171B45C4:
    ecx = MEM32(esi + 0x24); /* 0x171B45C4: mov ecx, dword ptr [esi + 0x24] */
    MEM32(esi + 0x78) = ecx; /* 0x171B45C7: mov dword ptr [esi + 0x78], ecx */
L_171B45CA:
    eax = MEM32(esi + 0x54); /* 0x171B45CA: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x171B45CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 1; /* 0x171B45CF: mov eax, 1 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B45D9; /* 0x171B45D4: jne 0x171b45d9 */
L_171B45D6:
    eax = MEM32(esi + 0x78); /* 0x171B45D6: mov eax, dword ptr [esi + 0x78] */
L_171B45D9:
    edx = esi; /* 0x171B45D9: mov edx, esi */
    MEM32(esi + 0x7C) = eax; /* 0x171B45DB: mov dword ptr [esi + 0x7c], eax */
    RECOMP_CALL(sub_171B4380); /* 0x171B45DE: call 0x171b4380 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B45E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B45F8; /* 0x171B45E5: je 0x171b45f8 */
L_171B45E7:
    edx = MEM32(esi + 0x13C); /* 0x171B45E7: mov edx, dword ptr [esi + 0x13c] */
    MEM32(esi + 0x80) = edx; /* 0x171B45ED: mov dword ptr [esi + 0x80], edx */
    esi = POP32_VAL(esp); /* 0x171B45F3: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B45F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B45F5: ret 4 */
L_171B45F8:
    MEM32(esi + 0x80) = 1; /* 0x171B45F8: mov dword ptr [esi + 0x80], 1 */
    esi = POP32_VAL(esp); /* 0x171B4602: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B4603: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B4604: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x171B45A9u: goto L_171B45A9;
      case 0x171B45B2u: goto L_171B45B2;
      case 0x171B45BBu: goto L_171B45BB;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_171B4630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B4630u);

L_171B4630:
    edi = edi; /* 0x171B4630: mov edi, edi */
    PUSH32(esp, esi); /* 0x171B4632: push esi */
    PUSH32(esp, edi); /* 0x171B4633: push edi */
    PUSH32(esp, 0x580u); /* 0x171B4634: push 0x580 */
    esi = eax; /* 0x171B4639: mov esi, eax */
    eax = MEM32(esi + 0x4); /* 0x171B463B: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 1); /* 0x171B463E: push 1 */
    PUSH32(esp, esi); /* 0x171B4640: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4641: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x171B4643: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x100u; /* 0x171B4645: add edx, 0x100 */
    _flag_k = FK_ADD;
    ecx = 0x40u; /* 0x171B464B: mov ecx, 0x40 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B4650: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx + (-0x100); /* 0x171B4652: lea edi, [edx - 0x100] */
    MEM32(esi + 0x148) = edx; /* 0x171B4658: mov dword ptr [esi + 0x148], edx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B465E: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_171B4660:
    MEM8(eax + edx) = (uint8_t)(LO8(eax)); /* 0x171B4660: mov byte ptr [eax + edx], al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B4663: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0xFFu */ /* 0x171B4664: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B4660; /* 0x171B4669: jle 0x171b4660 */
L_171B466B:
    esi = MEM32(esi + 0x148); /* 0x171B466B: mov esi, dword ptr [esi + 0x148] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x80u; /* 0x171B4671: add edx, 0x80 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171B4677: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx + 0x80; /* 0x171B467A: lea edi, [edx + 0x80] */
    ecx = 0x60u; /* 0x171B4680: mov ecx, 0x60 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B4685: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = 0x60u; /* 0x171B4687: mov ecx, 0x60 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B468C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx + 0x200; /* 0x171B468E: lea edi, [edx + 0x200] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B4694: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = edx + 0x380; /* 0x171B4696: lea edi, [edx + 0x380] */
    ecx = 0x20u; /* 0x171B469C: mov ecx, 0x20 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171B46A1: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x171B46A3: pop edi */
    esi = POP32_VAL(esp); /* 0x171B46A4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B46A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B46B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B46B0u);

L_171B46B0:
    edi = edi; /* 0x171B46B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B46B2: push ebp */
    ebp = esp; /* 0x171B46B3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B46B5: push ecx */
    PUSH32(esp, ebx); /* 0x171B46B6: push ebx */
    ebx = MEM32(esi + 0x1A8); /* 0x171B46B7: mov ebx, dword ptr [esi + 0x1a8] */
    PUSH32(esp, edi); /* 0x171B46BD: push edi */
    PUSH32(esp, esi); /* 0x171B46BE: push esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171B46BF: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_171B4410); /* 0x171B46C2: call 0x171b4410 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171B46C7: mov eax, esi */
    RECOMP_CALL(sub_171B4630); /* 0x171B46C9: call 0x171b4630 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B46CE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi; /* 0x171B46D0: mov edx, esi */
    MEM32(ebx + 0xC) = edi; /* 0x171B46D2: mov dword ptr [ebx + 0xc], edi */
    RECOMP_CALL(sub_171B4380); /* 0x171B46D5: call 0x171b4380 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x10) = eax; /* 0x171B46DA: mov dword ptr [ebx + 0x10], eax */
    eax = MEM32(esi + 0x54); /* 0x171B46DD: mov eax, dword ptr [esi + 0x54] */
    /* cmp eax, edi */ /* 0x171B46E0: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0x14) = edi; /* 0x171B46E2: mov dword ptr [ebx + 0x14], edi */
    MEM32(ebx + 0x18) = edi; /* 0x171B46E5: mov dword ptr [ebx + 0x18], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B46EF; /* 0x171B46E8: je 0x171b46ef */
L_171B46EA:
    /* cmp MEM32(esi + 0x40), edi */ /* 0x171B46EA: cmp dword ptr [esi + 0x40], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B46F8; /* 0x171B46ED: jne 0x171b46f8 */
L_171B46EF:
    MEM32(esi + 0x64) = edi; /* 0x171B46EF: mov dword ptr [esi + 0x64], edi */
    MEM32(esi + 0x68) = edi; /* 0x171B46F2: mov dword ptr [esi + 0x68], edi */
    MEM32(esi + 0x6C) = edi; /* 0x171B46F5: mov dword ptr [esi + 0x6c], edi */
L_171B46F8:
    /* cmp eax, edi */ /* 0x171B46F8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B474D; /* 0x171B46FA: je 0x171b474d */
L_171B46FC:
    /* cmp MEM32(esi + 0x44), edi */ /* 0x171B46FC: cmp dword ptr [esi + 0x44], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B470D; /* 0x171B46FF: je 0x171b470d */
L_171B4701:
    eax = MEM32(esi); /* 0x171B4701: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B4703: push esi */
    MEM32(eax + 0x14) = 0x2Fu; /* 0x171B4704: mov dword ptr [eax + 0x14], 0x2f */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B470B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B470D:
    /* cmp MEM32(esi + 0x78), 3 */ /* 0x171B470D: cmp dword ptr [esi + 0x78], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x78)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B475F; /* 0x171B4711: je 0x171b475f */
L_171B4713:
    MEM32(esi + 0x68) = edi; /* 0x171B4713: mov dword ptr [esi + 0x68], edi */
    MEM32(esi + 0x6C) = edi; /* 0x171B4716: mov dword ptr [esi + 0x6c], edi */
    MEM32(esi + 0x88) = edi; /* 0x171B4719: mov dword ptr [esi + 0x88], edi */
L_171B471F:
    MEM32(esi + 0x64) = 1; /* 0x171B471F: mov dword ptr [esi + 0x64], 1 */
L_171B4726:
    /* cmp MEM32(esi + 0x64), edi */ /* 0x171B4726: cmp dword ptr [esi + 0x64], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x64)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = 0x30u; /* 0x171B4729: mov ebx, 0x30 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B4738; /* 0x171B472E: je 0x171b4738 */
L_171B4730:
    eax = MEM32(esi); /* 0x171B4730: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B4732: push esi */
    MEM32(eax + 0x14) = ebx; /* 0x171B4733: mov dword ptr [eax + 0x14], ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4736: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B4738:
    /* cmp MEM32(esi + 0x6C), edi */ /* 0x171B4738: cmp dword ptr [esi + 0x6c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B4742; /* 0x171B473B: jne 0x171b4742 */
L_171B473D:
    /* cmp MEM32(esi + 0x68), edi */ /* 0x171B473D: cmp dword ptr [esi + 0x68], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B474A; /* 0x171B4740: je 0x171b474a */
L_171B4742:
    eax = MEM32(esi); /* 0x171B4742: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B4744: push esi */
    MEM32(eax + 0x14) = ebx; /* 0x171B4745: mov dword ptr [eax + 0x14], ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4748: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B474A:
    ebx = MEM32(ebp + (-0x4)); /* 0x171B474A: mov ebx, dword ptr [ebp - 4] */
L_171B474D:
    /* cmp MEM32(esi + 0x44), edi */ /* 0x171B474D: cmp dword ptr [esi + 0x44], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B4793; /* 0x171B4750: jne 0x171b4793 */
L_171B4752:
    /* cmp MEM32(ebx + 0x10), edi */ /* 0x171B4752: cmp dword ptr [ebx + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171B4755: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B477E; /* 0x171B4756: je 0x171b477e */
L_171B4758:
    RECOMP_CALL(sub_171BCF00); /* 0x171B4758: call 0x171bcf00 */
    RECOMP_FLAGS_IN();
    goto L_171B4789; /* 0x171B475D: jmp 0x171b4789 */
L_171B475F:
    /* cmp MEM32(esi + 0x88), edi */ /* 0x171B475F: cmp dword ptr [esi + 0x88], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x88)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B4770; /* 0x171B4765: je 0x171b4770 */
L_171B4767:
    MEM32(esi + 0x68) = 1; /* 0x171B4767: mov dword ptr [esi + 0x68], 1 */
    RECOMP_BACKEDGE();
    goto L_171B4726; /* 0x171B476E: jmp 0x171b4726 */
L_171B4770:
    /* cmp MEM32(esi + 0x5C), edi */ /* 0x171B4770: cmp dword ptr [esi + 0x5c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B471F; /* 0x171B4773: je 0x171b471f */
L_171B4775:
    MEM32(esi + 0x6C) = 1; /* 0x171B4775: mov dword ptr [esi + 0x6c], 1 */
    RECOMP_BACKEDGE();
    goto L_171B4726; /* 0x171B477C: jmp 0x171b4726 */
L_171B477E:
    RECOMP_CALL(sub_171BC260); /* 0x171B477E: call 0x171bc260 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171B4783: push esi */
    RECOMP_CALL(sub_171BB280); /* 0x171B4784: call 0x171bb280 */
    RECOMP_FLAGS_IN();
L_171B4789:
    eax = MEM32(esi + 0x6C); /* 0x171B4789: mov eax, dword ptr [esi + 0x6c] */
    PUSH32(esp, eax); /* 0x171B478C: push eax */
    PUSH32(esp, esi); /* 0x171B478D: push esi */
    RECOMP_CALL(sub_171BA370); /* 0x171B478E: call 0x171ba370 */
    RECOMP_FLAGS_IN();
L_171B4793:
    PUSH32(esp, esi); /* 0x171B4793: push esi */
    RECOMP_CALL(sub_171BA1E0); /* 0x171B4794: call 0x171ba1e0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0xE4), edi */ /* 0x171B4799: cmp dword ptr [esi + 0xe4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xE4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171B479F: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B47AF; /* 0x171B47A0: je 0x171b47af */
L_171B47A2:
    eax = MEM32(esi); /* 0x171B47A2: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 1; /* 0x171B47A4: mov dword ptr [eax + 0x14], 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B47AB: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    goto L_171B47C3; /* 0x171B47AD: jmp 0x171b47c3 */
L_171B47AF:
    /* cmp MEM32(esi + 0xE0), edi */ /* 0x171B47AF: cmp dword ptr [esi + 0xe0], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xE0)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B47BE; /* 0x171B47B5: je 0x171b47be */
L_171B47B7:
    RECOMP_CALL(sub_171B9E10); /* 0x171B47B7: call 0x171b9e10 */
    RECOMP_FLAGS_IN();
    goto L_171B47C3; /* 0x171B47BC: jmp 0x171b47c3 */
L_171B47BE:
    RECOMP_CALL(sub_171B91F0); /* 0x171B47BE: call 0x171b91f0 */
    RECOMP_FLAGS_IN();
L_171B47C3:
    ecx = MEM32(esi + 0x1B8); /* 0x171B47C3: mov ecx, dword ptr [esi + 0x1b8] */
    /* cmp MEM32(ecx + 0x10), edi */ /* 0x171B47C9: cmp dword ptr [ecx + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B47D7; /* 0x171B47CC: jne 0x171b47d7 */
L_171B47CE:
    /* cmp MEM32(esi + 0x40), edi */ /* 0x171B47CE: cmp dword ptr [esi + 0x40], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B47D7; /* 0x171B47D1: jne 0x171b47d7 */
L_171B47D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B47D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171B47DC; /* 0x171B47D5: jmp 0x171b47dc */
L_171B47D7:
    eax = 1; /* 0x171B47D7: mov eax, 1 */
L_171B47DC:
    PUSH32(esp, eax); /* 0x171B47DC: push eax */
    PUSH32(esp, esi); /* 0x171B47DD: push esi */
    RECOMP_CALL(sub_171B8590); /* 0x171B47DE: call 0x171b8590 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x44), edi */ /* 0x171B47E3: cmp dword ptr [esi + 0x44], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B47EF; /* 0x171B47E6: jne 0x171b47ef */
L_171B47E8:
    PUSH32(esp, edi); /* 0x171B47E8: push edi */
    PUSH32(esp, esi); /* 0x171B47E9: push esi */
    RECOMP_CALL(sub_171B7530); /* 0x171B47EA: call 0x171b7530 */
    RECOMP_FLAGS_IN();
L_171B47EF:
    edx = MEM32(esi + 0x4); /* 0x171B47EF: mov edx, dword ptr [esi + 4] */
    PUSH32(esp, esi); /* 0x171B47F2: push esi */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x171B47F3: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1B8); /* 0x171B47F6: mov eax, dword ptr [esi + 0x1b8] */
    PUSH32(esp, esi); /* 0x171B47FC: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171B47FD: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x171B4800: mov eax, dword ptr [esi + 8] */
    /* cmp eax, edi */ /* 0x171B4803: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B484B; /* 0x171B4805: je 0x171b484b */
L_171B4807:
    /* cmp MEM32(esi + 0x40), edi */ /* 0x171B4807: cmp dword ptr [esi + 0x40], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B484B; /* 0x171B480A: jne 0x171b484b */
L_171B480C:
    ecx = MEM32(esi + 0x1B8); /* 0x171B480C: mov ecx, dword ptr [esi + 0x1b8] */
    /* cmp MEM32(ecx + 0x10), edi */ /* 0x171B4812: cmp dword ptr [ecx + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B484B; /* 0x171B4815: je 0x171b484b */
L_171B4817:
    /* cmp MEM32(esi + 0xE0), edi */ /* 0x171B4817: cmp dword ptr [esi + 0xe0], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xE0)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x24); /* 0x171B481D: mov ecx, dword ptr [esi + 0x24] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B4826; /* 0x171B4820: je 0x171b4826 */
L_171B4822:
    ecx = ecx + ecx * 2 + 0x2; /* 0x171B4822: lea ecx, [ecx + ecx*2 + 2] */
L_171B4826:
    edx = MEM32(esi + 0x144); /* 0x171B4826: mov edx, dword ptr [esi + 0x144] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x171B482C: imul edx, ecx */
    MEM32(eax + 0x4) = edi; /* 0x171B482F: mov dword ptr [eax + 4], edi */
    MEM32(eax + 0x8) = edx; /* 0x171B4832: mov dword ptr [eax + 8], edx */
    edx = MEM32(esi + 0x6C); /* 0x171B4835: mov edx, dword ptr [esi + 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B4838: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, edi */ /* 0x171B483A: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x171B483C: setne cl */
    MEM32(eax + 0xC) = edi; /* 0x171B483F: mov dword ptr [eax + 0xc], edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x171B4842: add ecx, 2 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x10) = ecx; /* 0x171B4845: mov dword ptr [eax + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) + 1; /* 0x171B4848: inc dword ptr [ebx + 0xc] */
    _flag_k = FK_INC;
L_171B484B:
    edi = POP32_VAL(esp); /* 0x171B484B: pop edi */
    ebx = POP32_VAL(esp); /* 0x171B484C: pop ebx */
    esp = ebp; /* 0x171B484D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B484F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B4850: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B4860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B4860u);

L_171B4860:
    edi = edi; /* 0x171B4860: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B4862: push ebp */
    ebp = esp; /* 0x171B4863: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B4865: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B4866: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171B4869: push edi */
    edi = MEM32(esi + 0x1A8); /* 0x171B486A: mov edi, dword ptr [esi + 0x1a8] */
    eax = MEM32(edi + 0x8); /* 0x171B4870: mov eax, dword ptr [edi + 8] */
    /* test eax, eax */ /* 0x171B4873: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B4888; /* 0x171B4875: je 0x171b4888 */
L_171B4877:
    eax = MEM32(esi); /* 0x171B4877: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B4879: push esi */
    MEM32(eax + 0x14) = 0x30u; /* 0x171B487A: mov dword ptr [eax + 0x14], 0x30 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4881: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    goto L_171B493D; /* 0x171B4883: jmp 0x171b493d */
L_171B4888:
    eax = MEM32(esi + 0x54); /* 0x171B4888: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x171B488B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B48D7; /* 0x171B488D: je 0x171b48d7 */
L_171B488F:
    eax = MEM32(esi + 0x88); /* 0x171B488F: mov eax, dword ptr [esi + 0x88] */
    /* test eax, eax */ /* 0x171B4895: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B48D7; /* 0x171B4897: jne 0x171b48d7 */
L_171B4899:
    eax = MEM32(esi + 0x5C); /* 0x171B4899: mov eax, dword ptr [esi + 0x5c] */
    /* test eax, eax */ /* 0x171B489C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B48B9; /* 0x171B489E: je 0x171b48b9 */
L_171B48A0:
    eax = MEM32(esi + 0x6C); /* 0x171B48A0: mov eax, dword ptr [esi + 0x6c] */
    /* test eax, eax */ /* 0x171B48A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B48B9; /* 0x171B48A5: je 0x171b48b9 */
L_171B48A7:
    eax = MEM32(edi + 0x18); /* 0x171B48A7: mov eax, dword ptr [edi + 0x18] */
    MEM32(esi + 0x1D0) = eax; /* 0x171B48AA: mov dword ptr [esi + 0x1d0], eax */
    MEM32(edi + 0x8) = 1; /* 0x171B48B0: mov dword ptr [edi + 8], 1 */
    goto L_171B48D7; /* 0x171B48B7: jmp 0x171b48d7 */
L_171B48B9:
    eax = MEM32(esi + 0x64); /* 0x171B48B9: mov eax, dword ptr [esi + 0x64] */
    /* test eax, eax */ /* 0x171B48BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B48CB; /* 0x171B48BE: je 0x171b48cb */
L_171B48C0:
    ecx = MEM32(edi + 0x14); /* 0x171B48C0: mov ecx, dword ptr [edi + 0x14] */
    MEM32(esi + 0x1D0) = ecx; /* 0x171B48C3: mov dword ptr [esi + 0x1d0], ecx */
    goto L_171B48D7; /* 0x171B48C9: jmp 0x171b48d7 */
L_171B48CB:
    eax = MEM32(esi); /* 0x171B48CB: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B48CD: push esi */
    MEM32(eax + 0x14) = 0x2Eu; /* 0x171B48CE: mov dword ptr [eax + 0x14], 0x2e */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B48D5: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B48D7:
    edx = MEM32(esi + 0x1C4); /* 0x171B48D7: mov edx, dword ptr [esi + 0x1c4] */
    PUSH32(esp, esi); /* 0x171B48DD: push esi */
    RECOMP_ICALL(MEM32(edx)); /* 0x171B48DE: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1B0); /* 0x171B48E0: mov eax, dword ptr [esi + 0x1b0] */
    PUSH32(esp, esi); /* 0x171B48E6: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171B48E7: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x44); /* 0x171B48EA: mov eax, dword ptr [esi + 0x44] */
    /* test eax, eax */ /* 0x171B48ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B493D; /* 0x171B48EF: jne 0x171b493d */
L_171B48F1:
    eax = MEM32(edi + 0x10); /* 0x171B48F1: mov eax, dword ptr [edi + 0x10] */
    /* test eax, eax */ /* 0x171B48F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B4901; /* 0x171B48F6: jne 0x171b4901 */
L_171B48F8:
    ecx = MEM32(esi + 0x1CC); /* 0x171B48F8: mov ecx, dword ptr [esi + 0x1cc] */
    PUSH32(esp, esi); /* 0x171B48FE: push esi */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171B48FF: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
L_171B4901:
    edx = MEM32(esi + 0x1C8); /* 0x171B4901: mov edx, dword ptr [esi + 0x1c8] */
    PUSH32(esp, esi); /* 0x171B4907: push esi */
    RECOMP_ICALL(MEM32(edx)); /* 0x171B4908: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x54); /* 0x171B490A: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x171B490D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B491E; /* 0x171B490F: je 0x171b491e */
L_171B4911:
    ecx = MEM32(edi + 0x8); /* 0x171B4911: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(esi + 0x1D0); /* 0x171B4914: mov eax, dword ptr [esi + 0x1d0] */
    PUSH32(esp, ecx); /* 0x171B491A: push ecx */
    PUSH32(esp, esi); /* 0x171B491B: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B491C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B491E:
    eax = MEM32(edi + 0x8); /* 0x171B491E: mov eax, dword ptr [edi + 8] */
    edx = MEM32(esi + 0x1B4); /* 0x171B4921: mov edx, dword ptr [esi + 0x1b4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171B4927: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171B4929: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x171B492B: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x171B492E: push eax */
    PUSH32(esp, esi); /* 0x171B492F: push esi */
    RECOMP_ICALL(MEM32(edx)); /* 0x171B4930: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1AC); /* 0x171B4932: mov ecx, dword ptr [esi + 0x1ac] */
    PUSH32(esp, 0); /* 0x171B4938: push 0 */
    PUSH32(esp, esi); /* 0x171B493A: push esi */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171B493B: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
L_171B493D:
    eax = MEM32(esi + 0x8); /* 0x171B493D: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x171B4940: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B4981; /* 0x171B4942: je 0x171b4981 */
L_171B4944:
    edx = MEM32(edi + 0xC); /* 0x171B4944: mov edx, dword ptr [edi + 0xc] */
    MEM32(eax + 0xC) = edx; /* 0x171B4947: mov dword ptr [eax + 0xc], edx */
    edx = MEM32(edi + 0x8); /* 0x171B494A: mov edx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B494D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x171B494F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(edi + 0xC); /* 0x171B4951: mov edx, dword ptr [edi + 0xc] */
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x171B4954: setne cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B4957: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171B4958: add ecx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(esi + 0x40); /* 0x171B495A: mov edx, dword ptr [esi + 0x40] */
    /* test edx, edx */ /* 0x171B495D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x10) = ecx; /* 0x171B495F: mov dword ptr [eax + 0x10], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B4981; /* 0x171B4962: je 0x171b4981 */
L_171B4964:
    edx = MEM32(esi + 0x1B8); /* 0x171B4964: mov edx, dword ptr [esi + 0x1b8] */
    edi = MEM32(edx + 0x14); /* 0x171B496A: mov edi, dword ptr [edx + 0x14] */
    /* test edi, edi */ /* 0x171B496D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B4981; /* 0x171B496F: jne 0x171b4981 */
L_171B4971:
    edi = MEM32(esi + 0x6C); /* 0x171B4971: mov edi, dword ptr [esi + 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B4974: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x171B4976: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x171B4978: setne dl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B497B: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x171B497C: add edx, ecx */
    _flag_k = FK_ADD;
    MEM32(eax + 0x10) = edx; /* 0x171B497E: mov dword ptr [eax + 0x10], edx */
L_171B4981:
    edi = POP32_VAL(esp); /* 0x171B4981: pop edi */
    esi = POP32_VAL(esp); /* 0x171B4982: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B4983: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B4984: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B4990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B4990u);

L_171B4990:
    edi = edi; /* 0x171B4990: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B4992: push ebp */
    ebp = esp; /* 0x171B4993: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171B4995: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x54); /* 0x171B4998: mov ecx, dword ptr [eax + 0x54] */
    /* test ecx, ecx */ /* 0x171B499B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171B499D: push esi */
    esi = MEM32(eax + 0x1A8); /* 0x171B499E: mov esi, dword ptr [eax + 0x1a8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B49B0; /* 0x171B49A4: je 0x171b49b0 */
L_171B49A6:
    ecx = MEM32(eax + 0x1D0); /* 0x171B49A6: mov ecx, dword ptr [eax + 0x1d0] */
    PUSH32(esp, eax); /* 0x171B49AC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171B49AD: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_171B49B0:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x171B49B0: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x171B49B3: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B49B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B49B5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B49C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B49C0u);

L_171B49C0:
    edi = edi; /* 0x171B49C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B49C2: push ebp */
    ebp = esp; /* 0x171B49C3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B49C5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B49C6: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171B49C9: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 0x1Cu); /* 0x171B49CC: push 0x1c */
    PUSH32(esp, 1); /* 0x171B49CE: push 1 */
    PUSH32(esp, esi); /* 0x171B49D0: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B49D1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1A8) = eax; /* 0x171B49D3: mov dword ptr [esi + 0x1a8], eax */
    MEM32(eax) = 0x171B4860u; /* 0x171B49D9: mov dword ptr [eax], 0x171b4860 */
    MEM32(eax + 0x4) = 0x171B4990u; /* 0x171B49DF: mov dword ptr [eax + 4], 0x171b4990 */
    MEM32(eax + 0x8) = 0; /* 0x171B49E6: mov dword ptr [eax + 8], 0 */
    RECOMP_CALL(sub_171B46B0); /* 0x171B49ED: call 0x171b46b0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171B49F2: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B49F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B49F4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B4A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B4A00u);

L_171B4A00:
    eax = MEM32(esi + 0x20); /* 0x171B4A00: mov eax, dword ptr [esi + 0x20] */
    ecx = 0xFFDCu; /* 0x171B4A03: mov ecx, 0xffdc */
    /* cmp eax, ecx */ /* 0x171B4A08: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B4A11; /* 0x171B4A0A: jg 0x171b4a11 */
L_171B4A0C:
    /* cmp MEM32(esi + 0x1C), ecx */ /* 0x171B4A0C: cmp dword ptr [esi + 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B4A20; /* 0x171B4A0F: jle 0x171b4a20 */
L_171B4A11:
    eax = MEM32(esi); /* 0x171B4A11: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x29u; /* 0x171B4A13: mov dword ptr [eax + 0x14], 0x29 */
    PUSH32(esp, esi); /* 0x171B4A1A: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B4A1B: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4A1E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B4A20:
    ecx = MEM32(esi + 0xD8); /* 0x171B4A20: mov ecx, dword ptr [esi + 0xd8] */
    /* cmp ecx, 8 */ /* 0x171B4A26: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B4A3A; /* 0x171B4A29: je 0x171b4a3a */
L_171B4A2B:
    eax = MEM32(esi); /* 0x171B4A2B: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xFu; /* 0x171B4A2D: mov dword ptr [eax + 0x14], 0xf */
    PUSH32(esp, esi); /* 0x171B4A34: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B4A35: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4A38: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B4A3A:
    ecx = MEM32(esi + 0x24); /* 0x171B4A3A: mov ecx, dword ptr [esi + 0x24] */
    /* cmp ecx, 0xAu */ /* 0x171B4A3D: cmp ecx, 0xa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B4A58; /* 0x171B4A40: jle 0x171b4a58 */
L_171B4A42:
    eax = MEM32(esi); /* 0x171B4A42: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Au; /* 0x171B4A44: mov dword ptr [eax + 0x14], 0x1a */
    MEM32(eax + 0x18) = ecx; /* 0x171B4A4B: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, esi); /* 0x171B4A4E: push esi */
    MEM32(eax + 0x1C) = 0xAu; /* 0x171B4A4F: mov dword ptr [eax + 0x1c], 0xa */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4A56: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B4A58:
    ecx = MEM32(esi + 0x24); /* 0x171B4A58: mov ecx, dword ptr [esi + 0x24] */
    eax = 1; /* 0x171B4A5B: mov eax, 1 */
    PUSH32(esp, ebx); /* 0x171B4A60: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B4A61: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171B4A63: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x138) = eax; /* 0x171B4A65: mov dword ptr [esi + 0x138], eax */
    MEM32(esi + 0x13C) = eax; /* 0x171B4A6B: mov dword ptr [esi + 0x13c], eax */
    eax = MEM32(esi + 0xDC); /* 0x171B4A71: mov eax, dword ptr [esi + 0xdc] */
    PUSH32(esp, edi); /* 0x171B4A77: push edi */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B4AD7; /* 0x171B4A78: jle 0x171b4ad7 */
L_171B4A7A:
    edi = eax + 0xC; /* 0x171B4A7A: lea edi, [eax + 0xc] */
    ecx = ecx; /* 0x171B4A7D: lea ecx, [ecx] */
L_171B4A80:
    eax = MEM32(edi + (-0x4)); /* 0x171B4A80: mov eax, dword ptr [edi - 4] */
    /* test eax, eax */ /* 0x171B4A83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B4A97; /* 0x171B4A85: jle 0x171b4a97 */
L_171B4A87:
    /* cmp eax, 4 */ /* 0x171B4A87: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B4A97; /* 0x171B4A8A: jg 0x171b4a97 */
L_171B4A8C:
    eax = MEM32(edi); /* 0x171B4A8C: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x171B4A8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B4A97; /* 0x171B4A90: jle 0x171b4a97 */
L_171B4A92:
    /* cmp eax, 4 */ /* 0x171B4A92: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B4AA3; /* 0x171B4A95: jle 0x171b4aa3 */
L_171B4A97:
    eax = MEM32(esi); /* 0x171B4A97: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B4A99: push esi */
    MEM32(eax + 0x14) = 0x12u; /* 0x171B4A9A: mov dword ptr [eax + 0x14], 0x12 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4AA1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B4AA3:
    eax = MEM32(esi + 0x138); /* 0x171B4AA3: mov eax, dword ptr [esi + 0x138] */
    ecx = MEM32(edi + (-0x4)); /* 0x171B4AA9: mov ecx, dword ptr [edi - 4] */
    /* cmp eax, ecx */ /* 0x171B4AAC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B4AB2; /* 0x171B4AAE: jg 0x171b4ab2 */
L_171B4AB0:
    eax = ecx; /* 0x171B4AB0: mov eax, ecx */
L_171B4AB2:
    ecx = MEM32(edi); /* 0x171B4AB2: mov ecx, dword ptr [edi] */
    MEM32(esi + 0x138) = eax; /* 0x171B4AB4: mov dword ptr [esi + 0x138], eax */
    eax = MEM32(esi + 0x13C); /* 0x171B4ABA: mov eax, dword ptr [esi + 0x13c] */
    /* cmp eax, ecx */ /* 0x171B4AC0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B4AC6; /* 0x171B4AC2: jg 0x171b4ac6 */
L_171B4AC4:
    eax = ecx; /* 0x171B4AC4: mov eax, ecx */
L_171B4AC6:
    MEM32(esi + 0x13C) = eax; /* 0x171B4AC6: mov dword ptr [esi + 0x13c], eax */
    eax = MEM32(esi + 0x24); /* 0x171B4ACC: mov eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B4ACF: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x171B4AD0: add edi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x171B4AD3: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B4A80; /* 0x171B4AD5: jl 0x171b4a80 */
L_171B4AD7:
    ecx = MEM32(esi + 0x24); /* 0x171B4AD7: mov ecx, dword ptr [esi + 0x24] */
    eax = MEM32(esi + 0xDC); /* 0x171B4ADA: mov eax, dword ptr [esi + 0xdc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B4AE0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171B4AE2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x140) = 8; /* 0x171B4AE4: mov dword ptr [esi + 0x140], 8 */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B4B85; /* 0x171B4AEE: jle 0x171b4b85 */
L_171B4AF4:
    edi = eax + 0x1C; /* 0x171B4AF4: lea edi, [eax + 0x1c] */
    goto L_171B4B00; /* 0x171B4AF7: jmp 0x171b4b00 */
L_171B4B00:
    ecx = MEM32(edi + (-0x14)); /* 0x171B4B00: mov ecx, dword ptr [edi - 0x14] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x1C)); /* 0x171B4B03: imul ecx, dword ptr [esi + 0x1c] */
    eax = MEM32(esi + 0x138); /* 0x171B4B07: mov eax, dword ptr [esi + 0x138] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x171B4B0D: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x171B4B0D: shl eax, 3 */
    PUSH32(esp, eax); /* 0x171B4B10: push eax */
    PUSH32(esp, ecx); /* 0x171B4B11: push ecx */
    MEM32(edi + 0x8) = 8; /* 0x171B4B12: mov dword ptr [edi + 8], 8 */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B4B19: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x13C); /* 0x171B4B1E: mov edx, dword ptr [esi + 0x13c] */
    MEM32(edi) = eax; /* 0x171B4B24: mov dword ptr [edi], eax */
    eax = MEM32(edi + (-0x10)); /* 0x171B4B26: mov eax, dword ptr [edi - 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x20)); /* 0x171B4B29: imul eax, dword ptr [esi + 0x20] */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x171B4B2D: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x171B4B2D: shl edx, 3 */
    PUSH32(esp, edx); /* 0x171B4B30: push edx */
    PUSH32(esp, eax); /* 0x171B4B31: push eax */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B4B32: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + (-0x14)); /* 0x171B4B37: mov edx, dword ptr [edi - 0x14] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 0x1C)); /* 0x171B4B3A: imul edx, dword ptr [esi + 0x1c] */
    ecx = MEM32(esi + 0x138); /* 0x171B4B3E: mov ecx, dword ptr [esi + 0x138] */
    PUSH32(esp, ecx); /* 0x171B4B44: push ecx */
    PUSH32(esp, edx); /* 0x171B4B45: push edx */
    MEM32(edi + 0x4) = eax; /* 0x171B4B46: mov dword ptr [edi + 4], eax */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B4B49: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + (-0x10)); /* 0x171B4B4E: mov ecx, dword ptr [edi - 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x20)); /* 0x171B4B51: imul ecx, dword ptr [esi + 0x20] */
    MEM32(edi + 0xC) = eax; /* 0x171B4B55: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(esi + 0x13C); /* 0x171B4B58: mov eax, dword ptr [esi + 0x13c] */
    PUSH32(esp, eax); /* 0x171B4B5E: push eax */
    PUSH32(esp, ecx); /* 0x171B4B5F: push ecx */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B4B60: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x10) = eax; /* 0x171B4B65: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(esi + 0x24); /* 0x171B4B68: mov eax, dword ptr [esi + 0x24] */
    MEM32(edi + 0x14) = 1; /* 0x171B4B6B: mov dword ptr [edi + 0x14], 1 */
    MEM32(edi + 0x30) = 0; /* 0x171B4B72: mov dword ptr [edi + 0x30], 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B4B79: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x171B4B7A: add edi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x171B4B7D: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B4B00; /* 0x171B4B7F: jl 0x171b4b00 */
L_171B4B85:
    edx = MEM32(esi + 0x13C); /* 0x171B4B85: mov edx, dword ptr [esi + 0x13c] */
    eax = MEM32(esi + 0x20); /* 0x171B4B8B: mov eax, dword ptr [esi + 0x20] */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x171B4B8E: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x171B4B8E: shl edx, 3 */
    PUSH32(esp, edx); /* 0x171B4B91: push edx */
    PUSH32(esp, eax); /* 0x171B4B92: push eax */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B4B93: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x14C); /* 0x171B4B98: mov ecx, dword ptr [esi + 0x14c] */
    MEM32(esi + 0x144) = eax; /* 0x171B4B9E: mov dword ptr [esi + 0x144], eax */
    /* cmp ecx, MEM32(esi + 0x24) */ /* 0x171B4BA4: cmp ecx, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x171B4BA7: pop edi */
    ebx = POP32_VAL(esp); /* 0x171B4BA8: pop ebx */
    if (CMP_L(_flag_a, _flag_b)) goto L_171B4BC3; /* 0x171B4BA9: jl 0x171b4bc3 */
L_171B4BAB:
    eax = MEM32(esi + 0xE0); /* 0x171B4BAB: mov eax, dword ptr [esi + 0xe0] */
    /* test eax, eax */ /* 0x171B4BB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B4BC3; /* 0x171B4BB3: jne 0x171b4bc3 */
L_171B4BB5:
    edx = MEM32(esi + 0x1B8); /* 0x171B4BB5: mov edx, dword ptr [esi + 0x1b8] */
    MEM32(edx + 0x10) = 0; /* 0x171B4BBB: mov dword ptr [edx + 0x10], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B4BC2: ret  */
L_171B4BC3:
    eax = MEM32(esi + 0x1B8); /* 0x171B4BC3: mov eax, dword ptr [esi + 0x1b8] */
    MEM32(eax + 0x10) = 1; /* 0x171B4BC9: mov dword ptr [eax + 0x10], 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B4BD0: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B4BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B4BE0u);

L_171B4BE0:
    edi = edi; /* 0x171B4BE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B4BE2: push ebp */
    ebp = esp; /* 0x171B4BE3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x171B4BE5: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x14C); /* 0x171B4BE8: mov ecx, dword ptr [esi + 0x14c] */
    PUSH32(esp, ebx); /* 0x171B4BEE: push ebx */
    ebx = 1; /* 0x171B4BEF: mov ebx, 1 */
    /* cmp ecx, ebx */ /* 0x171B4BF4: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171B4BF6: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B4C49; /* 0x171B4BF7: jne 0x171b4c49 */
L_171B4BF9:
    ecx = MEM32(esi + 0x150); /* 0x171B4BF9: mov ecx, dword ptr [esi + 0x150] */
    eax = MEM32(ecx + 0x1C); /* 0x171B4BFF: mov eax, dword ptr [ecx + 0x1c] */
    edx = MEM32(ecx + 0x24); /* 0x171B4C02: mov edx, dword ptr [ecx + 0x24] */
    edi = MEM32(ecx + 0xC); /* 0x171B4C05: mov edi, dword ptr [ecx + 0xc] */
    MEM32(esi + 0x160) = eax; /* 0x171B4C08: mov dword ptr [esi + 0x160], eax */
    eax = MEM32(ecx + 0x20); /* 0x171B4C0E: mov eax, dword ptr [ecx + 0x20] */
    MEM32(ecx + 0x40) = edx; /* 0x171B4C11: mov dword ptr [ecx + 0x40], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B4C14: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x164) = eax; /* 0x171B4C16: mov dword ptr [esi + 0x164], eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x171B4C1C: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ecx + 0x34) = ebx; /* 0x171B4C1E: mov dword ptr [ecx + 0x34], ebx */
    MEM32(ecx + 0x38) = ebx; /* 0x171B4C21: mov dword ptr [ecx + 0x38], ebx */
    MEM32(ecx + 0x3C) = ebx; /* 0x171B4C24: mov dword ptr [ecx + 0x3c], ebx */
    MEM32(ecx + 0x44) = ebx; /* 0x171B4C27: mov dword ptr [ecx + 0x44], ebx */
    /* test edx, edx */ /* 0x171B4C2A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B4C30; /* 0x171B4C2C: jne 0x171b4c30 */
L_171B4C2E:
    edx = edi; /* 0x171B4C2E: mov edx, edi */
L_171B4C30:
    edi = POP32_VAL(esp); /* 0x171B4C30: pop edi */
    MEM32(esi + 0x168) = ebx; /* 0x171B4C31: mov dword ptr [esi + 0x168], ebx */
    MEM32(ecx + 0x48) = edx; /* 0x171B4C37: mov dword ptr [ecx + 0x48], edx */
    MEM32(esi + 0x16C) = 0; /* 0x171B4C3A: mov dword ptr [esi + 0x16c], 0 */
    ebx = POP32_VAL(esp); /* 0x171B4C44: pop ebx */
    esp = ebp; /* 0x171B4C45: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B4C47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B4C48: ret  */
L_171B4C49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B4C49: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edi */ /* 0x171B4C4B: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B4C54; /* 0x171B4C4D: jle 0x171b4c54 */
L_171B4C4F:
    /* cmp ecx, 4 */ /* 0x171B4C4F: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B4C6A; /* 0x171B4C52: jle 0x171b4c6a */
L_171B4C54:
    eax = MEM32(esi); /* 0x171B4C54: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Au; /* 0x171B4C56: mov dword ptr [eax + 0x14], 0x1a */
    MEM32(eax + 0x18) = ecx; /* 0x171B4C5D: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, esi); /* 0x171B4C60: push esi */
    MEM32(eax + 0x1C) = 4; /* 0x171B4C61: mov dword ptr [eax + 0x1c], 4 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4C68: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B4C6A:
    eax = MEM32(esi + 0x138); /* 0x171B4C6A: mov eax, dword ptr [esi + 0x138] */
    ecx = MEM32(esi + 0x1C); /* 0x171B4C70: mov ecx, dword ptr [esi + 0x1c] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x171B4C73: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x171B4C73: shl eax, 3 */
    PUSH32(esp, eax); /* 0x171B4C76: push eax */
    PUSH32(esp, ecx); /* 0x171B4C77: push ecx */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B4C78: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x13C); /* 0x171B4C7D: mov edx, dword ptr [esi + 0x13c] */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x171B4C83: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x171B4C83: shl edx, 3 */
    MEM32(esi + 0x160) = eax; /* 0x171B4C86: mov dword ptr [esi + 0x160], eax */
    eax = MEM32(esi + 0x20); /* 0x171B4C8C: mov eax, dword ptr [esi + 0x20] */
    PUSH32(esp, edx); /* 0x171B4C8F: push edx */
    PUSH32(esp, eax); /* 0x171B4C90: push eax */
    RECOMP_CALL(sub_171B5CE0); /* 0x171B4C91: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x164) = eax; /* 0x171B4C96: mov dword ptr [esi + 0x164], eax */
    /* cmp MEM32(esi + 0x14C), edi */ /* 0x171B4C9C: cmp dword ptr [esi + 0x14c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x14C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x168) = edi; /* 0x171B4CA2: mov dword ptr [esi + 0x168], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x171B4CA8: mov dword ptr [ebp - 4], edi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B4D5E; /* 0x171B4CAB: jle 0x171b4d5e */
L_171B4CB1:
    ecx = esi + 0x150; /* 0x171B4CB1: lea ecx, [esi + 0x150] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B4CB7: mov dword ptr [ebp - 8], ecx */
    ebx = ebx; /* 0x171B4CBA: lea ebx, [ebx] */
L_171B4CC0:
    edx = MEM32(ebp + (-0x8)); /* 0x171B4CC0: mov edx, dword ptr [ebp - 8] */
    ecx = MEM32(edx); /* 0x171B4CC3: mov ecx, dword ptr [edx] */
    edi = MEM32(ecx + 0x8); /* 0x171B4CC5: mov edi, dword ptr [ecx + 8] */
    eax = MEM32(ecx + 0x24); /* 0x171B4CC8: mov eax, dword ptr [ecx + 0x24] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x171B4CCB: imul eax, edi */
    ebx = MEM32(ecx + 0xC); /* 0x171B4CCE: mov ebx, dword ptr [ecx + 0xc] */
    MEM32(ecx + 0x40) = eax; /* 0x171B4CD1: mov dword ptr [ecx + 0x40], eax */
    eax = MEM32(ecx + 0x1C); /* 0x171B4CD4: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B4CD7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x171B4CD9: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ecx + 0x38) = ebx; /* 0x171B4CDB: mov dword ptr [ecx + 0x38], ebx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi); /* 0x171B4CDE: imul ebx, edi */
    MEM32(ecx + 0x34) = edi; /* 0x171B4CE1: mov dword ptr [ecx + 0x34], edi */
    MEM32(ecx + 0x3C) = ebx; /* 0x171B4CE4: mov dword ptr [ecx + 0x3c], ebx */
    /* test edx, edx */ /* 0x171B4CE7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B4CED; /* 0x171B4CE9: jne 0x171b4ced */
L_171B4CEB:
    edx = edi; /* 0x171B4CEB: mov edx, edi */
L_171B4CED:
    eax = MEM32(ecx + 0x20); /* 0x171B4CED: mov eax, dword ptr [ecx + 0x20] */
    edi = MEM32(ecx + 0xC); /* 0x171B4CF0: mov edi, dword ptr [ecx + 0xc] */
    MEM32(ecx + 0x44) = edx; /* 0x171B4CF3: mov dword ptr [ecx + 0x44], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B4CF6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x171B4CF8: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x171B4CFA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B4D00; /* 0x171B4CFC: jne 0x171b4d00 */
L_171B4CFE:
    edx = edi; /* 0x171B4CFE: mov edx, edi */
L_171B4D00:
    MEM32(ecx + 0x48) = edx; /* 0x171B4D00: mov dword ptr [ecx + 0x48], edx */
    ecx = MEM32(esi + 0x168); /* 0x171B4D03: mov ecx, dword ptr [esi + 0x168] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x171B4D09: add ecx, ebx */
    _flag_k = FK_ADD;
    /* cmp ecx, 0xAu */ /* 0x171B4D0B: cmp ecx, 0xa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B4D1C; /* 0x171B4D0E: jle 0x171b4d1c */
L_171B4D10:
    eax = MEM32(esi); /* 0x171B4D10: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B4D12: push esi */
    MEM32(eax + 0x14) = 0xDu; /* 0x171B4D13: mov dword ptr [eax + 0x14], 0xd */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4D1A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B4D1C:
    /* test ebx, ebx */ /* 0x171B4D1C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B4D40; /* 0x171B4D1E: jle 0x171b4d40 */
L_171B4D20:
    edx = MEM32(esi + 0x168); /* 0x171B4D20: mov edx, dword ptr [esi + 0x168] */
    eax = MEM32(ebp + (-0x4)); /* 0x171B4D26: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + edx * 4 + 0x16C) = eax; /* 0x171B4D29: mov dword ptr [esi + edx*4 + 0x16c], eax */
    ecx = MEM32(esi + 0x168); /* 0x171B4D30: mov ecx, dword ptr [esi + 0x168] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B4D36: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B4D37: dec ebx */
    _flag_k = FK_DEC;
    MEM32(esi + 0x168) = ecx; /* 0x171B4D38: mov dword ptr [esi + 0x168], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B4D20; /* 0x171B4D3E: jne 0x171b4d20 */
L_171B4D40:
    eax = MEM32(ebp + (-0x4)); /* 0x171B4D40: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x171B4D43: mov edx, dword ptr [ebp - 8] */
    ecx = MEM32(esi + 0x14C); /* 0x171B4D46: mov ecx, dword ptr [esi + 0x14c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B4D4C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171B4D4D: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x171B4D50: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B4D52: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = edx; /* 0x171B4D55: mov dword ptr [ebp - 8], edx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B4CC0; /* 0x171B4D58: jl 0x171b4cc0 */
L_171B4D5E:
    edi = POP32_VAL(esp); /* 0x171B4D5E: pop edi */
    ebx = POP32_VAL(esp); /* 0x171B4D5F: pop ebx */
    esp = ebp; /* 0x171B4D60: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B4D62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B4D63: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B4D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B4D70u);

L_171B4D70:
    edi = edi; /* 0x171B4D70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B4D72: push ebp */
    ebp = esp; /* 0x171B4D73: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171B4D75: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x14C); /* 0x171B4D78: mov eax, dword ptr [ebx + 0x14c] */
    /* test eax, eax */ /* 0x171B4D7E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = 0; /* 0x171B4D80: mov dword ptr [ebp - 8], 0 */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B4E08; /* 0x171B4D87: jle 0x171b4e08 */
L_171B4D89:
    eax = ebx + 0x150; /* 0x171B4D89: lea eax, [ebx + 0x150] */
    PUSH32(esp, esi); /* 0x171B4D8F: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B4D90: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x171B4D93: push edi */
L_171B4D94:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B4D94: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ecx); /* 0x171B4D97: mov eax, dword ptr [ecx] */
    ecx = MEM32(eax + 0x4C); /* 0x171B4D99: mov ecx, dword ptr [eax + 0x4c] */
    /* test ecx, ecx */ /* 0x171B4D9C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x171B4D9E: mov dword ptr [ebp - 0xc], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B4DEC; /* 0x171B4DA1: jne 0x171b4dec */
L_171B4DA3:
    esi = MEM32(eax + 0x10); /* 0x171B4DA3: mov esi, dword ptr [eax + 0x10] */
    /* test esi, esi */ /* 0x171B4DA6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B4DBA; /* 0x171B4DA8: jl 0x171b4dba */
L_171B4DAA:
    /* cmp esi, 4 */ /* 0x171B4DAA: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B4DBA; /* 0x171B4DAD: jge 0x171b4dba */
L_171B4DAF:
    eax = MEM32(ebx + esi * 4 + 0xA8); /* 0x171B4DAF: mov eax, dword ptr [ebx + esi*4 + 0xa8] */
    /* test eax, eax */ /* 0x171B4DB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B4DC9; /* 0x171B4DB8: jne 0x171b4dc9 */
L_171B4DBA:
    eax = MEM32(ebx); /* 0x171B4DBA: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x34u; /* 0x171B4DBC: mov dword ptr [eax + 0x14], 0x34 */
    PUSH32(esp, ebx); /* 0x171B4DC3: push ebx */
    MEM32(eax + 0x18) = esi; /* 0x171B4DC4: mov dword ptr [eax + 0x18], esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4DC7: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B4DC9:
    edx = MEM32(ebx + 0x4); /* 0x171B4DC9: mov edx, dword ptr [ebx + 4] */
    PUSH32(esp, 0x84u); /* 0x171B4DCC: push 0x84 */
    PUSH32(esp, 1); /* 0x171B4DD1: push 1 */
    PUSH32(esp, ebx); /* 0x171B4DD3: push ebx */
    RECOMP_ICALL(MEM32(edx)); /* 0x171B4DD4: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx + esi * 4 + 0xA8); /* 0x171B4DD6: mov esi, dword ptr [ebx + esi*4 + 0xa8] */
    ecx = 0x21u; /* 0x171B4DDD: mov ecx, 0x21 */
    edi = eax; /* 0x171B4DE2: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171B4DE4: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0xC)); /* 0x171B4DE6: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ecx + 0x4C) = eax; /* 0x171B4DE9: mov dword ptr [ecx + 0x4c], eax */
L_171B4DEC:
    eax = MEM32(ebp + (-0x8)); /* 0x171B4DEC: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x171B4DEF: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebx + 0x14C); /* 0x171B4DF2: mov ecx, dword ptr [ebx + 0x14c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B4DF8: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171B4DF9: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x171B4DFC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x171B4DFE: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = edx; /* 0x171B4E01: mov dword ptr [ebp - 4], edx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B4D94; /* 0x171B4E04: jl 0x171b4d94 */
L_171B4E06:
    edi = POP32_VAL(esp); /* 0x171B4E06: pop edi */
    esi = POP32_VAL(esp); /* 0x171B4E07: pop esi */
L_171B4E08:
    esp = ebp; /* 0x171B4E08: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B4E0A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B4E0B: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B4E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B4E20u);

L_171B4E20:
    edi = edi; /* 0x171B4E20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B4E22: push ebp */
    ebp = esp; /* 0x171B4E23: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B4E25: push ebx */
    PUSH32(esp, esi); /* 0x171B4E26: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B4E27: mov esi, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171B4BE0); /* 0x171B4E2A: call 0x171b4be0 */
    RECOMP_FLAGS_IN();
    ebx = esi; /* 0x171B4E2F: mov ebx, esi */
    RECOMP_CALL(sub_171B4D70); /* 0x171B4E31: call 0x171b4d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1C0); /* 0x171B4E36: mov eax, dword ptr [esi + 0x1c0] */
    PUSH32(esp, esi); /* 0x171B4E3C: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4E3D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1B0); /* 0x171B4E3F: mov ecx, dword ptr [esi + 0x1b0] */
    PUSH32(esp, esi); /* 0x171B4E45: push esi */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171B4E46: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x1B0); /* 0x171B4E48: mov edx, dword ptr [esi + 0x1b0] */
    eax = MEM32(esi + 0x1B8); /* 0x171B4E4E: mov eax, dword ptr [esi + 0x1b8] */
    ecx = MEM32(edx + 0x4); /* 0x171B4E54: mov ecx, dword ptr [edx + 4] */
    esi = POP32_VAL(esp); /* 0x171B4E57: pop esi */
    MEM32(eax) = ecx; /* 0x171B4E58: mov dword ptr [eax], ecx */
    ebx = POP32_VAL(esp); /* 0x171B4E5A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B4E5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B4E5C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B4E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B4E70u);

L_171B4E70:
    edi = edi; /* 0x171B4E70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B4E72: push ebp */
    ebp = esp; /* 0x171B4E73: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B4E75: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B4E76: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171B4E79: push edi */
    edi = MEM32(esi + 0x1B8); /* 0x171B4E7A: mov edi, dword ptr [esi + 0x1b8] */
    eax = MEM32(edi + 0x14); /* 0x171B4E80: mov eax, dword ptr [edi + 0x14] */
    /* test eax, eax */ /* 0x171B4E83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B4E92; /* 0x171B4E85: je 0x171b4e92 */
L_171B4E87:
    edi = POP32_VAL(esp); /* 0x171B4E87: pop edi */
    eax = 2; /* 0x171B4E88: mov eax, 2 */
    esi = POP32_VAL(esp); /* 0x171B4E8D: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B4E8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B4E8F: ret 4 */
L_171B4E92:
    eax = MEM32(esi + 0x1BC); /* 0x171B4E92: mov eax, dword ptr [esi + 0x1bc] */
    PUSH32(esp, ebx); /* 0x171B4E98: push ebx */
    PUSH32(esp, esi); /* 0x171B4E99: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B4E9A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171B4E9D: mov ebx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B4E9F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B4EF6; /* 0x171B4EA0: je 0x171b4ef6 */
L_171B4EA2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B4EA2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B4F2B; /* 0x171B4EA3: jne 0x171b4f2b */
L_171B4EA9:
    eax = MEM32(edi + 0x18); /* 0x171B4EA9: mov eax, dword ptr [edi + 0x18] */
    /* test eax, eax */ /* 0x171B4EAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x14) = 1; /* 0x171B4EAE: mov dword ptr [edi + 0x14], 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B4ED9; /* 0x171B4EB5: je 0x171b4ed9 */
L_171B4EB7:
    ecx = MEM32(esi + 0x1BC); /* 0x171B4EB7: mov ecx, dword ptr [esi + 0x1bc] */
    eax = MEM32(ecx + 0x10); /* 0x171B4EBD: mov eax, dword ptr [ecx + 0x10] */
    /* test eax, eax */ /* 0x171B4EC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B4F2B; /* 0x171B4EC2: je 0x171b4f2b */
L_171B4EC4:
    eax = MEM32(esi); /* 0x171B4EC4: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B4EC6: push esi */
    MEM32(eax + 0x14) = 0x3Bu; /* 0x171B4EC7: mov dword ptr [eax + 0x14], 0x3b */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4ECE: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x171B4ED0: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x171B4ED2: pop ebx */
    edi = POP32_VAL(esp); /* 0x171B4ED3: pop edi */
    esi = POP32_VAL(esp); /* 0x171B4ED4: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B4ED5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B4ED6: ret 4 */
L_171B4ED9:
    eax = MEM32(esi + 0x94); /* 0x171B4ED9: mov eax, dword ptr [esi + 0x94] */
    /* cmp MEM32(esi + 0x9C), eax */ /* 0x171B4EDF: cmp dword ptr [esi + 0x9c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x9C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B4F2B; /* 0x171B4EE5: jle 0x171b4f2b */
L_171B4EE7:
    MEM32(esi + 0x9C) = eax; /* 0x171B4EE7: mov dword ptr [esi + 0x9c], eax */
    eax = ebx; /* 0x171B4EED: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x171B4EEF: pop ebx */
    edi = POP32_VAL(esp); /* 0x171B4EF0: pop edi */
    esi = POP32_VAL(esp); /* 0x171B4EF1: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B4EF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B4EF3: ret 4 */
L_171B4EF6:
    eax = MEM32(edi + 0x18); /* 0x171B4EF6: mov eax, dword ptr [edi + 0x18] */
    /* test eax, eax */ /* 0x171B4EF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B4F12; /* 0x171B4EFB: je 0x171b4f12 */
L_171B4EFD:
    RECOMP_CALL(sub_171B4A00); /* 0x171B4EFD: call 0x171b4a00 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x171B4F02: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x171B4F04: pop ebx */
    MEM32(edi + 0x18) = 0; /* 0x171B4F05: mov dword ptr [edi + 0x18], 0 */
    edi = POP32_VAL(esp); /* 0x171B4F0C: pop edi */
    esi = POP32_VAL(esp); /* 0x171B4F0D: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B4F0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B4F0F: ret 4 */
L_171B4F12:
    eax = MEM32(edi + 0x10); /* 0x171B4F12: mov eax, dword ptr [edi + 0x10] */
    /* test eax, eax */ /* 0x171B4F15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B4F25; /* 0x171B4F17: jne 0x171b4f25 */
L_171B4F19:
    eax = MEM32(esi); /* 0x171B4F19: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B4F1B: push esi */
    MEM32(eax + 0x14) = 0x23u; /* 0x171B4F1C: mov dword ptr [eax + 0x14], 0x23 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4F23: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B4F25:
    PUSH32(esp, esi); /* 0x171B4F25: push esi */
    RECOMP_CALL(sub_171B4E20); /* 0x171B4F26: call 0x171b4e20 */
    RECOMP_FLAGS_IN();
L_171B4F2B:
    eax = ebx; /* 0x171B4F2B: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x171B4F2D: pop ebx */
    edi = POP32_VAL(esp); /* 0x171B4F2E: pop edi */
    esi = POP32_VAL(esp); /* 0x171B4F2F: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B4F30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B4F31: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B4F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B4F40u);

L_171B4F40:
    edi = edi; /* 0x171B4F40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B4F42: push ebp */
    ebp = esp; /* 0x171B4F43: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B4F45: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B4F46: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x1B8); /* 0x171B4F49: mov eax, dword ptr [esi + 0x1b8] */
    MEM32(eax) = 0x171B4E70u; /* 0x171B4F4F: mov dword ptr [eax], 0x171b4e70 */
    MEM32(eax + 0x10) = 0; /* 0x171B4F55: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x171B4F5C: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 1; /* 0x171B4F63: mov dword ptr [eax + 0x18], 1 */
    eax = MEM32(esi); /* 0x171B4F6A: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B4F6C: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171B4F6D: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1BC); /* 0x171B4F70: mov ecx, dword ptr [esi + 0x1bc] */
    PUSH32(esp, esi); /* 0x171B4F76: push esi */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171B4F77: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xA4) = 0; /* 0x171B4F79: mov dword ptr [esi + 0xa4], 0 */
    esi = POP32_VAL(esp); /* 0x171B4F83: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B4F84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B4F85: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B4F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B4F90u);

L_171B4F90:
    edi = edi; /* 0x171B4F90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B4F92: push ebp */
    ebp = esp; /* 0x171B4F93: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171B4F95: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x1B8); /* 0x171B4F98: mov ecx, dword ptr [eax + 0x1b8] */
    MEM32(ecx) = 0x171B4E70u; /* 0x171B4F9E: mov dword ptr [ecx], 0x171b4e70 */
    ebp = POP32_VAL(esp); /* 0x171B4FA4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B4FA5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B4FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B4FB0u);

L_171B4FB0:
    edi = edi; /* 0x171B4FB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B4FB2: push ebp */
    ebp = esp; /* 0x171B4FB3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B4FB5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B4FB6: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171B4FB9: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 0x1Cu); /* 0x171B4FBC: push 0x1c */
    PUSH32(esp, 0); /* 0x171B4FBE: push 0 */
    PUSH32(esp, esi); /* 0x171B4FC0: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B4FC1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1B8) = eax; /* 0x171B4FC3: mov dword ptr [esi + 0x1b8], eax */
    MEM32(eax) = 0x171B4E70u; /* 0x171B4FC9: mov dword ptr [eax], 0x171b4e70 */
    MEM32(eax + 0x4) = 0x171B4F40u; /* 0x171B4FCF: mov dword ptr [eax + 4], 0x171b4f40 */
    MEM32(eax + 0x8) = 0x171B4E20u; /* 0x171B4FD6: mov dword ptr [eax + 8], 0x171b4e20 */
    MEM32(eax + 0xC) = 0x171B4F90u; /* 0x171B4FDD: mov dword ptr [eax + 0xc], 0x171b4f90 */
    MEM32(eax + 0x10) = 0; /* 0x171B4FE4: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x171B4FEB: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 1; /* 0x171B4FF2: mov dword ptr [eax + 0x18], 1 */
    esi = POP32_VAL(esp); /* 0x171B4FF9: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B4FFA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B4FFB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B5010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5010u);

L_171B5010:
    edi = edi; /* 0x171B5010: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5012: push ebp */
    ebp = esp; /* 0x171B5013: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B5015: push ecx */
    PUSH32(esp, ebx); /* 0x171B5016: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x171B5017: mov ebx, dword ptr [ebp + 0x10] */
    /* cmp ebx, 0x3B9AC9F0u */ /* 0x171B501A: cmp ebx, 0x3b9ac9f0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3B9AC9F0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171B5020: push esi */
    PUSH32(esp, edi); /* 0x171B5021: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171B5022: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x4); /* 0x171B5025: mov eax, dword ptr [edi + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B5028: mov dword ptr [ebp - 4], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B5040; /* 0x171B502B: jbe 0x171b5040 */
L_171B502D:
    eax = MEM32(edi); /* 0x171B502D: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0x36u; /* 0x171B502F: mov dword ptr [eax + 0x14], 0x36 */
    PUSH32(esp, edi); /* 0x171B5036: push edi */
    MEM32(eax + 0x18) = 1; /* 0x171B5037: mov dword ptr [eax + 0x18], 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B503E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5040:
    eax = ebx; /* 0x171B5040: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x171B5042: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B5053; /* 0x171B5045: jbe 0x171b5053 */
L_171B5047:
    ecx = 8; /* 0x171B5047: mov ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171B504C: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171B504E: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = ebx; /* 0x171B5050: mov dword ptr [ebp + 0x10], ebx */
L_171B5053:
    esi = MEM32(ebp + 0xC); /* 0x171B5053: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x171B5056: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B505F; /* 0x171B5058: jl 0x171b505f */
L_171B505A:
    /* cmp esi, 2 */ /* 0x171B505A: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B506E; /* 0x171B505D: jl 0x171b506e */
L_171B505F:
    eax = MEM32(edi); /* 0x171B505F: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0xEu; /* 0x171B5061: mov dword ptr [eax + 0x14], 0xe */
    PUSH32(esp, edi); /* 0x171B5068: push edi */
    MEM32(eax + 0x18) = esi; /* 0x171B5069: mov dword ptr [eax + 0x18], esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B506C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B506E:
    edx = MEM32(ebp + (-0x4)); /* 0x171B506E: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(edx + esi * 4 + 0x34); /* 0x171B5071: mov eax, dword ptr [edx + esi*4 + 0x34] */
    /* test eax, eax */ /* 0x171B5075: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = 0; /* 0x171B5077: mov dword ptr [ebp + 8], 0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B5092; /* 0x171B507E: je 0x171b5092 */
L_171B5080:
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x171B5080: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B5127; /* 0x171B5083: jae 0x171b5127 */
L_171B5089:
    MEM32(ebp + 0x8) = eax; /* 0x171B5089: mov dword ptr [ebp + 8], eax */
    eax = MEM32(eax); /* 0x171B508C: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x171B508E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5080; /* 0x171B5090: jne 0x171b5080 */
L_171B5092:
    eax = MEM32(ebp + 0x8); /* 0x171B5092: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x171B5095: add ebx, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x171B5098: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B50A5; /* 0x171B509A: jne 0x171b50a5 */
L_171B509C:
    esi = MEM32(esi * 4 + 0x17025778); /* 0x171B509C: mov esi, dword ptr [esi*4 + 0x17025778] */
    goto L_171B50AC; /* 0x171B50A3: jmp 0x171b50ac */
L_171B50A5:
    esi = MEM32(esi * 4 + 0x17025780); /* 0x171B50A5: mov esi, dword ptr [esi*4 + 0x17025780] */
L_171B50AC:
    eax = 0x3B9ACA00u; /* 0x171B50AC: mov eax, 0x3b9aca00 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x171B50B1: sub eax, ebx */
    _flag_k = FK_CMP;
    /* cmp esi, eax */ /* 0x171B50B3: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B50B9; /* 0x171B50B5: jbe 0x171b50b9 */
L_171B50B7:
    esi = eax; /* 0x171B50B7: mov esi, eax */
L_171B50B9:
    eax = esi + ebx; /* 0x171B50B9: lea eax, [esi + ebx] */
    PUSH32(esp, eax); /* 0x171B50BC: push eax */
    PUSH32(esp, edi); /* 0x171B50BD: push edi */
    RECOMP_CALL(sub_171BCFC0); /* 0x171B50BE: call 0x171bcfc0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B50C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B50EF; /* 0x171B50C5: jne 0x171b50ef */
L_171B50C7:
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x171B50C7: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x171B50C7: shr esi, 1 */
    /* cmp esi, 0x32u */ /* 0x171B50C9: cmp esi, 0x32 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B50E1; /* 0x171B50CC: jae 0x171b50e1 */
L_171B50CE:
    eax = MEM32(edi); /* 0x171B50CE: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0x36u; /* 0x171B50D0: mov dword ptr [eax + 0x14], 0x36 */
    PUSH32(esp, edi); /* 0x171B50D7: push edi */
    MEM32(eax + 0x18) = 2; /* 0x171B50D8: mov dword ptr [eax + 0x18], 2 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B50DF: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B50E1:
    ecx = esi + ebx; /* 0x171B50E1: lea ecx, [esi + ebx] */
    PUSH32(esp, ecx); /* 0x171B50E4: push ecx */
    PUSH32(esp, edi); /* 0x171B50E5: push edi */
    RECOMP_CALL(sub_171BCFC0); /* 0x171B50E6: call 0x171bcfc0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B50EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B50C7; /* 0x171B50ED: je 0x171b50c7 */
L_171B50EF:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B50EF: mov ecx, dword ptr [ebp - 4] */
    edi = MEM32(ecx + 0x4C); /* 0x171B50F2: mov edi, dword ptr [ecx + 0x4c] */
    edx = esi + ebx; /* 0x171B50F5: lea edx, [esi + ebx] */
    ebx = MEM32(ebp + 0x10); /* 0x171B50F8: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x171B50FB: add edi, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x10); /* 0x171B50FD: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x171B5100: add esi, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x8); /* 0x171B5102: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x171B5105: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x4C) = edi; /* 0x171B5107: mov dword ptr [ecx + 0x4c], edi */
    MEM32(eax) = 0; /* 0x171B510A: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x171B5110: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = esi; /* 0x171B5117: mov dword ptr [eax + 8], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5125; /* 0x171B511A: jne 0x171b5125 */
L_171B511C:
    edx = MEM32(ebp + 0xC); /* 0x171B511C: mov edx, dword ptr [ebp + 0xc] */
    MEM32(ecx + edx * 4 + 0x34) = eax; /* 0x171B511F: mov dword ptr [ecx + edx*4 + 0x34], eax */
    goto L_171B5127; /* 0x171B5123: jmp 0x171b5127 */
L_171B5125:
    MEM32(edx) = eax; /* 0x171B5125: mov dword ptr [edx], eax */
L_171B5127:
    ecx = MEM32(eax + 0x4); /* 0x171B5127: mov ecx, dword ptr [eax + 4] */
    edx = ecx + eax + 0x10; /* 0x171B512A: lea edx, [ecx + eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x171B512E: add ecx, ebx */
    _flag_k = FK_ADD;
    MEM32(eax + 0x4) = ecx; /* 0x171B5130: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(eax + 0x8); /* 0x171B5133: mov ecx, dword ptr [eax + 8] */
    edi = POP32_VAL(esp); /* 0x171B5136: pop edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171B5137: sub ecx, ebx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x171B5139: pop esi */
    MEM32(eax + 0x8) = ecx; /* 0x171B513A: mov dword ptr [eax + 8], ecx */
    eax = edx; /* 0x171B513D: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x171B513F: pop ebx */
    esp = ebp; /* 0x171B5140: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B5142: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171B5143: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171B5150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5150u);

L_171B5150:
    edi = edi; /* 0x171B5150: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5152: push ebp */
    ebp = esp; /* 0x171B5153: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B5155: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x171B5156: mov ebx, dword ptr [ebp + 0x10] */
    /* cmp ebx, 0x3B9AC9F0u */ /* 0x171B5159: cmp ebx, 0x3b9ac9f0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3B9AC9F0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171B515F: push esi */
    PUSH32(esp, edi); /* 0x171B5160: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171B5161: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x4); /* 0x171B5164: mov eax, dword ptr [edi + 4] */
    MEM32(ebp + 0x8) = eax; /* 0x171B5167: mov dword ptr [ebp + 8], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B517F; /* 0x171B516A: jbe 0x171b517f */
L_171B516C:
    eax = MEM32(edi); /* 0x171B516C: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0x36u; /* 0x171B516E: mov dword ptr [eax + 0x14], 0x36 */
    PUSH32(esp, edi); /* 0x171B5175: push edi */
    MEM32(eax + 0x18) = 3; /* 0x171B5176: mov dword ptr [eax + 0x18], 3 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B517D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B517F:
    eax = ebx; /* 0x171B517F: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x171B5181: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B518F; /* 0x171B5184: jbe 0x171b518f */
L_171B5186:
    ecx = 8; /* 0x171B5186: mov ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171B518B: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171B518D: add ebx, ecx */
    _flag_k = FK_ADD;
L_171B518F:
    ecx = MEM32(ebp + 0xC); /* 0x171B518F: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x171B5192: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B519B; /* 0x171B5194: jl 0x171b519b */
L_171B5196:
    /* cmp ecx, 2 */ /* 0x171B5196: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B51AA; /* 0x171B5199: jl 0x171b51aa */
L_171B519B:
    eax = MEM32(edi); /* 0x171B519B: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0xEu; /* 0x171B519D: mov dword ptr [eax + 0x14], 0xe */
    PUSH32(esp, edi); /* 0x171B51A4: push edi */
    MEM32(eax + 0x18) = ecx; /* 0x171B51A5: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B51A8: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B51AA:
    edx = ebx + 0x10; /* 0x171B51AA: lea edx, [ebx + 0x10] */
    PUSH32(esp, edx); /* 0x171B51AD: push edx */
    PUSH32(esp, edi); /* 0x171B51AE: push edi */
    RECOMP_CALL(sub_171BCFC0); /* 0x171B51AF: call 0x171bcfc0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171B51B4: mov esi, eax */
    /* test esi, esi */ /* 0x171B51B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B51CD; /* 0x171B51B8: jne 0x171b51cd */
L_171B51BA:
    eax = MEM32(edi); /* 0x171B51BA: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0x36u; /* 0x171B51BC: mov dword ptr [eax + 0x14], 0x36 */
    PUSH32(esp, edi); /* 0x171B51C3: push edi */
    MEM32(eax + 0x18) = 4; /* 0x171B51C4: mov dword ptr [eax + 0x18], 4 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B51CB: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B51CD:
    eax = MEM32(ebp + 0x8); /* 0x171B51CD: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x4C); /* 0x171B51D0: mov edx, dword ptr [eax + 0x4c] */
    ecx = ebx + 0x10; /* 0x171B51D3: lea ecx, [ebx + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x171B51D6: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x171B51D8: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x4C) = edx; /* 0x171B51DB: mov dword ptr [eax + 0x4c], edx */
    edx = MEM32(eax + ecx * 4 + 0x3C); /* 0x171B51DE: mov edx, dword ptr [eax + ecx*4 + 0x3c] */
    MEM32(eax + ecx * 4 + 0x3C) = esi; /* 0x171B51E2: mov dword ptr [eax + ecx*4 + 0x3c], esi */
    edi = POP32_VAL(esp); /* 0x171B51E6: pop edi */
    MEM32(esi + 0x4) = ebx; /* 0x171B51E7: mov dword ptr [esi + 4], ebx */
    MEM32(esi) = edx; /* 0x171B51EA: mov dword ptr [esi], edx */
    MEM32(esi + 0x8) = 0; /* 0x171B51EC: mov dword ptr [esi + 8], 0 */
    eax = esi + 0x10; /* 0x171B51F3: lea eax, [esi + 0x10] */
    esi = POP32_VAL(esp); /* 0x171B51F6: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B51F7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B51F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171B51F9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171B5210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5210u);

L_171B5210:
    edi = edi; /* 0x171B5210: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5212: push ebp */
    ebp = esp; /* 0x171B5213: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B5215: push ecx */
    PUSH32(esp, ebx); /* 0x171B5216: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x171B5217: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x171B521A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B521B: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171B521E: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B5221: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B5224: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x3B9AC9F0u; /* 0x171B5226: mov eax, 0x3b9ac9f0 */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x171B522B: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, edi); /* 0x171B522D: push edi */
    edi = eax; /* 0x171B522E: mov edi, eax */
    /* test edi, edi */ /* 0x171B5230: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171B5240; /* 0x171B5232: jg 0x171b5240 */
L_171B5234:
    eax = MEM32(esi); /* 0x171B5234: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B5236: push esi */
    MEM32(eax + 0x14) = 0x46u; /* 0x171B5237: mov dword ptr [eax + 0x14], 0x46 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B523E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5240:
    eax = MEM32(ebp + 0x14); /* 0x171B5240: mov eax, dword ptr [ebp + 0x14] */
    /* cmp edi, eax */ /* 0x171B5243: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B5249; /* 0x171B5245: jl 0x171b5249 */
L_171B5247:
    edi = eax; /* 0x171B5247: mov edi, eax */
L_171B5249:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B5249: mov ecx, dword ptr [ebp - 4] */
    edx = eax * 4; /* 0x171B524C: lea edx, [eax*4] */
    eax = MEM32(ebp + 0xC); /* 0x171B5253: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x171B5256: push edx */
    PUSH32(esp, eax); /* 0x171B5257: push eax */
    PUSH32(esp, esi); /* 0x171B5258: push esi */
    MEM32(ecx + 0x50) = edi; /* 0x171B5259: mov dword ptr [ecx + 0x50], edi */
    RECOMP_CALL(sub_171B5010); /* 0x171B525C: call 0x171b5010 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x171B5261: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171B5264: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171B5266: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x171B5268: mov dword ptr [ebp + 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B52A8; /* 0x171B526B: jbe 0x171b52a8 */
L_171B526D:
    ecx = ecx; /* 0x171B526D: lea ecx, [ecx] */
L_171B5270:
    eax = MEM32(ebp + 0x14); /* 0x171B5270: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171B5273: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp edi, eax */ /* 0x171B5275: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171B527B; /* 0x171B5277: jb 0x171b527b */
L_171B5279:
    edi = eax; /* 0x171B5279: mov edi, eax */
L_171B527B:
    edx = MEM32(ebp + 0xC); /* 0x171B527B: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x171B527E: mov eax, dword ptr [ebp + 8] */
    ecx = edi; /* 0x171B5281: mov ecx, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x171B5283: imul ecx, ebx */
    PUSH32(esp, ecx); /* 0x171B5286: push ecx */
    PUSH32(esp, edx); /* 0x171B5287: push edx */
    PUSH32(esp, eax); /* 0x171B5288: push eax */
    RECOMP_CALL(sub_171B5150); /* 0x171B5289: call 0x171b5150 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x171B528E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B52A0; /* 0x171B5290: jbe 0x171b52a0 */
L_171B5292:
    ecx = edi; /* 0x171B5292: mov ecx, edi */
L_171B5294:
    edx = MEM32(ebp + 0x10); /* 0x171B5294: mov edx, dword ptr [ebp + 0x10] */
    MEM32(edx + esi * 4) = eax; /* 0x171B5297: mov dword ptr [edx + esi*4], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B529A: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171B529B: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B529D: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B5294; /* 0x171B529E: jne 0x171b5294 */
L_171B52A0:
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x171B52A0: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B5270; /* 0x171B52A3: jb 0x171b5270 */
L_171B52A5:
    eax = MEM32(ebp + 0x10); /* 0x171B52A5: mov eax, dword ptr [ebp + 0x10] */
L_171B52A8:
    edi = POP32_VAL(esp); /* 0x171B52A8: pop edi */
    esi = POP32_VAL(esp); /* 0x171B52A9: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B52AA: pop ebx */
    esp = ebp; /* 0x171B52AB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B52AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171B52AE: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171B52C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B52C0u);

L_171B52C0:
    edi = edi; /* 0x171B52C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B52C2: push ebp */
    ebp = esp; /* 0x171B52C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B52C5: push ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171B52C6: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x171B52C9: push ebx */
    PUSH32(esp, esi); /* 0x171B52CA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B52CB: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171B52CE: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B52D1: mov dword ptr [ebp - 4], eax */
    ebx = ecx; /* 0x171B52D4: mov ebx, ecx */
    if (7u) _cf = (((ebx) >> 25) & 1u); /* 0x171B52D6: shl ebx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ebx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 7u; /* 0x171B52D6: shl ebx, 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B52D9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x3B9AC9F0u; /* 0x171B52DB: mov eax, 0x3b9ac9f0 */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x171B52E0: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, edi); /* 0x171B52E2: push edi */
    edi = eax; /* 0x171B52E3: mov edi, eax */
    /* test edi, edi */ /* 0x171B52E5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B52F1; /* 0x171B52E7: jle 0x171b52f1 */
L_171B52E9:
    /* cmp ecx, 0x01FFFFFFu */ /* 0x171B52E9: cmp ecx, 0x1ffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x01FFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B52FD; /* 0x171B52EF: jbe 0x171b52fd */
L_171B52F1:
    eax = MEM32(esi); /* 0x171B52F1: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B52F3: push esi */
    MEM32(eax + 0x14) = 0x46u; /* 0x171B52F4: mov dword ptr [eax + 0x14], 0x46 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B52FB: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B52FD:
    ecx = MEM32(ebp + 0x14); /* 0x171B52FD: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp edi, ecx */ /* 0x171B5300: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B5306; /* 0x171B5302: jl 0x171b5306 */
L_171B5304:
    edi = ecx; /* 0x171B5304: mov edi, ecx */
L_171B5306:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171B5306: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B5309: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x171B530B: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp edi, eax */ /* 0x171B530D: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B5320; /* 0x171B530F: jbe 0x171b5320 */
L_171B5311:
    eax = MEM32(esi); /* 0x171B5311: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B5313: push esi */
    MEM32(eax + 0x14) = 0x46u; /* 0x171B5314: mov dword ptr [eax + 0x14], 0x46 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B531B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x171B531D: mov ecx, dword ptr [ebp + 0x14] */
L_171B5320:
    edx = MEM32(ebp + (-0x4)); /* 0x171B5320: mov edx, dword ptr [ebp - 4] */
    eax = ecx * 4; /* 0x171B5323: lea eax, [ecx*4] */
    ecx = MEM32(ebp + 0xC); /* 0x171B532A: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171B532D: push eax */
    PUSH32(esp, ecx); /* 0x171B532E: push ecx */
    PUSH32(esp, esi); /* 0x171B532F: push esi */
    MEM32(edx + 0x50) = edi; /* 0x171B5330: mov dword ptr [edx + 0x50], edi */
    RECOMP_CALL(sub_171B5010); /* 0x171B5333: call 0x171b5010 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x171B5338: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171B533B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171B533D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B533F: mov dword ptr [ebp - 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B5384; /* 0x171B5342: jbe 0x171b5384 */
L_171B5344:
    eax = MEM32(ebp + 0x14); /* 0x171B5344: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171B5347: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp edi, eax */ /* 0x171B5349: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171B534F; /* 0x171B534B: jb 0x171b534f */
L_171B534D:
    edi = eax; /* 0x171B534D: mov edi, eax */
L_171B534F:
    eax = MEM32(ebp + 0xC); /* 0x171B534F: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x171B5352: mov ecx, dword ptr [ebp + 8] */
    edx = edi; /* 0x171B5355: mov edx, edi */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x10)); /* 0x171B5357: imul edx, dword ptr [ebp + 0x10] */
    if (7u) _cf = (((edx) >> 25) & 1u); /* 0x171B535B: shl edx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((edx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 7u; /* 0x171B535B: shl edx, 7 */
    PUSH32(esp, edx); /* 0x171B535E: push edx */
    PUSH32(esp, eax); /* 0x171B535F: push eax */
    PUSH32(esp, ecx); /* 0x171B5360: push ecx */
    RECOMP_CALL(sub_171B5150); /* 0x171B5361: call 0x171b5150 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x171B5366: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B537C; /* 0x171B5368: jbe 0x171b537c */
L_171B536A:
    ecx = edi; /* 0x171B536A: mov ecx, edi */
    esp = esp; /* 0x171B536C: lea esp, [esp] */
L_171B5370:
    edx = MEM32(ebp + (-0x4)); /* 0x171B5370: mov edx, dword ptr [ebp - 4] */
    MEM32(edx + esi * 4) = eax; /* 0x171B5373: mov dword ptr [edx + esi*4], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B5376: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171B5377: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B5379: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B5370; /* 0x171B537A: jne 0x171b5370 */
L_171B537C:
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x171B537C: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B5344; /* 0x171B537F: jb 0x171b5344 */
L_171B5381:
    eax = MEM32(ebp + (-0x4)); /* 0x171B5381: mov eax, dword ptr [ebp - 4] */
L_171B5384:
    edi = POP32_VAL(esp); /* 0x171B5384: pop edi */
    esi = POP32_VAL(esp); /* 0x171B5385: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B5386: pop ebx */
    esp = ebp; /* 0x171B5387: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B5389: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171B538A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171B53A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B53A0u);

L_171B53A0:
    edi = edi; /* 0x171B53A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B53A2: push ebp */
    ebp = esp; /* 0x171B53A3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B53A5: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171B53A6: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp ebx, 1 */ /* 0x171B53A9: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171B53AC: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B53AD: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171B53B0: push edi */
    edi = MEM32(esi + 0x4); /* 0x171B53B1: mov edi, dword ptr [esi + 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B53C5; /* 0x171B53B4: je 0x171b53c5 */
L_171B53B6:
    eax = MEM32(esi); /* 0x171B53B6: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xEu; /* 0x171B53B8: mov dword ptr [eax + 0x14], 0xe */
    PUSH32(esp, esi); /* 0x171B53BF: push esi */
    MEM32(eax + 0x18) = ebx; /* 0x171B53C0: mov dword ptr [eax + 0x18], ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B53C3: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B53C5:
    PUSH32(esp, 0x248u); /* 0x171B53C5: push 0x248 */
    PUSH32(esp, ebx); /* 0x171B53CA: push ebx */
    PUSH32(esp, esi); /* 0x171B53CB: push esi */
    RECOMP_CALL(sub_171B5010); /* 0x171B53CC: call 0x171b5010 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x18); /* 0x171B53D1: mov ecx, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x14); /* 0x171B53D4: mov edx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x4) = ecx; /* 0x171B53D7: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x171B53DA: mov ecx, dword ptr [ebp + 0x1c] */
    MEM32(eax + 0xC) = ecx; /* 0x171B53DD: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(edi + 0x44); /* 0x171B53E0: mov ecx, dword ptr [edi + 0x44] */
    MEM32(edi + 0x44) = eax; /* 0x171B53E3: mov dword ptr [edi + 0x44], eax */
    edi = POP32_VAL(esp); /* 0x171B53E6: pop edi */
    MEM32(eax + 0x8) = edx; /* 0x171B53E7: mov dword ptr [eax + 8], edx */
    edx = MEM32(ebp + 0x10); /* 0x171B53EA: mov edx, dword ptr [ebp + 0x10] */
    esi = POP32_VAL(esp); /* 0x171B53ED: pop esi */
    MEM32(eax) = 0; /* 0x171B53EE: mov dword ptr [eax], 0 */
    MEM32(eax + 0x20) = edx; /* 0x171B53F4: mov dword ptr [eax + 0x20], edx */
    MEM32(eax + 0x28) = 0; /* 0x171B53F7: mov dword ptr [eax + 0x28], 0 */
    MEM32(eax + 0x2C) = ecx; /* 0x171B53FE: mov dword ptr [eax + 0x2c], ecx */
    ebx = POP32_VAL(esp); /* 0x171B5401: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B5402: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x171B5403: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_171B5410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5410u);

L_171B5410:
    edi = edi; /* 0x171B5410: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5412: push ebp */
    ebp = esp; /* 0x171B5413: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B5415: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171B5416: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp ebx, 1 */ /* 0x171B5419: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171B541C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B541D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171B5420: push edi */
    edi = MEM32(esi + 0x4); /* 0x171B5421: mov edi, dword ptr [esi + 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B5435; /* 0x171B5424: je 0x171b5435 */
L_171B5426:
    eax = MEM32(esi); /* 0x171B5426: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xEu; /* 0x171B5428: mov dword ptr [eax + 0x14], 0xe */
    PUSH32(esp, esi); /* 0x171B542F: push esi */
    MEM32(eax + 0x18) = ebx; /* 0x171B5430: mov dword ptr [eax + 0x18], ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B5433: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5435:
    PUSH32(esp, 0x248u); /* 0x171B5435: push 0x248 */
    PUSH32(esp, ebx); /* 0x171B543A: push ebx */
    PUSH32(esp, esi); /* 0x171B543B: push esi */
    RECOMP_CALL(sub_171B5010); /* 0x171B543C: call 0x171b5010 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x18); /* 0x171B5441: mov ecx, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x14); /* 0x171B5444: mov edx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x4) = ecx; /* 0x171B5447: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x171B544A: mov ecx, dword ptr [ebp + 0x1c] */
    MEM32(eax + 0xC) = ecx; /* 0x171B544D: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(edi + 0x48); /* 0x171B5450: mov ecx, dword ptr [edi + 0x48] */
    MEM32(edi + 0x48) = eax; /* 0x171B5453: mov dword ptr [edi + 0x48], eax */
    edi = POP32_VAL(esp); /* 0x171B5456: pop edi */
    MEM32(eax + 0x8) = edx; /* 0x171B5457: mov dword ptr [eax + 8], edx */
    edx = MEM32(ebp + 0x10); /* 0x171B545A: mov edx, dword ptr [ebp + 0x10] */
    esi = POP32_VAL(esp); /* 0x171B545D: pop esi */
    MEM32(eax) = 0; /* 0x171B545E: mov dword ptr [eax], 0 */
    MEM32(eax + 0x20) = edx; /* 0x171B5464: mov dword ptr [eax + 0x20], edx */
    MEM32(eax + 0x28) = 0; /* 0x171B5467: mov dword ptr [eax + 0x28], 0 */
    MEM32(eax + 0x2C) = ecx; /* 0x171B546E: mov dword ptr [eax + 0x2c], ecx */
    ebx = POP32_VAL(esp); /* 0x171B5471: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B5472: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x171B5473: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_171B5480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5480u);

L_171B5480:
    edi = edi; /* 0x171B5480: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5482: push ebp */
    ebp = esp; /* 0x171B5483: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B5485: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x171B5486: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171B5489: push ebx */
    PUSH32(esp, esi); /* 0x171B548A: push esi */
    PUSH32(esp, edi); /* 0x171B548B: push edi */
    edi = MEM32(eax + 0x4); /* 0x171B548C: mov edi, dword ptr [eax + 4] */
    eax = MEM32(edi + 0x44); /* 0x171B548F: mov eax, dword ptr [edi + 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171B5492: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B5494: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171B5496: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x171B5498: mov dword ptr [ebp - 4], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B54BF; /* 0x171B549B: je 0x171b54bf */
L_171B549D:
    ecx = ecx; /* 0x171B549D: lea ecx, [ecx] */
L_171B54A0:
    /* cmp MEM32(eax), 0 */ /* 0x171B54A0: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B54B8; /* 0x171B54A3: jne 0x171b54b8 */
L_171B54A5:
    ecx = MEM32(eax + 0x8); /* 0x171B54A5: mov ecx, dword ptr [eax + 8] */
    edx = MEM32(eax + 0xC); /* 0x171B54A8: mov edx, dword ptr [eax + 0xc] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x171B54AB: imul edx, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x171B54AE: add esi, edx */
    _flag_k = FK_ADD;
    edx = MEM32(eax + 0x4); /* 0x171B54B0: mov edx, dword ptr [eax + 4] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x171B54B3: imul edx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171B54B6: add ebx, edx */
    _flag_k = FK_ADD;
L_171B54B8:
    eax = MEM32(eax + 0x2C); /* 0x171B54B8: mov eax, dword ptr [eax + 0x2c] */
    /* test eax, eax */ /* 0x171B54BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B54A0; /* 0x171B54BD: jne 0x171b54a0 */
L_171B54BF:
    eax = MEM32(edi + 0x48); /* 0x171B54BF: mov eax, dword ptr [edi + 0x48] */
    /* test eax, eax */ /* 0x171B54C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B54EB; /* 0x171B54C4: je 0x171b54eb */
L_171B54C6:
    /* cmp MEM32(eax), 0 */ /* 0x171B54C6: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B54E4; /* 0x171B54C9: jne 0x171b54e4 */
L_171B54CB:
    ecx = MEM32(eax + 0x8); /* 0x171B54CB: mov ecx, dword ptr [eax + 8] */
    edx = MEM32(eax + 0xC); /* 0x171B54CE: mov edx, dword ptr [eax + 0xc] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x171B54D1: imul edx, ecx */
    if (7u) _cf = (((edx) >> 25) & 1u); /* 0x171B54D4: shl edx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((edx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 7u; /* 0x171B54D4: shl edx, 7 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x171B54D7: add esi, edx */
    _flag_k = FK_ADD;
    edx = MEM32(eax + 0x4); /* 0x171B54D9: mov edx, dword ptr [eax + 4] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x171B54DC: imul edx, ecx */
    if (7u) _cf = (((edx) >> 25) & 1u); /* 0x171B54DF: shl edx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((edx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 7u; /* 0x171B54DF: shl edx, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171B54E2: add ebx, edx */
    _flag_k = FK_ADD;
L_171B54E4:
    eax = MEM32(eax + 0x2C); /* 0x171B54E4: mov eax, dword ptr [eax + 0x2c] */
    /* test eax, eax */ /* 0x171B54E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B54C6; /* 0x171B54E9: jne 0x171b54c6 */
L_171B54EB:
    /* test esi, esi */ /* 0x171B54EB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B5608; /* 0x171B54ED: jle 0x171b5608 */
L_171B54F3:
    eax = MEM32(edi + 0x4C); /* 0x171B54F3: mov eax, dword ptr [edi + 0x4c] */
    ecx = MEM32(ebp + 0x8); /* 0x171B54F6: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x171B54F9: push eax */
    PUSH32(esp, ebx); /* 0x171B54FA: push ebx */
    PUSH32(esp, esi); /* 0x171B54FB: push esi */
    PUSH32(esp, ecx); /* 0x171B54FC: push ecx */
    RECOMP_CALL(sub_171BD000); /* 0x171B54FD: call 0x171bd000 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171B5502: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B550D; /* 0x171B5504: jl 0x171b550d */
L_171B5506:
    ebx = 0x3B9ACA00u; /* 0x171B5506: mov ebx, 0x3b9aca00 */
    goto L_171B551B; /* 0x171B550B: jmp 0x171b551b */
L_171B550D:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B550D: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x171B550E: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x171B5510: mov ebx, eax */
    /* test ebx, ebx */ /* 0x171B5512: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171B551B; /* 0x171B5514: jg 0x171b551b */
L_171B5516:
    ebx = 1; /* 0x171B5516: mov ebx, 1 */
L_171B551B:
    esi = MEM32(edi + 0x44); /* 0x171B551B: mov esi, dword ptr [edi + 0x44] */
    /* test esi, esi */ /* 0x171B551E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B5591; /* 0x171B5520: je 0x171b5591 */
L_171B5522:
    /* cmp MEM32(esi), 0 */ /* 0x171B5522: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B558A; /* 0x171B5525: jne 0x171b558a */
L_171B5527:
    edi = MEM32(esi + 0x4); /* 0x171B5527: mov edi, dword ptr [esi + 4] */
    ecx = MEM32(esi + 0xC); /* 0x171B552A: mov ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B552D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + (-0x1); /* 0x171B552F: lea eax, [edi - 1] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x171B5532: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B5534: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ebx */ /* 0x171B5535: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B553E; /* 0x171B5537: jg 0x171b553e */
L_171B5539:
    MEM32(esi + 0x10) = edi; /* 0x171B5539: mov dword ptr [esi + 0x10], edi */
    goto L_171B555F; /* 0x171B553C: jmp 0x171b555f */
L_171B553E:
    edx = MEM32(esi + 0x8); /* 0x171B553E: mov edx, dword ptr [esi + 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x171B5541: imul ecx, ebx */
    edx = (uint32_t)((int32_t)edx * (int32_t)edi); /* 0x171B5544: imul edx, edi */
    PUSH32(esp, edx); /* 0x171B5547: push edx */
    eax = esi + 0x30; /* 0x171B5548: lea eax, [esi + 0x30] */
    MEM32(esi + 0x10) = ecx; /* 0x171B554B: mov dword ptr [esi + 0x10], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171B554E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x171B5551: push eax */
    PUSH32(esp, ecx); /* 0x171B5552: push ecx */
    RECOMP_CALL(sub_171BD130); /* 0x171B5553: call 0x171bd130 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x28) = 1; /* 0x171B5558: mov dword ptr [esi + 0x28], 1 */
L_171B555F:
    edx = MEM32(esi + 0x10); /* 0x171B555F: mov edx, dword ptr [esi + 0x10] */
    eax = MEM32(esi + 0x8); /* 0x171B5562: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(ebp + 0x8); /* 0x171B5565: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x171B5568: push edx */
    PUSH32(esp, eax); /* 0x171B5569: push eax */
    PUSH32(esp, 1); /* 0x171B556A: push 1 */
    PUSH32(esp, ecx); /* 0x171B556C: push ecx */
    RECOMP_CALL(sub_171B5210); /* 0x171B556D: call 0x171b5210 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x171B5572: mov edx, dword ptr [ebp - 4] */
    MEM32(esi) = eax; /* 0x171B5575: mov dword ptr [esi], eax */
    eax = MEM32(edx + 0x50); /* 0x171B5577: mov eax, dword ptr [edx + 0x50] */
    MEM32(esi + 0x14) = eax; /* 0x171B557A: mov dword ptr [esi + 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B557D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x18) = eax; /* 0x171B557F: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0x1C) = eax; /* 0x171B5582: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x24) = eax; /* 0x171B5585: mov dword ptr [esi + 0x24], eax */
    edi = edx; /* 0x171B5588: mov edi, edx */
L_171B558A:
    esi = MEM32(esi + 0x2C); /* 0x171B558A: mov esi, dword ptr [esi + 0x2c] */
    /* test esi, esi */ /* 0x171B558D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5522; /* 0x171B558F: jne 0x171b5522 */
L_171B5591:
    esi = MEM32(edi + 0x48); /* 0x171B5591: mov esi, dword ptr [edi + 0x48] */
    /* test esi, esi */ /* 0x171B5594: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B5608; /* 0x171B5596: je 0x171b5608 */
L_171B5598:
    /* cmp MEM32(esi), 0 */ /* 0x171B5598: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B5601; /* 0x171B559B: jne 0x171b5601 */
L_171B559D:
    edi = MEM32(esi + 0x4); /* 0x171B559D: mov edi, dword ptr [esi + 4] */
    ecx = MEM32(esi + 0xC); /* 0x171B55A0: mov ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B55A3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + (-0x1); /* 0x171B55A5: lea eax, [edi - 1] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x171B55A8: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B55AA: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ebx */ /* 0x171B55AB: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B55B4; /* 0x171B55AD: jg 0x171b55b4 */
L_171B55AF:
    MEM32(esi + 0x10) = edi; /* 0x171B55AF: mov dword ptr [esi + 0x10], edi */
    goto L_171B55D8; /* 0x171B55B2: jmp 0x171b55d8 */
L_171B55B4:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x171B55B4: imul ecx, ebx */
    eax = MEM32(ebp + 0x8); /* 0x171B55B7: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x10) = ecx; /* 0x171B55BA: mov dword ptr [esi + 0x10], ecx */
    ecx = MEM32(esi + 0x8); /* 0x171B55BD: mov ecx, dword ptr [esi + 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi); /* 0x171B55C0: imul ecx, edi */
    if (7u) _cf = (((ecx) >> 25) & 1u); /* 0x171B55C3: shl ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 7u; /* 0x171B55C3: shl ecx, 7 */
    PUSH32(esp, ecx); /* 0x171B55C6: push ecx */
    edx = esi + 0x30; /* 0x171B55C7: lea edx, [esi + 0x30] */
    PUSH32(esp, edx); /* 0x171B55CA: push edx */
    PUSH32(esp, eax); /* 0x171B55CB: push eax */
    RECOMP_CALL(sub_171BD130); /* 0x171B55CC: call 0x171bd130 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x28) = 1; /* 0x171B55D1: mov dword ptr [esi + 0x28], 1 */
L_171B55D8:
    ecx = MEM32(esi + 0x10); /* 0x171B55D8: mov ecx, dword ptr [esi + 0x10] */
    edx = MEM32(esi + 0x8); /* 0x171B55DB: mov edx, dword ptr [esi + 8] */
    eax = MEM32(ebp + 0x8); /* 0x171B55DE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x171B55E1: push ecx */
    PUSH32(esp, edx); /* 0x171B55E2: push edx */
    PUSH32(esp, 1); /* 0x171B55E3: push 1 */
    PUSH32(esp, eax); /* 0x171B55E5: push eax */
    RECOMP_CALL(sub_171B52C0); /* 0x171B55E6: call 0x171b52c0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x171B55EB: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ecx + 0x50); /* 0x171B55EE: mov edx, dword ptr [ecx + 0x50] */
    MEM32(esi) = eax; /* 0x171B55F1: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B55F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = edx; /* 0x171B55F5: mov dword ptr [esi + 0x14], edx */
    MEM32(esi + 0x18) = eax; /* 0x171B55F8: mov dword ptr [esi + 0x18], eax */
    MEM32(esi + 0x1C) = eax; /* 0x171B55FB: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x24) = eax; /* 0x171B55FE: mov dword ptr [esi + 0x24], eax */
L_171B5601:
    esi = MEM32(esi + 0x2C); /* 0x171B5601: mov esi, dword ptr [esi + 0x2c] */
    /* test esi, esi */ /* 0x171B5604: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5598; /* 0x171B5606: jne 0x171b5598 */
L_171B5608:
    edi = POP32_VAL(esp); /* 0x171B5608: pop edi */
    esi = POP32_VAL(esp); /* 0x171B5609: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B560A: pop ebx */
    esp = ebp; /* 0x171B560B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B560D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B560E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B5620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5620u);

L_171B5620:
    edi = edi; /* 0x171B5620: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5622: push ebp */
    ebp = esp; /* 0x171B5623: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x171B5625: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x8); /* 0x171B5628: mov eax, dword ptr [esi + 8] */
    edx = MEM32(esi + 0x18); /* 0x171B562B: mov edx, dword ptr [esi + 0x18] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x171B562E: imul edx, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x171B5631: mov dword ptr [ebp - 8], eax */
    eax = MEM32(esi + 0x10); /* 0x171B5634: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x171B5637: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B5638: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171B563A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x171B563C: mov dword ptr [ebp - 4], edx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B56B8; /* 0x171B563F: jle 0x171b56b8 */
L_171B5641:
    PUSH32(esp, ebx); /* 0x171B5641: push ebx */
    goto L_171B5647; /* 0x171B5642: jmp 0x171b5647 */
L_171B5644:
    edx = MEM32(ebp + (-0x4)); /* 0x171B5644: mov edx, dword ptr [ebp - 4] */
L_171B5647:
    ecx = MEM32(esi + 0x14); /* 0x171B5647: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171B564A: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x171B564C: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B5652; /* 0x171B564E: jge 0x171b5652 */
L_171B5650:
    eax = ecx; /* 0x171B5650: mov eax, ecx */
L_171B5652:
    ecx = MEM32(esi + 0x18); /* 0x171B5652: mov ecx, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x1C); /* 0x171B5655: mov ebx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x171B5658: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x171B565A: sub ebx, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x171B565C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B5662; /* 0x171B565E: jl 0x171b5662 */
L_171B5660:
    eax = ebx; /* 0x171B5660: mov eax, ebx */
L_171B5662:
    ebx = MEM32(esi + 0x4); /* 0x171B5662: mov ebx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x171B5665: sub ebx, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x171B5667: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B566D; /* 0x171B5669: jl 0x171b566d */
L_171B566B:
    eax = ebx; /* 0x171B566B: mov eax, ebx */
L_171B566D:
    /* test eax, eax */ /* 0x171B566D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B56B7; /* 0x171B566F: jle 0x171b56b7 */
L_171B5671:
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x8))); /* 0x171B5671: imul eax, dword ptr [ebp - 8] */
    ebx = eax; /* 0x171B5675: mov ebx, eax */
    eax = MEM32(ebp + 0xC); /* 0x171B5677: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171B567A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171B567C: push ebx */
    PUSH32(esp, edx); /* 0x171B567D: push edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B5693; /* 0x171B567E: je 0x171b5693 */
L_171B5680:
    eax = MEM32(esi); /* 0x171B5680: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + edi * 4); /* 0x171B5682: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ebp + 0x8); /* 0x171B5685: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x171B5688: push ecx */
    edx = esi + 0x30; /* 0x171B5689: lea edx, [esi + 0x30] */
    PUSH32(esp, edx); /* 0x171B568C: push edx */
    PUSH32(esp, eax); /* 0x171B568D: push eax */
    RECOMP_ICALL(MEM32(esi + 0x34)); /* 0x171B568E: call dword ptr [esi + 0x34] */
    RECOMP_FLAGS_IN();
    goto L_171B56A3; /* 0x171B5691: jmp 0x171b56a3 */
L_171B5693:
    ecx = MEM32(esi); /* 0x171B5693: mov ecx, dword ptr [esi] */
    edx = MEM32(ecx + edi * 4); /* 0x171B5695: mov edx, dword ptr [ecx + edi*4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B5698: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x171B569B: push edx */
    eax = esi + 0x30; /* 0x171B569C: lea eax, [esi + 0x30] */
    PUSH32(esp, eax); /* 0x171B569F: push eax */
    PUSH32(esp, ecx); /* 0x171B56A0: push ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B56A1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B56A3:
    eax = MEM32(ebp + (-0x4)); /* 0x171B56A3: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(esi + 0x14); /* 0x171B56A6: mov edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171B56A9: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B56AB: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x10); /* 0x171B56AE: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x171B56B1: add edi, edx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x171B56B3: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B5644; /* 0x171B56B5: jl 0x171b5644 */
L_171B56B7:
    ebx = POP32_VAL(esp); /* 0x171B56B7: pop ebx */
L_171B56B8:
    edi = POP32_VAL(esp); /* 0x171B56B8: pop edi */
    esp = ebp; /* 0x171B56B9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B56BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B56BC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B56D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B56D0u);

L_171B56D0:
    edi = edi; /* 0x171B56D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B56D2: push ebp */
    ebp = esp; /* 0x171B56D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x171B56D5: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x8); /* 0x171B56D8: mov eax, dword ptr [esi + 8] */
    edx = MEM32(esi + 0x18); /* 0x171B56DB: mov edx, dword ptr [esi + 0x18] */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x171B56DE: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x171B56DE: shl eax, 7 */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x171B56E1: imul edx, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x171B56E4: mov dword ptr [ebp - 8], eax */
    eax = MEM32(esi + 0x10); /* 0x171B56E7: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x171B56EA: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B56EB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171B56ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x171B56EF: mov dword ptr [ebp - 4], edx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B5771; /* 0x171B56F2: jle 0x171b5771 */
L_171B56F4:
    PUSH32(esp, ebx); /* 0x171B56F4: push ebx */
    goto L_171B5700; /* 0x171B56F5: jmp 0x171b5700 */
L_171B56F7:
    edx = MEM32(ebp + (-0x4)); /* 0x171B56F7: mov edx, dword ptr [ebp - 4] */
    ebx = ebx; /* 0x171B56FA: lea ebx, [ebx] */
L_171B5700:
    ecx = MEM32(esi + 0x14); /* 0x171B5700: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171B5703: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x171B5705: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B570B; /* 0x171B5707: jge 0x171b570b */
L_171B5709:
    eax = ecx; /* 0x171B5709: mov eax, ecx */
L_171B570B:
    ecx = MEM32(esi + 0x18); /* 0x171B570B: mov ecx, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x1C); /* 0x171B570E: mov ebx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x171B5711: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x171B5713: sub ebx, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x171B5715: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B571B; /* 0x171B5717: jl 0x171b571b */
L_171B5719:
    eax = ebx; /* 0x171B5719: mov eax, ebx */
L_171B571B:
    ebx = MEM32(esi + 0x4); /* 0x171B571B: mov ebx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x171B571E: sub ebx, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, ebx */ /* 0x171B5720: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B5726; /* 0x171B5722: jl 0x171b5726 */
L_171B5724:
    eax = ebx; /* 0x171B5724: mov eax, ebx */
L_171B5726:
    /* test eax, eax */ /* 0x171B5726: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B5770; /* 0x171B5728: jle 0x171b5770 */
L_171B572A:
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x8))); /* 0x171B572A: imul eax, dword ptr [ebp - 8] */
    ebx = eax; /* 0x171B572E: mov ebx, eax */
    eax = MEM32(ebp + 0xC); /* 0x171B5730: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171B5733: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171B5735: push ebx */
    PUSH32(esp, edx); /* 0x171B5736: push edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B574C; /* 0x171B5737: je 0x171b574c */
L_171B5739:
    eax = MEM32(esi); /* 0x171B5739: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + edi * 4); /* 0x171B573B: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ebp + 0x8); /* 0x171B573E: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x171B5741: push ecx */
    edx = esi + 0x30; /* 0x171B5742: lea edx, [esi + 0x30] */
    PUSH32(esp, edx); /* 0x171B5745: push edx */
    PUSH32(esp, eax); /* 0x171B5746: push eax */
    RECOMP_ICALL(MEM32(esi + 0x34)); /* 0x171B5747: call dword ptr [esi + 0x34] */
    RECOMP_FLAGS_IN();
    goto L_171B575C; /* 0x171B574A: jmp 0x171b575c */
L_171B574C:
    ecx = MEM32(esi); /* 0x171B574C: mov ecx, dword ptr [esi] */
    edx = MEM32(ecx + edi * 4); /* 0x171B574E: mov edx, dword ptr [ecx + edi*4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B5751: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x171B5754: push edx */
    eax = esi + 0x30; /* 0x171B5755: lea eax, [esi + 0x30] */
    PUSH32(esp, eax); /* 0x171B5758: push eax */
    PUSH32(esp, ecx); /* 0x171B5759: push ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B575A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B575C:
    eax = MEM32(ebp + (-0x4)); /* 0x171B575C: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(esi + 0x14); /* 0x171B575F: mov edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171B5762: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B5764: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x10); /* 0x171B5767: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x171B576A: add edi, edx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x171B576C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B56F7; /* 0x171B576E: jl 0x171b56f7 */
L_171B5770:
    ebx = POP32_VAL(esp); /* 0x171B5770: pop ebx */
L_171B5771:
    edi = POP32_VAL(esp); /* 0x171B5771: pop edi */
    esp = ebp; /* 0x171B5772: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B5774: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B5775: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B5780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5780u);

L_171B5780:
    edi = edi; /* 0x171B5780: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5782: push ebp */
    ebp = esp; /* 0x171B5783: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x171B5785: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x171B5788: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x171B578B: push ebx */
    PUSH32(esp, esi); /* 0x171B578C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171B578D: mov esi, dword ptr [ebp + 0xc] */
    ebx = ecx + eax; /* 0x171B5790: lea ebx, [ecx + eax] */
    /* cmp ebx, MEM32(esi + 0x4) */ /* 0x171B5793: cmp ebx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171B5796: push edi */
    if (CMP_A(_flag_a, _flag_b)) goto L_171B57A3; /* 0x171B5797: ja 0x171b57a3 */
L_171B5799:
    /* cmp eax, MEM32(esi + 0xC) */ /* 0x171B5799: cmp eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B57A3; /* 0x171B579C: ja 0x171b57a3 */
L_171B579E:
    /* cmp MEM32(esi), 0 */ /* 0x171B579E: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B57B4; /* 0x171B57A1: jne 0x171b57b4 */
L_171B57A3:
    edi = MEM32(ebp + 0x8); /* 0x171B57A3: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi); /* 0x171B57A6: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171B57A8: push edi */
    MEM32(eax + 0x14) = 0x16u; /* 0x171B57A9: mov dword ptr [eax + 0x14], 0x16 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B57B0: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    goto L_171B57B7; /* 0x171B57B2: jmp 0x171b57b7 */
L_171B57B4:
    edi = MEM32(ebp + 0x8); /* 0x171B57B4: mov edi, dword ptr [ebp + 8] */
L_171B57B7:
    eax = MEM32(esi + 0x18); /* 0x171B57B7: mov eax, dword ptr [esi + 0x18] */
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x171B57BA: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171B57C8; /* 0x171B57BD: jb 0x171b57c8 */
L_171B57BF:
    edx = MEM32(esi + 0x10); /* 0x171B57BF: mov edx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171B57C2: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp ebx, edx */ /* 0x171B57C4: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B580F; /* 0x171B57C6: jbe 0x171b580f */
L_171B57C8:
    eax = MEM32(esi + 0x28); /* 0x171B57C8: mov eax, dword ptr [esi + 0x28] */
    /* test eax, eax */ /* 0x171B57CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B57DB; /* 0x171B57CD: jne 0x171b57db */
L_171B57CF:
    eax = MEM32(edi); /* 0x171B57CF: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171B57D1: push edi */
    MEM32(eax + 0x14) = 0x45u; /* 0x171B57D2: mov dword ptr [eax + 0x14], 0x45 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B57D9: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B57DB:
    eax = MEM32(esi + 0x24); /* 0x171B57DB: mov eax, dword ptr [esi + 0x24] */
    /* test eax, eax */ /* 0x171B57DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B57F1; /* 0x171B57E0: je 0x171b57f1 */
L_171B57E2:
    PUSH32(esp, 1); /* 0x171B57E2: push 1 */
    PUSH32(esp, edi); /* 0x171B57E4: push edi */
    RECOMP_CALL(sub_171B5620); /* 0x171B57E5: call 0x171b5620 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x24) = 0; /* 0x171B57EA: mov dword ptr [esi + 0x24], 0 */
L_171B57F1:
    eax = MEM32(ebp + 0x10); /* 0x171B57F1: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(esi + 0x18) */ /* 0x171B57F4: cmp eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B5804; /* 0x171B57F7: ja 0x171b5804 */
L_171B57F9:
    ecx = MEM32(esi + 0x10); /* 0x171B57F9: mov ecx, dword ptr [esi + 0x10] */
    eax = ebx; /* 0x171B57FC: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B57FE: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_171B5804; /* 0x171B5800: jns 0x171b5804 */
L_171B5802:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B5802: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B5804:
    PUSH32(esp, 0); /* 0x171B5804: push 0 */
    PUSH32(esp, edi); /* 0x171B5806: push edi */
    MEM32(esi + 0x18) = eax; /* 0x171B5807: mov dword ptr [esi + 0x18], eax */
    RECOMP_CALL(sub_171B5620); /* 0x171B580A: call 0x171b5620 */
    RECOMP_FLAGS_IN();
L_171B580F:
    eax = MEM32(esi + 0x1C); /* 0x171B580F: mov eax, dword ptr [esi + 0x1c] */
    /* cmp eax, ebx */ /* 0x171B5812: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B586B; /* 0x171B5814: jae 0x171b586b */
L_171B5816:
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x171B5816: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B5833; /* 0x171B5819: jae 0x171b5833 */
L_171B581B:
    eax = MEM32(ebp + 0x18); /* 0x171B581B: mov eax, dword ptr [ebp + 0x18] */
    /* test eax, eax */ /* 0x171B581E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B582E; /* 0x171B5820: je 0x171b582e */
L_171B5822:
    eax = MEM32(edi); /* 0x171B5822: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171B5824: push edi */
    MEM32(eax + 0x14) = 0x16u; /* 0x171B5825: mov dword ptr [eax + 0x14], 0x16 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B582C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B582E:
    edi = MEM32(ebp + 0x10); /* 0x171B582E: mov edi, dword ptr [ebp + 0x10] */
    goto L_171B5835; /* 0x171B5831: jmp 0x171b5835 */
L_171B5833:
    edi = eax; /* 0x171B5833: mov edi, eax */
L_171B5835:
    eax = MEM32(ebp + 0x18); /* 0x171B5835: mov eax, dword ptr [ebp + 0x18] */
    /* test eax, eax */ /* 0x171B5838: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B583F; /* 0x171B583A: je 0x171b583f */
L_171B583C:
    MEM32(esi + 0x1C) = ebx; /* 0x171B583C: mov dword ptr [esi + 0x1c], ebx */
L_171B583F:
    ecx = MEM32(esi + 0x20); /* 0x171B583F: mov ecx, dword ptr [esi + 0x20] */
    /* test ecx, ecx */ /* 0x171B5842: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B588D; /* 0x171B5844: je 0x171b588d */
L_171B5846:
    eax = MEM32(esi + 0x8); /* 0x171B5846: mov eax, dword ptr [esi + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x171B5849: mov dword ptr [ebp + 8], eax */
    eax = MEM32(esi + 0x18); /* 0x171B584C: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x171B584F: sub edi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x171B5851: sub ebx, eax */
    _flag_k = FK_CMP;
    /* cmp edi, ebx */ /* 0x171B5853: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B586B; /* 0x171B5855: jae 0x171b586b */
L_171B5857:
    ecx = MEM32(ebp + 0x8); /* 0x171B5857: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(esi); /* 0x171B585A: mov edx, dword ptr [esi] */
    eax = MEM32(edx + edi * 4); /* 0x171B585C: mov eax, dword ptr [edx + edi*4] */
    PUSH32(esp, ecx); /* 0x171B585F: push ecx */
    PUSH32(esp, eax); /* 0x171B5860: push eax */
    RECOMP_CALL(sub_171B5DC0); /* 0x171B5861: call 0x171b5dc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B5866: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x171B5867: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B5857; /* 0x171B5869: jb 0x171b5857 */
L_171B586B:
    eax = MEM32(ebp + 0x18); /* 0x171B586B: mov eax, dword ptr [ebp + 0x18] */
    /* test eax, eax */ /* 0x171B586E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B5879; /* 0x171B5870: je 0x171b5879 */
L_171B5872:
    MEM32(esi + 0x24) = 1; /* 0x171B5872: mov dword ptr [esi + 0x24], 1 */
L_171B5879:
    ecx = MEM32(esi + 0x18); /* 0x171B5879: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ebp + 0x10); /* 0x171B587C: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B587F: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(esi); /* 0x171B5881: mov ecx, dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x171B5883: pop edi */
    esi = POP32_VAL(esp); /* 0x171B5884: pop esi */
    eax = ecx + eax * 4; /* 0x171B5885: lea eax, [ecx + eax*4] */
    ebx = POP32_VAL(esp); /* 0x171B5888: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B5889: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171B588A: ret 0x14 */
L_171B588D:
    /* test eax, eax */ /* 0x171B588D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5872; /* 0x171B588F: jne 0x171b5872 */
L_171B5891:
    ecx = MEM32(ebp + 0x8); /* 0x171B5891: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171B5894: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171B5896: push ecx */
    MEM32(eax + 0x14) = 0x16u; /* 0x171B5897: mov dword ptr [eax + 0x14], 0x16 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B589E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x18); /* 0x171B58A0: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ebp + 0x10); /* 0x171B58A3: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B58A6: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(esi); /* 0x171B58A8: mov ecx, dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x171B58AA: pop edi */
    esi = POP32_VAL(esp); /* 0x171B58AB: pop esi */
    eax = ecx + eax * 4; /* 0x171B58AC: lea eax, [ecx + eax*4] */
    ebx = POP32_VAL(esp); /* 0x171B58AF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B58B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171B58B1: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171B58C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B58C0u);

L_171B58C0:
    edi = edi; /* 0x171B58C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B58C2: push ebp */
    ebp = esp; /* 0x171B58C3: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x171B58C5: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x171B58C8: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x171B58CB: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171B58CC: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171B58CF: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171B58D0: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171B58D3: push edi */
    edi = ecx + eax; /* 0x171B58D4: lea edi, [ecx + eax] */
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x171B58D7: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = edi; /* 0x171B58DA: mov dword ptr [ebp + 0x14], edi */
    if (CMP_A(_flag_a, _flag_b)) goto L_171B58E9; /* 0x171B58DD: ja 0x171b58e9 */
L_171B58DF:
    /* cmp eax, MEM32(esi + 0xC) */ /* 0x171B58DF: cmp eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B58E9; /* 0x171B58E2: ja 0x171b58e9 */
L_171B58E4:
    /* cmp MEM32(esi), 0 */ /* 0x171B58E4: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B58F5; /* 0x171B58E7: jne 0x171b58f5 */
L_171B58E9:
    eax = MEM32(ebx); /* 0x171B58E9: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x171B58EB: push ebx */
    MEM32(eax + 0x14) = 0x16u; /* 0x171B58EC: mov dword ptr [eax + 0x14], 0x16 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B58F3: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B58F5:
    eax = MEM32(esi + 0x18); /* 0x171B58F5: mov eax, dword ptr [esi + 0x18] */
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x171B58F8: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171B5906; /* 0x171B58FB: jb 0x171b5906 */
L_171B58FD:
    edx = MEM32(esi + 0x10); /* 0x171B58FD: mov edx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171B5900: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp edi, edx */ /* 0x171B5902: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B594D; /* 0x171B5904: jbe 0x171b594d */
L_171B5906:
    eax = MEM32(esi + 0x28); /* 0x171B5906: mov eax, dword ptr [esi + 0x28] */
    /* test eax, eax */ /* 0x171B5909: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5919; /* 0x171B590B: jne 0x171b5919 */
L_171B590D:
    eax = MEM32(ebx); /* 0x171B590D: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x171B590F: push ebx */
    MEM32(eax + 0x14) = 0x45u; /* 0x171B5910: mov dword ptr [eax + 0x14], 0x45 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B5917: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5919:
    eax = MEM32(esi + 0x24); /* 0x171B5919: mov eax, dword ptr [esi + 0x24] */
    /* test eax, eax */ /* 0x171B591C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B592F; /* 0x171B591E: je 0x171b592f */
L_171B5920:
    PUSH32(esp, 1); /* 0x171B5920: push 1 */
    PUSH32(esp, ebx); /* 0x171B5922: push ebx */
    RECOMP_CALL(sub_171B56D0); /* 0x171B5923: call 0x171b56d0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x24) = 0; /* 0x171B5928: mov dword ptr [esi + 0x24], 0 */
L_171B592F:
    eax = MEM32(ebp + 0x10); /* 0x171B592F: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(esi + 0x18) */ /* 0x171B5932: cmp eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B5942; /* 0x171B5935: ja 0x171b5942 */
L_171B5937:
    ecx = MEM32(esi + 0x10); /* 0x171B5937: mov ecx, dword ptr [esi + 0x10] */
    eax = edi; /* 0x171B593A: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B593C: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_171B5942; /* 0x171B593E: jns 0x171b5942 */
L_171B5940:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B5940: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B5942:
    PUSH32(esp, 0); /* 0x171B5942: push 0 */
    PUSH32(esp, ebx); /* 0x171B5944: push ebx */
    MEM32(esi + 0x18) = eax; /* 0x171B5945: mov dword ptr [esi + 0x18], eax */
    RECOMP_CALL(sub_171B56D0); /* 0x171B5948: call 0x171b56d0 */
    RECOMP_FLAGS_IN();
L_171B594D:
    edi = MEM32(esi + 0x1C); /* 0x171B594D: mov edi, dword ptr [esi + 0x1c] */
    /* cmp edi, MEM32(ebp + 0x14) */ /* 0x171B5950: cmp edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B59B4; /* 0x171B5953: jae 0x171b59b4 */
L_171B5955:
    /* cmp edi, MEM32(ebp + 0x10) */ /* 0x171B5955: cmp edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B5970; /* 0x171B5958: jae 0x171b5970 */
L_171B595A:
    eax = MEM32(ebp + 0x18); /* 0x171B595A: mov eax, dword ptr [ebp + 0x18] */
    /* test eax, eax */ /* 0x171B595D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B596D; /* 0x171B595F: je 0x171b596d */
L_171B5961:
    eax = MEM32(ebx); /* 0x171B5961: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x171B5963: push ebx */
    MEM32(eax + 0x14) = 0x16u; /* 0x171B5964: mov dword ptr [eax + 0x14], 0x16 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B596B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B596D:
    edi = MEM32(ebp + 0x10); /* 0x171B596D: mov edi, dword ptr [ebp + 0x10] */
L_171B5970:
    eax = MEM32(ebp + 0x18); /* 0x171B5970: mov eax, dword ptr [ebp + 0x18] */
    /* test eax, eax */ /* 0x171B5973: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B597D; /* 0x171B5975: je 0x171b597d */
L_171B5977:
    ecx = MEM32(ebp + 0x14); /* 0x171B5977: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x1C) = ecx; /* 0x171B597A: mov dword ptr [esi + 0x1c], ecx */
L_171B597D:
    ecx = MEM32(esi + 0x20); /* 0x171B597D: mov ecx, dword ptr [esi + 0x20] */
    /* test ecx, ecx */ /* 0x171B5980: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B59D6; /* 0x171B5982: je 0x171b59d6 */
L_171B5984:
    eax = MEM32(esi + 0x18); /* 0x171B5984: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(ebp + 0x14); /* 0x171B5987: mov ecx, dword ptr [ebp + 0x14] */
    ebx = MEM32(esi + 0x8); /* 0x171B598A: mov ebx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171B598D: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x171B598F: sub edi, eax */
    _flag_k = FK_CMP;
    if (7u) _cf = (((ebx) >> 25) & 1u); /* 0x171B5991: shl ebx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ebx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 7u; /* 0x171B5991: shl ebx, 7 */
    /* cmp edi, ecx */ /* 0x171B5994: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = ecx; /* 0x171B5996: mov dword ptr [ebp + 0x14], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B59B4; /* 0x171B5999: jae 0x171b59b4 */
L_171B599B:
    goto L_171B59A0; /* 0x171B599B: jmp 0x171b59a0 */
L_171B59A0:
    edx = MEM32(esi); /* 0x171B59A0: mov edx, dword ptr [esi] */
    eax = MEM32(edx + edi * 4); /* 0x171B59A2: mov eax, dword ptr [edx + edi*4] */
    PUSH32(esp, ebx); /* 0x171B59A5: push ebx */
    PUSH32(esp, eax); /* 0x171B59A6: push eax */
    RECOMP_CALL(sub_171B5DC0); /* 0x171B59A7: call 0x171b5dc0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x171B59AC: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B59AF: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, eax */ /* 0x171B59B0: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B59A0; /* 0x171B59B2: jb 0x171b59a0 */
L_171B59B4:
    eax = MEM32(ebp + 0x18); /* 0x171B59B4: mov eax, dword ptr [ebp + 0x18] */
    /* test eax, eax */ /* 0x171B59B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B59C2; /* 0x171B59B9: je 0x171b59c2 */
L_171B59BB:
    MEM32(esi + 0x24) = 1; /* 0x171B59BB: mov dword ptr [esi + 0x24], 1 */
L_171B59C2:
    ecx = MEM32(esi + 0x18); /* 0x171B59C2: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ebp + 0x10); /* 0x171B59C5: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B59C8: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(esi); /* 0x171B59CA: mov ecx, dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x171B59CC: pop edi */
    esi = POP32_VAL(esp); /* 0x171B59CD: pop esi */
    eax = ecx + eax * 4; /* 0x171B59CE: lea eax, [ecx + eax*4] */
    ebx = POP32_VAL(esp); /* 0x171B59D1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B59D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171B59D3: ret 0x14 */
L_171B59D6:
    /* test eax, eax */ /* 0x171B59D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B59BB; /* 0x171B59D8: jne 0x171b59bb */
L_171B59DA:
    eax = MEM32(ebx); /* 0x171B59DA: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x171B59DC: push ebx */
    MEM32(eax + 0x14) = 0x16u; /* 0x171B59DD: mov dword ptr [eax + 0x14], 0x16 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B59E4: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x18); /* 0x171B59E6: mov ecx, dword ptr [esi + 0x18] */
    eax = MEM32(ebp + 0x10); /* 0x171B59E9: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B59EC: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(esi); /* 0x171B59EE: mov ecx, dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x171B59F0: pop edi */
    esi = POP32_VAL(esp); /* 0x171B59F1: pop esi */
    eax = ecx + eax * 4; /* 0x171B59F2: lea eax, [ecx + eax*4] */
    ebx = POP32_VAL(esp); /* 0x171B59F5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B59F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171B59F7: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171B5A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5A00u);

L_171B5A00:
    edi = edi; /* 0x171B5A00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5A02: push ebp */
    ebp = esp; /* 0x171B5A03: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B5A05: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171B5A06: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171B5A09: push esi */
    esi = MEM32(ebx + 0x4); /* 0x171B5A0A: mov esi, dword ptr [ebx + 4] */
    PUSH32(esp, edi); /* 0x171B5A0D: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171B5A0E: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x171B5A11: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B5A1A; /* 0x171B5A13: jl 0x171b5a1a */
L_171B5A15:
    /* cmp edi, 2 */ /* 0x171B5A15: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B5A29; /* 0x171B5A18: jl 0x171b5a29 */
L_171B5A1A:
    eax = MEM32(ebx); /* 0x171B5A1A: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0xEu; /* 0x171B5A1C: mov dword ptr [eax + 0x14], 0xe */
    PUSH32(esp, ebx); /* 0x171B5A23: push ebx */
    MEM32(eax + 0x18) = edi; /* 0x171B5A24: mov dword ptr [eax + 0x18], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B5A27: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5A29:
    /* cmp edi, 1 */ /* 0x171B5A29: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B5A7F; /* 0x171B5A2C: jne 0x171b5a7f */
L_171B5A2E:
    edi = MEM32(esi + 0x44); /* 0x171B5A2E: mov edi, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B5A31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, eax */ /* 0x171B5A33: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B5A50; /* 0x171B5A35: je 0x171b5a50 */
L_171B5A37:
    /* cmp MEM32(edi + 0x28), eax */ /* 0x171B5A37: cmp dword ptr [edi + 0x28], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B5A49; /* 0x171B5A3A: je 0x171b5a49 */
L_171B5A3C:
    MEM32(edi + 0x28) = eax; /* 0x171B5A3C: mov dword ptr [edi + 0x28], eax */
    eax = edi + 0x30; /* 0x171B5A3F: lea eax, [edi + 0x30] */
    PUSH32(esp, eax); /* 0x171B5A42: push eax */
    PUSH32(esp, ebx); /* 0x171B5A43: push ebx */
    RECOMP_ICALL(MEM32(edi + 0x38)); /* 0x171B5A44: call dword ptr [edi + 0x38] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B5A47: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B5A49:
    edi = MEM32(edi + 0x2C); /* 0x171B5A49: mov edi, dword ptr [edi + 0x2c] */
    /* cmp edi, eax */ /* 0x171B5A4C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B5A37; /* 0x171B5A4E: jne 0x171b5a37 */
L_171B5A50:
    edi = MEM32(esi + 0x48); /* 0x171B5A50: mov edi, dword ptr [esi + 0x48] */
    /* cmp edi, eax */ /* 0x171B5A53: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x44) = eax; /* 0x171B5A55: mov dword ptr [esi + 0x44], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B5A79; /* 0x171B5A58: je 0x171b5a79 */
L_171B5A5A:
    ebx = ebx; /* 0x171B5A5A: lea ebx, [ebx] */
L_171B5A60:
    /* cmp MEM32(edi + 0x28), eax */ /* 0x171B5A60: cmp dword ptr [edi + 0x28], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B5A72; /* 0x171B5A63: je 0x171b5a72 */
L_171B5A65:
    ecx = edi + 0x30; /* 0x171B5A65: lea ecx, [edi + 0x30] */
    PUSH32(esp, ecx); /* 0x171B5A68: push ecx */
    PUSH32(esp, ebx); /* 0x171B5A69: push ebx */
    MEM32(edi + 0x28) = eax; /* 0x171B5A6A: mov dword ptr [edi + 0x28], eax */
    RECOMP_ICALL(MEM32(edi + 0x38)); /* 0x171B5A6D: call dword ptr [edi + 0x38] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B5A70: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B5A72:
    edi = MEM32(edi + 0x2C); /* 0x171B5A72: mov edi, dword ptr [edi + 0x2c] */
    /* cmp edi, eax */ /* 0x171B5A75: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B5A60; /* 0x171B5A77: jne 0x171b5a60 */
L_171B5A79:
    edi = MEM32(ebp + 0xC); /* 0x171B5A79: mov edi, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x48) = eax; /* 0x171B5A7C: mov dword ptr [esi + 0x48], eax */
L_171B5A7F:
    eax = MEM32(esi + edi * 4 + 0x3C); /* 0x171B5A7F: mov eax, dword ptr [esi + edi*4 + 0x3c] */
    /* test eax, eax */ /* 0x171B5A83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + edi * 4 + 0x3C) = 0; /* 0x171B5A85: mov dword ptr [esi + edi*4 + 0x3c], 0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B5AB8; /* 0x171B5A8D: je 0x171b5ab8 */
L_171B5A8F:
    /* nop */ /* 0x171B5A8F: nop  */
L_171B5A90:
    edx = MEM32(eax + 0x8); /* 0x171B5A90: mov edx, dword ptr [eax + 8] */
    ecx = MEM32(eax + 0x4); /* 0x171B5A93: mov ecx, dword ptr [eax + 4] */
    edi = MEM32(eax); /* 0x171B5A96: mov edi, dword ptr [eax] */
    ebx = edx + ecx + 0x10; /* 0x171B5A98: lea ebx, [edx + ecx + 0x10] */
    edx = MEM32(ebp + 0x8); /* 0x171B5A9C: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171B5A9F: push ebx */
    PUSH32(esp, eax); /* 0x171B5AA0: push eax */
    PUSH32(esp, edx); /* 0x171B5AA1: push edx */
    RECOMP_CALL(sub_171BCF90); /* 0x171B5AA2: call 0x171bcf90 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x4C); /* 0x171B5AA7: mov edx, dword ptr [esi + 0x4c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171B5AAA: sub edx, ebx */
    _flag_k = FK_CMP;
    /* test edi, edi */ /* 0x171B5AAC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4C) = edx; /* 0x171B5AAE: mov dword ptr [esi + 0x4c], edx */
    eax = edi; /* 0x171B5AB1: mov eax, edi */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5A90; /* 0x171B5AB3: jne 0x171b5a90 */
L_171B5AB5:
    edi = MEM32(ebp + 0xC); /* 0x171B5AB5: mov edi, dword ptr [ebp + 0xc] */
L_171B5AB8:
    eax = MEM32(esi + edi * 4 + 0x34); /* 0x171B5AB8: mov eax, dword ptr [esi + edi*4 + 0x34] */
    /* test eax, eax */ /* 0x171B5ABC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + edi * 4 + 0x34) = 0; /* 0x171B5ABE: mov dword ptr [esi + edi*4 + 0x34], 0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B5AED; /* 0x171B5AC6: je 0x171b5aed */
L_171B5AC8:
    ecx = MEM32(eax + 0x8); /* 0x171B5AC8: mov ecx, dword ptr [eax + 8] */
    edx = MEM32(eax + 0x4); /* 0x171B5ACB: mov edx, dword ptr [eax + 4] */
    edi = MEM32(eax); /* 0x171B5ACE: mov edi, dword ptr [eax] */
    ebx = ecx + edx + 0x10; /* 0x171B5AD0: lea ebx, [ecx + edx + 0x10] */
    PUSH32(esp, ebx); /* 0x171B5AD4: push ebx */
    PUSH32(esp, eax); /* 0x171B5AD5: push eax */
    eax = MEM32(ebp + 0x8); /* 0x171B5AD6: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x171B5AD9: push eax */
    RECOMP_CALL(sub_171BCF90); /* 0x171B5ADA: call 0x171bcf90 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x4C); /* 0x171B5ADF: mov edx, dword ptr [esi + 0x4c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171B5AE2: sub edx, ebx */
    _flag_k = FK_CMP;
    /* test edi, edi */ /* 0x171B5AE4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4C) = edx; /* 0x171B5AE6: mov dword ptr [esi + 0x4c], edx */
    eax = edi; /* 0x171B5AE9: mov eax, edi */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5AC8; /* 0x171B5AEB: jne 0x171b5ac8 */
L_171B5AED:
    edi = POP32_VAL(esp); /* 0x171B5AED: pop edi */
    esi = POP32_VAL(esp); /* 0x171B5AEE: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B5AEF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B5AF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B5AF1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B5B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5B00u);

L_171B5B00:
    edi = edi; /* 0x171B5B00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5B02: push ebp */
    ebp = esp; /* 0x171B5B03: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B5B05: push esi */
    PUSH32(esp, edi); /* 0x171B5B06: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171B5B07: mov edi, dword ptr [ebp + 8] */
    esi = 1; /* 0x171B5B0A: mov esi, 1 */
    /* nop */ /* 0x171B5B0F: nop  */
L_171B5B10:
    PUSH32(esp, esi); /* 0x171B5B10: push esi */
    PUSH32(esp, edi); /* 0x171B5B11: push edi */
    RECOMP_CALL(sub_171B5A00); /* 0x171B5B12: call 0x171b5a00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171B5B17: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_171B5B10; /* 0x171B5B18: jns 0x171b5b10 */
L_171B5B1A:
    eax = MEM32(edi + 0x4); /* 0x171B5B1A: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, 0x54u); /* 0x171B5B1D: push 0x54 */
    PUSH32(esp, eax); /* 0x171B5B1F: push eax */
    PUSH32(esp, edi); /* 0x171B5B20: push edi */
    RECOMP_CALL(sub_171BCF90); /* 0x171B5B21: call 0x171bcf90 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171B5B26: push edi */
    MEM32(edi + 0x4) = 0; /* 0x171B5B27: mov dword ptr [edi + 4], 0 */
    RECOMP_CALL(sub_171BC250); /* 0x171B5B2E: call 0x171bc250 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171B5B33: pop edi */
    esi = POP32_VAL(esp); /* 0x171B5B34: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B5B35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B5B36: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B5B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5B40u);

L_171B5B40:
    edi = edi; /* 0x171B5B40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5B42: push ebp */
    ebp = esp; /* 0x171B5B43: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B5B45: push ebx */
    PUSH32(esp, esi); /* 0x171B5B46: push esi */
    PUSH32(esp, edi); /* 0x171B5B47: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171B5B48: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B5B4B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171B5B4D: push edi */
    MEM32(edi + 0x4) = ebx; /* 0x171B5B4E: mov dword ptr [edi + 4], ebx */
    RECOMP_CALL(sub_171BD120); /* 0x171B5B51: call 0x171bd120 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x54u); /* 0x171B5B56: push 0x54 */
    PUSH32(esp, edi); /* 0x171B5B58: push edi */
    MEM32(ebp + 0x8) = eax; /* 0x171B5B59: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_171BCFC0); /* 0x171B5B5C: call 0x171bcfc0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171B5B61: mov esi, eax */
    /* cmp esi, ebx */ /* 0x171B5B63: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B5B7C; /* 0x171B5B65: jne 0x171b5b7c */
L_171B5B67:
    PUSH32(esp, edi); /* 0x171B5B67: push edi */
    RECOMP_CALL(sub_171BC250); /* 0x171B5B68: call 0x171bc250 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x171B5B6D: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0x36u; /* 0x171B5B6F: mov dword ptr [eax + 0x14], 0x36 */
    PUSH32(esp, edi); /* 0x171B5B76: push edi */
    MEM32(eax + 0x18) = ebx; /* 0x171B5B77: mov dword ptr [eax + 0x18], ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B5B7A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5B7C:
    eax = MEM32(ebp + 0x8); /* 0x171B5B7C: mov eax, dword ptr [ebp + 8] */
    MEM32(esi) = 0x171B5010u; /* 0x171B5B7F: mov dword ptr [esi], 0x171b5010 */
    MEM32(esi + 0x4) = 0x171B5150u; /* 0x171B5B85: mov dword ptr [esi + 4], 0x171b5150 */
    MEM32(esi + 0x8) = 0x171B5210u; /* 0x171B5B8C: mov dword ptr [esi + 8], 0x171b5210 */
    MEM32(esi + 0xC) = 0x171B52C0u; /* 0x171B5B93: mov dword ptr [esi + 0xc], 0x171b52c0 */
    MEM32(esi + 0x10) = 0x171B53A0u; /* 0x171B5B9A: mov dword ptr [esi + 0x10], 0x171b53a0 */
    MEM32(esi + 0x14) = 0x171B5410u; /* 0x171B5BA1: mov dword ptr [esi + 0x14], 0x171b5410 */
    MEM32(esi + 0x18) = 0x171B5480u; /* 0x171B5BA8: mov dword ptr [esi + 0x18], 0x171b5480 */
    MEM32(esi + 0x1C) = 0x171B5780u; /* 0x171B5BAF: mov dword ptr [esi + 0x1c], 0x171b5780 */
    MEM32(esi + 0x20) = 0x171B58C0u; /* 0x171B5BB6: mov dword ptr [esi + 0x20], 0x171b58c0 */
    MEM32(esi + 0x24) = 0x171B5A00u; /* 0x171B5BBD: mov dword ptr [esi + 0x24], 0x171b5a00 */
    MEM32(esi + 0x28) = 0x171B5B00u; /* 0x171B5BC4: mov dword ptr [esi + 0x28], 0x171b5b00 */
    MEM32(esi + 0x30) = 0x3B9ACA00u; /* 0x171B5BCB: mov dword ptr [esi + 0x30], 0x3b9aca00 */
    MEM32(esi + 0x2C) = eax; /* 0x171B5BD2: mov dword ptr [esi + 0x2c], eax */
    MEM32(esi + 0x38) = ebx; /* 0x171B5BD5: mov dword ptr [esi + 0x38], ebx */
    MEM32(esi + 0x40) = ebx; /* 0x171B5BD8: mov dword ptr [esi + 0x40], ebx */
    MEM32(esi + 0x34) = ebx; /* 0x171B5BDB: mov dword ptr [esi + 0x34], ebx */
    MEM32(esi + 0x3C) = ebx; /* 0x171B5BDE: mov dword ptr [esi + 0x3c], ebx */
    MEM32(edi + 0x4) = esi; /* 0x171B5BE1: mov dword ptr [edi + 4], esi */
    edi = POP32_VAL(esp); /* 0x171B5BE4: pop edi */
    MEM32(esi + 0x44) = ebx; /* 0x171B5BE5: mov dword ptr [esi + 0x44], ebx */
    MEM32(esi + 0x48) = ebx; /* 0x171B5BE8: mov dword ptr [esi + 0x48], ebx */
    MEM32(esi + 0x4C) = 0x54u; /* 0x171B5BEB: mov dword ptr [esi + 0x4c], 0x54 */
    esi = POP32_VAL(esp); /* 0x171B5BF2: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B5BF3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B5BF4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B5BF5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B5C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5C00u);

L_171B5C00:
    edi = edi; /* 0x171B5C00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5C02: push ebp */
    ebp = esp; /* 0x171B5C03: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B5C05: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B5C06: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171B5C09: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x171B5C0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B5C3A; /* 0x171B5C0E: je 0x171b5c3a */
L_171B5C10:
    PUSH32(esp, 1); /* 0x171B5C10: push 1 */
    PUSH32(esp, esi); /* 0x171B5C12: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x171B5C13: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x10); /* 0x171B5C16: mov eax, dword ptr [esi + 0x10] */
    /* test eax, eax */ /* 0x171B5C19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B5C33; /* 0x171B5C1B: je 0x171b5c33 */
L_171B5C1D:
    MEM32(esi + 0x14) = 0xC8u; /* 0x171B5C1D: mov dword ptr [esi + 0x14], 0xc8 */
    MEM32(esi + 0x134) = 0; /* 0x171B5C24: mov dword ptr [esi + 0x134], 0 */
    esi = POP32_VAL(esp); /* 0x171B5C2E: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B5C2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B5C30: ret 4 */
L_171B5C33:
    MEM32(esi + 0x14) = 0x64u; /* 0x171B5C33: mov dword ptr [esi + 0x14], 0x64 */
L_171B5C3A:
    esi = POP32_VAL(esp); /* 0x171B5C3A: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B5C3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B5C3C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B5C50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5C50u);

L_171B5C50:
    edi = edi; /* 0x171B5C50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5C52: push ebp */
    ebp = esp; /* 0x171B5C53: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B5C55: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B5C56: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171B5C59: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x171B5C5C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B5C5D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x171B5C5F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B5C67; /* 0x171B5C61: je 0x171b5c67 */
L_171B5C63:
    PUSH32(esp, esi); /* 0x171B5C63: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x171B5C64: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
L_171B5C67:
    MEM32(esi + 0x4) = edi; /* 0x171B5C67: mov dword ptr [esi + 4], edi */
    MEM32(esi + 0x14) = edi; /* 0x171B5C6A: mov dword ptr [esi + 0x14], edi */
    edi = POP32_VAL(esp); /* 0x171B5C6D: pop edi */
    esi = POP32_VAL(esp); /* 0x171B5C6E: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B5C6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B5C70: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B5C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5C80u);

L_171B5C80:
    edi = edi; /* 0x171B5C80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5C82: push ebp */
    ebp = esp; /* 0x171B5C83: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171B5C85: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x171B5C88: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x84u); /* 0x171B5C8B: push 0x84 */
    PUSH32(esp, 0); /* 0x171B5C90: push 0 */
    PUSH32(esp, eax); /* 0x171B5C92: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171B5C93: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    MEM32(eax + 0x80) = 0; /* 0x171B5C95: mov dword ptr [eax + 0x80], 0 */
    ebp = POP32_VAL(esp); /* 0x171B5C9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B5CA0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B5CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5CB0u);

L_171B5CB0:
    edi = edi; /* 0x171B5CB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5CB2: push ebp */
    ebp = esp; /* 0x171B5CB3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171B5CB5: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x171B5CB8: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x118u); /* 0x171B5CBB: push 0x118 */
    PUSH32(esp, 0); /* 0x171B5CC0: push 0 */
    PUSH32(esp, eax); /* 0x171B5CC2: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171B5CC3: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    MEM32(eax + 0x114) = 0; /* 0x171B5CC5: mov dword ptr [eax + 0x114], 0 */
    ebp = POP32_VAL(esp); /* 0x171B5CCF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B5CD0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B5CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5CE0u);

L_171B5CE0:
    edi = edi; /* 0x171B5CE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5CE2: push ebp */
    ebp = esp; /* 0x171B5CE3: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x171B5CE5: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x171B5CE8: mov eax, dword ptr [ebp + 8] */
    eax = eax + ecx + (-0x1); /* 0x171B5CEB: lea eax, [eax + ecx - 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B5CEF: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x171B5CF0: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ebp = POP32_VAL(esp); /* 0x171B5CF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B5CF3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B5D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5D00u);

L_171B5D00:
    edi = edi; /* 0x171B5D00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5D02: push ebp */
    ebp = esp; /* 0x171B5D03: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171B5D05: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171B5D08: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171B5D09: mov esi, dword ptr [ebp + 0xc] */
    ecx = eax + esi + (-0x1); /* 0x171B5D0C: lea ecx, [eax + esi - 1] */
    eax = ecx; /* 0x171B5D10: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B5D12: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x171B5D13: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = ecx; /* 0x171B5D15: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x171B5D17: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171B5D18: sub eax, edx */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x171B5D1A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B5D1B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B5D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5D30u);

L_171B5D30:
    edi = edi; /* 0x171B5D30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5D32: push ebp */
    ebp = esp; /* 0x171B5D33: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171B5D35: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x171B5D38: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x14); /* 0x171B5D3B: mov edx, dword ptr [ebp + 0x14] */
    eax = ecx + eax * 4; /* 0x171B5D3E: lea eax, [ecx + eax*4] */
    ecx = MEM32(ebp + 0x10); /* 0x171B5D41: mov ecx, dword ptr [ebp + 0x10] */
    edx = ecx + edx * 4; /* 0x171B5D44: lea edx, [ecx + edx*4] */
    ecx = MEM32(ebp + 0x18); /* 0x171B5D47: mov ecx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x171B5D4A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B5D7B; /* 0x171B5D4C: jle 0x171b5d7b */
L_171B5D4E:
    PUSH32(esp, ebx); /* 0x171B5D4E: push ebx */
    PUSH32(esp, esi); /* 0x171B5D4F: push esi */
    MEM32(ebp + 0xC) = ecx; /* 0x171B5D50: mov dword ptr [ebp + 0xc], ecx */
    PUSH32(esp, edi); /* 0x171B5D53: push edi */
L_171B5D54:
    ecx = MEM32(ebp + 0x1C); /* 0x171B5D54: mov ecx, dword ptr [ebp + 0x1c] */
    esi = MEM32(eax); /* 0x171B5D57: mov esi, dword ptr [eax] */
    edi = MEM32(edx); /* 0x171B5D59: mov edi, dword ptr [edx] */
    ebx = ecx; /* 0x171B5D5B: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171B5D5D: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171B5D5D: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171B5D60: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx; /* 0x171B5D62: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171B5D64: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171B5D67: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0xC); /* 0x171B5D69: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B5D6C: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171B5D6F: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B5D72: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = ecx; /* 0x171B5D73: mov dword ptr [ebp + 0xc], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B5D54; /* 0x171B5D76: jne 0x171b5d54 */
L_171B5D78:
    edi = POP32_VAL(esp); /* 0x171B5D78: pop edi */
    esi = POP32_VAL(esp); /* 0x171B5D79: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B5D7A: pop ebx */
L_171B5D7B:
    ebp = POP32_VAL(esp); /* 0x171B5D7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x171B5D7C: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_171B5D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5D90u);

L_171B5D90:
    edi = edi; /* 0x171B5D90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5D92: push ebp */
    ebp = esp; /* 0x171B5D93: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x171B5D95: mov ecx, dword ptr [ebp + 0x10] */
    if (7u) _cf = (((ecx) >> 25) & 1u); /* 0x171B5D98: shl ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 7u; /* 0x171B5D98: shl ecx, 7 */
    PUSH32(esp, esi); /* 0x171B5D9B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B5D9C: mov esi, dword ptr [ebp + 8] */
    eax = ecx; /* 0x171B5D9F: mov eax, ecx */
    PUSH32(esp, edi); /* 0x171B5DA1: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171B5DA2: mov edi, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171B5DA5: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171B5DA5: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171B5DA8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171B5DAA: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171B5DAC: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171B5DAF: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = POP32_VAL(esp); /* 0x171B5DB1: pop edi */
    esi = POP32_VAL(esp); /* 0x171B5DB2: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B5DB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171B5DB4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171B5DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5DC0u);

L_171B5DC0:
    edi = edi; /* 0x171B5DC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5DC2: push ebp */
    ebp = esp; /* 0x171B5DC3: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x171B5DC5: mov ecx, dword ptr [ebp + 0xc] */
    edx = ecx; /* 0x171B5DC8: mov edx, ecx */
    PUSH32(esp, edi); /* 0x171B5DCA: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171B5DCB: mov edi, dword ptr [ebp + 8] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171B5DCE: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171B5DCE: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B5DD1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B5DD3: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x171B5DD5: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171B5DD7: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x171B5DDA: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    edi = POP32_VAL(esp); /* 0x171B5DDC: pop edi */
    ebp = POP32_VAL(esp); /* 0x171B5DDD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B5DDE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B5DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5DF0u);

L_171B5DF0:
    edi = edi; /* 0x171B5DF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5DF2: push ebp */
    ebp = esp; /* 0x171B5DF3: mov ebp, esp */
    eax = MEM32(esi + 0x18); /* 0x171B5DF5: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B5DF8: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0xFFu); /* 0x171B5DFA: mov byte ptr [ecx], 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B5DFD: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B5DFE: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B5E00: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B5E19; /* 0x171B5E03: jne 0x171b5e19 */
L_171B5E05:
    PUSH32(esp, esi); /* 0x171B5E05: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B5E06: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B5E09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5E19; /* 0x171B5E0B: jne 0x171b5e19 */
L_171B5E0D:
    eax = MEM32(esi); /* 0x171B5E0D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B5E0F: push esi */
    MEM32(eax + 0x14) = 0x18u; /* 0x171B5E10: mov dword ptr [eax + 0x14], 0x18 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B5E17: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5E19:
    eax = MEM32(esi + 0x18); /* 0x171B5E19: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B5E1C: mov ecx, dword ptr [eax] */
    SET_LO8(edx, MEM8(ebp + 0x8)); /* 0x171B5E1E: mov dl, byte ptr [ebp + 8] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B5E21: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B5E23: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B5E24: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B5E26: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B5E3F; /* 0x171B5E29: jne 0x171b5e3f */
L_171B5E2B:
    PUSH32(esp, esi); /* 0x171B5E2B: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B5E2C: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B5E2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5E3F; /* 0x171B5E31: jne 0x171b5e3f */
L_171B5E33:
    eax = MEM32(esi); /* 0x171B5E33: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B5E35: push esi */
    MEM32(eax + 0x14) = 0x18u; /* 0x171B5E36: mov dword ptr [eax + 0x14], 0x18 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B5E3D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5E3F:
    ebp = POP32_VAL(esp); /* 0x171B5E3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B5E40: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B5E50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B5E50u);

L_171B5E50:
    edi = edi; /* 0x171B5E50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5E52: push ebp */
    ebp = esp; /* 0x171B5E53: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x171B5E55: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x171B5E58: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171B5E5B: push ebx */
    PUSH32(esp, edi); /* 0x171B5E5C: push edi */
    edi = MEM32(esi + ecx * 4 + 0x48); /* 0x171B5E5D: mov edi, dword ptr [esi + ecx*4 + 0x48] */
    /* test edi, edi */ /* 0x171B5E61: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edi; /* 0x171B5E63: mov dword ptr [ebp - 8], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5E77; /* 0x171B5E66: jne 0x171b5e77 */
L_171B5E68:
    eax = MEM32(esi); /* 0x171B5E68: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x34u; /* 0x171B5E6A: mov dword ptr [eax + 0x14], 0x34 */
    PUSH32(esp, esi); /* 0x171B5E71: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B5E72: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B5E75: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5E77:
    MEM32(ebp + (-0x4)) = 0; /* 0x171B5E77: mov dword ptr [ebp - 4], 0 */
    eax = edi + 0x4; /* 0x171B5E7E: lea eax, [edi + 4] */
    ebx = 0x10u; /* 0x171B5E81: mov ebx, 0x10 */
    edx = 0xFFu; /* 0x171B5E86: mov edx, 0xff */
    goto L_171B5E90; /* 0x171B5E8B: jmp 0x171b5e90 */
L_171B5E90:
    /* cmp MEM16(eax + (-0x4)), LO16(edx) */ /* 0x171B5E90: cmp word ptr [eax - 4], dx */
    _flag_a = (uint32_t)(MEM16(eax + (-0x4))) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = 1; /* 0x171B5E94: mov ecx, 1 */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B5E9E; /* 0x171B5E99: jbe 0x171b5e9e */
L_171B5E9B:
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B5E9B: mov dword ptr [ebp - 4], ecx */
L_171B5E9E:
    /* cmp MEM16(eax + (-0x2)), LO16(edx) */ /* 0x171B5E9E: cmp word ptr [eax - 2], dx */
    _flag_a = (uint32_t)(MEM16(eax + (-0x2))) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B5EA7; /* 0x171B5EA2: jbe 0x171b5ea7 */
L_171B5EA4:
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B5EA4: mov dword ptr [ebp - 4], ecx */
L_171B5EA7:
    /* cmp MEM16(eax), LO16(edx) */ /* 0x171B5EA7: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B5EAF; /* 0x171B5EAA: jbe 0x171b5eaf */
L_171B5EAC:
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B5EAC: mov dword ptr [ebp - 4], ecx */
L_171B5EAF:
    /* cmp MEM16(eax + 0x2), LO16(edx) */ /* 0x171B5EAF: cmp word ptr [eax + 2], dx */
    _flag_a = (uint32_t)(MEM16(eax + 0x2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B5EB8; /* 0x171B5EB3: jbe 0x171b5eb8 */
L_171B5EB5:
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B5EB5: mov dword ptr [ebp - 4], ecx */
L_171B5EB8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171B5EB8: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B5EBB: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B5E90; /* 0x171B5EBC: jne 0x171b5e90 */
L_171B5EBE:
    eax = MEM32(edi + 0x80); /* 0x171B5EBE: mov eax, dword ptr [edi + 0x80] */
    /* test eax, eax */ /* 0x171B5EC4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6015; /* 0x171B5EC6: jne 0x171b6015 */
L_171B5ECC:
    eax = MEM32(esi + 0x18); /* 0x171B5ECC: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B5ECF: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B5ED1: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B5ED3: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B5ED4: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B5ED6: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B5EEF; /* 0x171B5ED9: jne 0x171b5eef */
L_171B5EDB:
    PUSH32(esp, esi); /* 0x171B5EDB: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B5EDC: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B5EDF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5EEF; /* 0x171B5EE1: jne 0x171b5eef */
L_171B5EE3:
    eax = MEM32(esi); /* 0x171B5EE3: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B5EE5: push esi */
    MEM32(eax + 0x14) = 0x18u; /* 0x171B5EE6: mov dword ptr [eax + 0x14], 0x18 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B5EED: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5EEF:
    eax = MEM32(esi + 0x18); /* 0x171B5EEF: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B5EF2: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0xDBu); /* 0x171B5EF4: mov byte ptr [ecx], 0xdb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B5EF7: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B5EF8: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B5EFA: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B5F13; /* 0x171B5EFD: jne 0x171b5f13 */
L_171B5EFF:
    PUSH32(esp, esi); /* 0x171B5EFF: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B5F00: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B5F03: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5F13; /* 0x171B5F05: jne 0x171b5f13 */
L_171B5F07:
    eax = MEM32(esi); /* 0x171B5F07: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B5F09: push esi */
    MEM32(eax + 0x14) = 0x18u; /* 0x171B5F0A: mov dword ptr [eax + 0x14], 0x18 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B5F11: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5F13:
    ebx = MEM32(ebp + (-0x4)); /* 0x171B5F13: mov ebx, dword ptr [ebp - 4] */
    eax = MEM32(esi + 0x18); /* 0x171B5F16: mov eax, dword ptr [esi + 0x18] */
    edi = MEM32(eax); /* 0x171B5F19: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x171B5F1B: neg ebx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171B5F1D: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    ebx = ebx & 0x40u; /* 0x171B5F1F: and ebx, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x43u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x43u; /* 0x171B5F22: add ebx, 0x43 */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x171B5F25: mov ecx, ebx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x171B5F27: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x171B5F2A: mov byte ptr [edi], cl */
    ecx = MEM32(eax + 0x4); /* 0x171B5F2C: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B5F2F: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B5F30: dec ecx */
    _flag_k = FK_DEC;
    MEM32(eax) = edi; /* 0x171B5F31: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = ecx; /* 0x171B5F33: mov dword ptr [eax + 4], ecx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B5F4F; /* 0x171B5F36: jne 0x171b5f4f */
L_171B5F38:
    PUSH32(esp, esi); /* 0x171B5F38: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B5F39: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B5F3C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5F4F; /* 0x171B5F3E: jne 0x171b5f4f */
L_171B5F40:
    eax = MEM32(esi); /* 0x171B5F40: mov eax, dword ptr [esi] */
    edi = 0x18u; /* 0x171B5F42: mov edi, 0x18 */
    PUSH32(esp, esi); /* 0x171B5F47: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B5F48: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B5F4B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    goto L_171B5F54; /* 0x171B5F4D: jmp 0x171b5f54 */
L_171B5F4F:
    edi = 0x18u; /* 0x171B5F4F: mov edi, 0x18 */
L_171B5F54:
    eax = MEM32(esi + 0x18); /* 0x171B5F54: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B5F57: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171B5F59: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B5F5B: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B5F5C: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B5F5E: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B5F73; /* 0x171B5F61: jne 0x171b5f73 */
L_171B5F63:
    PUSH32(esp, esi); /* 0x171B5F63: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B5F64: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B5F67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5F73; /* 0x171B5F69: jne 0x171b5f73 */
L_171B5F6B:
    eax = MEM32(esi); /* 0x171B5F6B: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B5F6D: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B5F6E: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B5F71: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5F73:
    eax = MEM32(esi + 0x18); /* 0x171B5F73: mov eax, dword ptr [esi + 0x18] */
    SET_LO8(edx, MEM8(ebp + (-0x4))); /* 0x171B5F76: mov dl, byte ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x171B5F79: mov ecx, dword ptr [eax] */
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x171B5F7B: mov bl, byte ptr [ebp + 8] */
    if (4u) _cf = (((LO8(edx)) >> 4) & 1u); /* 0x171B5F7E: shl dl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) << 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) << 4u); /* 0x171B5F7E: shl dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x171B5F81: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B5F83: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B5F85: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B5F86: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B5F88: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B5F9D; /* 0x171B5F8B: jne 0x171b5f9d */
L_171B5F8D:
    PUSH32(esp, esi); /* 0x171B5F8D: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B5F8E: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B5F91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5F9D; /* 0x171B5F93: jne 0x171b5f9d */
L_171B5F95:
    eax = MEM32(esi); /* 0x171B5F95: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B5F97: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B5F98: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B5F9B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5F9D:
    edi = 0x17025788u; /* 0x171B5F9D: mov edi, 0x17025788 */
L_171B5FA2:
    eax = MEM32(edi); /* 0x171B5FA2: mov eax, dword ptr [edi] */
    ecx = MEM32(ebp + (-0x8)); /* 0x171B5FA4: mov ecx, dword ptr [ebp - 8] */
    ebx = (uint32_t)MEM16(ecx + eax * 2); /* 0x171B5FA7: movzx ebx, word ptr [ecx + eax*2] */
    eax = MEM32(ebp + (-0x4)); /* 0x171B5FAB: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x171B5FAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B5FDA; /* 0x171B5FB0: je 0x171b5fda */
L_171B5FB2:
    eax = MEM32(esi + 0x18); /* 0x171B5FB2: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B5FB5: mov ecx, dword ptr [eax] */
    edx = ebx; /* 0x171B5FB7: mov edx, ebx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171B5FB9: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x171B5FB9: shr edx, 8 */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B5FBC: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B5FBE: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B5FBF: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B5FC1: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B5FDA; /* 0x171B5FC4: jne 0x171b5fda */
L_171B5FC6:
    PUSH32(esp, esi); /* 0x171B5FC6: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B5FC7: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B5FCA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5FDA; /* 0x171B5FCC: jne 0x171b5fda */
L_171B5FCE:
    eax = MEM32(esi); /* 0x171B5FCE: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B5FD0: push esi */
    MEM32(eax + 0x14) = 0x18u; /* 0x171B5FD1: mov dword ptr [eax + 0x14], 0x18 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B5FD8: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5FDA:
    eax = MEM32(esi + 0x18); /* 0x171B5FDA: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B5FDD: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171B5FDF: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B5FE1: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B5FE2: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B5FE4: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B5FFD; /* 0x171B5FE7: jne 0x171b5ffd */
L_171B5FE9:
    PUSH32(esp, esi); /* 0x171B5FE9: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B5FEA: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B5FED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B5FFD; /* 0x171B5FEF: jne 0x171b5ffd */
L_171B5FF1:
    eax = MEM32(esi); /* 0x171B5FF1: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B5FF3: push esi */
    MEM32(eax + 0x14) = 0x18u; /* 0x171B5FF4: mov dword ptr [eax + 0x14], 0x18 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B5FFB: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B5FFD:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171B5FFD: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, 0x17025888u */ /* 0x171B6000: cmp edi, 0x17025888 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x17025888u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B5FA2; /* 0x171B6006: jl 0x171b5fa2 */
L_171B6008:
    eax = MEM32(ebp + (-0x8)); /* 0x171B6008: mov eax, dword ptr [ebp - 8] */
    MEM32(eax + 0x80) = 1; /* 0x171B600B: mov dword ptr [eax + 0x80], 1 */
L_171B6015:
    eax = MEM32(ebp + (-0x4)); /* 0x171B6015: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171B6018: pop edi */
    ebx = POP32_VAL(esp); /* 0x171B6019: pop ebx */
    esp = ebp; /* 0x171B601A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B601C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B601D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B6030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6030u);

L_171B6030:
    edi = edi; /* 0x171B6030: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B6032: push ebp */
    ebp = esp; /* 0x171B6033: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x171B6035: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171B6038: push esi */
    /* test eax, eax */ /* 0x171B6039: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x171B603B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171B603E: push edi */
    esi = ecx; /* 0x171B603F: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B6052; /* 0x171B6041: je 0x171b6052 */
L_171B6043:
    edi = MEM32(esi + eax * 4 + 0x68); /* 0x171B6043: mov edi, dword ptr [esi + eax*4 + 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x171B6047: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edi; /* 0x171B604A: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + 0x8) = eax; /* 0x171B604D: mov dword ptr [ebp + 8], eax */
    goto L_171B605B; /* 0x171B6050: jmp 0x171b605b */
L_171B6052:
    ecx = MEM32(esi + eax * 4 + 0x58); /* 0x171B6052: mov ecx, dword ptr [esi + eax*4 + 0x58] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B6056: mov dword ptr [ebp - 8], ecx */
    edi = ecx; /* 0x171B6059: mov edi, ecx */
L_171B605B:
    /* test edi, edi */ /* 0x171B605B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6071; /* 0x171B605D: jne 0x171b6071 */
L_171B605F:
    eax = MEM32(esi); /* 0x171B605F: mov eax, dword ptr [esi] */
    edx = MEM32(ebp + 0x8); /* 0x171B6061: mov edx, dword ptr [ebp + 8] */
    MEM32(eax + 0x14) = 0x32u; /* 0x171B6064: mov dword ptr [eax + 0x14], 0x32 */
    PUSH32(esp, esi); /* 0x171B606B: push esi */
    MEM32(eax + 0x18) = edx; /* 0x171B606C: mov dword ptr [eax + 0x18], edx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B606F: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6071:
    eax = MEM32(edi + 0x114); /* 0x171B6071: mov eax, dword ptr [edi + 0x114] */
    /* test eax, eax */ /* 0x171B6077: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B61AA; /* 0x171B6079: jne 0x171b61aa */
L_171B607F:
    PUSH32(esp, 0xC4u); /* 0x171B607F: push 0xc4 */
    RECOMP_CALL(sub_171B5DF0); /* 0x171B6084: call 0x171b5df0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x171B6089: mov dword ptr [ebp - 4], 0 */
    eax = edi + 0x3; /* 0x171B6090: lea eax, [edi + 3] */
    ecx = 4; /* 0x171B6093: mov ecx, 4 */
    PUSH32(esp, ebx); /* 0x171B6098: push ebx */
    esp = esp; /* 0x171B6099: lea esp, [esp] */
L_171B60A0:
    edi = (uint32_t)MEM8(eax + (-0x1)); /* 0x171B60A0: movzx edi, byte ptr [eax - 1] */
    edx = (uint32_t)MEM8(eax + (-0x2)); /* 0x171B60A4: movzx edx, byte ptr [eax - 2] */
    ebx = MEM32(ebp + (-0x4)); /* 0x171B60A8: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x171B60AB: add edx, edi */
    _flag_k = FK_ADD;
    edi = (uint32_t)MEM8(eax + 0x1); /* 0x171B60AD: movzx edi, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x171B60B1: add edx, edi */
    _flag_k = FK_ADD;
    edi = (uint32_t)MEM8(eax); /* 0x171B60B3: movzx edi, byte ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171B60B6: add edi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x171B60B8: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B60BA: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B60BD: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edi; /* 0x171B60BE: mov dword ptr [ebp - 4], edi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B60A0; /* 0x171B60C1: jne 0x171b60a0 */
L_171B60C3:
    eax = MEM32(esi + 0x18); /* 0x171B60C3: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B60C6: mov ecx, dword ptr [eax] */
    ebx = edi; /* 0x171B60C8: mov ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x13u; /* 0x171B60CA: add ebx, 0x13 */
    _flag_k = FK_ADD;
    edx = ebx; /* 0x171B60CD: mov edx, ebx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171B60CF: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B60D2: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B60D4: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B60D5: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B60D7: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    edi = 0x18u; /* 0x171B60DA: mov edi, 0x18 */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B60F1; /* 0x171B60DF: jne 0x171b60f1 */
L_171B60E1:
    PUSH32(esp, esi); /* 0x171B60E1: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B60E2: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B60E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B60F1; /* 0x171B60E7: jne 0x171b60f1 */
L_171B60E9:
    eax = MEM32(esi); /* 0x171B60E9: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B60EB: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B60EC: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B60EF: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B60F1:
    eax = MEM32(esi + 0x18); /* 0x171B60F1: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B60F4: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171B60F6: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B60F8: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B60F9: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B60FB: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6110; /* 0x171B60FE: jne 0x171b6110 */
L_171B6100:
    PUSH32(esp, esi); /* 0x171B6100: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6101: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6104: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6110; /* 0x171B6106: jne 0x171b6110 */
L_171B6108:
    eax = MEM32(esi); /* 0x171B6108: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B610A: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B610B: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B610E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6110:
    eax = MEM32(esi + 0x18); /* 0x171B6110: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6113: mov ecx, dword ptr [eax] */
    SET_LO8(edx, MEM8(ebp + 0x8)); /* 0x171B6115: mov dl, byte ptr [ebp + 8] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6118: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B611A: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B611B: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B611D: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6132; /* 0x171B6120: jne 0x171b6132 */
L_171B6122:
    PUSH32(esp, esi); /* 0x171B6122: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6123: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6126: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6132; /* 0x171B6128: jne 0x171b6132 */
L_171B612A:
    eax = MEM32(esi); /* 0x171B612A: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B612C: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B612D: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6130: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6132:
    edi = 1; /* 0x171B6132: mov edi, 1 */
L_171B6137:
    eax = MEM32(esi + 0x18); /* 0x171B6137: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B613A: mov ecx, dword ptr [eax] */
    ebx = MEM32(ebp + (-0x8)); /* 0x171B613C: mov ebx, dword ptr [ebp - 8] */
    SET_LO8(edx, MEM8(edi + ebx)); /* 0x171B613F: mov dl, byte ptr [edi + ebx] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6142: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6144: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6145: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6147: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6160; /* 0x171B614A: jne 0x171b6160 */
L_171B614C:
    PUSH32(esp, esi); /* 0x171B614C: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B614D: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6150: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6160; /* 0x171B6152: jne 0x171b6160 */
L_171B6154:
    eax = MEM32(esi); /* 0x171B6154: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6156: push esi */
    MEM32(eax + 0x14) = 0x18u; /* 0x171B6157: mov dword ptr [eax + 0x14], 0x18 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B615E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6160:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B6160: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 0x10u */ /* 0x171B6161: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B6137; /* 0x171B6164: jle 0x171b6137 */
L_171B6166:
    eax = MEM32(ebp + (-0x4)); /* 0x171B6166: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B6169: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171B616B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B619F; /* 0x171B616D: jle 0x171b619f */
L_171B616F:
    /* nop */ /* 0x171B616F: nop  */
L_171B6170:
    eax = MEM32(esi + 0x18); /* 0x171B6170: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6173: mov ecx, dword ptr [eax] */
    SET_LO8(edx, MEM8(ebx + edi + 0x11)); /* 0x171B6175: mov dl, byte ptr [ebx + edi + 0x11] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6179: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B617B: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B617C: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B617E: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6197; /* 0x171B6181: jne 0x171b6197 */
L_171B6183:
    PUSH32(esp, esi); /* 0x171B6183: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6184: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6187: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6197; /* 0x171B6189: jne 0x171b6197 */
L_171B618B:
    eax = MEM32(esi); /* 0x171B618B: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B618D: push esi */
    MEM32(eax + 0x14) = 0x18u; /* 0x171B618E: mov dword ptr [eax + 0x14], 0x18 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6195: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6197:
    eax = MEM32(ebp + (-0x4)); /* 0x171B6197: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B619A: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, eax */ /* 0x171B619B: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B6170; /* 0x171B619D: jl 0x171b6170 */
L_171B619F:
    MEM32(ebx + 0x114) = 1; /* 0x171B619F: mov dword ptr [ebx + 0x114], 1 */
    ebx = POP32_VAL(esp); /* 0x171B61A9: pop ebx */
L_171B61AA:
    edi = POP32_VAL(esp); /* 0x171B61AA: pop edi */
    esi = POP32_VAL(esp); /* 0x171B61AB: pop esi */
    esp = ebp; /* 0x171B61AC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B61AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B61AF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B61C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B61C0u);

L_171B61C0:
    edi = edi; /* 0x171B61C0: mov edi, edi */
    PUSH32(esp, esi); /* 0x171B61C2: push esi */
    PUSH32(esp, edi); /* 0x171B61C3: push edi */
    esi = eax; /* 0x171B61C4: mov esi, eax */
    PUSH32(esp, 0xDDu); /* 0x171B61C6: push 0xdd */
    RECOMP_CALL(sub_171B5DF0); /* 0x171B61CB: call 0x171b5df0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x18); /* 0x171B61D0: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B61D3: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0); /* 0x171B61D5: mov byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B61D8: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B61D9: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B61DB: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    edi = 0x18u; /* 0x171B61DE: mov edi, 0x18 */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B61F5; /* 0x171B61E3: jne 0x171b61f5 */
L_171B61E5:
    PUSH32(esp, esi); /* 0x171B61E5: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B61E6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B61E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B61F5; /* 0x171B61EB: jne 0x171b61f5 */
L_171B61ED:
    eax = MEM32(esi); /* 0x171B61ED: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B61EF: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B61F0: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B61F3: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B61F5:
    eax = MEM32(esi + 0x18); /* 0x171B61F5: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B61F8: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(4); /* 0x171B61FA: mov byte ptr [ecx], 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B61FD: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B61FE: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6200: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6215; /* 0x171B6203: jne 0x171b6215 */
L_171B6205:
    PUSH32(esp, esi); /* 0x171B6205: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6206: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6209: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6215; /* 0x171B620B: jne 0x171b6215 */
L_171B620D:
    eax = MEM32(esi); /* 0x171B620D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B620F: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6210: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6213: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6215:
    eax = MEM32(esi + 0x18); /* 0x171B6215: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6218: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x171B621A: push ebx */
    ebx = MEM32(esi + 0xC8); /* 0x171B621B: mov ebx, dword ptr [esi + 0xc8] */
    edx = ebx; /* 0x171B6221: mov edx, ebx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171B6223: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6226: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6228: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6229: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B622B: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6240; /* 0x171B622E: jne 0x171b6240 */
L_171B6230:
    PUSH32(esp, esi); /* 0x171B6230: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6231: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6234: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6240; /* 0x171B6236: jne 0x171b6240 */
L_171B6238:
    eax = MEM32(esi); /* 0x171B6238: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B623A: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B623B: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B623E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6240:
    eax = MEM32(esi + 0x18); /* 0x171B6240: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6243: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171B6245: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6247: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6248: mov dword ptr [eax], ecx */
    ecx = MEM32(eax + 0x4); /* 0x171B624A: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B624D: dec ecx */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x171B624E: pop ebx */
    MEM32(eax + 0x4) = ecx; /* 0x171B624F: mov dword ptr [eax + 4], ecx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6264; /* 0x171B6252: jne 0x171b6264 */
L_171B6254:
    PUSH32(esp, esi); /* 0x171B6254: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6255: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6258: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6264; /* 0x171B625A: jne 0x171b6264 */
L_171B625C:
    eax = MEM32(esi); /* 0x171B625C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B625E: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B625F: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6262: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6264:
    edi = POP32_VAL(esp); /* 0x171B6264: pop edi */
    esi = POP32_VAL(esp); /* 0x171B6265: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B6266: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B6270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6270u);

L_171B6270:
    edi = edi; /* 0x171B6270: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B6272: push ebp */
    ebp = esp; /* 0x171B6273: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B6275: push ecx */
    PUSH32(esp, ebx); /* 0x171B6276: push ebx */
    PUSH32(esp, esi); /* 0x171B6277: push esi */
    PUSH32(esp, edi); /* 0x171B6278: push edi */
    esi = ecx; /* 0x171B6279: mov esi, ecx */
    PUSH32(esp, eax); /* 0x171B627B: push eax */
    RECOMP_CALL(sub_171B5DF0); /* 0x171B627C: call 0x171b5df0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x3C); /* 0x171B6281: mov eax, dword ptr [esi + 0x3c] */
    ebx = eax + eax * 2 + 0x8; /* 0x171B6284: lea ebx, [eax + eax*2 + 8] */
    eax = MEM32(esi + 0x18); /* 0x171B6288: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B628B: mov ecx, dword ptr [eax] */
    edx = ebx; /* 0x171B628D: mov edx, ebx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171B628F: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6292: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6294: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6295: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6297: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    edi = 0x18u; /* 0x171B629A: mov edi, 0x18 */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B62B1; /* 0x171B629F: jne 0x171b62b1 */
L_171B62A1:
    PUSH32(esp, esi); /* 0x171B62A1: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B62A2: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B62A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B62B1; /* 0x171B62A7: jne 0x171b62b1 */
L_171B62A9:
    eax = MEM32(esi); /* 0x171B62A9: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B62AB: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B62AC: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B62AF: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B62B1:
    eax = MEM32(esi + 0x18); /* 0x171B62B1: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B62B4: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171B62B6: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B62B8: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B62B9: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B62BB: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B62D0; /* 0x171B62BE: jne 0x171b62d0 */
L_171B62C0:
    PUSH32(esp, esi); /* 0x171B62C0: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B62C1: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B62C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B62D0; /* 0x171B62C6: jne 0x171b62d0 */
L_171B62C8:
    eax = MEM32(esi); /* 0x171B62C8: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B62CA: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B62CB: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B62CE: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B62D0:
    eax = MEM32(esi + 0x20); /* 0x171B62D0: mov eax, dword ptr [esi + 0x20] */
    ecx = 0xFFFFu; /* 0x171B62D3: mov ecx, 0xffff */
    /* cmp eax, ecx */ /* 0x171B62D8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B62E1; /* 0x171B62DA: jg 0x171b62e1 */
L_171B62DC:
    /* cmp MEM32(esi + 0x1C), ecx */ /* 0x171B62DC: cmp dword ptr [esi + 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B62F0; /* 0x171B62DF: jle 0x171b62f0 */
L_171B62E1:
    eax = MEM32(esi); /* 0x171B62E1: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x29u; /* 0x171B62E3: mov dword ptr [eax + 0x14], 0x29 */
    PUSH32(esp, esi); /* 0x171B62EA: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B62EB: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B62EE: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B62F0:
    eax = MEM32(esi + 0x18); /* 0x171B62F0: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B62F3: mov ecx, dword ptr [eax] */
    SET_LO8(edx, MEM8(esi + 0x38)); /* 0x171B62F5: mov dl, byte ptr [esi + 0x38] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B62F8: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B62FA: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B62FB: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B62FD: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6312; /* 0x171B6300: jne 0x171b6312 */
L_171B6302:
    PUSH32(esp, esi); /* 0x171B6302: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6303: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6306: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6312; /* 0x171B6308: jne 0x171b6312 */
L_171B630A:
    eax = MEM32(esi); /* 0x171B630A: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B630C: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B630D: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6310: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6312:
    eax = MEM32(esi + 0x18); /* 0x171B6312: mov eax, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x20); /* 0x171B6315: mov ebx, dword ptr [esi + 0x20] */
    ecx = MEM32(eax); /* 0x171B6318: mov ecx, dword ptr [eax] */
    edx = ebx; /* 0x171B631A: mov edx, ebx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171B631C: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B631F: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6321: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6322: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6324: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6339; /* 0x171B6327: jne 0x171b6339 */
L_171B6329:
    PUSH32(esp, esi); /* 0x171B6329: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B632A: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B632D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6339; /* 0x171B632F: jne 0x171b6339 */
L_171B6331:
    eax = MEM32(esi); /* 0x171B6331: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6333: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6334: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6337: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6339:
    eax = MEM32(esi + 0x18); /* 0x171B6339: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B633C: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171B633E: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6340: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6341: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6343: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6358; /* 0x171B6346: jne 0x171b6358 */
L_171B6348:
    PUSH32(esp, esi); /* 0x171B6348: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6349: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B634C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6358; /* 0x171B634E: jne 0x171b6358 */
L_171B6350:
    eax = MEM32(esi); /* 0x171B6350: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6352: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6353: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6356: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6358:
    eax = MEM32(esi + 0x18); /* 0x171B6358: mov eax, dword ptr [esi + 0x18] */
    ebx = MEM32(esi + 0x1C); /* 0x171B635B: mov ebx, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax); /* 0x171B635E: mov ecx, dword ptr [eax] */
    edx = ebx; /* 0x171B6360: mov edx, ebx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171B6362: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6365: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6367: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6368: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B636A: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B637F; /* 0x171B636D: jne 0x171b637f */
L_171B636F:
    PUSH32(esp, esi); /* 0x171B636F: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6370: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6373: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B637F; /* 0x171B6375: jne 0x171b637f */
L_171B6377:
    eax = MEM32(esi); /* 0x171B6377: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6379: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B637A: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B637D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B637F:
    eax = MEM32(esi + 0x18); /* 0x171B637F: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6382: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171B6384: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6386: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6387: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6389: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B639E; /* 0x171B638C: jne 0x171b639e */
L_171B638E:
    PUSH32(esp, esi); /* 0x171B638E: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B638F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6392: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B639E; /* 0x171B6394: jne 0x171b639e */
L_171B6396:
    eax = MEM32(esi); /* 0x171B6396: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6398: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6399: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B639C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B639E:
    eax = MEM32(esi + 0x18); /* 0x171B639E: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B63A1: mov ecx, dword ptr [eax] */
    SET_LO8(edx, MEM8(esi + 0x3C)); /* 0x171B63A3: mov dl, byte ptr [esi + 0x3c] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B63A6: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B63A8: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B63A9: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B63AB: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B63C0; /* 0x171B63AE: jne 0x171b63c0 */
L_171B63B0:
    PUSH32(esp, esi); /* 0x171B63B0: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B63B1: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B63B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B63C0; /* 0x171B63B6: jne 0x171b63c0 */
L_171B63B8:
    eax = MEM32(esi); /* 0x171B63B8: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B63BA: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B63BB: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B63BE: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B63C0:
    eax = MEM32(esi + 0x3C); /* 0x171B63C0: mov eax, dword ptr [esi + 0x3c] */
    /* test eax, eax */ /* 0x171B63C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(esi + 0x44); /* 0x171B63C5: mov edi, dword ptr [esi + 0x44] */
    MEM32(ebp + (-0x4)) = 0; /* 0x171B63C8: mov dword ptr [ebp - 4], 0 */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B6462; /* 0x171B63CF: jle 0x171b6462 */
L_171B63D5:
    eax = MEM32(esi + 0x18); /* 0x171B63D5: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B63D8: mov ecx, dword ptr [eax] */
    SET_LO8(edx, MEM8(edi)); /* 0x171B63DA: mov dl, byte ptr [edi] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B63DC: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B63DE: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B63DF: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B63E1: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B63FD; /* 0x171B63E4: jne 0x171b63fd */
L_171B63E6:
    PUSH32(esp, esi); /* 0x171B63E6: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B63E7: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B63EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B63FD; /* 0x171B63EC: jne 0x171b63fd */
L_171B63EE:
    eax = MEM32(esi); /* 0x171B63EE: mov eax, dword ptr [esi] */
    ebx = 0x18u; /* 0x171B63F0: mov ebx, 0x18 */
    PUSH32(esp, esi); /* 0x171B63F5: push esi */
    MEM32(eax + 0x14) = ebx; /* 0x171B63F6: mov dword ptr [eax + 0x14], ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B63F9: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    goto L_171B6402; /* 0x171B63FB: jmp 0x171b6402 */
L_171B63FD:
    ebx = 0x18u; /* 0x171B63FD: mov ebx, 0x18 */
L_171B6402:
    SET_LO8(edx, MEM8(edi + 0x8)); /* 0x171B6402: mov dl, byte ptr [edi + 8] */
    eax = MEM32(esi + 0x18); /* 0x171B6405: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6408: mov ecx, dword ptr [eax] */
    if (4u) _cf = (((LO8(edx)) >> 4) & 1u); /* 0x171B640A: shl dl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) << 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) << 4u); /* 0x171B640A: shl dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0xC)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(edi + 0xC)); /* 0x171B640D: add dl, byte ptr [edi + 0xc] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6410: inc ecx */
    _flag_k = FK_INC;
    MEM8(ecx + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x171B6411: mov byte ptr [ecx - 1], dl */
    MEM32(eax) = ecx; /* 0x171B6414: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6416: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B642B; /* 0x171B6419: jne 0x171b642b */
L_171B641B:
    PUSH32(esp, esi); /* 0x171B641B: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B641C: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B641F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B642B; /* 0x171B6421: jne 0x171b642b */
L_171B6423:
    eax = MEM32(esi); /* 0x171B6423: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6425: push esi */
    MEM32(eax + 0x14) = ebx; /* 0x171B6426: mov dword ptr [eax + 0x14], ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6429: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B642B:
    eax = MEM32(esi + 0x18); /* 0x171B642B: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B642E: mov ecx, dword ptr [eax] */
    SET_LO8(edx, MEM8(edi + 0x10)); /* 0x171B6430: mov dl, byte ptr [edi + 0x10] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6433: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6435: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6436: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6438: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B644D; /* 0x171B643B: jne 0x171b644d */
L_171B643D:
    PUSH32(esp, esi); /* 0x171B643D: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B643E: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6441: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B644D; /* 0x171B6443: jne 0x171b644d */
L_171B6445:
    eax = MEM32(esi); /* 0x171B6445: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6447: push esi */
    MEM32(eax + 0x14) = ebx; /* 0x171B6448: mov dword ptr [eax + 0x14], ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B644B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B644D:
    eax = MEM32(ebp + (-0x4)); /* 0x171B644D: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(esi + 0x3C); /* 0x171B6450: mov ecx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B6453: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x171B6454: add edi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x171B6457: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B6459: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B63D5; /* 0x171B645C: jl 0x171b63d5 */
L_171B6462:
    edi = POP32_VAL(esp); /* 0x171B6462: pop edi */
    esi = POP32_VAL(esp); /* 0x171B6463: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B6464: pop ebx */
    esp = ebp; /* 0x171B6465: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B6467: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B6468: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B6470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6470u);

L_171B6470:
    edi = edi; /* 0x171B6470: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B6472: push ebp */
    ebp = esp; /* 0x171B6473: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B6475: push ecx */
    PUSH32(esp, ebx); /* 0x171B6476: push ebx */
    PUSH32(esp, esi); /* 0x171B6477: push esi */
    PUSH32(esp, edi); /* 0x171B6478: push edi */
    esi = eax; /* 0x171B6479: mov esi, eax */
    PUSH32(esp, 0xDAu); /* 0x171B647B: push 0xda */
    RECOMP_CALL(sub_171B5DF0); /* 0x171B6480: call 0x171b5df0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(esi + 0xFC); /* 0x171B6485: mov ebx, dword ptr [esi + 0xfc] */
    eax = MEM32(esi + 0x18); /* 0x171B648B: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B648E: mov ecx, dword ptr [eax] */
    ebx = ebx + ebx + 0x6; /* 0x171B6490: lea ebx, [ebx + ebx + 6] */
    edx = ebx; /* 0x171B6494: mov edx, ebx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171B6496: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6499: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B649B: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B649C: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B649E: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    edi = 0x18u; /* 0x171B64A1: mov edi, 0x18 */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B64B8; /* 0x171B64A6: jne 0x171b64b8 */
L_171B64A8:
    PUSH32(esp, esi); /* 0x171B64A8: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B64A9: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B64AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B64B8; /* 0x171B64AE: jne 0x171b64b8 */
L_171B64B0:
    eax = MEM32(esi); /* 0x171B64B0: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B64B2: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B64B3: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B64B6: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B64B8:
    eax = MEM32(esi + 0x18); /* 0x171B64B8: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B64BB: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171B64BD: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B64BF: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B64C0: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B64C2: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B64D7; /* 0x171B64C5: jne 0x171b64d7 */
L_171B64C7:
    PUSH32(esp, esi); /* 0x171B64C7: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B64C8: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B64CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B64D7; /* 0x171B64CD: jne 0x171b64d7 */
L_171B64CF:
    eax = MEM32(esi); /* 0x171B64CF: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B64D1: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B64D2: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B64D5: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B64D7:
    eax = MEM32(esi + 0x18); /* 0x171B64D7: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B64DA: mov ecx, dword ptr [eax] */
    SET_LO8(edx, MEM8(esi + 0xFC)); /* 0x171B64DC: mov dl, byte ptr [esi + 0xfc] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B64E2: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B64E4: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B64E5: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B64E7: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B64FC; /* 0x171B64EA: jne 0x171b64fc */
L_171B64EC:
    PUSH32(esp, esi); /* 0x171B64EC: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B64ED: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B64F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B64FC; /* 0x171B64F2: jne 0x171b64fc */
L_171B64F4:
    eax = MEM32(esi); /* 0x171B64F4: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B64F6: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B64F7: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B64FA: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B64FC:
    eax = MEM32(esi + 0xFC); /* 0x171B64FC: mov eax, dword ptr [esi + 0xfc] */
    /* test eax, eax */ /* 0x171B6502: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0; /* 0x171B6504: mov dword ptr [ebp - 4], 0 */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B65B9; /* 0x171B650B: jle 0x171b65b9 */
L_171B6511:
    ebx = esi + 0x100; /* 0x171B6511: lea ebx, [esi + 0x100] */
L_171B6517:
    eax = MEM32(esi + 0x18); /* 0x171B6517: mov eax, dword ptr [esi + 0x18] */
    edi = MEM32(ebx); /* 0x171B651A: mov edi, dword ptr [ebx] */
    ecx = MEM32(eax); /* 0x171B651C: mov ecx, dword ptr [eax] */
    SET_LO8(edx, MEM8(edi)); /* 0x171B651E: mov dl, byte ptr [edi] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6520: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6522: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6523: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6525: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B653E; /* 0x171B6528: jne 0x171b653e */
L_171B652A:
    PUSH32(esp, esi); /* 0x171B652A: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B652B: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B652E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B653E; /* 0x171B6530: jne 0x171b653e */
L_171B6532:
    eax = MEM32(esi); /* 0x171B6532: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6534: push esi */
    MEM32(eax + 0x14) = 0x18u; /* 0x171B6535: mov dword ptr [eax + 0x14], 0x18 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B653C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B653E:
    eax = MEM32(esi + 0xEC); /* 0x171B653E: mov eax, dword ptr [esi + 0xec] */
    /* test eax, eax */ /* 0x171B6544: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x14); /* 0x171B6546: mov ecx, dword ptr [edi + 0x14] */
    edx = MEM32(edi + 0x18); /* 0x171B6549: mov edx, dword ptr [edi + 0x18] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B6570; /* 0x171B654C: je 0x171b6570 */
L_171B654E:
    eax = MEM32(esi + 0x144); /* 0x171B654E: mov eax, dword ptr [esi + 0x144] */
    /* test eax, eax */ /* 0x171B6554: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B656E; /* 0x171B6556: jne 0x171b656e */
L_171B6558:
    eax = MEM32(esi + 0x14C); /* 0x171B6558: mov eax, dword ptr [esi + 0x14c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B655E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171B6560: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B6570; /* 0x171B6562: je 0x171b6570 */
L_171B6564:
    eax = MEM32(esi + 0xB4); /* 0x171B6564: mov eax, dword ptr [esi + 0xb4] */
    /* test eax, eax */ /* 0x171B656A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6570; /* 0x171B656C: jne 0x171b6570 */
L_171B656E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B656E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B6570:
    eax = MEM32(esi + 0x18); /* 0x171B6570: mov eax, dword ptr [esi + 0x18] */
    edi = MEM32(eax); /* 0x171B6573: mov edi, dword ptr [eax] */
    if (4u) _cf = (((LO8(ecx)) >> 4) & 1u); /* 0x171B6575: shl cl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ecx) << 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ecx, LO8(ecx) << 4u); /* 0x171B6575: shl cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(edx)); /* 0x171B6578: add cl, dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x171B657A: mov byte ptr [edi], cl */
    ecx = MEM32(eax + 0x4); /* 0x171B657C: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B657F: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B6580: dec ecx */
    _flag_k = FK_DEC;
    MEM32(eax) = edi; /* 0x171B6581: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = ecx; /* 0x171B6583: mov dword ptr [eax + 4], ecx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B659C; /* 0x171B6586: jne 0x171b659c */
L_171B6588:
    PUSH32(esp, esi); /* 0x171B6588: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6589: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B658C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B659C; /* 0x171B658E: jne 0x171b659c */
L_171B6590:
    eax = MEM32(esi); /* 0x171B6590: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6592: push esi */
    MEM32(eax + 0x14) = 0x18u; /* 0x171B6593: mov dword ptr [eax + 0x14], 0x18 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B659A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B659C:
    eax = MEM32(ebp + (-0x4)); /* 0x171B659C: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(esi + 0xFC); /* 0x171B659F: mov ecx, dword ptr [esi + 0xfc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B65A5: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x171B65A6: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x171B65A9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B65AB: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B6517; /* 0x171B65AE: jl 0x171b6517 */
L_171B65B4:
    edi = 0x18u; /* 0x171B65B4: mov edi, 0x18 */
L_171B65B9:
    eax = MEM32(esi + 0x18); /* 0x171B65B9: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B65BC: mov ecx, dword ptr [eax] */
    SET_LO8(edx, MEM8(esi + 0x144)); /* 0x171B65BE: mov dl, byte ptr [esi + 0x144] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B65C4: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B65C6: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B65C7: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B65C9: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B65DE; /* 0x171B65CC: jne 0x171b65de */
L_171B65CE:
    PUSH32(esp, esi); /* 0x171B65CE: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B65CF: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B65D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B65DE; /* 0x171B65D4: jne 0x171b65de */
L_171B65D6:
    eax = MEM32(esi); /* 0x171B65D6: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B65D8: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B65D9: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B65DC: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B65DE:
    eax = MEM32(esi + 0x18); /* 0x171B65DE: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B65E1: mov ecx, dword ptr [eax] */
    SET_LO8(edx, MEM8(esi + 0x148)); /* 0x171B65E3: mov dl, byte ptr [esi + 0x148] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B65E9: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B65EB: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B65EC: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B65EE: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6603; /* 0x171B65F1: jne 0x171b6603 */
L_171B65F3:
    PUSH32(esp, esi); /* 0x171B65F3: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B65F4: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B65F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6603; /* 0x171B65F9: jne 0x171b6603 */
L_171B65FB:
    eax = MEM32(esi); /* 0x171B65FB: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B65FD: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B65FE: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6601: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6603:
    eax = MEM32(esi + 0x18); /* 0x171B6603: mov eax, dword ptr [esi + 0x18] */
    SET_LO8(edx, MEM8(esi + 0x14C)); /* 0x171B6606: mov dl, byte ptr [esi + 0x14c] */
    ecx = MEM32(eax); /* 0x171B660C: mov ecx, dword ptr [eax] */
    SET_LO8(ebx, MEM8(esi + 0x150)); /* 0x171B660E: mov bl, byte ptr [esi + 0x150] */
    if (4u) _cf = (((LO8(edx)) >> 4) & 1u); /* 0x171B6614: shl dl, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) << 4u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) << 4u); /* 0x171B6614: shl dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ebx)); /* 0x171B6617: add dl, bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6619: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B661B: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B661C: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B661E: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6633; /* 0x171B6621: jne 0x171b6633 */
L_171B6623:
    PUSH32(esp, esi); /* 0x171B6623: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6624: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6627: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6633; /* 0x171B6629: jne 0x171b6633 */
L_171B662B:
    eax = MEM32(esi); /* 0x171B662B: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B662D: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B662E: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6631: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6633:
    edi = POP32_VAL(esp); /* 0x171B6633: pop edi */
    esi = POP32_VAL(esp); /* 0x171B6634: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B6635: pop ebx */
    esp = ebp; /* 0x171B6636: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B6638: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B6639: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B6640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6640u);

L_171B6640:
    edi = edi; /* 0x171B6640: mov edi, edi */
    PUSH32(esp, esi); /* 0x171B6642: push esi */
    PUSH32(esp, edi); /* 0x171B6643: push edi */
    esi = eax; /* 0x171B6644: mov esi, eax */
    PUSH32(esp, 0xE0u); /* 0x171B6646: push 0xe0 */
    RECOMP_CALL(sub_171B5DF0); /* 0x171B664B: call 0x171b5df0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x18); /* 0x171B6650: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6653: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0); /* 0x171B6655: mov byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6658: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6659: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B665B: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    edi = 0x18u; /* 0x171B665E: mov edi, 0x18 */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6675; /* 0x171B6663: jne 0x171b6675 */
L_171B6665:
    PUSH32(esp, esi); /* 0x171B6665: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6666: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6669: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6675; /* 0x171B666B: jne 0x171b6675 */
L_171B666D:
    eax = MEM32(esi); /* 0x171B666D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B666F: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6670: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6673: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6675:
    eax = MEM32(esi + 0x18); /* 0x171B6675: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6678: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0x10u); /* 0x171B667A: mov byte ptr [ecx], 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B667D: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B667E: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6680: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6695; /* 0x171B6683: jne 0x171b6695 */
L_171B6685:
    PUSH32(esp, esi); /* 0x171B6685: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6686: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6689: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6695; /* 0x171B668B: jne 0x171b6695 */
L_171B668D:
    eax = MEM32(esi); /* 0x171B668D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B668F: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6690: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6693: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6695:
    eax = MEM32(esi + 0x18); /* 0x171B6695: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6698: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0x4Au); /* 0x171B669A: mov byte ptr [ecx], 0x4a */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B669D: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B669E: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B66A0: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B66B5; /* 0x171B66A3: jne 0x171b66b5 */
L_171B66A5:
    PUSH32(esp, esi); /* 0x171B66A5: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B66A6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B66A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B66B5; /* 0x171B66AB: jne 0x171b66b5 */
L_171B66AD:
    eax = MEM32(esi); /* 0x171B66AD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B66AF: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B66B0: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B66B3: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B66B5:
    eax = MEM32(esi + 0x18); /* 0x171B66B5: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B66B8: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0x46u); /* 0x171B66BA: mov byte ptr [ecx], 0x46 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B66BD: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B66BE: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B66C0: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B66D5; /* 0x171B66C3: jne 0x171b66d5 */
L_171B66C5:
    PUSH32(esp, esi); /* 0x171B66C5: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B66C6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B66C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B66D5; /* 0x171B66CB: jne 0x171b66d5 */
L_171B66CD:
    eax = MEM32(esi); /* 0x171B66CD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B66CF: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B66D0: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B66D3: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B66D5:
    eax = MEM32(esi + 0x18); /* 0x171B66D5: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B66D8: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0x49u); /* 0x171B66DA: mov byte ptr [ecx], 0x49 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B66DD: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B66DE: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B66E0: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B66F5; /* 0x171B66E3: jne 0x171b66f5 */
L_171B66E5:
    PUSH32(esp, esi); /* 0x171B66E5: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B66E6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B66E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B66F5; /* 0x171B66EB: jne 0x171b66f5 */
L_171B66ED:
    eax = MEM32(esi); /* 0x171B66ED: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B66EF: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B66F0: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B66F3: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B66F5:
    eax = MEM32(esi + 0x18); /* 0x171B66F5: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B66F8: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0x46u); /* 0x171B66FA: mov byte ptr [ecx], 0x46 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B66FD: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B66FE: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6700: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6715; /* 0x171B6703: jne 0x171b6715 */
L_171B6705:
    PUSH32(esp, esi); /* 0x171B6705: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6706: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6709: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6715; /* 0x171B670B: jne 0x171b6715 */
L_171B670D:
    eax = MEM32(esi); /* 0x171B670D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B670F: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6710: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6713: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6715:
    eax = MEM32(esi + 0x18); /* 0x171B6715: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6718: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0); /* 0x171B671A: mov byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B671D: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B671E: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6720: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6735; /* 0x171B6723: jne 0x171b6735 */
L_171B6725:
    PUSH32(esp, esi); /* 0x171B6725: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6726: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6729: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6735; /* 0x171B672B: jne 0x171b6735 */
L_171B672D:
    eax = MEM32(esi); /* 0x171B672D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B672F: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6730: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6733: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6735:
    eax = MEM32(esi + 0x18); /* 0x171B6735: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6738: mov ecx, dword ptr [eax] */
    SET_LO8(edx, MEM8(esi + 0xD4)); /* 0x171B673A: mov dl, byte ptr [esi + 0xd4] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6740: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6742: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6743: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6745: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B675A; /* 0x171B6748: jne 0x171b675a */
L_171B674A:
    PUSH32(esp, esi); /* 0x171B674A: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B674B: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B674E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B675A; /* 0x171B6750: jne 0x171b675a */
L_171B6752:
    eax = MEM32(esi); /* 0x171B6752: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6754: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6755: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6758: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B675A:
    eax = MEM32(esi + 0x18); /* 0x171B675A: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B675D: mov ecx, dword ptr [eax] */
    SET_LO8(edx, MEM8(esi + 0xD5)); /* 0x171B675F: mov dl, byte ptr [esi + 0xd5] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6765: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6767: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6768: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B676A: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B677F; /* 0x171B676D: jne 0x171b677f */
L_171B676F:
    PUSH32(esp, esi); /* 0x171B676F: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6770: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6773: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B677F; /* 0x171B6775: jne 0x171b677f */
L_171B6777:
    eax = MEM32(esi); /* 0x171B6777: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6779: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B677A: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B677D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B677F:
    eax = MEM32(esi + 0x18); /* 0x171B677F: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6782: mov ecx, dword ptr [eax] */
    SET_LO8(edx, MEM8(esi + 0xD6)); /* 0x171B6784: mov dl, byte ptr [esi + 0xd6] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B678A: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B678C: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B678D: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B678F: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B67A4; /* 0x171B6792: jne 0x171b67a4 */
L_171B6794:
    PUSH32(esp, esi); /* 0x171B6794: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6795: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6798: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B67A4; /* 0x171B679A: jne 0x171b67a4 */
L_171B679C:
    eax = MEM32(esi); /* 0x171B679C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B679E: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B679F: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B67A2: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B67A4:
    eax = MEM32(esi + 0x18); /* 0x171B67A4: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B67A7: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x171B67A9: push ebx */
    ebx = (uint32_t)MEM16(esi + 0xD8); /* 0x171B67AA: movzx ebx, word ptr [esi + 0xd8] */
    edx = ebx; /* 0x171B67B1: mov edx, ebx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171B67B3: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B67B6: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B67B8: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B67B9: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B67BB: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B67D0; /* 0x171B67BE: jne 0x171b67d0 */
L_171B67C0:
    PUSH32(esp, esi); /* 0x171B67C0: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B67C1: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B67C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B67D0; /* 0x171B67C6: jne 0x171b67d0 */
L_171B67C8:
    eax = MEM32(esi); /* 0x171B67C8: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B67CA: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B67CB: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B67CE: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B67D0:
    eax = MEM32(esi + 0x18); /* 0x171B67D0: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B67D3: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171B67D5: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B67D7: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B67D8: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B67DA: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B67EF; /* 0x171B67DD: jne 0x171b67ef */
L_171B67DF:
    PUSH32(esp, esi); /* 0x171B67DF: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B67E0: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B67E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B67EF; /* 0x171B67E5: jne 0x171b67ef */
L_171B67E7:
    eax = MEM32(esi); /* 0x171B67E7: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B67E9: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B67EA: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B67ED: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B67EF:
    ebx = (uint32_t)MEM16(esi + 0xDA); /* 0x171B67EF: movzx ebx, word ptr [esi + 0xda] */
    eax = MEM32(esi + 0x18); /* 0x171B67F6: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B67F9: mov ecx, dword ptr [eax] */
    edx = ebx; /* 0x171B67FB: mov edx, ebx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171B67FD: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6800: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6802: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6803: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6805: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B681A; /* 0x171B6808: jne 0x171b681a */
L_171B680A:
    PUSH32(esp, esi); /* 0x171B680A: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B680B: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B680E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B681A; /* 0x171B6810: jne 0x171b681a */
L_171B6812:
    eax = MEM32(esi); /* 0x171B6812: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6814: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6815: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6818: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B681A:
    eax = MEM32(esi + 0x18); /* 0x171B681A: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B681D: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171B681F: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6821: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6822: mov dword ptr [eax], ecx */
    ecx = MEM32(eax + 0x4); /* 0x171B6824: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B6827: dec ecx */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x171B6828: pop ebx */
    MEM32(eax + 0x4) = ecx; /* 0x171B6829: mov dword ptr [eax + 4], ecx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B683E; /* 0x171B682C: jne 0x171b683e */
L_171B682E:
    PUSH32(esp, esi); /* 0x171B682E: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B682F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6832: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B683E; /* 0x171B6834: jne 0x171b683e */
L_171B6836:
    eax = MEM32(esi); /* 0x171B6836: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6838: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6839: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B683C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B683E:
    eax = MEM32(esi + 0x18); /* 0x171B683E: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6841: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0); /* 0x171B6843: mov byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6846: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6847: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6849: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B685E; /* 0x171B684C: jne 0x171b685e */
L_171B684E:
    PUSH32(esp, esi); /* 0x171B684E: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B684F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6852: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B685E; /* 0x171B6854: jne 0x171b685e */
L_171B6856:
    eax = MEM32(esi); /* 0x171B6856: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6858: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6859: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B685C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B685E:
    eax = MEM32(esi + 0x18); /* 0x171B685E: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6861: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0); /* 0x171B6863: mov byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6866: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6867: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6869: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B687E; /* 0x171B686C: jne 0x171b687e */
L_171B686E:
    PUSH32(esp, esi); /* 0x171B686E: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B686F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6872: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B687E; /* 0x171B6874: jne 0x171b687e */
L_171B6876:
    eax = MEM32(esi); /* 0x171B6876: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6878: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6879: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B687C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B687E:
    edi = POP32_VAL(esp); /* 0x171B687E: pop edi */
    esi = POP32_VAL(esp); /* 0x171B687F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B6880: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B6890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6890u);

L_171B6890:
    edi = edi; /* 0x171B6890: mov edi, edi */
    PUSH32(esp, esi); /* 0x171B6892: push esi */
    PUSH32(esp, edi); /* 0x171B6893: push edi */
    esi = eax; /* 0x171B6894: mov esi, eax */
    PUSH32(esp, 0xEEu); /* 0x171B6896: push 0xee */
    RECOMP_CALL(sub_171B5DF0); /* 0x171B689B: call 0x171b5df0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x18); /* 0x171B68A0: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B68A3: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0); /* 0x171B68A5: mov byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B68A8: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B68A9: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B68AB: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    edi = 0x18u; /* 0x171B68AE: mov edi, 0x18 */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B68C5; /* 0x171B68B3: jne 0x171b68c5 */
L_171B68B5:
    PUSH32(esp, esi); /* 0x171B68B5: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B68B6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B68B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B68C5; /* 0x171B68BB: jne 0x171b68c5 */
L_171B68BD:
    eax = MEM32(esi); /* 0x171B68BD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B68BF: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B68C0: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B68C3: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B68C5:
    eax = MEM32(esi + 0x18); /* 0x171B68C5: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B68C8: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0xEu); /* 0x171B68CA: mov byte ptr [ecx], 0xe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B68CD: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B68CE: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B68D0: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B68E5; /* 0x171B68D3: jne 0x171b68e5 */
L_171B68D5:
    PUSH32(esp, esi); /* 0x171B68D5: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B68D6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B68D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B68E5; /* 0x171B68DB: jne 0x171b68e5 */
L_171B68DD:
    eax = MEM32(esi); /* 0x171B68DD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B68DF: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B68E0: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B68E3: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B68E5:
    eax = MEM32(esi + 0x18); /* 0x171B68E5: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B68E8: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0x41u); /* 0x171B68EA: mov byte ptr [ecx], 0x41 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B68ED: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B68EE: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B68F0: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6905; /* 0x171B68F3: jne 0x171b6905 */
L_171B68F5:
    PUSH32(esp, esi); /* 0x171B68F5: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B68F6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B68F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6905; /* 0x171B68FB: jne 0x171b6905 */
L_171B68FD:
    eax = MEM32(esi); /* 0x171B68FD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B68FF: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6900: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6903: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6905:
    eax = MEM32(esi + 0x18); /* 0x171B6905: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6908: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0x64u); /* 0x171B690A: mov byte ptr [ecx], 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B690D: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B690E: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6910: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6925; /* 0x171B6913: jne 0x171b6925 */
L_171B6915:
    PUSH32(esp, esi); /* 0x171B6915: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6916: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6919: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6925; /* 0x171B691B: jne 0x171b6925 */
L_171B691D:
    eax = MEM32(esi); /* 0x171B691D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B691F: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6920: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6923: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6925:
    eax = MEM32(esi + 0x18); /* 0x171B6925: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6928: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0x6Fu); /* 0x171B692A: mov byte ptr [ecx], 0x6f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B692D: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B692E: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6930: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6945; /* 0x171B6933: jne 0x171b6945 */
L_171B6935:
    PUSH32(esp, esi); /* 0x171B6935: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6936: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6939: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6945; /* 0x171B693B: jne 0x171b6945 */
L_171B693D:
    eax = MEM32(esi); /* 0x171B693D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B693F: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6940: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6943: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6945:
    eax = MEM32(esi + 0x18); /* 0x171B6945: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6948: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0x62u); /* 0x171B694A: mov byte ptr [ecx], 0x62 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B694D: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B694E: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6950: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6965; /* 0x171B6953: jne 0x171b6965 */
L_171B6955:
    PUSH32(esp, esi); /* 0x171B6955: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6956: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6959: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6965; /* 0x171B695B: jne 0x171b6965 */
L_171B695D:
    eax = MEM32(esi); /* 0x171B695D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B695F: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6960: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6963: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6965:
    eax = MEM32(esi + 0x18); /* 0x171B6965: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6968: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0x65u); /* 0x171B696A: mov byte ptr [ecx], 0x65 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B696D: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B696E: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6970: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6985; /* 0x171B6973: jne 0x171b6985 */
L_171B6975:
    PUSH32(esp, esi); /* 0x171B6975: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6976: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6979: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6985; /* 0x171B697B: jne 0x171b6985 */
L_171B697D:
    eax = MEM32(esi); /* 0x171B697D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B697F: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6980: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6983: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6985:
    eax = MEM32(esi + 0x18); /* 0x171B6985: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6988: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0); /* 0x171B698A: mov byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B698D: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B698E: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6990: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B69A5; /* 0x171B6993: jne 0x171b69a5 */
L_171B6995:
    PUSH32(esp, esi); /* 0x171B6995: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6996: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6999: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B69A5; /* 0x171B699B: jne 0x171b69a5 */
L_171B699D:
    eax = MEM32(esi); /* 0x171B699D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B699F: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B69A0: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B69A3: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B69A5:
    eax = MEM32(esi + 0x18); /* 0x171B69A5: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B69A8: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0x64u); /* 0x171B69AA: mov byte ptr [ecx], 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B69AD: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B69AE: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B69B0: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B69C5; /* 0x171B69B3: jne 0x171b69c5 */
L_171B69B5:
    PUSH32(esp, esi); /* 0x171B69B5: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B69B6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B69B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B69C5; /* 0x171B69BB: jne 0x171b69c5 */
L_171B69BD:
    eax = MEM32(esi); /* 0x171B69BD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B69BF: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B69C0: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B69C3: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B69C5:
    eax = MEM32(esi + 0x18); /* 0x171B69C5: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B69C8: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0); /* 0x171B69CA: mov byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B69CD: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B69CE: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B69D0: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B69E5; /* 0x171B69D3: jne 0x171b69e5 */
L_171B69D5:
    PUSH32(esp, esi); /* 0x171B69D5: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B69D6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B69D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B69E5; /* 0x171B69DB: jne 0x171b69e5 */
L_171B69DD:
    eax = MEM32(esi); /* 0x171B69DD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B69DF: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B69E0: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B69E3: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B69E5:
    eax = MEM32(esi + 0x18); /* 0x171B69E5: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B69E8: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0); /* 0x171B69EA: mov byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B69ED: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B69EE: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B69F0: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6A05; /* 0x171B69F3: jne 0x171b6a05 */
L_171B69F5:
    PUSH32(esp, esi); /* 0x171B69F5: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B69F6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B69F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6A05; /* 0x171B69FB: jne 0x171b6a05 */
L_171B69FD:
    eax = MEM32(esi); /* 0x171B69FD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B69FF: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6A00: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6A03: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6A05:
    eax = MEM32(esi + 0x18); /* 0x171B6A05: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6A08: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0); /* 0x171B6A0A: mov byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6A0D: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6A0E: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6A10: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6A25; /* 0x171B6A13: jne 0x171b6a25 */
L_171B6A15:
    PUSH32(esp, esi); /* 0x171B6A15: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6A16: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6A19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6A25; /* 0x171B6A1B: jne 0x171b6a25 */
L_171B6A1D:
    eax = MEM32(esi); /* 0x171B6A1D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6A1F: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6A20: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6A23: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6A25:
    eax = MEM32(esi + 0x18); /* 0x171B6A25: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6A28: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0); /* 0x171B6A2A: mov byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6A2D: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6A2E: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6A30: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6A45; /* 0x171B6A33: jne 0x171b6a45 */
L_171B6A35:
    PUSH32(esp, esi); /* 0x171B6A35: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6A36: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6A39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6A45; /* 0x171B6A3B: jne 0x171b6a45 */
L_171B6A3D:
    eax = MEM32(esi); /* 0x171B6A3D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6A3F: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6A40: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6A43: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6A45:
    eax = MEM32(esi + 0x40); /* 0x171B6A45: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x171B6A48: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B6A61; /* 0x171B6A4B: je 0x171b6a61 */
L_171B6A4D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x171B6A4D: sub eax, 2 */
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x18); /* 0x171B6A50: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6A53: mov ecx, dword ptr [eax] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B6A5C; /* 0x171B6A55: je 0x171b6a5c */
L_171B6A57:
    MEM8(ecx) = (uint8_t)(0); /* 0x171B6A57: mov byte ptr [ecx], 0 */
    goto L_171B6A69; /* 0x171B6A5A: jmp 0x171b6a69 */
L_171B6A5C:
    MEM8(ecx) = (uint8_t)(2); /* 0x171B6A5C: mov byte ptr [ecx], 2 */
    goto L_171B6A69; /* 0x171B6A5F: jmp 0x171b6a69 */
L_171B6A61:
    eax = MEM32(esi + 0x18); /* 0x171B6A61: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6A64: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(1); /* 0x171B6A66: mov byte ptr [ecx], 1 */
L_171B6A69:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6A69: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6A6A: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6A6C: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6A81; /* 0x171B6A6F: jne 0x171b6a81 */
L_171B6A71:
    PUSH32(esp, esi); /* 0x171B6A71: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6A72: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6A75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6A81; /* 0x171B6A77: jne 0x171b6a81 */
L_171B6A79:
    eax = MEM32(esi); /* 0x171B6A79: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6A7B: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6A7C: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6A7F: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6A81:
    edi = POP32_VAL(esp); /* 0x171B6A81: pop edi */
    esi = POP32_VAL(esp); /* 0x171B6A82: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B6A83: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B6A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6A90u);

L_171B6A90:
    edi = edi; /* 0x171B6A90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B6A92: push ebp */
    ebp = esp; /* 0x171B6A93: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B6A95: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B6A96: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171B6A99: push edi */
    edi = MEM32(ebp + 0x10); /* 0x171B6A9A: mov edi, dword ptr [ebp + 0x10] */
    /* cmp edi, 0xFFFDu */ /* 0x171B6A9D: cmp edi, 0xfffd */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B6AB1; /* 0x171B6AA3: jbe 0x171b6ab1 */
L_171B6AA5:
    eax = MEM32(esi); /* 0x171B6AA5: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6AA7: push esi */
    MEM32(eax + 0x14) = 0xBu; /* 0x171B6AA8: mov dword ptr [eax + 0x14], 0xb */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6AAF: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6AB1:
    eax = MEM32(ebp + 0xC); /* 0x171B6AB1: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171B6AB4: push ebx */
    PUSH32(esp, eax); /* 0x171B6AB5: push eax */
    RECOMP_CALL(sub_171B5DF0); /* 0x171B6AB6: call 0x171b5df0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x18); /* 0x171B6ABB: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6ABE: mov ecx, dword ptr [eax] */
    ebx = edi + 0x2; /* 0x171B6AC0: lea ebx, [edi + 2] */
    edx = ebx; /* 0x171B6AC3: mov edx, ebx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171B6AC5: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6AC8: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6ACA: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6ACB: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6ACD: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    edi = 0x18u; /* 0x171B6AD0: mov edi, 0x18 */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6AE7; /* 0x171B6AD5: jne 0x171b6ae7 */
L_171B6AD7:
    PUSH32(esp, esi); /* 0x171B6AD7: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6AD8: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6ADB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6AE7; /* 0x171B6ADD: jne 0x171b6ae7 */
L_171B6ADF:
    eax = MEM32(esi); /* 0x171B6ADF: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6AE1: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6AE2: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6AE5: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6AE7:
    eax = MEM32(esi + 0x18); /* 0x171B6AE7: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6AEA: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171B6AEC: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6AEE: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6AEF: mov dword ptr [eax], ecx */
    ecx = MEM32(eax + 0x4); /* 0x171B6AF1: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B6AF4: dec ecx */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x171B6AF5: pop ebx */
    MEM32(eax + 0x4) = ecx; /* 0x171B6AF6: mov dword ptr [eax + 4], ecx */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6B0B; /* 0x171B6AF9: jne 0x171b6b0b */
L_171B6AFB:
    PUSH32(esp, esi); /* 0x171B6AFB: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6AFC: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6AFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6B0B; /* 0x171B6B01: jne 0x171b6b0b */
L_171B6B03:
    eax = MEM32(esi); /* 0x171B6B03: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6B05: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6B06: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6B09: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6B0B:
    edi = POP32_VAL(esp); /* 0x171B6B0B: pop edi */
    esi = POP32_VAL(esp); /* 0x171B6B0C: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B6B0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171B6B0E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171B6B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6B20u);

L_171B6B20:
    edi = edi; /* 0x171B6B20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B6B22: push ebp */
    ebp = esp; /* 0x171B6B23: mov ebp, esp */
    SET_LO8(edx, MEM8(ebp + 0xC)); /* 0x171B6B25: mov dl, byte ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171B6B28: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B6B29: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x18); /* 0x171B6B2C: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6B2F: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171B6B31: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6B33: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6B34: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6B36: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6B4F; /* 0x171B6B39: jne 0x171b6b4f */
L_171B6B3B:
    PUSH32(esp, esi); /* 0x171B6B3B: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6B3C: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6B3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6B4F; /* 0x171B6B41: jne 0x171b6b4f */
L_171B6B43:
    eax = MEM32(esi); /* 0x171B6B43: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6B45: push esi */
    MEM32(eax + 0x14) = 0x18u; /* 0x171B6B46: mov dword ptr [eax + 0x14], 0x18 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6B4D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6B4F:
    esi = POP32_VAL(esp); /* 0x171B6B4F: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B6B50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B6B51: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B6B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6B60u);

L_171B6B60:
    edi = edi; /* 0x171B6B60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B6B62: push ebp */
    ebp = esp; /* 0x171B6B63: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B6B65: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B6B66: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171B6B69: push edi */
    edi = MEM32(esi + 0x164); /* 0x171B6B6A: mov edi, dword ptr [esi + 0x164] */
    PUSH32(esp, 0xD8u); /* 0x171B6B70: push 0xd8 */
    RECOMP_CALL(sub_171B5DF0); /* 0x171B6B75: call 0x171b5df0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xD0); /* 0x171B6B7A: mov eax, dword ptr [esi + 0xd0] */
    /* test eax, eax */ /* 0x171B6B80: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x1C) = 0; /* 0x171B6B82: mov dword ptr [edi + 0x1c], 0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B6B92; /* 0x171B6B89: je 0x171b6b92 */
L_171B6B8B:
    eax = esi; /* 0x171B6B8B: mov eax, esi */
    RECOMP_CALL(sub_171B6640); /* 0x171B6B8D: call 0x171b6640 */
    RECOMP_FLAGS_IN();
L_171B6B92:
    eax = MEM32(esi + 0xDC); /* 0x171B6B92: mov eax, dword ptr [esi + 0xdc] */
    /* test eax, eax */ /* 0x171B6B98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B6BA3; /* 0x171B6B9A: je 0x171b6ba3 */
L_171B6B9C:
    eax = esi; /* 0x171B6B9C: mov eax, esi */
    RECOMP_CALL(sub_171B6890); /* 0x171B6B9E: call 0x171b6890 */
    RECOMP_FLAGS_IN();
L_171B6BA3:
    edi = POP32_VAL(esp); /* 0x171B6BA3: pop edi */
    esi = POP32_VAL(esp); /* 0x171B6BA4: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B6BA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B6BA6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B6BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6BB0u);

L_171B6BB0:
    edi = edi; /* 0x171B6BB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B6BB2: push ebp */
    ebp = esp; /* 0x171B6BB3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B6BB5: push ecx */
    PUSH32(esp, ebx); /* 0x171B6BB6: push ebx */
    PUSH32(esp, esi); /* 0x171B6BB7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B6BB8: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x3C); /* 0x171B6BBB: mov ecx, dword ptr [esi + 0x3c] */
    eax = MEM32(esi + 0x44); /* 0x171B6BBE: mov eax, dword ptr [esi + 0x44] */
    PUSH32(esp, edi); /* 0x171B6BC1: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B6BC2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edi */ /* 0x171B6BC4: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x171B6BC6: mov dword ptr [ebp - 4], edi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B6BEB; /* 0x171B6BC9: jle 0x171b6beb */
L_171B6BCB:
    ebx = eax + 0x10; /* 0x171B6BCB: lea ebx, [eax + 0x10] */
    edi = edi; /* 0x171B6BCE: mov edi, edi */
L_171B6BD0:
    eax = MEM32(ebx); /* 0x171B6BD0: mov eax, dword ptr [ebx] */
    PUSH32(esp, eax); /* 0x171B6BD2: push eax */
    RECOMP_CALL(sub_171B5E50); /* 0x171B6BD3: call 0x171b5e50 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x171B6BD8: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171B6BDB: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x3C); /* 0x171B6BDD: mov eax, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B6BE0: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x54u; /* 0x171B6BE1: add ebx, 0x54 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x171B6BE4: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B6BE6: mov dword ptr [ebp - 4], ecx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B6BD0; /* 0x171B6BE9: jl 0x171b6bd0 */
L_171B6BEB:
    eax = MEM32(esi + 0xB4); /* 0x171B6BEB: mov eax, dword ptr [esi + 0xb4] */
    /* test eax, eax */ /* 0x171B6BF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6C4E; /* 0x171B6BF3: jne 0x171b6c4e */
L_171B6BF5:
    eax = MEM32(esi + 0xEC); /* 0x171B6BF5: mov eax, dword ptr [esi + 0xec] */
    /* test eax, eax */ /* 0x171B6BFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6C4E; /* 0x171B6BFD: jne 0x171b6c4e */
L_171B6BFF:
    /* cmp MEM32(esi + 0x38), 8 */ /* 0x171B6BFF: cmp dword ptr [esi + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B6C4E; /* 0x171B6C03: jne 0x171b6c4e */
L_171B6C05:
    ecx = MEM32(esi + 0x3C); /* 0x171B6C05: mov ecx, dword ptr [esi + 0x3c] */
    /* test ecx, ecx */ /* 0x171B6C08: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x44); /* 0x171B6C0A: mov eax, dword ptr [esi + 0x44] */
    edx = 1; /* 0x171B6C0D: mov edx, 1 */
    edi = edx; /* 0x171B6C12: mov edi, edx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B6C31; /* 0x171B6C14: jle 0x171b6c31 */
L_171B6C16:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x171B6C16: add eax, 0x18 */
    _flag_k = FK_ADD;
    esp = esp; /* 0x171B6C19: lea esp, [esp] */
L_171B6C20:
    /* cmp MEM32(eax + (-0x4)), edx */ /* 0x171B6C20: cmp dword ptr [eax - 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + (-0x4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B6C29; /* 0x171B6C23: jg 0x171b6c29 */
L_171B6C25:
    /* cmp MEM32(eax), edx */ /* 0x171B6C25: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B6C2B; /* 0x171B6C27: jle 0x171b6c2b */
L_171B6C29:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B6C29: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B6C2B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x54u; /* 0x171B6C2B: add eax, 0x54 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B6C2E: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6C20; /* 0x171B6C2F: jne 0x171b6c20 */
L_171B6C31:
    eax = MEM32(ebp + (-0x4)); /* 0x171B6C31: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x171B6C34: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B6C50; /* 0x171B6C36: je 0x171b6c50 */
L_171B6C38:
    /* test edi, edi */ /* 0x171B6C38: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B6C50; /* 0x171B6C3A: je 0x171b6c50 */
L_171B6C3C:
    eax = MEM32(esi); /* 0x171B6C3C: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B6C3E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171B6C40: push edi */
    PUSH32(esp, esi); /* 0x171B6C41: push esi */
    MEM32(eax + 0x14) = 0x4Bu; /* 0x171B6C42: mov dword ptr [eax + 0x14], 0x4b */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B6C49: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_171B6C50; /* 0x171B6C4C: jmp 0x171b6c50 */
L_171B6C4E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B6C4E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B6C50:
    eax = MEM32(esi + 0xB4); /* 0x171B6C50: mov eax, dword ptr [esi + 0xb4] */
    /* test eax, eax */ /* 0x171B6C56: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B6C6F; /* 0x171B6C58: je 0x171b6c6f */
L_171B6C5A:
    eax = 0xC9u; /* 0x171B6C5A: mov eax, 0xc9 */
    ecx = esi; /* 0x171B6C5F: mov ecx, esi */
    RECOMP_CALL(sub_171B6270); /* 0x171B6C61: call 0x171b6270 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171B6C66: pop edi */
    esi = POP32_VAL(esp); /* 0x171B6C67: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B6C68: pop ebx */
    esp = ebp; /* 0x171B6C69: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B6C6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B6C6C: ret 4 */
L_171B6C6F:
    eax = MEM32(esi + 0xEC); /* 0x171B6C6F: mov eax, dword ptr [esi + 0xec] */
    /* test eax, eax */ /* 0x171B6C75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B6C8E; /* 0x171B6C77: je 0x171b6c8e */
L_171B6C79:
    eax = 0xC2u; /* 0x171B6C79: mov eax, 0xc2 */
    ecx = esi; /* 0x171B6C7E: mov ecx, esi */
    RECOMP_CALL(sub_171B6270); /* 0x171B6C80: call 0x171b6270 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171B6C85: pop edi */
    esi = POP32_VAL(esp); /* 0x171B6C86: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B6C87: pop ebx */
    esp = ebp; /* 0x171B6C88: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B6C8A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B6C8B: ret 4 */
L_171B6C8E:
    /* test edi, edi */ /* 0x171B6C8E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xC0u; /* 0x171B6C90: mov eax, 0xc0 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6C9C; /* 0x171B6C95: jne 0x171b6c9c */
L_171B6C97:
    eax = 0xC1u; /* 0x171B6C97: mov eax, 0xc1 */
L_171B6C9C:
    ecx = esi; /* 0x171B6C9C: mov ecx, esi */
    RECOMP_CALL(sub_171B6270); /* 0x171B6C9E: call 0x171b6270 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171B6CA3: pop edi */
    esi = POP32_VAL(esp); /* 0x171B6CA4: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B6CA5: pop ebx */
    esp = ebp; /* 0x171B6CA6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B6CA8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B6CA9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B6CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6CC0u);

L_171B6CC0:
    edi = edi; /* 0x171B6CC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B6CC2: push ebp */
    ebp = esp; /* 0x171B6CC3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B6CC5: push ecx */
    PUSH32(esp, esi); /* 0x171B6CC6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B6CC7: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0xB4); /* 0x171B6CCA: mov eax, dword ptr [esi + 0xb4] */
    /* test eax, eax */ /* 0x171B6CD0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171B6CD2: push edi */
    edi = MEM32(esi + 0x164); /* 0x171B6CD3: mov edi, dword ptr [esi + 0x164] */
    MEM32(ebp + (-0x4)) = edi; /* 0x171B6CD9: mov dword ptr [ebp - 4], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6D59; /* 0x171B6CDC: jne 0x171b6d59 */
L_171B6CDE:
    eax = MEM32(esi + 0xFC); /* 0x171B6CDE: mov eax, dword ptr [esi + 0xfc] */
    /* test eax, eax */ /* 0x171B6CE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = 0; /* 0x171B6CE6: mov dword ptr [ebp + 8], 0 */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B6D59; /* 0x171B6CED: jle 0x171b6d59 */
L_171B6CEF:
    PUSH32(esp, ebx); /* 0x171B6CEF: push ebx */
    ebx = esi + 0x100; /* 0x171B6CF0: lea ebx, [esi + 0x100] */
L_171B6CF6:
    eax = MEM32(esi + 0xEC); /* 0x171B6CF6: mov eax, dword ptr [esi + 0xec] */
    /* test eax, eax */ /* 0x171B6CFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebx); /* 0x171B6CFE: mov edi, dword ptr [ebx] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B6D24; /* 0x171B6D00: je 0x171b6d24 */
L_171B6D02:
    eax = MEM32(esi + 0x144); /* 0x171B6D02: mov eax, dword ptr [esi + 0x144] */
    /* test eax, eax */ /* 0x171B6D08: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6D1E; /* 0x171B6D0A: jne 0x171b6d1e */
L_171B6D0C:
    eax = MEM32(esi + 0x14C); /* 0x171B6D0C: mov eax, dword ptr [esi + 0x14c] */
    /* test eax, eax */ /* 0x171B6D12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6D41; /* 0x171B6D14: jne 0x171b6d41 */
L_171B6D16:
    eax = MEM32(edi + 0x14); /* 0x171B6D16: mov eax, dword ptr [edi + 0x14] */
    PUSH32(esp, eax); /* 0x171B6D19: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B6D1A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171B6D3A; /* 0x171B6D1C: jmp 0x171b6d3a */
L_171B6D1E:
    ecx = MEM32(edi + 0x18); /* 0x171B6D1E: mov ecx, dword ptr [edi + 0x18] */
    PUSH32(esp, ecx); /* 0x171B6D21: push ecx */
    goto L_171B6D35; /* 0x171B6D22: jmp 0x171b6d35 */
L_171B6D24:
    edx = MEM32(edi + 0x14); /* 0x171B6D24: mov edx, dword ptr [edi + 0x14] */
    PUSH32(esp, edx); /* 0x171B6D27: push edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B6D28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x171B6D2A: mov ecx, esi */
    RECOMP_CALL(sub_171B6030); /* 0x171B6D2C: call 0x171b6030 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x18); /* 0x171B6D31: mov eax, dword ptr [edi + 0x18] */
    PUSH32(esp, eax); /* 0x171B6D34: push eax */
L_171B6D35:
    eax = 1; /* 0x171B6D35: mov eax, 1 */
L_171B6D3A:
    ecx = esi; /* 0x171B6D3A: mov ecx, esi */
    RECOMP_CALL(sub_171B6030); /* 0x171B6D3C: call 0x171b6030 */
    RECOMP_FLAGS_IN();
L_171B6D41:
    eax = MEM32(ebp + 0x8); /* 0x171B6D41: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0xFC); /* 0x171B6D44: mov ecx, dword ptr [esi + 0xfc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B6D4A: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x171B6D4B: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x171B6D4E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x171B6D50: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B6CF6; /* 0x171B6D53: jl 0x171b6cf6 */
L_171B6D55:
    edi = MEM32(ebp + (-0x4)); /* 0x171B6D55: mov edi, dword ptr [ebp - 4] */
    ebx = POP32_VAL(esp); /* 0x171B6D58: pop ebx */
L_171B6D59:
    ecx = MEM32(esi + 0xC8); /* 0x171B6D59: mov ecx, dword ptr [esi + 0xc8] */
    /* cmp ecx, MEM32(edi + 0x1C) */ /* 0x171B6D5F: cmp ecx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B6D74; /* 0x171B6D62: je 0x171b6d74 */
L_171B6D64:
    eax = esi; /* 0x171B6D64: mov eax, esi */
    RECOMP_CALL(sub_171B61C0); /* 0x171B6D66: call 0x171b61c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0xC8); /* 0x171B6D6B: mov edx, dword ptr [esi + 0xc8] */
    MEM32(edi + 0x1C) = edx; /* 0x171B6D71: mov dword ptr [edi + 0x1c], edx */
L_171B6D74:
    eax = esi; /* 0x171B6D74: mov eax, esi */
    RECOMP_CALL(sub_171B6470); /* 0x171B6D76: call 0x171b6470 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171B6D7B: pop edi */
    esi = POP32_VAL(esp); /* 0x171B6D7C: pop esi */
    esp = ebp; /* 0x171B6D7D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B6D7F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B6D80: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B6D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6D90u);

L_171B6D90:
    edi = edi; /* 0x171B6D90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B6D92: push ebp */
    ebp = esp; /* 0x171B6D93: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B6D95: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B6D96: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0xD9u); /* 0x171B6D99: push 0xd9 */
    RECOMP_CALL(sub_171B5DF0); /* 0x171B6D9E: call 0x171b5df0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171B6DA3: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B6DA4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B6DA5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B6DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6DB0u);

L_171B6DB0:
    edi = edi; /* 0x171B6DB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B6DB2: push ebp */
    ebp = esp; /* 0x171B6DB3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B6DB5: push ebx */
    PUSH32(esp, esi); /* 0x171B6DB6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B6DB7: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171B6DBA: push edi */
    PUSH32(esp, 0xD8u); /* 0x171B6DBB: push 0xd8 */
    RECOMP_CALL(sub_171B5DF0); /* 0x171B6DC0: call 0x171b5df0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B6DC5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi + 0x48; /* 0x171B6DC7: lea ebx, [esi + 0x48] */
    ebx = ebx; /* 0x171B6DCA: lea ebx, [ebx] */
L_171B6DD0:
    /* cmp MEM32(ebx), 0 */ /* 0x171B6DD0: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B6DDB; /* 0x171B6DD3: je 0x171b6ddb */
L_171B6DD5:
    PUSH32(esp, edi); /* 0x171B6DD5: push edi */
    RECOMP_CALL(sub_171B5E50); /* 0x171B6DD6: call 0x171b5e50 */
    RECOMP_FLAGS_IN();
L_171B6DDB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B6DDB: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x171B6DDC: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, 4 */ /* 0x171B6DDF: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B6DD0; /* 0x171B6DE2: jl 0x171b6dd0 */
L_171B6DE4:
    eax = MEM32(esi + 0xB4); /* 0x171B6DE4: mov eax, dword ptr [esi + 0xb4] */
    /* test eax, eax */ /* 0x171B6DEA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6E1F; /* 0x171B6DEC: jne 0x171b6e1f */
L_171B6DEE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B6DEE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi + 0x68; /* 0x171B6DF0: lea ebx, [esi + 0x68] */
L_171B6DF3:
    eax = MEM32(ebx + (-0x10)); /* 0x171B6DF3: mov eax, dword ptr [ebx - 0x10] */
    /* test eax, eax */ /* 0x171B6DF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B6E04; /* 0x171B6DF8: je 0x171b6e04 */
L_171B6DFA:
    PUSH32(esp, edi); /* 0x171B6DFA: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B6DFB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x171B6DFD: mov ecx, esi */
    RECOMP_CALL(sub_171B6030); /* 0x171B6DFF: call 0x171b6030 */
    RECOMP_FLAGS_IN();
L_171B6E04:
    /* cmp MEM32(ebx), 0 */ /* 0x171B6E04: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B6E16; /* 0x171B6E07: je 0x171b6e16 */
L_171B6E09:
    PUSH32(esp, edi); /* 0x171B6E09: push edi */
    eax = 1; /* 0x171B6E0A: mov eax, 1 */
    ecx = esi; /* 0x171B6E0F: mov ecx, esi */
    RECOMP_CALL(sub_171B6030); /* 0x171B6E11: call 0x171b6030 */
    RECOMP_FLAGS_IN();
L_171B6E16:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B6E16: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x171B6E17: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, 4 */ /* 0x171B6E1A: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B6DF3; /* 0x171B6E1D: jl 0x171b6df3 */
L_171B6E1F:
    eax = MEM32(esi + 0x18); /* 0x171B6E1F: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6E22: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0xFFu); /* 0x171B6E24: mov byte ptr [ecx], 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6E27: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6E28: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6E2A: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    edi = 0x18u; /* 0x171B6E2D: mov edi, 0x18 */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6E44; /* 0x171B6E32: jne 0x171b6e44 */
L_171B6E34:
    PUSH32(esp, esi); /* 0x171B6E34: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6E35: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6E38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6E44; /* 0x171B6E3A: jne 0x171b6e44 */
L_171B6E3C:
    eax = MEM32(esi); /* 0x171B6E3C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6E3E: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6E3F: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6E42: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6E44:
    eax = MEM32(esi + 0x18); /* 0x171B6E44: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B6E47: mov ecx, dword ptr [eax] */
    MEM8(ecx) = (uint8_t)(0xD9u); /* 0x171B6E49: mov byte ptr [ecx], 0xd9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B6E4C: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B6E4D: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) - 1; /* 0x171B6E4F: dec dword ptr [eax + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B6E64; /* 0x171B6E52: jne 0x171b6e64 */
L_171B6E54:
    PUSH32(esp, esi); /* 0x171B6E54: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B6E55: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B6E58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6E64; /* 0x171B6E5A: jne 0x171b6e64 */
L_171B6E5C:
    eax = MEM32(esi); /* 0x171B6E5C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B6E5E: push esi */
    MEM32(eax + 0x14) = edi; /* 0x171B6E5F: mov dword ptr [eax + 0x14], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6E62: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B6E64:
    edi = POP32_VAL(esp); /* 0x171B6E64: pop edi */
    esi = POP32_VAL(esp); /* 0x171B6E65: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B6E66: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B6E67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B6E68: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B6E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6E70u);

L_171B6E70:
    edi = edi; /* 0x171B6E70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B6E72: push ebp */
    ebp = esp; /* 0x171B6E73: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B6E75: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B6E76: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171B6E79: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 0x20u); /* 0x171B6E7C: push 0x20 */
    PUSH32(esp, 1); /* 0x171B6E7E: push 1 */
    PUSH32(esp, esi); /* 0x171B6E80: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6E81: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x164) = eax; /* 0x171B6E83: mov dword ptr [esi + 0x164], eax */
    MEM32(eax) = 0x171B6B60u; /* 0x171B6E89: mov dword ptr [eax], 0x171b6b60 */
    MEM32(eax + 0x4) = 0x171B6BB0u; /* 0x171B6E8F: mov dword ptr [eax + 4], 0x171b6bb0 */
    MEM32(eax + 0x8) = 0x171B6CC0u; /* 0x171B6E96: mov dword ptr [eax + 8], 0x171b6cc0 */
    MEM32(eax + 0xC) = 0x171B6D90u; /* 0x171B6E9D: mov dword ptr [eax + 0xc], 0x171b6d90 */
    MEM32(eax + 0x10) = 0x171B6DB0u; /* 0x171B6EA4: mov dword ptr [eax + 0x10], 0x171b6db0 */
    MEM32(eax + 0x14) = 0x171B6A90u; /* 0x171B6EAB: mov dword ptr [eax + 0x14], 0x171b6a90 */
    MEM32(eax + 0x18) = 0x171B6B20u; /* 0x171B6EB2: mov dword ptr [eax + 0x18], 0x171b6b20 */
    MEM32(eax + 0x1C) = 0; /* 0x171B6EB9: mov dword ptr [eax + 0x1c], 0 */
    esi = POP32_VAL(esp); /* 0x171B6EC0: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B6EC1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B6EC2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B6ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6ED0u);

L_171B6ED0:
    edi = edi; /* 0x171B6ED0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B6ED2: push ebp */
    ebp = esp; /* 0x171B6ED3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B6ED5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B6ED6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x171B6ED9: push 0 */
    PUSH32(esp, esi); /* 0x171B6EDB: push esi */
    RECOMP_CALL(sub_171C2B20); /* 0x171B6EDC: call 0x171c2b20 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xB0); /* 0x171B6EE1: mov eax, dword ptr [esi + 0xb0] */
    /* test eax, eax */ /* 0x171B6EE7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6EFF; /* 0x171B6EE9: jne 0x171b6eff */
L_171B6EEB:
    PUSH32(esp, esi); /* 0x171B6EEB: push esi */
    RECOMP_CALL(sub_171C1F30); /* 0x171B6EEC: call 0x171c1f30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171B6EF1: push esi */
    RECOMP_CALL(sub_171C16C0); /* 0x171B6EF2: call 0x171c16c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x171B6EF7: push 0 */
    PUSH32(esp, esi); /* 0x171B6EF9: push esi */
    RECOMP_CALL(sub_171C0BC0); /* 0x171B6EFA: call 0x171c0bc0 */
    RECOMP_FLAGS_IN();
L_171B6EFF:
    PUSH32(esp, esi); /* 0x171B6EFF: push esi */
    RECOMP_CALL(sub_171C0580); /* 0x171B6F00: call 0x171c0580 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xB4); /* 0x171B6F05: mov eax, dword ptr [esi + 0xb4] */
    /* test eax, eax */ /* 0x171B6F0B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171B6F0D: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B6F1D; /* 0x171B6F0E: je 0x171b6f1d */
L_171B6F10:
    eax = MEM32(esi); /* 0x171B6F10: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 1; /* 0x171B6F12: mov dword ptr [eax + 0x14], 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6F19: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    goto L_171B6F33; /* 0x171B6F1B: jmp 0x171b6f33 */
L_171B6F1D:
    eax = MEM32(esi + 0xEC); /* 0x171B6F1D: mov eax, dword ptr [esi + 0xec] */
    /* test eax, eax */ /* 0x171B6F23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B6F2E; /* 0x171B6F25: je 0x171b6f2e */
L_171B6F27:
    RECOMP_CALL(sub_171BF750); /* 0x171B6F27: call 0x171bf750 */
    RECOMP_FLAGS_IN();
    goto L_171B6F33; /* 0x171B6F2C: jmp 0x171b6f33 */
L_171B6F2E:
    RECOMP_CALL(sub_171BEAE0); /* 0x171B6F2E: call 0x171beae0 */
    RECOMP_FLAGS_IN();
L_171B6F33:
    /* cmp MEM32(esi + 0xA8), 1 */ /* 0x171B6F33: cmp dword ptr [esi + 0xa8], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xA8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B6F4A; /* 0x171B6F3A: jg 0x171b6f4a */
L_171B6F3C:
    eax = MEM32(esi + 0xB8); /* 0x171B6F3C: mov eax, dword ptr [esi + 0xb8] */
    /* test eax, eax */ /* 0x171B6F42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B6F4A; /* 0x171B6F44: jne 0x171b6f4a */
L_171B6F46:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B6F46: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171B6F4F; /* 0x171B6F48: jmp 0x171b6f4f */
L_171B6F4A:
    eax = 1; /* 0x171B6F4A: mov eax, 1 */
L_171B6F4F:
    PUSH32(esp, eax); /* 0x171B6F4F: push eax */
    PUSH32(esp, esi); /* 0x171B6F50: push esi */
    RECOMP_CALL(sub_171BDB70); /* 0x171B6F51: call 0x171bdb70 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x171B6F56: push 0 */
    PUSH32(esp, esi); /* 0x171B6F58: push esi */
    RECOMP_CALL(sub_171BD320); /* 0x171B6F59: call 0x171bd320 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171B6F5E: push esi */
    RECOMP_CALL(sub_171B6E70); /* 0x171B6F5F: call 0x171b6e70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x171B6F64: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, esi); /* 0x171B6F67: push esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x171B6F68: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x164); /* 0x171B6F6B: mov ecx, dword ptr [esi + 0x164] */
    PUSH32(esp, esi); /* 0x171B6F71: push esi */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171B6F72: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171B6F74: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B6F75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B6F76: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B6F80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B6F80u);

L_171B6F80:
    edi = edi; /* 0x171B6F80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B6F82: push ebp */
    ebp = esp; /* 0x171B6F83: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171B6F85: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x24); /* 0x171B6F88: mov ecx, dword ptr [esi + 0x24] */
    eax = MEM32(esi + 0x4); /* 0x171B6F8B: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, ebx); /* 0x171B6F8E: push ebx */
    ebx = MEM32(esi + 0x1AC); /* 0x171B6F8F: mov ebx, dword ptr [esi + 0x1ac] */
    PUSH32(esp, edi); /* 0x171B6F95: push edi */
    edi = MEM32(esi + 0x140); /* 0x171B6F96: mov edi, dword ptr [esi + 0x140] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x171B6F9C: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x171B6F9C: shl ecx, 3 */
    PUSH32(esp, ecx); /* 0x171B6F9F: push ecx */
    PUSH32(esp, 1); /* 0x171B6FA0: push 1 */
    PUSH32(esp, esi); /* 0x171B6FA2: push esi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x171B6FA3: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6FA6: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x24); /* 0x171B6FA8: mov ecx, dword ptr [esi + 0x24] */
    edx = eax + ecx * 4; /* 0x171B6FAB: lea edx, [eax + ecx*4] */
    MEM32(ebx + 0x38) = eax; /* 0x171B6FAE: mov dword ptr [ebx + 0x38], eax */
    eax = MEM32(esi + 0xDC); /* 0x171B6FB1: mov eax, dword ptr [esi + 0xdc] */
    MEM32(ebx + 0x3C) = edx; /* 0x171B6FB7: mov dword ptr [ebx + 0x3c], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B6FBA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171B6FBC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B7020; /* 0x171B6FBE: jle 0x171b7020 */
L_171B6FC0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171B6FC0: add edi, 4 */
    _flag_k = FK_ADD;
    ecx = eax + 0xC; /* 0x171B6FC3: lea ecx, [eax + 0xc] */
    MEM32(ebp + (-0x8)) = edi; /* 0x171B6FC6: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B6FC9: mov dword ptr [ebp - 4], ecx */
    goto L_171B6FD1; /* 0x171B6FCC: jmp 0x171b6fd1 */
L_171B6FCE:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B6FCE: mov ecx, dword ptr [ebp - 4] */
L_171B6FD1:
    eax = MEM32(ecx + 0x18); /* 0x171B6FD1: mov eax, dword ptr [ecx + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx)); /* 0x171B6FD4: imul eax, dword ptr [ecx] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B6FD7: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(esi + 0x140); /* 0x171B6FD8: idiv dword ptr [esi + 0x140] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    edi = MEM32(ebp + (-0x8)); /* 0x171B6FDE: mov edi, dword ptr [ebp - 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax); /* 0x171B6FE1: imul edi, eax */
    ecx = edi * 8; /* 0x171B6FE4: lea ecx, [edi*8] */
    PUSH32(esp, ecx); /* 0x171B6FEB: push ecx */
    PUSH32(esp, 1); /* 0x171B6FEC: push 1 */
    MEM32(ebp + (-0xC)) = eax; /* 0x171B6FEE: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi + 0x4); /* 0x171B6FF1: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, esi); /* 0x171B6FF4: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B6FF5: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xC)); /* 0x171B6FF7: mov edx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x10)); /* 0x171B6FFA: mov ecx, dword ptr [ebp - 0x10] */
    eax = eax + edx * 4; /* 0x171B6FFD: lea eax, [eax + edx*4] */
    edx = MEM32(ecx + 0x38); /* 0x171B7000: mov edx, dword ptr [ecx + 0x38] */
    ecx = MEM32(ecx + 0x3C); /* 0x171B7003: mov ecx, dword ptr [ecx + 0x3c] */
    MEM32(edx + ebx * 4) = eax; /* 0x171B7006: mov dword ptr [edx + ebx*4], eax */
    eax = eax + edi * 4; /* 0x171B7009: lea eax, [eax + edi*4] */
    MEM32(ecx + ebx * 4) = eax; /* 0x171B700C: mov dword ptr [ecx + ebx*4], eax */
    ecx = MEM32(ebp + (-0x4)); /* 0x171B700F: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(esi + 0x24); /* 0x171B7012: mov eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B7015: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x54u; /* 0x171B7016: add ecx, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x171B7019: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B701B: mov dword ptr [ebp - 4], ecx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B6FCE; /* 0x171B701E: jl 0x171b6fce */
L_171B7020:
    edi = POP32_VAL(esp); /* 0x171B7020: pop edi */
    ebx = POP32_VAL(esp); /* 0x171B7021: pop ebx */
    esp = ebp; /* 0x171B7022: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B7024: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B7025: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B7030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B7030u);

L_171B7030:
    edi = edi; /* 0x171B7030: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B7032: push ebp */
    ebp = esp; /* 0x171B7033: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x171B7035: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x1AC); /* 0x171B7038: mov eax, dword ptr [ecx + 0x1ac] */
    edx = MEM32(ecx + 0xDC); /* 0x171B703E: mov edx, dword ptr [ecx + 0xdc] */
    PUSH32(esp, ebx); /* 0x171B7044: push ebx */
    ebx = MEM32(ecx + 0x140); /* 0x171B7045: mov ebx, dword ptr [ecx + 0x140] */
    ecx = MEM32(ecx + 0x24); /* 0x171B704B: mov ecx, dword ptr [ecx + 0x24] */
    /* test ecx, ecx */ /* 0x171B704E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ebx; /* 0x171B7050: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x171B7053: mov dword ptr [ebp - 0x1c], ecx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B7169; /* 0x171B7056: jle 0x171b7169 */
L_171B705C:
    ecx = MEM32(eax + 0x3C); /* 0x171B705C: mov ecx, dword ptr [eax + 0x3c] */
    PUSH32(esp, esi); /* 0x171B705F: push esi */
    esi = eax + 0x8; /* 0x171B7060: lea esi, [eax + 8] */
    MEM32(ebp + (-0xC)) = esi; /* 0x171B7063: mov dword ptr [ebp - 0xc], esi */
    esi = MEM32(eax + 0x38); /* 0x171B7066: mov esi, dword ptr [eax + 0x38] */
    eax = MEM32(ebp + (-0x1C)); /* 0x171B7069: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x171B706C: add edx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x171B706F: sub esi, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171B7071: push edi */
    MEM32(ebp + (-0x10)) = edx; /* 0x171B7072: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B7075: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x20)) = esi; /* 0x171B7078: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x171B707B: mov dword ptr [ebp - 0x1c], eax */
    goto L_171B7090; /* 0x171B707E: jmp 0x171b7090 */
L_171B7080:
    esi = MEM32(ebp + (-0x20)); /* 0x171B7080: mov esi, dword ptr [ebp - 0x20] */
    ecx = MEM32(ebp + (-0x8)); /* 0x171B7083: mov ecx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x10)); /* 0x171B7086: mov edx, dword ptr [ebp - 0x10] */
    esp = esp; /* 0x171B7089: lea esp, [esp] */
L_171B7090:
    eax = MEM32(edx + 0x18); /* 0x171B7090: mov eax, dword ptr [edx + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edx)); /* 0x171B7093: imul eax, dword ptr [edx] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B7096: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x171B7097: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    edx = MEM32(esi + ecx); /* 0x171B7099: mov edx, dword ptr [esi + ecx] */
    esi = MEM32(ebp + (-0xC)); /* 0x171B709C: mov esi, dword ptr [ebp - 0xc] */
    edi = MEM32(esi); /* 0x171B709F: mov edi, dword ptr [esi] */
    ecx = MEM32(ecx); /* 0x171B70A1: mov ecx, dword ptr [ecx] */
    esi = ebx + 0x2; /* 0x171B70A3: lea esi, [ebx + 2] */
    MEM32(ebp + (-0x4)) = edx; /* 0x171B70A6: mov dword ptr [ebp - 4], edx */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax); /* 0x171B70A9: imul esi, eax */
    /* test esi, esi */ /* 0x171B70AC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B70DE; /* 0x171B70AE: jle 0x171b70de */
L_171B70B0:
    ebx = edi; /* 0x171B70B0: mov ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x171B70B2: sub ebx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = ebx; /* 0x171B70B4: mov dword ptr [ebp - 0x24], ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x171B70B7: mov ebx, dword ptr [ebp - 4] */
    edx = ecx; /* 0x171B70BA: mov edx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x171B70BC: sub ebx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = esi; /* 0x171B70BE: mov dword ptr [ebp - 0x14], esi */
L_171B70C1:
    esi = MEM32(ebp + (-0x24)); /* 0x171B70C1: mov esi, dword ptr [ebp - 0x24] */
    esi = MEM32(esi + edx); /* 0x171B70C4: mov esi, dword ptr [esi + edx] */
    MEM32(edx) = esi; /* 0x171B70C7: mov dword ptr [edx], esi */
    MEM32(ebx + edx) = esi; /* 0x171B70C9: mov dword ptr [ebx + edx], esi */
    esi = MEM32(ebp + (-0x14)); /* 0x171B70CC: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171B70CF: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171B70D2: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = esi; /* 0x171B70D3: mov dword ptr [ebp - 0x14], esi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B70C1; /* 0x171B70D6: jne 0x171b70c1 */
L_171B70D8:
    edx = MEM32(ebp + (-0x4)); /* 0x171B70D8: mov edx, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + (-0x18)); /* 0x171B70DB: mov ebx, dword ptr [ebp - 0x18] */
L_171B70DE:
    esi = eax + eax; /* 0x171B70DE: lea esi, [eax + eax] */
    /* test esi, esi */ /* 0x171B70E1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B7121; /* 0x171B70E3: jle 0x171b7121 */
L_171B70E5:
    edx = eax; /* 0x171B70E5: mov edx, eax */
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx); /* 0x171B70E7: imul edx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFFEu; /* 0x171B70EA: add ebx, -2 */
    _flag_k = FK_ADD;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x171B70ED: imul ebx, eax */
    esi = ecx + edx * 4; /* 0x171B70F0: lea esi, [ecx + edx*4] */
    edx = edi + ebx * 4; /* 0x171B70F3: lea edx, [edi + ebx*4] */
    ebx = edi; /* 0x171B70F6: mov ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x171B70F8: sub ebx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x171B70FA: sub ecx, edi */
    _flag_k = FK_CMP;
    edi = eax + eax; /* 0x171B70FC: lea edi, [eax + eax] */
    MEM32(ebp + (-0x14)) = edi; /* 0x171B70FF: mov dword ptr [ebp - 0x14], edi */
L_171B7102:
    edi = MEM32(esi + ebx); /* 0x171B7102: mov edi, dword ptr [esi + ebx] */
    MEM32(ecx + edx) = edi; /* 0x171B7105: mov dword ptr [ecx + edx], edi */
    edi = MEM32(edx); /* 0x171B7108: mov edi, dword ptr [edx] */
    MEM32(esi) = edi; /* 0x171B710A: mov dword ptr [esi], edi */
    edi = MEM32(ebp + (-0x14)); /* 0x171B710C: mov edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171B710F: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171B7112: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B7115: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = edi; /* 0x171B7116: mov dword ptr [ebp - 0x14], edi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B7102; /* 0x171B7119: jne 0x171b7102 */
L_171B711B:
    edx = MEM32(ebp + (-0x4)); /* 0x171B711B: mov edx, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + (-0x18)); /* 0x171B711E: mov ebx, dword ptr [ebp - 0x18] */
L_171B7121:
    /* test eax, eax */ /* 0x171B7121: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B713C; /* 0x171B7123: jle 0x171b713c */
L_171B7125:
    ecx = eax * 4; /* 0x171B7125: lea ecx, [eax*4] */
    esi = ecx; /* 0x171B712C: mov esi, ecx */
    ecx = edx; /* 0x171B712E: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x171B7130: sub ecx, esi */
    _flag_k = FK_CMP;
L_171B7132:
    esi = MEM32(edx); /* 0x171B7132: mov esi, dword ptr [edx] */
    MEM32(ecx) = esi; /* 0x171B7134: mov dword ptr [ecx], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171B7136: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B7139: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B7132; /* 0x171B713A: jne 0x171b7132 */
L_171B713C:
    esi = MEM32(ebp + (-0x8)); /* 0x171B713C: mov esi, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0xC)); /* 0x171B713F: mov edx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x10)); /* 0x171B7142: mov ecx, dword ptr [ebp - 0x10] */
    eax = 4; /* 0x171B7145: mov eax, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x171B714A: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171B714C: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x1C)); /* 0x171B714E: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x54u; /* 0x171B7151: add ecx, 0x54 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B7154: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = esi; /* 0x171B7155: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0xC)) = edx; /* 0x171B7158: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x171B715B: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x171B715E: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B7080; /* 0x171B7161: jne 0x171b7080 */
L_171B7167:
    edi = POP32_VAL(esp); /* 0x171B7167: pop edi */
    esi = POP32_VAL(esp); /* 0x171B7168: pop esi */
L_171B7169:
    ebx = POP32_VAL(esp); /* 0x171B7169: pop ebx */
    esp = ebp; /* 0x171B716A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B716C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B716D: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B7180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B7180u);

L_171B7180:
    edi = edi; /* 0x171B7180: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B7182: push ebp */
    ebp = esp; /* 0x171B7183: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x171B7185: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x140); /* 0x171B7188: mov ecx, dword ptr [eax + 0x140] */
    edx = MEM32(eax + 0x1AC); /* 0x171B718E: mov edx, dword ptr [eax + 0x1ac] */
    PUSH32(esp, ebx); /* 0x171B7194: push ebx */
    ebx = MEM32(eax + 0xDC); /* 0x171B7195: mov ebx, dword ptr [eax + 0xdc] */
    eax = MEM32(eax + 0x24); /* 0x171B719B: mov eax, dword ptr [eax + 0x24] */
    /* test eax, eax */ /* 0x171B719E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x171B71A0: mov dword ptr [ebp - 0x1c], ecx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B7254; /* 0x171B71A3: jle 0x171b7254 */
L_171B71A9:
    PUSH32(esp, esi); /* 0x171B71A9: push esi */
    esi = MEM32(edx + 0x38); /* 0x171B71AA: mov esi, dword ptr [edx + 0x38] */
    PUSH32(esp, edi); /* 0x171B71AD: push edi */
    edi = MEM32(edx + 0x3C); /* 0x171B71AE: mov edi, dword ptr [edx + 0x3c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x171B71B1: add ebx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x171B71B4: sub esi, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x171B71B6: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = edi; /* 0x171B71B9: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x14)) = esi; /* 0x171B71BC: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x10)) = eax; /* 0x171B71BF: mov dword ptr [ebp - 0x10], eax */
    goto L_171B71C7; /* 0x171B71C2: jmp 0x171b71c7 */
L_171B71C4:
    esi = MEM32(ebp + (-0x14)); /* 0x171B71C4: mov esi, dword ptr [ebp - 0x14] */
L_171B71C7:
    eax = MEM32(ebx + 0x18); /* 0x171B71C7: mov eax, dword ptr [ebx + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx)); /* 0x171B71CA: imul eax, dword ptr [ebx] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B71CD: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x171B71CE: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    edx = MEM32(esi + edi); /* 0x171B71D0: mov edx, dword ptr [esi + edi] */
    esi = MEM32(edi); /* 0x171B71D3: mov esi, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = edx; /* 0x171B71D5: mov dword ptr [ebp - 4], edx */
    /* test eax, eax */ /* 0x171B71D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B7239; /* 0x171B71DA: jle 0x171b7239 */
L_171B71DC:
    edx = ecx + 0x2; /* 0x171B71DC: lea edx, [ecx + 2] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x171B71DF: imul edx, eax */
    edx = esi + edx * 4; /* 0x171B71E2: lea edx, [esi + edx*4] */
    MEM32(ebp + (-0x18)) = edx; /* 0x171B71E5: mov dword ptr [ebp - 0x18], edx */
    edx = eax * 4; /* 0x171B71E8: lea edx, [eax*4] */
    edi = edx; /* 0x171B71EF: mov edi, edx */
    edx = esi; /* 0x171B71F1: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x171B71F3: sub edx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B71F5: inc ecx */
    _flag_k = FK_INC;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x171B71F6: imul ecx, eax */
    edi = esi + ecx * 4; /* 0x171B71F9: lea edi, [esi + ecx*4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171B71FC: mov ecx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B71FF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x171B7202: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x171B7205: sub ecx, esi */
    _flag_k = FK_CMP;
L_171B7207:
    ebx = MEM32(ecx + edi); /* 0x171B7207: mov ebx, dword ptr [ecx + edi] */
    MEM32(ecx + edx) = ebx; /* 0x171B720A: mov dword ptr [ecx + edx], ebx */
    ebx = MEM32(edi); /* 0x171B720D: mov ebx, dword ptr [edi] */
    MEM32(edx) = ebx; /* 0x171B720F: mov dword ptr [edx], ebx */
    ebx = MEM32(ecx + esi); /* 0x171B7211: mov ebx, dword ptr [ecx + esi] */
    MEM32(ecx + eax) = ebx; /* 0x171B7214: mov dword ptr [ecx + eax], ebx */
    ebx = MEM32(esi); /* 0x171B7217: mov ebx, dword ptr [esi] */
    MEM32(eax) = ebx; /* 0x171B7219: mov dword ptr [eax], ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x171B721B: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171B721E: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171B7221: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171B7224: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B7227: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B722A: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171B722B: mov dword ptr [ebp - 4], ebx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B7207; /* 0x171B722E: jne 0x171b7207 */
L_171B7230:
    ecx = MEM32(ebp + (-0x1C)); /* 0x171B7230: mov ecx, dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + (-0xC)); /* 0x171B7233: mov ebx, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x8)); /* 0x171B7236: mov edi, dword ptr [ebp - 8] */
L_171B7239:
    eax = MEM32(ebp + (-0x10)); /* 0x171B7239: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171B723C: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x54u; /* 0x171B723F: add ebx, 0x54 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B7242: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = edi; /* 0x171B7243: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0xC)) = ebx; /* 0x171B7246: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x171B7249: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B71C4; /* 0x171B724C: jne 0x171b71c4 */
L_171B7252:
    edi = POP32_VAL(esp); /* 0x171B7252: pop edi */
    esi = POP32_VAL(esp); /* 0x171B7253: pop esi */
L_171B7254:
    ebx = POP32_VAL(esp); /* 0x171B7254: pop ebx */
    esp = ebp; /* 0x171B7255: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B7257: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B7258: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B7260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B7260u);

L_171B7260:
    edi = edi; /* 0x171B7260: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B7262: push ebp */
    ebp = esp; /* 0x171B7263: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x171B7265: sub esp, 0x14 */
    _flag_k = FK_CMP;
    edx = MEM32(eax + 0x24); /* 0x171B7268: mov edx, dword ptr [eax + 0x24] */
    /* test edx, edx */ /* 0x171B726B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x1AC); /* 0x171B726D: mov ecx, dword ptr [eax + 0x1ac] */
    PUSH32(esp, ebx); /* 0x171B7273: push ebx */
    ebx = MEM32(eax + 0xDC); /* 0x171B7274: mov ebx, dword ptr [eax + 0xdc] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171B727A: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x171B727D: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x14)) = edx; /* 0x171B7284: mov dword ptr [ebp - 0x14], edx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B7304; /* 0x171B7287: jle 0x171b7304 */
L_171B7289:
    eax = MEM32(eax + 0x140); /* 0x171B7289: mov eax, dword ptr [eax + 0x140] */
    edx = MEM32(ecx + 0x40); /* 0x171B728F: mov edx, dword ptr [ecx + 0x40] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171B7292: mov dword ptr [ebp - 8], eax */
    eax = ecx + edx * 4 + 0x38; /* 0x171B7295: lea eax, [ecx + edx*4 + 0x38] */
    PUSH32(esp, esi); /* 0x171B7299: push esi */
    MEM32(ebp + (-0x10)) = eax; /* 0x171B729A: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x171B729D: add ebx, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x171B72A0: push edi */
L_171B72A1:
    ecx = MEM32(ebx + 0x18); /* 0x171B72A1: mov ecx, dword ptr [ebx + 0x18] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebx)); /* 0x171B72A4: imul ecx, dword ptr [ebx] */
    eax = ecx; /* 0x171B72A7: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B72A9: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x8)); /* 0x171B72AA: idiv dword ptr [ebp - 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B72AD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax; /* 0x171B72AF: mov edi, eax */
    eax = MEM32(ebx + 0x20); /* 0x171B72B1: mov eax, dword ptr [ebx + 0x20] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x171B72B4: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = edx; /* 0x171B72B6: mov esi, edx */
    /* test esi, esi */ /* 0x171B72B8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B72BE; /* 0x171B72BA: jne 0x171b72be */
L_171B72BC:
    esi = ecx; /* 0x171B72BC: mov esi, ecx */
L_171B72BE:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B72BE: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x171B72C1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B72D2; /* 0x171B72C3: jne 0x171b72d2 */
L_171B72C5:
    eax = esi + (-0x1); /* 0x171B72C5: lea eax, [esi - 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B72C8: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x171B72C9: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    edx = MEM32(ebp + (-0xC)); /* 0x171B72CB: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B72CE: inc eax */
    _flag_k = FK_INC;
    MEM32(edx + 0x48) = eax; /* 0x171B72CF: mov dword ptr [edx + 0x48], eax */
L_171B72D2:
    eax = MEM32(ebp + (-0x10)); /* 0x171B72D2: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(eax); /* 0x171B72D5: mov edx, dword ptr [eax] */
    eax = MEM32(edx + ecx * 4); /* 0x171B72D7: mov eax, dword ptr [edx + ecx*4] */
    edx = edi + edi; /* 0x171B72DA: lea edx, [edi + edi] */
    /* test edx, edx */ /* 0x171B72DD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B72F4; /* 0x171B72DF: jle 0x171b72f4 */
L_171B72E1:
    ecx = eax + esi * 4; /* 0x171B72E1: lea ecx, [eax + esi*4] */
    eax = ecx; /* 0x171B72E4: mov eax, ecx */
L_171B72E6:
    esi = MEM32(ecx + (-0x4)); /* 0x171B72E6: mov esi, dword ptr [ecx - 4] */
    MEM32(eax) = esi; /* 0x171B72E9: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B72EB: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171B72EE: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B72E6; /* 0x171B72EF: jne 0x171b72e6 */
L_171B72F1:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B72F1: mov ecx, dword ptr [ebp - 4] */
L_171B72F4:
    eax = MEM32(ebp + (-0x14)); /* 0x171B72F4: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B72F7: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x54u; /* 0x171B72F8: add ebx, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x171B72FB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B72FD: mov dword ptr [ebp - 4], ecx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B72A1; /* 0x171B7300: jl 0x171b72a1 */
L_171B7302:
    edi = POP32_VAL(esp); /* 0x171B7302: pop edi */
    esi = POP32_VAL(esp); /* 0x171B7303: pop esi */
L_171B7304:
    ebx = POP32_VAL(esp); /* 0x171B7304: pop ebx */
    esp = ebp; /* 0x171B7305: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B7307: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B7308: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B7310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B7310u);

L_171B7310:
    edi = edi; /* 0x171B7310: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B7312: push ebp */
    ebp = esp; /* 0x171B7313: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B7315: push esi */
    PUSH32(esp, edi); /* 0x171B7316: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171B7317: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0x1AC); /* 0x171B731A: mov esi, dword ptr [edi + 0x1ac] */
    eax = MEM32(esi + 0x30); /* 0x171B7320: mov eax, dword ptr [esi + 0x30] */
    /* test eax, eax */ /* 0x171B7323: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B7340; /* 0x171B7325: jne 0x171b7340 */
L_171B7327:
    eax = MEM32(edi + 0x1B0); /* 0x171B7327: mov eax, dword ptr [edi + 0x1b0] */
    ecx = esi + 0x8; /* 0x171B732D: lea ecx, [esi + 8] */
    PUSH32(esp, ecx); /* 0x171B7330: push ecx */
    PUSH32(esp, edi); /* 0x171B7331: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B7332: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B7335: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B737E; /* 0x171B7337: je 0x171b737e */
L_171B7339:
    MEM32(esi + 0x30) = 1; /* 0x171B7339: mov dword ptr [esi + 0x30], 1 */
L_171B7340:
    ecx = MEM32(ebp + 0x14); /* 0x171B7340: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(edi + 0x140); /* 0x171B7343: mov eax, dword ptr [edi + 0x140] */
    edx = MEM32(edi + 0x1B4); /* 0x171B7349: mov edx, dword ptr [edi + 0x1b4] */
    PUSH32(esp, ebx); /* 0x171B734F: push ebx */
    PUSH32(esp, ecx); /* 0x171B7350: push ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171B7351: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x171B7354: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171B7355: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x171B7358: push ecx */
    PUSH32(esp, eax); /* 0x171B7359: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x171B735A: mov dword ptr [ebp + 8], eax */
    ebx = esi + 0x34; /* 0x171B735D: lea ebx, [esi + 0x34] */
    PUSH32(esp, ebx); /* 0x171B7360: push ebx */
    eax = esi + 0x8; /* 0x171B7361: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x171B7364: push eax */
    PUSH32(esp, edi); /* 0x171B7365: push edi */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x171B7366: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x171B7369: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx), ecx */ /* 0x171B736C: cmp dword ptr [ebx], ecx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171B737D; /* 0x171B736E: jb 0x171b737d */
L_171B7370:
    MEM32(esi + 0x30) = 0; /* 0x171B7370: mov dword ptr [esi + 0x30], 0 */
    MEM32(ebx) = 0; /* 0x171B7377: mov dword ptr [ebx], 0 */
L_171B737D:
    ebx = POP32_VAL(esp); /* 0x171B737D: pop ebx */
L_171B737E:
    edi = POP32_VAL(esp); /* 0x171B737E: pop edi */
    esi = POP32_VAL(esp); /* 0x171B737F: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B7380: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171B7381: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171B7390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B7390u);

L_171B7390:
    edi = edi; /* 0x171B7390: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B7392: push ebp */
    ebp = esp; /* 0x171B7393: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B7395: push esi */
    PUSH32(esp, edi); /* 0x171B7396: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171B7397: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0x1AC); /* 0x171B739A: mov esi, dword ptr [edi + 0x1ac] */
    eax = MEM32(esi + 0x30); /* 0x171B73A0: mov eax, dword ptr [esi + 0x30] */
    /* test eax, eax */ /* 0x171B73A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B73CF; /* 0x171B73A5: jne 0x171b73cf */
L_171B73A7:
    ecx = MEM32(esi + 0x40); /* 0x171B73A7: mov ecx, dword ptr [esi + 0x40] */
    edx = MEM32(esi + ecx * 4 + 0x38); /* 0x171B73AA: mov edx, dword ptr [esi + ecx*4 + 0x38] */
    eax = MEM32(edi + 0x1B0); /* 0x171B73AE: mov eax, dword ptr [edi + 0x1b0] */
    PUSH32(esp, edx); /* 0x171B73B4: push edx */
    PUSH32(esp, edi); /* 0x171B73B5: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B73B6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B73B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B74B5; /* 0x171B73BB: je 0x171b74b5 */
L_171B73C1:
    eax = MEM32(esi + 0x4C); /* 0x171B73C1: mov eax, dword ptr [esi + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B73C4: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x30) = 1; /* 0x171B73C5: mov dword ptr [esi + 0x30], 1 */
    MEM32(esi + 0x4C) = eax; /* 0x171B73CC: mov dword ptr [esi + 0x4c], eax */
L_171B73CF:
    eax = MEM32(esi + 0x44); /* 0x171B73CF: mov eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171B73D2: sub eax, 0 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171B73D5: push ebx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B7428; /* 0x171B73D6: je 0x171b7428 */
L_171B73D8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B73D8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B7452; /* 0x171B73D9: je 0x171b7452 */
L_171B73DB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B73DB: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B74B4; /* 0x171B73DC: jne 0x171b74b4 */
L_171B73E2:
    ecx = MEM32(ebp + 0x14); /* 0x171B73E2: mov ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0x10); /* 0x171B73E5: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(edi + 0x1B4); /* 0x171B73E8: mov eax, dword ptr [edi + 0x1b4] */
    PUSH32(esp, ecx); /* 0x171B73EE: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171B73EF: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x171B73F2: push edx */
    edx = MEM32(esi + 0x48); /* 0x171B73F3: mov edx, dword ptr [esi + 0x48] */
    PUSH32(esp, ecx); /* 0x171B73F6: push ecx */
    ecx = MEM32(esi + 0x40); /* 0x171B73F7: mov ecx, dword ptr [esi + 0x40] */
    PUSH32(esp, edx); /* 0x171B73FA: push edx */
    edx = MEM32(esi + ecx * 4 + 0x38); /* 0x171B73FB: mov edx, dword ptr [esi + ecx*4 + 0x38] */
    ebx = esi + 0x34; /* 0x171B73FF: lea ebx, [esi + 0x34] */
    PUSH32(esp, ebx); /* 0x171B7402: push ebx */
    PUSH32(esp, edx); /* 0x171B7403: push edx */
    PUSH32(esp, edi); /* 0x171B7404: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B7405: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x171B7408: mov eax, dword ptr [ebx] */
    /* cmp eax, MEM32(esi + 0x48) */ /* 0x171B740A: cmp eax, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x48));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171B74B4; /* 0x171B740D: jb 0x171b74b4 */
L_171B7413:
    edx = MEM32(ebp + 0x10); /* 0x171B7413: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x14); /* 0x171B7416: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp MEM32(edx), ecx */ /* 0x171B7419: cmp dword ptr [edx], ecx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x44) = 0; /* 0x171B741B: mov dword ptr [esi + 0x44], 0 */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B74B4; /* 0x171B7422: jae 0x171b74b4 */
L_171B7428:
    eax = MEM32(edi + 0x140); /* 0x171B7428: mov eax, dword ptr [edi + 0x140] */
    ecx = MEM32(esi + 0x4C); /* 0x171B742E: mov ecx, dword ptr [esi + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B7431: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi + 0x48) = eax; /* 0x171B7432: mov dword ptr [esi + 0x48], eax */
    /* cmp ecx, MEM32(edi + 0x144) */ /* 0x171B7435: cmp ecx, dword ptr [edi + 0x144] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x144));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x34) = 0; /* 0x171B743B: mov dword ptr [esi + 0x34], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B744B; /* 0x171B7442: jne 0x171b744b */
L_171B7444:
    eax = edi; /* 0x171B7444: mov eax, edi */
    RECOMP_CALL(sub_171B7260); /* 0x171B7446: call 0x171b7260 */
    RECOMP_FLAGS_IN();
L_171B744B:
    MEM32(esi + 0x44) = 1; /* 0x171B744B: mov dword ptr [esi + 0x44], 1 */
L_171B7452:
    eax = MEM32(ebp + 0x14); /* 0x171B7452: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x10); /* 0x171B7455: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(edi + 0x1B4); /* 0x171B7458: mov edx, dword ptr [edi + 0x1b4] */
    PUSH32(esp, eax); /* 0x171B745E: push eax */
    eax = MEM32(ebp + 0xC); /* 0x171B745F: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x171B7462: push ecx */
    ecx = MEM32(esi + 0x48); /* 0x171B7463: mov ecx, dword ptr [esi + 0x48] */
    PUSH32(esp, eax); /* 0x171B7466: push eax */
    eax = MEM32(esi + 0x40); /* 0x171B7467: mov eax, dword ptr [esi + 0x40] */
    PUSH32(esp, ecx); /* 0x171B746A: push ecx */
    ecx = MEM32(esi + eax * 4 + 0x38); /* 0x171B746B: mov ecx, dword ptr [esi + eax*4 + 0x38] */
    ebx = esi + 0x34; /* 0x171B746F: lea ebx, [esi + 0x34] */
    PUSH32(esp, ebx); /* 0x171B7472: push ebx */
    PUSH32(esp, ecx); /* 0x171B7473: push ecx */
    PUSH32(esp, edi); /* 0x171B7474: push edi */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x171B7475: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx); /* 0x171B7478: mov edx, dword ptr [ebx] */
    /* cmp edx, MEM32(esi + 0x48) */ /* 0x171B747A: cmp edx, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x48));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171B74B4; /* 0x171B747D: jb 0x171b74b4 */
L_171B747F:
    /* cmp MEM32(esi + 0x4C), 1 */ /* 0x171B747F: cmp dword ptr [esi + 0x4c], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B748C; /* 0x171B7483: jne 0x171b748c */
L_171B7485:
    eax = edi; /* 0x171B7485: mov eax, edi */
    RECOMP_CALL(sub_171B7180); /* 0x171B7487: call 0x171b7180 */
    RECOMP_FLAGS_IN();
L_171B748C:
    eax = MEM32(esi + 0x40); /* 0x171B748C: mov eax, dword ptr [esi + 0x40] */
    edi = MEM32(edi + 0x140); /* 0x171B748F: mov edi, dword ptr [edi + 0x140] */
    _flag_a = (uint32_t)((eax ^ 1)); _flag_b = (uint32_t)((eax ^ 1));
    eax = eax ^ 1; /* 0x171B7495: xor eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x40) = eax; /* 0x171B7498: mov dword ptr [esi + 0x40], eax */
    eax = edi + 0x1; /* 0x171B749B: lea eax, [edi + 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x171B749E: add edi, 2 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x30) = 0; /* 0x171B74A1: mov dword ptr [esi + 0x30], 0 */
    MEM32(ebx) = eax; /* 0x171B74A8: mov dword ptr [ebx], eax */
    MEM32(esi + 0x48) = edi; /* 0x171B74AA: mov dword ptr [esi + 0x48], edi */
    MEM32(esi + 0x44) = 2; /* 0x171B74AD: mov dword ptr [esi + 0x44], 2 */
L_171B74B4:
    ebx = POP32_VAL(esp); /* 0x171B74B4: pop ebx */
L_171B74B5:
    edi = POP32_VAL(esp); /* 0x171B74B5: pop edi */
    esi = POP32_VAL(esp); /* 0x171B74B6: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B74B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171B74B8: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171B74C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B74C0u);

L_171B74C0:
    edi = edi; /* 0x171B74C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B74C2: push ebp */
    ebp = esp; /* 0x171B74C3: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171B74C5: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x171B74C8: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171B74CB: push esi */
    esi = MEM32(ecx + 0x1AC); /* 0x171B74CC: mov esi, dword ptr [ecx + 0x1ac] */
    PUSH32(esp, edi); /* 0x171B74D2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B74D3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x171B74D5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B74EB; /* 0x171B74D7: je 0x171b74eb */
L_171B74D9:
    eax = MEM32(ecx); /* 0x171B74D9: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171B74DB: push ecx */
    MEM32(eax + 0x14) = 4; /* 0x171B74DC: mov dword ptr [eax + 0x14], 4 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B74E3: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171B74E5: pop edi */
    esi = POP32_VAL(esp); /* 0x171B74E6: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B74E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B74E8: ret 8 */
L_171B74EB:
    eax = MEM32(ecx + 0x1C8); /* 0x171B74EB: mov eax, dword ptr [ecx + 0x1c8] */
    /* cmp MEM32(eax + 0x8), edi */ /* 0x171B74F1: cmp dword ptr [eax + 8], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B7517; /* 0x171B74F4: je 0x171b7517 */
L_171B74F6:
    MEM32(esi + 0x4) = 0x171B7390u; /* 0x171B74F6: mov dword ptr [esi + 4], 0x171b7390 */
    RECOMP_CALL(sub_171B7030); /* 0x171B74FD: call 0x171b7030 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x40) = edi; /* 0x171B7502: mov dword ptr [esi + 0x40], edi */
    MEM32(esi + 0x44) = edi; /* 0x171B7505: mov dword ptr [esi + 0x44], edi */
    MEM32(esi + 0x4C) = edi; /* 0x171B7508: mov dword ptr [esi + 0x4c], edi */
    MEM32(esi + 0x30) = edi; /* 0x171B750B: mov dword ptr [esi + 0x30], edi */
    MEM32(esi + 0x34) = edi; /* 0x171B750E: mov dword ptr [esi + 0x34], edi */
    edi = POP32_VAL(esp); /* 0x171B7511: pop edi */
    esi = POP32_VAL(esp); /* 0x171B7512: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B7513: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B7514: ret 8 */
L_171B7517:
    MEM32(esi + 0x30) = edi; /* 0x171B7517: mov dword ptr [esi + 0x30], edi */
    MEM32(esi + 0x34) = edi; /* 0x171B751A: mov dword ptr [esi + 0x34], edi */
    edi = POP32_VAL(esp); /* 0x171B751D: pop edi */
    MEM32(esi + 0x4) = 0x171B7310u; /* 0x171B751E: mov dword ptr [esi + 4], 0x171b7310 */
    esi = POP32_VAL(esp); /* 0x171B7525: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B7526: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B7527: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B7530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B7530u);

L_171B7530:
    edi = edi; /* 0x171B7530: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B7532: push ebp */
    ebp = esp; /* 0x171B7533: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B7535: push ebx */
    PUSH32(esp, esi); /* 0x171B7536: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B7537: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171B753A: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 0x50u); /* 0x171B753D: push 0x50 */
    PUSH32(esp, 1); /* 0x171B753F: push 1 */
    PUSH32(esp, esi); /* 0x171B7541: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B7542: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171B7544: mov ebx, eax */
    eax = MEM32(ebp + 0xC); /* 0x171B7546: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171B7549: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x1AC) = ebx; /* 0x171B754B: mov dword ptr [esi + 0x1ac], ebx */
    MEM32(ebx) = 0x171B74C0u; /* 0x171B7551: mov dword ptr [ebx], 0x171b74c0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B7565; /* 0x171B7557: je 0x171b7565 */
L_171B7559:
    eax = MEM32(esi); /* 0x171B7559: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B755B: push esi */
    MEM32(eax + 0x14) = 4; /* 0x171B755C: mov dword ptr [eax + 0x14], 4 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B7563: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B7565:
    ecx = MEM32(esi + 0x1C8); /* 0x171B7565: mov ecx, dword ptr [esi + 0x1c8] */
    eax = MEM32(ecx + 0x8); /* 0x171B756B: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x171B756E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B759A; /* 0x171B7570: je 0x171b759a */
L_171B7572:
    /* cmp MEM32(esi + 0x140), 2 */ /* 0x171B7572: cmp dword ptr [esi + 0x140], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0x140)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B7587; /* 0x171B7579: jge 0x171b7587 */
L_171B757B:
    eax = MEM32(esi); /* 0x171B757B: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B757D: push esi */
    MEM32(eax + 0x14) = 0x2Fu; /* 0x171B757E: mov dword ptr [eax + 0x14], 0x2f */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B7585: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B7587:
    RECOMP_CALL(sub_171B6F80); /* 0x171B7587: call 0x171b6f80 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x140); /* 0x171B758C: mov eax, dword ptr [esi + 0x140] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x171B7592: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x171B7595: mov dword ptr [ebp + 8], eax */
    goto L_171B75A3; /* 0x171B7598: jmp 0x171b75a3 */
L_171B759A:
    edx = MEM32(esi + 0x140); /* 0x171B759A: mov edx, dword ptr [esi + 0x140] */
    MEM32(ebp + 0x8) = edx; /* 0x171B75A0: mov dword ptr [ebp + 8], edx */
L_171B75A3:
    ecx = MEM32(esi + 0x24); /* 0x171B75A3: mov ecx, dword ptr [esi + 0x24] */
    /* test ecx, ecx */ /* 0x171B75A6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0xDC); /* 0x171B75A8: mov eax, dword ptr [esi + 0xdc] */
    MEM32(ebp + 0xC) = 0; /* 0x171B75AE: mov dword ptr [ebp + 0xc], 0 */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B75FB; /* 0x171B75B5: jle 0x171b75fb */
L_171B75B7:
    PUSH32(esp, edi); /* 0x171B75B7: push edi */
    edi = eax + 0x24; /* 0x171B75B8: lea edi, [eax + 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x171B75BB: add ebx, 8 */
    _flag_k = FK_ADD;
    edi = edi; /* 0x171B75BE: mov edi, edi */
L_171B75C0:
    ecx = MEM32(edi); /* 0x171B75C0: mov ecx, dword ptr [edi] */
    eax = MEM32(edi + (-0x18)); /* 0x171B75C2: mov eax, dword ptr [edi - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x171B75C5: imul eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B75C8: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(esi + 0x140); /* 0x171B75C9: idiv dword ptr [esi + 0x140] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    edx = MEM32(esi + 0x4); /* 0x171B75CF: mov edx, dword ptr [esi + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x171B75D2: imul eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x171B75D6: push eax */
    eax = MEM32(edi + (-0x8)); /* 0x171B75D7: mov eax, dword ptr [edi - 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x171B75DA: imul eax, ecx */
    PUSH32(esp, eax); /* 0x171B75DD: push eax */
    PUSH32(esp, 1); /* 0x171B75DE: push 1 */
    PUSH32(esp, esi); /* 0x171B75E0: push esi */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x171B75E1: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x24); /* 0x171B75E4: mov ecx, dword ptr [esi + 0x24] */
    MEM32(ebx) = eax; /* 0x171B75E7: mov dword ptr [ebx], eax */
    eax = MEM32(ebp + 0xC); /* 0x171B75E9: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B75EC: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x171B75ED: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x171B75F0: add edi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x171B75F3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x171B75F5: mov dword ptr [ebp + 0xc], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B75C0; /* 0x171B75F8: jl 0x171b75c0 */
L_171B75FA:
    edi = POP32_VAL(esp); /* 0x171B75FA: pop edi */
L_171B75FB:
    esi = POP32_VAL(esp); /* 0x171B75FB: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B75FC: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B75FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B75FE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B7610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B7610u);

L_171B7610:
    eax = MEM32(ecx + 0x1B0); /* 0x171B7610: mov eax, dword ptr [ecx + 0x1b0] */
    PUSH32(esp, esi); /* 0x171B7616: push esi */
    esi = MEM32(ecx + 0x14C); /* 0x171B7617: mov esi, dword ptr [ecx + 0x14c] */
    edx = 1; /* 0x171B761D: mov edx, 1 */
    /* cmp esi, edx */ /* 0x171B7622: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B7650; /* 0x171B7624: jg 0x171b7650 */
L_171B7626:
    edx = MEM32(ecx + 0x144); /* 0x171B7626: mov edx, dword ptr [ecx + 0x144] */
    esi = MEM32(ecx + 0x98); /* 0x171B762C: mov esi, dword ptr [ecx + 0x98] */
    ecx = MEM32(ecx + 0x150); /* 0x171B7632: mov ecx, dword ptr [ecx + 0x150] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171B7638: dec edx */
    _flag_k = FK_DEC;
    /* cmp esi, edx */ /* 0x171B7639: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B764D; /* 0x171B763B: jae 0x171b764d */
L_171B763D:
    edx = MEM32(ecx + 0xC); /* 0x171B763D: mov edx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B7640: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x1C) = edx; /* 0x171B7642: mov dword ptr [eax + 0x1c], edx */
    MEM32(eax + 0x14) = ecx; /* 0x171B7645: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x171B7648: mov dword ptr [eax + 0x18], ecx */
    esi = POP32_VAL(esp); /* 0x171B764B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B764C: ret  */
L_171B764D:
    edx = MEM32(ecx + 0x48); /* 0x171B764D: mov edx, dword ptr [ecx + 0x48] */
L_171B7650:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B7650: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x1C) = edx; /* 0x171B7652: mov dword ptr [eax + 0x1c], edx */
    MEM32(eax + 0x14) = ecx; /* 0x171B7655: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x171B7658: mov dword ptr [eax + 0x18], ecx */
    esi = POP32_VAL(esp); /* 0x171B765B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B765C: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B7670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B7670u);

L_171B7670:
    edi = edi; /* 0x171B7670: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B7672: push ebp */
    ebp = esp; /* 0x171B7673: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171B7675: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x98) = 0; /* 0x171B7678: mov dword ptr [ecx + 0x98], 0 */
    RECOMP_CALL(sub_171B7610); /* 0x171B7682: call 0x171b7610 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171B7687: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B7688: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B7690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B7690u);

L_171B7690:
    edi = edi; /* 0x171B7690: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B7692: push ebp */
    ebp = esp; /* 0x171B7693: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x171B7695: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171B7698: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171B7699: mov ebx, dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x160); /* 0x171B769C: mov ecx, dword ptr [ebx + 0x160] */
    eax = MEM32(ebx + 0x144); /* 0x171B76A2: mov eax, dword ptr [ebx + 0x144] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B76A8: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B76A9: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x171B76AA: push esi */
    esi = MEM32(ebx + 0x1B0); /* 0x171B76AB: mov esi, dword ptr [ebx + 0x1b0] */
    edx = MEM32(esi + 0x1C); /* 0x171B76B1: mov edx, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x30)) = eax; /* 0x171B76B4: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(esi + 0x18); /* 0x171B76B7: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, edx */ /* 0x171B76BA: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171B76BC: push edi */
    MEM32(ebp + (-0xC)) = esi; /* 0x171B76BD: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x171B76C0: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B76C3: mov dword ptr [ebp - 4], eax */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B7853; /* 0x171B76C6: jge 0x171b7853 */
L_171B76CC:
    esp = esp; /* 0x171B76CC: lea esp, [esp] */
L_171B76D0:
    edi = MEM32(esi + 0x14); /* 0x171B76D0: mov edi, dword ptr [esi + 0x14] */
    /* cmp edi, ecx */ /* 0x171B76D3: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x171B76D5: mov dword ptr [ebp - 8], edi */
    if (CMP_A(_flag_a, _flag_b)) goto L_171B783D; /* 0x171B76D8: ja 0x171b783d */
L_171B76DE:
    edi = edi; /* 0x171B76DE: mov edi, edi */
L_171B76E0:
    eax = MEM32(ebx + 0x168); /* 0x171B76E0: mov eax, dword ptr [ebx + 0x168] */
    ecx = MEM32(esi + 0x20); /* 0x171B76E6: mov ecx, dword ptr [esi + 0x20] */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x171B76E9: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x171B76E9: shl eax, 7 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x171B76EC: add esi, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171B76EF: push eax */
    PUSH32(esp, ecx); /* 0x171B76F0: push ecx */
    RECOMP_CALL(sub_171B5DC0); /* 0x171B76F1: call 0x171b5dc0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx + 0x1C0); /* 0x171B76F6: mov edx, dword ptr [ebx + 0x1c0] */
    PUSH32(esp, esi); /* 0x171B76FC: push esi */
    PUSH32(esp, ebx); /* 0x171B76FD: push ebx */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x171B76FE: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B7701: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B78A5; /* 0x171B7703: je 0x171b78a5 */
L_171B7709:
    eax = MEM32(ebx + 0x14C); /* 0x171B7709: mov eax, dword ptr [ebx + 0x14c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B770F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x171B7711: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ecx; /* 0x171B7713: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x171B7716: mov dword ptr [ebp - 0x2c], ecx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B7825; /* 0x171B7719: jle 0x171b7825 */
L_171B771F:
    eax = ebx + 0x150; /* 0x171B771F: lea eax, [ebx + 0x150] */
    MEM32(ebp + (-0x18)) = eax; /* 0x171B7725: mov dword ptr [ebp - 0x18], eax */
L_171B7728:
    edx = MEM32(ebp + (-0x18)); /* 0x171B7728: mov edx, dword ptr [ebp - 0x18] */
    esi = MEM32(edx); /* 0x171B772B: mov esi, dword ptr [edx] */
    eax = MEM32(esi + 0x30); /* 0x171B772D: mov eax, dword ptr [esi + 0x30] */
    /* test eax, eax */ /* 0x171B7730: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B773F; /* 0x171B7732: jne 0x171b773f */
L_171B7734:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x3C); /* 0x171B7734: add ecx, dword ptr [esi + 0x3c] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x171B7737: mov dword ptr [ebp - 0x10], ecx */
    goto L_171B7804; /* 0x171B773A: jmp 0x171b7804 */
L_171B773F:
    eax = MEM32(esi + 0x4); /* 0x171B773F: mov eax, dword ptr [esi + 4] */
    edx = MEM32(ebx + 0x1C4); /* 0x171B7742: mov edx, dword ptr [ebx + 0x1c4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171B7748: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171B7748: shl eax, 2 */
    edx = MEM32(edx + eax + 0x4); /* 0x171B774B: mov edx, dword ptr [edx + eax + 4] */
    MEM32(ebp + (-0x34)) = edx; /* 0x171B774F: mov dword ptr [ebp - 0x34], edx */
    /* cmp edi, MEM32(ebp + (-0x1C)) */ /* 0x171B7752: cmp edi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B775C; /* 0x171B7755: jae 0x171b775c */
L_171B7757:
    edx = MEM32(esi + 0x34); /* 0x171B7757: mov edx, dword ptr [esi + 0x34] */
    goto L_171B775F; /* 0x171B775A: jmp 0x171b775f */
L_171B775C:
    edx = MEM32(esi + 0x44); /* 0x171B775C: mov edx, dword ptr [esi + 0x44] */
L_171B775F:
    edi = MEM32(ebp + 0xC); /* 0x171B775F: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + edi); /* 0x171B7762: mov eax, dword ptr [eax + edi] */
    edi = MEM32(esi + 0x40); /* 0x171B7765: mov edi, dword ptr [esi + 0x40] */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + (-0x8))); /* 0x171B7768: imul edi, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x20)) = edx; /* 0x171B776C: mov dword ptr [ebp - 0x20], edx */
    edx = MEM32(esi + 0x24); /* 0x171B776F: mov edx, dword ptr [esi + 0x24] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x4))); /* 0x171B7772: imul edx, dword ptr [ebp - 4] */
    edx = eax + edx * 4; /* 0x171B7776: lea edx, [eax + edx*4] */
    MEM32(ebp + (-0x14)) = edx; /* 0x171B7779: mov dword ptr [ebp - 0x14], edx */
    edx = MEM32(esi + 0x38); /* 0x171B777C: mov edx, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B777F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x171B7781: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = edi; /* 0x171B7783: mov dword ptr [ebp - 0x38], edi */
    MEM32(ebp + (-0x28)) = eax; /* 0x171B7786: mov dword ptr [ebp - 0x28], eax */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B7804; /* 0x171B7789: jle 0x171b7804 */
L_171B778B:
    goto L_171B7790; /* 0x171B778B: jmp 0x171b7790 */
L_171B7790:
    edx = MEM32(ebp + (-0x30)); /* 0x171B7790: mov edx, dword ptr [ebp - 0x30] */
    /* cmp MEM32(ebx + 0x98), edx */ /* 0x171B7793: cmp dword ptr [ebx + 0x98], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x98)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171B77A7; /* 0x171B7799: jb 0x171b77a7 */
L_171B779B:
    edx = MEM32(ebp + (-0x4)); /* 0x171B779B: mov edx, dword ptr [ebp - 4] */
    ebx = MEM32(esi + 0x48); /* 0x171B779E: mov ebx, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171B77A1: add edx, eax */
    _flag_k = FK_ADD;
    /* cmp edx, ebx */ /* 0x171B77A3: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B77E2; /* 0x171B77A5: jge 0x171b77e2 */
L_171B77A7:
    edx = MEM32(ebp + (-0x20)); /* 0x171B77A7: mov edx, dword ptr [ebp - 0x20] */
    /* test edx, edx */ /* 0x171B77AA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B77E2; /* 0x171B77AC: jle 0x171b77e2 */
L_171B77AE:
    eax = MEM32(ebp + (-0xC)); /* 0x171B77AE: mov eax, dword ptr [ebp - 0xc] */
    ebx = eax + ecx * 4 + 0x20; /* 0x171B77B1: lea ebx, [eax + ecx*4 + 0x20] */
    MEM32(ebp + (-0x24)) = edx; /* 0x171B77B5: mov dword ptr [ebp - 0x24], edx */
L_171B77B8:
    ecx = MEM32(ebp + (-0x14)); /* 0x171B77B8: mov ecx, dword ptr [ebp - 0x14] */
    edx = MEM32(ebx); /* 0x171B77BB: mov edx, dword ptr [ebx] */
    eax = MEM32(ebp + 0x8); /* 0x171B77BD: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171B77C0: push edi */
    PUSH32(esp, ecx); /* 0x171B77C1: push ecx */
    PUSH32(esp, edx); /* 0x171B77C2: push edx */
    PUSH32(esp, esi); /* 0x171B77C3: push esi */
    PUSH32(esp, eax); /* 0x171B77C4: push eax */
    RECOMP_ICALL(MEM32(ebp + (-0x34))); /* 0x171B77C5: call dword ptr [ebp - 0x34] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x24); /* 0x171B77C8: mov edx, dword ptr [esi + 0x24] */
    eax = MEM32(ebp + (-0x24)); /* 0x171B77CB: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x171B77CE: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x171B77D0: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B77D3: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x24)) = eax; /* 0x171B77D4: mov dword ptr [ebp - 0x24], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B77B8; /* 0x171B77D7: jne 0x171b77b8 */
L_171B77D9:
    eax = MEM32(ebp + (-0x28)); /* 0x171B77D9: mov eax, dword ptr [ebp - 0x28] */
    edi = MEM32(ebp + (-0x38)); /* 0x171B77DC: mov edi, dword ptr [ebp - 0x38] */
    ecx = MEM32(ebp + (-0x10)); /* 0x171B77DF: mov ecx, dword ptr [ebp - 0x10] */
L_171B77E2:
    edx = MEM32(esi + 0x34); /* 0x171B77E2: mov edx, dword ptr [esi + 0x34] */
    ebx = MEM32(ebp + (-0x14)); /* 0x171B77E5: mov ebx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171B77E8: add ecx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(esi + 0x24); /* 0x171B77EA: mov edx, dword ptr [esi + 0x24] */
    edx = ebx + edx * 4; /* 0x171B77ED: lea edx, [ebx + edx*4] */
    ebx = MEM32(ebp + 0x8); /* 0x171B77F0: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = edx; /* 0x171B77F3: mov dword ptr [ebp - 0x14], edx */
    edx = MEM32(esi + 0x38); /* 0x171B77F6: mov edx, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B77F9: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x171B77FA: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ecx; /* 0x171B77FC: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x28)) = eax; /* 0x171B77FF: mov dword ptr [ebp - 0x28], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B7790; /* 0x171B7802: jl 0x171b7790 */
L_171B7804:
    eax = MEM32(ebp + (-0x2C)); /* 0x171B7804: mov eax, dword ptr [ebp - 0x2c] */
    esi = MEM32(ebp + (-0x18)); /* 0x171B7807: mov esi, dword ptr [ebp - 0x18] */
    edx = MEM32(ebx + 0x14C); /* 0x171B780A: mov edx, dword ptr [ebx + 0x14c] */
    edi = MEM32(ebp + (-0x8)); /* 0x171B7810: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B7813: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171B7814: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x171B7817: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = eax; /* 0x171B7819: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x18)) = esi; /* 0x171B781C: mov dword ptr [ebp - 0x18], esi */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B7728; /* 0x171B781F: jl 0x171b7728 */
L_171B7825:
    eax = MEM32(ebp + (-0x1C)); /* 0x171B7825: mov eax, dword ptr [ebp - 0x1c] */
    esi = MEM32(ebp + (-0xC)); /* 0x171B7828: mov esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B782B: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, eax */ /* 0x171B782C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x171B782E: mov dword ptr [ebp - 8], edi */
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B76E0; /* 0x171B7831: jbe 0x171b76e0 */
L_171B7837:
    eax = MEM32(ebp + (-0x4)); /* 0x171B7837: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x171B783A: mov ecx, dword ptr [ebp - 0x1c] */
L_171B783D:
    MEM32(esi + 0x14) = 0; /* 0x171B783D: mov dword ptr [esi + 0x14], 0 */
    edx = MEM32(esi + 0x1C); /* 0x171B7844: mov edx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B7847: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x171B7848: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B784A: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B76D0; /* 0x171B784D: jl 0x171b76d0 */
L_171B7853:
    edx = MEM32(ebx + 0xA0); /* 0x171B7853: mov edx, dword ptr [ebx + 0xa0] */
    ecx = MEM32(ebx + 0x98); /* 0x171B7859: mov ecx, dword ptr [ebx + 0x98] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B785F: inc edx */
    _flag_k = FK_INC;
    MEM32(ebx + 0xA0) = edx; /* 0x171B7860: mov dword ptr [ebx + 0xa0], edx */
    edx = MEM32(ebx + 0x144); /* 0x171B7866: mov edx, dword ptr [ebx + 0x144] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B786C: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x171B786D: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0x98) = ecx; /* 0x171B786F: mov dword ptr [ebx + 0x98], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B78E8; /* 0x171B7875: jae 0x171b78e8 */
L_171B7877:
    edi = MEM32(ebx + 0x14C); /* 0x171B7877: mov edi, dword ptr [ebx + 0x14c] */
    eax = MEM32(ebx + 0x1B0); /* 0x171B787D: mov eax, dword ptr [ebx + 0x1b0] */
    esi = 1; /* 0x171B7883: mov esi, 1 */
    /* cmp edi, esi */ /* 0x171B7888: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B78BC; /* 0x171B788A: jle 0x171b78bc */
L_171B788C:
    edi = POP32_VAL(esp); /* 0x171B788C: pop edi */
    MEM32(eax + 0x1C) = esi; /* 0x171B788D: mov dword ptr [eax + 0x1c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B7890: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171B7892: pop esi */
    MEM32(eax + 0x14) = ecx; /* 0x171B7893: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x171B7896: mov dword ptr [eax + 0x18], ecx */
    eax = 3; /* 0x171B7899: mov eax, 3 */
    ebx = POP32_VAL(esp); /* 0x171B789E: pop ebx */
    esp = ebp; /* 0x171B789F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B78A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B78A2: ret 8 */
L_171B78A5:
    eax = MEM32(ebp + (-0xC)); /* 0x171B78A5: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171B78A8: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x14) = edi; /* 0x171B78AB: mov dword ptr [eax + 0x14], edi */
    edi = POP32_VAL(esp); /* 0x171B78AE: pop edi */
    esi = POP32_VAL(esp); /* 0x171B78AF: pop esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B78B0: mov dword ptr [eax + 0x18], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B78B3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B78B5: pop ebx */
    esp = ebp; /* 0x171B78B6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B78B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B78B9: ret 8 */
L_171B78BC:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171B78BC: dec edx */
    _flag_k = FK_DEC;
    /* cmp ecx, edx */ /* 0x171B78BD: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebx + 0x150); /* 0x171B78BF: mov edx, dword ptr [ebx + 0x150] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B78CC; /* 0x171B78C5: jae 0x171b78cc */
L_171B78C7:
    ecx = MEM32(edx + 0xC); /* 0x171B78C7: mov ecx, dword ptr [edx + 0xc] */
    goto L_171B78CF; /* 0x171B78CA: jmp 0x171b78cf */
L_171B78CC:
    ecx = MEM32(edx + 0x48); /* 0x171B78CC: mov ecx, dword ptr [edx + 0x48] */
L_171B78CF:
    MEM32(eax + 0x1C) = ecx; /* 0x171B78CF: mov dword ptr [eax + 0x1c], ecx */
    edi = POP32_VAL(esp); /* 0x171B78D2: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B78D3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171B78D5: pop esi */
    MEM32(eax + 0x14) = ecx; /* 0x171B78D6: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x171B78D9: mov dword ptr [eax + 0x18], ecx */
    eax = 3; /* 0x171B78DC: mov eax, 3 */
    ebx = POP32_VAL(esp); /* 0x171B78E1: pop ebx */
    esp = ebp; /* 0x171B78E2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B78E4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B78E5: ret 8 */
L_171B78E8:
    edx = MEM32(ebx + 0x1B8); /* 0x171B78E8: mov edx, dword ptr [ebx + 0x1b8] */
    PUSH32(esp, ebx); /* 0x171B78EE: push ebx */
    RECOMP_ICALL(MEM32(edx + 0xC)); /* 0x171B78EF: call dword ptr [edx + 0xc] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171B78F2: pop edi */
    esi = POP32_VAL(esp); /* 0x171B78F3: pop esi */
    eax = 4; /* 0x171B78F4: mov eax, 4 */
    ebx = POP32_VAL(esp); /* 0x171B78F9: pop ebx */
    esp = ebp; /* 0x171B78FA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B78FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B78FD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B7910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B7910u);

L_171B7910:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B7910: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B7912: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B7920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B7920u);

L_171B7920:
    edi = edi; /* 0x171B7920: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B7922: push ebp */
    ebp = esp; /* 0x171B7923: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x171B7925: sub esp, 0x34 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171B7928: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171B7929: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x1B0); /* 0x171B792C: mov eax, dword ptr [ebx + 0x1b0] */
    PUSH32(esp, esi); /* 0x171B7932: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B7933: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0x14C); /* 0x171B7936: mov eax, dword ptr [ebx + 0x14c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171B793C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171B793E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171B7940: push edi */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B798F; /* 0x171B7941: jle 0x171b798f */
L_171B7943:
    ecx = ebx + 0x150; /* 0x171B7943: lea ecx, [ebx + 0x150] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B7949: mov dword ptr [ebp - 8], ecx */
    esp = esp; /* 0x171B794C: lea esp, [esp] */
L_171B7950:
    edx = MEM32(ebp + (-0x8)); /* 0x171B7950: mov edx, dword ptr [ebp - 8] */
    eax = MEM32(edx); /* 0x171B7953: mov eax, dword ptr [edx] */
    ecx = MEM32(eax + 0xC); /* 0x171B7955: mov ecx, dword ptr [eax + 0xc] */
    edi = MEM32(ebx + 0x98); /* 0x171B7958: mov edi, dword ptr [ebx + 0x98] */
    eax = MEM32(eax + 0x4); /* 0x171B795E: mov eax, dword ptr [eax + 4] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x171B7961: imul edi, ecx */
    edx = MEM32(ebx + 0x4); /* 0x171B7964: mov edx, dword ptr [ebx + 4] */
    PUSH32(esp, 1); /* 0x171B7967: push 1 */
    PUSH32(esp, ecx); /* 0x171B7969: push ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x171B796A: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ecx + eax * 4 + 0x48); /* 0x171B796D: mov eax, dword ptr [ecx + eax*4 + 0x48] */
    PUSH32(esp, edi); /* 0x171B7971: push edi */
    PUSH32(esp, eax); /* 0x171B7972: push eax */
    PUSH32(esp, ebx); /* 0x171B7973: push ebx */
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x171B7974: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x171B7977: mov ecx, dword ptr [ebp - 8] */
    MEM32(ebp + esi * 4 + (-0x34)) = eax; /* 0x171B797A: mov dword ptr [ebp + esi*4 - 0x34], eax */
    eax = MEM32(ebx + 0x14C); /* 0x171B797E: mov eax, dword ptr [ebx + 0x14c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B7984: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171B7985: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x171B7988: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B798A: mov dword ptr [ebp - 8], ecx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B7950; /* 0x171B798D: jl 0x171b7950 */
L_171B798F:
    eax = MEM32(ebp + (-0x4)); /* 0x171B798F: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax + 0x18); /* 0x171B7992: mov ecx, dword ptr [eax + 0x18] */
    /* cmp ecx, MEM32(eax + 0x1C) */ /* 0x171B7995: cmp ecx, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B7998: mov dword ptr [ebp - 8], ecx */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B7A99; /* 0x171B799B: jge 0x171b7a99 */
L_171B79A1:
    edi = MEM32(eax + 0x14); /* 0x171B79A1: mov edi, dword ptr [eax + 0x14] */
    /* cmp edi, MEM32(ebx + 0x160) */ /* 0x171B79A4: cmp edi, dword ptr [ebx + 0x160] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x160));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = edi; /* 0x171B79AA: mov dword ptr [ebp - 0x1c], edi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B7A80; /* 0x171B79AD: jae 0x171b7a80 */
L_171B79B3:
    eax = MEM32(ebx + 0x14C); /* 0x171B79B3: mov eax, dword ptr [ebx + 0x14c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B79B9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x171B79BB: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edx; /* 0x171B79BD: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x18)) = edx; /* 0x171B79C0: mov dword ptr [ebp - 0x18], edx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B7A56; /* 0x171B79C3: jle 0x171b7a56 */
L_171B79C9:
    ecx = eax; /* 0x171B79C9: mov ecx, eax */
    eax = ebx + 0x150; /* 0x171B79CB: lea eax, [ebx + 0x150] */
    MEM32(ebp + (-0x24)) = ecx; /* 0x171B79D1: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x171B79D4: mov dword ptr [ebp - 0x10], eax */
L_171B79D7:
    ecx = MEM32(ebp + (-0x10)); /* 0x171B79D7: mov ecx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ecx); /* 0x171B79DA: mov ecx, dword ptr [ecx] */
    esi = MEM32(ecx + 0x34); /* 0x171B79DC: mov esi, dword ptr [ecx + 0x34] */
    ecx = MEM32(ecx + 0x38); /* 0x171B79DF: mov ecx, dword ptr [ecx + 0x38] */
    eax = esi; /* 0x171B79E2: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x171B79E4: imul eax, edi */
    /* test ecx, ecx */ /* 0x171B79E7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B7A42; /* 0x171B79E9: jle 0x171b7a42 */
L_171B79EB:
    edx = MEM32(ebp + edx * 4 + (-0x34)); /* 0x171B79EB: mov edx, dword ptr [ebp + edx*4 - 0x34] */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x171B79EF: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x171B79EF: shl eax, 7 */
    MEM32(ebp + (-0x20)) = eax; /* 0x171B79F2: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x171B79F5: mov eax, dword ptr [ebp - 8] */
    edi = edx + eax * 4; /* 0x171B79F8: lea edi, [edx + eax*4] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x171B79FB: mov dword ptr [ebp - 0x14], ecx */
    edi = edi; /* 0x171B79FE: mov edi, edi */
L_171B7A00:
    eax = MEM32(edi); /* 0x171B7A00: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x20)); /* 0x171B7A02: add eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x171B7A05: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B7A30; /* 0x171B7A07: jle 0x171b7a30 */
L_171B7A09:
    edx = MEM32(ebp + (-0xC)); /* 0x171B7A09: mov edx, dword ptr [ebp - 0xc] */
    ebx = MEM32(ebp + (-0xC)); /* 0x171B7A0C: mov ebx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171B7A0F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171B7A12: add ebx, esi */
    _flag_k = FK_ADD;
    ecx = ecx + edx * 4 + 0x20; /* 0x171B7A14: lea ecx, [ecx + edx*4 + 0x20] */
    edx = esi; /* 0x171B7A18: mov edx, esi */
    MEM32(ebp + (-0xC)) = ebx; /* 0x171B7A1A: mov dword ptr [ebp - 0xc], ebx */
    ecx = ecx; /* 0x171B7A1D: lea ecx, [ecx] */
L_171B7A20:
    MEM32(ecx) = eax; /* 0x171B7A20: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171B7A22: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x80u; /* 0x171B7A25: add eax, 0x80 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171B7A2A: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B7A20; /* 0x171B7A2B: jne 0x171b7a20 */
L_171B7A2D:
    ebx = MEM32(ebp + 0x8); /* 0x171B7A2D: mov ebx, dword ptr [ebp + 8] */
L_171B7A30:
    eax = MEM32(ebp + (-0x14)); /* 0x171B7A30: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171B7A33: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B7A36: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = eax; /* 0x171B7A37: mov dword ptr [ebp - 0x14], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B7A00; /* 0x171B7A3A: jne 0x171b7a00 */
L_171B7A3C:
    edi = MEM32(ebp + (-0x1C)); /* 0x171B7A3C: mov edi, dword ptr [ebp - 0x1c] */
    edx = MEM32(ebp + (-0x18)); /* 0x171B7A3F: mov edx, dword ptr [ebp - 0x18] */
L_171B7A42:
    ecx = MEM32(ebp + (-0x10)); /* 0x171B7A42: mov ecx, dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + (-0x24)); /* 0x171B7A45: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B7A48: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171B7A49: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x171B7A4C: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = edx; /* 0x171B7A4E: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x171B7A51: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B79D7; /* 0x171B7A54: jl 0x171b79d7 */
L_171B7A56:
    eax = MEM32(ebp + (-0x4)); /* 0x171B7A56: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebx + 0x1C0); /* 0x171B7A59: mov ecx, dword ptr [ebx + 0x1c0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x171B7A5F: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171B7A62: push eax */
    PUSH32(esp, ebx); /* 0x171B7A63: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171B7A64: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B7A67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B7ADE; /* 0x171B7A69: je 0x171b7ade */
L_171B7A6B:
    eax = MEM32(ebx + 0x160); /* 0x171B7A6B: mov eax, dword ptr [ebx + 0x160] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B7A71: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, eax */ /* 0x171B7A72: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = edi; /* 0x171B7A74: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B79B3; /* 0x171B7A77: jb 0x171b79b3 */
L_171B7A7D:
    ecx = MEM32(ebp + (-0x8)); /* 0x171B7A7D: mov ecx, dword ptr [ebp - 8] */
L_171B7A80:
    eax = MEM32(ebp + (-0x4)); /* 0x171B7A80: mov eax, dword ptr [ebp - 4] */
    MEM32(eax + 0x14) = 0; /* 0x171B7A83: mov dword ptr [eax + 0x14], 0 */
    edx = MEM32(eax + 0x1C); /* 0x171B7A8A: mov edx, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B7A8D: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x171B7A8E: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B7A90: mov dword ptr [ebp - 8], ecx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B79A1; /* 0x171B7A93: jl 0x171b79a1 */
L_171B7A99:
    ecx = MEM32(ebx + 0x98); /* 0x171B7A99: mov ecx, dword ptr [ebx + 0x98] */
    edx = MEM32(ebx + 0x144); /* 0x171B7A9F: mov edx, dword ptr [ebx + 0x144] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B7AA5: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x171B7AA6: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0x98) = ecx; /* 0x171B7AA8: mov dword ptr [ebx + 0x98], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B7B21; /* 0x171B7AAE: jae 0x171b7b21 */
L_171B7AB0:
    edi = MEM32(ebx + 0x14C); /* 0x171B7AB0: mov edi, dword ptr [ebx + 0x14c] */
    eax = MEM32(ebx + 0x1B0); /* 0x171B7AB6: mov eax, dword ptr [ebx + 0x1b0] */
    esi = 1; /* 0x171B7ABC: mov esi, 1 */
    /* cmp edi, esi */ /* 0x171B7AC1: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B7AF5; /* 0x171B7AC3: jle 0x171b7af5 */
L_171B7AC5:
    edi = POP32_VAL(esp); /* 0x171B7AC5: pop edi */
    MEM32(eax + 0x1C) = esi; /* 0x171B7AC6: mov dword ptr [eax + 0x1c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B7AC9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171B7ACB: pop esi */
    MEM32(eax + 0x14) = ecx; /* 0x171B7ACC: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x171B7ACF: mov dword ptr [eax + 0x18], ecx */
    eax = 3; /* 0x171B7AD2: mov eax, 3 */
    ebx = POP32_VAL(esp); /* 0x171B7AD7: pop ebx */
    esp = ebp; /* 0x171B7AD8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B7ADA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B7ADB: ret 4 */
L_171B7ADE:
    eax = MEM32(ebp + (-0x4)); /* 0x171B7ADE: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x171B7AE1: mov edx, dword ptr [ebp - 8] */
    MEM32(eax + 0x14) = edi; /* 0x171B7AE4: mov dword ptr [eax + 0x14], edi */
    edi = POP32_VAL(esp); /* 0x171B7AE7: pop edi */
    esi = POP32_VAL(esp); /* 0x171B7AE8: pop esi */
    MEM32(eax + 0x18) = edx; /* 0x171B7AE9: mov dword ptr [eax + 0x18], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B7AEC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B7AEE: pop ebx */
    esp = ebp; /* 0x171B7AEF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B7AF1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B7AF2: ret 4 */
L_171B7AF5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171B7AF5: dec edx */
    _flag_k = FK_DEC;
    /* cmp ecx, edx */ /* 0x171B7AF6: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x150); /* 0x171B7AF8: mov ecx, dword ptr [ebx + 0x150] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B7B05; /* 0x171B7AFE: jae 0x171b7b05 */
L_171B7B00:
    edx = MEM32(ecx + 0xC); /* 0x171B7B00: mov edx, dword ptr [ecx + 0xc] */
    goto L_171B7B08; /* 0x171B7B03: jmp 0x171b7b08 */
L_171B7B05:
    edx = MEM32(ecx + 0x48); /* 0x171B7B05: mov edx, dword ptr [ecx + 0x48] */
L_171B7B08:
    edi = POP32_VAL(esp); /* 0x171B7B08: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B7B09: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171B7B0B: pop esi */
    MEM32(eax + 0x1C) = edx; /* 0x171B7B0C: mov dword ptr [eax + 0x1c], edx */
    MEM32(eax + 0x14) = ecx; /* 0x171B7B0F: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x171B7B12: mov dword ptr [eax + 0x18], ecx */
    eax = 3; /* 0x171B7B15: mov eax, 3 */
    ebx = POP32_VAL(esp); /* 0x171B7B1A: pop ebx */
    esp = ebp; /* 0x171B7B1B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B7B1D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B7B1E: ret 4 */
L_171B7B21:
    eax = MEM32(ebx + 0x1B8); /* 0x171B7B21: mov eax, dword ptr [ebx + 0x1b8] */
    PUSH32(esp, ebx); /* 0x171B7B27: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B7B28: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171B7B2B: pop edi */
    esi = POP32_VAL(esp); /* 0x171B7B2C: pop esi */
    eax = 4; /* 0x171B7B2D: mov eax, 4 */
    ebx = POP32_VAL(esp); /* 0x171B7B32: pop ebx */
    esp = ebp; /* 0x171B7B33: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B7B35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B7B36: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B7B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B7B40u);

L_171B7B40:
    edi = edi; /* 0x171B7B40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B7B42: push ebp */
    ebp = esp; /* 0x171B7B43: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x171B7B45: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171B7B48: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171B7B49: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x1B0); /* 0x171B7B4C: mov eax, dword ptr [edi + 0x1b0] */
    MEM32(ebp + (-0x14)) = eax; /* 0x171B7B52: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(edi + 0x144); /* 0x171B7B55: mov eax, dword ptr [edi + 0x144] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B7B5B: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x171B7B5C: mov dword ptr [ebp - 0x1c], eax */
    /* nop */ /* 0x171B7B5F: nop  */
L_171B7B60:
    eax = MEM32(edi + 0x94); /* 0x171B7B60: mov eax, dword ptr [edi + 0x94] */
    ecx = MEM32(edi + 0x9C); /* 0x171B7B66: mov ecx, dword ptr [edi + 0x9c] */
    /* cmp eax, ecx */ /* 0x171B7B6C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B7B80; /* 0x171B7B6E: jl 0x171b7b80 */
L_171B7B70:
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B7B94; /* 0x171B7B70: jne 0x171b7b94 */
L_171B7B72:
    ecx = MEM32(edi + 0x98); /* 0x171B7B72: mov ecx, dword ptr [edi + 0x98] */
    /* cmp ecx, MEM32(edi + 0xA0) */ /* 0x171B7B78: cmp ecx, dword ptr [edi + 0xa0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xA0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B7B94; /* 0x171B7B7E: ja 0x171b7b94 */
L_171B7B80:
    edx = MEM32(edi + 0x1B8); /* 0x171B7B80: mov edx, dword ptr [edi + 0x1b8] */
    PUSH32(esp, edi); /* 0x171B7B86: push edi */
    RECOMP_ICALL(MEM32(edx)); /* 0x171B7B87: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B7B89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B7B60; /* 0x171B7B8B: jne 0x171b7b60 */
L_171B7B8D:
    edi = POP32_VAL(esp); /* 0x171B7B8D: pop edi */
    esp = ebp; /* 0x171B7B8E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B7B90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B7B91: ret 8 */
L_171B7B94:
    eax = MEM32(edi + 0x24); /* 0x171B7B94: mov eax, dword ptr [edi + 0x24] */
    PUSH32(esp, ebx); /* 0x171B7B97: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B7B98: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171B7B9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171B7B9C: push esi */
    esi = MEM32(edi + 0xDC); /* 0x171B7B9D: mov esi, dword ptr [edi + 0xdc] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x171B7BA3: mov dword ptr [ebp - 0x18], ebx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B7C97; /* 0x171B7BA6: jle 0x171b7c97 */
L_171B7BAC:
    eax = MEM32(ebp + (-0x14)); /* 0x171B7BAC: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x48u; /* 0x171B7BAF: add eax, 0x48 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x171B7BB2: mov dword ptr [ebp - 0xc], eax */
L_171B7BB5:
    eax = MEM32(esi + 0x30); /* 0x171B7BB5: mov eax, dword ptr [esi + 0x30] */
    /* test eax, eax */ /* 0x171B7BB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B7C7C; /* 0x171B7BBA: je 0x171b7c7c */
L_171B7BC0:
    eax = MEM32(esi + 0xC); /* 0x171B7BC0: mov eax, dword ptr [esi + 0xc] */
    edx = MEM32(edi + 0xA0); /* 0x171B7BC3: mov edx, dword ptr [edi + 0xa0] */
    ecx = MEM32(edi + 0x4); /* 0x171B7BC9: mov ecx, dword ptr [edi + 4] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x171B7BCC: imul edx, eax */
    PUSH32(esp, 0); /* 0x171B7BCF: push 0 */
    PUSH32(esp, eax); /* 0x171B7BD1: push eax */
    eax = MEM32(ebp + (-0xC)); /* 0x171B7BD2: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x171B7BD5: push edx */
    edx = MEM32(eax); /* 0x171B7BD6: mov edx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x171B7BD8: push edx */
    PUSH32(esp, edi); /* 0x171B7BD9: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x171B7BDA: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0xA0); /* 0x171B7BDD: mov ecx, dword ptr [edi + 0xa0] */
    MEM32(ebp + (-0x20)) = eax; /* 0x171B7BE3: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x171B7BE6: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp ecx, eax */ /* 0x171B7BE9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0xC); /* 0x171B7BEB: mov ecx, dword ptr [esi + 0xc] */
    if (CMP_B(_flag_a, _flag_b)) goto L_171B7BFE; /* 0x171B7BEE: jb 0x171b7bfe */
L_171B7BF0:
    eax = MEM32(esi + 0x20); /* 0x171B7BF0: mov eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B7BF3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x171B7BF5: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x171B7BF7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x171B7BF9: mov dword ptr [ebp - 4], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B7C01; /* 0x171B7BFC: jne 0x171b7c01 */
L_171B7BFE:
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B7BFE: mov dword ptr [ebp - 4], ecx */
L_171B7C01:
    edx = MEM32(edi + 0x1C4); /* 0x171B7C01: mov edx, dword ptr [edi + 0x1c4] */
    eax = MEM32(edx + ebx * 4 + 0x4); /* 0x171B7C07: mov eax, dword ptr [edx + ebx*4 + 4] */
    ecx = MEM32(ebp + 0xC); /* 0x171B7C0B: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ecx + ebx * 4); /* 0x171B7C0E: mov edx, dword ptr [ecx + ebx*4] */
    MEM32(ebp + (-0x24)) = eax; /* 0x171B7C11: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x171B7C14: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B7C17: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171B7C19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edx; /* 0x171B7C1B: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x171B7C1E: mov dword ptr [ebp - 0x14], ecx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B7C7C; /* 0x171B7C21: jle 0x171b7c7c */
L_171B7C23:
    eax = MEM32(esi + 0x1C); /* 0x171B7C23: mov eax, dword ptr [esi + 0x1c] */
L_171B7C26:
    edx = MEM32(ebp + (-0x20)); /* 0x171B7C26: mov edx, dword ptr [ebp - 0x20] */
    ebx = MEM32(edx + ecx * 4); /* 0x171B7C29: mov ebx, dword ptr [edx + ecx*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B7C2C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171B7C2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x171B7C30: mov dword ptr [ebp - 0x10], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B7C5F; /* 0x171B7C33: jbe 0x171b7c5f */
L_171B7C35:
    eax = MEM32(ebp + (-0x8)); /* 0x171B7C35: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + 0x8); /* 0x171B7C38: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171B7C3B: push edi */
    PUSH32(esp, eax); /* 0x171B7C3C: push eax */
    PUSH32(esp, ebx); /* 0x171B7C3D: push ebx */
    PUSH32(esp, esi); /* 0x171B7C3E: push esi */
    PUSH32(esp, ecx); /* 0x171B7C3F: push ecx */
    RECOMP_ICALL(MEM32(ebp + (-0x24))); /* 0x171B7C40: call dword ptr [ebp - 0x24] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x24); /* 0x171B7C43: mov ecx, dword ptr [esi + 0x24] */
    eax = MEM32(esi + 0x1C); /* 0x171B7C46: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x171B7C49: add edi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x10)); /* 0x171B7C4B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x80u; /* 0x171B7C4E: add ebx, 0x80 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B7C54: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x171B7C55: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ecx; /* 0x171B7C57: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B7C35; /* 0x171B7C5A: jb 0x171b7c35 */
L_171B7C5C:
    ecx = MEM32(ebp + (-0x14)); /* 0x171B7C5C: mov ecx, dword ptr [ebp - 0x14] */
L_171B7C5F:
    edi = MEM32(ebp + (-0x8)); /* 0x171B7C5F: mov edi, dword ptr [ebp - 8] */
    edx = MEM32(esi + 0x24); /* 0x171B7C62: mov edx, dword ptr [esi + 0x24] */
    edx = edi + edx * 4; /* 0x171B7C65: lea edx, [edi + edx*4] */
    MEM32(ebp + (-0x8)) = edx; /* 0x171B7C68: mov dword ptr [ebp - 8], edx */
    edx = MEM32(ebp + (-0x4)); /* 0x171B7C6B: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B7C6E: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x171B7C6F: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = ecx; /* 0x171B7C71: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B7C26; /* 0x171B7C74: jl 0x171b7c26 */
L_171B7C76:
    edi = MEM32(ebp + 0x8); /* 0x171B7C76: mov edi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x18)); /* 0x171B7C79: mov ebx, dword ptr [ebp - 0x18] */
L_171B7C7C:
    edx = MEM32(ebp + (-0xC)); /* 0x171B7C7C: mov edx, dword ptr [ebp - 0xc] */
    eax = MEM32(edi + 0x24); /* 0x171B7C7F: mov eax, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B7C82: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171B7C83: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x54u; /* 0x171B7C86: add esi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x171B7C89: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = ebx; /* 0x171B7C8B: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0xC)) = edx; /* 0x171B7C8E: mov dword ptr [ebp - 0xc], edx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B7BB5; /* 0x171B7C91: jl 0x171b7bb5 */
L_171B7C97:
    esi = MEM32(edi + 0xA0); /* 0x171B7C97: mov esi, dword ptr [edi + 0xa0] */
    edx = MEM32(edi + 0x144); /* 0x171B7C9D: mov edx, dword ptr [edi + 0x144] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B7CA3: inc esi */
    _flag_k = FK_INC;
    eax = esi; /* 0x171B7CA4: mov eax, esi */
    MEM32(edi + 0xA0) = esi; /* 0x171B7CA6: mov dword ptr [edi + 0xa0], esi */
    /* cmp eax, edx */ /* 0x171B7CAC: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x171B7CAE: pop esi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171B7CAF: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebx = POP32_VAL(esp); /* 0x171B7CB1: pop ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B7CB2: add eax, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x171B7CB5: pop edi */
    esp = ebp; /* 0x171B7CB6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B7CB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B7CB9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B7CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B7CD0u);

L_171B7CD0:
    edi = edi; /* 0x171B7CD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B7CD2: push ebp */
    ebp = esp; /* 0x171B7CD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171B7CD5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171B7CD8: push ebx */
    PUSH32(esp, esi); /* 0x171B7CD9: push esi */
    PUSH32(esp, edi); /* 0x171B7CDA: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171B7CDB: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0xE0); /* 0x171B7CDE: mov eax, dword ptr [edi + 0xe0] */
    esi = MEM32(edi + 0x1B0); /* 0x171B7CE4: mov esi, dword ptr [edi + 0x1b0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B7CEA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171B7CEC: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x171B7CEE: mov dword ptr [ebp - 0xc], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B7DE8; /* 0x171B7CF1: je 0x171b7de8 */
L_171B7CF7:
    /* cmp MEM32(edi + 0xA4), ebx */ /* 0x171B7CF7: cmp dword ptr [edi + 0xa4], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0xA4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B7DE8; /* 0x171B7CFD: je 0x171b7de8 */
L_171B7D03:
    /* cmp MEM32(esi + 0x70), ebx */ /* 0x171B7D03: cmp dword ptr [esi + 0x70], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x70)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B7D1D; /* 0x171B7D06: jne 0x171b7d1d */
L_171B7D08:
    eax = MEM32(edi + 0x24); /* 0x171B7D08: mov eax, dword ptr [edi + 0x24] */
    ecx = MEM32(edi + 0x4); /* 0x171B7D0B: mov ecx, dword ptr [edi + 4] */
    edx = eax + eax * 2; /* 0x171B7D0E: lea edx, [eax + eax*2] */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x171B7D11: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x171B7D11: shl edx, 3 */
    PUSH32(esp, edx); /* 0x171B7D14: push edx */
    PUSH32(esp, 1); /* 0x171B7D15: push 1 */
    PUSH32(esp, edi); /* 0x171B7D17: push edi */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171B7D18: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x70) = eax; /* 0x171B7D1A: mov dword ptr [esi + 0x70], eax */
L_171B7D1D:
    ecx = MEM32(edi + 0x24); /* 0x171B7D1D: mov ecx, dword ptr [edi + 0x24] */
    /* test ecx, ecx */ /* 0x171B7D20: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(esi + 0x70); /* 0x171B7D22: mov esi, dword ptr [esi + 0x70] */
    eax = MEM32(edi + 0xDC); /* 0x171B7D25: mov eax, dword ptr [edi + 0xdc] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x171B7D2B: mov dword ptr [ebp - 0x10], ecx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B7DDC; /* 0x171B7D2E: jle 0x171b7ddc */
L_171B7D34:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x4Cu; /* 0x171B7D34: add eax, 0x4c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0; /* 0x171B7D37: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x8)) = eax; /* 0x171B7D3E: mov dword ptr [ebp - 8], eax */
    goto L_171B7D46; /* 0x171B7D41: jmp 0x171b7d46 */
L_171B7D43:
    edi = MEM32(ebp + 0x8); /* 0x171B7D43: mov edi, dword ptr [ebp + 8] */
L_171B7D46:
    eax = MEM32(ebp + (-0x8)); /* 0x171B7D46: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax); /* 0x171B7D49: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x171B7D4B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B7DE8; /* 0x171B7D4D: je 0x171b7de8 */
L_171B7D53:
    /* cmp MEM16(eax), 0 */ /* 0x171B7D53: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B7DE8; /* 0x171B7D57: je 0x171b7de8 */
L_171B7D5D:
    /* cmp MEM16(eax + 0x2), 0 */ /* 0x171B7D5D: cmp word ptr [eax + 2], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x2)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B7DE8; /* 0x171B7D62: je 0x171b7de8 */
L_171B7D68:
    /* cmp MEM16(eax + 0x10), 0 */ /* 0x171B7D68: cmp word ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x10)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B7DE8; /* 0x171B7D6D: je 0x171b7de8 */
L_171B7D6F:
    /* cmp MEM16(eax + 0x20), 0 */ /* 0x171B7D6F: cmp word ptr [eax + 0x20], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x20)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B7DE8; /* 0x171B7D74: je 0x171b7de8 */
L_171B7D76:
    /* cmp MEM16(eax + 0x12), 0 */ /* 0x171B7D76: cmp word ptr [eax + 0x12], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x12)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B7DE8; /* 0x171B7D7B: je 0x171b7de8 */
L_171B7D7D:
    /* cmp MEM16(eax + 0x4), 0 */ /* 0x171B7D7D: cmp word ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x4)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B7DE8; /* 0x171B7D82: je 0x171b7de8 */
L_171B7D84:
    eax = MEM32(edi + 0xA4); /* 0x171B7D84: mov eax, dword ptr [edi + 0xa4] */
    edx = MEM32(ebp + (-0x4)); /* 0x171B7D8A: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(eax + edx); /* 0x171B7D8D: mov ecx, dword ptr [eax + edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B7D90: add eax, edx */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x171B7D92: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B7DE8; /* 0x171B7D94: jl 0x171b7de8 */
L_171B7D96:
    edx = esi; /* 0x171B7D96: mov edx, esi */
    ecx = eax + 0x4; /* 0x171B7D98: lea ecx, [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x171B7D9B: sub edx, eax */
    _flag_k = FK_CMP;
    edi = 5; /* 0x171B7D9D: mov edi, 5 */
L_171B7DA2:
    eax = MEM32(ecx); /* 0x171B7DA2: mov eax, dword ptr [ecx] */
    /* test eax, eax */ /* 0x171B7DA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + ecx) = eax; /* 0x171B7DA6: mov dword ptr [edx + ecx], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B7DB2; /* 0x171B7DA9: je 0x171b7db2 */
L_171B7DAB:
    MEM32(ebp + (-0xC)) = 1; /* 0x171B7DAB: mov dword ptr [ebp - 0xc], 1 */
L_171B7DB2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171B7DB2: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B7DB5: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B7DA2; /* 0x171B7DB6: jne 0x171b7da2 */
L_171B7DB8:
    edx = MEM32(ebp + (-0x4)); /* 0x171B7DB8: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x171B7DBB: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x10)); /* 0x171B7DBE: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x171B7DC1: add esi, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B7DC4: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x100u; /* 0x171B7DC5: add edx, 0x100 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x54u; /* 0x171B7DCB: add ecx, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x171B7DCE: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edx; /* 0x171B7DD0: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B7DD3: mov dword ptr [ebp - 8], ecx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B7D43; /* 0x171B7DD6: jl 0x171b7d43 */
L_171B7DDC:
    eax = MEM32(ebp + (-0xC)); /* 0x171B7DDC: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x171B7DDF: pop edi */
    esi = POP32_VAL(esp); /* 0x171B7DE0: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B7DE1: pop ebx */
    esp = ebp; /* 0x171B7DE2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B7DE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B7DE5: ret 4 */
L_171B7DE8:
    edi = POP32_VAL(esp); /* 0x171B7DE8: pop edi */
    esi = POP32_VAL(esp); /* 0x171B7DE9: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B7DEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B7DEC: pop ebx */
    esp = ebp; /* 0x171B7DED: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B7DEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B7DF0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B7E00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B7E00u);

L_171B7E00:
    edi = edi; /* 0x171B7E00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B7E02: push ebp */
    ebp = esp; /* 0x171B7E03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x114u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x114u; /* 0x171B7E05: sub esp, 0x114 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171B7E0B: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B7E10: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x171B7E13: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171B7E16: push ebx */
    PUSH32(esp, esi); /* 0x171B7E17: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B7E18: mov esi, dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x94); /* 0x171B7E1B: mov edx, dword ptr [esi + 0x94] */
    ecx = MEM32(esi + 0x1B0); /* 0x171B7E21: mov ecx, dword ptr [esi + 0x1b0] */
    MEM32(ebp + (-0x110)) = eax; /* 0x171B7E27: mov dword ptr [ebp - 0x110], eax */
    eax = MEM32(esi + 0x144); /* 0x171B7E2D: mov eax, dword ptr [esi + 0x144] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B7E33: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x108)) = eax; /* 0x171B7E34: mov dword ptr [ebp - 0x108], eax */
    /* cmp edx, MEM32(esi + 0x9C) */ /* 0x171B7E3A: cmp edx, dword ptr [esi + 0x9c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x9C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171B7E40: push edi */
    MEM32(ebp + (-0xA8)) = esi; /* 0x171B7E41: mov dword ptr [ebp - 0xa8], esi */
    MEM32(ebp + (-0xE8)) = ecx; /* 0x171B7E47: mov dword ptr [ebp - 0xe8], ecx */
    if (CMP_G(_flag_a, _flag_b)) goto L_171B7EA3; /* 0x171B7E4D: jg 0x171b7ea3 */
L_171B7E4F:
    /* nop */ /* 0x171B7E4F: nop  */
L_171B7E50:
    eax = MEM32(esi + 0x1B8); /* 0x171B7E50: mov eax, dword ptr [esi + 0x1b8] */
    ecx = MEM32(eax + 0x14); /* 0x171B7E56: mov ecx, dword ptr [eax + 0x14] */
    /* test ecx, ecx */ /* 0x171B7E59: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B7EA3; /* 0x171B7E5B: jne 0x171b7ea3 */
L_171B7E5D:
    ecx = MEM32(esi + 0x94); /* 0x171B7E5D: mov ecx, dword ptr [esi + 0x94] */
    /* cmp ecx, MEM32(esi + 0x9C) */ /* 0x171B7E63: cmp ecx, dword ptr [esi + 0x9c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x9C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B7E8A; /* 0x171B7E69: jne 0x171b7e8a */
L_171B7E6B:
    ebx = MEM32(esi + 0x194); /* 0x171B7E6B: mov ebx, dword ptr [esi + 0x194] */
    edi = MEM32(esi + 0xA0); /* 0x171B7E71: mov edi, dword ptr [esi + 0xa0] */
    ecx = MEM32(esi + 0x98); /* 0x171B7E77: mov ecx, dword ptr [esi + 0x98] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B7E7D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x171B7E7F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x171B7E81: sete dl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x171B7E84: add edx, edi */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x171B7E86: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B7EA3; /* 0x171B7E88: ja 0x171b7ea3 */
L_171B7E8A:
    PUSH32(esp, esi); /* 0x171B7E8A: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B7E8B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B7E8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B7F28; /* 0x171B7E8F: je 0x171b7f28 */
L_171B7E95:
    eax = MEM32(esi + 0x94); /* 0x171B7E95: mov eax, dword ptr [esi + 0x94] */
    /* cmp eax, MEM32(esi + 0x9C) */ /* 0x171B7E9B: cmp eax, dword ptr [esi + 0x9c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x9C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B7E50; /* 0x171B7EA1: jle 0x171b7e50 */
L_171B7EA3:
    eax = MEM32(esi + 0x24); /* 0x171B7EA3: mov eax, dword ptr [esi + 0x24] */
    /* test eax, eax */ /* 0x171B7EA6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(esi + 0xDC); /* 0x171B7EA8: mov ebx, dword ptr [esi + 0xdc] */
    MEM32(ebp + (-0xC8)) = 0; /* 0x171B7EAE: mov dword ptr [ebp - 0xc8], 0 */
    MEM32(ebp + (-0xA0)) = ebx; /* 0x171B7EB8: mov dword ptr [ebp - 0xa0], ebx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B84F0; /* 0x171B7EBE: jle 0x171b84f0 */
L_171B7EC4:
    ecx = MEM32(ebp + (-0xE8)); /* 0x171B7EC4: mov ecx, dword ptr [ebp - 0xe8] */
    eax = 0xFFFFFFB8u; /* 0x171B7ECA: mov eax, 0xffffffb8 */
    edx = ecx + 0x48; /* 0x171B7ECF: lea edx, [ecx + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B7ED2: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xD0)) = 0; /* 0x171B7ED4: mov dword ptr [ebp - 0xd0], 0 */
    MEM32(ebp + (-0x9C)) = edx; /* 0x171B7EDE: mov dword ptr [ebp - 0x9c], edx */
    MEM32(ebp + (-0x114)) = eax; /* 0x171B7EE4: mov dword ptr [ebp - 0x114], eax */
    ebx = ebx; /* 0x171B7EEA: lea ebx, [ebx] */
L_171B7EF0:
    eax = MEM32(ebx + 0x30); /* 0x171B7EF0: mov eax, dword ptr [ebx + 0x30] */
    /* test eax, eax */ /* 0x171B7EF3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B84AB; /* 0x171B7EF5: je 0x171b84ab */
L_171B7EFB:
    edi = MEM32(ebp + (-0xA8)); /* 0x171B7EFB: mov edi, dword ptr [ebp - 0xa8] */
    esi = MEM32(edi + 0xA0); /* 0x171B7F01: mov esi, dword ptr [edi + 0xa0] */
    /* cmp esi, MEM32(ebp + (-0x108)) */ /* 0x171B7F07: cmp esi, dword ptr [ebp - 0x108] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x108)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0xC); /* 0x171B7F0D: mov ecx, dword ptr [ebx + 0xc] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B7F3B; /* 0x171B7F10: jae 0x171b7f3b */
L_171B7F12:
    eax = ecx; /* 0x171B7F12: mov eax, ecx */
    MEM32(ebp + (-0x88)) = eax; /* 0x171B7F14: mov dword ptr [ebp - 0x88], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x171B7F1A: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xDC)) = 0; /* 0x171B7F1C: mov dword ptr [ebp - 0xdc], 0 */
    goto L_171B7F62; /* 0x171B7F26: jmp 0x171b7f62 */
L_171B7F28:
    edi = POP32_VAL(esp); /* 0x171B7F28: pop edi */
    esi = POP32_VAL(esp); /* 0x171B7F29: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B7F2A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B7F2C: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x171B7F2D: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B76C); /* 0x171B7F30: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x171B7F35: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B7F37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B7F38: ret 8 */
L_171B7F3B:
    eax = MEM32(ebx + 0x20); /* 0x171B7F3B: mov eax, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B7F3E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x171B7F40: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x171B7F42: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x88)) = edx; /* 0x171B7F44: mov dword ptr [ebp - 0x88], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B7F52; /* 0x171B7F4A: jne 0x171b7f52 */
L_171B7F4C:
    MEM32(ebp + (-0x88)) = ecx; /* 0x171B7F4C: mov dword ptr [ebp - 0x88], ecx */
L_171B7F52:
    eax = MEM32(ebp + (-0x88)); /* 0x171B7F52: mov eax, dword ptr [ebp - 0x88] */
    MEM32(ebp + (-0xDC)) = 1; /* 0x171B7F58: mov dword ptr [ebp - 0xdc], 1 */
L_171B7F62:
    /* test esi, esi */ /* 0x171B7F62: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x171B7F64: push 0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B7F98; /* 0x171B7F66: jbe 0x171b7f98 */
L_171B7F68:
    edx = MEM32(edi + 0x4); /* 0x171B7F68: mov edx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171B7F6B: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171B7F6D: dec esi */
    _flag_k = FK_DEC;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x171B7F6E: imul esi, ecx */
    PUSH32(esp, eax); /* 0x171B7F71: push eax */
    PUSH32(esp, esi); /* 0x171B7F72: push esi */
    esi = MEM32(ebp + (-0x9C)); /* 0x171B7F73: mov esi, dword ptr [ebp - 0x9c] */
    eax = MEM32(esi); /* 0x171B7F79: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x171B7F7B: push eax */
    PUSH32(esp, edi); /* 0x171B7F7C: push edi */
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x171B7F7D: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xC); /* 0x171B7F80: mov ecx, dword ptr [ebx + 0xc] */
    edx = eax + ecx * 4; /* 0x171B7F83: lea edx, [eax + ecx*4] */
    MEM32(ebp + (-0xF8)) = edx; /* 0x171B7F86: mov dword ptr [ebp - 0xf8], edx */
    MEM32(ebp + (-0x100)) = 0; /* 0x171B7F8C: mov dword ptr [ebp - 0x100], 0 */
    goto L_171B7FBB; /* 0x171B7F96: jmp 0x171b7fbb */
L_171B7F98:
    esi = MEM32(ebp + (-0x9C)); /* 0x171B7F98: mov esi, dword ptr [ebp - 0x9c] */
    edx = MEM32(esi); /* 0x171B7F9E: mov edx, dword ptr [esi] */
    ecx = MEM32(edi + 0x4); /* 0x171B7FA0: mov ecx, dword ptr [edi + 4] */
    PUSH32(esp, eax); /* 0x171B7FA3: push eax */
    PUSH32(esp, 0); /* 0x171B7FA4: push 0 */
    PUSH32(esp, edx); /* 0x171B7FA6: push edx */
    PUSH32(esp, edi); /* 0x171B7FA7: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x171B7FA8: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xF8)) = eax; /* 0x171B7FAB: mov dword ptr [ebp - 0xf8], eax */
    MEM32(ebp + (-0x100)) = 1; /* 0x171B7FB1: mov dword ptr [ebp - 0x100], 1 */
L_171B7FBB:
    eax = MEM32(ebp + (-0xE8)); /* 0x171B7FBB: mov eax, dword ptr [ebp - 0xe8] */
    eax = MEM32(eax + 0x70); /* 0x171B7FC1: mov eax, dword ptr [eax + 0x70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xD0)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xD0)); /* 0x171B7FC4: add eax, dword ptr [ebp - 0xd0] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x94)) = eax; /* 0x171B7FCA: mov dword ptr [ebp - 0x94], eax */
    eax = MEM32(ebx + 0x4C); /* 0x171B7FD0: mov eax, dword ptr [ebx + 0x4c] */
    ecx = (uint32_t)MEM16(eax); /* 0x171B7FD3: movzx ecx, word ptr [eax] */
    edx = (uint32_t)MEM16(eax + 0x2); /* 0x171B7FD6: movzx edx, word ptr [eax + 2] */
    MEM32(ebp + (-0x8C)) = ecx; /* 0x171B7FDA: mov dword ptr [ebp - 0x8c], ecx */
    ecx = (uint32_t)MEM16(eax + 0x10); /* 0x171B7FE0: movzx ecx, word ptr [eax + 0x10] */
    MEM32(ebp + (-0xF4)) = edx; /* 0x171B7FE4: mov dword ptr [ebp - 0xf4], edx */
    edx = (uint32_t)MEM16(eax + 0x20); /* 0x171B7FEA: movzx edx, word ptr [eax + 0x20] */
    MEM32(ebp + (-0xF0)) = ecx; /* 0x171B7FEE: mov dword ptr [ebp - 0xf0], ecx */
    ecx = (uint32_t)MEM16(eax + 0x12); /* 0x171B7FF4: movzx ecx, word ptr [eax + 0x12] */
    MEM32(ebp + (-0xFC)) = edx; /* 0x171B7FF8: mov dword ptr [ebp - 0xfc], edx */
    edx = (uint32_t)MEM16(eax + 0x4); /* 0x171B7FFE: movzx edx, word ptr [eax + 4] */
    eax = MEM32(edi + 0x1C4); /* 0x171B8002: mov eax, dword ptr [edi + 0x1c4] */
    MEM32(ebp + (-0x104)) = ecx; /* 0x171B8008: mov dword ptr [ebp - 0x104], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x114)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x114)); /* 0x171B800E: add eax, dword ptr [ebp - 0x114] */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + esi + 0x4); /* 0x171B8014: mov ecx, dword ptr [eax + esi + 4] */
    eax = MEM32(ebp + (-0xC8)); /* 0x171B8018: mov eax, dword ptr [ebp - 0xc8] */
    MEM32(ebp + (-0xE0)) = edx; /* 0x171B801E: mov dword ptr [ebp - 0xe0], edx */
    edx = MEM32(ebp + (-0x110)); /* 0x171B8024: mov edx, dword ptr [ebp - 0x110] */
    MEM32(ebp + (-0x10C)) = ecx; /* 0x171B802A: mov dword ptr [ebp - 0x10c], ecx */
    ecx = MEM32(edx + eax * 4); /* 0x171B8030: mov ecx, dword ptr [edx + eax*4] */
    eax = MEM32(ebp + (-0x88)); /* 0x171B8033: mov eax, dword ptr [ebp - 0x88] */
    /* test eax, eax */ /* 0x171B8039: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB8)) = ecx; /* 0x171B803B: mov dword ptr [ebp - 0xb8], ecx */
    MEM32(ebp + (-0xB4)) = 0; /* 0x171B8041: mov dword ptr [ebp - 0xb4], 0 */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B84AB; /* 0x171B804B: jle 0x171b84ab */
L_171B8051:
    esi = MEM32(ebp + (-0xF8)); /* 0x171B8051: mov esi, dword ptr [ebp - 0xf8] */
    edx = MEM32(ebp + (-0xB4)); /* 0x171B8057: mov edx, dword ptr [ebp - 0xb4] */
    ecx = MEM32(ebp + (-0x100)); /* 0x171B805D: mov ecx, dword ptr [ebp - 0x100] */
    /* test ecx, ecx */ /* 0x171B8063: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + edx * 4); /* 0x171B8065: mov eax, dword ptr [esi + edx*4] */
    MEM32(ebp + (-0x90)) = eax; /* 0x171B8068: mov dword ptr [ebp - 0x90], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8076; /* 0x171B806E: je 0x171b8076 */
L_171B8070:
    /* test edx, edx */ /* 0x171B8070: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x171B8072: mov ecx, eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B807A; /* 0x171B8074: je 0x171b807a */
L_171B8076:
    ecx = MEM32(esi + edx * 4 + (-0x4)); /* 0x171B8076: mov ecx, dword ptr [esi + edx*4 - 4] */
L_171B807A:
    edi = MEM32(ebp + (-0xDC)); /* 0x171B807A: mov edi, dword ptr [ebp - 0xdc] */
    /* test edi, edi */ /* 0x171B8080: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B808F; /* 0x171B8082: je 0x171b808f */
L_171B8084:
    edi = MEM32(ebp + (-0x88)); /* 0x171B8084: mov edi, dword ptr [ebp - 0x88] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B808A: dec edi */
    _flag_k = FK_DEC;
    /* cmp edx, edi */ /* 0x171B808B: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B8093; /* 0x171B808D: je 0x171b8093 */
L_171B808F:
    eax = MEM32(esi + edx * 4 + 0x4); /* 0x171B808F: mov eax, dword ptr [esi + edx*4 + 4] */
L_171B8093:
    edx = MEM32(ebp + (-0x90)); /* 0x171B8093: mov edx, dword ptr [ebp - 0x90] */
    esi = (int32_t)(int16_t)MEM16(edx); /* 0x171B8099: movsx esi, word ptr [edx] */
    edx = (int32_t)(int16_t)MEM16(eax); /* 0x171B809C: movsx edx, word ptr [eax] */
    edi = (int32_t)(int16_t)MEM16(ecx); /* 0x171B809F: movsx edi, word ptr [ecx] */
    MEM32(ebp + (-0xAC)) = edx; /* 0x171B80A2: mov dword ptr [ebp - 0xac], edx */
    MEM32(ebp + (-0xA4)) = edx; /* 0x171B80A8: mov dword ptr [ebp - 0xa4], edx */
    MEM32(ebp + (-0xE4)) = edx; /* 0x171B80AE: mov dword ptr [ebp - 0xe4], edx */
    edx = MEM32(ebx + 0x1C); /* 0x171B80B4: mov edx, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171B80B7: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x80u; /* 0x171B80B8: add eax, 0x80 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x80u; /* 0x171B80BD: add ecx, 0x80 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC0)) = edi; /* 0x171B80C3: mov dword ptr [ebp - 0xc0], edi */
    MEM32(ebp + (-0xB0)) = edi; /* 0x171B80C9: mov dword ptr [ebp - 0xb0], edi */
    MEM32(ebp + (-0x98)) = esi; /* 0x171B80CF: mov dword ptr [ebp - 0x98], esi */
    MEM32(ebp + (-0xBC)) = esi; /* 0x171B80D5: mov dword ptr [ebp - 0xbc], esi */
    MEM32(ebp + (-0xC4)) = 0; /* 0x171B80DB: mov dword ptr [ebp - 0xc4], 0 */
    MEM32(ebp + (-0xEC)) = edx; /* 0x171B80E5: mov dword ptr [ebp - 0xec], edx */
    MEM32(ebp + (-0xD4)) = 0; /* 0x171B80EB: mov dword ptr [ebp - 0xd4], 0 */
    MEM32(ebp + (-0xCC)) = eax; /* 0x171B80F5: mov dword ptr [ebp - 0xcc], eax */
    MEM32(ebp + (-0xD8)) = ecx; /* 0x171B80FB: mov dword ptr [ebp - 0xd8], ecx */
L_171B8101:
    ecx = MEM32(ebp + (-0x90)); /* 0x171B8101: mov ecx, dword ptr [ebp - 0x90] */
    PUSH32(esp, 1); /* 0x171B8107: push 1 */
    eax = ebp + (-0x84); /* 0x171B8109: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x171B810F: push eax */
    PUSH32(esp, ecx); /* 0x171B8110: push ecx */
    RECOMP_CALL(sub_171B5D90); /* 0x171B8111: call 0x171b5d90 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xEC)); /* 0x171B8116: mov edx, dword ptr [ebp - 0xec] */
    /* cmp MEM32(ebp + (-0xD4)), edx */ /* 0x171B811C: cmp dword ptr [ebp - 0xd4], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B814F; /* 0x171B8122: jae 0x171b814f */
L_171B8124:
    eax = MEM32(ebp + (-0xD8)); /* 0x171B8124: mov eax, dword ptr [ebp - 0xd8] */
    ecx = (int32_t)(int16_t)MEM16(eax); /* 0x171B812A: movsx ecx, word ptr [eax] */
    eax = MEM32(ebp + (-0xCC)); /* 0x171B812D: mov eax, dword ptr [ebp - 0xcc] */
    edx = MEM32(ebp + (-0x90)); /* 0x171B8133: mov edx, dword ptr [ebp - 0x90] */
    esi = (int32_t)(int16_t)MEM16(edx + 0x80); /* 0x171B8139: movsx esi, word ptr [edx + 0x80] */
    MEM32(ebp + (-0xC0)) = ecx; /* 0x171B8140: mov dword ptr [ebp - 0xc0], ecx */
    ecx = (int32_t)(int16_t)MEM16(eax); /* 0x171B8146: movsx ecx, word ptr [eax] */
    MEM32(ebp + (-0xAC)) = ecx; /* 0x171B8149: mov dword ptr [ebp - 0xac], ecx */
L_171B814F:
    edx = MEM32(ebp + (-0x94)); /* 0x171B814F: mov edx, dword ptr [ebp - 0x94] */
    ecx = MEM32(edx + 0x4); /* 0x171B8155: mov ecx, dword ptr [edx + 4] */
    /* test ecx, ecx */ /* 0x171B8158: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B81CC; /* 0x171B815A: je 0x171b81cc */
L_171B815C:
    /* cmp MEM16(ebp + (-0x82)), 0 */ /* 0x171B815C: cmp word ptr [ebp - 0x82], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x82))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B81CC; /* 0x171B8164: jne 0x171b81cc */
L_171B8166:
    eax = MEM32(ebp + (-0xBC)); /* 0x171B8166: mov eax, dword ptr [ebp - 0xbc] */
    ebx = MEM32(ebp + (-0xF4)); /* 0x171B816C: mov ebx, dword ptr [ebp - 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171B8172: sub eax, esi */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x8C))); /* 0x171B8174: imul eax, dword ptr [ebp - 0x8c] */
    edx = eax + eax * 8; /* 0x171B817B: lea edx, [eax + eax*8] */
    eax = ebx; /* 0x171B817E: mov eax, ebx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x171B8180: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x171B8180: shl edx, 2 */
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x171B8183: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x171B8183: shl ebx, 8 */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x171B8186: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x171B8186: shl eax, 7 */
    /* test edx, edx */ /* 0x171B8189: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B81A6; /* 0x171B818B: jl 0x171b81a6 */
L_171B818D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B818D: add eax, edx */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B818F: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x171B8190: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test ecx, ecx */ /* 0x171B8192: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B81BF; /* 0x171B8194: jle 0x171b81bf */
L_171B8196:
    edx = 1; /* 0x171B8196: mov edx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B819B: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171B819B: shl edx, cl */
    /* cmp eax, edx */ /* 0x171B819D: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B81BF; /* 0x171B819F: jl 0x171b81bf */
L_171B81A1:
    eax = edx + (-0x1); /* 0x171B81A1: lea eax, [edx - 1] */
    goto L_171B81BF; /* 0x171B81A4: jmp 0x171b81bf */
L_171B81A6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171B81A6: sub eax, edx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B81A8: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x171B81A9: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test ecx, ecx */ /* 0x171B81AB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B81BD; /* 0x171B81AD: jle 0x171b81bd */
L_171B81AF:
    edx = 1; /* 0x171B81AF: mov edx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B81B4: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171B81B4: shl edx, cl */
    /* cmp eax, edx */ /* 0x171B81B6: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B81BD; /* 0x171B81B8: jl 0x171b81bd */
L_171B81BA:
    eax = edx + (-0x1); /* 0x171B81BA: lea eax, [edx - 1] */
L_171B81BD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171B81BD: neg eax */
    _flag_k = FK_CMP;
L_171B81BF:
    ebx = MEM32(ebp + (-0xA0)); /* 0x171B81BF: mov ebx, dword ptr [ebp - 0xa0] */
    MEM16(ebp + (-0x82)) = (uint16_t)(LO16(eax)); /* 0x171B81C5: mov word ptr [ebp - 0x82], ax */
L_171B81CC:
    eax = MEM32(ebp + (-0x94)); /* 0x171B81CC: mov eax, dword ptr [ebp - 0x94] */
    ecx = MEM32(eax + 0x8); /* 0x171B81D2: mov ecx, dword ptr [eax + 8] */
    /* test ecx, ecx */ /* 0x171B81D5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8249; /* 0x171B81D7: je 0x171b8249 */
L_171B81D9:
    /* cmp MEM16(ebp + (-0x74)), 0 */ /* 0x171B81D9: cmp word ptr [ebp - 0x74], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x74))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B8249; /* 0x171B81DE: jne 0x171b8249 */
L_171B81E0:
    edx = MEM32(ebp + (-0xA4)); /* 0x171B81E0: mov edx, dword ptr [ebp - 0xa4] */
    eax = MEM32(ebp + (-0xB0)); /* 0x171B81E6: mov eax, dword ptr [ebp - 0xb0] */
    ebx = MEM32(ebp + (-0xF0)); /* 0x171B81EC: mov ebx, dword ptr [ebp - 0xf0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171B81F2: sub eax, edx */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x8C))); /* 0x171B81F4: imul eax, dword ptr [ebp - 0x8c] */
    edx = eax + eax * 8; /* 0x171B81FB: lea edx, [eax + eax*8] */
    eax = ebx; /* 0x171B81FE: mov eax, ebx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x171B8200: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x171B8200: shl edx, 2 */
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x171B8203: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x171B8203: shl ebx, 8 */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x171B8206: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x171B8206: shl eax, 7 */
    /* test edx, edx */ /* 0x171B8209: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B8226; /* 0x171B820B: jl 0x171b8226 */
L_171B820D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B820D: add eax, edx */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B820F: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x171B8210: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test ecx, ecx */ /* 0x171B8212: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B823F; /* 0x171B8214: jle 0x171b823f */
L_171B8216:
    edx = 1; /* 0x171B8216: mov edx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B821B: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171B821B: shl edx, cl */
    /* cmp eax, edx */ /* 0x171B821D: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B823F; /* 0x171B821F: jl 0x171b823f */
L_171B8221:
    eax = edx + (-0x1); /* 0x171B8221: lea eax, [edx - 1] */
    goto L_171B823F; /* 0x171B8224: jmp 0x171b823f */
L_171B8226:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171B8226: sub eax, edx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B8228: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x171B8229: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test ecx, ecx */ /* 0x171B822B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B823D; /* 0x171B822D: jle 0x171b823d */
L_171B822F:
    edx = 1; /* 0x171B822F: mov edx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B8234: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171B8234: shl edx, cl */
    /* cmp eax, edx */ /* 0x171B8236: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B823D; /* 0x171B8238: jl 0x171b823d */
L_171B823A:
    eax = edx + (-0x1); /* 0x171B823A: lea eax, [edx - 1] */
L_171B823D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171B823D: neg eax */
    _flag_k = FK_CMP;
L_171B823F:
    ebx = MEM32(ebp + (-0xA0)); /* 0x171B823F: mov ebx, dword ptr [ebp - 0xa0] */
    MEM16(ebp + (-0x74)) = (uint16_t)(LO16(eax)); /* 0x171B8245: mov word ptr [ebp - 0x74], ax */
L_171B8249:
    ecx = MEM32(ebp + (-0x94)); /* 0x171B8249: mov ecx, dword ptr [ebp - 0x94] */
    ecx = MEM32(ecx + 0xC); /* 0x171B824F: mov ecx, dword ptr [ecx + 0xc] */
    /* test ecx, ecx */ /* 0x171B8252: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B82CE; /* 0x171B8254: je 0x171b82ce */
L_171B8256:
    /* cmp MEM16(ebp + (-0x64)), 0 */ /* 0x171B8256: cmp word ptr [ebp - 0x64], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x64))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B82CE; /* 0x171B825B: jne 0x171b82ce */
L_171B825D:
    edx = MEM32(ebp + (-0x98)); /* 0x171B825D: mov edx, dword ptr [ebp - 0x98] */
    ebx = MEM32(ebp + (-0xFC)); /* 0x171B8263: mov ebx, dword ptr [ebp - 0xfc] */
    eax = edx + edx; /* 0x171B8269: lea eax, [edx + edx] */
    edx = eax; /* 0x171B826C: mov edx, eax */
    eax = MEM32(ebp + (-0xA4)); /* 0x171B826E: mov eax, dword ptr [ebp - 0xa4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171B8274: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xB0)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xB0)); /* 0x171B8276: add eax, dword ptr [ebp - 0xb0] */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x8C))); /* 0x171B827C: imul eax, dword ptr [ebp - 0x8c] */
    edx = eax + eax * 8; /* 0x171B8283: lea edx, [eax + eax*8] */
    eax = ebx; /* 0x171B8286: mov eax, ebx */
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x171B8288: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x171B8288: shl ebx, 8 */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x171B828B: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x171B828B: shl eax, 7 */
    /* test edx, edx */ /* 0x171B828E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B82AB; /* 0x171B8290: jl 0x171b82ab */
L_171B8292:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B8292: add eax, edx */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B8294: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x171B8295: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test ecx, ecx */ /* 0x171B8297: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B82C4; /* 0x171B8299: jle 0x171b82c4 */
L_171B829B:
    edx = 1; /* 0x171B829B: mov edx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B82A0: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171B82A0: shl edx, cl */
    /* cmp eax, edx */ /* 0x171B82A2: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B82C4; /* 0x171B82A4: jl 0x171b82c4 */
L_171B82A6:
    eax = edx + (-0x1); /* 0x171B82A6: lea eax, [edx - 1] */
    goto L_171B82C4; /* 0x171B82A9: jmp 0x171b82c4 */
L_171B82AB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171B82AB: sub eax, edx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B82AD: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x171B82AE: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test ecx, ecx */ /* 0x171B82B0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B82C2; /* 0x171B82B2: jle 0x171b82c2 */
L_171B82B4:
    edx = 1; /* 0x171B82B4: mov edx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B82B9: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171B82B9: shl edx, cl */
    /* cmp eax, edx */ /* 0x171B82BB: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B82C2; /* 0x171B82BD: jl 0x171b82c2 */
L_171B82BF:
    eax = edx + (-0x1); /* 0x171B82BF: lea eax, [edx - 1] */
L_171B82C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171B82C2: neg eax */
    _flag_k = FK_CMP;
L_171B82C4:
    ebx = MEM32(ebp + (-0xA0)); /* 0x171B82C4: mov ebx, dword ptr [ebp - 0xa0] */
    MEM16(ebp + (-0x64)) = (uint16_t)(LO16(eax)); /* 0x171B82CA: mov word ptr [ebp - 0x64], ax */
L_171B82CE:
    eax = MEM32(ebp + (-0x94)); /* 0x171B82CE: mov eax, dword ptr [ebp - 0x94] */
    ecx = MEM32(eax + 0x10); /* 0x171B82D4: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x171B82D7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B834A; /* 0x171B82D9: je 0x171b834a */
L_171B82DB:
    /* cmp MEM16(ebp + (-0x72)), 0 */ /* 0x171B82DB: cmp word ptr [ebp - 0x72], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x72))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B834A; /* 0x171B82E0: jne 0x171b834a */
L_171B82E2:
    edx = MEM32(ebp + (-0xE4)); /* 0x171B82E2: mov edx, dword ptr [ebp - 0xe4] */
    eax = MEM32(ebp + (-0xAC)); /* 0x171B82E8: mov eax, dword ptr [ebp - 0xac] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171B82EE: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC0)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0xC0)); /* 0x171B82F0: sub eax, dword ptr [ebp - 0xc0] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x171B82F6: add eax, edi */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x8C))); /* 0x171B82F8: imul eax, dword ptr [ebp - 0x8c] */
    edi = MEM32(ebp + (-0x104)); /* 0x171B82FF: mov edi, dword ptr [ebp - 0x104] */
    edx = eax + eax * 4; /* 0x171B8305: lea edx, [eax + eax*4] */
    eax = edi; /* 0x171B8308: mov eax, edi */
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x171B830A: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x171B830A: shl edi, 8 */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x171B830D: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x171B830D: shl eax, 7 */
    /* test edx, edx */ /* 0x171B8310: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B832D; /* 0x171B8312: jl 0x171b832d */
L_171B8314:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B8314: add eax, edx */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B8316: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x171B8317: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test ecx, ecx */ /* 0x171B8319: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B8346; /* 0x171B831B: jle 0x171b8346 */
L_171B831D:
    edx = 1; /* 0x171B831D: mov edx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B8322: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171B8322: shl edx, cl */
    /* cmp eax, edx */ /* 0x171B8324: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B8346; /* 0x171B8326: jl 0x171b8346 */
L_171B8328:
    eax = edx + (-0x1); /* 0x171B8328: lea eax, [edx - 1] */
    goto L_171B8346; /* 0x171B832B: jmp 0x171b8346 */
L_171B832D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171B832D: sub eax, edx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B832F: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x171B8330: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test ecx, ecx */ /* 0x171B8332: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B8344; /* 0x171B8334: jle 0x171b8344 */
L_171B8336:
    edx = 1; /* 0x171B8336: mov edx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B833B: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171B833B: shl edx, cl */
    /* cmp eax, edx */ /* 0x171B833D: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B8344; /* 0x171B833F: jl 0x171b8344 */
L_171B8341:
    eax = edx + (-0x1); /* 0x171B8341: lea eax, [edx - 1] */
L_171B8344:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171B8344: neg eax */
    _flag_k = FK_CMP;
L_171B8346:
    MEM16(ebp + (-0x72)) = (uint16_t)(LO16(eax)); /* 0x171B8346: mov word ptr [ebp - 0x72], ax */
L_171B834A:
    ecx = MEM32(ebp + (-0x94)); /* 0x171B834A: mov ecx, dword ptr [ebp - 0x94] */
    ecx = MEM32(ecx + 0x14); /* 0x171B8350: mov ecx, dword ptr [ecx + 0x14] */
    /* test ecx, ecx */ /* 0x171B8353: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B83C5; /* 0x171B8355: je 0x171b83c5 */
L_171B8357:
    /* cmp MEM16(ebp + (-0x80)), 0 */ /* 0x171B8357: cmp word ptr [ebp - 0x80], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x80))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B83C5; /* 0x171B835C: jne 0x171b83c5 */
L_171B835E:
    edx = MEM32(ebp + (-0x98)); /* 0x171B835E: mov edx, dword ptr [ebp - 0x98] */
    edi = MEM32(ebp + (-0xE0)); /* 0x171B8364: mov edi, dword ptr [ebp - 0xe0] */
    eax = edx + edx; /* 0x171B836A: lea eax, [edx + edx] */
    edx = eax; /* 0x171B836D: mov edx, eax */
    eax = esi; /* 0x171B836F: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171B8371: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xBC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xBC)); /* 0x171B8373: add eax, dword ptr [ebp - 0xbc] */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x8C))); /* 0x171B8379: imul eax, dword ptr [ebp - 0x8c] */
    edx = eax + eax * 8; /* 0x171B8380: lea edx, [eax + eax*8] */
    eax = edi; /* 0x171B8383: mov eax, edi */
    if (8u) _cf = (((edi) >> 24) & 1u); /* 0x171B8385: shl edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edi << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 8u; /* 0x171B8385: shl edi, 8 */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x171B8388: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x171B8388: shl eax, 7 */
    /* test edx, edx */ /* 0x171B838B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B83A8; /* 0x171B838D: jl 0x171b83a8 */
L_171B838F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B838F: add eax, edx */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B8391: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x171B8392: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test ecx, ecx */ /* 0x171B8394: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B83C1; /* 0x171B8396: jle 0x171b83c1 */
L_171B8398:
    edx = 1; /* 0x171B8398: mov edx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B839D: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171B839D: shl edx, cl */
    /* cmp eax, edx */ /* 0x171B839F: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B83C1; /* 0x171B83A1: jl 0x171b83c1 */
L_171B83A3:
    eax = edx + (-0x1); /* 0x171B83A3: lea eax, [edx - 1] */
    goto L_171B83C1; /* 0x171B83A6: jmp 0x171b83c1 */
L_171B83A8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171B83A8: sub eax, edx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B83AA: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x171B83AB: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test ecx, ecx */ /* 0x171B83AD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B83BF; /* 0x171B83AF: jle 0x171b83bf */
L_171B83B1:
    edx = 1; /* 0x171B83B1: mov edx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B83B6: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171B83B6: shl edx, cl */
    /* cmp eax, edx */ /* 0x171B83B8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B83BF; /* 0x171B83BA: jl 0x171b83bf */
L_171B83BC:
    eax = edx + (-0x1); /* 0x171B83BC: lea eax, [edx - 1] */
L_171B83BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171B83BF: neg eax */
    _flag_k = FK_CMP;
L_171B83C1:
    MEM16(ebp + (-0x80)) = (uint16_t)(LO16(eax)); /* 0x171B83C1: mov word ptr [ebp - 0x80], ax */
L_171B83C5:
    eax = MEM32(ebp + (-0xC4)); /* 0x171B83C5: mov eax, dword ptr [ebp - 0xc4] */
    ecx = MEM32(ebp + (-0xB8)); /* 0x171B83CB: mov ecx, dword ptr [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x171B83D1: push eax */
    eax = MEM32(ebp + (-0xA8)); /* 0x171B83D2: mov eax, dword ptr [ebp - 0xa8] */
    PUSH32(esp, ecx); /* 0x171B83D8: push ecx */
    edx = ebp + (-0x84); /* 0x171B83D9: lea edx, [ebp - 0x84] */
    PUSH32(esp, edx); /* 0x171B83DF: push edx */
    PUSH32(esp, ebx); /* 0x171B83E0: push ebx */
    PUSH32(esp, eax); /* 0x171B83E1: push eax */
    RECOMP_ICALL(MEM32(ebp + (-0x10C))); /* 0x171B83E2: call dword ptr [ebp - 0x10c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC0)); /* 0x171B83E8: mov ecx, dword ptr [ebp - 0xc0] */
    edi = MEM32(ebp + (-0xB0)); /* 0x171B83EE: mov edi, dword ptr [ebp - 0xb0] */
    eax = MEM32(ebp + (-0xA4)); /* 0x171B83F4: mov eax, dword ptr [ebp - 0xa4] */
    edx = MEM32(ebp + (-0x98)); /* 0x171B83FA: mov edx, dword ptr [ebp - 0x98] */
    MEM32(ebp + (-0xB0)) = ecx; /* 0x171B8400: mov dword ptr [ebp - 0xb0], ecx */
    ecx = MEM32(ebp + (-0xAC)); /* 0x171B8406: mov ecx, dword ptr [ebp - 0xac] */
    MEM32(ebp + (-0xE4)) = eax; /* 0x171B840C: mov dword ptr [ebp - 0xe4], eax */
    MEM32(ebp + (-0xA4)) = ecx; /* 0x171B8412: mov dword ptr [ebp - 0xa4], ecx */
    ecx = MEM32(ebp + (-0x90)); /* 0x171B8418: mov ecx, dword ptr [ebp - 0x90] */
    eax = 0x80u; /* 0x171B841E: mov eax, 0x80 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171B8423: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xBC)) = edx; /* 0x171B8425: mov dword ptr [ebp - 0xbc], edx */
    edx = MEM32(ebp + (-0xD8)); /* 0x171B842B: mov edx, dword ptr [ebp - 0xd8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171B8431: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x90)) = ecx; /* 0x171B8433: mov dword ptr [ebp - 0x90], ecx */
    ecx = MEM32(ebp + (-0xCC)); /* 0x171B8439: mov ecx, dword ptr [ebp - 0xcc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171B843F: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0xC4)); /* 0x171B8441: mov eax, dword ptr [ebp - 0xc4] */
    MEM32(ebp + (-0xD8)) = edx; /* 0x171B8447: mov dword ptr [ebp - 0xd8], edx */
    edx = MEM32(ebx + 0x24); /* 0x171B844D: mov edx, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B8450: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC4)) = eax; /* 0x171B8452: mov dword ptr [ebp - 0xc4], eax */
    eax = MEM32(ebp + (-0xD4)); /* 0x171B8458: mov eax, dword ptr [ebp - 0xd4] */
    MEM32(ebp + (-0xCC)) = ecx; /* 0x171B845E: mov dword ptr [ebp - 0xcc], ecx */
    ecx = MEM32(ebp + (-0xEC)); /* 0x171B8464: mov ecx, dword ptr [ebp - 0xec] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B846A: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x171B846B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x98)) = esi; /* 0x171B846D: mov dword ptr [ebp - 0x98], esi */
    MEM32(ebp + (-0xD4)) = eax; /* 0x171B8473: mov dword ptr [ebp - 0xd4], eax */
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B8101; /* 0x171B8479: jbe 0x171b8101 */
L_171B847F:
    ecx = MEM32(ebp + (-0xB8)); /* 0x171B847F: mov ecx, dword ptr [ebp - 0xb8] */
    eax = edx; /* 0x171B8485: mov eax, edx */
    edx = ecx + eax * 4; /* 0x171B8487: lea edx, [ecx + eax*4] */
    eax = MEM32(ebp + (-0xB4)); /* 0x171B848A: mov eax, dword ptr [ebp - 0xb4] */
    ecx = MEM32(ebp + (-0x88)); /* 0x171B8490: mov ecx, dword ptr [ebp - 0x88] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B8496: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x171B8497: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xB8)) = edx; /* 0x171B8499: mov dword ptr [ebp - 0xb8], edx */
    MEM32(ebp + (-0xB4)) = eax; /* 0x171B849F: mov dword ptr [ebp - 0xb4], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B8051; /* 0x171B84A5: jl 0x171b8051 */
L_171B84AB:
    ecx = MEM32(ebp + (-0xD0)); /* 0x171B84AB: mov ecx, dword ptr [ebp - 0xd0] */
    eax = MEM32(ebp + (-0xC8)); /* 0x171B84B1: mov eax, dword ptr [ebp - 0xc8] */
    edi = MEM32(ebp + (-0x9C)); /* 0x171B84B7: mov edi, dword ptr [ebp - 0x9c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x171B84BD: add ecx, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xD0)) = ecx; /* 0x171B84C0: mov dword ptr [ebp - 0xd0], ecx */
    ecx = MEM32(ebp + (-0xA8)); /* 0x171B84C6: mov ecx, dword ptr [ebp - 0xa8] */
    edx = MEM32(ecx + 0x24); /* 0x171B84CC: mov edx, dword ptr [ecx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B84CF: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171B84D0: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x54u; /* 0x171B84D3: add ebx, 0x54 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x171B84D6: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC8)) = eax; /* 0x171B84D8: mov dword ptr [ebp - 0xc8], eax */
    MEM32(ebp + (-0x9C)) = edi; /* 0x171B84DE: mov dword ptr [ebp - 0x9c], edi */
    MEM32(ebp + (-0xA0)) = ebx; /* 0x171B84E4: mov dword ptr [ebp - 0xa0], ebx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B7EF0; /* 0x171B84EA: jl 0x171b7ef0 */
L_171B84F0:
    ecx = MEM32(ebp + (-0xA8)); /* 0x171B84F0: mov ecx, dword ptr [ebp - 0xa8] */
    esi = MEM32(ecx + 0xA0); /* 0x171B84F6: mov esi, dword ptr [ecx + 0xa0] */
    edx = MEM32(ecx + 0x144); /* 0x171B84FC: mov edx, dword ptr [ecx + 0x144] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B8502: inc esi */
    _flag_k = FK_INC;
    eax = esi; /* 0x171B8503: mov eax, esi */
    /* cmp eax, edx */ /* 0x171B8505: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x171B8507: pop edi */
    MEM32(ecx + 0xA0) = esi; /* 0x171B8508: mov dword ptr [ecx + 0xa0], esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x171B850E: mov ecx, dword ptr [ebp - 4] */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171B8511: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = POP32_VAL(esp); /* 0x171B8513: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B8514: add eax, 4 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x171B8517: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171B8518: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x171B851D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B851F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B8520: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B8530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B8530u);

L_171B8530:
    edi = edi; /* 0x171B8530: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B8532: push ebp */
    ebp = esp; /* 0x171B8533: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B8535: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B8536: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171B8539: push edi */
    edi = MEM32(esi + 0x1B0); /* 0x171B853A: mov edi, dword ptr [esi + 0x1b0] */
    eax = MEM32(edi + 0x10); /* 0x171B8540: mov eax, dword ptr [edi + 0x10] */
    /* test eax, eax */ /* 0x171B8543: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8576; /* 0x171B8545: je 0x171b8576 */
L_171B8547:
    eax = MEM32(esi + 0x50); /* 0x171B8547: mov eax, dword ptr [esi + 0x50] */
    /* test eax, eax */ /* 0x171B854A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B856F; /* 0x171B854C: je 0x171b856f */
L_171B854E:
    PUSH32(esp, esi); /* 0x171B854E: push esi */
    RECOMP_CALL(sub_171B7CD0); /* 0x171B854F: call 0x171b7cd0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B8554: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B856F; /* 0x171B8556: je 0x171b856f */
L_171B8558:
    MEM32(edi + 0xC) = 0x171B7E00u; /* 0x171B8558: mov dword ptr [edi + 0xc], 0x171b7e00 */
    edi = POP32_VAL(esp); /* 0x171B855F: pop edi */
    MEM32(esi + 0xA0) = 0; /* 0x171B8560: mov dword ptr [esi + 0xa0], 0 */
    esi = POP32_VAL(esp); /* 0x171B856A: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B856B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B856C: ret 4 */
L_171B856F:
    MEM32(edi + 0xC) = 0x171B7B40u; /* 0x171B856F: mov dword ptr [edi + 0xc], 0x171b7b40 */
L_171B8576:
    edi = POP32_VAL(esp); /* 0x171B8576: pop edi */
    MEM32(esi + 0xA0) = 0; /* 0x171B8577: mov dword ptr [esi + 0xa0], 0 */
    esi = POP32_VAL(esp); /* 0x171B8581: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B8582: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B8583: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B8590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B8590u);

L_171B8590:
    edi = edi; /* 0x171B8590: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B8592: push ebp */
    ebp = esp; /* 0x171B8593: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B8595: push ecx */
    PUSH32(esp, ebx); /* 0x171B8596: push ebx */
    PUSH32(esp, esi); /* 0x171B8597: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B8598: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171B859B: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x171B859E: push edi */
    PUSH32(esp, 0x74u); /* 0x171B859F: push 0x74 */
    PUSH32(esp, 1); /* 0x171B85A1: push 1 */
    PUSH32(esp, esi); /* 0x171B85A3: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B85A4: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171B85A6: mov ebx, eax */
    eax = MEM32(ebp + 0xC); /* 0x171B85A8: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B85AB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x171B85AD: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171B85AF: mov dword ptr [ebp - 4], ebx */
    MEM32(esi + 0x1B0) = ebx; /* 0x171B85B2: mov dword ptr [esi + 0x1b0], ebx */
    MEM32(ebx) = 0x171B7670u; /* 0x171B85B8: mov dword ptr [ebx], 0x171b7670 */
    MEM32(ebx + 0x8) = 0x171B8530u; /* 0x171B85BE: mov dword ptr [ebx + 8], 0x171b8530 */
    MEM32(ebx + 0x70) = edi; /* 0x171B85C5: mov dword ptr [ebx + 0x70], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B8657; /* 0x171B85C8: je 0x171b8657 */
L_171B85CE:
    /* cmp MEM32(esi + 0x24), edi */ /* 0x171B85CE: cmp dword ptr [esi + 0x24], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0xDC); /* 0x171B85D1: mov eax, dword ptr [esi + 0xdc] */
    MEM32(ebp + 0x8) = edi; /* 0x171B85D7: mov dword ptr [ebp + 8], edi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B863A; /* 0x171B85DA: jle 0x171b863a */
L_171B85DC:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x48u; /* 0x171B85DC: add ebx, 0x48 */
    _flag_k = FK_ADD;
    edi = eax + 0xC; /* 0x171B85DF: lea edi, [eax + 0xc] */
    MEM32(ebp + 0xC) = ebx; /* 0x171B85E2: mov dword ptr [ebp + 0xc], ebx */
L_171B85E5:
    edx = MEM32(esi + 0xE0); /* 0x171B85E5: mov edx, dword ptr [esi + 0xe0] */
    /* test edx, edx */ /* 0x171B85EB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi); /* 0x171B85ED: mov eax, dword ptr [edi] */
    ecx = eax; /* 0x171B85EF: mov ecx, eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B85F6; /* 0x171B85F1: je 0x171b85f6 */
L_171B85F3:
    ecx = ecx + ecx * 2; /* 0x171B85F3: lea ecx, [ecx + ecx*2] */
L_171B85F6:
    ebx = MEM32(esi + 0x4); /* 0x171B85F6: mov ebx, dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x171B85F9: push ecx */
    ecx = MEM32(edi + 0x14); /* 0x171B85FA: mov ecx, dword ptr [edi + 0x14] */
    PUSH32(esp, eax); /* 0x171B85FD: push eax */
    PUSH32(esp, ecx); /* 0x171B85FE: push ecx */
    RECOMP_CALL(sub_171B5D00); /* 0x171B85FF: call 0x171b5d00 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + (-0x4)); /* 0x171B8604: mov edx, dword ptr [edi - 4] */
    PUSH32(esp, eax); /* 0x171B8607: push eax */
    eax = MEM32(edi + 0x10); /* 0x171B8608: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, edx); /* 0x171B860B: push edx */
    PUSH32(esp, eax); /* 0x171B860C: push eax */
    RECOMP_CALL(sub_171B5D00); /* 0x171B860D: call 0x171b5d00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x171B8612: push eax */
    PUSH32(esp, 1); /* 0x171B8613: push 1 */
    PUSH32(esp, 1); /* 0x171B8615: push 1 */
    PUSH32(esp, esi); /* 0x171B8617: push esi */
    RECOMP_ICALL(MEM32(ebx + 0x14)); /* 0x171B8618: call dword ptr [ebx + 0x14] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x171B861B: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x171B861E: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x8); /* 0x171B8620: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171B8623: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B8626: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0xC) = ecx; /* 0x171B8627: mov dword ptr [ebp + 0xc], ecx */
    ecx = MEM32(esi + 0x24); /* 0x171B862A: mov ecx, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x171B862D: add edi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x171B8630: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x171B8632: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B85E5; /* 0x171B8635: jl 0x171b85e5 */
L_171B8637:
    ebx = MEM32(ebp + (-0x4)); /* 0x171B8637: mov ebx, dword ptr [ebp - 4] */
L_171B863A:
    edi = POP32_VAL(esp); /* 0x171B863A: pop edi */
    ecx = ebx + 0x48; /* 0x171B863B: lea ecx, [ebx + 0x48] */
    esi = POP32_VAL(esp); /* 0x171B863E: pop esi */
    MEM32(ebx + 0x4) = 0x171B7920u; /* 0x171B863F: mov dword ptr [ebx + 4], 0x171b7920 */
    MEM32(ebx + 0xC) = 0x171B7B40u; /* 0x171B8646: mov dword ptr [ebx + 0xc], 0x171b7b40 */
    MEM32(ebx + 0x10) = ecx; /* 0x171B864D: mov dword ptr [ebx + 0x10], ecx */
    ebx = POP32_VAL(esp); /* 0x171B8650: pop ebx */
    esp = ebp; /* 0x171B8651: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B8653: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B8654: ret 8 */
L_171B8657:
    edx = MEM32(esi + 0x4); /* 0x171B8657: mov edx, dword ptr [esi + 4] */
    PUSH32(esp, 0x500u); /* 0x171B865A: push 0x500 */
    PUSH32(esp, 1); /* 0x171B865F: push 1 */
    PUSH32(esp, esi); /* 0x171B8661: push esi */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x171B8662: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    ecx = eax + 0x80; /* 0x171B8665: lea ecx, [eax + 0x80] */
    MEM32(ebx + 0x24) = ecx; /* 0x171B866B: mov dword ptr [ebx + 0x24], ecx */
    edx = eax + 0x100; /* 0x171B866E: lea edx, [eax + 0x100] */
    MEM32(ebx + 0x28) = edx; /* 0x171B8674: mov dword ptr [ebx + 0x28], edx */
    ecx = eax + 0x180; /* 0x171B8677: lea ecx, [eax + 0x180] */
    MEM32(ebx + 0x2C) = ecx; /* 0x171B867D: mov dword ptr [ebx + 0x2c], ecx */
    edx = eax + 0x200; /* 0x171B8680: lea edx, [eax + 0x200] */
    MEM32(ebx + 0x30) = edx; /* 0x171B8686: mov dword ptr [ebx + 0x30], edx */
    ecx = eax + 0x280; /* 0x171B8689: lea ecx, [eax + 0x280] */
    MEM32(ebx + 0x34) = ecx; /* 0x171B868F: mov dword ptr [ebx + 0x34], ecx */
    edx = eax + 0x300; /* 0x171B8692: lea edx, [eax + 0x300] */
    MEM32(ebx + 0x38) = edx; /* 0x171B8698: mov dword ptr [ebx + 0x38], edx */
    MEM32(ebx + 0x20) = eax; /* 0x171B869B: mov dword ptr [ebx + 0x20], eax */
    ecx = eax + 0x380; /* 0x171B869E: lea ecx, [eax + 0x380] */
    edx = eax + 0x400; /* 0x171B86A4: lea edx, [eax + 0x400] */
    MEM32(ebx + 0x3C) = ecx; /* 0x171B86AA: mov dword ptr [ebx + 0x3c], ecx */
    MEM32(ebx + 0x40) = edx; /* 0x171B86AD: mov dword ptr [ebx + 0x40], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x480u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x480u; /* 0x171B86B0: add eax, 0x480 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x44) = eax; /* 0x171B86B5: mov dword ptr [ebx + 0x44], eax */
    MEM32(ebx + 0x10) = edi; /* 0x171B86B8: mov dword ptr [ebx + 0x10], edi */
    edi = POP32_VAL(esp); /* 0x171B86BB: pop edi */
    esi = POP32_VAL(esp); /* 0x171B86BC: pop esi */
    MEM32(ebx + 0x4) = 0x171B7910u; /* 0x171B86BD: mov dword ptr [ebx + 4], 0x171b7910 */
    MEM32(ebx + 0xC) = 0x171B7690u; /* 0x171B86C4: mov dword ptr [ebx + 0xc], 0x171b7690 */
    ebx = POP32_VAL(esp); /* 0x171B86CB: pop ebx */
    esp = ebp; /* 0x171B86CC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B86CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B86CF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B86E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B86E0u);

L_171B86E0:
    edi = edi; /* 0x171B86E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B86E2: push ebp */
    ebp = esp; /* 0x171B86E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x52Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x52Cu; /* 0x171B86E5: sub esp, 0x52c */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171B86EB: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171B86F0: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x171B86F1: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x171B86F4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171B86F6: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B86F7: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x171B86FA: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x171B86FD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171B86FE: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x120)) = edi; /* 0x171B8701: mov dword ptr [ebp - 0x120], edi */
    MEM32(ebp + (-0x118)) = eax; /* 0x171B8707: mov dword ptr [ebp - 0x118], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B8714; /* 0x171B870D: jl 0x171b8714 */
L_171B870F:
    /* cmp ebx, 4 */ /* 0x171B870F: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B8723; /* 0x171B8712: jl 0x171b8723 */
L_171B8714:
    eax = MEM32(edi); /* 0x171B8714: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0x32u; /* 0x171B8716: mov dword ptr [eax + 0x14], 0x32 */
    PUSH32(esp, edi); /* 0x171B871D: push edi */
    MEM32(eax + 0x18) = ebx; /* 0x171B871E: mov dword ptr [eax + 0x18], ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B8721: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B8723:
    eax = MEM32(ebp + 0xC); /* 0x171B8723: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171B8726: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8739; /* 0x171B8728: je 0x171b8739 */
L_171B872A:
    esi = MEM32(edi + ebx * 4 + 0xB8); /* 0x171B872A: mov esi, dword ptr [edi + ebx*4 + 0xb8] */
    MEM32(ebp + (-0x10C)) = esi; /* 0x171B8731: mov dword ptr [ebp - 0x10c], esi */
    goto L_171B8748; /* 0x171B8737: jmp 0x171b8748 */
L_171B8739:
    ecx = MEM32(edi + ebx * 4 + 0xC8); /* 0x171B8739: mov ecx, dword ptr [edi + ebx*4 + 0xc8] */
    MEM32(ebp + (-0x10C)) = ecx; /* 0x171B8740: mov dword ptr [ebp - 0x10c], ecx */
    esi = ecx; /* 0x171B8746: mov esi, ecx */
L_171B8748:
    /* test esi, esi */ /* 0x171B8748: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B875B; /* 0x171B874A: jne 0x171b875b */
L_171B874C:
    eax = MEM32(edi); /* 0x171B874C: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0x32u; /* 0x171B874E: mov dword ptr [eax + 0x14], 0x32 */
    PUSH32(esp, edi); /* 0x171B8755: push edi */
    MEM32(eax + 0x18) = ebx; /* 0x171B8756: mov dword ptr [eax + 0x18], ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B8759: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B875B:
    ebx = MEM32(ebp + (-0x118)); /* 0x171B875B: mov ebx, dword ptr [ebp - 0x118] */
    /* cmp MEM32(ebx), 0 */ /* 0x171B8761: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B8775; /* 0x171B8764: jne 0x171b8775 */
L_171B8766:
    edx = MEM32(edi + 0x4); /* 0x171B8766: mov edx, dword ptr [edi + 4] */
    PUSH32(esp, 0x590u); /* 0x171B8769: push 0x590 */
    PUSH32(esp, 1); /* 0x171B876E: push 1 */
    PUSH32(esp, edi); /* 0x171B8770: push edi */
    RECOMP_ICALL(MEM32(edx)); /* 0x171B8771: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = eax; /* 0x171B8773: mov dword ptr [ebx], eax */
L_171B8775:
    edx = MEM32(ebx); /* 0x171B8775: mov edx, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B8777: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 1; /* 0x171B8779: mov ebx, 1 */
    MEM32(ebp + (-0x11C)) = edx; /* 0x171B877E: mov dword ptr [ebp - 0x11c], edx */
    MEM32(edx + 0x8C) = esi; /* 0x171B8784: mov dword ptr [edx + 0x8c], esi */
    MEM32(ebp + (-0x114)) = edi; /* 0x171B878A: mov dword ptr [ebp - 0x114], edi */
    MEM32(ebp + (-0x110)) = ebx; /* 0x171B8790: mov dword ptr [ebp - 0x110], ebx */
    goto L_171B87A0; /* 0x171B8796: jmp 0x171b87a0 */
L_171B8798:
    esi = MEM32(ebp + (-0x10C)); /* 0x171B8798: mov esi, dword ptr [ebp - 0x10c] */
    edi = edi; /* 0x171B879E: mov edi, edi */
L_171B87A0:
    esi = (uint32_t)MEM8(ebx + esi); /* 0x171B87A0: movzx esi, byte ptr [ebx + esi] */
    /* test esi, esi */ /* 0x171B87A4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B87B2; /* 0x171B87A6: jl 0x171b87b2 */
L_171B87A8:
    eax = esi + edi; /* 0x171B87A8: lea eax, [esi + edi] */
    /* cmp eax, 0x100u */ /* 0x171B87AB: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B87CA; /* 0x171B87B0: jle 0x171b87ca */
L_171B87B2:
    ecx = MEM32(ebp + (-0x120)); /* 0x171B87B2: mov ecx, dword ptr [ebp - 0x120] */
    eax = MEM32(ecx); /* 0x171B87B8: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171B87BA: push ecx */
    MEM32(eax + 0x14) = 8; /* 0x171B87BB: mov dword ptr [eax + 0x14], 8 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B87C2: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x11C)); /* 0x171B87C4: mov edx, dword ptr [ebp - 0x11c] */
L_171B87CA:
    /* test esi, esi */ /* 0x171B87CA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B880B; /* 0x171B87CC: je 0x171b880b */
L_171B87CE:
    SET_HI8(ebx, LO8(ebx)); /* 0x171B87CE: mov bh, bl */
    SET_LO8(eax, LO8(ebx)); /* 0x171B87D0: mov al, bl */
    ecx = esi; /* 0x171B87D2: mov ecx, esi */
    edx = ecx; /* 0x171B87D4: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171B87D6: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171B87D6: shr ecx, 2 */
    edi = ebp + edi + (-0x108); /* 0x171B87D9: lea edi, [ebp + edi - 0x108] */
    eax = ebx; /* 0x171B87E0: mov eax, ebx */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x171B87E2: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x171B87E2: shl eax, 0x10 */
    SET_LO16(eax, LO16(ebx)); /* 0x171B87E5: mov ax, bx */
    ebx = MEM32(ebp + (-0x110)); /* 0x171B87E8: mov ebx, dword ptr [ebp - 0x110] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B87EE: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x171B87F0: mov ecx, edx */
    edx = MEM32(ebp + (-0x11C)); /* 0x171B87F2: mov edx, dword ptr [ebp - 0x11c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171B87F8: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x171B87FB: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + (-0x114)); /* 0x171B87FD: mov edi, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x171B8803: add edi, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x114)) = edi; /* 0x171B8805: mov dword ptr [ebp - 0x114], edi */
L_171B880B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B880B: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, 0x10u */ /* 0x171B880C: cmp ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x110)) = ebx; /* 0x171B880F: mov dword ptr [ebp - 0x110], ebx */
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B8798; /* 0x171B8815: jle 0x171b8798 */
L_171B8817:
    MEM8(ebp + edi + (-0x108)) = (uint8_t)(0); /* 0x171B8817: mov byte ptr [ebp + edi - 0x108], 0 */
    SET_LO8(eax, MEM8(ebp + (-0x108))); /* 0x171B881F: mov al, byte ptr [ebp - 0x108] */
    MEM32(ebp + (-0x128)) = edi; /* 0x171B8825: mov dword ptr [ebp - 0x128], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B882B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171B882D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), LO8(eax) */ /* 0x171B882F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = (int32_t)(int8_t)LO8(eax); /* 0x171B8831: movsx ebx, al */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B889F; /* 0x171B8834: je 0x171b889f */
L_171B8836:
    eax = ebp + (-0x108); /* 0x171B8836: lea eax, [ebp - 0x108] */
    esp = esp; /* 0x171B883C: lea esp, [esp] */
L_171B8840:
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x171B8840: movsx eax, byte ptr [eax] */
    /* cmp eax, ebx */ /* 0x171B8843: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B8865; /* 0x171B8845: jne 0x171b8865 */
L_171B8847:
    goto L_171B8850; /* 0x171B8847: jmp 0x171b8850 */
L_171B8850:
    ecx = (int32_t)(int8_t)MEM8(ebp + esi + (-0x107)); /* 0x171B8850: movsx ecx, byte ptr [ebp + esi - 0x107] */
    MEM32(ebp + esi * 4 + (-0x52C)) = edi; /* 0x171B8858: mov dword ptr [ebp + esi*4 - 0x52c], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B885F: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B8860: inc edi */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x171B8861: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B8850; /* 0x171B8863: je 0x171b8850 */
L_171B8865:
    eax = 1; /* 0x171B8865: mov eax, 1 */
    ecx = ebx; /* 0x171B886A: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B886C: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x171B886C: shl eax, cl */
    /* cmp edi, eax */ /* 0x171B886E: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B888A; /* 0x171B8870: jl 0x171b888a */
L_171B8872:
    ecx = MEM32(ebp + (-0x120)); /* 0x171B8872: mov ecx, dword ptr [ebp - 0x120] */
    eax = MEM32(ecx); /* 0x171B8878: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171B887A: push ecx */
    MEM32(eax + 0x14) = 8; /* 0x171B887B: mov dword ptr [eax + 0x14], 8 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B8882: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x11C)); /* 0x171B8884: mov edx, dword ptr [ebp - 0x11c] */
L_171B888A:
    SET_LO8(ecx, MEM8(ebp + esi + (-0x108))); /* 0x171B888A: mov cl, byte ptr [ebp + esi - 0x108] */
    eax = ebp + esi + (-0x108); /* 0x171B8891: lea eax, [ebp + esi - 0x108] */
    if (1u) _cf = (((edi) >> 31) & 1u); /* 0x171B8898: shl edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 1u; /* 0x171B8898: shl edi, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B889A: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171B889B: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B8840; /* 0x171B889D: jne 0x171b8840 */
L_171B889F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B889F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 1; /* 0x171B88A1: mov eax, 1 */
    goto L_171B88B0; /* 0x171B88A6: jmp 0x171b88b0 */
L_171B88B0:
    esi = MEM32(ebp + (-0x10C)); /* 0x171B88B0: mov esi, dword ptr [ebp - 0x10c] */
    SET_LO8(ebx, MEM8(eax + esi)); /* 0x171B88B6: mov bl, byte ptr [eax + esi] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x171B88B9: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B88DB; /* 0x171B88BB: je 0x171b88db */
L_171B88BD:
    edi = ecx; /* 0x171B88BD: mov edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + ecx * 4 + (-0x52C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + ecx * 4 + (-0x52C)); /* 0x171B88BF: sub edi, dword ptr [ebp + ecx*4 - 0x52c] */
    _flag_k = FK_CMP;
    MEM32(edx + eax * 4 + 0x48) = edi; /* 0x171B88C6: mov dword ptr [edx + eax*4 + 0x48], edi */
    edi = (uint32_t)LO8(ebx); /* 0x171B88CA: movzx edi, bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x171B88CD: add ecx, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + ecx * 4 + (-0x530)); /* 0x171B88CF: mov edi, dword ptr [ebp + ecx*4 - 0x530] */
    MEM32(edx + eax * 4) = edi; /* 0x171B88D6: mov dword ptr [edx + eax*4], edi */
    goto L_171B88E2; /* 0x171B88D9: jmp 0x171b88e2 */
L_171B88DB:
    MEM32(edx + eax * 4) = 0xFFFFFFFFu; /* 0x171B88DB: mov dword ptr [edx + eax*4], 0xffffffff */
L_171B88E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B88E2: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x10u */ /* 0x171B88E3: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B88B0; /* 0x171B88E6: jle 0x171b88b0 */
L_171B88E8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B88E8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx + 0x90; /* 0x171B88EA: lea edi, [edx + 0x90] */
    MEM32(edx + 0x44) = 0x000FFFFFu; /* 0x171B88F0: mov dword ptr [edx + 0x44], 0xfffff */
    ecx = 0x100u; /* 0x171B88F7: mov ecx, 0x100 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B88FC: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B88FE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 7; /* 0x171B8900: mov ecx, 7 */
    MEM32(ebp + (-0x114)) = edx; /* 0x171B8905: mov dword ptr [ebp - 0x114], edx */
    ebx = 1; /* 0x171B890B: mov ebx, 1 */
    MEM32(ebp + (-0x118)) = ecx; /* 0x171B8910: mov dword ptr [ebp - 0x118], ecx */
    goto L_171B8920; /* 0x171B8916: jmp 0x171b8920 */
L_171B8920:
    eax = (uint32_t)MEM8(ebx + esi); /* 0x171B8920: movzx eax, byte ptr [ebx + esi] */
    /* cmp eax, 1 */ /* 0x171B8924: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B89B0; /* 0x171B8927: jl 0x171b89b0 */
L_171B892D:
    edi = 1; /* 0x171B892D: mov edi, 1 */
    esi = edx + esi + 0x11; /* 0x171B8932: lea esi, [edx + esi + 0x11] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B8936: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x171B8936: shl edi, cl */
    MEM32(ebp + (-0x110)) = esi; /* 0x171B8938: mov dword ptr [ebp - 0x110], esi */
    MEM32(ebp + (-0x124)) = eax; /* 0x171B893E: mov dword ptr [ebp - 0x124], eax */
L_171B8944:
    eax = MEM32(ebp + edx * 4 + (-0x52C)); /* 0x171B8944: mov eax, dword ptr [ebp + edx*4 - 0x52c] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B894B: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x171B894B: shl eax, cl */
    /* test edi, edi */ /* 0x171B894D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B8987; /* 0x171B894F: jle 0x171b8987 */
L_171B8951:
    SET_LO8(ecx, MEM8(esi)); /* 0x171B8951: mov cl, byte ptr [esi] */
    esi = MEM32(ebp + (-0x11C)); /* 0x171B8953: mov esi, dword ptr [ebp - 0x11c] */
    edx = eax + esi + 0x490; /* 0x171B8959: lea edx, [eax + esi + 0x490] */
    eax = esi + eax * 4 + 0x90; /* 0x171B8960: lea eax, [esi + eax*4 + 0x90] */
    esi = edi; /* 0x171B8967: mov esi, edi */
    esp = esp; /* 0x171B8969: lea esp, [esp] */
L_171B8970:
    MEM32(eax) = ebx; /* 0x171B8970: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B8972: add eax, 4 */
    _flag_k = FK_ADD;
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x171B8975: mov byte ptr [edx], cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B8977: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171B8978: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B8970; /* 0x171B8979: jne 0x171b8970 */
L_171B897B:
    edx = MEM32(ebp + (-0x114)); /* 0x171B897B: mov edx, dword ptr [ebp - 0x114] */
    ecx = MEM32(ebp + (-0x118)); /* 0x171B8981: mov ecx, dword ptr [ebp - 0x118] */
L_171B8987:
    esi = MEM32(ebp + (-0x110)); /* 0x171B8987: mov esi, dword ptr [ebp - 0x110] */
    eax = MEM32(ebp + (-0x124)); /* 0x171B898D: mov eax, dword ptr [ebp - 0x124] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B8993: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B8994: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B8995: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x114)) = edx; /* 0x171B8996: mov dword ptr [ebp - 0x114], edx */
    MEM32(ebp + (-0x110)) = esi; /* 0x171B899C: mov dword ptr [ebp - 0x110], esi */
    MEM32(ebp + (-0x124)) = eax; /* 0x171B89A2: mov dword ptr [ebp - 0x124], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B8944; /* 0x171B89A8: jne 0x171b8944 */
L_171B89AA:
    esi = MEM32(ebp + (-0x10C)); /* 0x171B89AA: mov esi, dword ptr [ebp - 0x10c] */
L_171B89B0:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B89B0: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B89B1: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x118)) = ecx; /* 0x171B89B2: mov dword ptr [ebp - 0x118], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_171B8920; /* 0x171B89B8: jns 0x171b8920 */
L_171B89BE:
    eax = MEM32(ebp + 0xC); /* 0x171B89BE: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171B89C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B89FC; /* 0x171B89C3: je 0x171b89fc */
L_171B89C5:
    edi = MEM32(ebp + (-0x128)); /* 0x171B89C5: mov edi, dword ptr [ebp - 0x128] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171B89CB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x171B89CD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B89FC; /* 0x171B89CF: jle 0x171b89fc */
L_171B89D1:
    ecx = MEM32(ebp + (-0x10C)); /* 0x171B89D1: mov ecx, dword ptr [ebp - 0x10c] */
    eax = (uint32_t)MEM8(ecx + esi + 0x11); /* 0x171B89D7: movzx eax, byte ptr [ecx + esi + 0x11] */
    /* test eax, eax */ /* 0x171B89DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B89E5; /* 0x171B89DE: jl 0x171b89e5 */
L_171B89E0:
    /* cmp eax, 0xFu */ /* 0x171B89E0: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B89F7; /* 0x171B89E3: jle 0x171b89f7 */
L_171B89E5:
    ecx = MEM32(ebp + (-0x120)); /* 0x171B89E5: mov ecx, dword ptr [ebp - 0x120] */
    eax = MEM32(ecx); /* 0x171B89EB: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171B89ED: push ecx */
    MEM32(eax + 0x14) = 8; /* 0x171B89EE: mov dword ptr [eax + 0x14], 8 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B89F5: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B89F7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B89F7: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x171B89F8: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B89D1; /* 0x171B89FA: jl 0x171b89d1 */
L_171B89FC:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B89FC: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171B89FF: pop edi */
    esi = POP32_VAL(esp); /* 0x171B8A00: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B8A01: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171B8A02: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x171B8A07: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B8A09: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171B8A0A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171B8A20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B8A20u);

L_171B8A20:
    edi = edi; /* 0x171B8A20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B8A22: push ebp */
    ebp = esp; /* 0x171B8A23: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171B8A25: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171B8A28: push ebx */
    ebx = MEM32(eax + 0x10); /* 0x171B8A29: mov ebx, dword ptr [eax + 0x10] */
    ecx = MEM32(ebx + 0x1A4); /* 0x171B8A2C: mov ecx, dword ptr [ebx + 0x1a4] */
    /* test ecx, ecx */ /* 0x171B8A32: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171B8A34: push esi */
    esi = MEM32(eax); /* 0x171B8A35: mov esi, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x171B8A37: push edi */
    edi = MEM32(eax + 0x4); /* 0x171B8A38: mov edi, dword ptr [eax + 4] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B8ACC; /* 0x171B8A3B: jne 0x171b8acc */
L_171B8A41:
    /* cmp MEM32(ebp + 0x10), 0x19u */ /* 0x171B8A41: cmp dword ptr [ebp + 0x10], 0x19 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B8B19; /* 0x171B8A45: jge 0x171b8b19 */
L_171B8A4B:
    goto L_171B8A50; /* 0x171B8A4B: jmp 0x171b8a50 */
L_171B8A50:
    /* test edi, edi */ /* 0x171B8A50: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B8A67; /* 0x171B8A52: jne 0x171b8a67 */
L_171B8A54:
    eax = MEM32(ebx + 0x18); /* 0x171B8A54: mov eax, dword ptr [ebx + 0x18] */
    PUSH32(esp, ebx); /* 0x171B8A57: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B8A58: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B8A5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8ABA; /* 0x171B8A5D: je 0x171b8aba */
L_171B8A5F:
    eax = MEM32(ebx + 0x18); /* 0x171B8A5F: mov eax, dword ptr [ebx + 0x18] */
    esi = MEM32(eax); /* 0x171B8A62: mov esi, dword ptr [eax] */
    edi = MEM32(eax + 0x4); /* 0x171B8A64: mov edi, dword ptr [eax + 4] */
L_171B8A67:
    eax = (uint32_t)MEM8(esi); /* 0x171B8A67: movzx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B8A6A: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B8A6B: inc esi */
    _flag_k = FK_INC;
    /* cmp eax, 0xFFu */ /* 0x171B8A6C: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B8A9F; /* 0x171B8A71: jne 0x171b8a9f */
L_171B8A73:
    /* test edi, edi */ /* 0x171B8A73: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B8A8A; /* 0x171B8A75: jne 0x171b8a8a */
L_171B8A77:
    ecx = MEM32(ebx + 0x18); /* 0x171B8A77: mov ecx, dword ptr [ebx + 0x18] */
    PUSH32(esp, ebx); /* 0x171B8A7A: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x171B8A7B: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B8A7E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8ABA; /* 0x171B8A80: je 0x171b8aba */
L_171B8A82:
    eax = MEM32(ebx + 0x18); /* 0x171B8A82: mov eax, dword ptr [ebx + 0x18] */
    esi = MEM32(eax); /* 0x171B8A85: mov esi, dword ptr [eax] */
    edi = MEM32(eax + 0x4); /* 0x171B8A87: mov edi, dword ptr [eax + 4] */
L_171B8A8A:
    eax = (uint32_t)MEM8(esi); /* 0x171B8A8A: movzx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B8A8D: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B8A8E: inc esi */
    _flag_k = FK_INC;
    /* cmp eax, 0xFFu */ /* 0x171B8A8F: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B8A73; /* 0x171B8A94: je 0x171b8a73 */
L_171B8A96:
    /* test eax, eax */ /* 0x171B8A96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B8AC3; /* 0x171B8A98: jne 0x171b8ac3 */
L_171B8A9A:
    eax = 0xFFu; /* 0x171B8A9A: mov eax, 0xff */
L_171B8A9F:
    edx = MEM32(ebp + 0xC); /* 0x171B8A9F: mov edx, dword ptr [ebp + 0xc] */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x171B8AA2: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x171B8AA2: shl edx, 8 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x171B8AA5: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x171B8AA7: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171B8AAA: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x19u */ /* 0x171B8AAD: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edx; /* 0x171B8AB0: mov dword ptr [ebp + 0xc], edx */
    MEM32(ebp + 0x10) = eax; /* 0x171B8AB3: mov dword ptr [ebp + 0x10], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B8A50; /* 0x171B8AB6: jl 0x171b8a50 */
L_171B8AB8:
    goto L_171B8B16; /* 0x171B8AB8: jmp 0x171b8b16 */
L_171B8ABA:
    edi = POP32_VAL(esp); /* 0x171B8ABA: pop edi */
    esi = POP32_VAL(esp); /* 0x171B8ABB: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B8ABC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B8ABE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B8ABF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171B8AC0: ret 0x10 */
L_171B8AC3:
    MEM32(ebx + 0x1A4) = eax; /* 0x171B8AC3: mov dword ptr [ebx + 0x1a4], eax */
    eax = MEM32(ebp + 0x8); /* 0x171B8AC9: mov eax, dword ptr [ebp + 8] */
L_171B8ACC:
    ecx = MEM32(ebp + 0x10); /* 0x171B8ACC: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp MEM32(ebp + 0x14), ecx */ /* 0x171B8ACF: cmp dword ptr [ebp + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B8B19; /* 0x171B8AD2: jle 0x171b8b19 */
L_171B8AD4:
    edx = MEM32(ebx + 0x1C0); /* 0x171B8AD4: mov edx, dword ptr [ebx + 0x1c0] */
    eax = MEM32(edx + 0x8); /* 0x171B8ADA: mov eax, dword ptr [edx + 8] */
    /* test eax, eax */ /* 0x171B8ADD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B8AFD; /* 0x171B8ADF: jne 0x171b8afd */
L_171B8AE1:
    eax = MEM32(ebx); /* 0x171B8AE1: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171B8AE3: push -1 */
    PUSH32(esp, ebx); /* 0x171B8AE5: push ebx */
    MEM32(eax + 0x14) = 0x75u; /* 0x171B8AE6: mov dword ptr [eax + 0x14], 0x75 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B8AED: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x1C0); /* 0x171B8AF0: mov eax, dword ptr [ebx + 0x1c0] */
    MEM32(eax + 0x8) = 1; /* 0x171B8AF6: mov dword ptr [eax + 8], 1 */
L_171B8AFD:
    edx = MEM32(ebp + 0x10); /* 0x171B8AFD: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x171B8B00: mov eax, dword ptr [ebp + 0xc] */
    ecx = 0x19u; /* 0x171B8B03: mov ecx, 0x19 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x171B8B08: sub ecx, edx */
    _flag_k = FK_CMP;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B8B0A: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x171B8B0A: shl eax, cl */
    MEM32(ebp + 0x10) = 0x19u; /* 0x171B8B0C: mov dword ptr [ebp + 0x10], 0x19 */
    MEM32(ebp + 0xC) = eax; /* 0x171B8B13: mov dword ptr [ebp + 0xc], eax */
L_171B8B16:
    eax = MEM32(ebp + 0x8); /* 0x171B8B16: mov eax, dword ptr [ebp + 8] */
L_171B8B19:
    ecx = MEM32(ebp + 0xC); /* 0x171B8B19: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x171B8B1C: mov edx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = edi; /* 0x171B8B1F: mov dword ptr [eax + 4], edi */
    edi = POP32_VAL(esp); /* 0x171B8B22: pop edi */
    MEM32(eax) = esi; /* 0x171B8B23: mov dword ptr [eax], esi */
    esi = POP32_VAL(esp); /* 0x171B8B25: pop esi */
    MEM32(eax + 0x8) = ecx; /* 0x171B8B26: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = edx; /* 0x171B8B29: mov dword ptr [eax + 0xc], edx */
    eax = 1; /* 0x171B8B2C: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x171B8B31: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B8B32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171B8B33: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171B8B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B8B40u);

L_171B8B40:
    edi = edi; /* 0x171B8B40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B8B42: push ebp */
    ebp = esp; /* 0x171B8B43: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B8B45: push ecx */
    eax = MEM32(ebp + 0x10); /* 0x171B8B46: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x171B8B49: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x171B8B4A: mov ebx, dword ptr [ebp + 0x18] */
    /* cmp eax, ebx */ /* 0x171B8B4D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171B8B4F: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171B8B50: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171B8B53: mov dword ptr [ebp - 4], ebx */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B8B7B; /* 0x171B8B56: jge 0x171b8b7b */
L_171B8B58:
    PUSH32(esp, ebx); /* 0x171B8B58: push ebx */
    PUSH32(esp, eax); /* 0x171B8B59: push eax */
    eax = MEM32(ebp + 0xC); /* 0x171B8B5A: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171B8B5D: push eax */
    PUSH32(esp, edi); /* 0x171B8B5E: push edi */
    RECOMP_CALL(sub_171B8A20); /* 0x171B8B5F: call 0x171b8a20 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B8B64: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B8B73; /* 0x171B8B66: jne 0x171b8b73 */
L_171B8B68:
    edi = POP32_VAL(esp); /* 0x171B8B68: pop edi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171B8B69: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B8B6C: pop ebx */
    esp = ebp; /* 0x171B8B6D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B8B6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171B8B70: ret 0x14 */
L_171B8B73:
    edx = MEM32(edi + 0x8); /* 0x171B8B73: mov edx, dword ptr [edi + 8] */
    eax = MEM32(edi + 0xC); /* 0x171B8B76: mov eax, dword ptr [edi + 0xc] */
    goto L_171B8B7E; /* 0x171B8B79: jmp 0x171b8b7e */
L_171B8B7B:
    edx = MEM32(ebp + 0xC); /* 0x171B8B7B: mov edx, dword ptr [ebp + 0xc] */
L_171B8B7E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x171B8B7E: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171B8B80: push esi */
    ecx = eax; /* 0x171B8B81: mov ecx, eax */
    esi = edx; /* 0x171B8B83: mov esi, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((esi) >> 31) & 1u)); /* 0x171B8B85: sar esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> ((LO8(ecx)) & 31));
    ecx = 1; /* 0x171B8B87: mov ecx, 1 */
    MEM32(ebp + 0xC) = ecx; /* 0x171B8B8C: mov dword ptr [ebp + 0xc], ecx */
    ecx = ebx; /* 0x171B8B8F: mov ecx, ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171B8B91: mov ebx, dword ptr [ebp + 0xc] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B8B94: shl ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << ((LO8(ecx)) & 31); /* 0x171B8B94: shl ebx, cl */
    ecx = MEM32(ebp + 0x18); /* 0x171B8B96: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B8B99: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    esi = esi & ebx; /* 0x171B8B9A: and esi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x14); /* 0x171B8B9C: mov ebx, dword ptr [ebp + 0x14] */
    /* cmp esi, MEM32(ebx + ecx * 4) */ /* 0x171B8B9F: cmp esi, dword ptr [ebx + ecx*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + ecx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B8BE8; /* 0x171B8BA2: jle 0x171b8be8 */
L_171B8BA4:
    if (1u) _cf = (((esi) >> 31) & 1u); /* 0x171B8BA4: shl esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 1u; /* 0x171B8BA4: shl esi, 1 */
    /* cmp eax, 1 */ /* 0x171B8BA6: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B8BBF; /* 0x171B8BA9: jge 0x171b8bbf */
L_171B8BAB:
    PUSH32(esp, 1); /* 0x171B8BAB: push 1 */
    PUSH32(esp, eax); /* 0x171B8BAD: push eax */
    PUSH32(esp, edx); /* 0x171B8BAE: push edx */
    PUSH32(esp, edi); /* 0x171B8BAF: push edi */
    RECOMP_CALL(sub_171B8A20); /* 0x171B8BB0: call 0x171b8a20 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B8BB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8BDC; /* 0x171B8BB7: je 0x171b8bdc */
L_171B8BB9:
    edx = MEM32(edi + 0x8); /* 0x171B8BB9: mov edx, dword ptr [edi + 8] */
    eax = MEM32(edi + 0xC); /* 0x171B8BBC: mov eax, dword ptr [edi + 0xc] */
L_171B8BBF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B8BBF: dec eax */
    _flag_k = FK_DEC;
    ecx = eax; /* 0x171B8BC0: mov ecx, eax */
    ebx = edx; /* 0x171B8BC2: mov ebx, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((ebx) >> 31) & 1u)); /* 0x171B8BC4: sar ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> ((LO8(ecx)) & 31));
    ecx = MEM32(ebp + (-0x4)); /* 0x171B8BC6: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx & 1; /* 0x171B8BC9: and ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | ebx)); _flag_b = (uint32_t)((esi | ebx));
    esi = esi | ebx; /* 0x171B8BCC: or esi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x14); /* 0x171B8BCE: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B8BD1: inc ecx */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx + ecx * 4) */ /* 0x171B8BD2: cmp esi, dword ptr [ebx + ecx*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + ecx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B8BD5: mov dword ptr [ebp - 4], ecx */
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_171B8BA4; /* 0x171B8BD8: jg 0x171b8ba4 */
L_171B8BDA:
    goto L_171B8BEB; /* 0x171B8BDA: jmp 0x171b8beb */
L_171B8BDC:
    esi = POP32_VAL(esp); /* 0x171B8BDC: pop esi */
    edi = POP32_VAL(esp); /* 0x171B8BDD: pop edi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171B8BDE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B8BE1: pop ebx */
    esp = ebp; /* 0x171B8BE2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B8BE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171B8BE5: ret 0x14 */
L_171B8BE8:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B8BE8: mov ecx, dword ptr [ebp - 4] */
L_171B8BEB:
    /* cmp ecx, 0x10u */ /* 0x171B8BEB: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi + 0x8) = edx; /* 0x171B8BEE: mov dword ptr [edi + 8], edx */
    MEM32(edi + 0xC) = eax; /* 0x171B8BF1: mov dword ptr [edi + 0xc], eax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B8C13; /* 0x171B8BF4: jle 0x171b8c13 */
L_171B8BF6:
    edi = MEM32(edi + 0x10); /* 0x171B8BF6: mov edi, dword ptr [edi + 0x10] */
    eax = MEM32(edi); /* 0x171B8BF9: mov eax, dword ptr [edi] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171B8BFB: push -1 */
    PUSH32(esp, edi); /* 0x171B8BFD: push edi */
    MEM32(eax + 0x14) = 0x76u; /* 0x171B8BFE: mov dword ptr [eax + 0x14], 0x76 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B8C05: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171B8C08: pop esi */
    edi = POP32_VAL(esp); /* 0x171B8C09: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B8C0A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B8C0C: pop ebx */
    esp = ebp; /* 0x171B8C0D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B8C0F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171B8C10: ret 0x14 */
L_171B8C13:
    eax = MEM32(ebx + 0x8C); /* 0x171B8C13: mov eax, dword ptr [ebx + 0x8c] */
    edx = MEM32(ebx + ecx * 4 + 0x48); /* 0x171B8C19: mov edx, dword ptr [ebx + ecx*4 + 0x48] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171B8C1D: add edx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(edx + esi + 0x11); /* 0x171B8C1F: movzx eax, byte ptr [edx + esi + 0x11] */
    esi = POP32_VAL(esp); /* 0x171B8C24: pop esi */
    edi = POP32_VAL(esp); /* 0x171B8C25: pop edi */
    ebx = POP32_VAL(esp); /* 0x171B8C26: pop ebx */
    esp = ebp; /* 0x171B8C27: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B8C29: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171B8C2A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171B8C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B8C40u);

L_171B8C40:
    ecx = MEM32(esi + 0x1BC); /* 0x171B8C40: mov ecx, dword ptr [esi + 0x1bc] */
    PUSH32(esp, ebx); /* 0x171B8C46: push ebx */
    ebx = MEM32(esi + 0x1C0); /* 0x171B8C47: mov ebx, dword ptr [esi + 0x1c0] */
    eax = MEM32(ebx + 0x10); /* 0x171B8C4D: mov eax, dword ptr [ebx + 0x10] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171B8C50: cdq  */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x171B8C51: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171B8C54: push edi */
    edi = MEM32(ecx + 0x18); /* 0x171B8C55: mov edi, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B8C58: add eax, edx */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171B8C5A: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x171B8C5D: add edi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x171B8C5F: push esi */
    MEM32(ecx + 0x18) = edi; /* 0x171B8C60: mov dword ptr [ecx + 0x18], edi */
    MEM32(ebx + 0x10) = 0; /* 0x171B8C63: mov dword ptr [ebx + 0x10], 0 */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171B8C6A: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B8C6D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B8C74; /* 0x171B8C6F: jne 0x171b8c74 */
L_171B8C71:
    edi = POP32_VAL(esp); /* 0x171B8C71: pop edi */
    ebx = POP32_VAL(esp); /* 0x171B8C72: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B8C73: ret  */
L_171B8C74:
    ecx = MEM32(esi + 0x14C); /* 0x171B8C74: mov ecx, dword ptr [esi + 0x14c] */
    /* test ecx, ecx */ /* 0x171B8C7A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B8C85; /* 0x171B8C7C: jle 0x171b8c85 */
L_171B8C7E:
    edi = ebx + 0x14; /* 0x171B8C7E: lea edi, [ebx + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B8C81: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B8C83: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_171B8C85:
    eax = MEM32(esi + 0x118); /* 0x171B8C85: mov eax, dword ptr [esi + 0x118] */
    MEM32(ebx + 0x24) = eax; /* 0x171B8C8B: mov dword ptr [ebx + 0x24], eax */
    eax = MEM32(esi + 0x1A4); /* 0x171B8C8E: mov eax, dword ptr [esi + 0x1a4] */
    /* test eax, eax */ /* 0x171B8C94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B8C9F; /* 0x171B8C96: jne 0x171b8c9f */
L_171B8C98:
    MEM32(ebx + 0x8) = 0; /* 0x171B8C98: mov dword ptr [ebx + 8], 0 */
L_171B8C9F:
    edi = POP32_VAL(esp); /* 0x171B8C9F: pop edi */
    eax = 1; /* 0x171B8CA0: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x171B8CA5: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B8CA6: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B8CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B8CB0u);

L_171B8CB0:
    edi = edi; /* 0x171B8CB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B8CB2: push ebp */
    ebp = esp; /* 0x171B8CB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x171B8CB5: sub esp, 0x40 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171B8CB8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B8CB9: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x118); /* 0x171B8CBC: mov eax, dword ptr [esi + 0x118] */
    /* test eax, eax */ /* 0x171B8CC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171B8CC4: push edi */
    edi = MEM32(esi + 0x1C0); /* 0x171B8CC5: mov edi, dword ptr [esi + 0x1c0] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x171B8CCB: mov dword ptr [ebp - 0x1c], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8CE8; /* 0x171B8CCE: je 0x171b8ce8 */
L_171B8CD0:
    eax = MEM32(edi + 0x24); /* 0x171B8CD0: mov eax, dword ptr [edi + 0x24] */
    /* test eax, eax */ /* 0x171B8CD3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B8CE8; /* 0x171B8CD5: jne 0x171b8ce8 */
L_171B8CD7:
    RECOMP_CALL(sub_171B8C40); /* 0x171B8CD7: call 0x171b8c40 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B8CDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B8CE8; /* 0x171B8CDE: jne 0x171b8ce8 */
L_171B8CE0:
    edi = POP32_VAL(esp); /* 0x171B8CE0: pop edi */
    esi = POP32_VAL(esp); /* 0x171B8CE1: pop esi */
    esp = ebp; /* 0x171B8CE2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B8CE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B8CE5: ret 8 */
L_171B8CE8:
    eax = MEM32(edi + 0x8); /* 0x171B8CE8: mov eax, dword ptr [edi + 8] */
    /* test eax, eax */ /* 0x171B8CEB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171B8CED: push ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B905C; /* 0x171B8CEE: jne 0x171b905c */
L_171B8CF4:
    eax = MEM32(esi + 0x18); /* 0x171B8CF4: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(eax); /* 0x171B8CF7: mov ecx, dword ptr [eax] */
    edx = MEM32(eax + 0x4); /* 0x171B8CF9: mov edx, dword ptr [eax + 4] */
    eax = MEM32(edi + 0x10); /* 0x171B8CFC: mov eax, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x40)) = ecx; /* 0x171B8CFF: mov dword ptr [ebp - 0x40], ecx */
    ecx = edi + 0x14; /* 0x171B8D02: lea ecx, [edi + 0x14] */
    ebx = MEM32(ecx); /* 0x171B8D05: mov ebx, dword ptr [ecx] */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x171B8D07: mov dword ptr [ebp - 0x2c], ebx */
    ebx = MEM32(ecx + 0x4); /* 0x171B8D0A: mov ebx, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x28)) = ebx; /* 0x171B8D0D: mov dword ptr [ebp - 0x28], ebx */
    ebx = MEM32(ecx + 0x8); /* 0x171B8D10: mov ebx, dword ptr [ecx + 8] */
    ecx = MEM32(ecx + 0xC); /* 0x171B8D13: mov ecx, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x171B8D16: mov dword ptr [ebp - 0x20], ecx */
    ecx = MEM32(esi + 0x168); /* 0x171B8D19: mov ecx, dword ptr [esi + 0x168] */
    /* test ecx, ecx */ /* 0x171B8D1F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = edx; /* 0x171B8D21: mov dword ptr [ebp - 0x3c], edx */
    edx = MEM32(edi + 0xC); /* 0x171B8D24: mov edx, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x30)) = esi; /* 0x171B8D27: mov dword ptr [ebp - 0x30], esi */
    MEM32(ebp + (-0x24)) = ebx; /* 0x171B8D2A: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0xC)) = 0; /* 0x171B8D2D: mov dword ptr [ebp - 0xc], 0 */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B9030; /* 0x171B8D34: jle 0x171b9030 */
L_171B8D3A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x16Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x16Cu; /* 0x171B8D3A: add esi, 0x16c */
    _flag_k = FK_ADD;
    ecx = edi + 0x70; /* 0x171B8D40: lea ecx, [edi + 0x70] */
    MEM32(ebp + (-0x10)) = esi; /* 0x171B8D43: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B8D46: mov dword ptr [ebp - 4], ecx */
    goto L_171B8D50; /* 0x171B8D49: jmp 0x171b8d50 */
L_171B8D4B:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B8D4B: mov ecx, dword ptr [ebp - 4] */
    edi = edi; /* 0x171B8D4E: mov edi, edi */
L_171B8D50:
    /* cmp eax, 8 */ /* 0x171B8D50: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0xC); /* 0x171B8D53: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + (-0xC)); /* 0x171B8D56: mov edi, dword ptr [ebp - 0xc] */
    esi = MEM32(esi + edi * 4); /* 0x171B8D59: mov esi, dword ptr [esi + edi*4] */
    ebx = MEM32(ecx); /* 0x171B8D5C: mov ebx, dword ptr [ecx] */
    MEM32(ebp + (-0x14)) = esi; /* 0x171B8D5E: mov dword ptr [ebp - 0x14], esi */
    esi = MEM32(ecx + (-0x28)); /* 0x171B8D61: mov esi, dword ptr [ecx - 0x28] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x171B8D64: mov dword ptr [ebp - 8], ebx */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B8D90; /* 0x171B8D67: jge 0x171b8d90 */
L_171B8D69:
    PUSH32(esp, 0); /* 0x171B8D69: push 0 */
    PUSH32(esp, eax); /* 0x171B8D6B: push eax */
    PUSH32(esp, edx); /* 0x171B8D6C: push edx */
    edx = ebp + (-0x40); /* 0x171B8D6D: lea edx, [ebp - 0x40] */
    PUSH32(esp, edx); /* 0x171B8D70: push edx */
    RECOMP_CALL(sub_171B8A20); /* 0x171B8D71: call 0x171b8a20 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B8D76: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B9071; /* 0x171B8D78: je 0x171b9071 */
L_171B8D7E:
    eax = MEM32(ebp + (-0x34)); /* 0x171B8D7E: mov eax, dword ptr [ebp - 0x34] */
    /* cmp eax, 8 */ /* 0x171B8D81: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x38)); /* 0x171B8D84: mov edx, dword ptr [ebp - 0x38] */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B8D90; /* 0x171B8D87: jge 0x171b8d90 */
L_171B8D89:
    ecx = 1; /* 0x171B8D89: mov ecx, 1 */
    goto L_171B8DB9; /* 0x171B8D8E: jmp 0x171b8db9 */
L_171B8D90:
    ecx = eax + (-0x8); /* 0x171B8D90: lea ecx, [eax - 8] */
    edi = edx; /* 0x171B8D93: mov edi, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edi) >> 31) & 1u)); /* 0x171B8D95: sar edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> ((LO8(ecx)) & 31));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFu);
    edi = edi & 0xFFu; /* 0x171B8D97: and edi, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + edi * 4 + 0x90); /* 0x171B8D9D: mov ecx, dword ptr [esi + edi*4 + 0x90] */
    /* test ecx, ecx */ /* 0x171B8DA4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8DB4; /* 0x171B8DA6: je 0x171b8db4 */
L_171B8DA8:
    edi = (uint32_t)MEM8(edi + esi + 0x490); /* 0x171B8DA8: movzx edi, byte ptr [edi + esi + 0x490] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B8DB0: sub eax, ecx */
    _flag_k = FK_CMP;
    goto L_171B8DD6; /* 0x171B8DB2: jmp 0x171b8dd6 */
L_171B8DB4:
    ecx = 9; /* 0x171B8DB4: mov ecx, 9 */
L_171B8DB9:
    PUSH32(esp, ecx); /* 0x171B8DB9: push ecx */
    PUSH32(esp, esi); /* 0x171B8DBA: push esi */
    PUSH32(esp, eax); /* 0x171B8DBB: push eax */
    PUSH32(esp, edx); /* 0x171B8DBC: push edx */
    eax = ebp + (-0x40); /* 0x171B8DBD: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x171B8DC0: push eax */
    RECOMP_CALL(sub_171B8B40); /* 0x171B8DC1: call 0x171b8b40 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171B8DC6: mov edi, eax */
    /* test edi, edi */ /* 0x171B8DC8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B9071; /* 0x171B8DCA: jl 0x171b9071 */
L_171B8DD0:
    edx = MEM32(ebp + (-0x38)); /* 0x171B8DD0: mov edx, dword ptr [ebp - 0x38] */
    eax = MEM32(ebp + (-0x34)); /* 0x171B8DD3: mov eax, dword ptr [ebp - 0x34] */
L_171B8DD6:
    /* test edi, edi */ /* 0x171B8DD6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8E27; /* 0x171B8DD8: je 0x171b8e27 */
L_171B8DDA:
    /* cmp eax, edi */ /* 0x171B8DDA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B8DF8; /* 0x171B8DDC: jge 0x171b8df8 */
L_171B8DDE:
    PUSH32(esp, edi); /* 0x171B8DDE: push edi */
    PUSH32(esp, eax); /* 0x171B8DDF: push eax */
    PUSH32(esp, edx); /* 0x171B8DE0: push edx */
    ecx = ebp + (-0x40); /* 0x171B8DE1: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x171B8DE4: push ecx */
    RECOMP_CALL(sub_171B8A20); /* 0x171B8DE5: call 0x171b8a20 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B8DEA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B9071; /* 0x171B8DEC: je 0x171b9071 */
L_171B8DF2:
    edx = MEM32(ebp + (-0x38)); /* 0x171B8DF2: mov edx, dword ptr [ebp - 0x38] */
    eax = MEM32(ebp + (-0x34)); /* 0x171B8DF5: mov eax, dword ptr [ebp - 0x34] */
L_171B8DF8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171B8DF8: sub eax, edi */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x171B8DFA: mov ecx, edi */
    esi = 1; /* 0x171B8DFC: mov esi, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B8E01: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x171B8E01: shl esi, cl */
    ecx = eax; /* 0x171B8E03: mov ecx, eax */
    ebx = edx; /* 0x171B8E05: mov ebx, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((ebx) >> 31) & 1u)); /* 0x171B8E07: sar ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> ((LO8(ecx)) & 31));
    ecx = MEM32(edi * 4 + 0x170258C8); /* 0x171B8E09: mov ecx, dword ptr [edi*4 + 0x170258c8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171B8E10: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    esi = esi & ebx; /* 0x171B8E11: and esi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ecx */ /* 0x171B8E13: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x8)); /* 0x171B8E15: mov ebx, dword ptr [ebp - 8] */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B8E25; /* 0x171B8E18: jge 0x171b8e25 */
L_171B8E1A:
    edi = MEM32(edi * 4 + 0x17025908); /* 0x171B8E1A: mov edi, dword ptr [edi*4 + 0x17025908] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x171B8E21: add edi, esi */
    _flag_k = FK_ADD;
    goto L_171B8E27; /* 0x171B8E23: jmp 0x171b8e27 */
L_171B8E25:
    edi = esi; /* 0x171B8E25: mov edi, esi */
L_171B8E27:
    esi = MEM32(ebp + (-0x4)); /* 0x171B8E27: mov esi, dword ptr [ebp - 4] */
    ecx = MEM32(esi + 0x28); /* 0x171B8E2A: mov ecx, dword ptr [esi + 0x28] */
    /* test ecx, ecx */ /* 0x171B8E2D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8E46; /* 0x171B8E2F: je 0x171b8e46 */
L_171B8E31:
    ecx = MEM32(ebp + (-0x10)); /* 0x171B8E31: mov ecx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ecx); /* 0x171B8E34: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(ebp + ecx * 4 + (-0x2C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + ecx * 4 + (-0x2C)) = MEM32(ebp + ecx * 4 + (-0x2C)) + edi; /* 0x171B8E36: add dword ptr [ebp + ecx*4 - 0x2c], edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x14)); /* 0x171B8E3A: mov edi, dword ptr [ebp - 0x14] */
    ecx = ebp + ecx * 4 + (-0x2C); /* 0x171B8E3D: lea ecx, [ebp + ecx*4 - 0x2c] */
    ecx = MEM32(ecx); /* 0x171B8E41: mov ecx, dword ptr [ecx] */
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x171B8E43: mov word ptr [edi], cx */
L_171B8E46:
    ecx = MEM32(esi + 0x50); /* 0x171B8E46: mov ecx, dword ptr [esi + 0x50] */
    /* test ecx, ecx */ /* 0x171B8E49: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 1; /* 0x171B8E4B: mov esi, 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8F51; /* 0x171B8E50: je 0x171b8f51 */
L_171B8E56:
    /* cmp eax, 8 */ /* 0x171B8E56: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B8E82; /* 0x171B8E59: jge 0x171b8e82 */
L_171B8E5B:
    PUSH32(esp, 0); /* 0x171B8E5B: push 0 */
    PUSH32(esp, eax); /* 0x171B8E5D: push eax */
    PUSH32(esp, edx); /* 0x171B8E5E: push edx */
    edx = ebp + (-0x40); /* 0x171B8E5F: lea edx, [ebp - 0x40] */
    PUSH32(esp, edx); /* 0x171B8E62: push edx */
    RECOMP_CALL(sub_171B8A20); /* 0x171B8E63: call 0x171b8a20 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B8E68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B9071; /* 0x171B8E6A: je 0x171b9071 */
L_171B8E70:
    eax = MEM32(ebp + (-0x34)); /* 0x171B8E70: mov eax, dword ptr [ebp - 0x34] */
    /* cmp eax, 8 */ /* 0x171B8E73: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x38)); /* 0x171B8E76: mov edx, dword ptr [ebp - 0x38] */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B8E82; /* 0x171B8E79: jge 0x171b8e82 */
L_171B8E7B:
    ecx = 1; /* 0x171B8E7B: mov ecx, 1 */
    goto L_171B8EAB; /* 0x171B8E80: jmp 0x171b8eab */
L_171B8E82:
    ecx = eax + (-0x8); /* 0x171B8E82: lea ecx, [eax - 8] */
    edi = edx; /* 0x171B8E85: mov edi, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edi) >> 31) & 1u)); /* 0x171B8E87: sar edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> ((LO8(ecx)) & 31));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFu);
    edi = edi & 0xFFu; /* 0x171B8E89: and edi, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + edi * 4 + 0x90); /* 0x171B8E8F: mov ecx, dword ptr [ebx + edi*4 + 0x90] */
    /* test ecx, ecx */ /* 0x171B8E96: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8EA6; /* 0x171B8E98: je 0x171b8ea6 */
L_171B8E9A:
    edi = (uint32_t)MEM8(edi + ebx + 0x490); /* 0x171B8E9A: movzx edi, byte ptr [edi + ebx + 0x490] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B8EA2: sub eax, ecx */
    _flag_k = FK_CMP;
    goto L_171B8EC8; /* 0x171B8EA4: jmp 0x171b8ec8 */
L_171B8EA6:
    ecx = 9; /* 0x171B8EA6: mov ecx, 9 */
L_171B8EAB:
    PUSH32(esp, ecx); /* 0x171B8EAB: push ecx */
    PUSH32(esp, ebx); /* 0x171B8EAC: push ebx */
    PUSH32(esp, eax); /* 0x171B8EAD: push eax */
    PUSH32(esp, edx); /* 0x171B8EAE: push edx */
    eax = ebp + (-0x40); /* 0x171B8EAF: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x171B8EB2: push eax */
    RECOMP_CALL(sub_171B8B40); /* 0x171B8EB3: call 0x171b8b40 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171B8EB8: mov edi, eax */
    /* test edi, edi */ /* 0x171B8EBA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B9071; /* 0x171B8EBC: jl 0x171b9071 */
L_171B8EC2:
    edx = MEM32(ebp + (-0x38)); /* 0x171B8EC2: mov edx, dword ptr [ebp - 0x38] */
    eax = MEM32(ebp + (-0x34)); /* 0x171B8EC5: mov eax, dword ptr [ebp - 0x34] */
L_171B8EC8:
    ecx = edi; /* 0x171B8EC8: mov ecx, edi */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x171B8ECA: sar ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 4u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    edi = edi & 0xFu; /* 0x171B8ECD: and edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8F37; /* 0x171B8ED0: je 0x171b8f37 */
L_171B8ED2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x171B8ED2: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x171B8ED4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = esi; /* 0x171B8ED6: mov dword ptr [ebp - 0x18], esi */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B8EF5; /* 0x171B8ED9: jge 0x171b8ef5 */
L_171B8EDB:
    PUSH32(esp, edi); /* 0x171B8EDB: push edi */
    PUSH32(esp, eax); /* 0x171B8EDC: push eax */
    PUSH32(esp, edx); /* 0x171B8EDD: push edx */
    ecx = ebp + (-0x40); /* 0x171B8EDE: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x171B8EE1: push ecx */
    RECOMP_CALL(sub_171B8A20); /* 0x171B8EE2: call 0x171b8a20 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B8EE7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B9071; /* 0x171B8EE9: je 0x171b9071 */
L_171B8EEF:
    edx = MEM32(ebp + (-0x38)); /* 0x171B8EEF: mov edx, dword ptr [ebp - 0x38] */
    eax = MEM32(ebp + (-0x34)); /* 0x171B8EF2: mov eax, dword ptr [ebp - 0x34] */
L_171B8EF5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171B8EF5: sub eax, edi */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x171B8EF7: mov ecx, edi */
    esi = 1; /* 0x171B8EF9: mov esi, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B8EFE: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x171B8EFE: shl esi, cl */
    ecx = eax; /* 0x171B8F00: mov ecx, eax */
    ebx = edx; /* 0x171B8F02: mov ebx, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((ebx) >> 31) & 1u)); /* 0x171B8F04: sar ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> ((LO8(ecx)) & 31));
    ecx = MEM32(edi * 4 + 0x170258C8); /* 0x171B8F06: mov ecx, dword ptr [edi*4 + 0x170258c8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171B8F0D: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    esi = esi & ebx; /* 0x171B8F0E: and esi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ecx */ /* 0x171B8F10: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B8F1F; /* 0x171B8F12: jge 0x171b8f1f */
L_171B8F14:
    edi = MEM32(edi * 4 + 0x17025908); /* 0x171B8F14: mov edi, dword ptr [edi*4 + 0x17025908] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x171B8F1B: add edi, esi */
    _flag_k = FK_ADD;
    goto L_171B8F21; /* 0x171B8F1D: jmp 0x171b8f21 */
L_171B8F1F:
    edi = esi; /* 0x171B8F1F: mov edi, esi */
L_171B8F21:
    esi = MEM32(ebp + (-0x18)); /* 0x171B8F21: mov esi, dword ptr [ebp - 0x18] */
    ebx = MEM32(ebp + (-0x14)); /* 0x171B8F24: mov ebx, dword ptr [ebp - 0x14] */
    ecx = MEM32(esi * 4 + 0x17025788); /* 0x171B8F27: mov ecx, dword ptr [esi*4 + 0x17025788] */
    MEM16(ebx + ecx * 2) = (uint16_t)(LO16(edi)); /* 0x171B8F2E: mov word ptr [ebx + ecx*2], di */
    ebx = MEM32(ebp + (-0x8)); /* 0x171B8F32: mov ebx, dword ptr [ebp - 8] */
    goto L_171B8F42; /* 0x171B8F35: jmp 0x171b8f42 */
L_171B8F37:
    /* cmp ecx, 0xFu */ /* 0x171B8F37: cmp ecx, 0xf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B9002; /* 0x171B8F3A: jne 0x171b9002 */
L_171B8F40:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x171B8F40: add esi, ecx */
    _flag_k = FK_ADD;
L_171B8F42:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B8F42: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 0x40u */ /* 0x171B8F43: cmp esi, 0x40 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B8E56; /* 0x171B8F46: jl 0x171b8e56 */
L_171B8F4C:
    goto L_171B9002; /* 0x171B8F4C: jmp 0x171b9002 */
L_171B8F51:
    /* cmp eax, 8 */ /* 0x171B8F51: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B8F7D; /* 0x171B8F54: jge 0x171b8f7d */
L_171B8F56:
    PUSH32(esp, 0); /* 0x171B8F56: push 0 */
    PUSH32(esp, eax); /* 0x171B8F58: push eax */
    PUSH32(esp, edx); /* 0x171B8F59: push edx */
    edx = ebp + (-0x40); /* 0x171B8F5A: lea edx, [ebp - 0x40] */
    PUSH32(esp, edx); /* 0x171B8F5D: push edx */
    RECOMP_CALL(sub_171B8A20); /* 0x171B8F5E: call 0x171b8a20 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B8F63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B9071; /* 0x171B8F65: je 0x171b9071 */
L_171B8F6B:
    eax = MEM32(ebp + (-0x34)); /* 0x171B8F6B: mov eax, dword ptr [ebp - 0x34] */
    /* cmp eax, 8 */ /* 0x171B8F6E: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x38)); /* 0x171B8F71: mov edx, dword ptr [ebp - 0x38] */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B8F7D; /* 0x171B8F74: jge 0x171b8f7d */
L_171B8F76:
    ecx = 1; /* 0x171B8F76: mov ecx, 1 */
    goto L_171B8FA6; /* 0x171B8F7B: jmp 0x171b8fa6 */
L_171B8F7D:
    ecx = eax + (-0x8); /* 0x171B8F7D: lea ecx, [eax - 8] */
    edi = edx; /* 0x171B8F80: mov edi, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edi) >> 31) & 1u)); /* 0x171B8F82: sar edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> ((LO8(ecx)) & 31));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFu);
    edi = edi & 0xFFu; /* 0x171B8F84: and edi, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + edi * 4 + 0x90); /* 0x171B8F8A: mov ecx, dword ptr [ebx + edi*4 + 0x90] */
    /* test ecx, ecx */ /* 0x171B8F91: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8FA1; /* 0x171B8F93: je 0x171b8fa1 */
L_171B8F95:
    edi = (uint32_t)MEM8(edi + ebx + 0x490); /* 0x171B8F95: movzx edi, byte ptr [edi + ebx + 0x490] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B8F9D: sub eax, ecx */
    _flag_k = FK_CMP;
    goto L_171B8FC3; /* 0x171B8F9F: jmp 0x171b8fc3 */
L_171B8FA1:
    ecx = 9; /* 0x171B8FA1: mov ecx, 9 */
L_171B8FA6:
    PUSH32(esp, ecx); /* 0x171B8FA6: push ecx */
    PUSH32(esp, ebx); /* 0x171B8FA7: push ebx */
    PUSH32(esp, eax); /* 0x171B8FA8: push eax */
    PUSH32(esp, edx); /* 0x171B8FA9: push edx */
    eax = ebp + (-0x40); /* 0x171B8FAA: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x171B8FAD: push eax */
    RECOMP_CALL(sub_171B8B40); /* 0x171B8FAE: call 0x171b8b40 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171B8FB3: mov edi, eax */
    /* test edi, edi */ /* 0x171B8FB5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B9071; /* 0x171B8FB7: jl 0x171b9071 */
L_171B8FBD:
    edx = MEM32(ebp + (-0x38)); /* 0x171B8FBD: mov edx, dword ptr [ebp - 0x38] */
    eax = MEM32(ebp + (-0x34)); /* 0x171B8FC0: mov eax, dword ptr [ebp - 0x34] */
L_171B8FC3:
    ecx = edi; /* 0x171B8FC3: mov ecx, edi */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x171B8FC5: sar ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 4u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    edi = edi & 0xFu; /* 0x171B8FC8: and edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B8FF1; /* 0x171B8FCB: je 0x171b8ff1 */
L_171B8FCD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x171B8FCD: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x171B8FCF: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B8FED; /* 0x171B8FD1: jge 0x171b8fed */
L_171B8FD3:
    PUSH32(esp, edi); /* 0x171B8FD3: push edi */
    PUSH32(esp, eax); /* 0x171B8FD4: push eax */
    PUSH32(esp, edx); /* 0x171B8FD5: push edx */
    ecx = ebp + (-0x40); /* 0x171B8FD6: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x171B8FD9: push ecx */
    RECOMP_CALL(sub_171B8A20); /* 0x171B8FDA: call 0x171b8a20 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B8FDF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B9071; /* 0x171B8FE1: je 0x171b9071 */
L_171B8FE7:
    edx = MEM32(ebp + (-0x38)); /* 0x171B8FE7: mov edx, dword ptr [ebp - 0x38] */
    eax = MEM32(ebp + (-0x34)); /* 0x171B8FEA: mov eax, dword ptr [ebp - 0x34] */
L_171B8FED:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171B8FED: sub eax, edi */
    _flag_k = FK_CMP;
    goto L_171B8FF8; /* 0x171B8FEF: jmp 0x171b8ff8 */
L_171B8FF1:
    /* cmp ecx, 0xFu */ /* 0x171B8FF1: cmp ecx, 0xf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B9002; /* 0x171B8FF4: jne 0x171b9002 */
L_171B8FF6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x171B8FF6: add esi, ecx */
    _flag_k = FK_ADD;
L_171B8FF8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B8FF8: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 0x40u */ /* 0x171B8FF9: cmp esi, 0x40 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B8F51; /* 0x171B8FFC: jl 0x171b8f51 */
L_171B9002:
    edi = MEM32(ebp + (-0x4)); /* 0x171B9002: mov edi, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + (-0x10)); /* 0x171B9005: mov ebx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x171B9008: mov ecx, dword ptr [ebp - 0xc] */
    esi = 4; /* 0x171B900B: mov esi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x171B9010: add edi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171B9012: add ebx, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x8); /* 0x171B9014: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B9017: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = edi; /* 0x171B9018: mov dword ptr [ebp - 4], edi */
    /* cmp ecx, MEM32(esi + 0x168) */ /* 0x171B901B: cmp ecx, dword ptr [esi + 0x168] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x168));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ecx; /* 0x171B9021: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x171B9024: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B8D4B; /* 0x171B9027: jl 0x171b8d4b */
L_171B902D:
    edi = MEM32(ebp + (-0x1C)); /* 0x171B902D: mov edi, dword ptr [ebp - 0x1c] */
L_171B9030:
    ecx = MEM32(esi + 0x18); /* 0x171B9030: mov ecx, dword ptr [esi + 0x18] */
    esi = MEM32(ebp + (-0x40)); /* 0x171B9033: mov esi, dword ptr [ebp - 0x40] */
    MEM32(ecx) = esi; /* 0x171B9036: mov dword ptr [ecx], esi */
    esi = MEM32(ebp + (-0x3C)); /* 0x171B9038: mov esi, dword ptr [ebp - 0x3c] */
    MEM32(edi + 0xC) = edx; /* 0x171B903B: mov dword ptr [edi + 0xc], edx */
    edx = MEM32(ebp + (-0x2C)); /* 0x171B903E: mov edx, dword ptr [ebp - 0x2c] */
    MEM32(edi + 0x14) = edx; /* 0x171B9041: mov dword ptr [edi + 0x14], edx */
    edx = MEM32(ebp + (-0x20)); /* 0x171B9044: mov edx, dword ptr [ebp - 0x20] */
    MEM32(edi + 0x10) = eax; /* 0x171B9047: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x171B904A: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ecx + 0x4) = esi; /* 0x171B904D: mov dword ptr [ecx + 4], esi */
    ecx = MEM32(ebp + (-0x24)); /* 0x171B9050: mov ecx, dword ptr [ebp - 0x24] */
    MEM32(edi + 0x18) = eax; /* 0x171B9053: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x1C) = ecx; /* 0x171B9056: mov dword ptr [edi + 0x1c], ecx */
    MEM32(edi + 0x20) = edx; /* 0x171B9059: mov dword ptr [edi + 0x20], edx */
L_171B905C:
    eax = MEM32(edi + 0x24); /* 0x171B905C: mov eax, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B905F: dec eax */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x171B9060: pop ebx */
    MEM32(edi + 0x24) = eax; /* 0x171B9061: mov dword ptr [edi + 0x24], eax */
    edi = POP32_VAL(esp); /* 0x171B9064: pop edi */
    eax = 1; /* 0x171B9065: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x171B906A: pop esi */
    esp = ebp; /* 0x171B906B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B906D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B906E: ret 8 */
L_171B9071:
    ebx = POP32_VAL(esp); /* 0x171B9071: pop ebx */
    edi = POP32_VAL(esp); /* 0x171B9072: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B9073: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171B9075: pop esi */
    esp = ebp; /* 0x171B9076: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B9078: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B9079: ret 8 */
    RECOMP_REGS_OUT();
}
