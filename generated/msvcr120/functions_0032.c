#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_100A5072(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A5072u);

L_100A5072:
    PUSH32(esp, 0x10u); /* 0x100A5072: push 0x10 */
    PUSH32(esp, 0x100A5150u); /* 0x100A5074: push 0x100a5150 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A5079: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A507E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A5080: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, 7); /* 0x100A5083: push 7 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A5085: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A508A: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A508B: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A508E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x100A5090: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x100A5093: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A5095: setne al */
    /* test eax, eax */ /* 0x100A5098: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A50AD; /* 0x100A509A: jne 0x100a50ad */
L_100A509C:
    RECOMP_CALL(sub_1001177D); /* 0x100A509C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A50A1: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A50A3: pop esi */
    MEM32(eax) = esi; /* 0x100A50A4: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A50A6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_100A511C; /* 0x100A50AB: jmp 0x100a511c */
L_100A50AD:
    MEM32(ecx) = esi; /* 0x100A50AD: mov dword ptr [ecx], esi */
    edi = MEM32(ebp + 0xC); /* 0x100A50AF: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x100A50B2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A50B8; /* 0x100A50B4: je 0x100a50b8 */
L_100A50B6:
    MEM32(edi) = esi; /* 0x100A50B6: mov dword ptr [edi], esi */
L_100A50B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A50B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x100A50BA: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A50BD: setne al */
    /* test eax, eax */ /* 0x100A50C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A509C; /* 0x100A50C2: je 0x100a509c */
L_100A50C4:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A50C4: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_10017060); /* 0x100A50C7: call 0x10017060 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A50CC: pop ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x100A50CD: mov dword ptr [ebp - 0x20], eax */
    /* test eax, eax */ /* 0x100A50D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A511C; /* 0x100A50D2: je 0x100a511c */
L_100A50D4:
    PUSH32(esp, eax); /* 0x100A50D4: push eax */
    RECOMP_CALL(sub_100129AF); /* 0x100A50D5: call 0x100129af */
    RECOMP_FLAGS_IN();
    ebx = eax + 0x1; /* 0x100A50DA: lea ebx, [eax + 1] */
    PUSH32(esp, 1); /* 0x100A50DD: push 1 */
    PUSH32(esp, ebx); /* 0x100A50DF: push ebx */
    RECOMP_CALL(sub_1001CBFF); /* 0x100A50E0: call 0x1001cbff */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A50E5: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x100A50E8: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x100A50EB: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x100A50ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A5105; /* 0x100A50EF: jne 0x100a5105 */
L_100A50F1:
    RECOMP_CALL(sub_1001177D); /* 0x100A50F1: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x100A50F6: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_1001177D); /* 0x100A50FC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x100A5101: mov esi, dword ptr [eax] */
    goto L_100A511C; /* 0x100A5103: jmp 0x100a511c */
L_100A5105:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x100A5105: push dword ptr [ebp - 0x20] */
    PUSH32(esp, ebx); /* 0x100A5108: push ebx */
    PUSH32(esp, eax); /* 0x100A5109: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x100A510A: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A510F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A5112: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A5133; /* 0x100A5114: jne 0x100a5133 */
L_100A5116:
    /* test edi, edi */ /* 0x100A5116: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A511C; /* 0x100A5118: je 0x100a511c */
L_100A511A:
    MEM32(edi) = ebx; /* 0x100A511A: mov dword ptr [edi], ebx */
L_100A511C:
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A511C: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A511F: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A5140); /* 0x100A5126: call 0x100a5140 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A512B: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A512D: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A5132: ret  */
L_100A5133:
    PUSH32(esp, esi); /* 0x100A5133: push esi */
    PUSH32(esp, esi); /* 0x100A5134: push esi */
    PUSH32(esp, esi); /* 0x100A5135: push esi */
    PUSH32(esp, esi); /* 0x100A5136: push esi */
    PUSH32(esp, esi); /* 0x100A5137: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x100A5138: call 0x100a469b */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x1C)); /* 0x100A513D: mov esi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x100A5140: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A5142: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5147: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A5148: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A5140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A5140u);

L_100A5140:
    PUSH32(esp, 7); /* 0x100A5140: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A5142: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5147: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A5148: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A516C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A516Cu);

L_100A516C:
    PUSH32(esp, 0xCu); /* 0x100A516C: push 0xc */
    PUSH32(esp, 0x100A5240u); /* 0x100A516E: push 0x100a5240 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A5173: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A5178: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x100A517A: mov dword ptr [ebp - 0x1c], ebx */
    PUSH32(esp, 7); /* 0x100A517D: push 7 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A517F: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5184: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x100A5185: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A5188: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x100A518A: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x100A518D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A518F: setne al */
    /* test eax, eax */ /* 0x100A5192: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A51A7; /* 0x100A5194: jne 0x100a51a7 */
L_100A5196:
    RECOMP_CALL(sub_1001177D); /* 0x100A5196: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A519B: push 0x16 */
    ebx = POP32_VAL(esp); /* 0x100A519D: pop ebx */
    MEM32(eax) = ebx; /* 0x100A519E: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_100A4670); /* 0x100A51A0: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_100A5210; /* 0x100A51A5: jmp 0x100a5210 */
L_100A51A7:
    MEM32(ecx) = ebx; /* 0x100A51A7: mov dword ptr [ecx], ebx */
    esi = MEM32(ebp + 0xC); /* 0x100A51A9: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x100A51AC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A51BA; /* 0x100A51AE: je 0x100a51ba */
L_100A51B0:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x100A51B0: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100A51C0; /* 0x100A51B4: ja 0x100a51c0 */
L_100A51B6:
    /* test esi, esi */ /* 0x100A51B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A51C5; /* 0x100A51B8: jne 0x100a51c5 */
L_100A51BA:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x100A51BA: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A51C5; /* 0x100A51BE: jne 0x100a51c5 */
L_100A51C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A51C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A51C2: inc eax */
    _flag_k = FK_INC;
    goto L_100A51C7; /* 0x100A51C3: jmp 0x100a51c7 */
L_100A51C5:
    eax = ebx; /* 0x100A51C5: mov eax, ebx */
L_100A51C7:
    /* test eax, eax */ /* 0x100A51C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A5196; /* 0x100A51C9: je 0x100a5196 */
L_100A51CB:
    /* test esi, esi */ /* 0x100A51CB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A51D1; /* 0x100A51CD: je 0x100a51d1 */
L_100A51CF:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x100A51CF: mov byte ptr [esi], bl */
L_100A51D1:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A51D1: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_10017060); /* 0x100A51D4: call 0x10017060 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A51D9: pop ecx */
    edi = eax; /* 0x100A51DA: mov edi, eax */
    /* test edi, edi */ /* 0x100A51DC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A5210; /* 0x100A51DE: je 0x100a5210 */
L_100A51E0:
    PUSH32(esp, edi); /* 0x100A51E0: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x100A51E1: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A51E6: pop ecx */
    ecx = eax + 0x1; /* 0x100A51E7: lea ecx, [eax + 1] */
    eax = MEM32(ebp + 0x8); /* 0x100A51EA: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x100A51ED: mov dword ptr [eax], ecx */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x100A51EF: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A5210; /* 0x100A51F3: je 0x100a5210 */
L_100A51F5:
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x100A51F5: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A51FF; /* 0x100A51F8: jbe 0x100a51ff */
L_100A51FA:
    PUSH32(esp, 0x22u); /* 0x100A51FA: push 0x22 */
    ebx = POP32_VAL(esp); /* 0x100A51FC: pop ebx */
    goto L_100A5210; /* 0x100A51FD: jmp 0x100a5210 */
L_100A51FF:
    PUSH32(esp, edi); /* 0x100A51FF: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A5200: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100A5203: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x100A5204: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A5209: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A520C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A5227; /* 0x100A520E: jne 0x100a5227 */
L_100A5210:
    MEM32(ebp + (-0x1C)) = ebx; /* 0x100A5210: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A5213: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A5234); /* 0x100A521A: call 0x100a5234 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x100A521F: mov eax, ebx */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A5221: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A5226: ret  */
L_100A5227:
    PUSH32(esp, ebx); /* 0x100A5227: push ebx */
    PUSH32(esp, ebx); /* 0x100A5228: push ebx */
    PUSH32(esp, ebx); /* 0x100A5229: push ebx */
    PUSH32(esp, ebx); /* 0x100A522A: push ebx */
    PUSH32(esp, ebx); /* 0x100A522B: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x100A522C: call 0x100a469b */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x1C)); /* 0x100A5231: mov ebx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 7); /* 0x100A5234: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A5236: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A523B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A523C: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A5234(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A5234u);

L_100A5234:
    PUSH32(esp, 7); /* 0x100A5234: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A5236: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A523B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A523C: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A525C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A525Cu);

L_100A525C:
    PUSH32(esp, ebp); /* 0x100A525C: push ebp */
    ebp = esp; /* 0x100A525D: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100A525F: push ebx */
    PUSH32(esp, esi); /* 0x100A5260: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A5261: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100A5264: push edi */
    PUSH32(esp, 0x3Bu); /* 0x100A5265: push 0x3b */
    edx = POP32_VAL(esp); /* 0x100A5267: pop edx */
    goto L_100A526B; /* 0x100A5268: jmp 0x100a526b */
L_100A526A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A526A: inc esi */
    _flag_k = FK_INC;
L_100A526B:
    /* cmp MEM8(esi), LO8(edx) */ /* 0x100A526B: cmp byte ptr [esi], dl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A526A; /* 0x100A526D: je 0x100a526a */
L_100A526F:
    ecx = MEM32(ebp + 0x10); /* 0x100A526F: mov ecx, dword ptr [ebp + 0x10] */
    edi = esi; /* 0x100A5272: mov edi, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100A5274: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100A5287; /* 0x100A5275: jne 0x100a5287 */
L_100A5277:
    RECOMP_CALL(sub_1001177D); /* 0x100A5277: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x100A527C: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x22u; /* 0x100A527F: mov dword ptr [eax], 0x22 */
    goto L_100A52D5; /* 0x100A5285: jmp 0x100a52d5 */
L_100A5287:
    ebx = MEM32(ebp + 0xC); /* 0x100A5287: mov ebx, dword ptr [ebp + 0xc] */
    goto L_100A52C8; /* 0x100A528A: jmp 0x100a52c8 */
L_100A528C:
    /* cmp LO8(eax), LO8(edx) */ /* 0x100A528C: cmp al, dl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A52D0; /* 0x100A528E: je 0x100a52d0 */
L_100A5290:
    /* cmp LO8(eax), 0x22u */ /* 0x100A5290: cmp al, 0x22 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A52AA; /* 0x100A5292: je 0x100a52aa */
L_100A5294:
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x100A5294: mov byte ptr [ebx], al */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A5296: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A5297: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100A5298: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100A52C8; /* 0x100A5299: jne 0x100a52c8 */
L_100A529B:
    edi = esi; /* 0x100A529B: mov edi, esi */
    RECOMP_CALL(sub_1001177D); /* 0x100A529D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x100A52A2: mov dword ptr [eax], 0x22 */
    goto L_100A52D5; /* 0x100A52A8: jmp 0x100a52d5 */
L_100A52AA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A52AA: inc esi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(esi)); /* 0x100A52AB: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x100A52AD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A52D1; /* 0x100A52AF: je 0x100a52d1 */
L_100A52B1:
    /* cmp LO8(eax), 0x22u */ /* 0x100A52B1: cmp al, 0x22 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A52C2; /* 0x100A52B3: je 0x100a52c2 */
L_100A52B5:
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x100A52B5: mov byte ptr [ebx], al */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A52B7: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A52B8: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100A52B9: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A529B; /* 0x100A52BA: je 0x100a529b */
L_100A52BC:
    SET_LO8(eax, MEM8(esi)); /* 0x100A52BC: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x100A52BE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A52B1; /* 0x100A52C0: jne 0x100a52b1 */
L_100A52C2:
    /* cmp MEM8(esi), 0 */ /* 0x100A52C2: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A52D1; /* 0x100A52C5: je 0x100a52d1 */
L_100A52C7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A52C7: inc esi */
    _flag_k = FK_INC;
L_100A52C8:
    SET_LO8(eax, MEM8(esi)); /* 0x100A52C8: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x100A52CA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A52D1; /* 0x100A52CC: je 0x100a52d1 */
L_100A52CE:
    RECOMP_BACKEDGE();
    goto L_100A528C; /* 0x100A52CE: jmp 0x100a528c */
L_100A52D0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A52D0: inc esi */
    _flag_k = FK_INC;
L_100A52D1:
    /* cmp MEM8(esi), LO8(edx) */ /* 0x100A52D1: cmp byte ptr [esi], dl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A52D0; /* 0x100A52D3: je 0x100a52d0 */
L_100A52D5:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x100A52D5: sub edi, esi */
    _flag_k = FK_CMP;
    MEM8(ebx) = (uint8_t)(0); /* 0x100A52D7: mov byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x100A52DA: neg edi */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A52DC: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    edi = edi & esi; /* 0x100A52DE: and edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x100A52E0: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x100A52E2: pop edi */
    esi = POP32_VAL(esp); /* 0x100A52E3: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A52E4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A52E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A52E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A52E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A52E7u);

L_100A52E7:
    PUSH32(esp, 0xCu); /* 0x100A52E7: push 0xc */
    PUSH32(esp, 0x100A5368u); /* 0x100A52E9: push 0x100a5368 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A52EE: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x100A52F3: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A52F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x100A52F9: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100A52FC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A52FE: setne al */
    /* test eax, eax */ /* 0x100A5301: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A5319; /* 0x100A5303: jne 0x100a5319 */
L_100A5305:
    RECOMP_CALL(sub_1001177D); /* 0x100A5305: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A530A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A5310: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A5315: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A5355; /* 0x100A5317: jmp 0x100a5355 */
L_100A5319:
    edi = 0x7FFFu; /* 0x100A5319: mov edi, 0x7fff */
    PUSH32(esp, edi); /* 0x100A531E: push edi */
    PUSH32(esp, esi); /* 0x100A531F: push esi */
    RECOMP_CALL(sub_1000F810); /* 0x100A5320: call 0x1000f810 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5325: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A5326: pop ecx */
    /* cmp eax, edi */ /* 0x100A5327: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A5329: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A532B: neg eax */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A5305; /* 0x100A532D: je 0x100a5305 */
L_100A532F:
    PUSH32(esp, 7); /* 0x100A532F: push 7 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A5331: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5336: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A5337: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100A533B: push esi */
    RECOMP_CALL(sub_10029555); /* 0x100A533C: call 0x10029555 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5341: pop ecx */
    esi = eax; /* 0x100A5342: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A5344: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A5347: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A535E); /* 0x100A534E: call 0x100a535e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A5353: mov eax, esi */
L_100A5355:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A5355: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A535A: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A535E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A535Eu);

L_100A535E:
    PUSH32(esp, 7); /* 0x100A535E: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A5360: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5365: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A5366: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A5384(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A5384u);

L_100A5384:
    PUSH32(esp, ebp); /* 0x100A5384: push ebp */
    ebp = esp; /* 0x100A5385: mov ebp, esp */
    RECOMP_ICALL(MEM32(0x100E5268)); /* 0x100A5387: call dword ptr [0x100e5268] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x100A538D: push 1 */
    MEM32(0x100E442C) = eax; /* 0x100A538F: mov dword ptr [0x100e442c], eax */
    RECOMP_CALL(sub_100A6BB8); /* 0x100A5394: call 0x100a6bb8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A5399: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A480C); /* 0x100A539C: call 0x100a480c */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x100E442C), 0 */ /* 0x100A53A1: cmp dword ptr [0x100e442c], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E442C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100A53A8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A53A9: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A53B4; /* 0x100A53AA: jne 0x100a53b4 */
L_100A53AC:
    PUSH32(esp, 1); /* 0x100A53AC: push 1 */
    RECOMP_CALL(sub_100A6BB8); /* 0x100A53AE: call 0x100a6bb8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A53B3: pop ecx */
L_100A53B4:
    PUSH32(esp, 0xC0000409u); /* 0x100A53B4: push 0xc0000409 */
    RECOMP_CALL(sub_100A47F7); /* 0x100A53B9: call 0x100a47f7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A53BE: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100A53BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A53C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A53C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A53C1u);

L_100A53C1:
    PUSH32(esp, ebp); /* 0x100A53C1: push ebp */
    ebp = esp; /* 0x100A53C2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x324u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x324u; /* 0x100A53C4: sub esp, 0x324 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x17u); /* 0x100A53CA: push 0x17 */
    RECOMP_CALL(sub_1002DB46); /* 0x100A53CC: call 0x1002db46 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A53D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A53DA; /* 0x100A53D3: je 0x100a53da */
L_100A53D5:
    PUSH32(esp, 2); /* 0x100A53D5: push 2 */
    ecx = POP32_VAL(esp); /* 0x100A53D7: pop ecx */
    void_lift_trap(0x100A53D8u, "int 0x29");
L_100A53DA:
    MEM32(0x100E4210) = eax; /* 0x100A53DA: mov dword ptr [0x100e4210], eax */
    MEM32(0x100E420C) = ecx; /* 0x100A53DF: mov dword ptr [0x100e420c], ecx */
    MEM32(0x100E4208) = edx; /* 0x100A53E5: mov dword ptr [0x100e4208], edx */
    MEM32(0x100E4204) = ebx; /* 0x100A53EB: mov dword ptr [0x100e4204], ebx */
    MEM32(0x100E4200) = esi; /* 0x100A53F1: mov dword ptr [0x100e4200], esi */
    MEM32(0x100E41FC) = edi; /* 0x100A53F7: mov dword ptr [0x100e41fc], edi */
    MEM16(0x100E4228) = (uint16_t)(_seg_ss); /* 0x100A53FD: mov word ptr [0x100e4228], ss */
    MEM16(0x100E421C) = (uint16_t)(_seg_cs); /* 0x100A5403: mov word ptr [0x100e421c], cs */
    MEM16(0x100E41F8) = (uint16_t)(_seg_ds); /* 0x100A5409: mov word ptr [0x100e41f8], ds */
    MEM16(0x100E41F4) = (uint16_t)(_seg_es); /* 0x100A540F: mov word ptr [0x100e41f4], es */
    MEM16(0x100E41F0) = (uint16_t)(_seg_fs); /* 0x100A5415: mov word ptr [0x100e41f0], fs */
    MEM16(0x100E41EC) = (uint16_t)(_seg_gs); /* 0x100A541B: mov word ptr [0x100e41ec], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x100A5421: pushfd  */
    POP32(esp, MEM32(0x100E4220)); /* 0x100A5422: pop dword ptr [0x100e4220] */
    eax = MEM32(ebp); /* 0x100A5428: mov eax, dword ptr [ebp] */
    MEM32(0x100E4214) = eax; /* 0x100A542B: mov dword ptr [0x100e4214], eax */
    eax = MEM32(ebp + 0x4); /* 0x100A5430: mov eax, dword ptr [ebp + 4] */
    MEM32(0x100E4218) = eax; /* 0x100A5433: mov dword ptr [0x100e4218], eax */
    eax = ebp + 0x8; /* 0x100A5438: lea eax, [ebp + 8] */
    MEM32(0x100E4224) = eax; /* 0x100A543B: mov dword ptr [0x100e4224], eax */
    eax = MEM32(ebp + (-0x324)); /* 0x100A5440: mov eax, dword ptr [ebp - 0x324] */
    MEM32(0x100E4160) = 0x00010001u; /* 0x100A5446: mov dword ptr [0x100e4160], 0x10001 */
    eax = MEM32(0x100E4218); /* 0x100A5450: mov eax, dword ptr [0x100e4218] */
    MEM32(0x100E411C) = eax; /* 0x100A5455: mov dword ptr [0x100e411c], eax */
    MEM32(0x100E4110) = 0xC0000409u; /* 0x100A545A: mov dword ptr [0x100e4110], 0xc0000409 */
    MEM32(0x100E4114) = 1; /* 0x100A5464: mov dword ptr [0x100e4114], 1 */
    MEM32(0x100E4120) = 1; /* 0x100A546E: mov dword ptr [0x100e4120], 1 */
    PUSH32(esp, 4); /* 0x100A5478: push 4 */
    eax = POP32_VAL(esp); /* 0x100A547A: pop eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0); /* 0x100A547B: imul eax, eax, 0 */
    MEM32(eax + 0x100E4124) = 2; /* 0x100A547E: mov dword ptr [eax + 0x100e4124], 2 */
    PUSH32(esp, 4); /* 0x100A5488: push 4 */
    eax = POP32_VAL(esp); /* 0x100A548A: pop eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0); /* 0x100A548B: imul eax, eax, 0 */
    ecx = MEM32(0x100DF7B8); /* 0x100A548E: mov ecx, dword ptr [0x100df7b8] */
    MEM32(ebp + eax + (-0x8)) = ecx; /* 0x100A5494: mov dword ptr [ebp + eax - 8], ecx */
    PUSH32(esp, 4); /* 0x100A5498: push 4 */
    eax = POP32_VAL(esp); /* 0x100A549A: pop eax */
    if (0u) _cf = _cf; /* 0x100A549B: shl eax, 0 */
    if (0u) { _flag_a = recomp_flags_pack((eax << 0u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 0u; /* 0x100A549B: shl eax, 0 */
    ecx = MEM32(0x100E0CB0); /* 0x100A549E: mov ecx, dword ptr [0x100e0cb0] */
    MEM32(ebp + eax + (-0x8)) = ecx; /* 0x100A54A4: mov dword ptr [ebp + eax - 8], ecx */
    PUSH32(esp, 0x100627ACu); /* 0x100A54A8: push 0x100627ac */
    RECOMP_CALL(sub_100A5384); /* 0x100A54AD: call 0x100a5384 */
    RECOMP_FLAGS_IN();
    goto L_100A54B4; /* 0x100A54B2: jmp 0x100a54b4 */
L_100A54B4:
    esp = ebp; /* 0x100A54B4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A54B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A54B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A54B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A54B8u);

L_100A54B8:
    PUSH32(esp, ebp); /* 0x100A54B8: push ebp */
    ebp = esp; /* 0x100A54B9: mov ebp, esp */
    PUSH32(esp, 8); /* 0x100A54BB: push 8 */
    RECOMP_CALL(sub_100A54C6); /* 0x100A54BD: call 0x100a54c6 */
    RECOMP_FLAGS_IN();
    goto L_100A54C4; /* 0x100A54C2: jmp 0x100a54c4 */
L_100A54C4:
    ebp = POP32_VAL(esp); /* 0x100A54C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A54C5: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A54C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A54C6u);

L_100A54C6:
    PUSH32(esp, ebp); /* 0x100A54C6: push ebp */
    ebp = esp; /* 0x100A54C7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x31Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x31Cu; /* 0x100A54C9: sub esp, 0x31c */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x17u); /* 0x100A54CF: push 0x17 */
    RECOMP_CALL(sub_1002DB46); /* 0x100A54D1: call 0x1002db46 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A54D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A54DF; /* 0x100A54D8: je 0x100a54df */
L_100A54DA:
    ecx = MEM32(ebp + 0x8); /* 0x100A54DA: mov ecx, dword ptr [ebp + 8] */
    void_lift_trap(0x100A54DDu, "int 0x29");
L_100A54DF:
    MEM32(0x100E4210) = eax; /* 0x100A54DF: mov dword ptr [0x100e4210], eax */
    MEM32(0x100E420C) = ecx; /* 0x100A54E4: mov dword ptr [0x100e420c], ecx */
    MEM32(0x100E4208) = edx; /* 0x100A54EA: mov dword ptr [0x100e4208], edx */
    MEM32(0x100E4204) = ebx; /* 0x100A54F0: mov dword ptr [0x100e4204], ebx */
    MEM32(0x100E4200) = esi; /* 0x100A54F6: mov dword ptr [0x100e4200], esi */
    MEM32(0x100E41FC) = edi; /* 0x100A54FC: mov dword ptr [0x100e41fc], edi */
    MEM16(0x100E4228) = (uint16_t)(_seg_ss); /* 0x100A5502: mov word ptr [0x100e4228], ss */
    MEM16(0x100E421C) = (uint16_t)(_seg_cs); /* 0x100A5508: mov word ptr [0x100e421c], cs */
    MEM16(0x100E41F8) = (uint16_t)(_seg_ds); /* 0x100A550E: mov word ptr [0x100e41f8], ds */
    MEM16(0x100E41F4) = (uint16_t)(_seg_es); /* 0x100A5514: mov word ptr [0x100e41f4], es */
    MEM16(0x100E41F0) = (uint16_t)(_seg_fs); /* 0x100A551A: mov word ptr [0x100e41f0], fs */
    MEM16(0x100E41EC) = (uint16_t)(_seg_gs); /* 0x100A5520: mov word ptr [0x100e41ec], gs */
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x100A5526: pushfd  */
    POP32(esp, MEM32(0x100E4220)); /* 0x100A5527: pop dword ptr [0x100e4220] */
    eax = MEM32(ebp); /* 0x100A552D: mov eax, dword ptr [ebp] */
    MEM32(0x100E4214) = eax; /* 0x100A5530: mov dword ptr [0x100e4214], eax */
    eax = MEM32(ebp + 0x4); /* 0x100A5535: mov eax, dword ptr [ebp + 4] */
    MEM32(0x100E4218) = eax; /* 0x100A5538: mov dword ptr [0x100e4218], eax */
    eax = ebp + 0x8; /* 0x100A553D: lea eax, [ebp + 8] */
    MEM32(0x100E4224) = eax; /* 0x100A5540: mov dword ptr [0x100e4224], eax */
    eax = MEM32(ebp + (-0x31C)); /* 0x100A5545: mov eax, dword ptr [ebp - 0x31c] */
    eax = MEM32(0x100E4218); /* 0x100A554B: mov eax, dword ptr [0x100e4218] */
    MEM32(0x100E411C) = eax; /* 0x100A5550: mov dword ptr [0x100e411c], eax */
    MEM32(0x100E4110) = 0xC0000409u; /* 0x100A5555: mov dword ptr [0x100e4110], 0xc0000409 */
    MEM32(0x100E4114) = 1; /* 0x100A555F: mov dword ptr [0x100e4114], 1 */
    MEM32(0x100E4120) = 1; /* 0x100A5569: mov dword ptr [0x100e4120], 1 */
    PUSH32(esp, 4); /* 0x100A5573: push 4 */
    eax = POP32_VAL(esp); /* 0x100A5575: pop eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0); /* 0x100A5576: imul eax, eax, 0 */
    ecx = MEM32(ebp + 0x8); /* 0x100A5579: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x100E4124) = ecx; /* 0x100A557C: mov dword ptr [eax + 0x100e4124], ecx */
    PUSH32(esp, 0x100627ACu); /* 0x100A5582: push 0x100627ac */
    RECOMP_CALL(sub_100A5384); /* 0x100A5587: call 0x100a5384 */
    RECOMP_FLAGS_IN();
    goto L_100A558E; /* 0x100A558C: jmp 0x100a558e */
L_100A558E:
    esp = ebp; /* 0x100A558E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A5590: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A5591: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A5592(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A5592u);

L_100A5592:
    RECOMP_CALL(sub_1000F750); /* 0x100A5592: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x100A5597: mov edx, eax */
    eax = MEM32(edx + 0x6C); /* 0x100A5599: mov eax, dword ptr [edx + 0x6c] */
    /* cmp eax, MEM32(0x100DFA84) */ /* 0x100A559C: cmp eax, dword ptr [0x100dfa84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DFA84));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A55B4; /* 0x100A55A2: je 0x100a55b4 */
L_100A55A4:
    ecx = MEM32(0x100DFDD4); /* 0x100A55A4: mov ecx, dword ptr [0x100dfdd4] */
    /* test MEM32(edx + 0x70), ecx */ /* 0x100A55AA: test dword ptr [edx + 0x70], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x70)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A55B4; /* 0x100A55AD: jne 0x100a55b4 */
L_100A55AF:
    RECOMP_CALL(sub_10012C8B); /* 0x100A55AF: call 0x10012c8b */
    RECOMP_FLAGS_IN();
L_100A55B4:
    eax = MEM32(eax + 0x8); /* 0x100A55B4: mov eax, dword ptr [eax + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A55B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A55B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A55B8u);

    goto L_100A55B8;
L_10022A43:
    RECOMP_CALL(sub_1000F750); /* 0x10022A43: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x10022A48: mov edx, eax */
    eax = MEM32(edx + 0x6C); /* 0x10022A4A: mov eax, dword ptr [edx + 0x6c] */
    /* cmp eax, MEM32(0x100DFA84) */ /* 0x10022A4D: cmp eax, dword ptr [0x100dfa84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DFA84));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005F5F0; /* 0x10022A53: jne 0x1005f5f0 */
L_10022A59:
    eax = MEM32(eax + 0x74); /* 0x10022A59: mov eax, dword ptr [eax + 0x74] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10022A5C: ret  */
L_1005F5F0:
    ecx = MEM32(0x100DFDD4); /* 0x1005F5F0: mov ecx, dword ptr [0x100dfdd4] */
    /* test MEM32(edx + 0x70), ecx */ /* 0x1005F5F6: test dword ptr [edx + 0x70], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x70)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10022A59; /* 0x1005F5F9: jne 0x10022a59 */
L_1005F5FF:
    RECOMP_CALL(sub_10012C8B); /* 0x1005F5FF: call 0x10012c8b */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10022A59; /* 0x1005F604: jmp 0x10022a59 */
L_100A55B8:
    PUSH32(esp, ebp); /* 0x100A55B8: push ebp */
    ebp = esp; /* 0x100A55B9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100A55BB: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100A55BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A55C8; /* 0x100A55C0: jne 0x100a55c8 */
L_100A55C2:
    ebp = POP32_VAL(esp); /* 0x100A55C2: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10022A43; /* 0x100A55C3: jmp 0x10022a43 */
L_100A55C8:
    eax = MEM32(eax); /* 0x100A55C8: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x74); /* 0x100A55CA: mov eax, dword ptr [eax + 0x74] */
    ebp = POP32_VAL(esp); /* 0x100A55CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A55CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A55CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A55CFu);

L_100A55CF:
    eax = MEM32(0x100DF748); /* 0x100A55CF: mov eax, dword ptr [0x100df748] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A55D4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A55D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A55D5u);

L_100A55D5:
    eax = 0x100DF744u; /* 0x100A55D5: mov eax, 0x100df744 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A55DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A55DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A55DBu);

    goto L_100A55DB;
L_100293A5:
    PUSH32(esp, ebp); /* 0x100293A5: push ebp */
    ebp = esp; /* 0x100293A6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10Cu; /* 0x100293A8: sub esp, 0x10c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100293AE: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100293B3: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100293B5: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x100293B8: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100293BB: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100293BC: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 5 */ /* 0x100293BF: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10029403; /* 0x100293C2: ja 0x10029403 */
L_100293C4:
    /* test eax, eax */ /* 0x100293C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029403; /* 0x100293C6: je 0x10029403 */
L_100293C8:
    PUSH32(esp, 0x83u); /* 0x100293C8: push 0x83 */
    ecx = ebp + (-0x10C); /* 0x100293CD: lea ecx, [ebp - 0x10c] */
    PUSH32(esp, ecx); /* 0x100293D3: push ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100293D4: push -1 */
    PUSH32(esp, eax); /* 0x100293D6: push eax */
    PUSH32(esp, 0); /* 0x100293D7: push 0 */
    PUSH32(esp, 0); /* 0x100293D9: push 0 */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x100293DB: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100293E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10029403; /* 0x100293E3: je 0x10029403 */
L_100293E5:
    eax = ebp + (-0x10C); /* 0x100293E5: lea eax, [ebp - 0x10c] */
    PUSH32(esp, eax); /* 0x100293EB: push eax */
    PUSH32(esp, esi); /* 0x100293EC: push esi */
    RECOMP_CALL(sub_100292FC); /* 0x100293ED: call 0x100292fc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100293F2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100293F3: pop ecx */
L_100293F4:
    ecx = MEM32(ebp + (-0x4)); /* 0x100293F4: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100293F7: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100293F9: pop esi */
    RECOMP_CALL(sub_1000F7C6); /* 0x100293FA: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100293FF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10029401: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10029402: ret  */
L_10029403:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10029403: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100293F4; /* 0x10029405: jmp 0x100293f4 */
L_100A55DB:
    PUSH32(esp, ebp); /* 0x100A55DB: push ebp */
    ebp = esp; /* 0x100A55DC: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x100A55DE: pop ebp */
    RECOMP_BACKEDGE();
    goto L_100293A5; /* 0x100A55DF: jmp 0x100293a5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A55E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A55E4u);

L_100A55E4:
    goto L_100A5645; /* 0x100A55E4: jmp 0x100a5645 */
L_100A5645:
    PUSH32(esp, 8); /* 0x100A5645: push 8 */
    PUSH32(esp, 0x100A5700u); /* 0x100A5647: push 0x100a5700 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A564C: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x100A5651: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100A5654: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A56DE; /* 0x100A5656: je 0x100a56de */
L_100A565C:
    PUSH32(esp, 0xDu); /* 0x100A565C: push 0xd */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A565E: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5663: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A5664: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x4); /* 0x100A5668: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x100A566B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A568A; /* 0x100A566D: je 0x100a568a */
L_100A566F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A566F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x100A5672: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A568A; /* 0x100A5676: jne 0x100a568a */
L_100A5678:
    /* cmp MEM32(esi + 0x4), 0x100DFA88u */ /* 0x100A5678: cmp dword ptr [esi + 4], 0x100dfa88 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x100DFA88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A568A; /* 0x100A567F: je 0x100a568a */
L_100A5681:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x100A5681: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A5684: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5689: pop ecx */
L_100A568A:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A568A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A56E7); /* 0x100A5691: call 0x100a56e7 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi), 0 */ /* 0x100A5696: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A56D7; /* 0x100A5699: je 0x100a56d7 */
L_100A569B:
    PUSH32(esp, 0xCu); /* 0x100A569B: push 0xc */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A569D: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A56A2: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x100A56A3: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, MEM32(esi)); /* 0x100A56AA: push dword ptr [esi] */
    RECOMP_CALL(sub_10010E0A); /* 0x100A56AC: call 0x10010e0a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A56B1: pop ecx */
    eax = MEM32(esi); /* 0x100A56B2: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x100A56B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A56CB; /* 0x100A56B6: je 0x100a56cb */
L_100A56B8:
    /* cmp MEM32(eax), 0 */ /* 0x100A56B8: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A56CB; /* 0x100A56BB: jne 0x100a56cb */
L_100A56BD:
    /* cmp eax, 0x100DF7C8u */ /* 0x100A56BD: cmp eax, 0x100df7c8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100DF7C8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A56CB; /* 0x100A56C2: je 0x100a56cb */
L_100A56C4:
    PUSH32(esp, eax); /* 0x100A56C4: push eax */
    RECOMP_CALL(sub_1001448C); /* 0x100A56C5: call 0x1001448c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A56CA: pop ecx */
L_100A56CB:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A56CB: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A56F3); /* 0x100A56D2: call 0x100a56f3 */
    RECOMP_FLAGS_IN();
L_100A56D7:
    PUSH32(esp, esi); /* 0x100A56D7: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A56D8: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A56DD: pop ecx */
L_100A56DE:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A56DE: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A56E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A55E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A55E6u);

L_100A55E6:
    goto L_100A5728; /* 0x100A55E6: jmp 0x100a5728 */
L_100A5728:
    PUSH32(esp, 0xCu); /* 0x100A5728: push 0xc */
    PUSH32(esp, 0x100A57D8u); /* 0x100A572A: push 0x100a57d8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A572F: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000F750); /* 0x100A5734: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100A5739: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A573B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A573D: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x100A573E: push edi */
    PUSH32(esp, 8); /* 0x100A573F: push 8 */
    RECOMP_CALL(sub_10011208); /* 0x100A5741: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5746: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A5747: pop ecx */
    esi = eax; /* 0x100A5748: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A574A: mov dword ptr [ebp - 0x1c], esi */
    /* test esi, esi */ /* 0x100A574D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A5760; /* 0x100A574F: jne 0x100a5760 */
L_100A5751:
    RECOMP_CALL(sub_1001177D); /* 0x100A5751: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x100A5756: mov dword ptr [eax], 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A575C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A57B6; /* 0x100A575E: jmp 0x100a57b6 */
L_100A5760:
    RECOMP_CALL(sub_10012C8B); /* 0x100A5760: call 0x10012c8b */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1001F81C); /* 0x100A5765: call 0x1001f81c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x6C); /* 0x100A576A: mov eax, dword ptr [ebx + 0x6c] */
    MEM32(esi) = eax; /* 0x100A576D: mov dword ptr [esi], eax */
    eax = MEM32(ebx + 0x68); /* 0x100A576F: mov eax, dword ptr [ebx + 0x68] */
    MEM32(esi + 0x4) = eax; /* 0x100A5772: mov dword ptr [esi + 4], eax */
    PUSH32(esp, 0xCu); /* 0x100A5775: push 0xc */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A5777: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A577C: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A577D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(esi)); /* 0x100A5781: push dword ptr [esi] */
    RECOMP_CALL(sub_10011121); /* 0x100A5783: call 0x10011121 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5788: pop ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A5789: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A57C2); /* 0x100A5790: call 0x100a57c2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xDu); /* 0x100A5795: push 0xd */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A5797: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A579C: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x100A579D: mov dword ptr [ebp - 4], edi */
    eax = MEM32(esi + 0x4); /* 0x100A57A0: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edi; edi = _old; MEM32(eax) = _sum; } /* 0x100A57A3: lock xadd dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A57A7: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A57A8: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A57CE); /* 0x100A57AF: call 0x100a57ce */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A57B4: mov eax, esi */
L_100A57B6:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A57B6: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A57BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A55EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A55EBu);

L_100A55EB:
    PUSH32(esp, ebp); /* 0x100A55EB: push ebp */
    ebp = esp; /* 0x100A55EC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100A55EE: push esi */
    RECOMP_CALL(sub_1000F750); /* 0x100A55EF: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x100A55F4: mov edx, dword ptr [ebp + 8] */
    esi = eax; /* 0x100A55F7: mov esi, eax */
    PUSH32(esp, 0); /* 0x100A55F9: push 0 */
    eax = POP32_VAL(esp); /* 0x100A55FB: pop eax */
    ecx = MEM32(esi + 0x70); /* 0x100A55FC: mov ecx, dword ptr [esi + 0x70] */
    /* test LO8(ecx), 2 */ /* 0x100A55FF: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A5602: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A5605: inc eax */
    _flag_k = FK_INC;
    /* cmp edx, 0xFFFFFFFFu */ /* 0x100A5606: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A563B; /* 0x100A5609: je 0x100a563b */
L_100A560B:
    /* test edx, edx */ /* 0x100A560B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A5642; /* 0x100A560D: je 0x100a5642 */
L_100A560F:
    /* cmp edx, 1 */ /* 0x100A560F: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A5633; /* 0x100A5612: je 0x100a5633 */
L_100A5614:
    /* cmp edx, 2 */ /* 0x100A5614: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A562E; /* 0x100A5617: je 0x100a562e */
L_100A5619:
    RECOMP_CALL(sub_1001177D); /* 0x100A5619: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A561E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A5624: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A5629: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A5642; /* 0x100A562C: jmp 0x100a5642 */
L_100A562E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ecx = ecx & 0xFFFFFFFDu; /* 0x100A562E: and ecx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A5636; /* 0x100A5631: jmp 0x100a5636 */
L_100A5633:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x100A5633: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A5636:
    MEM32(esi + 0x70) = ecx; /* 0x100A5636: mov dword ptr [esi + 0x70], ecx */
    goto L_100A5642; /* 0x100A5639: jmp 0x100a5642 */
L_100A563B:
    _flag_a = (uint32_t)((MEM32(0x100DFDD4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(0x100DFDD4) | 0xFFFFFFFFu));
    MEM32(0x100DFDD4) = MEM32(0x100DFDD4) | 0xFFFFFFFFu; /* 0x100A563B: or dword ptr [0x100dfdd4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A5642:
    esi = POP32_VAL(esp); /* 0x100A5642: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A5643: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A5644: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A5645(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A5645u);

L_100A5645:
    PUSH32(esp, 8); /* 0x100A5645: push 8 */
    PUSH32(esp, 0x100A5700u); /* 0x100A5647: push 0x100a5700 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A564C: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x100A5651: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100A5654: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A56DE; /* 0x100A5656: je 0x100a56de */
L_100A565C:
    PUSH32(esp, 0xDu); /* 0x100A565C: push 0xd */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A565E: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5663: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A5664: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x4); /* 0x100A5668: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x100A566B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A568A; /* 0x100A566D: je 0x100a568a */
L_100A566F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A566F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x100A5672: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A568A; /* 0x100A5676: jne 0x100a568a */
L_100A5678:
    /* cmp MEM32(esi + 0x4), 0x100DFA88u */ /* 0x100A5678: cmp dword ptr [esi + 4], 0x100dfa88 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x100DFA88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A568A; /* 0x100A567F: je 0x100a568a */
L_100A5681:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x100A5681: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A5684: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5689: pop ecx */
L_100A568A:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A568A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A56E7); /* 0x100A5691: call 0x100a56e7 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi), 0 */ /* 0x100A5696: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A56D7; /* 0x100A5699: je 0x100a56d7 */
L_100A569B:
    PUSH32(esp, 0xCu); /* 0x100A569B: push 0xc */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A569D: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A56A2: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x100A56A3: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, MEM32(esi)); /* 0x100A56AA: push dword ptr [esi] */
    RECOMP_CALL(sub_10010E0A); /* 0x100A56AC: call 0x10010e0a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A56B1: pop ecx */
    eax = MEM32(esi); /* 0x100A56B2: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x100A56B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A56CB; /* 0x100A56B6: je 0x100a56cb */
L_100A56B8:
    /* cmp MEM32(eax), 0 */ /* 0x100A56B8: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A56CB; /* 0x100A56BB: jne 0x100a56cb */
L_100A56BD:
    /* cmp eax, 0x100DF7C8u */ /* 0x100A56BD: cmp eax, 0x100df7c8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100DF7C8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A56CB; /* 0x100A56C2: je 0x100a56cb */
L_100A56C4:
    PUSH32(esp, eax); /* 0x100A56C4: push eax */
    RECOMP_CALL(sub_1001448C); /* 0x100A56C5: call 0x1001448c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A56CA: pop ecx */
L_100A56CB:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A56CB: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A56F3); /* 0x100A56D2: call 0x100a56f3 */
    RECOMP_FLAGS_IN();
L_100A56D7:
    PUSH32(esp, esi); /* 0x100A56D7: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A56D8: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A56DD: pop ecx */
L_100A56DE:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A56DE: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A56E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A56E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A56E7u);

L_100A56E7:
    PUSH32(esp, 0xDu); /* 0x100A56E7: push 0xd */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A56E9: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A56EE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A56EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A56F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A56F3u);

L_100A56F3:
    PUSH32(esp, 0xCu); /* 0x100A56F3: push 0xc */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A56F5: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A56FA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A56FB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A5728(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A5728u);

L_100A5728:
    PUSH32(esp, 0xCu); /* 0x100A5728: push 0xc */
    PUSH32(esp, 0x100A57D8u); /* 0x100A572A: push 0x100a57d8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A572F: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1000F750); /* 0x100A5734: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100A5739: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A573B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A573D: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x100A573E: push edi */
    PUSH32(esp, 8); /* 0x100A573F: push 8 */
    RECOMP_CALL(sub_10011208); /* 0x100A5741: call 0x10011208 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5746: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A5747: pop ecx */
    esi = eax; /* 0x100A5748: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A574A: mov dword ptr [ebp - 0x1c], esi */
    /* test esi, esi */ /* 0x100A574D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A5760; /* 0x100A574F: jne 0x100a5760 */
L_100A5751:
    RECOMP_CALL(sub_1001177D); /* 0x100A5751: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x100A5756: mov dword ptr [eax], 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A575C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A57B6; /* 0x100A575E: jmp 0x100a57b6 */
L_100A5760:
    RECOMP_CALL(sub_10012C8B); /* 0x100A5760: call 0x10012c8b */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1001F81C); /* 0x100A5765: call 0x1001f81c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x6C); /* 0x100A576A: mov eax, dword ptr [ebx + 0x6c] */
    MEM32(esi) = eax; /* 0x100A576D: mov dword ptr [esi], eax */
    eax = MEM32(ebx + 0x68); /* 0x100A576F: mov eax, dword ptr [ebx + 0x68] */
    MEM32(esi + 0x4) = eax; /* 0x100A5772: mov dword ptr [esi + 4], eax */
    PUSH32(esp, 0xCu); /* 0x100A5775: push 0xc */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A5777: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A577C: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A577D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(esi)); /* 0x100A5781: push dword ptr [esi] */
    RECOMP_CALL(sub_10011121); /* 0x100A5783: call 0x10011121 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5788: pop ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A5789: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A57C2); /* 0x100A5790: call 0x100a57c2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xDu); /* 0x100A5795: push 0xd */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A5797: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A579C: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x100A579D: mov dword ptr [ebp - 4], edi */
    eax = MEM32(esi + 0x4); /* 0x100A57A0: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edi; edi = _old; MEM32(eax) = _sum; } /* 0x100A57A3: lock xadd dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A57A7: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A57A8: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A57CE); /* 0x100A57AF: call 0x100a57ce */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A57B4: mov eax, esi */
L_100A57B6:
    RECOMP_CALL(sub_1000EDC3); /* 0x100A57B6: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A57BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A57C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A57C2u);

L_100A57C2:
    PUSH32(esp, 0xCu); /* 0x100A57C2: push 0xc */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A57C4: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A57C9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A57CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A57CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A57CEu);

L_100A57CE:
    PUSH32(esp, 0xDu); /* 0x100A57CE: push 0xd */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A57D0: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A57D5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A57D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A5800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A5800u);

L_100A5800:
    PUSH32(esp, ebp); /* 0x100A5800: push ebp */
    ebp = esp; /* 0x100A5801: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100A5803: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A5804: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0xE3u; /* 0x100A5806: mov esi, 0xe3 */
L_100A580B:
    eax = esi + ecx; /* 0x100A580B: lea eax, [esi + ecx] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100A580E: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x100A580F: sub eax, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x100A5811: mov edx, dword ptr [ebp + 8] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x100A5814: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax * 8 + 0x1000FCB0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(eax * 8 + 0x1000FCB0); /* 0x100A5816: sub edx, dword ptr [eax*8 + 0x1000fcb0] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A5832; /* 0x100A581D: je 0x100a5832 */
L_100A581F:
    /* test edx, edx */ /* 0x100A581F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A5828; /* 0x100A5821: jns 0x100a5828 */
L_100A5823:
    esi = eax + (-0x1); /* 0x100A5823: lea esi, [eax - 1] */
    goto L_100A582B; /* 0x100A5826: jmp 0x100a582b */
L_100A5828:
    ecx = eax + 0x1; /* 0x100A5828: lea ecx, [eax + 1] */
L_100A582B:
    /* cmp ecx, esi */ /* 0x100A582B: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_100A580B; /* 0x100A582D: jle 0x100a580b */
L_100A582F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A582F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A5832:
    esi = POP32_VAL(esp); /* 0x100A5832: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A5833: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A5834: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A5835(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A5835u);

L_100A5835:
    PUSH32(esp, ebp); /* 0x100A5835: push ebp */
    ebp = esp; /* 0x100A5836: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100A5838: push ebx */
    PUSH32(esp, esi); /* 0x100A5839: push esi */
    PUSH32(esp, edi); /* 0x100A583A: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A583B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 0xE3u; /* 0x100A583D: mov ebx, 0xe3 */
L_100A5842:
    eax = ebx + edi; /* 0x100A5842: lea eax, [ebx + edi] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100A5845: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x100A5846: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax; /* 0x100A5848: mov esi, eax */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x100A584A: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    PUSH32(esp, 0x55u); /* 0x100A584C: push 0x55 */
    PUSH32(esp, MEM32(esi * 8 + 0x100A5888)); /* 0x100A584E: push dword ptr [esi*8 + 0x100a5888] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A5855: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A610B); /* 0x100A5858: call 0x100a610b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A585D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A5860: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A5877; /* 0x100A5862: je 0x100a5877 */
L_100A5864:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A586B; /* 0x100A5864: jns 0x100a586b */
L_100A5866:
    ebx = esi + (-0x1); /* 0x100A5866: lea ebx, [esi - 1] */
    goto L_100A586E; /* 0x100A5869: jmp 0x100a586e */
L_100A586B:
    edi = esi + 0x1; /* 0x100A586B: lea edi, [esi + 1] */
L_100A586E:
    /* cmp edi, ebx */ /* 0x100A586E: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_100A5842; /* 0x100A5870: jle 0x100a5842 */
L_100A5872:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A5872: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A587E; /* 0x100A5875: jmp 0x100a587e */
L_100A5877:
    eax = MEM32(esi * 8 + 0x100A588C); /* 0x100A5877: mov eax, dword ptr [esi*8 + 0x100a588c] */
L_100A587E:
    edi = POP32_VAL(esp); /* 0x100A587E: pop edi */
    esi = POP32_VAL(esp); /* 0x100A587F: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A5880: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A5881: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A5882: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A5FA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A5FA8u);

L_100A5FA8:
    PUSH32(esp, ebp); /* 0x100A5FA8: push ebp */
    ebp = esp; /* 0x100A5FA9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100A5FAB: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x100A5FAE: push ebx */
    PUSH32(esp, esi); /* 0x100A5FAF: push esi */
    PUSH32(esp, edi); /* 0x100A5FB0: push edi */
    /* test eax, eax */ /* 0x100A5FB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6010; /* 0x100A5FB3: je 0x100a6010 */
L_100A5FB5:
    /* cmp eax, 0x400u */ /* 0x100A5FB5: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A6010; /* 0x100A5FBA: je 0x100a6010 */
L_100A5FBC:
    /* cmp eax, 0x800u */ /* 0x100A5FBC: cmp eax, 0x800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A6010; /* 0x100A5FC1: je 0x100a6010 */
L_100A5FC3:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100A5FC3: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x10); /* 0x100A5FC7: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A5FD0; /* 0x100A5FCA: jne 0x100a5fd0 */
L_100A5FCC:
    /* test esi, esi */ /* 0x100A5FCC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6010; /* 0x100A5FCE: jg 0x100a6010 */
L_100A5FD0:
    /* test esi, esi */ /* 0x100A5FD0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A6010; /* 0x100A5FD2: js 0x100a6010 */
L_100A5FD4:
    PUSH32(esp, eax); /* 0x100A5FD4: push eax */
    RECOMP_CALL(sub_100A5800); /* 0x100A5FD5: call 0x100a5800 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A5FDA: pop ecx */
    /* test eax, eax */ /* 0x100A5FDB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A6010; /* 0x100A5FDD: js 0x100a6010 */
L_100A5FDF:
    ebx = MEM32(eax * 8 + 0x1000FCB4); /* 0x100A5FDF: mov ebx, dword ptr [eax*8 + 0x1000fcb4] */
    PUSH32(esp, 0x55u); /* 0x100A5FE6: push 0x55 */
    PUSH32(esp, ebx); /* 0x100A5FE8: push ebx */
    RECOMP_CALL(sub_1000F810); /* 0x100A5FE9: call 0x1000f810 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A5FEE: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x100A5FF0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A5FF1: pop ecx */
    /* test esi, esi */ /* 0x100A5FF2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A600B; /* 0x100A5FF4: jle 0x100a600b */
L_100A5FF6:
    /* cmp edi, esi */ /* 0x100A5FF6: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100A6010; /* 0x100A5FF8: jge 0x100a6010 */
L_100A5FFA:
    PUSH32(esp, ebx); /* 0x100A5FFA: push ebx */
    PUSH32(esp, esi); /* 0x100A5FFB: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A5FFC: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10011693); /* 0x100A5FFF: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6004: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6007: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6017; /* 0x100A6009: jne 0x100a6017 */
L_100A600B:
    eax = edi + 0x1; /* 0x100A600B: lea eax, [edi + 1] */
    goto L_100A6012; /* 0x100A600E: jmp 0x100a6012 */
L_100A6010:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6010: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A6012:
    edi = POP32_VAL(esp); /* 0x100A6012: pop edi */
    esi = POP32_VAL(esp); /* 0x100A6013: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A6014: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6015: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6016: ret  */
L_100A6017:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6017: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A6019: push eax */
    PUSH32(esp, eax); /* 0x100A601A: push eax */
    PUSH32(esp, eax); /* 0x100A601B: push eax */
    PUSH32(esp, eax); /* 0x100A601C: push eax */
    PUSH32(esp, eax); /* 0x100A601D: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x100A601E: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A6023u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A6024(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6024u);

L_100A6024:
    PUSH32(esp, ebp); /* 0x100A6024: push ebp */
    ebp = esp; /* 0x100A6025: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x100A6027: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A604A; /* 0x100A602B: je 0x100a604a */
L_100A602D:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A602D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A5835); /* 0x100A6030: call 0x100a5835 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6035: pop ecx */
    /* test eax, eax */ /* 0x100A6036: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A604A; /* 0x100A6038: js 0x100a604a */
L_100A603A:
    /* cmp eax, 0xE4u */ /* 0x100A603A: cmp eax, 0xe4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xE4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A604A; /* 0x100A603F: jae 0x100a604a */
L_100A6041:
    eax = MEM32(eax * 8 + 0x1000FCB0); /* 0x100A6041: mov eax, dword ptr [eax*8 + 0x1000fcb0] */
    ebp = POP32_VAL(esp); /* 0x100A6048: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6049: ret  */
L_100A604A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A604A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100A604C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A604D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A604E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A604Eu);

L_100A604E:
    PUSH32(esp, ebp); /* 0x100A604E: push ebp */
    ebp = esp; /* 0x100A604F: mov ebp, esp */
    PUSH32(esp, 0); /* 0x100A6051: push 0 */
    PUSH32(esp, 0); /* 0x100A6053: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A6055: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E4430)); /* 0x100A6058: call dword ptr [0x100e4430] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A605E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100A605F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100A6062(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6062u);

L_100A6062:
    PUSH32(esp, ebp); /* 0x100A6062: push ebp */
    ebp = esp; /* 0x100A6063: mov ebp, esp */
    eax = MEM32(0x100DFA5C); /* 0x100A6065: mov eax, dword ptr [0x100dfa5c] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x100A606A: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A608A; /* 0x100A6070: je 0x100a608a */
L_100A6072:
    PUSH32(esp, 0); /* 0x100A6072: push 0 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100A6074: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100A6077: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A607A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A607D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A6080: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A6083: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x100A6086: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A6088: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6089: ret  */
L_100A608A:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100A608A: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100A608D: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A6090: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A6093: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A6096: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A6099: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A6024); /* 0x100A609C: call 0x100a6024 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A60A1: pop ecx */
    PUSH32(esp, eax); /* 0x100A60A2: push eax */
    RECOMP_ICALL(MEM32(0x100E5294)); /* 0x100A60A3: call dword ptr [0x100e5294] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A60A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A60AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A60AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A60ABu);

L_100A60AB:
    PUSH32(esp, ebp); /* 0x100A60AB: push ebp */
    ebp = esp; /* 0x100A60AC: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100A60AE: push dword ptr [ebp + 0x1c] */
    eax = MEM32(0x100DFA64); /* 0x100A60B1: mov eax, dword ptr [0x100dfa64] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x100A60B6: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100A60BC: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A60BF: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A60C2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A60C5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A60C8: push dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A60D1; /* 0x100A60CB: je 0x100a60d1 */
L_100A60CD:
    RECOMP_ICALL(eax); /* 0x100A60CD: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A60CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A60D0: ret  */
L_100A60D1:
    RECOMP_CALL(sub_100A6024); /* 0x100A60D1: call 0x100a6024 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A60D6: pop ecx */
    PUSH32(esp, eax); /* 0x100A60D7: push eax */
    RECOMP_ICALL(MEM32(0x100E5298)); /* 0x100A60D8: call dword ptr [0x100e5298] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A60DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A60DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A60E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A60E0u);

L_100A60E0:
    PUSH32(esp, ebp); /* 0x100A60E0: push ebp */
    ebp = esp; /* 0x100A60E1: mov ebp, esp */
    eax = MEM32(0x100DFA6C); /* 0x100A60E3: mov eax, dword ptr [0x100dfa6c] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x100A60E8: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A60F7; /* 0x100A60EE: je 0x100a60f7 */
L_100A60F0:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A60F0: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x100A60F3: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A60F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A60F6: ret  */
L_100A60F7:
    PUSH32(esp, 1); /* 0x100A60F7: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A60F9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A6024); /* 0x100A60FC: call 0x100a6024 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6101: pop ecx */
    PUSH32(esp, eax); /* 0x100A6102: push eax */
    RECOMP_ICALL(MEM32(0x100E52A8)); /* 0x100A6103: call dword ptr [0x100e52a8] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100A6109: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A610A: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A610B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A610Bu);

L_100A610B:
    PUSH32(esp, ebp); /* 0x100A610B: push ebp */
    ebp = esp; /* 0x100A610C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100A610E: push esi */
    esi = MEM32(ebp + 0x10); /* 0x100A610F: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6112: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x100A6114: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6176; /* 0x100A6116: je 0x100a6176 */
L_100A6118:
    ecx = MEM32(ebp + 0xC); /* 0x100A6118: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x100A611B: push ebx */
    PUSH32(esp, edi); /* 0x100A611C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A611D: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x41u); /* 0x100A6120: push 0x41 */
    ebx = POP32_VAL(esp); /* 0x100A6122: pop ebx */
    PUSH32(esp, 0x5Au); /* 0x100A6123: push 0x5a */
    edx = POP32_VAL(esp); /* 0x100A6125: pop edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x100A6126: sub edi, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edx; /* 0x100A6128: mov dword ptr [ebp + 0x10], edx */
    goto L_100A6130; /* 0x100A612B: jmp 0x100a6130 */
L_100A612D:
    PUSH32(esp, 0x5Au); /* 0x100A612D: push 0x5a */
    edx = POP32_VAL(esp); /* 0x100A612F: pop edx */
L_100A6130:
    eax = (uint32_t)MEM16(edi + ecx); /* 0x100A6130: movzx eax, word ptr [edi + ecx] */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100A6134: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_100A6146; /* 0x100A6137: jb 0x100a6146 */
L_100A6139:
    /* cmp LO16(eax), LO16(edx) */ /* 0x100A6139: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_100A6146; /* 0x100A613C: ja 0x100a6146 */
L_100A613E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x100A613E: add eax, 0x20 */
    _flag_k = FK_ADD;
    edx = (uint32_t)LO16(eax); /* 0x100A6141: movzx edx, ax */
    goto L_100A6148; /* 0x100A6144: jmp 0x100a6148 */
L_100A6146:
    edx = eax; /* 0x100A6146: mov edx, eax */
L_100A6148:
    eax = (uint32_t)MEM16(ecx); /* 0x100A6148: movzx eax, word ptr [ecx] */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x100A614B: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_100A615C; /* 0x100A614E: jb 0x100a615c */
L_100A6150:
    /* cmp LO16(eax), MEM16(ebp + 0x10) */ /* 0x100A6150: cmp ax, word ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0x10)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_100A615C; /* 0x100A6154: ja 0x100a615c */
L_100A6156:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x100A6156: add eax, 0x20 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x100A6159: movzx eax, ax */
L_100A615C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x100A615C: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100A615F: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A616C; /* 0x100A6160: je 0x100a616c */
L_100A6162:
    /* test LO16(edx), LO16(edx) */ /* 0x100A6162: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A616C; /* 0x100A6165: je 0x100a616c */
L_100A6167:
    /* cmp LO16(edx), LO16(eax) */ /* 0x100A6167: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A612D; /* 0x100A616A: je 0x100a612d */
L_100A616C:
    ecx = (uint32_t)LO16(eax); /* 0x100A616C: movzx ecx, ax */
    eax = (uint32_t)LO16(edx); /* 0x100A616F: movzx eax, dx */
    edi = POP32_VAL(esp); /* 0x100A6172: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100A6173: sub eax, ecx */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x100A6175: pop ebx */
L_100A6176:
    esi = POP32_VAL(esp); /* 0x100A6176: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A6177: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6178: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6179(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6179u);

L_100A6179:
    PUSH32(esp, ebp); /* 0x100A6179: push ebp */
    ebp = esp; /* 0x100A617A: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A617C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000EE11); /* 0x100A617F: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6184: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100A6185: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6186: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6187(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6187u);

L_100A6187:
    PUSH32(esp, ebp); /* 0x100A6187: push ebp */
    ebp = esp; /* 0x100A6188: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A618A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10011683); /* 0x100A618D: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6192: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100A6193: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6194: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6195(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6195u);

L_100A6195:
    PUSH32(esp, ebp); /* 0x100A6195: push ebp */
    ebp = esp; /* 0x100A6196: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A6198: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A619B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A61A0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100A61A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A61A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A61A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A61A3u);

L_100A61A3:
    PUSH32(esp, ebp); /* 0x100A61A3: push ebp */
    ebp = esp; /* 0x100A61A4: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A61A6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A61A9: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A61AE: pop ecx */
    ebp = POP32_VAL(esp); /* 0x100A61AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A61B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A61B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A61B1u);

L_100A61B1:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A61B4; /* 0x100A61B1: jne 0x100a61b4 */
L_100A61B3:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A61B3: ret  */
L_100A61B4:
    PUSH32(esp, ebp); /* 0x100A61B4: push ebp */
    ebp = esp; /* 0x100A61B5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0; /* 0x100A61B7: sub esp, 0 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100A61BA: push eax */
    PUSH32(esp, edx); /* 0x100A61BB: push edx */
    PUSH32(esp, ebx); /* 0x100A61BC: push ebx */
    PUSH32(esp, esi); /* 0x100A61BD: push esi */
    PUSH32(esp, edi); /* 0x100A61BE: push edi */
    void_lift_trap(0x100A61BFu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A61B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A61B4u);

L_100A61B4:
    PUSH32(esp, ebp); /* 0x100A61B4: push ebp */
    ebp = esp; /* 0x100A61B5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0; /* 0x100A61B7: sub esp, 0 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100A61BA: push eax */
    PUSH32(esp, edx); /* 0x100A61BB: push edx */
    PUSH32(esp, ebx); /* 0x100A61BC: push ebx */
    PUSH32(esp, esi); /* 0x100A61BD: push esi */
    PUSH32(esp, edi); /* 0x100A61BE: push edi */
    void_lift_trap(0x100A61BFu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A61C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A61C9u);

L_100A61C9:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A61C9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x100DF778) = (uint8_t)(LO8(eax)); /* 0x100A61CC: mov byte ptr [0x100df778], al */
    MEM8(0x100DF779) = (uint8_t)(LO8(eax)); /* 0x100A61D1: mov byte ptr [0x100df779], al */
    MEM8(0x100DF77A) = (uint8_t)(LO8(eax)); /* 0x100A61D6: mov byte ptr [0x100df77a], al */
    MEM8(0x100DF77B) = (uint8_t)(LO8(eax)); /* 0x100A61DB: mov byte ptr [0x100df77b], al */
    MEM8(0x100DF77C) = (uint8_t)(LO8(eax)); /* 0x100A61E0: mov byte ptr [0x100df77c], al */
    MEM8(0x100DF77D) = (uint8_t)(LO8(eax)); /* 0x100A61E5: mov byte ptr [0x100df77d], al */
    MEM8(0x100DF77E) = (uint8_t)(LO8(eax)); /* 0x100A61EA: mov byte ptr [0x100df77e], al */
    MEM8(0x100DF77F) = (uint8_t)(LO8(eax)); /* 0x100A61EF: mov byte ptr [0x100df77f], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A61F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A61F6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A61F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A61F7u);

L_100A61F7:
    eax = 0x100DF56Cu; /* 0x100A61F7: mov eax, 0x100df56c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A61FC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A61FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A61FDu);

L_100A61FD:
    PUSH32(esp, ebp); /* 0x100A61FD: push ebp */
    ebp = esp; /* 0x100A61FE: mov ebp, esp */
    PUSH32(esp, edi); /* 0x100A6200: push edi */
    RECOMP_CALL(sub_1000F720); /* 0x100A6201: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A6206: mov edi, eax */
    /* test edi, edi */ /* 0x100A6208: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A62CD; /* 0x100A620A: je 0x100a62cd */
L_100A6210:
    PUSH32(esp, ebx); /* 0x100A6210: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A6211: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100A6213: push esi */
    esi = 0x86u; /* 0x100A6214: mov esi, 0x86 */
    /* cmp MEM32(edi + 0x28), ebx */ /* 0x100A6219: cmp dword ptr [edi + 0x28], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A6233; /* 0x100A621C: jne 0x100a6233 */
L_100A621E:
    PUSH32(esp, 2); /* 0x100A621E: push 2 */
    PUSH32(esp, esi); /* 0x100A6220: push esi */
    RECOMP_CALL(sub_10011208); /* 0x100A6221: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x28) = eax; /* 0x100A6226: mov dword ptr [edi + 0x28], eax */
    ecx = POP32_VAL(esp); /* 0x100A6229: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A622A: pop ecx */
    /* test eax, eax */ /* 0x100A622B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A62CB; /* 0x100A622D: je 0x100a62cb */
L_100A6233:
    edi = MEM32(edi + 0x28); /* 0x100A6233: mov edi, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6236: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x100A6238: mov word ptr [edi], ax */
    eax = MEM32(ebp + 0x8); /* 0x100A623B: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100A623E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A626E; /* 0x100A6240: je 0x100a626e */
L_100A6242:
    /* cmp MEM16(eax), LO16(ebx) */ /* 0x100A6242: cmp word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A626E; /* 0x100A6245: je 0x100a626e */
L_100A6247:
    PUSH32(esp, 0x82u); /* 0x100A6247: push 0x82 */
    PUSH32(esp, eax); /* 0x100A624C: push eax */
    PUSH32(esp, esi); /* 0x100A624D: push esi */
    PUSH32(esp, edi); /* 0x100A624E: push edi */
    RECOMP_CALL(sub_10020B38); /* 0x100A624F: call 0x10020b38 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A6254: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6257: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A62D0; /* 0x100A6259: jne 0x100a62d0 */
L_100A625B:
    PUSH32(esp, 0x10062FE4u); /* 0x100A625B: push 0x10062fe4 */
    PUSH32(esp, esi); /* 0x100A6260: push esi */
    PUSH32(esp, edi); /* 0x100A6261: push edi */
    RECOMP_CALL(sub_1001212A); /* 0x100A6262: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6267: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A626A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A62D0; /* 0x100A626C: jne 0x100a62d0 */
L_100A626E:
    RECOMP_CALL(sub_1001177D); /* 0x100A626E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax)); /* 0x100A6273: push dword ptr [eax] */
    RECOMP_CALL(sub_100A6394); /* 0x100A6275: call 0x100a6394 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100A627A: push edi */
    esi = eax; /* 0x100A627B: mov esi, eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A627D: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6282: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A6283: pop ecx */
    ecx = 0x84u; /* 0x100A6284: mov ecx, 0x84 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100A6289: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x100A628B: push ecx */
    PUSH32(esp, esi); /* 0x100A628C: push esi */
    PUSH32(esp, edi); /* 0x100A628D: push edi */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A628E: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6293: pop ecx */
    esi = 0x86u; /* 0x100A6294: mov esi, 0x86 */
    ecx = esi; /* 0x100A6299: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100A629B: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x100A629D: push ecx */
    PUSH32(esp, edi); /* 0x100A629E: push edi */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A629F: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A62A4: pop ecx */
    eax = edi + eax * 2; /* 0x100A62A5: lea eax, [edi + eax*2] */
    PUSH32(esp, eax); /* 0x100A62A8: push eax */
    PUSH32(esp, ebx); /* 0x100A62A9: push ebx */
    RECOMP_CALL(sub_10012F50); /* 0x100A62AA: call 0x10012f50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A62AF: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A62B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A62D0; /* 0x100A62B4: jne 0x100a62d0 */
L_100A62B6:
    PUSH32(esp, 0x100A62DCu); /* 0x100A62B6: push 0x100a62dc */
    PUSH32(esp, esi); /* 0x100A62BB: push esi */
    PUSH32(esp, edi); /* 0x100A62BC: push edi */
    RECOMP_CALL(sub_1001212A); /* 0x100A62BD: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A62C2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A62C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A62D0; /* 0x100A62C7: jne 0x100a62d0 */
L_100A62C9:
    eax = edi; /* 0x100A62C9: mov eax, edi */
L_100A62CB:
    esi = POP32_VAL(esp); /* 0x100A62CB: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A62CC: pop ebx */
L_100A62CD:
    edi = POP32_VAL(esp); /* 0x100A62CD: pop edi */
    ebp = POP32_VAL(esp); /* 0x100A62CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A62CF: ret  */
L_100A62D0:
    PUSH32(esp, ebx); /* 0x100A62D0: push ebx */
    PUSH32(esp, ebx); /* 0x100A62D1: push ebx */
    PUSH32(esp, ebx); /* 0x100A62D2: push ebx */
    PUSH32(esp, ebx); /* 0x100A62D3: push ebx */
    PUSH32(esp, ebx); /* 0x100A62D4: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x100A62D5: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A62DAu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A62DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A62DCu);

L_100A62DC:
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x100A62DC: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A62DE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, ebp); /* 0x100A62E0: push ebp */
    ebp = esp; /* 0x100A62E1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100A62E3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A62E4: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100A62E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6301; /* 0x100A62E9: jne 0x100a6301 */
L_100A62EB:
    RECOMP_CALL(sub_1001177D); /* 0x100A62EB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A62F0: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A62F2: pop esi */
    MEM32(eax) = esi; /* 0x100A62F3: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A62F5: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A62FA: mov eax, esi */
    goto L_100A6384; /* 0x100A62FC: jmp 0x100a6384 */
L_100A6301:
    PUSH32(esp, edi); /* 0x100A6301: push edi */
    edi = MEM32(ebp + 0xC); /* 0x100A6302: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x100A6305: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A631C; /* 0x100A6307: jne 0x100a631c */
L_100A6309:
    RECOMP_CALL(sub_1001177D); /* 0x100A6309: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A630E: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A6310: pop esi */
    MEM32(eax) = esi; /* 0x100A6311: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A6313: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A6318: mov eax, esi */
    goto L_100A6383; /* 0x100A631A: jmp 0x100a6383 */
L_100A631C:
    PUSH32(esp, ebx); /* 0x100A631C: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x100A631D: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6320: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x100A6322: mov word ptr [esi], ax */
    /* test ebx, ebx */ /* 0x100A6325: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A635E; /* 0x100A6327: je 0x100a635e */
L_100A6329:
    /* cmp MEM16(ebx), LO16(eax) */ /* 0x100A6329: cmp word ptr [ebx], ax */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A635E; /* 0x100A632C: je 0x100a635e */
L_100A632E:
    PUSH32(esp, ebx); /* 0x100A632E: push ebx */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A632F: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6334: pop ecx */
    ecx = edi + (-0x7); /* 0x100A6335: lea ecx, [edi - 7] */
    /* cmp eax, ecx */ /* 0x100A6338: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A635E; /* 0x100A633A: jae 0x100a635e */
L_100A633C:
    PUSH32(esp, ebx); /* 0x100A633C: push ebx */
    PUSH32(esp, edi); /* 0x100A633D: push edi */
    PUSH32(esp, esi); /* 0x100A633E: push esi */
    RECOMP_CALL(sub_10011693); /* 0x100A633F: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6344: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6347: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6387; /* 0x100A6349: jne 0x100a6387 */
L_100A634B:
    PUSH32(esp, 0x10062FE4u); /* 0x100A634B: push 0x10062fe4 */
    PUSH32(esp, edi); /* 0x100A6350: push edi */
    PUSH32(esp, esi); /* 0x100A6351: push esi */
    RECOMP_CALL(sub_1001212A); /* 0x100A6352: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6357: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A635A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6387; /* 0x100A635C: jne 0x100a6387 */
L_100A635E:
    RECOMP_CALL(sub_1001177D); /* 0x100A635E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax)); /* 0x100A6363: push dword ptr [eax] */
    PUSH32(esp, esi); /* 0x100A6365: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A6366: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A636B: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x100A636C: sub edi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x100A636E: push edi */
    PUSH32(esp, esi); /* 0x100A636F: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A6370: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6375: pop ecx */
    eax = esi + eax * 2; /* 0x100A6376: lea eax, [esi + eax*2] */
    PUSH32(esp, eax); /* 0x100A6379: push eax */
    RECOMP_CALL(sub_100A8638); /* 0x100A637A: call 0x100a8638 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A637F: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x100A6382: pop ebx */
L_100A6383:
    edi = POP32_VAL(esp); /* 0x100A6383: pop edi */
L_100A6384:
    esi = POP32_VAL(esp); /* 0x100A6384: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A6385: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6386: ret  */
L_100A6387:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6387: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A6389: push eax */
    PUSH32(esp, eax); /* 0x100A638A: push eax */
    PUSH32(esp, eax); /* 0x100A638B: push eax */
    PUSH32(esp, eax); /* 0x100A638C: push eax */
    PUSH32(esp, eax); /* 0x100A638D: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x100A638E: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A6393u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A62E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A62E0u);

L_100A62E0:
    PUSH32(esp, ebp); /* 0x100A62E0: push ebp */
    ebp = esp; /* 0x100A62E1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100A62E3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A62E4: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100A62E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6301; /* 0x100A62E9: jne 0x100a6301 */
L_100A62EB:
    RECOMP_CALL(sub_1001177D); /* 0x100A62EB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A62F0: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A62F2: pop esi */
    MEM32(eax) = esi; /* 0x100A62F3: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A62F5: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A62FA: mov eax, esi */
    goto L_100A6384; /* 0x100A62FC: jmp 0x100a6384 */
L_100A6301:
    PUSH32(esp, edi); /* 0x100A6301: push edi */
    edi = MEM32(ebp + 0xC); /* 0x100A6302: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x100A6305: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A631C; /* 0x100A6307: jne 0x100a631c */
L_100A6309:
    RECOMP_CALL(sub_1001177D); /* 0x100A6309: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A630E: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A6310: pop esi */
    MEM32(eax) = esi; /* 0x100A6311: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A6313: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A6318: mov eax, esi */
    goto L_100A6383; /* 0x100A631A: jmp 0x100a6383 */
L_100A631C:
    PUSH32(esp, ebx); /* 0x100A631C: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x100A631D: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6320: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x100A6322: mov word ptr [esi], ax */
    /* test ebx, ebx */ /* 0x100A6325: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A635E; /* 0x100A6327: je 0x100a635e */
L_100A6329:
    /* cmp MEM16(ebx), LO16(eax) */ /* 0x100A6329: cmp word ptr [ebx], ax */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A635E; /* 0x100A632C: je 0x100a635e */
L_100A632E:
    PUSH32(esp, ebx); /* 0x100A632E: push ebx */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A632F: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6334: pop ecx */
    ecx = edi + (-0x7); /* 0x100A6335: lea ecx, [edi - 7] */
    /* cmp eax, ecx */ /* 0x100A6338: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A635E; /* 0x100A633A: jae 0x100a635e */
L_100A633C:
    PUSH32(esp, ebx); /* 0x100A633C: push ebx */
    PUSH32(esp, edi); /* 0x100A633D: push edi */
    PUSH32(esp, esi); /* 0x100A633E: push esi */
    RECOMP_CALL(sub_10011693); /* 0x100A633F: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6344: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6347: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6387; /* 0x100A6349: jne 0x100a6387 */
L_100A634B:
    PUSH32(esp, 0x10062FE4u); /* 0x100A634B: push 0x10062fe4 */
    PUSH32(esp, edi); /* 0x100A6350: push edi */
    PUSH32(esp, esi); /* 0x100A6351: push esi */
    RECOMP_CALL(sub_1001212A); /* 0x100A6352: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6357: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A635A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6387; /* 0x100A635C: jne 0x100a6387 */
L_100A635E:
    RECOMP_CALL(sub_1001177D); /* 0x100A635E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax)); /* 0x100A6363: push dword ptr [eax] */
    PUSH32(esp, esi); /* 0x100A6365: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A6366: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A636B: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x100A636C: sub edi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x100A636E: push edi */
    PUSH32(esp, esi); /* 0x100A636F: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A6370: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6375: pop ecx */
    eax = esi + eax * 2; /* 0x100A6376: lea eax, [esi + eax*2] */
    PUSH32(esp, eax); /* 0x100A6379: push eax */
    RECOMP_CALL(sub_100A8638); /* 0x100A637A: call 0x100a8638 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A637F: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x100A6382: pop ebx */
L_100A6383:
    edi = POP32_VAL(esp); /* 0x100A6383: pop edi */
L_100A6384:
    esi = POP32_VAL(esp); /* 0x100A6384: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A6385: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6386: ret  */
L_100A6387:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6387: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A6389: push eax */
    PUSH32(esp, eax); /* 0x100A638A: push eax */
    PUSH32(esp, eax); /* 0x100A638B: push eax */
    PUSH32(esp, eax); /* 0x100A638C: push eax */
    PUSH32(esp, eax); /* 0x100A638D: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x100A638E: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A6393u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A6394(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6394u);

L_100A6394:
    PUSH32(esp, ebp); /* 0x100A6394: push ebp */
    ebp = esp; /* 0x100A6395: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100A6397: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A6398: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100A639B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A63A8; /* 0x100A639D: js 0x100a63a8 */
L_100A639F:
    RECOMP_CALL(sub_100A61F7); /* 0x100A639F: call 0x100a61f7 */
    RECOMP_FLAGS_IN();
    /* cmp esi, MEM32(eax) */ /* 0x100A63A4: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100A63AF; /* 0x100A63A6: jl 0x100a63af */
L_100A63A8:
    RECOMP_CALL(sub_100A61F7); /* 0x100A63A8: call 0x100a61f7 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x100A63AD: mov esi, dword ptr [eax] */
L_100A63AF:
    RECOMP_CALL(sub_1000E730); /* 0x100A63AF: call 0x1000e730 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + esi * 4); /* 0x100A63B4: mov eax, dword ptr [eax + esi*4] */
    esi = POP32_VAL(esp); /* 0x100A63B7: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A63B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A63B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A63BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A63BAu);

L_100A63BA:
    PUSH32(esp, ebp); /* 0x100A63BA: push ebp */
    ebp = esp; /* 0x100A63BB: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100A63BD: mov eax, dword ptr [ebp + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100A63C0: cdq  */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x100A63C1: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x100A63C3: sub eax, edx */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x100A63C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A63C6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A63C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A63C7u);

L_100A63C7:
    PUSH32(esp, ebp); /* 0x100A63C7: push ebp */
    ebp = esp; /* 0x100A63C8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x35Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x35Cu; /* 0x100A63CA: sub esp, 0x35c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100A63D0: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100A63D5: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100A63D7: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x100A63DA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x100A63DD: push ebx */
    PUSH32(esp, esi); /* 0x100A63DE: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100A63DF: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x100A63E2: push edi */
    PUSH32(esp, 3); /* 0x100A63E3: push 3 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x100A63E5: mov dword ptr [ebp - 0x35c], eax */
    RECOMP_CALL(sub_1007B3D7); /* 0x100A63EB: call 0x1007b3d7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A63F0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A63F2: inc edi */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x100A63F3: pop ecx */
    /* cmp eax, edi */ /* 0x100A63F4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A693E; /* 0x100A63F6: je 0x100a693e */
L_100A63FC:
    PUSH32(esp, 3); /* 0x100A63FC: push 3 */
    RECOMP_CALL(sub_1007B3D7); /* 0x100A63FE: call 0x1007b3d7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6403: pop ecx */
    /* test eax, eax */ /* 0x100A6404: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6414; /* 0x100A6406: jne 0x100a6414 */
L_100A6408:
    /* cmp MEM32(0x100DFDE8), edi */ /* 0x100A6408: cmp dword ptr [0x100dfde8], edi */
    _flag_a = (uint32_t)(MEM32(0x100DFDE8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A693E; /* 0x100A640E: je 0x100a693e */
L_100A6414:
    PUSH32(esp, 0x100A69B4u); /* 0x100A6414: push 0x100a69b4 */
    eax = ebp + (-0x244); /* 0x100A6419: lea eax, [ebp - 0x244] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A641F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x240u); /* 0x100A6421: push 0x240 */
    PUSH32(esp, eax); /* 0x100A6426: push eax */
    MEM32(ebp + (-0x354)) = ebx; /* 0x100A6427: mov dword ptr [ebp - 0x354], ebx */
    RECOMP_CALL(sub_100147CD); /* 0x100A642D: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6432: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6435: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A6437: jne 0x100a694e */
L_100A643D:
    PUSH32(esp, MEM32(0x100E18A8)); /* 0x100A643D: push dword ptr [0x100e18a8] */
    eax = ebp + (-0x244); /* 0x100A6443: lea eax, [ebp - 0x244] */
    PUSH32(esp, 0x240u); /* 0x100A6449: push 0x240 */
    PUSH32(esp, eax); /* 0x100A644E: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A644F: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6454: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6457: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A6459: jne 0x100a694e */
L_100A645F:
    PUSH32(esp, 0x100A69C8u); /* 0x100A645F: push 0x100a69c8 */
    eax = ebp + (-0x244); /* 0x100A6464: lea eax, [ebp - 0x244] */
    PUSH32(esp, 0x240u); /* 0x100A646A: push 0x240 */
    PUSH32(esp, eax); /* 0x100A646F: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A6470: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6475: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6478: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A647A: jne 0x100a694e */
L_100A6480:
    eax = ebp + (-0x354); /* 0x100A6480: lea eax, [ebp - 0x354] */
    PUSH32(esp, eax); /* 0x100A6486: push eax */
    PUSH32(esp, MEM32(ebp + 0x4)); /* 0x100A6487: push dword ptr [ebp + 4] */
    PUSH32(esp, 6); /* 0x100A648A: push 6 */
    RECOMP_ICALL(MEM32(0x100E5018)); /* 0x100A648C: call dword ptr [0x100e5018] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A6492: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A649A; /* 0x100A6494: jne 0x100a649a */
L_100A6496:
    eax = ebx; /* 0x100A6496: mov eax, ebx */
    goto L_100A64AF; /* 0x100A6498: jmp 0x100a64af */
L_100A649A:
    eax = MEM32(ebp + (-0x354)); /* 0x100A649A: mov eax, dword ptr [ebp - 0x354] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x10000000u; /* 0x100A64A0: sub eax, 0x10000000 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A64A5: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A64A7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x354)));
    eax = eax & MEM32(ebp + (-0x354)); /* 0x100A64A9: and eax, dword ptr [ebp - 0x354] */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A64AF:
    PUSH32(esp, 0x104u); /* 0x100A64AF: push 0x104 */
    ecx = ebp + (-0x34C); /* 0x100A64B4: lea ecx, [ebp - 0x34c] */
    MEM32(ebp + (-0x354)) = eax; /* 0x100A64BA: mov dword ptr [ebp - 0x354], eax */
    PUSH32(esp, ecx); /* 0x100A64C0: push ecx */
    PUSH32(esp, eax); /* 0x100A64C1: push eax */
    MEM8(ebp + (-0x248)) = (uint8_t)(LO8(ebx)); /* 0x100A64C2: mov byte ptr [ebp - 0x248], bl */
    RECOMP_ICALL(MEM32(0x100E5044)); /* 0x100A64C8: call dword ptr [0x100e5044] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A64CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A64F3; /* 0x100A64D0: jne 0x100a64f3 */
L_100A64D2:
    PUSH32(esp, 0x100A69D4u); /* 0x100A64D2: push 0x100a69d4 */
    eax = ebp + (-0x34C); /* 0x100A64D7: lea eax, [ebp - 0x34c] */
    PUSH32(esp, 0x105u); /* 0x100A64DD: push 0x105 */
    PUSH32(esp, eax); /* 0x100A64E2: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x100A64E3: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A64E8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A64EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A64ED: jne 0x100a694e */
L_100A64F3:
    eax = ebp + (-0x34C); /* 0x100A64F3: lea eax, [ebp - 0x34c] */
    PUSH32(esp, eax); /* 0x100A64F9: push eax */
    MEM32(ebp + (-0x350)) = eax; /* 0x100A64FA: mov dword ptr [ebp - 0x350], eax */
    RECOMP_CALL(sub_100129AF); /* 0x100A6500: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xBu; /* 0x100A6505: add eax, 0xb */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x100A6508: pop ecx */
    /* cmp eax, 0x40u */ /* 0x100A6509: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A654D; /* 0x100A650C: jbe 0x100a654d */
L_100A650E:
    eax = ebp + (-0x34C); /* 0x100A650E: lea eax, [ebp - 0x34c] */
    PUSH32(esp, eax); /* 0x100A6514: push eax */
    RECOMP_CALL(sub_100129AF); /* 0x100A6515: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x34C); /* 0x100A651A: lea ecx, [ebp - 0x34c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x35u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x35u; /* 0x100A6520: sub ecx, 0x35 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x100A6523: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x247); /* 0x100A6525: lea ecx, [ebp - 0x247] */
    PUSH32(esp, 3); /* 0x100A652B: push 3 */
    PUSH32(esp, MEM32(0x100E18A0)); /* 0x100A652D: push dword ptr [0x100e18a0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100A6533: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x350)) = eax; /* 0x100A6535: mov dword ptr [ebp - 0x350], eax */
    PUSH32(esp, ecx); /* 0x100A653B: push ecx */
    PUSH32(esp, eax); /* 0x100A653C: push eax */
    RECOMP_CALL(sub_1000F62F); /* 0x100A653D: call 0x1000f62f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A6542: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6545: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A6547: jne 0x100a694e */
L_100A654D:
    PUSH32(esp, MEM32(ebp + (-0x350))); /* 0x100A654D: push dword ptr [ebp - 0x350] */
    eax = ebp + (-0x244); /* 0x100A6553: lea eax, [ebp - 0x244] */
    PUSH32(esp, 0x240u); /* 0x100A6559: push 0x240 */
    PUSH32(esp, eax); /* 0x100A655E: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A655F: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6564: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6567: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A6569: jne 0x100a694e */
L_100A656F:
    PUSH32(esp, MEM32(0x100E18A4)); /* 0x100A656F: push dword ptr [0x100e18a4] */
    eax = ebp + (-0x244); /* 0x100A6575: lea eax, [ebp - 0x244] */
    PUSH32(esp, 0x240u); /* 0x100A657B: push 0x240 */
    PUSH32(esp, eax); /* 0x100A6580: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A6581: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6586: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6589: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A658B: jne 0x100a694e */
L_100A6591:
    PUSH32(esp, 0x100A69ECu); /* 0x100A6591: push 0x100a69ec */
    eax = ebp + (-0x244); /* 0x100A6596: lea eax, [ebp - 0x244] */
    PUSH32(esp, 0x240u); /* 0x100A659C: push 0x240 */
    PUSH32(esp, eax); /* 0x100A65A1: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A65A2: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A65A7: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A65AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A65AC: jne 0x100a694e */
L_100A65B2:
    PUSH32(esp, esi); /* 0x100A65B2: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x100A65B3: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x100A65B8: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x100A65BB: pop ecx */
    PUSH32(esp, esi); /* 0x100A65BC: push esi */
    /* cmp eax, 0x40u */ /* 0x100A65BD: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A688F; /* 0x100A65C0: jbe 0x100a688f */
L_100A65C6:
    RECOMP_CALL(sub_100129AF); /* 0x100A65C6: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A65CB: pop ecx */
    MEM32(ebp + (-0x358)) = eax; /* 0x100A65CC: mov dword ptr [ebp - 0x358], eax */
    SET_LO8(ecx, MEM8(esi + eax + (-0x1))); /* 0x100A65D2: mov cl, byte ptr [esi + eax - 1] */
    /* cmp LO8(ecx), 0x5Cu */ /* 0x100A65D6: cmp cl, 0x5c */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A65F2; /* 0x100A65D9: je 0x100a65f2 */
L_100A65DB:
    edx = esi + (-0x1); /* 0x100A65DB: lea edx, [esi - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x100A65DE: add edx, eax */
    _flag_k = FK_ADD;
L_100A65E0:
    /* cmp LO8(ecx), 0x2Fu */ /* 0x100A65E0: cmp cl, 0x2f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A65F2; /* 0x100A65E3: je 0x100a65f2 */
L_100A65E5:
    /* cmp edi, eax */ /* 0x100A65E5: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A65F2; /* 0x100A65E7: jae 0x100a65f2 */
L_100A65E9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A65E9: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100A65EA: dec edx */
    _flag_k = FK_DEC;
    SET_LO8(ecx, MEM8(edx)); /* 0x100A65EB: mov cl, byte ptr [edx] */
    /* cmp LO8(ecx), 0x5Cu */ /* 0x100A65ED: cmp cl, 0x5c */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A65E0; /* 0x100A65F0: jne 0x100a65e0 */
L_100A65F2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x100A65F2: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x350)) = eax; /* 0x100A65F4: mov dword ptr [ebp - 0x350], eax */
    /* cmp eax, 0x26u */ /* 0x100A65FA: cmp eax, 0x26 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x26u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A683D; /* 0x100A65FD: jbe 0x100a683d */
L_100A6603:
    /* cmp edi, 0x12u */ /* 0x100A6603: cmp edi, 0x12 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A683A; /* 0x100A6606: jae 0x100a683a */
L_100A660C:
    PUSH32(esp, 0x35u); /* 0x100A660C: push 0x35 */
    eax = POP32_VAL(esp); /* 0x100A660E: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x100A660F: sub eax, edi */
    _flag_k = FK_CMP;
    edi = 0x240u; /* 0x100A6611: mov edi, 0x240 */
    PUSH32(esp, eax); /* 0x100A6616: push eax */
    PUSH32(esp, esi); /* 0x100A6617: push esi */
    eax = ebp + (-0x244); /* 0x100A6618: lea eax, [ebp - 0x244] */
    PUSH32(esp, edi); /* 0x100A661E: push edi */
    PUSH32(esp, eax); /* 0x100A661F: push eax */
    RECOMP_CALL(sub_1008D511); /* 0x100A6620: call 0x1008d511 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A6625: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6628: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A662A: jne 0x100a694e */
L_100A6630:
    PUSH32(esp, MEM32(0x100E18A0)); /* 0x100A6630: push dword ptr [0x100e18a0] */
    eax = ebp + (-0x244); /* 0x100A6636: lea eax, [ebp - 0x244] */
    PUSH32(esp, edi); /* 0x100A663C: push edi */
    PUSH32(esp, eax); /* 0x100A663D: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A663E: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6643: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6646: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A6648: jne 0x100a694e */
L_100A664E:
    eax = MEM32(ebp + (-0x350)); /* 0x100A664E: mov eax, dword ptr [ebp - 0x350] */
L_100A6654:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x100A6654: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100A6656: push eax */
L_100A6657:
    eax = ebp + (-0x244); /* 0x100A6657: lea eax, [ebp - 0x244] */
    PUSH32(esp, edi); /* 0x100A665D: push edi */
    PUSH32(esp, eax); /* 0x100A665E: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A665F: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6664: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6667: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A6669: jne 0x100a694e */
L_100A666F:
    PUSH32(esp, MEM32(0x100E18A4)); /* 0x100A666F: push dword ptr [0x100e18a4] */
    eax = ebp + (-0x244); /* 0x100A6675: lea eax, [ebp - 0x244] */
    PUSH32(esp, edi); /* 0x100A667B: push edi */
    PUSH32(esp, eax); /* 0x100A667C: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A667D: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6682: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6685: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A6687: jne 0x100a694e */
L_100A668D:
    PUSH32(esp, 0x100A69F4u); /* 0x100A668D: push 0x100a69f4 */
    eax = ebp + (-0x244); /* 0x100A6692: lea eax, [ebp - 0x244] */
    PUSH32(esp, edi); /* 0x100A6698: push edi */
    PUSH32(esp, eax); /* 0x100A6699: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A669A: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A669F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A66A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A66A4: jne 0x100a694e */
L_100A66AA:
    eax = ebp + (-0x244); /* 0x100A66AA: lea eax, [ebp - 0x244] */
    PUSH32(esp, 0xAu); /* 0x100A66B0: push 0xa */
    PUSH32(esp, eax); /* 0x100A66B2: push eax */
    RECOMP_CALL(sub_100129AF); /* 0x100A66B3: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A66B8: pop ecx */
    ecx = edi; /* 0x100A66B9: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100A66BB: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = ebp + (-0x244); /* 0x100A66BD: lea eax, [ebp - 0x244] */
    PUSH32(esp, ecx); /* 0x100A66C3: push ecx */
    PUSH32(esp, eax); /* 0x100A66C4: push eax */
    RECOMP_CALL(sub_100129AF); /* 0x100A66C5: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A66CA: pop ecx */
    eax = ebp + eax + (-0x244); /* 0x100A66CB: lea eax, [ebp + eax - 0x244] */
    PUSH32(esp, eax); /* 0x100A66D2: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A66D3: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1007CE59); /* 0x100A66D6: call 0x1007ce59 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A66DB: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A66DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A66E0: jne 0x100a694e */
L_100A66E6:
    PUSH32(esp, MEM32(0x100E18A8)); /* 0x100A66E6: push dword ptr [0x100e18a8] */
    eax = ebp + (-0x244); /* 0x100A66EC: lea eax, [ebp - 0x244] */
    PUSH32(esp, edi); /* 0x100A66F2: push edi */
    PUSH32(esp, eax); /* 0x100A66F3: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A66F4: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A66F9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A66FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A66FE: jne 0x100a694e */
L_100A6704:
    PUSH32(esp, 0x100A69FCu); /* 0x100A6704: push 0x100a69fc */
    eax = ebp + (-0x244); /* 0x100A6709: lea eax, [ebp - 0x244] */
    PUSH32(esp, edi); /* 0x100A670F: push edi */
    PUSH32(esp, eax); /* 0x100A6710: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A6711: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6716: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6719: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A671B: jne 0x100a694e */
L_100A6721:
    edi = MEM32(ebp + (-0x35C)); /* 0x100A6721: mov edi, dword ptr [ebp - 0x35c] */
    PUSH32(esp, edi); /* 0x100A6727: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x100A6728: call 0x100129af */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A672D: mov esi, eax */
    eax = ebp + (-0x244); /* 0x100A672F: lea eax, [ebp - 0x244] */
    PUSH32(esp, eax); /* 0x100A6735: push eax */
    RECOMP_CALL(sub_100129AF); /* 0x100A6736: call 0x100129af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xB0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xB0u; /* 0x100A673B: add esi, 0xb0 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x100A6741: add eax, esi */
    _flag_k = FK_ADD;
    esi = 0x240u; /* 0x100A6743: mov esi, 0x240 */
    ecx = POP32_VAL(esp); /* 0x100A6748: pop ecx */
    /* cmp eax, esi */ /* 0x100A6749: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x244); /* 0x100A674B: lea eax, [ebp - 0x244] */
    ecx = POP32_VAL(esp); /* 0x100A6751: pop ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A691A; /* 0x100A6752: jbe 0x100a691a */
L_100A6758:
    PUSH32(esp, eax); /* 0x100A6758: push eax */
    RECOMP_CALL(sub_100129AF); /* 0x100A6759: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = 0x18Du; /* 0x100A675E: mov ecx, 0x18d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100A6763: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = ebp + (-0x244); /* 0x100A6765: lea eax, [ebp - 0x244] */
    PUSH32(esp, ecx); /* 0x100A676B: push ecx */
    PUSH32(esp, edi); /* 0x100A676C: push edi */
    PUSH32(esp, esi); /* 0x100A676D: push esi */
    PUSH32(esp, eax); /* 0x100A676E: push eax */
    RECOMP_CALL(sub_1008D511); /* 0x100A676F: call 0x1008d511 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A6774: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6777: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A6779: jne 0x100a694e */
L_100A677F:
    PUSH32(esp, MEM32(0x100E18A0)); /* 0x100A677F: push dword ptr [0x100e18a0] */
    eax = ebp + (-0x244); /* 0x100A6785: lea eax, [ebp - 0x244] */
L_100A678B:
    PUSH32(esp, esi); /* 0x100A678B: push esi */
    PUSH32(esp, eax); /* 0x100A678C: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A678D: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6792: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6795: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A6797: jne 0x100a694e */
L_100A679D:
    PUSH32(esp, MEM32(0x100E18A8)); /* 0x100A679D: push dword ptr [0x100e18a8] */
    eax = ebp + (-0x244); /* 0x100A67A3: lea eax, [ebp - 0x244] */
    PUSH32(esp, esi); /* 0x100A67A9: push esi */
    PUSH32(esp, eax); /* 0x100A67AA: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A67AB: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A67B0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A67B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A67B5: jne 0x100a694e */
L_100A67BB:
    PUSH32(esp, 0x100A6A10u); /* 0x100A67BB: push 0x100a6a10 */
    eax = ebp + (-0x244); /* 0x100A67C0: lea eax, [ebp - 0x244] */
    PUSH32(esp, esi); /* 0x100A67C6: push esi */
    PUSH32(esp, eax); /* 0x100A67C7: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A67C8: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A67CD: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A67D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A67D2: jne 0x100a694e */
L_100A67D8:
    PUSH32(esp, MEM32(0x100E18A8)); /* 0x100A67D8: push dword ptr [0x100e18a8] */
    eax = ebp + (-0x244); /* 0x100A67DE: lea eax, [ebp - 0x244] */
    PUSH32(esp, esi); /* 0x100A67E4: push esi */
    PUSH32(esp, eax); /* 0x100A67E5: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A67E6: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A67EB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A67EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A67F0: jne 0x100a694e */
L_100A67F6:
    PUSH32(esp, 0x100A6A80u); /* 0x100A67F6: push 0x100a6a80 */
    eax = ebp + (-0x244); /* 0x100A67FB: lea eax, [ebp - 0x244] */
    PUSH32(esp, esi); /* 0x100A6801: push esi */
    PUSH32(esp, eax); /* 0x100A6802: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A6803: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6808: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A680B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A680D: jne 0x100a694e */
L_100A6813:
    PUSH32(esp, 0x00012012u); /* 0x100A6813: push 0x12012 */
    eax = ebp + (-0x244); /* 0x100A6818: lea eax, [ebp - 0x244] */
    PUSH32(esp, 0x100A6AC0u); /* 0x100A681E: push 0x100a6ac0 */
    PUSH32(esp, eax); /* 0x100A6823: push eax */
    RECOMP_CALL(sub_100A9CBC); /* 0x100A6824: call 0x100a9cbc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6829: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 3 */ /* 0x100A682C: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A6958; /* 0x100A682F: je 0x100a6958 */
L_100A6835:
    goto L_100A6920; /* 0x100A6835: jmp 0x100a6920 */
L_100A683A:
    /* cmp eax, 0x26u */ /* 0x100A683A: cmp eax, 0x26 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x26u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_100A683D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6899; /* 0x100A683D: jae 0x100a6899 */
L_100A683F:
    PUSH32(esp, 0x35u); /* 0x100A683F: push 0x35 */
    eax = POP32_VAL(esp); /* 0x100A6841: pop eax */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x100A6842: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x100A6842: shr edi, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x100A6844: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100A6846: push eax */
    PUSH32(esp, esi); /* 0x100A6847: push esi */
    eax = ebp + (-0x244); /* 0x100A6848: lea eax, [ebp - 0x244] */
    PUSH32(esp, 0x240u); /* 0x100A684E: push 0x240 */
    PUSH32(esp, eax); /* 0x100A6853: push eax */
    RECOMP_CALL(sub_1008D511); /* 0x100A6854: call 0x1008d511 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A6859: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A685C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A685E: jne 0x100a694e */
L_100A6864:
    PUSH32(esp, MEM32(0x100E18A0)); /* 0x100A6864: push dword ptr [0x100e18a0] */
    eax = ebp + (-0x244); /* 0x100A686A: lea eax, [ebp - 0x244] */
    PUSH32(esp, 0x240u); /* 0x100A6870: push 0x240 */
    PUSH32(esp, eax); /* 0x100A6875: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A6876: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A687B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A687E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A6880: jne 0x100a694e */
L_100A6886:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x100A6886: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x358)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x358)); /* 0x100A6888: add esi, dword ptr [ebp - 0x358] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x100A688E: push esi */
L_100A688F:
    edi = 0x240u; /* 0x100A688F: mov edi, 0x240 */
    RECOMP_BACKEDGE();
    goto L_100A6657; /* 0x100A6894: jmp 0x100a6657 */
L_100A6899:
    PUSH32(esp, 0x23u); /* 0x100A6899: push 0x23 */
    PUSH32(esp, esi); /* 0x100A689B: push esi */
    edi = 0x240u; /* 0x100A689C: mov edi, 0x240 */
    eax = ebp + (-0x244); /* 0x100A68A1: lea eax, [ebp - 0x244] */
    PUSH32(esp, edi); /* 0x100A68A7: push edi */
    PUSH32(esp, eax); /* 0x100A68A8: push eax */
    RECOMP_CALL(sub_1008D511); /* 0x100A68A9: call 0x1008d511 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A68AE: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A68B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A68B3: jne 0x100a694e */
L_100A68B9:
    PUSH32(esp, MEM32(0x100E18A0)); /* 0x100A68B9: push dword ptr [0x100e18a0] */
    eax = ebp + (-0x244); /* 0x100A68BF: lea eax, [ebp - 0x244] */
    PUSH32(esp, edi); /* 0x100A68C5: push edi */
    PUSH32(esp, eax); /* 0x100A68C6: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A68C7: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A68CC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A68CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A68D1: jne 0x100a694e */
L_100A68D3:
    eax = MEM32(ebp + (-0x350)); /* 0x100A68D3: mov eax, dword ptr [ebp - 0x350] */
    PUSH32(esp, 8); /* 0x100A68D9: push 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x100A68DB: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100A68DD: push eax */
    eax = ebp + (-0x244); /* 0x100A68DE: lea eax, [ebp - 0x244] */
    PUSH32(esp, edi); /* 0x100A68E4: push edi */
    PUSH32(esp, eax); /* 0x100A68E5: push eax */
    RECOMP_CALL(sub_1008D511); /* 0x100A68E6: call 0x1008d511 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A68EB: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A68EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A68F0: jne 0x100a694e */
L_100A68F2:
    PUSH32(esp, MEM32(0x100E18A0)); /* 0x100A68F2: push dword ptr [0x100e18a0] */
    eax = ebp + (-0x244); /* 0x100A68F8: lea eax, [ebp - 0x244] */
    PUSH32(esp, edi); /* 0x100A68FE: push edi */
    PUSH32(esp, eax); /* 0x100A68FF: push eax */
    RECOMP_CALL(sub_1002E676); /* 0x100A6900: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6905: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6908: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A694E; /* 0x100A690A: jne 0x100a694e */
L_100A690C:
    eax = MEM32(ebp + (-0x358)); /* 0x100A690C: mov eax, dword ptr [ebp - 0x358] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF9u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFF9u; /* 0x100A6912: add eax, -7 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100A6654; /* 0x100A6915: jmp 0x100a6654 */
L_100A691A:
    PUSH32(esp, edi); /* 0x100A691A: push edi */
    RECOMP_BACKEDGE();
    goto L_100A678B; /* 0x100A691B: jmp 0x100a678b */
L_100A6920:
    /* cmp eax, 4 */ /* 0x100A6920: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A6937; /* 0x100A6923: jne 0x100a6937 */
L_100A6925:
    void_lift_trap(0x100A6925u, "int3 ");
L_100A6926:
    ecx = MEM32(ebp + (-0x4)); /* 0x100A6926: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x100A6929: pop edi */
    esi = POP32_VAL(esp); /* 0x100A692A: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100A692B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100A692D: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100A692E: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100A6933: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A6935: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6936: ret  */
L_100A6937:
    /* cmp eax, 5 */ /* 0x100A6937: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A6926; /* 0x100A693A: je 0x100a6926 */
L_100A693C:
    goto L_100A69AC; /* 0x100A693C: jmp 0x100a69ac */
L_100A693E:
    RECOMP_CALL(sub_100142B5); /* 0x100A693E: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    /* test MEM32(eax + 0x4C), 0x10Cu */ /* 0x100A6943: test dword ptr [eax + 0x4c], 0x10c */
    _flag_a = (uint32_t)(MEM32(eax + 0x4C)); _flag_b = (uint32_t)(0x10Cu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6967; /* 0x100A694A: je 0x100a6967 */
L_100A694C:
    goto L_100A697E; /* 0x100A694C: jmp 0x100a697e */
L_100A694E:
    PUSH32(esp, ebx); /* 0x100A694E: push ebx */
    PUSH32(esp, ebx); /* 0x100A694F: push ebx */
    PUSH32(esp, ebx); /* 0x100A6950: push ebx */
    PUSH32(esp, ebx); /* 0x100A6951: push ebx */
    PUSH32(esp, ebx); /* 0x100A6952: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x100A6953: call 0x100a469b */
    RECOMP_FLAGS_IN();
L_100A6958:
    PUSH32(esp, 0x16u); /* 0x100A6958: push 0x16 */
    RECOMP_CALL(sub_100A491C); /* 0x100A695A: call 0x100a491c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A695F: pop ecx */
    PUSH32(esp, 3); /* 0x100A6960: push 3 */
    RECOMP_CALL(sub_1007BBB8); /* 0x100A6962: call 0x1007bbb8 */
    RECOMP_FLAGS_IN();
L_100A6967:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A6967: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x100A6969: push ebx */
    PUSH32(esp, 4); /* 0x100A696A: push 4 */
    PUSH32(esp, ebx); /* 0x100A696C: push ebx */
    RECOMP_CALL(sub_100142B5); /* 0x100A696D: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x100A6972: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100A6975: push eax */
    RECOMP_CALL(sub_1002FCDA); /* 0x100A6976: call 0x1002fcda */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A697B: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100A697E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A697E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100A6981: push esi */
    PUSH32(esp, MEM32(ebp + (-0x35C))); /* 0x100A6982: push dword ptr [ebp - 0x35c] */
    PUSH32(esp, 0x100E1878u); /* 0x100A6988: push 0x100e1878 */
    RECOMP_CALL(sub_100142B5); /* 0x100A698D: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x100A6992: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100A6995: push eax */
    RECOMP_CALL(sub_10020C5E); /* 0x100A6996: call 0x10020c5e */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100142B5); /* 0x100A699B: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x100A69A0: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100A69A3: push eax */
    RECOMP_CALL(sub_10020A94); /* 0x100A69A4: call 0x10020a94 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100A69A9: add esp, 0x18 */
    _flag_k = FK_ADD;
L_100A69AC:
    RECOMP_CALL(sub_100A763E); /* 0x100A69AC: call 0x100a763e */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A69B1u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A69B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A69B4u);

L_100A69B4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A69B4: inc ecx */
    _flag_k = FK_INC;
    if ((_cf == 0)) goto L_100A6A2A; /* 0x100A69B5: jae 0x100a6a2a */
L_100A69B7:
    if ((_cf != 0)) goto L_100A6A2E; /* 0x100A69B7: jb 0x100a6a2e */
L_100A69BA:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x69616620u); /* 0x100A69BA: imul ebp, dword ptr [edi + 0x6e], 0x69616620 */
    void_lift_trap(0x100A69C1u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM32(FS_BASE + (eax))); _flag_b = (uint32_t)(eax);
    MEM32(FS_BASE + (eax)) = MEM32(FS_BASE + (eax)) & eax; /* 0x100A69C2: and dword ptr fs:[eax], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* nop */ /* 0x100A69C6: nop  */
    /* nop */ /* 0x100A69C7: nop  */
    PUSH32(esp, eax); /* 0x100A69C8: push eax */
    if (0) goto L_100A6A3A; /* 0x100A69C9: jb 0x100a6a3a */
L_100A69CB:
    if (0) goto L_100A6A2F; /* 0x100A69CB: jb 0x100a6a2f */
L_100A69CE:
    void_lift_trap(0x100A69CEu, "insd dword ptr es:[edi], dx");
    /* cmp HI8(eax), MEM8(eax) */ /* 0x100A69CF: cmp ah, byte ptr [eax] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x72703C90)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x72703C90) = (uint8_t)(MEM8(eax + 0x72703C90) + LO8(edx)); /* 0x100A69D1: add byte ptr [eax + 0x72703c90], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A69D7: outsd dx, dword ptr [esi] */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A6A3C; /* 0x100A69D8: jb 0x100a6a3c */
L_100A69DB:
    void_lift_trap(0x100A69DBu, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(esi + 0x61)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(esi + 0x61) = (uint8_t)(MEM8(esi + 0x61) & HI8(ecx)); /* 0x100A69DC: and byte ptr [esi + 0x61], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A69DFu, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp + 0x6E))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(GS_BASE + (ebp + 0x6E)) = (uint8_t)(MEM8(GS_BASE + (ebp + 0x6E)) & HI8(edx)); /* 0x100A69E0: and byte ptr gs:[ebp + 0x6e], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x6F) * (int32_t)0x77u); /* 0x100A69E4: imul ebp, dword ptr [esi + 0x6f], 0x77 */
    /* outsb: no port I/O under Win32 */ /* 0x100A69E8: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + 0x656C6946)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x656C6946) = (uint8_t)(MEM8(eax + 0x656C6946) + LO8(edx)); /* 0x100A69E9: add byte ptr ds:[eax + 0x656c6946], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp HI8(eax), MEM8(eax) */ /* 0x100A69F0: cmp ah, byte ptr [eax] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x656E694C)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x656E694C) = (uint8_t)(MEM8(eax + 0x656E694C) + LO8(edx)); /* 0x100A69F2: add byte ptr [eax + 0x656e694c], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp HI8(eax), MEM8(eax) */ /* 0x100A69F8: cmp ah, byte ptr [eax] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x72707845)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x72707845) = (uint8_t)(MEM8(eax + 0x72707845) + LO8(edx)); /* 0x100A69FA: add byte ptr [eax + 0x72707845], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A6A76; /* 0x100A6A00: jae 0x100a6a76 */
L_100A6A03:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x9000203Au); /* 0x100A6A03: imul ebp, dword ptr [edi + 0x6e], 0x9000203a */
    /* nop */ /* 0x100A6A0A: nop  */
    /* nop */ /* 0x100A6A0B: nop  */
    /* nop */ /* 0x100A6A0C: nop  */
    /* nop */ /* 0x100A6A0D: nop  */
    /* nop */ /* 0x100A6A0E: nop  */
    /* nop */ /* 0x100A6A0F: nop  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A6A10: inc esi */
    _flag_k = FK_INC;
    /* outsd: no port I/O under Win32 */ /* 0x100A6A11: outsd dx, dword ptr [esi] */
    if ((_cf != 0)) goto L_100A6A34; /* 0x100A6A12: jb 0x100a6a34 */
L_100A6A14:
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x66) * (int32_t)0x616D726Fu); /* 0x100A6A14: imul ebp, dword ptr [esi + 0x66], 0x616d726f */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A6A86; /* 0x100A6A1B: je 0x100a6a86 */
L_100A6A1D:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A1D: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6A1E: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi + 0x6E) = (uint8_t)(MEM8(edi + 0x6E) & HI8(ecx)); /* 0x100A6A1F: and byte ptr [edi + 0x6e], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(eax + 0x6F) = (uint8_t)(MEM8(eax + 0x6F) & HI8(ecx)); /* 0x100A6A22: and byte ptr [eax + 0x6f], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6A47; /* 0x100A6A25: ja 0x100a6a47 */
L_100A6A27:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6A98; /* 0x100A6A27: jns 0x100a6a98 */
L_100A6A29:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6A9D; /* 0x100A6A29: jne 0x100a6a9d */
    goto L_100A6A2B; /* falls through past a gap */
L_100A6A2A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6A4C; /* 0x100A6A2A: jb 0x100a6a4c */
    goto L_100A6A2C; /* falls through past a gap */
L_100A6A2B:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) & HI8(edx)); /* 0x100A6A2B: and byte ptr [eax + 0x72], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A2E; /* falls through past a gap */
L_100A6A2C:
    if (CMP_O(_flag_a, _flag_b)) goto L_100A6AA0; /* 0x100A6A2C: jo 0x100a6aa0 */
L_100A6A2E:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A2E: outsd dx, dword ptr [esi] */
L_100A6A2F:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6A93; /* 0x100A6A2F: jb 0x100a6a93 */
L_100A6A32:
    void_lift_trap(0x100A6A32u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + 0x61)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebx + 0x61) = (uint8_t)(MEM8(ebx + 0x61) & HI8(eax)); /* 0x100A6A33: and byte ptr [ebx + 0x61], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A36; /* falls through past a gap */
L_100A6A34:
    void_lift_trap(0x100A6A34u, "arpl word ptr [ecx + 0x6e], sp");
    goto L_100A6A37; /* falls through past a gap */
L_100A6A36:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A36: outsb dx, byte ptr [esi] */
L_100A6A37:
    _flag_a = (uint32_t)(MEM8(ebx + 0x61)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebx + 0x61) = (uint8_t)(MEM8(ebx + 0x61) & HI8(eax)); /* 0x100A6A37: and byte ptr [ebx + 0x61], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A3A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AAF; /* 0x100A6A3A: jne 0x100a6aaf */
L_100A6A3C:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + 0x6E))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(GS_BASE + (ecx + 0x6E)) = (uint8_t)(MEM8(GS_BASE + (ecx + 0x6E)) & HI8(eax)); /* 0x100A6A3C: and byte ptr gs:[ecx + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x73)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x73) = (uint8_t)(MEM8(ecx + 0x73) & HI8(eax)); /* 0x100A6A40: and byte ptr [ecx + 0x73], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AAA; /* 0x100A6A43: jae 0x100a6aaa */
L_100A6A45:
    if (0) goto L_100A6ABB; /* 0x100A6A45: jb 0x100a6abb */
L_100A6A47:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x6961660Au); /* 0x100A6A47: imul ebp, dword ptr [edi + 0x6e], 0x6961660a */
    goto L_100A6A4E; /* falls through past a gap */
L_100A6A4C:
    POPAD(); /* 0x100A6A4C: popal  */
    ebp = (uint32_t)((int32_t)MEM32(ebp + esi * 2 + 0x72) * (int32_t)0x73202C65u); /* 0x100A6A4D: imul ebp, dword ptr [ebp + esi*2 + 0x72], 0x73202c65 */
    goto L_100A6A55; /* falls through past a gap */
L_100A6A4E:
    void_lift_trap(0x100A6A4Eu, "insb byte ptr es:[edi], dx");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AC3; /* 0x100A6A4F: jne 0x100a6ac3 */
L_100A6A51:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x20u); /* 0x100A6A51: sub al, 0x20 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6ABB; /* 0x100A6A54: jae 0x100a6abb */
    goto L_100A6A56; /* falls through past a gap */
L_100A6A55:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) = (uint8_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) & HI8(edx)); /* 0x100A6A55: and byte ptr gs:[eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A5B; /* falls through past a gap */
L_100A6A56:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) = (uint8_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) & HI8(edx)); /* 0x100A6A56: and byte ptr gs:[eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A5B:
    _flag_a = (uint32_t)(MEM8(esi + 0x69)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(esi + 0x69) = (uint8_t)(MEM8(esi + 0x69) & LO8(edx)); /* 0x100A6A5B: and byte ptr [esi + 0x69], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AD5; /* 0x100A6A5E: jae 0x100a6ad5 */
L_100A6A60:
    POPAD(); /* 0x100A6A60: popal  */
    void_lift_trap(0x100A6A61u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + 0x2B)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(ebx + 0x2B) = (uint8_t)(MEM8(ebx + 0x2B) & LO8(eax)); /* 0x100A6A62: and byte ptr [ebx + 0x2b], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(eax); /* 0x100A6A65: sub esp, dword ptr [eax] */
    _flag_k = FK_CMP;
    /* outsd: no port I/O under Win32 */ /* 0x100A6A67: outsd dx, dword ptr fs:[esi] */
    void_lift_trap(0x100A6A69u, "arpl word ptr [ebp + 0x6d], si");
    /* outsb: no port I/O under Win32 */ /* 0x100A6A6C: outsb dx, byte ptr gs:[esi] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A6AD1; /* 0x100A6A6E: je 0x100a6ad1 */
L_100A6A70:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A6ADB; /* 0x100A6A70: je 0x100a6adb */
L_100A6A72:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A72: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6A73: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi + 0x6E) = (uint8_t)(MEM8(edi + 0x6E) & HI8(ecx)); /* 0x100A6A74: and byte ptr [edi + 0x6e], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A77; /* falls through past a gap */
L_100A6A76:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A76: outsb dx, byte ptr [esi] */
L_100A6A77:
    _flag_a = (uint32_t)(MEM8(ecx + 0x73)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x73) = (uint8_t)(MEM8(ecx + 0x73) & HI8(eax)); /* 0x100A6A77: and byte ptr [ecx + 0x73], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AE1; /* 0x100A6A7A: jae 0x100a6ae1 */
L_100A6A7C:
    if (0) goto L_100A6AF2; /* 0x100A6A7C: jb 0x100a6af2 */
L_100A6A7E:
    if (1) goto L_100A6A80; /* 0x100A6A7E: jae 0x100a6a80 */
L_100A6A80:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) - LO8(edx)); /* 0x100A6A80: sub byte ptr [eax + 0x72], dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6AF9; /* 0x100A6A83: jae 0x100a6af9 */
L_100A6A86:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & LO8(edx)); /* 0x100A6A86: and byte ptr [edx + 0x65], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFD; /* 0x100A6A89: je 0x100a6afd */
L_100A6A8B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6AAD; /* 0x100A6A8B: jns 0x100a6aad */
L_100A6A8D:
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFE; /* 0x100A6A8D: je 0x100a6afe */
L_100A6A8F:
    _flag_a = (uint32_t)(MEM8(ebp + 0x62)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x62) = (uint8_t)(MEM8(ebp + 0x62) & HI8(eax)); /* 0x100A6A8F: and byte ptr [ebp + 0x62], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A93:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AFC; /* 0x100A6A93: jne 0x100a6afc */
L_100A6A95:
    _flag_a = (uint32_t)(MEM8(eax + ebp * 2 + 0x65)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + ebp * 2 + 0x65) = (uint8_t)(MEM8(eax + ebp * 2 + 0x65) & HI8(edx)); /* 0x100A6A95: and byte ptr [eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A99; /* falls through past a gap */
L_100A6A98:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + 0x70))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(GS_BASE + (ecx + 0x70)) = (uint8_t)(MEM8(GS_BASE + (ecx + 0x70)) & HI8(eax)); /* 0x100A6A98: and byte ptr gs:[ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A9C; /* falls through past a gap */
L_100A6A99:
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x70) = (uint8_t)(MEM8(ecx + 0x70) & HI8(eax)); /* 0x100A6A99: and byte ptr [ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A9C:
    if (CMP_O(_flag_a, _flag_b)) goto L_100A6B0A; /* 0x100A6A9C: jo 0x100a6b0a */
    goto L_100A6A9E; /* falls through past a gap */
L_100A6A9D:
    void_lift_trap(0x100A6A9Du, "insb byte ptr es:[edi], dx");
L_100A6A9E:
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x61) * (int32_t)0x6E6F6974u); /* 0x100A6A9E: imul esp, dword ptr [ebx + 0x61], 0x6e6f6974 */
    goto L_100A6AA5; /* falls through past a gap */
L_100A6AA0:
    POPAD(); /* 0x100A6AA0: popal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6B0C; /* 0x100A6AA1: je 0x100a6b0c */
L_100A6AA3:
    /* outsd: no port I/O under Win32 */ /* 0x100A6AA3: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6AA4: outsb dx, byte ptr [esi] */
L_100A6AA5:
    _flag_a = (uint32_t)(MEM8(0x54494A20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(0x54494A20) = (uint8_t)(MEM8(0x54494A20) & HI8(ecx)); /* 0x100A6AA5: and byte ptr [0x54494a20], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAB; /* falls through past a gap */
L_100A6AAA:
    PUSH32(esp, esp); /* 0x100A6AAA: push esp */
L_100A6AAB:
    _flag_a = (uint32_t)(MEM8(ebp + 0x75)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(ebp + 0x75) = (uint8_t)(MEM8(ebp + 0x75) & HI8(ecx)); /* 0x100A6AAB: and byte ptr [ebp + 0x75], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAE; /* falls through past a gap */
L_100A6AAD:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B22; /* 0x100A6AAD: jne 0x100a6b22 */
    goto L_100A6AAF; /* falls through past a gap */
L_100A6AAE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B24; /* 0x100A6AAE: jae 0x100a6b24 */
    goto L_100A6AB0; /* falls through past a gap */
L_100A6AAF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AD1; /* 0x100A6AAF: je 0x100a6ad1 */
    goto L_100A6AB1; /* falls through past a gap */
L_100A6AB0:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & HI8(eax)); /* 0x100A6AB0: and byte ptr [edx + 0x65], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB3; /* falls through past a gap */
L_100A6AB1:
    void_lift_trap(0x100A6AB1u, "bound esp, qword ptr [ebp + 0x20]");
    goto L_100A6AB4; /* falls through past a gap */
L_100A6AB3:
    _flag_a = (uint32_t)(MEM8(ebp + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x6E) = (uint8_t)(MEM8(ebp + 0x6E) & HI8(eax)); /* 0x100A6AB3: and byte ptr [ebp + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB6; /* falls through past a gap */
L_100A6AB4:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AB4: outsb dx, byte ptr gs:[esi] */
L_100A6AB6:
    POPAD(); /* 0x100A6AB6: popal  */
    void_lift_trap(0x100A6AB7u, "bound ebp, qword ptr [ebp + 0x64]");
L_100A6ABB:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - eax; /* 0x100A6ABB: sub dword ptr [eax], eax */
    _flag_k = FK_CMP;
    /* nop */ /* 0x100A6ABD: nop  */
    /* nop */ /* 0x100A6ABE: nop  */
    /* nop */ /* 0x100A6ABF: nop  */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A6AC0: dec ebp */
    _flag_k = FK_DEC;
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x72) * (int32_t)0x666F736Fu); /* 0x100A6AC1: imul esp, dword ptr [ebx + 0x72], 0x666f736f */
    goto L_100A6AC8; /* falls through past a gap */
L_100A6AC3:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6B34; /* 0x100A6AC3: jb 0x100a6b34 */
L_100A6AC5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B36; /* 0x100A6AC5: jae 0x100a6b36 */
L_100A6AC7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AEA; /* 0x100A6AC7: je 0x100a6aea */
    goto L_100A6ACA; /* falls through past a gap */
L_100A6AC8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AEA; /* 0x100A6AC8: je 0x100a6aea */
L_100A6ACA:
    PUSH32(esp, esi); /* 0x100A6ACA: push esi */
    esi = (uint32_t)((int32_t)MEM32(ebx + 0x75) * (int32_t)0x43206C61u); /* 0x100A6ACB: imul esi, dword ptr [ebx + 0x75], 0x43206c61 */
    goto L_100A6AD2; /* falls through past a gap */
L_100A6AD1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A6AD1: inc ebx */
    _flag_k = FK_INC;
L_100A6AD2:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebp = ebp - MEM32(ebx); /* 0x100A6AD2: sub ebp, dword ptr [ebx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(edx + 0x75)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x75) = (uint8_t)(MEM8(edx + 0x75) & LO8(edx)); /* 0x100A6AD4: and byte ptr [edx + 0x75], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AD7; /* falls through past a gap */
L_100A6AD5:
    PUSH32(esp, edx); /* 0x100A6AD5: push edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B46; /* 0x100A6AD6: jne 0x100a6b46 */
    goto L_100A6AD8; /* falls through past a gap */
L_100A6AD7:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AD7: outsb dx, byte ptr [esi] */
L_100A6AD8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6B43; /* 0x100A6AD8: je 0x100a6b43 */
L_100A6ADA:
    void_lift_trap(0x100A6ADAu, "insd dword ptr es:[edi], dx");
L_100A6ADB:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) = (uint8_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) & LO8(ecx)); /* 0x100A6ADB: and byte ptr gs:[ecx + ebp*2 + 0x62], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (0) goto L_100A6B43; /* 0x100A6AE0: jb 0x100a6b43 */
    goto L_100A6AE2; /* falls through past a gap */
L_100A6AE1:
    POPAD(); /* 0x100A6AE1: popal  */
L_100A6AE2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6B5D; /* 0x100A6AE2: jb 0x100a6b5d */
L_100A6AE4:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A6AE4: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A6AE7: in al, dx */
    PUSH32(esp, ebx); /* 0x100A6AE8: push ebx */
    PUSH32(esp, esi); /* 0x100A6AE9: push esi */
L_100A6AEA:
    esi = MEM32(ebp + 0xC); /* 0x100A6AEA: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A6AED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A6AEF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A6AF0: mov edi, dword ptr [ebp + 8] */
    goto L_100A6AF3; /* falls through past a gap */
L_100A6AF2:
    _flag_a = (uint32_t)((MEM8(ebx + (-0x7430743A)) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(ebx + (-0x7430743A)) | LO8(ecx))) << 24;
    MEM8(ebx + (-0x7430743A)) = (uint8_t)(MEM8(ebx + (-0x7430743A)) | LO8(ecx)); /* 0x100A6AF2: or byte ptr [ebx - 0x7430743a], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AF8; /* falls through past a gap */
L_100A6AF3:
    eax = esi; /* 0x100A6AF3: mov eax, esi */
    ecx = edi; /* 0x100A6AF5: mov ecx, edi */
    ebx = edi; /* 0x100A6AF7: mov ebx, edi */
    goto L_100A6AF9; /* falls through past a gap */
L_100A6AF8:
    void_lift_trap(0x100A6AF8u, "fisttp word ptr [edi]");
    goto L_100A6AFA; /* falls through past a gap */
L_100A6AF9:
    if (1) _cf = (((eax) >> 16) & 1u); /* 0x100A6AF9: shld eax, ecx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax));
    goto L_100A6AFD; /* falls through past a gap */
L_100A6AFA:
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100A6AFA: movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFF8110u; /* 0x100A6AFB: enter -0x7ef0, -0x1d */
    goto L_100A6AFF; /* falls through past a gap */
L_100A6AFC:
    { uint32_t _aa = MEM8(ecx + 0xFF00E3), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6AFC: adc byte ptr [ecx + 0xff00e3], al */
      MEM8(ecx + 0xFF00E3) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B02; /* falls through past a gap */
L_100A6AFD:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    ebx = ebx & 0xFF00u; /* 0x100A6AFD: and ebx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B03; /* falls through past a gap */
L_100A6AFE:
    if (ecx == 0) goto L_100A6B00; /* 0x100A6AFE: jecxz 0x100a6b00 */
    goto L_100A6B00; /* falls through past a gap */
L_100A6AFF:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6AFF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B01; /* falls through past a gap */
L_100A6B00:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x100A6B00: inc dword ptr [eax] */
    _flag_k = FK_INC;
    goto L_100A6B02; /* falls through past a gap */
L_100A6B01:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B01: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B03; /* falls through past a gap */
L_100A6B02:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B02: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B04; /* falls through past a gap */
L_100A6B03:
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x100A6B03: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x100A6B03: shl ecx, 0x10 */
    goto L_100A6B06; /* falls through past a gap */
L_100A6B04:
    { int _zc = (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)); if (--ecx != 0 && _zc) goto L_100A6B16; } /* 0x100A6B04: loope 0x100a6b16 */
L_100A6B06:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B06: add ebx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x100A6B08: push 0 */
L_100A6B0A:
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B0A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100A6B0C:
    eax = edi; /* 0x100A6B0C: mov eax, edi */
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B0E: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    eax = eax & 0x00FF0000u; /* 0x100A6B12: and eax, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B17; /* falls through past a gap */
L_100A6B16:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B16: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B18; /* falls through past a gap */
L_100A6B17:
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B17: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B17: shl ebx, 0x10 */
    goto L_100A6B1A; /* falls through past a gap */
L_100A6B18:
    if (ecx == 0) goto L_100A6B2A; /* 0x100A6B18: jecxz 0x100a6b2a */
L_100A6B1A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B1A: add ebx, eax */
    _flag_k = FK_ADD;
    eax = edi; /* 0x100A6B1C: mov eax, edi */
    ecx = POP32_VAL(esp); /* 0x100A6B1E: pop ecx */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B1F: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    eax = eax & 0xFF000000u; /* 0x100A6B21: and eax, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B26; /* falls through past a gap */
L_100A6B22:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B24:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6B24: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B26:
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B26: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
L_100A6B2A:
    PUSH32(esp, 0); /* 0x100A6B2A: push 0 */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B2C: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B2C: shl ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B2F: add ebx, eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x100A6B31: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B33: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B35; /* falls through past a gap */
L_100A6B34:
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x100A6B34: rol ecx, 1 */
    goto L_100A6B36; /* falls through past a gap */
L_100A6B35:
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x100A6B35: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x100A6B35: shr eax, 8 */
    goto L_100A6B38; /* falls through past a gap */
L_100A6B36:
    RECOMP_ICALL(0xEAAE7A43u); /* 0x100A6B36: call 0xeaae7a43 */ /* not lifted */
    RECOMP_FLAGS_IN();
    goto L_100A6B3B; /* falls through past a gap */
L_100A6B38:
    if (1) _cf = (((edx) >> 24) & 1u); /* 0x100A6B38: shld edx, ebx, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx));
    goto L_100A6B3C; /* falls through past a gap */
L_100A6B3B:
    _flag_a = (uint32_t)((MEM8(0xFF00) | HI8(eax))) << 24; _flag_b = (uint32_t)((MEM8(0xFF00) | HI8(eax))) << 24;
    MEM8(0xFF00) = (uint8_t)(MEM8(0xFF00) | HI8(eax)); /* 0x100A6B3B: or byte ptr [0xff00], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B41; /* falls through past a gap */
L_100A6B3C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x100A6B3C: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A6B41:
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x100A6B41: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x100A6B41: shl ebx, 8 */
    goto L_100A6B44; /* falls through past a gap */
L_100A6B43:
    _flag_a = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) | LO8(eax)); /* 0x100A6B43: or byte ptr [ebx], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B45; /* falls through past a gap */
L_100A6B44:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B44: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_100A6B46; /* falls through past a gap */
L_100A6B45:
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x742EEC3A)); /* 0x100A6B45: fmul dword ptr [ebx - 0x742eec3a] */
    goto L_100A6B4B; /* falls through past a gap */
L_100A6B46:
    eax = esi; /* 0x100A6B46: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B48: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edi; /* 0x100A6B4A: mov ecx, edi */
    goto L_100A6B4C; /* falls through past a gap */
L_100A6B4B:
    void_lift_trap(0x100A6B4Bu, "iretd ");
L_100A6B4C:
    if (1) _cf = (((ecx) >> 7) & 1u); /* 0x100A6B4C: shrd ecx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx));
    eax = POP32_VAL(esp); /* 0x100A6B50: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF000000u);
    ecx = ecx & 0xFF000000u; /* 0x100A6B51: and ecx, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B57: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x100A6B59: mov ecx, esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B5B: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100A6B5D:
    if (1) _cf = (((edi) >> 23) & 1u); /* 0x100A6B5D: shrd edi, ecx, 0x18 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = ((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00FF0000u);
    edi = edi & 0x00FF0000u; /* 0x100A6B61: and edi, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x100A6B67: add ebx, edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100A6B69: pop edi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B6A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (24u) _cf = (((esi) >> 23) & 1u); /* 0x100A6B6C: shr esi, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((esi >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 24u; /* 0x100A6B6C: shr esi, 0x18 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x100A6B6F: add ebx, esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100A6B71: pop esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B72: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebx; /* 0x100A6B74: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x100A6B76: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6B77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6B78: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A69C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A69C8u);

L_100A69C8:
    PUSH32(esp, eax); /* 0x100A69C8: push eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6A3A; /* 0x100A69C9: jb 0x100a6a3a */
L_100A69CB:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6A2F; /* 0x100A69CB: jb 0x100a6a2f */
L_100A69CE:
    void_lift_trap(0x100A69CEu, "insd dword ptr es:[edi], dx");
    /* cmp HI8(eax), MEM8(eax) */ /* 0x100A69CF: cmp ah, byte ptr [eax] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x72703C90)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x72703C90) = (uint8_t)(MEM8(eax + 0x72703C90) + LO8(edx)); /* 0x100A69D1: add byte ptr [eax + 0x72703c90], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A69D7: outsd dx, dword ptr [esi] */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A6A3C; /* 0x100A69D8: jb 0x100a6a3c */
L_100A69DB:
    void_lift_trap(0x100A69DBu, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(esi + 0x61)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(esi + 0x61) = (uint8_t)(MEM8(esi + 0x61) & HI8(ecx)); /* 0x100A69DC: and byte ptr [esi + 0x61], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A69DFu, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp + 0x6E))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(GS_BASE + (ebp + 0x6E)) = (uint8_t)(MEM8(GS_BASE + (ebp + 0x6E)) & HI8(edx)); /* 0x100A69E0: and byte ptr gs:[ebp + 0x6e], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x6F) * (int32_t)0x77u); /* 0x100A69E4: imul ebp, dword ptr [esi + 0x6f], 0x77 */
    /* outsb: no port I/O under Win32 */ /* 0x100A69E8: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + 0x656C6946)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x656C6946) = (uint8_t)(MEM8(eax + 0x656C6946) + LO8(edx)); /* 0x100A69E9: add byte ptr ds:[eax + 0x656c6946], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp HI8(eax), MEM8(eax) */ /* 0x100A69F0: cmp ah, byte ptr [eax] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x656E694C)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x656E694C) = (uint8_t)(MEM8(eax + 0x656E694C) + LO8(edx)); /* 0x100A69F2: add byte ptr [eax + 0x656e694c], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp HI8(eax), MEM8(eax) */ /* 0x100A69F8: cmp ah, byte ptr [eax] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x72707845)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x72707845) = (uint8_t)(MEM8(eax + 0x72707845) + LO8(edx)); /* 0x100A69FA: add byte ptr [eax + 0x72707845], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A6A76; /* 0x100A6A00: jae 0x100a6a76 */
L_100A6A03:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x9000203Au); /* 0x100A6A03: imul ebp, dword ptr [edi + 0x6e], 0x9000203a */
    /* nop */ /* 0x100A6A0A: nop  */
    /* nop */ /* 0x100A6A0B: nop  */
    /* nop */ /* 0x100A6A0C: nop  */
    /* nop */ /* 0x100A6A0D: nop  */
    /* nop */ /* 0x100A6A0E: nop  */
    /* nop */ /* 0x100A6A0F: nop  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A6A10: inc esi */
    _flag_k = FK_INC;
    /* outsd: no port I/O under Win32 */ /* 0x100A6A11: outsd dx, dword ptr [esi] */
    if ((_cf != 0)) goto L_100A6A34; /* 0x100A6A12: jb 0x100a6a34 */
L_100A6A14:
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x66) * (int32_t)0x616D726Fu); /* 0x100A6A14: imul ebp, dword ptr [esi + 0x66], 0x616d726f */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A6A86; /* 0x100A6A1B: je 0x100a6a86 */
L_100A6A1D:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A1D: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6A1E: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi + 0x6E) = (uint8_t)(MEM8(edi + 0x6E) & HI8(ecx)); /* 0x100A6A1F: and byte ptr [edi + 0x6e], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(eax + 0x6F) = (uint8_t)(MEM8(eax + 0x6F) & HI8(ecx)); /* 0x100A6A22: and byte ptr [eax + 0x6f], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6A47; /* 0x100A6A25: ja 0x100a6a47 */
L_100A6A27:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6A98; /* 0x100A6A27: jns 0x100a6a98 */
L_100A6A29:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6A9D; /* 0x100A6A29: jne 0x100a6a9d */
L_100A6A2B:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) & HI8(edx)); /* 0x100A6A2B: and byte ptr [eax + 0x72], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A6A2E: outsd dx, dword ptr [esi] */
L_100A6A2F:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6A93; /* 0x100A6A2F: jb 0x100a6a93 */
L_100A6A32:
    void_lift_trap(0x100A6A32u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + 0x61)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebx + 0x61) = (uint8_t)(MEM8(ebx + 0x61) & HI8(eax)); /* 0x100A6A33: and byte ptr [ebx + 0x61], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A36; /* falls through past a gap */
L_100A6A34:
    void_lift_trap(0x100A6A34u, "arpl word ptr [ecx + 0x6e], sp");
    goto L_100A6A37; /* falls through past a gap */
L_100A6A36:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A36: outsb dx, byte ptr [esi] */
L_100A6A37:
    _flag_a = (uint32_t)(MEM8(ebx + 0x61)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebx + 0x61) = (uint8_t)(MEM8(ebx + 0x61) & HI8(eax)); /* 0x100A6A37: and byte ptr [ebx + 0x61], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A3A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AAF; /* 0x100A6A3A: jne 0x100a6aaf */
L_100A6A3C:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + 0x6E))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(GS_BASE + (ecx + 0x6E)) = (uint8_t)(MEM8(GS_BASE + (ecx + 0x6E)) & HI8(eax)); /* 0x100A6A3C: and byte ptr gs:[ecx + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x73)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x73) = (uint8_t)(MEM8(ecx + 0x73) & HI8(eax)); /* 0x100A6A40: and byte ptr [ecx + 0x73], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AAA; /* 0x100A6A43: jae 0x100a6aaa */
L_100A6A45:
    if (0) goto L_100A6ABB; /* 0x100A6A45: jb 0x100a6abb */
L_100A6A47:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x6961660Au); /* 0x100A6A47: imul ebp, dword ptr [edi + 0x6e], 0x6961660a */
    void_lift_trap(0x100A6A4Eu, "insb byte ptr es:[edi], dx");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AC3; /* 0x100A6A4F: jne 0x100a6ac3 */
L_100A6A51:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x20u); /* 0x100A6A51: sub al, 0x20 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6ABB; /* 0x100A6A54: jae 0x100a6abb */
L_100A6A56:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) = (uint8_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) & HI8(edx)); /* 0x100A6A56: and byte ptr gs:[eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(esi + 0x69)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(esi + 0x69) = (uint8_t)(MEM8(esi + 0x69) & LO8(edx)); /* 0x100A6A5B: and byte ptr [esi + 0x69], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AD5; /* 0x100A6A5E: jae 0x100a6ad5 */
L_100A6A60:
    POPAD(); /* 0x100A6A60: popal  */
    void_lift_trap(0x100A6A61u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + 0x2B)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(ebx + 0x2B) = (uint8_t)(MEM8(ebx + 0x2B) & LO8(eax)); /* 0x100A6A62: and byte ptr [ebx + 0x2b], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(eax); /* 0x100A6A65: sub esp, dword ptr [eax] */
    _flag_k = FK_CMP;
    /* outsd: no port I/O under Win32 */ /* 0x100A6A67: outsd dx, dword ptr fs:[esi] */
    void_lift_trap(0x100A6A69u, "arpl word ptr [ebp + 0x6d], si");
    /* outsb: no port I/O under Win32 */ /* 0x100A6A6C: outsb dx, byte ptr gs:[esi] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A6AD1; /* 0x100A6A6E: je 0x100a6ad1 */
L_100A6A70:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A6ADB; /* 0x100A6A70: je 0x100a6adb */
L_100A6A72:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A72: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6A73: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi + 0x6E) = (uint8_t)(MEM8(edi + 0x6E) & HI8(ecx)); /* 0x100A6A74: and byte ptr [edi + 0x6e], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A77; /* falls through past a gap */
L_100A6A76:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A76: outsb dx, byte ptr [esi] */
L_100A6A77:
    _flag_a = (uint32_t)(MEM8(ecx + 0x73)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x73) = (uint8_t)(MEM8(ecx + 0x73) & HI8(eax)); /* 0x100A6A77: and byte ptr [ecx + 0x73], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AE1; /* 0x100A6A7A: jae 0x100a6ae1 */
L_100A6A7C:
    if (0) goto L_100A6AF2; /* 0x100A6A7C: jb 0x100a6af2 */
L_100A6A7E:
    if (1) goto L_100A6A80; /* 0x100A6A7E: jae 0x100a6a80 */
L_100A6A80:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) - LO8(edx)); /* 0x100A6A80: sub byte ptr [eax + 0x72], dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6AF9; /* 0x100A6A83: jae 0x100a6af9 */
L_100A6A86:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & LO8(edx)); /* 0x100A6A86: and byte ptr [edx + 0x65], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFD; /* 0x100A6A89: je 0x100a6afd */
L_100A6A8B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6AAD; /* 0x100A6A8B: jns 0x100a6aad */
L_100A6A8D:
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFE; /* 0x100A6A8D: je 0x100a6afe */
L_100A6A8F:
    _flag_a = (uint32_t)(MEM8(ebp + 0x62)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x62) = (uint8_t)(MEM8(ebp + 0x62) & HI8(eax)); /* 0x100A6A8F: and byte ptr [ebp + 0x62], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A93:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AFC; /* 0x100A6A93: jne 0x100a6afc */
L_100A6A95:
    _flag_a = (uint32_t)(MEM8(eax + ebp * 2 + 0x65)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + ebp * 2 + 0x65) = (uint8_t)(MEM8(eax + ebp * 2 + 0x65) & HI8(edx)); /* 0x100A6A95: and byte ptr [eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A99; /* falls through past a gap */
L_100A6A98:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + 0x70))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(GS_BASE + (ecx + 0x70)) = (uint8_t)(MEM8(GS_BASE + (ecx + 0x70)) & HI8(eax)); /* 0x100A6A98: and byte ptr gs:[ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A9C; /* falls through past a gap */
L_100A6A99:
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x70) = (uint8_t)(MEM8(ecx + 0x70) & HI8(eax)); /* 0x100A6A99: and byte ptr [ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A9C:
    if (CMP_O(_flag_a, _flag_b)) goto L_100A6B0A; /* 0x100A6A9C: jo 0x100a6b0a */
    goto L_100A6A9E; /* falls through past a gap */
L_100A6A9D:
    void_lift_trap(0x100A6A9Du, "insb byte ptr es:[edi], dx");
L_100A6A9E:
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x61) * (int32_t)0x6E6F6974u); /* 0x100A6A9E: imul esp, dword ptr [ebx + 0x61], 0x6e6f6974 */
    _flag_a = (uint32_t)(MEM8(0x54494A20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(0x54494A20) = (uint8_t)(MEM8(0x54494A20) & HI8(ecx)); /* 0x100A6AA5: and byte ptr [0x54494a20], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAB; /* falls through past a gap */
L_100A6AAA:
    PUSH32(esp, esp); /* 0x100A6AAA: push esp */
L_100A6AAB:
    _flag_a = (uint32_t)(MEM8(ebp + 0x75)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(ebp + 0x75) = (uint8_t)(MEM8(ebp + 0x75) & HI8(ecx)); /* 0x100A6AAB: and byte ptr [ebp + 0x75], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAE; /* falls through past a gap */
L_100A6AAD:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B22; /* 0x100A6AAD: jne 0x100a6b22 */
    goto L_100A6AAF; /* falls through past a gap */
L_100A6AAE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B24; /* 0x100A6AAE: jae 0x100a6b24 */
    goto L_100A6AB0; /* falls through past a gap */
L_100A6AAF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AD1; /* 0x100A6AAF: je 0x100a6ad1 */
    goto L_100A6AB1; /* falls through past a gap */
L_100A6AB0:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & HI8(eax)); /* 0x100A6AB0: and byte ptr [edx + 0x65], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB3; /* falls through past a gap */
L_100A6AB1:
    void_lift_trap(0x100A6AB1u, "bound esp, qword ptr [ebp + 0x20]");
    goto L_100A6AB4; /* falls through past a gap */
L_100A6AB3:
    _flag_a = (uint32_t)(MEM8(ebp + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x6E) = (uint8_t)(MEM8(ebp + 0x6E) & HI8(eax)); /* 0x100A6AB3: and byte ptr [ebp + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB6; /* falls through past a gap */
L_100A6AB4:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AB4: outsb dx, byte ptr gs:[esi] */
L_100A6AB6:
    POPAD(); /* 0x100A6AB6: popal  */
    void_lift_trap(0x100A6AB7u, "bound ebp, qword ptr [ebp + 0x64]");
L_100A6ABB:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - eax; /* 0x100A6ABB: sub dword ptr [eax], eax */
    _flag_k = FK_CMP;
    /* nop */ /* 0x100A6ABD: nop  */
    /* nop */ /* 0x100A6ABE: nop  */
    /* nop */ /* 0x100A6ABF: nop  */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A6AC0: dec ebp */
    _flag_k = FK_DEC;
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x72) * (int32_t)0x666F736Fu); /* 0x100A6AC1: imul esp, dword ptr [ebx + 0x72], 0x666f736f */
    goto L_100A6AC8; /* falls through past a gap */
L_100A6AC3:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6B34; /* 0x100A6AC3: jb 0x100a6b34 */
L_100A6AC5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B36; /* 0x100A6AC5: jae 0x100a6b36 */
L_100A6AC7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AEA; /* 0x100A6AC7: je 0x100a6aea */
    goto L_100A6ACA; /* falls through past a gap */
L_100A6AC8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AEA; /* 0x100A6AC8: je 0x100a6aea */
L_100A6ACA:
    PUSH32(esp, esi); /* 0x100A6ACA: push esi */
    esi = (uint32_t)((int32_t)MEM32(ebx + 0x75) * (int32_t)0x43206C61u); /* 0x100A6ACB: imul esi, dword ptr [ebx + 0x75], 0x43206c61 */
    goto L_100A6AD2; /* falls through past a gap */
L_100A6AD1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A6AD1: inc ebx */
    _flag_k = FK_INC;
L_100A6AD2:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebp = ebp - MEM32(ebx); /* 0x100A6AD2: sub ebp, dword ptr [ebx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(edx + 0x75)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x75) = (uint8_t)(MEM8(edx + 0x75) & LO8(edx)); /* 0x100A6AD4: and byte ptr [edx + 0x75], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AD7; /* falls through past a gap */
L_100A6AD5:
    PUSH32(esp, edx); /* 0x100A6AD5: push edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B46; /* 0x100A6AD6: jne 0x100a6b46 */
    goto L_100A6AD8; /* falls through past a gap */
L_100A6AD7:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AD7: outsb dx, byte ptr [esi] */
L_100A6AD8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6B43; /* 0x100A6AD8: je 0x100a6b43 */
L_100A6ADA:
    void_lift_trap(0x100A6ADAu, "insd dword ptr es:[edi], dx");
L_100A6ADB:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) = (uint8_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) & LO8(ecx)); /* 0x100A6ADB: and byte ptr gs:[ecx + ebp*2 + 0x62], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (0) goto L_100A6B43; /* 0x100A6AE0: jb 0x100a6b43 */
    goto L_100A6AE2; /* falls through past a gap */
L_100A6AE1:
    POPAD(); /* 0x100A6AE1: popal  */
L_100A6AE2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6B5D; /* 0x100A6AE2: jb 0x100a6b5d */
L_100A6AE4:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A6AE4: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A6AE7: in al, dx */
    PUSH32(esp, ebx); /* 0x100A6AE8: push ebx */
    PUSH32(esp, esi); /* 0x100A6AE9: push esi */
L_100A6AEA:
    esi = MEM32(ebp + 0xC); /* 0x100A6AEA: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A6AED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A6AEF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A6AF0: mov edi, dword ptr [ebp + 8] */
    goto L_100A6AF3; /* falls through past a gap */
L_100A6AF2:
    _flag_a = (uint32_t)((MEM8(ebx + (-0x7430743A)) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(ebx + (-0x7430743A)) | LO8(ecx))) << 24;
    MEM8(ebx + (-0x7430743A)) = (uint8_t)(MEM8(ebx + (-0x7430743A)) | LO8(ecx)); /* 0x100A6AF2: or byte ptr [ebx - 0x7430743a], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AF8; /* falls through past a gap */
L_100A6AF3:
    eax = esi; /* 0x100A6AF3: mov eax, esi */
    ecx = edi; /* 0x100A6AF5: mov ecx, edi */
    ebx = edi; /* 0x100A6AF7: mov ebx, edi */
    goto L_100A6AF9; /* falls through past a gap */
L_100A6AF8:
    void_lift_trap(0x100A6AF8u, "fisttp word ptr [edi]");
    goto L_100A6AFA; /* falls through past a gap */
L_100A6AF9:
    if (1) _cf = (((eax) >> 16) & 1u); /* 0x100A6AF9: shld eax, ecx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax));
    goto L_100A6AFD; /* falls through past a gap */
L_100A6AFA:
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100A6AFA: movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFF8110u; /* 0x100A6AFB: enter -0x7ef0, -0x1d */
    goto L_100A6AFF; /* falls through past a gap */
L_100A6AFC:
    { uint32_t _aa = MEM8(ecx + 0xFF00E3), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6AFC: adc byte ptr [ecx + 0xff00e3], al */
      MEM8(ecx + 0xFF00E3) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B02; /* falls through past a gap */
L_100A6AFD:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    ebx = ebx & 0xFF00u; /* 0x100A6AFD: and ebx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B03; /* falls through past a gap */
L_100A6AFE:
    if (ecx == 0) goto L_100A6B00; /* 0x100A6AFE: jecxz 0x100a6b00 */
    goto L_100A6B00; /* falls through past a gap */
L_100A6AFF:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6AFF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B01; /* falls through past a gap */
L_100A6B00:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x100A6B00: inc dword ptr [eax] */
    _flag_k = FK_INC;
    goto L_100A6B02; /* falls through past a gap */
L_100A6B01:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B01: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B03; /* falls through past a gap */
L_100A6B02:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B02: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B04; /* falls through past a gap */
L_100A6B03:
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x100A6B03: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x100A6B03: shl ecx, 0x10 */
    goto L_100A6B06; /* falls through past a gap */
L_100A6B04:
    { int _zc = (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)); if (--ecx != 0 && _zc) goto L_100A6B16; } /* 0x100A6B04: loope 0x100a6b16 */
L_100A6B06:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B06: add ebx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x100A6B08: push 0 */
L_100A6B0A:
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B0A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = edi; /* 0x100A6B0C: mov eax, edi */
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B0E: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    eax = eax & 0x00FF0000u; /* 0x100A6B12: and eax, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B17; /* falls through past a gap */
L_100A6B16:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B16: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B18; /* falls through past a gap */
L_100A6B17:
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B17: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B17: shl ebx, 0x10 */
    goto L_100A6B1A; /* falls through past a gap */
L_100A6B18:
    if (ecx == 0) goto L_100A6B2A; /* 0x100A6B18: jecxz 0x100a6b2a */
L_100A6B1A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B1A: add ebx, eax */
    _flag_k = FK_ADD;
    eax = edi; /* 0x100A6B1C: mov eax, edi */
    ecx = POP32_VAL(esp); /* 0x100A6B1E: pop ecx */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B1F: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    eax = eax & 0xFF000000u; /* 0x100A6B21: and eax, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B26; /* falls through past a gap */
L_100A6B22:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B24:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6B24: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B26:
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B26: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
L_100A6B2A:
    PUSH32(esp, 0); /* 0x100A6B2A: push 0 */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B2C: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B2C: shl ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B2F: add ebx, eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x100A6B31: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B33: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B35; /* falls through past a gap */
L_100A6B34:
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x100A6B34: rol ecx, 1 */
    goto L_100A6B36; /* falls through past a gap */
L_100A6B35:
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x100A6B35: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x100A6B35: shr eax, 8 */
    goto L_100A6B38; /* falls through past a gap */
L_100A6B36:
    RECOMP_ICALL(0xEAAE7A43u); /* 0x100A6B36: call 0xeaae7a43 */ /* not lifted */
    RECOMP_FLAGS_IN();
    goto L_100A6B3B; /* falls through past a gap */
L_100A6B38:
    if (1) _cf = (((edx) >> 24) & 1u); /* 0x100A6B38: shld edx, ebx, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx));
    goto L_100A6B3C; /* falls through past a gap */
L_100A6B3B:
    _flag_a = (uint32_t)((MEM8(0xFF00) | HI8(eax))) << 24; _flag_b = (uint32_t)((MEM8(0xFF00) | HI8(eax))) << 24;
    MEM8(0xFF00) = (uint8_t)(MEM8(0xFF00) | HI8(eax)); /* 0x100A6B3B: or byte ptr [0xff00], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B41; /* falls through past a gap */
L_100A6B3C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x100A6B3C: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A6B41:
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x100A6B41: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x100A6B41: shl ebx, 8 */
    goto L_100A6B44; /* falls through past a gap */
L_100A6B43:
    _flag_a = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) | LO8(eax)); /* 0x100A6B43: or byte ptr [ebx], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B45; /* falls through past a gap */
L_100A6B44:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B44: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_100A6B46; /* falls through past a gap */
L_100A6B45:
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x742EEC3A)); /* 0x100A6B45: fmul dword ptr [ebx - 0x742eec3a] */
    goto L_100A6B4B; /* falls through past a gap */
L_100A6B46:
    eax = esi; /* 0x100A6B46: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B48: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edi; /* 0x100A6B4A: mov ecx, edi */
    goto L_100A6B4C; /* falls through past a gap */
L_100A6B4B:
    void_lift_trap(0x100A6B4Bu, "iretd ");
L_100A6B4C:
    if (1) _cf = (((ecx) >> 7) & 1u); /* 0x100A6B4C: shrd ecx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx));
    eax = POP32_VAL(esp); /* 0x100A6B50: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF000000u);
    ecx = ecx & 0xFF000000u; /* 0x100A6B51: and ecx, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B57: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x100A6B59: mov ecx, esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B5B: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100A6B5D:
    if (1) _cf = (((edi) >> 23) & 1u); /* 0x100A6B5D: shrd edi, ecx, 0x18 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = ((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00FF0000u);
    edi = edi & 0x00FF0000u; /* 0x100A6B61: and edi, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x100A6B67: add ebx, edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100A6B69: pop edi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B6A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (24u) _cf = (((esi) >> 23) & 1u); /* 0x100A6B6C: shr esi, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((esi >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 24u; /* 0x100A6B6C: shr esi, 0x18 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x100A6B6F: add ebx, esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100A6B71: pop esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B72: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebx; /* 0x100A6B74: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x100A6B76: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6B77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6B78: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A69D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A69D4u);

L_100A69D4:
    /* cmp LO8(eax), 0x70u */ /* 0x100A69D4: cmp al, 0x70 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x70u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_100A6A47; /* 0x100A69D6: jb 0x100a6a47 */
L_100A69D8:
    if (CMP_B(_flag_a, _flag_b)) goto L_100A6A3C; /* 0x100A69D8: jb 0x100a6a3c */
L_100A69DB:
    void_lift_trap(0x100A69DBu, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(esi + 0x61)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(esi + 0x61) = (uint8_t)(MEM8(esi + 0x61) & HI8(ecx)); /* 0x100A69DC: and byte ptr [esi + 0x61], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A69DFu, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp + 0x6E))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(GS_BASE + (ebp + 0x6E)) = (uint8_t)(MEM8(GS_BASE + (ebp + 0x6E)) & HI8(edx)); /* 0x100A69E0: and byte ptr gs:[ebp + 0x6e], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x6F) * (int32_t)0x77u); /* 0x100A69E4: imul ebp, dword ptr [esi + 0x6f], 0x77 */
    /* outsb: no port I/O under Win32 */ /* 0x100A69E8: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + 0x656C6946)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x656C6946) = (uint8_t)(MEM8(eax + 0x656C6946) + LO8(edx)); /* 0x100A69E9: add byte ptr ds:[eax + 0x656c6946], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp HI8(eax), MEM8(eax) */ /* 0x100A69F0: cmp ah, byte ptr [eax] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x656E694C)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x656E694C) = (uint8_t)(MEM8(eax + 0x656E694C) + LO8(edx)); /* 0x100A69F2: add byte ptr [eax + 0x656e694c], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp HI8(eax), MEM8(eax) */ /* 0x100A69F8: cmp ah, byte ptr [eax] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x72707845)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x72707845) = (uint8_t)(MEM8(eax + 0x72707845) + LO8(edx)); /* 0x100A69FA: add byte ptr [eax + 0x72707845], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A6A76; /* 0x100A6A00: jae 0x100a6a76 */
L_100A6A03:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x9000203Au); /* 0x100A6A03: imul ebp, dword ptr [edi + 0x6e], 0x9000203a */
    /* nop */ /* 0x100A6A0A: nop  */
    /* nop */ /* 0x100A6A0B: nop  */
    /* nop */ /* 0x100A6A0C: nop  */
    /* nop */ /* 0x100A6A0D: nop  */
    /* nop */ /* 0x100A6A0E: nop  */
    /* nop */ /* 0x100A6A0F: nop  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A6A10: inc esi */
    _flag_k = FK_INC;
    /* outsd: no port I/O under Win32 */ /* 0x100A6A11: outsd dx, dword ptr [esi] */
    if ((_cf != 0)) goto L_100A6A34; /* 0x100A6A12: jb 0x100a6a34 */
L_100A6A14:
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x66) * (int32_t)0x616D726Fu); /* 0x100A6A14: imul ebp, dword ptr [esi + 0x66], 0x616d726f */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A6A86; /* 0x100A6A1B: je 0x100a6a86 */
L_100A6A1D:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A1D: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6A1E: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi + 0x6E) = (uint8_t)(MEM8(edi + 0x6E) & HI8(ecx)); /* 0x100A6A1F: and byte ptr [edi + 0x6e], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(eax + 0x6F) = (uint8_t)(MEM8(eax + 0x6F) & HI8(ecx)); /* 0x100A6A22: and byte ptr [eax + 0x6f], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6A47; /* 0x100A6A25: ja 0x100a6a47 */
L_100A6A27:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6A98; /* 0x100A6A27: jns 0x100a6a98 */
L_100A6A29:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6A9D; /* 0x100A6A29: jne 0x100a6a9d */
L_100A6A2B:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) & HI8(edx)); /* 0x100A6A2B: and byte ptr [eax + 0x72], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A6A2E: outsd dx, dword ptr [esi] */
    if (0) goto L_100A6A93; /* 0x100A6A2F: jb 0x100a6a93 */
L_100A6A32:
    void_lift_trap(0x100A6A32u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + 0x61)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebx + 0x61) = (uint8_t)(MEM8(ebx + 0x61) & HI8(eax)); /* 0x100A6A33: and byte ptr [ebx + 0x61], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A36; /* falls through past a gap */
L_100A6A34:
    void_lift_trap(0x100A6A34u, "arpl word ptr [ecx + 0x6e], sp");
    goto L_100A6A37; /* falls through past a gap */
L_100A6A36:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A36: outsb dx, byte ptr [esi] */
L_100A6A37:
    _flag_a = (uint32_t)(MEM8(ebx + 0x61)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebx + 0x61) = (uint8_t)(MEM8(ebx + 0x61) & HI8(eax)); /* 0x100A6A37: and byte ptr [ebx + 0x61], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6AAF; /* 0x100A6A3A: jne 0x100a6aaf */
L_100A6A3C:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + 0x6E))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(GS_BASE + (ecx + 0x6E)) = (uint8_t)(MEM8(GS_BASE + (ecx + 0x6E)) & HI8(eax)); /* 0x100A6A3C: and byte ptr gs:[ecx + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x73)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x73) = (uint8_t)(MEM8(ecx + 0x73) & HI8(eax)); /* 0x100A6A40: and byte ptr [ecx + 0x73], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AAA; /* 0x100A6A43: jae 0x100a6aaa */
L_100A6A45:
    if (0) goto L_100A6ABB; /* 0x100A6A45: jb 0x100a6abb */
L_100A6A47:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x6961660Au); /* 0x100A6A47: imul ebp, dword ptr [edi + 0x6e], 0x6961660a */
    void_lift_trap(0x100A6A4Eu, "insb byte ptr es:[edi], dx");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AC3; /* 0x100A6A4F: jne 0x100a6ac3 */
L_100A6A51:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x20u); /* 0x100A6A51: sub al, 0x20 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6ABB; /* 0x100A6A54: jae 0x100a6abb */
L_100A6A56:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) = (uint8_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) & HI8(edx)); /* 0x100A6A56: and byte ptr gs:[eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(esi + 0x69)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(esi + 0x69) = (uint8_t)(MEM8(esi + 0x69) & LO8(edx)); /* 0x100A6A5B: and byte ptr [esi + 0x69], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AD5; /* 0x100A6A5E: jae 0x100a6ad5 */
L_100A6A60:
    POPAD(); /* 0x100A6A60: popal  */
    void_lift_trap(0x100A6A61u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + 0x2B)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(ebx + 0x2B) = (uint8_t)(MEM8(ebx + 0x2B) & LO8(eax)); /* 0x100A6A62: and byte ptr [ebx + 0x2b], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(eax); /* 0x100A6A65: sub esp, dword ptr [eax] */
    _flag_k = FK_CMP;
    /* outsd: no port I/O under Win32 */ /* 0x100A6A67: outsd dx, dword ptr fs:[esi] */
    void_lift_trap(0x100A6A69u, "arpl word ptr [ebp + 0x6d], si");
    /* outsb: no port I/O under Win32 */ /* 0x100A6A6C: outsb dx, byte ptr gs:[esi] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A6AD1; /* 0x100A6A6E: je 0x100a6ad1 */
L_100A6A70:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A6ADB; /* 0x100A6A70: je 0x100a6adb */
L_100A6A72:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A72: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6A73: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi + 0x6E) = (uint8_t)(MEM8(edi + 0x6E) & HI8(ecx)); /* 0x100A6A74: and byte ptr [edi + 0x6e], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A77; /* falls through past a gap */
L_100A6A76:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A76: outsb dx, byte ptr [esi] */
L_100A6A77:
    _flag_a = (uint32_t)(MEM8(ecx + 0x73)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x73) = (uint8_t)(MEM8(ecx + 0x73) & HI8(eax)); /* 0x100A6A77: and byte ptr [ecx + 0x73], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AE1; /* 0x100A6A7A: jae 0x100a6ae1 */
L_100A6A7C:
    if (0) goto L_100A6AF2; /* 0x100A6A7C: jb 0x100a6af2 */
L_100A6A7E:
    if (1) goto L_100A6A80; /* 0x100A6A7E: jae 0x100a6a80 */
L_100A6A80:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) - LO8(edx)); /* 0x100A6A80: sub byte ptr [eax + 0x72], dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6AF9; /* 0x100A6A83: jae 0x100a6af9 */
L_100A6A86:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & LO8(edx)); /* 0x100A6A86: and byte ptr [edx + 0x65], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFD; /* 0x100A6A89: je 0x100a6afd */
L_100A6A8B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6AAD; /* 0x100A6A8B: jns 0x100a6aad */
L_100A6A8D:
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFE; /* 0x100A6A8D: je 0x100a6afe */
L_100A6A8F:
    _flag_a = (uint32_t)(MEM8(ebp + 0x62)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x62) = (uint8_t)(MEM8(ebp + 0x62) & HI8(eax)); /* 0x100A6A8F: and byte ptr [ebp + 0x62], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A93:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AFC; /* 0x100A6A93: jne 0x100a6afc */
L_100A6A95:
    _flag_a = (uint32_t)(MEM8(eax + ebp * 2 + 0x65)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + ebp * 2 + 0x65) = (uint8_t)(MEM8(eax + ebp * 2 + 0x65) & HI8(edx)); /* 0x100A6A95: and byte ptr [eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A99; /* falls through past a gap */
L_100A6A98:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + 0x70))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(GS_BASE + (ecx + 0x70)) = (uint8_t)(MEM8(GS_BASE + (ecx + 0x70)) & HI8(eax)); /* 0x100A6A98: and byte ptr gs:[ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A9C; /* falls through past a gap */
L_100A6A99:
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x70) = (uint8_t)(MEM8(ecx + 0x70) & HI8(eax)); /* 0x100A6A99: and byte ptr [ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A9C:
    if (CMP_O(_flag_a, _flag_b)) goto L_100A6B0A; /* 0x100A6A9C: jo 0x100a6b0a */
    goto L_100A6A9E; /* falls through past a gap */
L_100A6A9D:
    void_lift_trap(0x100A6A9Du, "insb byte ptr es:[edi], dx");
L_100A6A9E:
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x61) * (int32_t)0x6E6F6974u); /* 0x100A6A9E: imul esp, dword ptr [ebx + 0x61], 0x6e6f6974 */
    _flag_a = (uint32_t)(MEM8(0x54494A20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(0x54494A20) = (uint8_t)(MEM8(0x54494A20) & HI8(ecx)); /* 0x100A6AA5: and byte ptr [0x54494a20], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAB; /* falls through past a gap */
L_100A6AAA:
    PUSH32(esp, esp); /* 0x100A6AAA: push esp */
L_100A6AAB:
    _flag_a = (uint32_t)(MEM8(ebp + 0x75)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(ebp + 0x75) = (uint8_t)(MEM8(ebp + 0x75) & HI8(ecx)); /* 0x100A6AAB: and byte ptr [ebp + 0x75], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAE; /* falls through past a gap */
L_100A6AAD:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B22; /* 0x100A6AAD: jne 0x100a6b22 */
    goto L_100A6AAF; /* falls through past a gap */
L_100A6AAE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B24; /* 0x100A6AAE: jae 0x100a6b24 */
    goto L_100A6AB0; /* falls through past a gap */
L_100A6AAF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AD1; /* 0x100A6AAF: je 0x100a6ad1 */
    goto L_100A6AB1; /* falls through past a gap */
L_100A6AB0:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & HI8(eax)); /* 0x100A6AB0: and byte ptr [edx + 0x65], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB3; /* falls through past a gap */
L_100A6AB1:
    void_lift_trap(0x100A6AB1u, "bound esp, qword ptr [ebp + 0x20]");
    goto L_100A6AB4; /* falls through past a gap */
L_100A6AB3:
    _flag_a = (uint32_t)(MEM8(ebp + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x6E) = (uint8_t)(MEM8(ebp + 0x6E) & HI8(eax)); /* 0x100A6AB3: and byte ptr [ebp + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB6; /* falls through past a gap */
L_100A6AB4:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AB4: outsb dx, byte ptr gs:[esi] */
L_100A6AB6:
    POPAD(); /* 0x100A6AB6: popal  */
    void_lift_trap(0x100A6AB7u, "bound ebp, qword ptr [ebp + 0x64]");
L_100A6ABB:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - eax; /* 0x100A6ABB: sub dword ptr [eax], eax */
    _flag_k = FK_CMP;
    /* nop */ /* 0x100A6ABD: nop  */
    /* nop */ /* 0x100A6ABE: nop  */
    /* nop */ /* 0x100A6ABF: nop  */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A6AC0: dec ebp */
    _flag_k = FK_DEC;
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x72) * (int32_t)0x666F736Fu); /* 0x100A6AC1: imul esp, dword ptr [ebx + 0x72], 0x666f736f */
    goto L_100A6AC8; /* falls through past a gap */
L_100A6AC3:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6B34; /* 0x100A6AC3: jb 0x100a6b34 */
L_100A6AC5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B36; /* 0x100A6AC5: jae 0x100a6b36 */
L_100A6AC7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AEA; /* 0x100A6AC7: je 0x100a6aea */
    goto L_100A6ACA; /* falls through past a gap */
L_100A6AC8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AEA; /* 0x100A6AC8: je 0x100a6aea */
L_100A6ACA:
    PUSH32(esp, esi); /* 0x100A6ACA: push esi */
    esi = (uint32_t)((int32_t)MEM32(ebx + 0x75) * (int32_t)0x43206C61u); /* 0x100A6ACB: imul esi, dword ptr [ebx + 0x75], 0x43206c61 */
    goto L_100A6AD2; /* falls through past a gap */
L_100A6AD1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A6AD1: inc ebx */
    _flag_k = FK_INC;
L_100A6AD2:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebp = ebp - MEM32(ebx); /* 0x100A6AD2: sub ebp, dword ptr [ebx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(edx + 0x75)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x75) = (uint8_t)(MEM8(edx + 0x75) & LO8(edx)); /* 0x100A6AD4: and byte ptr [edx + 0x75], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AD7; /* falls through past a gap */
L_100A6AD5:
    PUSH32(esp, edx); /* 0x100A6AD5: push edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B46; /* 0x100A6AD6: jne 0x100a6b46 */
    goto L_100A6AD8; /* falls through past a gap */
L_100A6AD7:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AD7: outsb dx, byte ptr [esi] */
L_100A6AD8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6B43; /* 0x100A6AD8: je 0x100a6b43 */
L_100A6ADA:
    void_lift_trap(0x100A6ADAu, "insd dword ptr es:[edi], dx");
L_100A6ADB:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) = (uint8_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) & LO8(ecx)); /* 0x100A6ADB: and byte ptr gs:[ecx + ebp*2 + 0x62], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (0) goto L_100A6B43; /* 0x100A6AE0: jb 0x100a6b43 */
    goto L_100A6AE2; /* falls through past a gap */
L_100A6AE1:
    POPAD(); /* 0x100A6AE1: popal  */
L_100A6AE2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6B5D; /* 0x100A6AE2: jb 0x100a6b5d */
L_100A6AE4:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A6AE4: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A6AE7: in al, dx */
    PUSH32(esp, ebx); /* 0x100A6AE8: push ebx */
    PUSH32(esp, esi); /* 0x100A6AE9: push esi */
L_100A6AEA:
    esi = MEM32(ebp + 0xC); /* 0x100A6AEA: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A6AED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A6AEF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A6AF0: mov edi, dword ptr [ebp + 8] */
    goto L_100A6AF3; /* falls through past a gap */
L_100A6AF2:
    _flag_a = (uint32_t)((MEM8(ebx + (-0x7430743A)) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(ebx + (-0x7430743A)) | LO8(ecx))) << 24;
    MEM8(ebx + (-0x7430743A)) = (uint8_t)(MEM8(ebx + (-0x7430743A)) | LO8(ecx)); /* 0x100A6AF2: or byte ptr [ebx - 0x7430743a], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AF8; /* falls through past a gap */
L_100A6AF3:
    eax = esi; /* 0x100A6AF3: mov eax, esi */
    ecx = edi; /* 0x100A6AF5: mov ecx, edi */
    ebx = edi; /* 0x100A6AF7: mov ebx, edi */
    goto L_100A6AF9; /* falls through past a gap */
L_100A6AF8:
    void_lift_trap(0x100A6AF8u, "fisttp word ptr [edi]");
    goto L_100A6AFA; /* falls through past a gap */
L_100A6AF9:
    if (1) _cf = (((eax) >> 16) & 1u); /* 0x100A6AF9: shld eax, ecx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax));
    goto L_100A6AFD; /* falls through past a gap */
L_100A6AFA:
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100A6AFA: movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFF8110u; /* 0x100A6AFB: enter -0x7ef0, -0x1d */
    goto L_100A6AFF; /* falls through past a gap */
L_100A6AFC:
    { uint32_t _aa = MEM8(ecx + 0xFF00E3), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6AFC: adc byte ptr [ecx + 0xff00e3], al */
      MEM8(ecx + 0xFF00E3) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B02; /* falls through past a gap */
L_100A6AFD:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    ebx = ebx & 0xFF00u; /* 0x100A6AFD: and ebx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B03; /* falls through past a gap */
L_100A6AFE:
    if (ecx == 0) goto L_100A6B00; /* 0x100A6AFE: jecxz 0x100a6b00 */
    goto L_100A6B00; /* falls through past a gap */
L_100A6AFF:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6AFF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B01; /* falls through past a gap */
L_100A6B00:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x100A6B00: inc dword ptr [eax] */
    _flag_k = FK_INC;
    goto L_100A6B02; /* falls through past a gap */
L_100A6B01:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B01: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B03; /* falls through past a gap */
L_100A6B02:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B02: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B04; /* falls through past a gap */
L_100A6B03:
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x100A6B03: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x100A6B03: shl ecx, 0x10 */
    goto L_100A6B06; /* falls through past a gap */
L_100A6B04:
    { int _zc = (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)); if (--ecx != 0 && _zc) goto L_100A6B16; } /* 0x100A6B04: loope 0x100a6b16 */
L_100A6B06:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B06: add ebx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x100A6B08: push 0 */
L_100A6B0A:
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B0A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = edi; /* 0x100A6B0C: mov eax, edi */
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B0E: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    eax = eax & 0x00FF0000u; /* 0x100A6B12: and eax, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B17; /* falls through past a gap */
L_100A6B16:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B16: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B18; /* falls through past a gap */
L_100A6B17:
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B17: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B17: shl ebx, 0x10 */
    goto L_100A6B1A; /* falls through past a gap */
L_100A6B18:
    if (ecx == 0) goto L_100A6B2A; /* 0x100A6B18: jecxz 0x100a6b2a */
L_100A6B1A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B1A: add ebx, eax */
    _flag_k = FK_ADD;
    eax = edi; /* 0x100A6B1C: mov eax, edi */
    ecx = POP32_VAL(esp); /* 0x100A6B1E: pop ecx */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B1F: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    eax = eax & 0xFF000000u; /* 0x100A6B21: and eax, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B26; /* falls through past a gap */
L_100A6B22:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B24:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6B24: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B26:
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B26: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
L_100A6B2A:
    PUSH32(esp, 0); /* 0x100A6B2A: push 0 */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B2C: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B2C: shl ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B2F: add ebx, eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x100A6B31: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B33: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B35; /* falls through past a gap */
L_100A6B34:
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x100A6B34: rol ecx, 1 */
    goto L_100A6B36; /* falls through past a gap */
L_100A6B35:
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x100A6B35: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x100A6B35: shr eax, 8 */
    goto L_100A6B38; /* falls through past a gap */
L_100A6B36:
    RECOMP_ICALL(0xEAAE7A43u); /* 0x100A6B36: call 0xeaae7a43 */ /* not lifted */
    RECOMP_FLAGS_IN();
    goto L_100A6B3B; /* falls through past a gap */
L_100A6B38:
    if (1) _cf = (((edx) >> 24) & 1u); /* 0x100A6B38: shld edx, ebx, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx));
    goto L_100A6B3C; /* falls through past a gap */
L_100A6B3B:
    _flag_a = (uint32_t)((MEM8(0xFF00) | HI8(eax))) << 24; _flag_b = (uint32_t)((MEM8(0xFF00) | HI8(eax))) << 24;
    MEM8(0xFF00) = (uint8_t)(MEM8(0xFF00) | HI8(eax)); /* 0x100A6B3B: or byte ptr [0xff00], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B41; /* falls through past a gap */
L_100A6B3C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x100A6B3C: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A6B41:
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x100A6B41: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x100A6B41: shl ebx, 8 */
    goto L_100A6B44; /* falls through past a gap */
L_100A6B43:
    _flag_a = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) | LO8(eax)); /* 0x100A6B43: or byte ptr [ebx], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B45; /* falls through past a gap */
L_100A6B44:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B44: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_100A6B46; /* falls through past a gap */
L_100A6B45:
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x742EEC3A)); /* 0x100A6B45: fmul dword ptr [ebx - 0x742eec3a] */
    goto L_100A6B4B; /* falls through past a gap */
L_100A6B46:
    eax = esi; /* 0x100A6B46: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B48: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edi; /* 0x100A6B4A: mov ecx, edi */
    goto L_100A6B4C; /* falls through past a gap */
L_100A6B4B:
    void_lift_trap(0x100A6B4Bu, "iretd ");
L_100A6B4C:
    if (1) _cf = (((ecx) >> 7) & 1u); /* 0x100A6B4C: shrd ecx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx));
    eax = POP32_VAL(esp); /* 0x100A6B50: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF000000u);
    ecx = ecx & 0xFF000000u; /* 0x100A6B51: and ecx, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B57: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x100A6B59: mov ecx, esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B5B: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100A6B5D:
    if (1) _cf = (((edi) >> 23) & 1u); /* 0x100A6B5D: shrd edi, ecx, 0x18 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = ((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00FF0000u);
    edi = edi & 0x00FF0000u; /* 0x100A6B61: and edi, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x100A6B67: add ebx, edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100A6B69: pop edi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B6A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (24u) _cf = (((esi) >> 23) & 1u); /* 0x100A6B6C: shr esi, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((esi >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 24u; /* 0x100A6B6C: shr esi, 0x18 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x100A6B6F: add ebx, esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100A6B71: pop esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B72: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebx; /* 0x100A6B74: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x100A6B76: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6B77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6B78: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A69EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A69ECu);

L_100A69EC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A69EC: inc esi */
    _flag_k = FK_INC;
    ebp = (uint32_t)((int32_t)MEM32(ebp + 0x3A) * (int32_t)0x4C900020u); /* 0x100A69ED: imul ebp, dword ptr [ebp + 0x3a], 0x4c900020 */
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x65) * (int32_t)0x9000203Au); /* 0x100A69F5: imul ebp, dword ptr [esi + 0x65], 0x9000203a */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100A69FC: inc ebp */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_100A6A6F; /* 0x100A69FD: js 0x100a6a6f */
L_100A69FF:
    if ((_cf != 0)) goto L_100A6A66; /* 0x100A69FF: jb 0x100a6a66 */
L_100A6A01:
    if ((_cf == 0)) goto L_100A6A76; /* 0x100A6A01: jae 0x100a6a76 */
L_100A6A03:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x9000203Au); /* 0x100A6A03: imul ebp, dword ptr [edi + 0x6e], 0x9000203a */
    /* nop */ /* 0x100A6A0A: nop  */
    /* nop */ /* 0x100A6A0B: nop  */
    /* nop */ /* 0x100A6A0C: nop  */
    /* nop */ /* 0x100A6A0D: nop  */
    /* nop */ /* 0x100A6A0E: nop  */
    /* nop */ /* 0x100A6A0F: nop  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A6A10: inc esi */
    _flag_k = FK_INC;
    /* outsd: no port I/O under Win32 */ /* 0x100A6A11: outsd dx, dword ptr [esi] */
    if ((_cf != 0)) goto L_100A6A34; /* 0x100A6A12: jb 0x100a6a34 */
L_100A6A14:
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x66) * (int32_t)0x616D726Fu); /* 0x100A6A14: imul ebp, dword ptr [esi + 0x66], 0x616d726f */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A6A86; /* 0x100A6A1B: je 0x100a6a86 */
L_100A6A1D:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A1D: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6A1E: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi + 0x6E) = (uint8_t)(MEM8(edi + 0x6E) & HI8(ecx)); /* 0x100A6A1F: and byte ptr [edi + 0x6e], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(eax + 0x6F) = (uint8_t)(MEM8(eax + 0x6F) & HI8(ecx)); /* 0x100A6A22: and byte ptr [eax + 0x6f], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6A47; /* 0x100A6A25: ja 0x100a6a47 */
L_100A6A27:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6A98; /* 0x100A6A27: jns 0x100a6a98 */
L_100A6A29:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6A9D; /* 0x100A6A29: jne 0x100a6a9d */
L_100A6A2B:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) & HI8(edx)); /* 0x100A6A2B: and byte ptr [eax + 0x72], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A6A2E: outsd dx, dword ptr [esi] */
    if (0) goto L_100A6A93; /* 0x100A6A2F: jb 0x100a6a93 */
L_100A6A32:
    void_lift_trap(0x100A6A32u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + 0x61)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebx + 0x61) = (uint8_t)(MEM8(ebx + 0x61) & HI8(eax)); /* 0x100A6A33: and byte ptr [ebx + 0x61], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A36; /* falls through past a gap */
L_100A6A34:
    void_lift_trap(0x100A6A34u, "arpl word ptr [ecx + 0x6e], sp");
    goto L_100A6A37; /* falls through past a gap */
L_100A6A36:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A36: outsb dx, byte ptr [esi] */
L_100A6A37:
    _flag_a = (uint32_t)(MEM8(ebx + 0x61)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebx + 0x61) = (uint8_t)(MEM8(ebx + 0x61) & HI8(eax)); /* 0x100A6A37: and byte ptr [ebx + 0x61], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6AAF; /* 0x100A6A3A: jne 0x100a6aaf */
L_100A6A3C:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + 0x6E))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(GS_BASE + (ecx + 0x6E)) = (uint8_t)(MEM8(GS_BASE + (ecx + 0x6E)) & HI8(eax)); /* 0x100A6A3C: and byte ptr gs:[ecx + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x73)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x73) = (uint8_t)(MEM8(ecx + 0x73) & HI8(eax)); /* 0x100A6A40: and byte ptr [ecx + 0x73], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AAA; /* 0x100A6A43: jae 0x100a6aaa */
L_100A6A45:
    if (0) goto L_100A6ABB; /* 0x100A6A45: jb 0x100a6abb */
L_100A6A47:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x6961660Au); /* 0x100A6A47: imul ebp, dword ptr [edi + 0x6e], 0x6961660a */
    void_lift_trap(0x100A6A4Eu, "insb byte ptr es:[edi], dx");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AC3; /* 0x100A6A4F: jne 0x100a6ac3 */
L_100A6A51:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x20u); /* 0x100A6A51: sub al, 0x20 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6ABB; /* 0x100A6A54: jae 0x100a6abb */
L_100A6A56:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) = (uint8_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) & HI8(edx)); /* 0x100A6A56: and byte ptr gs:[eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(esi + 0x69)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(esi + 0x69) = (uint8_t)(MEM8(esi + 0x69) & LO8(edx)); /* 0x100A6A5B: and byte ptr [esi + 0x69], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AD5; /* 0x100A6A5E: jae 0x100a6ad5 */
L_100A6A60:
    POPAD(); /* 0x100A6A60: popal  */
    void_lift_trap(0x100A6A61u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + 0x2B)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(ebx + 0x2B) = (uint8_t)(MEM8(ebx + 0x2B) & LO8(eax)); /* 0x100A6A62: and byte ptr [ebx + 0x2b], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(eax); /* 0x100A6A65: sub esp, dword ptr [eax] */
    _flag_k = FK_CMP;
    goto L_100A6A67; /* falls through past a gap */
L_100A6A66:
    _flag_a = (uint32_t)(MEM8(edi + ebp * 2 + 0x63)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(edi + ebp * 2 + 0x63) = (uint8_t)(MEM8(edi + ebp * 2 + 0x63) & HI8(eax)); /* 0x100A6A66: and byte ptr [edi + ebp*2 + 0x63], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A6A; /* falls through past a gap */
L_100A6A67:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A67: outsd dx, dword ptr fs:[esi] */
    void_lift_trap(0x100A6A69u, "arpl word ptr [ebp + 0x6d], si");
    goto L_100A6A6C; /* falls through past a gap */
L_100A6A6A:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6AD9; /* 0x100A6A6A: jne 0x100a6ad9 */
L_100A6A6C:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A6C: outsb dx, byte ptr gs:[esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AD1; /* 0x100A6A6E: je 0x100a6ad1 */
    goto L_100A6A70; /* falls through past a gap */
L_100A6A6F:
    POPAD(); /* 0x100A6A6F: popal  */
L_100A6A70:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6ADB; /* 0x100A6A70: je 0x100a6adb */
L_100A6A72:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A72: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6A73: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi + 0x6E) = (uint8_t)(MEM8(edi + 0x6E) & HI8(ecx)); /* 0x100A6A74: and byte ptr [edi + 0x6e], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A77; /* falls through past a gap */
L_100A6A76:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A76: outsb dx, byte ptr [esi] */
L_100A6A77:
    _flag_a = (uint32_t)(MEM8(ecx + 0x73)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x73) = (uint8_t)(MEM8(ecx + 0x73) & HI8(eax)); /* 0x100A6A77: and byte ptr [ecx + 0x73], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AE1; /* 0x100A6A7A: jae 0x100a6ae1 */
L_100A6A7C:
    if (0) goto L_100A6AF2; /* 0x100A6A7C: jb 0x100a6af2 */
L_100A6A7E:
    if (1) goto L_100A6A80; /* 0x100A6A7E: jae 0x100a6a80 */
L_100A6A80:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) - LO8(edx)); /* 0x100A6A80: sub byte ptr [eax + 0x72], dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6AF9; /* 0x100A6A83: jae 0x100a6af9 */
L_100A6A86:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & LO8(edx)); /* 0x100A6A86: and byte ptr [edx + 0x65], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFD; /* 0x100A6A89: je 0x100a6afd */
L_100A6A8B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6AAD; /* 0x100A6A8B: jns 0x100a6aad */
L_100A6A8D:
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFE; /* 0x100A6A8D: je 0x100a6afe */
L_100A6A8F:
    _flag_a = (uint32_t)(MEM8(ebp + 0x62)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x62) = (uint8_t)(MEM8(ebp + 0x62) & HI8(eax)); /* 0x100A6A8F: and byte ptr [ebp + 0x62], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A93:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AFC; /* 0x100A6A93: jne 0x100a6afc */
L_100A6A95:
    _flag_a = (uint32_t)(MEM8(eax + ebp * 2 + 0x65)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + ebp * 2 + 0x65) = (uint8_t)(MEM8(eax + ebp * 2 + 0x65) & HI8(edx)); /* 0x100A6A95: and byte ptr [eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A99; /* falls through past a gap */
L_100A6A98:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + 0x70))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(GS_BASE + (ecx + 0x70)) = (uint8_t)(MEM8(GS_BASE + (ecx + 0x70)) & HI8(eax)); /* 0x100A6A98: and byte ptr gs:[ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A9C; /* falls through past a gap */
L_100A6A99:
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x70) = (uint8_t)(MEM8(ecx + 0x70) & HI8(eax)); /* 0x100A6A99: and byte ptr [ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A9C:
    if (CMP_O(_flag_a, _flag_b)) goto L_100A6B0A; /* 0x100A6A9C: jo 0x100a6b0a */
    goto L_100A6A9E; /* falls through past a gap */
L_100A6A9D:
    void_lift_trap(0x100A6A9Du, "insb byte ptr es:[edi], dx");
L_100A6A9E:
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x61) * (int32_t)0x6E6F6974u); /* 0x100A6A9E: imul esp, dword ptr [ebx + 0x61], 0x6e6f6974 */
    _flag_a = (uint32_t)(MEM8(0x54494A20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(0x54494A20) = (uint8_t)(MEM8(0x54494A20) & HI8(ecx)); /* 0x100A6AA5: and byte ptr [0x54494a20], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAB; /* falls through past a gap */
L_100A6AAA:
    PUSH32(esp, esp); /* 0x100A6AAA: push esp */
L_100A6AAB:
    _flag_a = (uint32_t)(MEM8(ebp + 0x75)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(ebp + 0x75) = (uint8_t)(MEM8(ebp + 0x75) & HI8(ecx)); /* 0x100A6AAB: and byte ptr [ebp + 0x75], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAE; /* falls through past a gap */
L_100A6AAD:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B22; /* 0x100A6AAD: jne 0x100a6b22 */
    goto L_100A6AAF; /* falls through past a gap */
L_100A6AAE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B24; /* 0x100A6AAE: jae 0x100a6b24 */
    goto L_100A6AB0; /* falls through past a gap */
L_100A6AAF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AD1; /* 0x100A6AAF: je 0x100a6ad1 */
    goto L_100A6AB1; /* falls through past a gap */
L_100A6AB0:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & HI8(eax)); /* 0x100A6AB0: and byte ptr [edx + 0x65], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB3; /* falls through past a gap */
L_100A6AB1:
    void_lift_trap(0x100A6AB1u, "bound esp, qword ptr [ebp + 0x20]");
    goto L_100A6AB4; /* falls through past a gap */
L_100A6AB3:
    _flag_a = (uint32_t)(MEM8(ebp + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x6E) = (uint8_t)(MEM8(ebp + 0x6E) & HI8(eax)); /* 0x100A6AB3: and byte ptr [ebp + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB6; /* falls through past a gap */
L_100A6AB4:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AB4: outsb dx, byte ptr gs:[esi] */
L_100A6AB6:
    POPAD(); /* 0x100A6AB6: popal  */
    void_lift_trap(0x100A6AB7u, "bound ebp, qword ptr [ebp + 0x64]");
L_100A6ABB:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - eax; /* 0x100A6ABB: sub dword ptr [eax], eax */
    _flag_k = FK_CMP;
    /* nop */ /* 0x100A6ABD: nop  */
    /* nop */ /* 0x100A6ABE: nop  */
    /* nop */ /* 0x100A6ABF: nop  */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A6AC0: dec ebp */
    _flag_k = FK_DEC;
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x72) * (int32_t)0x666F736Fu); /* 0x100A6AC1: imul esp, dword ptr [ebx + 0x72], 0x666f736f */
    goto L_100A6AC8; /* falls through past a gap */
L_100A6AC3:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6B34; /* 0x100A6AC3: jb 0x100a6b34 */
L_100A6AC5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B36; /* 0x100A6AC5: jae 0x100a6b36 */
L_100A6AC7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AEA; /* 0x100A6AC7: je 0x100a6aea */
    goto L_100A6ACA; /* falls through past a gap */
L_100A6AC8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AEA; /* 0x100A6AC8: je 0x100a6aea */
L_100A6ACA:
    PUSH32(esp, esi); /* 0x100A6ACA: push esi */
    esi = (uint32_t)((int32_t)MEM32(ebx + 0x75) * (int32_t)0x43206C61u); /* 0x100A6ACB: imul esi, dword ptr [ebx + 0x75], 0x43206c61 */
    goto L_100A6AD2; /* falls through past a gap */
L_100A6AD1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A6AD1: inc ebx */
    _flag_k = FK_INC;
L_100A6AD2:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebp = ebp - MEM32(ebx); /* 0x100A6AD2: sub ebp, dword ptr [ebx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(edx + 0x75)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x75) = (uint8_t)(MEM8(edx + 0x75) & LO8(edx)); /* 0x100A6AD4: and byte ptr [edx + 0x75], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AD7; /* falls through past a gap */
L_100A6AD5:
    PUSH32(esp, edx); /* 0x100A6AD5: push edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B46; /* 0x100A6AD6: jne 0x100a6b46 */
    goto L_100A6AD8; /* falls through past a gap */
L_100A6AD7:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AD7: outsb dx, byte ptr [esi] */
L_100A6AD8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6B43; /* 0x100A6AD8: je 0x100a6b43 */
    goto L_100A6ADA; /* falls through past a gap */
L_100A6AD9:
    ebp = (uint32_t)((int32_t)MEM32(ebp + 0x65) * (int32_t)0x62694C20u); /* 0x100A6AD9: imul ebp, dword ptr [ebp + 0x65], 0x62694c20 */
    goto L_100A6AE0; /* falls through past a gap */
L_100A6ADA:
    void_lift_trap(0x100A6ADAu, "insd dword ptr es:[edi], dx");
L_100A6ADB:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) = (uint8_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) & LO8(ecx)); /* 0x100A6ADB: and byte ptr gs:[ecx + ebp*2 + 0x62], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6AE0:
    if (0) goto L_100A6B43; /* 0x100A6AE0: jb 0x100a6b43 */
    goto L_100A6AE2; /* falls through past a gap */
L_100A6AE1:
    POPAD(); /* 0x100A6AE1: popal  */
L_100A6AE2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6B5D; /* 0x100A6AE2: jb 0x100a6b5d */
L_100A6AE4:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A6AE4: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A6AE7: in al, dx */
    PUSH32(esp, ebx); /* 0x100A6AE8: push ebx */
    PUSH32(esp, esi); /* 0x100A6AE9: push esi */
L_100A6AEA:
    esi = MEM32(ebp + 0xC); /* 0x100A6AEA: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A6AED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A6AEF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A6AF0: mov edi, dword ptr [ebp + 8] */
    goto L_100A6AF3; /* falls through past a gap */
L_100A6AF2:
    _flag_a = (uint32_t)((MEM8(ebx + (-0x7430743A)) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(ebx + (-0x7430743A)) | LO8(ecx))) << 24;
    MEM8(ebx + (-0x7430743A)) = (uint8_t)(MEM8(ebx + (-0x7430743A)) | LO8(ecx)); /* 0x100A6AF2: or byte ptr [ebx - 0x7430743a], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AF8; /* falls through past a gap */
L_100A6AF3:
    eax = esi; /* 0x100A6AF3: mov eax, esi */
    ecx = edi; /* 0x100A6AF5: mov ecx, edi */
    ebx = edi; /* 0x100A6AF7: mov ebx, edi */
    goto L_100A6AF9; /* falls through past a gap */
L_100A6AF8:
    void_lift_trap(0x100A6AF8u, "fisttp word ptr [edi]");
    goto L_100A6AFA; /* falls through past a gap */
L_100A6AF9:
    if (1) _cf = (((eax) >> 16) & 1u); /* 0x100A6AF9: shld eax, ecx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax));
    goto L_100A6AFD; /* falls through past a gap */
L_100A6AFA:
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100A6AFA: movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFF8110u; /* 0x100A6AFB: enter -0x7ef0, -0x1d */
    goto L_100A6AFF; /* falls through past a gap */
L_100A6AFC:
    { uint32_t _aa = MEM8(ecx + 0xFF00E3), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6AFC: adc byte ptr [ecx + 0xff00e3], al */
      MEM8(ecx + 0xFF00E3) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B02; /* falls through past a gap */
L_100A6AFD:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    ebx = ebx & 0xFF00u; /* 0x100A6AFD: and ebx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B03; /* falls through past a gap */
L_100A6AFE:
    if (ecx == 0) goto L_100A6B00; /* 0x100A6AFE: jecxz 0x100a6b00 */
    goto L_100A6B00; /* falls through past a gap */
L_100A6AFF:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6AFF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B01; /* falls through past a gap */
L_100A6B00:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x100A6B00: inc dword ptr [eax] */
    _flag_k = FK_INC;
    goto L_100A6B02; /* falls through past a gap */
L_100A6B01:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B01: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B03; /* falls through past a gap */
L_100A6B02:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B02: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B04; /* falls through past a gap */
L_100A6B03:
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x100A6B03: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x100A6B03: shl ecx, 0x10 */
    goto L_100A6B06; /* falls through past a gap */
L_100A6B04:
    { int _zc = (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)); if (--ecx != 0 && _zc) goto L_100A6B16; } /* 0x100A6B04: loope 0x100a6b16 */
L_100A6B06:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B06: add ebx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x100A6B08: push 0 */
L_100A6B0A:
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B0A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = edi; /* 0x100A6B0C: mov eax, edi */
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B0E: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    eax = eax & 0x00FF0000u; /* 0x100A6B12: and eax, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B17; /* falls through past a gap */
L_100A6B16:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B16: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B18; /* falls through past a gap */
L_100A6B17:
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B17: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B17: shl ebx, 0x10 */
    goto L_100A6B1A; /* falls through past a gap */
L_100A6B18:
    if (ecx == 0) goto L_100A6B2A; /* 0x100A6B18: jecxz 0x100a6b2a */
L_100A6B1A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B1A: add ebx, eax */
    _flag_k = FK_ADD;
    eax = edi; /* 0x100A6B1C: mov eax, edi */
    ecx = POP32_VAL(esp); /* 0x100A6B1E: pop ecx */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B1F: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    eax = eax & 0xFF000000u; /* 0x100A6B21: and eax, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B26; /* falls through past a gap */
L_100A6B22:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B24:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6B24: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B26:
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B26: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
L_100A6B2A:
    PUSH32(esp, 0); /* 0x100A6B2A: push 0 */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B2C: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B2C: shl ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B2F: add ebx, eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x100A6B31: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B33: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B35; /* falls through past a gap */
L_100A6B34:
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x100A6B34: rol ecx, 1 */
    goto L_100A6B36; /* falls through past a gap */
L_100A6B35:
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x100A6B35: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x100A6B35: shr eax, 8 */
    goto L_100A6B38; /* falls through past a gap */
L_100A6B36:
    RECOMP_ICALL(0xEAAE7A43u); /* 0x100A6B36: call 0xeaae7a43 */ /* not lifted */
    RECOMP_FLAGS_IN();
    goto L_100A6B3B; /* falls through past a gap */
L_100A6B38:
    if (1) _cf = (((edx) >> 24) & 1u); /* 0x100A6B38: shld edx, ebx, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx));
    goto L_100A6B3C; /* falls through past a gap */
L_100A6B3B:
    _flag_a = (uint32_t)((MEM8(0xFF00) | HI8(eax))) << 24; _flag_b = (uint32_t)((MEM8(0xFF00) | HI8(eax))) << 24;
    MEM8(0xFF00) = (uint8_t)(MEM8(0xFF00) | HI8(eax)); /* 0x100A6B3B: or byte ptr [0xff00], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B41; /* falls through past a gap */
L_100A6B3C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x100A6B3C: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A6B41:
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x100A6B41: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x100A6B41: shl ebx, 8 */
    goto L_100A6B44; /* falls through past a gap */
L_100A6B43:
    _flag_a = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) | LO8(eax)); /* 0x100A6B43: or byte ptr [ebx], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B45; /* falls through past a gap */
L_100A6B44:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B44: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_100A6B46; /* falls through past a gap */
L_100A6B45:
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x742EEC3A)); /* 0x100A6B45: fmul dword ptr [ebx - 0x742eec3a] */
    goto L_100A6B4B; /* falls through past a gap */
L_100A6B46:
    eax = esi; /* 0x100A6B46: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B48: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edi; /* 0x100A6B4A: mov ecx, edi */
    goto L_100A6B4C; /* falls through past a gap */
L_100A6B4B:
    void_lift_trap(0x100A6B4Bu, "iretd ");
L_100A6B4C:
    if (1) _cf = (((ecx) >> 7) & 1u); /* 0x100A6B4C: shrd ecx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx));
    eax = POP32_VAL(esp); /* 0x100A6B50: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF000000u);
    ecx = ecx & 0xFF000000u; /* 0x100A6B51: and ecx, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B57: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x100A6B59: mov ecx, esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B5B: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100A6B5D:
    if (1) _cf = (((edi) >> 23) & 1u); /* 0x100A6B5D: shrd edi, ecx, 0x18 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = ((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00FF0000u);
    edi = edi & 0x00FF0000u; /* 0x100A6B61: and edi, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x100A6B67: add ebx, edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100A6B69: pop edi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B6A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (24u) _cf = (((esi) >> 23) & 1u); /* 0x100A6B6C: shr esi, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((esi >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 24u; /* 0x100A6B6C: shr esi, 0x18 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x100A6B6F: add ebx, esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100A6B71: pop esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B72: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebx; /* 0x100A6B74: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x100A6B76: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6B77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6B78: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A69F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A69F4u);

L_100A69F4:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x100A69F4: dec esp */
    _flag_k = FK_DEC;
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x65) * (int32_t)0x9000203Au); /* 0x100A69F5: imul ebp, dword ptr [esi + 0x65], 0x9000203a */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100A69FC: inc ebp */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_100A6A6F; /* 0x100A69FD: js 0x100a6a6f */
L_100A69FF:
    if ((_cf != 0)) goto L_100A6A66; /* 0x100A69FF: jb 0x100a6a66 */
L_100A6A01:
    if ((_cf == 0)) goto L_100A6A76; /* 0x100A6A01: jae 0x100a6a76 */
L_100A6A03:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x9000203Au); /* 0x100A6A03: imul ebp, dword ptr [edi + 0x6e], 0x9000203a */
    /* nop */ /* 0x100A6A0A: nop  */
    /* nop */ /* 0x100A6A0B: nop  */
    /* nop */ /* 0x100A6A0C: nop  */
    /* nop */ /* 0x100A6A0D: nop  */
    /* nop */ /* 0x100A6A0E: nop  */
    /* nop */ /* 0x100A6A0F: nop  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A6A10: inc esi */
    _flag_k = FK_INC;
    /* outsd: no port I/O under Win32 */ /* 0x100A6A11: outsd dx, dword ptr [esi] */
    if ((_cf != 0)) goto L_100A6A34; /* 0x100A6A12: jb 0x100a6a34 */
L_100A6A14:
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x66) * (int32_t)0x616D726Fu); /* 0x100A6A14: imul ebp, dword ptr [esi + 0x66], 0x616d726f */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A6A86; /* 0x100A6A1B: je 0x100a6a86 */
L_100A6A1D:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A1D: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6A1E: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi + 0x6E) = (uint8_t)(MEM8(edi + 0x6E) & HI8(ecx)); /* 0x100A6A1F: and byte ptr [edi + 0x6e], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(eax + 0x6F) = (uint8_t)(MEM8(eax + 0x6F) & HI8(ecx)); /* 0x100A6A22: and byte ptr [eax + 0x6f], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6A47; /* 0x100A6A25: ja 0x100a6a47 */
L_100A6A27:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6A98; /* 0x100A6A27: jns 0x100a6a98 */
L_100A6A29:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6A9D; /* 0x100A6A29: jne 0x100a6a9d */
L_100A6A2B:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) & HI8(edx)); /* 0x100A6A2B: and byte ptr [eax + 0x72], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A6A2E: outsd dx, dword ptr [esi] */
    if (0) goto L_100A6A93; /* 0x100A6A2F: jb 0x100a6a93 */
L_100A6A32:
    void_lift_trap(0x100A6A32u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + 0x61)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebx + 0x61) = (uint8_t)(MEM8(ebx + 0x61) & HI8(eax)); /* 0x100A6A33: and byte ptr [ebx + 0x61], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A36; /* falls through past a gap */
L_100A6A34:
    void_lift_trap(0x100A6A34u, "arpl word ptr [ecx + 0x6e], sp");
    goto L_100A6A37; /* falls through past a gap */
L_100A6A36:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A36: outsb dx, byte ptr [esi] */
L_100A6A37:
    _flag_a = (uint32_t)(MEM8(ebx + 0x61)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebx + 0x61) = (uint8_t)(MEM8(ebx + 0x61) & HI8(eax)); /* 0x100A6A37: and byte ptr [ebx + 0x61], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6AAF; /* 0x100A6A3A: jne 0x100a6aaf */
L_100A6A3C:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + 0x6E))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(GS_BASE + (ecx + 0x6E)) = (uint8_t)(MEM8(GS_BASE + (ecx + 0x6E)) & HI8(eax)); /* 0x100A6A3C: and byte ptr gs:[ecx + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x73)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x73) = (uint8_t)(MEM8(ecx + 0x73) & HI8(eax)); /* 0x100A6A40: and byte ptr [ecx + 0x73], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AAA; /* 0x100A6A43: jae 0x100a6aaa */
L_100A6A45:
    if (0) goto L_100A6ABB; /* 0x100A6A45: jb 0x100a6abb */
L_100A6A47:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x6961660Au); /* 0x100A6A47: imul ebp, dword ptr [edi + 0x6e], 0x6961660a */
    void_lift_trap(0x100A6A4Eu, "insb byte ptr es:[edi], dx");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AC3; /* 0x100A6A4F: jne 0x100a6ac3 */
L_100A6A51:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x20u); /* 0x100A6A51: sub al, 0x20 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6ABB; /* 0x100A6A54: jae 0x100a6abb */
L_100A6A56:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) = (uint8_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) & HI8(edx)); /* 0x100A6A56: and byte ptr gs:[eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(esi + 0x69)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(esi + 0x69) = (uint8_t)(MEM8(esi + 0x69) & LO8(edx)); /* 0x100A6A5B: and byte ptr [esi + 0x69], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AD5; /* 0x100A6A5E: jae 0x100a6ad5 */
L_100A6A60:
    POPAD(); /* 0x100A6A60: popal  */
    void_lift_trap(0x100A6A61u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + 0x2B)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(ebx + 0x2B) = (uint8_t)(MEM8(ebx + 0x2B) & LO8(eax)); /* 0x100A6A62: and byte ptr [ebx + 0x2b], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(eax); /* 0x100A6A65: sub esp, dword ptr [eax] */
    _flag_k = FK_CMP;
    goto L_100A6A67; /* falls through past a gap */
L_100A6A66:
    _flag_a = (uint32_t)(MEM8(edi + ebp * 2 + 0x63)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(edi + ebp * 2 + 0x63) = (uint8_t)(MEM8(edi + ebp * 2 + 0x63) & HI8(eax)); /* 0x100A6A66: and byte ptr [edi + ebp*2 + 0x63], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A6A; /* falls through past a gap */
L_100A6A67:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A67: outsd dx, dword ptr fs:[esi] */
    void_lift_trap(0x100A6A69u, "arpl word ptr [ebp + 0x6d], si");
    goto L_100A6A6C; /* falls through past a gap */
L_100A6A6A:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6AD9; /* 0x100A6A6A: jne 0x100a6ad9 */
L_100A6A6C:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A6C: outsb dx, byte ptr gs:[esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AD1; /* 0x100A6A6E: je 0x100a6ad1 */
    goto L_100A6A70; /* falls through past a gap */
L_100A6A6F:
    POPAD(); /* 0x100A6A6F: popal  */
L_100A6A70:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6ADB; /* 0x100A6A70: je 0x100a6adb */
L_100A6A72:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A72: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6A73: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi + 0x6E) = (uint8_t)(MEM8(edi + 0x6E) & HI8(ecx)); /* 0x100A6A74: and byte ptr [edi + 0x6e], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A77; /* falls through past a gap */
L_100A6A76:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A76: outsb dx, byte ptr [esi] */
L_100A6A77:
    _flag_a = (uint32_t)(MEM8(ecx + 0x73)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x73) = (uint8_t)(MEM8(ecx + 0x73) & HI8(eax)); /* 0x100A6A77: and byte ptr [ecx + 0x73], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AE1; /* 0x100A6A7A: jae 0x100a6ae1 */
L_100A6A7C:
    if (0) goto L_100A6AF2; /* 0x100A6A7C: jb 0x100a6af2 */
L_100A6A7E:
    if (1) goto L_100A6A80; /* 0x100A6A7E: jae 0x100a6a80 */
L_100A6A80:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) - LO8(edx)); /* 0x100A6A80: sub byte ptr [eax + 0x72], dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6AF9; /* 0x100A6A83: jae 0x100a6af9 */
L_100A6A86:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & LO8(edx)); /* 0x100A6A86: and byte ptr [edx + 0x65], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFD; /* 0x100A6A89: je 0x100a6afd */
L_100A6A8B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6AAD; /* 0x100A6A8B: jns 0x100a6aad */
L_100A6A8D:
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFE; /* 0x100A6A8D: je 0x100a6afe */
L_100A6A8F:
    _flag_a = (uint32_t)(MEM8(ebp + 0x62)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x62) = (uint8_t)(MEM8(ebp + 0x62) & HI8(eax)); /* 0x100A6A8F: and byte ptr [ebp + 0x62], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A93:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AFC; /* 0x100A6A93: jne 0x100a6afc */
L_100A6A95:
    _flag_a = (uint32_t)(MEM8(eax + ebp * 2 + 0x65)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + ebp * 2 + 0x65) = (uint8_t)(MEM8(eax + ebp * 2 + 0x65) & HI8(edx)); /* 0x100A6A95: and byte ptr [eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A99; /* falls through past a gap */
L_100A6A98:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + 0x70))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(GS_BASE + (ecx + 0x70)) = (uint8_t)(MEM8(GS_BASE + (ecx + 0x70)) & HI8(eax)); /* 0x100A6A98: and byte ptr gs:[ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A9C; /* falls through past a gap */
L_100A6A99:
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x70) = (uint8_t)(MEM8(ecx + 0x70) & HI8(eax)); /* 0x100A6A99: and byte ptr [ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A9C:
    if (CMP_O(_flag_a, _flag_b)) goto L_100A6B0A; /* 0x100A6A9C: jo 0x100a6b0a */
    goto L_100A6A9E; /* falls through past a gap */
L_100A6A9D:
    void_lift_trap(0x100A6A9Du, "insb byte ptr es:[edi], dx");
L_100A6A9E:
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x61) * (int32_t)0x6E6F6974u); /* 0x100A6A9E: imul esp, dword ptr [ebx + 0x61], 0x6e6f6974 */
    _flag_a = (uint32_t)(MEM8(0x54494A20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(0x54494A20) = (uint8_t)(MEM8(0x54494A20) & HI8(ecx)); /* 0x100A6AA5: and byte ptr [0x54494a20], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAB; /* falls through past a gap */
L_100A6AAA:
    PUSH32(esp, esp); /* 0x100A6AAA: push esp */
L_100A6AAB:
    _flag_a = (uint32_t)(MEM8(ebp + 0x75)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(ebp + 0x75) = (uint8_t)(MEM8(ebp + 0x75) & HI8(ecx)); /* 0x100A6AAB: and byte ptr [ebp + 0x75], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAE; /* falls through past a gap */
L_100A6AAD:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B22; /* 0x100A6AAD: jne 0x100a6b22 */
    goto L_100A6AAF; /* falls through past a gap */
L_100A6AAE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B24; /* 0x100A6AAE: jae 0x100a6b24 */
    goto L_100A6AB0; /* falls through past a gap */
L_100A6AAF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AD1; /* 0x100A6AAF: je 0x100a6ad1 */
    goto L_100A6AB1; /* falls through past a gap */
L_100A6AB0:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & HI8(eax)); /* 0x100A6AB0: and byte ptr [edx + 0x65], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB3; /* falls through past a gap */
L_100A6AB1:
    void_lift_trap(0x100A6AB1u, "bound esp, qword ptr [ebp + 0x20]");
    goto L_100A6AB4; /* falls through past a gap */
L_100A6AB3:
    _flag_a = (uint32_t)(MEM8(ebp + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x6E) = (uint8_t)(MEM8(ebp + 0x6E) & HI8(eax)); /* 0x100A6AB3: and byte ptr [ebp + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB6; /* falls through past a gap */
L_100A6AB4:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AB4: outsb dx, byte ptr gs:[esi] */
L_100A6AB6:
    POPAD(); /* 0x100A6AB6: popal  */
    void_lift_trap(0x100A6AB7u, "bound ebp, qword ptr [ebp + 0x64]");
L_100A6ABB:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - eax; /* 0x100A6ABB: sub dword ptr [eax], eax */
    _flag_k = FK_CMP;
    /* nop */ /* 0x100A6ABD: nop  */
    /* nop */ /* 0x100A6ABE: nop  */
    /* nop */ /* 0x100A6ABF: nop  */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A6AC0: dec ebp */
    _flag_k = FK_DEC;
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x72) * (int32_t)0x666F736Fu); /* 0x100A6AC1: imul esp, dword ptr [ebx + 0x72], 0x666f736f */
    goto L_100A6AC8; /* falls through past a gap */
L_100A6AC3:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6B34; /* 0x100A6AC3: jb 0x100a6b34 */
L_100A6AC5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B36; /* 0x100A6AC5: jae 0x100a6b36 */
L_100A6AC7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AEA; /* 0x100A6AC7: je 0x100a6aea */
    goto L_100A6ACA; /* falls through past a gap */
L_100A6AC8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AEA; /* 0x100A6AC8: je 0x100a6aea */
L_100A6ACA:
    PUSH32(esp, esi); /* 0x100A6ACA: push esi */
    esi = (uint32_t)((int32_t)MEM32(ebx + 0x75) * (int32_t)0x43206C61u); /* 0x100A6ACB: imul esi, dword ptr [ebx + 0x75], 0x43206c61 */
    goto L_100A6AD2; /* falls through past a gap */
L_100A6AD1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A6AD1: inc ebx */
    _flag_k = FK_INC;
L_100A6AD2:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebp = ebp - MEM32(ebx); /* 0x100A6AD2: sub ebp, dword ptr [ebx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(edx + 0x75)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x75) = (uint8_t)(MEM8(edx + 0x75) & LO8(edx)); /* 0x100A6AD4: and byte ptr [edx + 0x75], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AD7; /* falls through past a gap */
L_100A6AD5:
    PUSH32(esp, edx); /* 0x100A6AD5: push edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B46; /* 0x100A6AD6: jne 0x100a6b46 */
    goto L_100A6AD8; /* falls through past a gap */
L_100A6AD7:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AD7: outsb dx, byte ptr [esi] */
L_100A6AD8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6B43; /* 0x100A6AD8: je 0x100a6b43 */
    goto L_100A6ADA; /* falls through past a gap */
L_100A6AD9:
    ebp = (uint32_t)((int32_t)MEM32(ebp + 0x65) * (int32_t)0x62694C20u); /* 0x100A6AD9: imul ebp, dword ptr [ebp + 0x65], 0x62694c20 */
    goto L_100A6AE0; /* falls through past a gap */
L_100A6ADA:
    void_lift_trap(0x100A6ADAu, "insd dword ptr es:[edi], dx");
L_100A6ADB:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) = (uint8_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) & LO8(ecx)); /* 0x100A6ADB: and byte ptr gs:[ecx + ebp*2 + 0x62], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6AE0:
    if (0) goto L_100A6B43; /* 0x100A6AE0: jb 0x100a6b43 */
    goto L_100A6AE2; /* falls through past a gap */
L_100A6AE1:
    POPAD(); /* 0x100A6AE1: popal  */
L_100A6AE2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6B5D; /* 0x100A6AE2: jb 0x100a6b5d */
L_100A6AE4:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A6AE4: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A6AE7: in al, dx */
    PUSH32(esp, ebx); /* 0x100A6AE8: push ebx */
    PUSH32(esp, esi); /* 0x100A6AE9: push esi */
L_100A6AEA:
    esi = MEM32(ebp + 0xC); /* 0x100A6AEA: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A6AED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A6AEF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A6AF0: mov edi, dword ptr [ebp + 8] */
    goto L_100A6AF3; /* falls through past a gap */
L_100A6AF2:
    _flag_a = (uint32_t)((MEM8(ebx + (-0x7430743A)) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(ebx + (-0x7430743A)) | LO8(ecx))) << 24;
    MEM8(ebx + (-0x7430743A)) = (uint8_t)(MEM8(ebx + (-0x7430743A)) | LO8(ecx)); /* 0x100A6AF2: or byte ptr [ebx - 0x7430743a], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AF8; /* falls through past a gap */
L_100A6AF3:
    eax = esi; /* 0x100A6AF3: mov eax, esi */
    ecx = edi; /* 0x100A6AF5: mov ecx, edi */
    ebx = edi; /* 0x100A6AF7: mov ebx, edi */
    goto L_100A6AF9; /* falls through past a gap */
L_100A6AF8:
    void_lift_trap(0x100A6AF8u, "fisttp word ptr [edi]");
    goto L_100A6AFA; /* falls through past a gap */
L_100A6AF9:
    if (1) _cf = (((eax) >> 16) & 1u); /* 0x100A6AF9: shld eax, ecx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax));
    goto L_100A6AFD; /* falls through past a gap */
L_100A6AFA:
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100A6AFA: movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFF8110u; /* 0x100A6AFB: enter -0x7ef0, -0x1d */
    goto L_100A6AFF; /* falls through past a gap */
L_100A6AFC:
    { uint32_t _aa = MEM8(ecx + 0xFF00E3), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6AFC: adc byte ptr [ecx + 0xff00e3], al */
      MEM8(ecx + 0xFF00E3) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B02; /* falls through past a gap */
L_100A6AFD:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    ebx = ebx & 0xFF00u; /* 0x100A6AFD: and ebx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B03; /* falls through past a gap */
L_100A6AFE:
    if (ecx == 0) goto L_100A6B00; /* 0x100A6AFE: jecxz 0x100a6b00 */
    goto L_100A6B00; /* falls through past a gap */
L_100A6AFF:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6AFF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B01; /* falls through past a gap */
L_100A6B00:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x100A6B00: inc dword ptr [eax] */
    _flag_k = FK_INC;
    goto L_100A6B02; /* falls through past a gap */
L_100A6B01:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B01: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B03; /* falls through past a gap */
L_100A6B02:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B02: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B04; /* falls through past a gap */
L_100A6B03:
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x100A6B03: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x100A6B03: shl ecx, 0x10 */
    goto L_100A6B06; /* falls through past a gap */
L_100A6B04:
    { int _zc = (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)); if (--ecx != 0 && _zc) goto L_100A6B16; } /* 0x100A6B04: loope 0x100a6b16 */
L_100A6B06:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B06: add ebx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x100A6B08: push 0 */
L_100A6B0A:
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B0A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = edi; /* 0x100A6B0C: mov eax, edi */
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B0E: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    eax = eax & 0x00FF0000u; /* 0x100A6B12: and eax, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B17; /* falls through past a gap */
L_100A6B16:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B16: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B18; /* falls through past a gap */
L_100A6B17:
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B17: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B17: shl ebx, 0x10 */
    goto L_100A6B1A; /* falls through past a gap */
L_100A6B18:
    if (ecx == 0) goto L_100A6B2A; /* 0x100A6B18: jecxz 0x100a6b2a */
L_100A6B1A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B1A: add ebx, eax */
    _flag_k = FK_ADD;
    eax = edi; /* 0x100A6B1C: mov eax, edi */
    ecx = POP32_VAL(esp); /* 0x100A6B1E: pop ecx */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B1F: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    eax = eax & 0xFF000000u; /* 0x100A6B21: and eax, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B26; /* falls through past a gap */
L_100A6B22:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B24:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6B24: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B26:
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B26: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
L_100A6B2A:
    PUSH32(esp, 0); /* 0x100A6B2A: push 0 */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B2C: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B2C: shl ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B2F: add ebx, eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x100A6B31: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B33: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B35; /* falls through past a gap */
L_100A6B34:
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x100A6B34: rol ecx, 1 */
    goto L_100A6B36; /* falls through past a gap */
L_100A6B35:
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x100A6B35: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x100A6B35: shr eax, 8 */
    goto L_100A6B38; /* falls through past a gap */
L_100A6B36:
    RECOMP_ICALL(0xEAAE7A43u); /* 0x100A6B36: call 0xeaae7a43 */ /* not lifted */
    RECOMP_FLAGS_IN();
    goto L_100A6B3B; /* falls through past a gap */
L_100A6B38:
    if (1) _cf = (((edx) >> 24) & 1u); /* 0x100A6B38: shld edx, ebx, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx));
    goto L_100A6B3C; /* falls through past a gap */
L_100A6B3B:
    _flag_a = (uint32_t)((MEM8(0xFF00) | HI8(eax))) << 24; _flag_b = (uint32_t)((MEM8(0xFF00) | HI8(eax))) << 24;
    MEM8(0xFF00) = (uint8_t)(MEM8(0xFF00) | HI8(eax)); /* 0x100A6B3B: or byte ptr [0xff00], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B41; /* falls through past a gap */
L_100A6B3C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x100A6B3C: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A6B41:
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x100A6B41: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x100A6B41: shl ebx, 8 */
    goto L_100A6B44; /* falls through past a gap */
L_100A6B43:
    _flag_a = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) | LO8(eax)); /* 0x100A6B43: or byte ptr [ebx], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B45; /* falls through past a gap */
L_100A6B44:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B44: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_100A6B46; /* falls through past a gap */
L_100A6B45:
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x742EEC3A)); /* 0x100A6B45: fmul dword ptr [ebx - 0x742eec3a] */
    goto L_100A6B4B; /* falls through past a gap */
L_100A6B46:
    eax = esi; /* 0x100A6B46: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B48: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edi; /* 0x100A6B4A: mov ecx, edi */
    goto L_100A6B4C; /* falls through past a gap */
L_100A6B4B:
    void_lift_trap(0x100A6B4Bu, "iretd ");
L_100A6B4C:
    if (1) _cf = (((ecx) >> 7) & 1u); /* 0x100A6B4C: shrd ecx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx));
    eax = POP32_VAL(esp); /* 0x100A6B50: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF000000u);
    ecx = ecx & 0xFF000000u; /* 0x100A6B51: and ecx, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B57: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x100A6B59: mov ecx, esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B5B: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100A6B5D:
    if (1) _cf = (((edi) >> 23) & 1u); /* 0x100A6B5D: shrd edi, ecx, 0x18 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = ((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00FF0000u);
    edi = edi & 0x00FF0000u; /* 0x100A6B61: and edi, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x100A6B67: add ebx, edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100A6B69: pop edi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B6A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (24u) _cf = (((esi) >> 23) & 1u); /* 0x100A6B6C: shr esi, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((esi >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 24u; /* 0x100A6B6C: shr esi, 0x18 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x100A6B6F: add ebx, esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100A6B71: pop esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B72: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebx; /* 0x100A6B74: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x100A6B76: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6B77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6B78: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A69FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A69FCu);

L_100A69FC:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100A69FC: inc ebp */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_100A6A6F; /* 0x100A69FD: js 0x100a6a6f */
L_100A69FF:
    if ((_cf != 0)) goto L_100A6A66; /* 0x100A69FF: jb 0x100a6a66 */
L_100A6A01:
    if ((_cf == 0)) goto L_100A6A76; /* 0x100A6A01: jae 0x100a6a76 */
L_100A6A03:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x9000203Au); /* 0x100A6A03: imul ebp, dword ptr [edi + 0x6e], 0x9000203a */
    /* nop */ /* 0x100A6A0A: nop  */
    /* nop */ /* 0x100A6A0B: nop  */
    /* nop */ /* 0x100A6A0C: nop  */
    /* nop */ /* 0x100A6A0D: nop  */
    /* nop */ /* 0x100A6A0E: nop  */
    /* nop */ /* 0x100A6A0F: nop  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A6A10: inc esi */
    _flag_k = FK_INC;
    /* outsd: no port I/O under Win32 */ /* 0x100A6A11: outsd dx, dword ptr [esi] */
    if ((_cf != 0)) goto L_100A6A34; /* 0x100A6A12: jb 0x100a6a34 */
L_100A6A14:
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x66) * (int32_t)0x616D726Fu); /* 0x100A6A14: imul ebp, dword ptr [esi + 0x66], 0x616d726f */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A6A86; /* 0x100A6A1B: je 0x100a6a86 */
L_100A6A1D:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A1D: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6A1E: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi + 0x6E) = (uint8_t)(MEM8(edi + 0x6E) & HI8(ecx)); /* 0x100A6A1F: and byte ptr [edi + 0x6e], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(eax + 0x6F) = (uint8_t)(MEM8(eax + 0x6F) & HI8(ecx)); /* 0x100A6A22: and byte ptr [eax + 0x6f], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6A47; /* 0x100A6A25: ja 0x100a6a47 */
L_100A6A27:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6A98; /* 0x100A6A27: jns 0x100a6a98 */
L_100A6A29:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6A9D; /* 0x100A6A29: jne 0x100a6a9d */
L_100A6A2B:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) & HI8(edx)); /* 0x100A6A2B: and byte ptr [eax + 0x72], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A6A2E: outsd dx, dword ptr [esi] */
    if (0) goto L_100A6A93; /* 0x100A6A2F: jb 0x100a6a93 */
L_100A6A32:
    void_lift_trap(0x100A6A32u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + 0x61)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebx + 0x61) = (uint8_t)(MEM8(ebx + 0x61) & HI8(eax)); /* 0x100A6A33: and byte ptr [ebx + 0x61], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A36; /* falls through past a gap */
L_100A6A34:
    void_lift_trap(0x100A6A34u, "arpl word ptr [ecx + 0x6e], sp");
    goto L_100A6A37; /* falls through past a gap */
L_100A6A36:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A36: outsb dx, byte ptr [esi] */
L_100A6A37:
    _flag_a = (uint32_t)(MEM8(ebx + 0x61)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebx + 0x61) = (uint8_t)(MEM8(ebx + 0x61) & HI8(eax)); /* 0x100A6A37: and byte ptr [ebx + 0x61], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6AAF; /* 0x100A6A3A: jne 0x100a6aaf */
L_100A6A3C:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + 0x6E))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(GS_BASE + (ecx + 0x6E)) = (uint8_t)(MEM8(GS_BASE + (ecx + 0x6E)) & HI8(eax)); /* 0x100A6A3C: and byte ptr gs:[ecx + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x73)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x73) = (uint8_t)(MEM8(ecx + 0x73) & HI8(eax)); /* 0x100A6A40: and byte ptr [ecx + 0x73], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AAA; /* 0x100A6A43: jae 0x100a6aaa */
L_100A6A45:
    if (0) goto L_100A6ABB; /* 0x100A6A45: jb 0x100a6abb */
L_100A6A47:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x6961660Au); /* 0x100A6A47: imul ebp, dword ptr [edi + 0x6e], 0x6961660a */
    void_lift_trap(0x100A6A4Eu, "insb byte ptr es:[edi], dx");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AC3; /* 0x100A6A4F: jne 0x100a6ac3 */
L_100A6A51:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x20u); /* 0x100A6A51: sub al, 0x20 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6ABB; /* 0x100A6A54: jae 0x100a6abb */
L_100A6A56:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) = (uint8_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) & HI8(edx)); /* 0x100A6A56: and byte ptr gs:[eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(esi + 0x69)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(esi + 0x69) = (uint8_t)(MEM8(esi + 0x69) & LO8(edx)); /* 0x100A6A5B: and byte ptr [esi + 0x69], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AD5; /* 0x100A6A5E: jae 0x100a6ad5 */
L_100A6A60:
    POPAD(); /* 0x100A6A60: popal  */
    void_lift_trap(0x100A6A61u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + 0x2B)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(ebx + 0x2B) = (uint8_t)(MEM8(ebx + 0x2B) & LO8(eax)); /* 0x100A6A62: and byte ptr [ebx + 0x2b], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(eax); /* 0x100A6A65: sub esp, dword ptr [eax] */
    _flag_k = FK_CMP;
    goto L_100A6A67; /* falls through past a gap */
L_100A6A66:
    _flag_a = (uint32_t)(MEM8(edi + ebp * 2 + 0x63)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(edi + ebp * 2 + 0x63) = (uint8_t)(MEM8(edi + ebp * 2 + 0x63) & HI8(eax)); /* 0x100A6A66: and byte ptr [edi + ebp*2 + 0x63], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A6A; /* falls through past a gap */
L_100A6A67:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A67: outsd dx, dword ptr fs:[esi] */
    void_lift_trap(0x100A6A69u, "arpl word ptr [ebp + 0x6d], si");
    goto L_100A6A6C; /* falls through past a gap */
L_100A6A6A:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6AD9; /* 0x100A6A6A: jne 0x100a6ad9 */
L_100A6A6C:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A6C: outsb dx, byte ptr gs:[esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AD1; /* 0x100A6A6E: je 0x100a6ad1 */
    goto L_100A6A70; /* falls through past a gap */
L_100A6A6F:
    POPAD(); /* 0x100A6A6F: popal  */
L_100A6A70:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6ADB; /* 0x100A6A70: je 0x100a6adb */
L_100A6A72:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A72: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6A73: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi + 0x6E) = (uint8_t)(MEM8(edi + 0x6E) & HI8(ecx)); /* 0x100A6A74: and byte ptr [edi + 0x6e], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A77; /* falls through past a gap */
L_100A6A76:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A76: outsb dx, byte ptr [esi] */
L_100A6A77:
    _flag_a = (uint32_t)(MEM8(ecx + 0x73)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x73) = (uint8_t)(MEM8(ecx + 0x73) & HI8(eax)); /* 0x100A6A77: and byte ptr [ecx + 0x73], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AE1; /* 0x100A6A7A: jae 0x100a6ae1 */
L_100A6A7C:
    if (0) goto L_100A6AF2; /* 0x100A6A7C: jb 0x100a6af2 */
L_100A6A7E:
    if (1) goto L_100A6A80; /* 0x100A6A7E: jae 0x100a6a80 */
L_100A6A80:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) - LO8(edx)); /* 0x100A6A80: sub byte ptr [eax + 0x72], dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6AF9; /* 0x100A6A83: jae 0x100a6af9 */
L_100A6A86:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & LO8(edx)); /* 0x100A6A86: and byte ptr [edx + 0x65], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFD; /* 0x100A6A89: je 0x100a6afd */
L_100A6A8B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6AAD; /* 0x100A6A8B: jns 0x100a6aad */
L_100A6A8D:
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFE; /* 0x100A6A8D: je 0x100a6afe */
L_100A6A8F:
    _flag_a = (uint32_t)(MEM8(ebp + 0x62)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x62) = (uint8_t)(MEM8(ebp + 0x62) & HI8(eax)); /* 0x100A6A8F: and byte ptr [ebp + 0x62], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A93:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AFC; /* 0x100A6A93: jne 0x100a6afc */
L_100A6A95:
    _flag_a = (uint32_t)(MEM8(eax + ebp * 2 + 0x65)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + ebp * 2 + 0x65) = (uint8_t)(MEM8(eax + ebp * 2 + 0x65) & HI8(edx)); /* 0x100A6A95: and byte ptr [eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A99; /* falls through past a gap */
L_100A6A98:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + 0x70))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(GS_BASE + (ecx + 0x70)) = (uint8_t)(MEM8(GS_BASE + (ecx + 0x70)) & HI8(eax)); /* 0x100A6A98: and byte ptr gs:[ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A9C; /* falls through past a gap */
L_100A6A99:
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x70) = (uint8_t)(MEM8(ecx + 0x70) & HI8(eax)); /* 0x100A6A99: and byte ptr [ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A9C:
    if (CMP_O(_flag_a, _flag_b)) goto L_100A6B0A; /* 0x100A6A9C: jo 0x100a6b0a */
    goto L_100A6A9E; /* falls through past a gap */
L_100A6A9D:
    void_lift_trap(0x100A6A9Du, "insb byte ptr es:[edi], dx");
L_100A6A9E:
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x61) * (int32_t)0x6E6F6974u); /* 0x100A6A9E: imul esp, dword ptr [ebx + 0x61], 0x6e6f6974 */
    _flag_a = (uint32_t)(MEM8(0x54494A20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(0x54494A20) = (uint8_t)(MEM8(0x54494A20) & HI8(ecx)); /* 0x100A6AA5: and byte ptr [0x54494a20], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAB; /* falls through past a gap */
L_100A6AAA:
    PUSH32(esp, esp); /* 0x100A6AAA: push esp */
L_100A6AAB:
    _flag_a = (uint32_t)(MEM8(ebp + 0x75)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(ebp + 0x75) = (uint8_t)(MEM8(ebp + 0x75) & HI8(ecx)); /* 0x100A6AAB: and byte ptr [ebp + 0x75], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAE; /* falls through past a gap */
L_100A6AAD:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B22; /* 0x100A6AAD: jne 0x100a6b22 */
    goto L_100A6AAF; /* falls through past a gap */
L_100A6AAE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B24; /* 0x100A6AAE: jae 0x100a6b24 */
    goto L_100A6AB0; /* falls through past a gap */
L_100A6AAF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AD1; /* 0x100A6AAF: je 0x100a6ad1 */
    goto L_100A6AB1; /* falls through past a gap */
L_100A6AB0:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & HI8(eax)); /* 0x100A6AB0: and byte ptr [edx + 0x65], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB3; /* falls through past a gap */
L_100A6AB1:
    void_lift_trap(0x100A6AB1u, "bound esp, qword ptr [ebp + 0x20]");
    goto L_100A6AB4; /* falls through past a gap */
L_100A6AB3:
    _flag_a = (uint32_t)(MEM8(ebp + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x6E) = (uint8_t)(MEM8(ebp + 0x6E) & HI8(eax)); /* 0x100A6AB3: and byte ptr [ebp + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB6; /* falls through past a gap */
L_100A6AB4:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AB4: outsb dx, byte ptr gs:[esi] */
L_100A6AB6:
    POPAD(); /* 0x100A6AB6: popal  */
    void_lift_trap(0x100A6AB7u, "bound ebp, qword ptr [ebp + 0x64]");
L_100A6ABB:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - eax; /* 0x100A6ABB: sub dword ptr [eax], eax */
    _flag_k = FK_CMP;
    /* nop */ /* 0x100A6ABD: nop  */
    /* nop */ /* 0x100A6ABE: nop  */
    /* nop */ /* 0x100A6ABF: nop  */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A6AC0: dec ebp */
    _flag_k = FK_DEC;
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x72) * (int32_t)0x666F736Fu); /* 0x100A6AC1: imul esp, dword ptr [ebx + 0x72], 0x666f736f */
    goto L_100A6AC8; /* falls through past a gap */
L_100A6AC3:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6B34; /* 0x100A6AC3: jb 0x100a6b34 */
L_100A6AC5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B36; /* 0x100A6AC5: jae 0x100a6b36 */
L_100A6AC7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AEA; /* 0x100A6AC7: je 0x100a6aea */
    goto L_100A6ACA; /* falls through past a gap */
L_100A6AC8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AEA; /* 0x100A6AC8: je 0x100a6aea */
L_100A6ACA:
    PUSH32(esp, esi); /* 0x100A6ACA: push esi */
    esi = (uint32_t)((int32_t)MEM32(ebx + 0x75) * (int32_t)0x43206C61u); /* 0x100A6ACB: imul esi, dword ptr [ebx + 0x75], 0x43206c61 */
    goto L_100A6AD2; /* falls through past a gap */
L_100A6AD1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A6AD1: inc ebx */
    _flag_k = FK_INC;
L_100A6AD2:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebp = ebp - MEM32(ebx); /* 0x100A6AD2: sub ebp, dword ptr [ebx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(edx + 0x75)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x75) = (uint8_t)(MEM8(edx + 0x75) & LO8(edx)); /* 0x100A6AD4: and byte ptr [edx + 0x75], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AD7; /* falls through past a gap */
L_100A6AD5:
    PUSH32(esp, edx); /* 0x100A6AD5: push edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B46; /* 0x100A6AD6: jne 0x100a6b46 */
    goto L_100A6AD8; /* falls through past a gap */
L_100A6AD7:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AD7: outsb dx, byte ptr [esi] */
L_100A6AD8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6B43; /* 0x100A6AD8: je 0x100a6b43 */
    goto L_100A6ADA; /* falls through past a gap */
L_100A6AD9:
    ebp = (uint32_t)((int32_t)MEM32(ebp + 0x65) * (int32_t)0x62694C20u); /* 0x100A6AD9: imul ebp, dword ptr [ebp + 0x65], 0x62694c20 */
    goto L_100A6AE0; /* falls through past a gap */
L_100A6ADA:
    void_lift_trap(0x100A6ADAu, "insd dword ptr es:[edi], dx");
L_100A6ADB:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) = (uint8_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) & LO8(ecx)); /* 0x100A6ADB: and byte ptr gs:[ecx + ebp*2 + 0x62], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6AE0:
    if (0) goto L_100A6B43; /* 0x100A6AE0: jb 0x100a6b43 */
    goto L_100A6AE2; /* falls through past a gap */
L_100A6AE1:
    POPAD(); /* 0x100A6AE1: popal  */
L_100A6AE2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6B5D; /* 0x100A6AE2: jb 0x100a6b5d */
L_100A6AE4:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A6AE4: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A6AE7: in al, dx */
    PUSH32(esp, ebx); /* 0x100A6AE8: push ebx */
    PUSH32(esp, esi); /* 0x100A6AE9: push esi */
L_100A6AEA:
    esi = MEM32(ebp + 0xC); /* 0x100A6AEA: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A6AED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A6AEF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A6AF0: mov edi, dword ptr [ebp + 8] */
    goto L_100A6AF3; /* falls through past a gap */
L_100A6AF2:
    _flag_a = (uint32_t)((MEM8(ebx + (-0x7430743A)) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(ebx + (-0x7430743A)) | LO8(ecx))) << 24;
    MEM8(ebx + (-0x7430743A)) = (uint8_t)(MEM8(ebx + (-0x7430743A)) | LO8(ecx)); /* 0x100A6AF2: or byte ptr [ebx - 0x7430743a], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AF8; /* falls through past a gap */
L_100A6AF3:
    eax = esi; /* 0x100A6AF3: mov eax, esi */
    ecx = edi; /* 0x100A6AF5: mov ecx, edi */
    ebx = edi; /* 0x100A6AF7: mov ebx, edi */
    goto L_100A6AF9; /* falls through past a gap */
L_100A6AF8:
    void_lift_trap(0x100A6AF8u, "fisttp word ptr [edi]");
    goto L_100A6AFA; /* falls through past a gap */
L_100A6AF9:
    if (1) _cf = (((eax) >> 16) & 1u); /* 0x100A6AF9: shld eax, ecx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax));
    goto L_100A6AFD; /* falls through past a gap */
L_100A6AFA:
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100A6AFA: movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFF8110u; /* 0x100A6AFB: enter -0x7ef0, -0x1d */
    goto L_100A6AFF; /* falls through past a gap */
L_100A6AFC:
    { uint32_t _aa = MEM8(ecx + 0xFF00E3), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6AFC: adc byte ptr [ecx + 0xff00e3], al */
      MEM8(ecx + 0xFF00E3) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B02; /* falls through past a gap */
L_100A6AFD:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    ebx = ebx & 0xFF00u; /* 0x100A6AFD: and ebx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B03; /* falls through past a gap */
L_100A6AFE:
    if (ecx == 0) goto L_100A6B00; /* 0x100A6AFE: jecxz 0x100a6b00 */
    goto L_100A6B00; /* falls through past a gap */
L_100A6AFF:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6AFF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B01; /* falls through past a gap */
L_100A6B00:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x100A6B00: inc dword ptr [eax] */
    _flag_k = FK_INC;
    goto L_100A6B02; /* falls through past a gap */
L_100A6B01:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B01: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B03; /* falls through past a gap */
L_100A6B02:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B02: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B04; /* falls through past a gap */
L_100A6B03:
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x100A6B03: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x100A6B03: shl ecx, 0x10 */
    goto L_100A6B06; /* falls through past a gap */
L_100A6B04:
    { int _zc = (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)); if (--ecx != 0 && _zc) goto L_100A6B16; } /* 0x100A6B04: loope 0x100a6b16 */
L_100A6B06:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B06: add ebx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x100A6B08: push 0 */
L_100A6B0A:
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B0A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = edi; /* 0x100A6B0C: mov eax, edi */
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B0E: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    eax = eax & 0x00FF0000u; /* 0x100A6B12: and eax, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B17; /* falls through past a gap */
L_100A6B16:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B16: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B18; /* falls through past a gap */
L_100A6B17:
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B17: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B17: shl ebx, 0x10 */
    goto L_100A6B1A; /* falls through past a gap */
L_100A6B18:
    if (ecx == 0) goto L_100A6B2A; /* 0x100A6B18: jecxz 0x100a6b2a */
L_100A6B1A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B1A: add ebx, eax */
    _flag_k = FK_ADD;
    eax = edi; /* 0x100A6B1C: mov eax, edi */
    ecx = POP32_VAL(esp); /* 0x100A6B1E: pop ecx */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B1F: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    eax = eax & 0xFF000000u; /* 0x100A6B21: and eax, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B26; /* falls through past a gap */
L_100A6B22:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B24:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6B24: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B26:
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B26: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
L_100A6B2A:
    PUSH32(esp, 0); /* 0x100A6B2A: push 0 */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B2C: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B2C: shl ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B2F: add ebx, eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x100A6B31: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B33: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B35; /* falls through past a gap */
L_100A6B34:
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x100A6B34: rol ecx, 1 */
    goto L_100A6B36; /* falls through past a gap */
L_100A6B35:
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x100A6B35: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x100A6B35: shr eax, 8 */
    goto L_100A6B38; /* falls through past a gap */
L_100A6B36:
    RECOMP_ICALL(0xEAAE7A43u); /* 0x100A6B36: call 0xeaae7a43 */ /* not lifted */
    RECOMP_FLAGS_IN();
    goto L_100A6B3B; /* falls through past a gap */
L_100A6B38:
    if (1) _cf = (((edx) >> 24) & 1u); /* 0x100A6B38: shld edx, ebx, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx));
    goto L_100A6B3C; /* falls through past a gap */
L_100A6B3B:
    _flag_a = (uint32_t)((MEM8(0xFF00) | HI8(eax))) << 24; _flag_b = (uint32_t)((MEM8(0xFF00) | HI8(eax))) << 24;
    MEM8(0xFF00) = (uint8_t)(MEM8(0xFF00) | HI8(eax)); /* 0x100A6B3B: or byte ptr [0xff00], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B41; /* falls through past a gap */
L_100A6B3C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x100A6B3C: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A6B41:
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x100A6B41: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x100A6B41: shl ebx, 8 */
    goto L_100A6B44; /* falls through past a gap */
L_100A6B43:
    _flag_a = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) | LO8(eax)); /* 0x100A6B43: or byte ptr [ebx], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B45; /* falls through past a gap */
L_100A6B44:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B44: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_100A6B46; /* falls through past a gap */
L_100A6B45:
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x742EEC3A)); /* 0x100A6B45: fmul dword ptr [ebx - 0x742eec3a] */
    goto L_100A6B4B; /* falls through past a gap */
L_100A6B46:
    eax = esi; /* 0x100A6B46: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B48: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edi; /* 0x100A6B4A: mov ecx, edi */
    goto L_100A6B4C; /* falls through past a gap */
L_100A6B4B:
    void_lift_trap(0x100A6B4Bu, "iretd ");
L_100A6B4C:
    if (1) _cf = (((ecx) >> 7) & 1u); /* 0x100A6B4C: shrd ecx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx));
    eax = POP32_VAL(esp); /* 0x100A6B50: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF000000u);
    ecx = ecx & 0xFF000000u; /* 0x100A6B51: and ecx, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B57: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x100A6B59: mov ecx, esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B5B: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100A6B5D:
    if (1) _cf = (((edi) >> 23) & 1u); /* 0x100A6B5D: shrd edi, ecx, 0x18 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = ((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00FF0000u);
    edi = edi & 0x00FF0000u; /* 0x100A6B61: and edi, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x100A6B67: add ebx, edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100A6B69: pop edi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B6A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (24u) _cf = (((esi) >> 23) & 1u); /* 0x100A6B6C: shr esi, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((esi >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 24u; /* 0x100A6B6C: shr esi, 0x18 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x100A6B6F: add ebx, esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100A6B71: pop esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B72: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebx; /* 0x100A6B74: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x100A6B76: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6B77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6B78: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6A10u);

L_100A6A10:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A6A10: inc esi */
    _flag_k = FK_INC;
    /* outsd: no port I/O under Win32 */ /* 0x100A6A11: outsd dx, dword ptr [esi] */
    if ((_cf != 0)) goto L_100A6A34; /* 0x100A6A12: jb 0x100a6a34 */
L_100A6A14:
    ebp = (uint32_t)((int32_t)MEM32(esi + 0x66) * (int32_t)0x616D726Fu); /* 0x100A6A14: imul ebp, dword ptr [esi + 0x66], 0x616d726f */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A6A86; /* 0x100A6A1B: je 0x100a6a86 */
L_100A6A1D:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A1D: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6A1E: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi + 0x6E) = (uint8_t)(MEM8(edi + 0x6E) & HI8(ecx)); /* 0x100A6A1F: and byte ptr [edi + 0x6e], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(eax + 0x6F) = (uint8_t)(MEM8(eax + 0x6F) & HI8(ecx)); /* 0x100A6A22: and byte ptr [eax + 0x6f], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6A47; /* 0x100A6A25: ja 0x100a6a47 */
L_100A6A27:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6A98; /* 0x100A6A27: jns 0x100a6a98 */
L_100A6A29:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6A9D; /* 0x100A6A29: jne 0x100a6a9d */
L_100A6A2B:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) & HI8(edx)); /* 0x100A6A2B: and byte ptr [eax + 0x72], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A6A2E: outsd dx, dword ptr [esi] */
    if (0) goto L_100A6A93; /* 0x100A6A2F: jb 0x100a6a93 */
L_100A6A32:
    void_lift_trap(0x100A6A32u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + 0x61)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebx + 0x61) = (uint8_t)(MEM8(ebx + 0x61) & HI8(eax)); /* 0x100A6A33: and byte ptr [ebx + 0x61], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A36; /* falls through past a gap */
L_100A6A34:
    void_lift_trap(0x100A6A34u, "arpl word ptr [ecx + 0x6e], sp");
    goto L_100A6A37; /* falls through past a gap */
L_100A6A36:
    /* outsb: no port I/O under Win32 */ /* 0x100A6A36: outsb dx, byte ptr [esi] */
L_100A6A37:
    _flag_a = (uint32_t)(MEM8(ebx + 0x61)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebx + 0x61) = (uint8_t)(MEM8(ebx + 0x61) & HI8(eax)); /* 0x100A6A37: and byte ptr [ebx + 0x61], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6AAF; /* 0x100A6A3A: jne 0x100a6aaf */
L_100A6A3C:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + 0x6E))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(GS_BASE + (ecx + 0x6E)) = (uint8_t)(MEM8(GS_BASE + (ecx + 0x6E)) & HI8(eax)); /* 0x100A6A3C: and byte ptr gs:[ecx + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x73)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x73) = (uint8_t)(MEM8(ecx + 0x73) & HI8(eax)); /* 0x100A6A40: and byte ptr [ecx + 0x73], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AAA; /* 0x100A6A43: jae 0x100a6aaa */
L_100A6A45:
    if (0) goto L_100A6ABB; /* 0x100A6A45: jb 0x100a6abb */
L_100A6A47:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0x6961660Au); /* 0x100A6A47: imul ebp, dword ptr [edi + 0x6e], 0x6961660a */
    void_lift_trap(0x100A6A4Eu, "insb byte ptr es:[edi], dx");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AC3; /* 0x100A6A4F: jne 0x100a6ac3 */
L_100A6A51:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x20u); /* 0x100A6A51: sub al, 0x20 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6ABB; /* 0x100A6A54: jae 0x100a6abb */
L_100A6A56:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) = (uint8_t)(MEM8(GS_BASE + (eax + ebp * 2 + 0x65)) & HI8(edx)); /* 0x100A6A56: and byte ptr gs:[eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(esi + 0x69)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(esi + 0x69) = (uint8_t)(MEM8(esi + 0x69) & LO8(edx)); /* 0x100A6A5B: and byte ptr [esi + 0x69], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AD5; /* 0x100A6A5E: jae 0x100a6ad5 */
L_100A6A60:
    POPAD(); /* 0x100A6A60: popal  */
    void_lift_trap(0x100A6A61u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebx + 0x2B)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(ebx + 0x2B) = (uint8_t)(MEM8(ebx + 0x2B) & LO8(eax)); /* 0x100A6A62: and byte ptr [ebx + 0x2b], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - MEM32(eax); /* 0x100A6A65: sub esp, dword ptr [eax] */
    _flag_k = FK_CMP;
    /* outsd: no port I/O under Win32 */ /* 0x100A6A67: outsd dx, dword ptr fs:[esi] */
    void_lift_trap(0x100A6A69u, "arpl word ptr [ebp + 0x6d], si");
    /* outsb: no port I/O under Win32 */ /* 0x100A6A6C: outsb dx, byte ptr gs:[esi] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A6AD1; /* 0x100A6A6E: je 0x100a6ad1 */
L_100A6A70:
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A6ADB; /* 0x100A6A70: je 0x100a6adb */
L_100A6A72:
    /* outsd: no port I/O under Win32 */ /* 0x100A6A72: outsd dx, dword ptr [esi] */
    /* outsb: no port I/O under Win32 */ /* 0x100A6A73: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(edi + 0x6E) = (uint8_t)(MEM8(edi + 0x6E) & HI8(ecx)); /* 0x100A6A74: and byte ptr [edi + 0x6e], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x73)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x73) = (uint8_t)(MEM8(ecx + 0x73) & HI8(eax)); /* 0x100A6A77: and byte ptr [ecx + 0x73], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A6AE1; /* 0x100A6A7A: jae 0x100a6ae1 */
L_100A6A7C:
    if (0) goto L_100A6AF2; /* 0x100A6A7C: jb 0x100a6af2 */
L_100A6A7E:
    if (1) goto L_100A6A80; /* 0x100A6A7E: jae 0x100a6a80 */
L_100A6A80:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) - LO8(edx)); /* 0x100A6A80: sub byte ptr [eax + 0x72], dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6AF9; /* 0x100A6A83: jae 0x100a6af9 */
L_100A6A86:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & LO8(edx)); /* 0x100A6A86: and byte ptr [edx + 0x65], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFD; /* 0x100A6A89: je 0x100a6afd */
L_100A6A8B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6AAD; /* 0x100A6A8B: jns 0x100a6aad */
L_100A6A8D:
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFE; /* 0x100A6A8D: je 0x100a6afe */
L_100A6A8F:
    _flag_a = (uint32_t)(MEM8(ebp + 0x62)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x62) = (uint8_t)(MEM8(ebp + 0x62) & HI8(eax)); /* 0x100A6A8F: and byte ptr [ebp + 0x62], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A93:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6AFC; /* 0x100A6A93: jne 0x100a6afc */
L_100A6A95:
    _flag_a = (uint32_t)(MEM8(eax + ebp * 2 + 0x65)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + ebp * 2 + 0x65) = (uint8_t)(MEM8(eax + ebp * 2 + 0x65) & HI8(edx)); /* 0x100A6A95: and byte ptr [eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A99; /* falls through past a gap */
L_100A6A98:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + 0x70))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(GS_BASE + (ecx + 0x70)) = (uint8_t)(MEM8(GS_BASE + (ecx + 0x70)) & HI8(eax)); /* 0x100A6A98: and byte ptr gs:[ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6A9C; /* falls through past a gap */
L_100A6A99:
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x70) = (uint8_t)(MEM8(ecx + 0x70) & HI8(eax)); /* 0x100A6A99: and byte ptr [ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100A6A9C:
    if (CMP_O(_flag_a, _flag_b)) goto L_100A6B0A; /* 0x100A6A9C: jo 0x100a6b0a */
    goto L_100A6A9E; /* falls through past a gap */
L_100A6A9D:
    void_lift_trap(0x100A6A9Du, "insb byte ptr es:[edi], dx");
L_100A6A9E:
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x61) * (int32_t)0x6E6F6974u); /* 0x100A6A9E: imul esp, dword ptr [ebx + 0x61], 0x6e6f6974 */
    _flag_a = (uint32_t)(MEM8(0x54494A20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(0x54494A20) = (uint8_t)(MEM8(0x54494A20) & HI8(ecx)); /* 0x100A6AA5: and byte ptr [0x54494a20], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAB; /* falls through past a gap */
L_100A6AAA:
    PUSH32(esp, esp); /* 0x100A6AAA: push esp */
L_100A6AAB:
    _flag_a = (uint32_t)(MEM8(ebp + 0x75)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(ebp + 0x75) = (uint8_t)(MEM8(ebp + 0x75) & HI8(ecx)); /* 0x100A6AAB: and byte ptr [ebp + 0x75], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAE; /* falls through past a gap */
L_100A6AAD:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B22; /* 0x100A6AAD: jne 0x100a6b22 */
    goto L_100A6AAF; /* falls through past a gap */
L_100A6AAE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B24; /* 0x100A6AAE: jae 0x100a6b24 */
    goto L_100A6AB0; /* falls through past a gap */
L_100A6AAF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AD1; /* 0x100A6AAF: je 0x100a6ad1 */
    goto L_100A6AB1; /* falls through past a gap */
L_100A6AB0:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & HI8(eax)); /* 0x100A6AB0: and byte ptr [edx + 0x65], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB3; /* falls through past a gap */
L_100A6AB1:
    void_lift_trap(0x100A6AB1u, "bound esp, qword ptr [ebp + 0x20]");
    goto L_100A6AB4; /* falls through past a gap */
L_100A6AB3:
    _flag_a = (uint32_t)(MEM8(ebp + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x6E) = (uint8_t)(MEM8(ebp + 0x6E) & HI8(eax)); /* 0x100A6AB3: and byte ptr [ebp + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB6; /* falls through past a gap */
L_100A6AB4:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AB4: outsb dx, byte ptr gs:[esi] */
L_100A6AB6:
    POPAD(); /* 0x100A6AB6: popal  */
    void_lift_trap(0x100A6AB7u, "bound ebp, qword ptr [ebp + 0x64]");
L_100A6ABB:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - eax; /* 0x100A6ABB: sub dword ptr [eax], eax */
    _flag_k = FK_CMP;
    /* nop */ /* 0x100A6ABD: nop  */
    /* nop */ /* 0x100A6ABE: nop  */
    /* nop */ /* 0x100A6ABF: nop  */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A6AC0: dec ebp */
    _flag_k = FK_DEC;
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x72) * (int32_t)0x666F736Fu); /* 0x100A6AC1: imul esp, dword ptr [ebx + 0x72], 0x666f736f */
    goto L_100A6AC8; /* falls through past a gap */
L_100A6AC3:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6B34; /* 0x100A6AC3: jb 0x100a6b34 */
L_100A6AC5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B36; /* 0x100A6AC5: jae 0x100a6b36 */
L_100A6AC7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AEA; /* 0x100A6AC7: je 0x100a6aea */
    goto L_100A6ACA; /* falls through past a gap */
L_100A6AC8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AEA; /* 0x100A6AC8: je 0x100a6aea */
L_100A6ACA:
    PUSH32(esp, esi); /* 0x100A6ACA: push esi */
    esi = (uint32_t)((int32_t)MEM32(ebx + 0x75) * (int32_t)0x43206C61u); /* 0x100A6ACB: imul esi, dword ptr [ebx + 0x75], 0x43206c61 */
    goto L_100A6AD2; /* falls through past a gap */
L_100A6AD1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A6AD1: inc ebx */
    _flag_k = FK_INC;
L_100A6AD2:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebp = ebp - MEM32(ebx); /* 0x100A6AD2: sub ebp, dword ptr [ebx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(edx + 0x75)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x75) = (uint8_t)(MEM8(edx + 0x75) & LO8(edx)); /* 0x100A6AD4: and byte ptr [edx + 0x75], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AD7; /* falls through past a gap */
L_100A6AD5:
    PUSH32(esp, edx); /* 0x100A6AD5: push edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B46; /* 0x100A6AD6: jne 0x100a6b46 */
    goto L_100A6AD8; /* falls through past a gap */
L_100A6AD7:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AD7: outsb dx, byte ptr [esi] */
L_100A6AD8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6B43; /* 0x100A6AD8: je 0x100a6b43 */
L_100A6ADA:
    void_lift_trap(0x100A6ADAu, "insd dword ptr es:[edi], dx");
L_100A6ADB:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) = (uint8_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) & LO8(ecx)); /* 0x100A6ADB: and byte ptr gs:[ecx + ebp*2 + 0x62], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (0) goto L_100A6B43; /* 0x100A6AE0: jb 0x100a6b43 */
    goto L_100A6AE2; /* falls through past a gap */
L_100A6AE1:
    POPAD(); /* 0x100A6AE1: popal  */
L_100A6AE2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A6B5D; /* 0x100A6AE2: jb 0x100a6b5d */
L_100A6AE4:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A6AE4: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A6AE7: in al, dx */
    PUSH32(esp, ebx); /* 0x100A6AE8: push ebx */
    PUSH32(esp, esi); /* 0x100A6AE9: push esi */
L_100A6AEA:
    esi = MEM32(ebp + 0xC); /* 0x100A6AEA: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A6AED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A6AEF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A6AF0: mov edi, dword ptr [ebp + 8] */
    goto L_100A6AF3; /* falls through past a gap */
L_100A6AF2:
    _flag_a = (uint32_t)((MEM8(ebx + (-0x7430743A)) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(ebx + (-0x7430743A)) | LO8(ecx))) << 24;
    MEM8(ebx + (-0x7430743A)) = (uint8_t)(MEM8(ebx + (-0x7430743A)) | LO8(ecx)); /* 0x100A6AF2: or byte ptr [ebx - 0x7430743a], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AF8; /* falls through past a gap */
L_100A6AF3:
    eax = esi; /* 0x100A6AF3: mov eax, esi */
    ecx = edi; /* 0x100A6AF5: mov ecx, edi */
    ebx = edi; /* 0x100A6AF7: mov ebx, edi */
    goto L_100A6AF9; /* falls through past a gap */
L_100A6AF8:
    void_lift_trap(0x100A6AF8u, "fisttp word ptr [edi]");
    goto L_100A6AFA; /* falls through past a gap */
L_100A6AF9:
    if (1) _cf = (((eax) >> 16) & 1u); /* 0x100A6AF9: shld eax, ecx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax));
    goto L_100A6AFD; /* falls through past a gap */
L_100A6AFA:
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100A6AFA: movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, ebp); ebp = esp; esp -= 0xFFFF8110u; /* 0x100A6AFB: enter -0x7ef0, -0x1d */
    goto L_100A6AFF; /* falls through past a gap */
L_100A6AFC:
    { uint32_t _aa = MEM8(ecx + 0xFF00E3), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6AFC: adc byte ptr [ecx + 0xff00e3], al */
      MEM8(ecx + 0xFF00E3) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B02; /* falls through past a gap */
L_100A6AFD:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    ebx = ebx & 0xFF00u; /* 0x100A6AFD: and ebx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B03; /* falls through past a gap */
L_100A6AFE:
    if (ecx == 0) goto L_100A6B00; /* 0x100A6AFE: jecxz 0x100a6b00 */
    goto L_100A6B00; /* falls through past a gap */
L_100A6AFF:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6AFF: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B01; /* falls through past a gap */
L_100A6B00:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x100A6B00: inc dword ptr [eax] */
    _flag_k = FK_INC;
    goto L_100A6B02; /* falls through past a gap */
L_100A6B01:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B01: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B03; /* falls through past a gap */
L_100A6B02:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B02: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B04; /* falls through past a gap */
L_100A6B03:
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x100A6B03: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x100A6B03: shl ecx, 0x10 */
    goto L_100A6B06; /* falls through past a gap */
L_100A6B04:
    { int _zc = (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)); if (--ecx != 0 && _zc) goto L_100A6B16; } /* 0x100A6B04: loope 0x100a6b16 */
L_100A6B06:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B06: add ebx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x100A6B08: push 0 */
L_100A6B0A:
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B0A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = edi; /* 0x100A6B0C: mov eax, edi */
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B0E: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    eax = eax & 0x00FF0000u; /* 0x100A6B12: and eax, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B17; /* falls through past a gap */
L_100A6B16:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B16: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B18; /* falls through past a gap */
L_100A6B17:
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B17: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B17: shl ebx, 0x10 */
    goto L_100A6B1A; /* falls through past a gap */
L_100A6B18:
    if (ecx == 0) goto L_100A6B2A; /* 0x100A6B18: jecxz 0x100a6b2a */
L_100A6B1A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B1A: add ebx, eax */
    _flag_k = FK_ADD;
    eax = edi; /* 0x100A6B1C: mov eax, edi */
    ecx = POP32_VAL(esp); /* 0x100A6B1E: pop ecx */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B1F: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    eax = eax & 0xFF000000u; /* 0x100A6B21: and eax, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B26; /* falls through past a gap */
L_100A6B22:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B24:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6B24: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B26:
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B26: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
L_100A6B2A:
    PUSH32(esp, 0); /* 0x100A6B2A: push 0 */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B2C: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B2C: shl ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B2F: add ebx, eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x100A6B31: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B33: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B35; /* falls through past a gap */
L_100A6B34:
    { uint32_t _rv = (ecx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ecx = _rv; } /* 0x100A6B34: rol ecx, 1 */
    goto L_100A6B36; /* falls through past a gap */
L_100A6B35:
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x100A6B35: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x100A6B35: shr eax, 8 */
    goto L_100A6B38; /* falls through past a gap */
L_100A6B36:
    RECOMP_ICALL(0xEAAE7A43u); /* 0x100A6B36: call 0xeaae7a43 */ /* not lifted */
    RECOMP_FLAGS_IN();
    goto L_100A6B3B; /* falls through past a gap */
L_100A6B38:
    if (1) _cf = (((edx) >> 24) & 1u); /* 0x100A6B38: shld edx, ebx, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx));
    goto L_100A6B3C; /* falls through past a gap */
L_100A6B3B:
    _flag_a = (uint32_t)((MEM8(0xFF00) | HI8(eax))) << 24; _flag_b = (uint32_t)((MEM8(0xFF00) | HI8(eax))) << 24;
    MEM8(0xFF00) = (uint8_t)(MEM8(0xFF00) | HI8(eax)); /* 0x100A6B3B: or byte ptr [0xff00], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B41; /* falls through past a gap */
L_100A6B3C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x100A6B3C: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A6B41:
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x100A6B41: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x100A6B41: shl ebx, 8 */
    goto L_100A6B44; /* falls through past a gap */
L_100A6B43:
    _flag_a = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) | LO8(eax)); /* 0x100A6B43: or byte ptr [ebx], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B45; /* falls through past a gap */
L_100A6B44:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B44: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_100A6B46; /* falls through past a gap */
L_100A6B45:
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x742EEC3A)); /* 0x100A6B45: fmul dword ptr [ebx - 0x742eec3a] */
    goto L_100A6B4B; /* falls through past a gap */
L_100A6B46:
    eax = esi; /* 0x100A6B46: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B48: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edi; /* 0x100A6B4A: mov ecx, edi */
    goto L_100A6B4C; /* falls through past a gap */
L_100A6B4B:
    void_lift_trap(0x100A6B4Bu, "iretd ");
L_100A6B4C:
    if (1) _cf = (((ecx) >> 7) & 1u); /* 0x100A6B4C: shrd ecx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx));
    eax = POP32_VAL(esp); /* 0x100A6B50: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF000000u);
    ecx = ecx & 0xFF000000u; /* 0x100A6B51: and ecx, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B57: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x100A6B59: mov ecx, esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B5B: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100A6B5D:
    if (1) _cf = (((edi) >> 23) & 1u); /* 0x100A6B5D: shrd edi, ecx, 0x18 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = ((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00FF0000u);
    edi = edi & 0x00FF0000u; /* 0x100A6B61: and edi, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x100A6B67: add ebx, edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100A6B69: pop edi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B6A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (24u) _cf = (((esi) >> 23) & 1u); /* 0x100A6B6C: shr esi, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((esi >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 24u; /* 0x100A6B6C: shr esi, 0x18 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x100A6B6F: add ebx, esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100A6B71: pop esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B72: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebx; /* 0x100A6B74: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x100A6B76: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6B77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6B78: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6A80u);

L_100A6A80:
    _flag_a = (uint32_t)(MEM8(eax + 0x72)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax + 0x72) = (uint8_t)(MEM8(eax + 0x72) - LO8(edx)); /* 0x100A6A80: sub byte ptr [eax + 0x72], dl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_100A6AF9; /* 0x100A6A83: jae 0x100a6af9 */
L_100A6A86:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & LO8(edx)); /* 0x100A6A86: and byte ptr [edx + 0x65], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFD; /* 0x100A6A89: je 0x100a6afd */
L_100A6A8B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100A6AAD; /* 0x100A6A8B: jns 0x100a6aad */
L_100A6A8D:
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6AFE; /* 0x100A6A8D: je 0x100a6afe */
L_100A6A8F:
    _flag_a = (uint32_t)(MEM8(ebp + 0x62)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x62) = (uint8_t)(MEM8(ebp + 0x62) & HI8(eax)); /* 0x100A6A8F: and byte ptr [ebp + 0x62], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6AFC; /* 0x100A6A93: jne 0x100a6afc */
L_100A6A95:
    _flag_a = (uint32_t)(MEM8(eax + ebp * 2 + 0x65)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    MEM8(eax + ebp * 2 + 0x65) = (uint8_t)(MEM8(eax + ebp * 2 + 0x65) & HI8(edx)); /* 0x100A6A95: and byte ptr [eax + ebp*2 + 0x65], dh */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ecx + 0x70) = (uint8_t)(MEM8(ecx + 0x70) & HI8(eax)); /* 0x100A6A99: and byte ptr [ecx + 0x70], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (CMP_O(_flag_a, _flag_b)) goto L_100A6B0A; /* 0x100A6A9C: jo 0x100a6b0a */
L_100A6A9E:
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x61) * (int32_t)0x6E6F6974u); /* 0x100A6A9E: imul esp, dword ptr [ebx + 0x61], 0x6e6f6974 */
    _flag_a = (uint32_t)(MEM8(0x54494A20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(0x54494A20) = (uint8_t)(MEM8(0x54494A20) & HI8(ecx)); /* 0x100A6AA5: and byte ptr [0x54494a20], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ebp + 0x75)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    MEM8(ebp + 0x75) = (uint8_t)(MEM8(ebp + 0x75) & HI8(ecx)); /* 0x100A6AAB: and byte ptr [ebp + 0x75], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AAE; /* falls through past a gap */
L_100A6AAD:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A6B22; /* 0x100A6AAD: jne 0x100a6b22 */
    goto L_100A6AAF; /* falls through past a gap */
L_100A6AAE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A6B24; /* 0x100A6AAE: jae 0x100a6b24 */
    goto L_100A6AB0; /* falls through past a gap */
L_100A6AAF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A6AD1; /* 0x100A6AAF: je 0x100a6ad1 */
    goto L_100A6AB1; /* falls through past a gap */
L_100A6AB0:
    _flag_a = (uint32_t)(MEM8(edx + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(edx + 0x65) = (uint8_t)(MEM8(edx + 0x65) & HI8(eax)); /* 0x100A6AB0: and byte ptr [edx + 0x65], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB3; /* falls through past a gap */
L_100A6AB1:
    void_lift_trap(0x100A6AB1u, "bound esp, qword ptr [ebp + 0x20]");
    goto L_100A6AB4; /* falls through past a gap */
L_100A6AB3:
    _flag_a = (uint32_t)(MEM8(ebp + 0x6E)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    MEM8(ebp + 0x6E) = (uint8_t)(MEM8(ebp + 0x6E) & HI8(eax)); /* 0x100A6AB3: and byte ptr [ebp + 0x6e], ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6AB6; /* falls through past a gap */
L_100A6AB4:
    /* outsb: no port I/O under Win32 */ /* 0x100A6AB4: outsb dx, byte ptr gs:[esi] */
L_100A6AB6:
    POPAD(); /* 0x100A6AB6: popal  */
    void_lift_trap(0x100A6AB7u, "bound ebp, qword ptr [ebp + 0x64]");
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - eax; /* 0x100A6ABB: sub dword ptr [eax], eax */
    _flag_k = FK_CMP;
    /* nop */ /* 0x100A6ABD: nop  */
    /* nop */ /* 0x100A6ABE: nop  */
    /* nop */ /* 0x100A6ABF: nop  */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A6AC0: dec ebp */
    _flag_k = FK_DEC;
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x72) * (int32_t)0x666F736Fu); /* 0x100A6AC1: imul esp, dword ptr [ebx + 0x72], 0x666f736f */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A6AEA; /* 0x100A6AC8: je 0x100a6aea */
L_100A6ACA:
    PUSH32(esp, esi); /* 0x100A6ACA: push esi */
    esi = (uint32_t)((int32_t)MEM32(ebx + 0x75) * (int32_t)0x43206C61u); /* 0x100A6ACB: imul esi, dword ptr [ebx + 0x75], 0x43206c61 */
    goto L_100A6AD2; /* falls through past a gap */
L_100A6AD1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A6AD1: inc ebx */
    _flag_k = FK_INC;
L_100A6AD2:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebp = ebp - MEM32(ebx); /* 0x100A6AD2: sub ebp, dword ptr [ebx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(edx + 0x75)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x75) = (uint8_t)(MEM8(edx + 0x75) & LO8(edx)); /* 0x100A6AD4: and byte ptr [edx + 0x75], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A6AD7: outsb dx, byte ptr [esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6B43; /* 0x100A6AD8: je 0x100a6b43 */
L_100A6ADA:
    void_lift_trap(0x100A6ADAu, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) = (uint8_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) & LO8(ecx)); /* 0x100A6ADB: and byte ptr gs:[ecx + ebp*2 + 0x62], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (0) goto L_100A6B43; /* 0x100A6AE0: jb 0x100a6b43 */
L_100A6AE2:
    if (0) goto L_100A6B5D; /* 0x100A6AE2: jb 0x100a6b5d */
L_100A6AE4:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A6AE4: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A6AE7: in al, dx */
    PUSH32(esp, ebx); /* 0x100A6AE8: push ebx */
    PUSH32(esp, esi); /* 0x100A6AE9: push esi */
L_100A6AEA:
    esi = MEM32(ebp + 0xC); /* 0x100A6AEA: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A6AED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A6AEF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A6AF0: mov edi, dword ptr [ebp + 8] */
    eax = esi; /* 0x100A6AF3: mov eax, esi */
    ecx = edi; /* 0x100A6AF5: mov ecx, edi */
    ebx = edi; /* 0x100A6AF7: mov ebx, edi */
L_100A6AF9:
    if (1) _cf = (((eax) >> 16) & 1u); /* 0x100A6AF9: shld eax, ecx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax));
    goto L_100A6AFD; /* falls through past a gap */
L_100A6AFC:
    { uint32_t _aa = MEM8(ecx + 0xFF00E3), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6AFC: adc byte ptr [ecx + 0xff00e3], al */
      MEM8(ecx + 0xFF00E3) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100A6B02; /* falls through past a gap */
L_100A6AFD:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    ebx = ebx & 0xFF00u; /* 0x100A6AFD: and ebx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B03; /* falls through past a gap */
L_100A6AFE:
    if (ecx == 0) goto L_100A6B00; /* 0x100A6AFE: jecxz 0x100a6b00 */
L_100A6B00:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x100A6B00: inc dword ptr [eax] */
    _flag_k = FK_INC;
L_100A6B02:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B02: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B04; /* falls through past a gap */
L_100A6B03:
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x100A6B03: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x100A6B03: shl ecx, 0x10 */
    goto L_100A6B06; /* falls through past a gap */
L_100A6B04:
    { int _zc = (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)); if (--ecx != 0 && _zc) goto L_100A6B16; } /* 0x100A6B04: loope 0x100a6b16 */
L_100A6B06:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B06: add ebx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x100A6B08: push 0 */
L_100A6B0A:
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B0A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = edi; /* 0x100A6B0C: mov eax, edi */
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B0E: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    eax = eax & 0x00FF0000u; /* 0x100A6B12: and eax, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B17; /* falls through past a gap */
L_100A6B16:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + LO8(eax)); /* 0x100A6B16: add cl, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100A6B18; /* falls through past a gap */
L_100A6B17:
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B17: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B17: shl ebx, 0x10 */
    goto L_100A6B1A; /* falls through past a gap */
L_100A6B18:
    if (ecx == 0) goto L_100A6B2A; /* 0x100A6B18: jecxz 0x100a6b2a */
L_100A6B1A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B1A: add ebx, eax */
    _flag_k = FK_ADD;
    eax = edi; /* 0x100A6B1C: mov eax, edi */
    ecx = POP32_VAL(esp); /* 0x100A6B1E: pop ecx */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B1F: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    eax = eax & 0xFF000000u; /* 0x100A6B21: and eax, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6B26; /* falls through past a gap */
L_100A6B22:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A6B22: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B24:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100A6B24: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100A6B26:
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B26: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
L_100A6B2A:
    PUSH32(esp, 0); /* 0x100A6B2A: push 0 */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B2C: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B2C: shl ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B2F: add ebx, eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x100A6B31: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B33: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x100A6B35: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x100A6B35: shr eax, 8 */
    if (1) _cf = (((edx) >> 24) & 1u); /* 0x100A6B38: shld edx, ebx, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x100A6B3C: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x100A6B41: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x100A6B41: shl ebx, 8 */
    goto L_100A6B44; /* falls through past a gap */
L_100A6B43:
    _flag_a = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) | LO8(eax)); /* 0x100A6B43: or byte ptr [ebx], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B45; /* falls through past a gap */
L_100A6B44:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B44: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_100A6B46; /* falls through past a gap */
L_100A6B45:
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x742EEC3A)); /* 0x100A6B45: fmul dword ptr [ebx - 0x742eec3a] */
    goto L_100A6B4B; /* falls through past a gap */
L_100A6B46:
    eax = esi; /* 0x100A6B46: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B48: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edi; /* 0x100A6B4A: mov ecx, edi */
    goto L_100A6B4C; /* falls through past a gap */
L_100A6B4B:
    void_lift_trap(0x100A6B4Bu, "iretd ");
L_100A6B4C:
    if (1) _cf = (((ecx) >> 7) & 1u); /* 0x100A6B4C: shrd ecx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx));
    eax = POP32_VAL(esp); /* 0x100A6B50: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF000000u);
    ecx = ecx & 0xFF000000u; /* 0x100A6B51: and ecx, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B57: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x100A6B59: mov ecx, esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B5B: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100A6B5D:
    if (1) _cf = (((edi) >> 23) & 1u); /* 0x100A6B5D: shrd edi, ecx, 0x18 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = ((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00FF0000u);
    edi = edi & 0x00FF0000u; /* 0x100A6B61: and edi, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x100A6B67: add ebx, edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100A6B69: pop edi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B6A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (24u) _cf = (((esi) >> 23) & 1u); /* 0x100A6B6C: shr esi, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((esi >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 24u; /* 0x100A6B6C: shr esi, 0x18 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x100A6B6F: add ebx, esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100A6B71: pop esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B72: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebx; /* 0x100A6B74: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x100A6B76: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6B77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6B78: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6AC0u);

L_100A6AC0:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x100A6AC0: dec ebp */
    _flag_k = FK_DEC;
    esp = (uint32_t)((int32_t)MEM32(ebx + 0x72) * (int32_t)0x666F736Fu); /* 0x100A6AC1: imul esp, dword ptr [ebx + 0x72], 0x666f736f */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100A6AEA; /* 0x100A6AC8: je 0x100a6aea */
L_100A6ACA:
    PUSH32(esp, esi); /* 0x100A6ACA: push esi */
    esi = (uint32_t)((int32_t)MEM32(ebx + 0x75) * (int32_t)0x43206C61u); /* 0x100A6ACB: imul esi, dword ptr [ebx + 0x75], 0x43206c61 */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebp = ebp - MEM32(ebx); /* 0x100A6AD2: sub ebp, dword ptr [ebx] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(edx + 0x75)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    MEM8(edx + 0x75) = (uint8_t)(MEM8(edx + 0x75) & LO8(edx)); /* 0x100A6AD4: and byte ptr [edx + 0x75], dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A6AD7: outsb dx, byte ptr [esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6B43; /* 0x100A6AD8: je 0x100a6b43 */
L_100A6ADA:
    void_lift_trap(0x100A6ADAu, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) = (uint8_t)(MEM8(GS_BASE + (ecx + ebp * 2 + 0x62)) & LO8(ecx)); /* 0x100A6ADB: and byte ptr gs:[ecx + ebp*2 + 0x62], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (0) goto L_100A6B43; /* 0x100A6AE0: jb 0x100a6b43 */
L_100A6AE2:
    if (0) goto L_100A6B5D; /* 0x100A6AE2: jb 0x100a6b5d */
L_100A6AE4:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A6AE4: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A6AE7: in al, dx */
    PUSH32(esp, ebx); /* 0x100A6AE8: push ebx */
    PUSH32(esp, esi); /* 0x100A6AE9: push esi */
L_100A6AEA:
    esi = MEM32(ebp + 0xC); /* 0x100A6AEA: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A6AED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A6AEF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A6AF0: mov edi, dword ptr [ebp + 8] */
    eax = esi; /* 0x100A6AF3: mov eax, esi */
    ecx = edi; /* 0x100A6AF5: mov ecx, edi */
    ebx = edi; /* 0x100A6AF7: mov ebx, edi */
    if (1) _cf = (((eax) >> 16) & 1u); /* 0x100A6AF9: shld eax, ecx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax));
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    ebx = ebx & 0xFF00u; /* 0x100A6AFD: and ebx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x100A6B03: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x100A6B03: shl ecx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B06: add ebx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x100A6B08: push 0 */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B0A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = edi; /* 0x100A6B0C: mov eax, edi */
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B0E: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    eax = eax & 0x00FF0000u; /* 0x100A6B12: and eax, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B17: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B17: shl ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B1A: add ebx, eax */
    _flag_k = FK_ADD;
    eax = edi; /* 0x100A6B1C: mov eax, edi */
    ecx = POP32_VAL(esp); /* 0x100A6B1E: pop ecx */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B1F: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    eax = eax & 0xFF000000u; /* 0x100A6B21: and eax, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B26: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
    PUSH32(esp, 0); /* 0x100A6B2A: push 0 */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B2C: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B2C: shl ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B2F: add ebx, eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x100A6B31: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B33: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x100A6B35: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x100A6B35: shr eax, 8 */
    if (1) _cf = (((edx) >> 24) & 1u); /* 0x100A6B38: shld edx, ebx, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x100A6B3C: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x100A6B41: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x100A6B41: shl ebx, 8 */
    goto L_100A6B44; /* falls through past a gap */
L_100A6B43:
    _flag_a = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebx) | LO8(eax))) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) | LO8(eax)); /* 0x100A6B43: or byte ptr [ebx], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100A6B45; /* falls through past a gap */
L_100A6B44:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B44: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_100A6B46; /* falls through past a gap */
L_100A6B45:
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x742EEC3A)); /* 0x100A6B45: fmul dword ptr [ebx - 0x742eec3a] */
    goto L_100A6B4B; /* falls through past a gap */
L_100A6B46:
    eax = esi; /* 0x100A6B46: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B48: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edi; /* 0x100A6B4A: mov ecx, edi */
    goto L_100A6B4C; /* falls through past a gap */
L_100A6B4B:
    void_lift_trap(0x100A6B4Bu, "iretd ");
L_100A6B4C:
    if (1) _cf = (((ecx) >> 7) & 1u); /* 0x100A6B4C: shrd ecx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx));
    eax = POP32_VAL(esp); /* 0x100A6B50: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF000000u);
    ecx = ecx & 0xFF000000u; /* 0x100A6B51: and ecx, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B57: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x100A6B59: mov ecx, esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B5B: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_100A6B5D:
    if (1) _cf = (((edi) >> 23) & 1u); /* 0x100A6B5D: shrd edi, ecx, 0x18 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = ((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00FF0000u);
    edi = edi & 0x00FF0000u; /* 0x100A6B61: and edi, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x100A6B67: add ebx, edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100A6B69: pop edi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B6A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (24u) _cf = (((esi) >> 23) & 1u); /* 0x100A6B6C: shr esi, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((esi >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 24u; /* 0x100A6B6C: shr esi, 0x18 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x100A6B6F: add ebx, esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100A6B71: pop esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B72: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebx; /* 0x100A6B74: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x100A6B76: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6B77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6B78: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6AE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6AE5u);

L_100A6AE5:
    PUSH32(esp, ebp); /* 0x100A6AE5: push ebp */
    ebp = esp; /* 0x100A6AE6: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100A6AE8: push ebx */
    PUSH32(esp, esi); /* 0x100A6AE9: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100A6AEA: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100A6AED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100A6AEF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A6AF0: mov edi, dword ptr [ebp + 8] */
    eax = esi; /* 0x100A6AF3: mov eax, esi */
    ecx = edi; /* 0x100A6AF5: mov ecx, edi */
    ebx = edi; /* 0x100A6AF7: mov ebx, edi */
    if (1) _cf = (((eax) >> 16) & 1u); /* 0x100A6AF9: shld eax, ecx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (16u)) | ((uint32_t)(ecx) >> (32 - (16u)))) : (eax));
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFF00u);
    ebx = ebx & 0xFF00u; /* 0x100A6AFD: and ebx, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x100A6B03: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x100A6B03: shl ecx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B06: add ebx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x100A6B08: push 0 */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B0A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = edi; /* 0x100A6B0C: mov eax, edi */
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B0E: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    eax = eax & 0x00FF0000u; /* 0x100A6B12: and eax, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B17: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B17: shl ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B1A: add ebx, eax */
    _flag_k = FK_ADD;
    eax = edi; /* 0x100A6B1C: mov eax, edi */
    ecx = POP32_VAL(esp); /* 0x100A6B1E: pop ecx */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B1F: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    eax = eax & 0xFF000000u; /* 0x100A6B21: and eax, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) _cf = (((edx) >> 16) & 1u); /* 0x100A6B26: shld edx, ebx, 0x10 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (16u)) | ((uint32_t)(ebx) >> (32 - (16u)))) : (edx));
    PUSH32(esp, 0); /* 0x100A6B2A: push 0 */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x100A6B2C: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x100A6B2C: shl ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B2F: add ebx, eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x100A6B31: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B33: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x100A6B35: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x100A6B35: shr eax, 8 */
    if (1) _cf = (((edx) >> 24) & 1u); /* 0x100A6B38: shld edx, ebx, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = ((1) ? (((edx) << (8u)) | ((uint32_t)(ebx) >> (32 - (8u)))) : (edx));
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF00u);
    eax = eax & 0xFF00u; /* 0x100A6B3C: and eax, 0xff00 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x100A6B41: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x100A6B41: shl ebx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x100A6B44: add ebx, eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x100A6B46: mov eax, esi */
    { uint32_t _aa = edx, _ab = ecx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B48: adc edx, ecx */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edi; /* 0x100A6B4A: mov ecx, edi */
    if (1) _cf = (((ecx) >> 7) & 1u); /* 0x100A6B4C: shrd ecx, eax, 8 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (8u)) | ((uint32_t)(eax) << (32 - (8u)))) : (ecx));
    eax = POP32_VAL(esp); /* 0x100A6B50: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF000000u);
    ecx = ecx & 0xFF000000u; /* 0x100A6B51: and ecx, 0xff000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x100A6B57: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x100A6B59: mov ecx, esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B5B: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (1) _cf = (((edi) >> 23) & 1u); /* 0x100A6B5D: shrd edi, ecx, 0x18 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = ((1) ? (((edi) >> (24u)) | ((uint32_t)(ecx) << (32 - (24u)))) : (edi));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00FF0000u);
    edi = edi & 0x00FF0000u; /* 0x100A6B61: and edi, 0xff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x100A6B67: add ebx, edi */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100A6B69: pop edi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B6A: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (24u) _cf = (((esi) >> 23) & 1u); /* 0x100A6B6C: shr esi, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((esi >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 24u; /* 0x100A6B6C: shr esi, 0x18 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x100A6B6F: add ebx, esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100A6B71: pop esi */
    { uint32_t _aa = edx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100A6B72: adc edx, eax */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebx; /* 0x100A6B74: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x100A6B76: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6B77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6B78: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6B79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6B79u);

L_100A6B79:
    PUSH32(esp, ebp); /* 0x100A6B79: push ebp */
    ebp = esp; /* 0x100A6B7A: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x100A6B7C: mov edx, dword ptr [ebp + 8] */
    eax = edx; /* 0x100A6B7F: mov eax, edx */
    PUSH32(esp, esi); /* 0x100A6B81: push esi */
    esi = 0xFF00u; /* 0x100A6B82: mov esi, 0xff00 */
    ecx = edx; /* 0x100A6B87: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x100A6B89: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x100A6B8B: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x100A6B8B: shl ecx, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x100A6B8E: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x100A6B90: mov ecx, edx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x100A6B92: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x100A6B92: shr ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x100A6B95: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x100A6B97: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x100A6B97: shl eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x100A6B9A: add eax, ecx */
    _flag_k = FK_ADD;
    if (24u) _cf = (((edx) >> 23) & 1u); /* 0x100A6B9C: shr edx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((edx >> 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 24u; /* 0x100A6B9C: shr edx, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x100A6B9F: add eax, edx */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x100A6BA1: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A6BA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6BA3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6BA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6BA4u);

L_100A6BA4:
    PUSH32(esp, ebp); /* 0x100A6BA4: push ebp */
    ebp = esp; /* 0x100A6BA5: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x100A6BA7: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x100A6BAA: mov eax, ecx */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x100A6BAC: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x100A6BAC: shl eax, 8 */
    if (8u) _cf = (((LO16(ecx)) >> 7) & 1u); /* 0x100A6BAF: shr cx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) >> 8u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) >> 8u); /* 0x100A6BAF: shr cx, 8 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(ecx)); /* 0x100A6BB3: add ax, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    ebp = POP32_VAL(esp); /* 0x100A6BB6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6BB7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6BB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6BB8u);

L_100A6BB8:
    _flag_a = (uint32_t)(MEM32(0x100E452C)); _flag_b = (uint32_t)(0);
    MEM32(0x100E452C) = MEM32(0x100E452C) & 0; /* 0x100A6BB8: and dword ptr [0x100e452c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6BBF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6BC0u);

L_100A6BC0:
    PUSH32(esp, ebp); /* 0x100A6BC0: push ebp */
    ebp = esp; /* 0x100A6BC1: mov ebp, esp */
    PUSH32(esp, edi); /* 0x100A6BC3: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A6BC4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x100A6BC6: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A6BDF; /* 0x100A6BC9: jne 0x100a6bdf */
L_100A6BCB:
    RECOMP_CALL(sub_1001177D); /* 0x100A6BCB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A6BD0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A6BD6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6BDB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6C1B; /* 0x100A6BDD: jmp 0x100a6c1b */
L_100A6BDF:
    PUSH32(esp, ebx); /* 0x100A6BDF: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x100A6BE0: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x100A6BE3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6BFB; /* 0x100A6BE5: jne 0x100a6bfb */
L_100A6BE7:
    RECOMP_CALL(sub_1001177D); /* 0x100A6BE7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A6BEC: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A6BF2: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6BF7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6C1A; /* 0x100A6BF9: jmp 0x100a6c1a */
L_100A6BFB:
    PUSH32(esp, esi); /* 0x100A6BFB: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100A6BFC: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x100A6BFF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6C1E; /* 0x100A6C01: jne 0x100a6c1e */
L_100A6C03:
    /* cmp MEM32(ebx), edi */ /* 0x100A6C03: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A6C1E; /* 0x100A6C05: je 0x100a6c1e */
L_100A6C07:
    RECOMP_CALL(sub_1001177D); /* 0x100A6C07: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A6C0C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A6C12: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A6C17:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6C17: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A6C19:
    esi = POP32_VAL(esp); /* 0x100A6C19: pop esi */
L_100A6C1A:
    ebx = POP32_VAL(esp); /* 0x100A6C1A: pop ebx */
L_100A6C1B:
    edi = POP32_VAL(esp); /* 0x100A6C1B: pop edi */
    ebp = POP32_VAL(esp); /* 0x100A6C1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6C1D: ret  */
L_100A6C1E:
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x100A6C1E: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A6C07; /* 0x100A6C21: jbe 0x100a6c07 */
L_100A6C23:
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x100A6C23: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A6C07; /* 0x100A6C26: je 0x100a6c07 */
L_100A6C28:
    /* cmp MEM32(ebx), edi */ /* 0x100A6C28: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A6C17; /* 0x100A6C2A: jbe 0x100a6c17 */
L_100A6C2C:
    PUSH32(esp, esi); /* 0x100A6C2C: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A6C2D: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x100A6C30: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6C33: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A6C34: pop ecx */
    /* test eax, eax */ /* 0x100A6C35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6C43; /* 0x100A6C37: je 0x100a6c43 */
L_100A6C39:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x14); /* 0x100A6C39: add esi, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A6C3C: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebx) */ /* 0x100A6C3D: cmp edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A6C17; /* 0x100A6C3F: jae 0x100a6c17 */
L_100A6C41:
    RECOMP_BACKEDGE();
    goto L_100A6C2C; /* 0x100A6C41: jmp 0x100a6c2c */
L_100A6C43:
    eax = esi; /* 0x100A6C43: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_100A6C19; /* 0x100A6C45: jmp 0x100a6c19 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A6C47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6C47u);

L_100A6C47:
    PUSH32(esp, ebp); /* 0x100A6C47: push ebp */
    ebp = esp; /* 0x100A6C48: mov ebp, esp */
    PUSH32(esp, edi); /* 0x100A6C4A: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A6C4B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x100A6C4D: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A6C66; /* 0x100A6C50: jne 0x100a6c66 */
L_100A6C52:
    RECOMP_CALL(sub_1001177D); /* 0x100A6C52: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A6C57: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A6C5D: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6C62: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6CA2; /* 0x100A6C64: jmp 0x100a6ca2 */
L_100A6C66:
    PUSH32(esp, ebx); /* 0x100A6C66: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x100A6C67: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x100A6C6A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6C82; /* 0x100A6C6C: jne 0x100a6c82 */
L_100A6C6E:
    RECOMP_CALL(sub_1001177D); /* 0x100A6C6E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A6C73: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A6C79: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6C7E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6CA1; /* 0x100A6C80: jmp 0x100a6ca1 */
L_100A6C82:
    PUSH32(esp, esi); /* 0x100A6C82: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100A6C83: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x100A6C86: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6CA5; /* 0x100A6C88: jne 0x100a6ca5 */
L_100A6C8A:
    /* cmp MEM32(ebx), edi */ /* 0x100A6C8A: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A6CA5; /* 0x100A6C8C: je 0x100a6ca5 */
L_100A6C8E:
    RECOMP_CALL(sub_1001177D); /* 0x100A6C8E: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A6C93: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A6C99: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A6C9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6C9E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A6CA0:
    esi = POP32_VAL(esp); /* 0x100A6CA0: pop esi */
L_100A6CA1:
    ebx = POP32_VAL(esp); /* 0x100A6CA1: pop ebx */
L_100A6CA2:
    edi = POP32_VAL(esp); /* 0x100A6CA2: pop edi */
    ebp = POP32_VAL(esp); /* 0x100A6CA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6CA4: ret  */
L_100A6CA5:
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x100A6CA5: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A6C8E; /* 0x100A6CA8: jbe 0x100a6c8e */
L_100A6CAA:
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x100A6CAA: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A6C8E; /* 0x100A6CAD: je 0x100a6c8e */
L_100A6CAF:
    /* cmp MEM32(ebx), edi */ /* 0x100A6CAF: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A6C9E; /* 0x100A6CB1: jbe 0x100a6c9e */
L_100A6CB3:
    PUSH32(esp, esi); /* 0x100A6CB3: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A6CB4: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100A6CB7: push dword ptr [ebp + 0x1c] */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x100A6CBA: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6CBD: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6CC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6CCE; /* 0x100A6CC2: je 0x100a6cce */
L_100A6CC4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x14); /* 0x100A6CC4: add esi, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A6CC7: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebx) */ /* 0x100A6CC8: cmp edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A6C9E; /* 0x100A6CCA: jae 0x100a6c9e */
L_100A6CCC:
    RECOMP_BACKEDGE();
    goto L_100A6CB3; /* 0x100A6CCC: jmp 0x100a6cb3 */
L_100A6CCE:
    eax = esi; /* 0x100A6CCE: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_100A6CA0; /* 0x100A6CD0: jmp 0x100a6ca0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A6CD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6CD2u);

L_100A6CD2:
    PUSH32(esp, ebp); /* 0x100A6CD2: push ebp */
    ebp = esp; /* 0x100A6CD3: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x100A6CD5: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x100A6CD8: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A6CDB: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x100A6CDE: rol eax, cl */
    ebp = POP32_VAL(esp); /* 0x100A6CE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6CE1: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6CE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6CE2u);

L_100A6CE2:
    PUSH32(esp, ebp); /* 0x100A6CE2: push ebp */
    ebp = esp; /* 0x100A6CE3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100A6CE5: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x100A6CE8: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x100A6CEB: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x100A6CEC: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100A6CEF: push esi */
    PUSH32(esp, edi); /* 0x100A6CF0: push edi */
    PUSH32(esp, 0x40u); /* 0x100A6CF1: push 0x40 */
    ecx = POP32_VAL(esp); /* 0x100A6CF3: pop ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Fu);
    ebx = ebx & 0x3Fu; /* 0x100A6CF4: and ebx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x100A6CF7: sub ecx, ebx */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_10034F95); /* 0x100A6CF9: call 0x10034f95 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A6CFE: mov esi, eax */
    edi = edx; /* 0x100A6D00: mov edi, edx */
    eax = MEM32(ebp + 0x8); /* 0x100A6D02: mov eax, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x100A6D05: mov ecx, ebx */
    edx = MEM32(ebp + 0xC); /* 0x100A6D07: mov edx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10034E6F); /* 0x100A6D0A: call 0x10034e6f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x100A6D0F: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | edi)); _flag_b = (uint32_t)((edx | edi));
    edx = edx | edi; /* 0x100A6D11: or edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x100A6D13: pop edi */
    esi = POP32_VAL(esp); /* 0x100A6D14: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A6D15: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6D16: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6D17: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6D18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6D18u);

L_100A6D18:
    PUSH32(esp, ebp); /* 0x100A6D18: push ebp */
    ebp = esp; /* 0x100A6D19: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x100A6D1B: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x100A6D1E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100A6D21: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x100A6D24: ror eax, cl */
    ebp = POP32_VAL(esp); /* 0x100A6D26: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6D27: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6D28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6D28u);

L_100A6D28:
    PUSH32(esp, ebp); /* 0x100A6D28: push ebp */
    ebp = esp; /* 0x100A6D29: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100A6D2B: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x100A6D2E: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x100A6D31: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x100A6D32: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100A6D35: push esi */
    PUSH32(esp, edi); /* 0x100A6D36: push edi */
    PUSH32(esp, 0x40u); /* 0x100A6D37: push 0x40 */
    ecx = POP32_VAL(esp); /* 0x100A6D39: pop ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Fu);
    ebx = ebx & 0x3Fu; /* 0x100A6D3A: and ebx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x100A6D3D: sub ecx, ebx */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_10034E6F); /* 0x100A6D3F: call 0x10034e6f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A6D44: mov esi, eax */
    edi = edx; /* 0x100A6D46: mov edi, edx */
    eax = MEM32(ebp + 0x8); /* 0x100A6D48: mov eax, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x100A6D4B: mov ecx, ebx */
    edx = MEM32(ebp + 0xC); /* 0x100A6D4D: mov edx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10034F95); /* 0x100A6D50: call 0x10034f95 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x100A6D55: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | edi)); _flag_b = (uint32_t)((edx | edi));
    edx = edx | edi; /* 0x100A6D57: or edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x100A6D59: pop edi */
    esi = POP32_VAL(esp); /* 0x100A6D5A: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A6D5B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6D5C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6D5D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6D5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6D5Eu);

L_100A6D5E:
    PUSH32(esp, ebp); /* 0x100A6D5E: push ebp */
    ebp = esp; /* 0x100A6D5F: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100A6D61: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A6D62: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x100A6D64: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A6D7D; /* 0x100A6D67: jne 0x100a6d7d */
L_100A6D69:
    RECOMP_CALL(sub_1001177D); /* 0x100A6D69: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A6D6E: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A6D74: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6D79: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6DED; /* 0x100A6D7B: jmp 0x100a6ded */
L_100A6D7D:
    PUSH32(esp, edi); /* 0x100A6D7D: push edi */
    edi = MEM32(ebp + 0x10); /* 0x100A6D7E: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x100A6D81: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6D99; /* 0x100A6D83: jne 0x100a6d99 */
L_100A6D85:
    RECOMP_CALL(sub_1001177D); /* 0x100A6D85: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A6D8A: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A6D90: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6D95: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6DEC; /* 0x100A6D97: jmp 0x100a6dec */
L_100A6D99:
    PUSH32(esp, esi); /* 0x100A6D99: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100A6D9A: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x100A6D9D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6DAB; /* 0x100A6D9F: je 0x100a6dab */
L_100A6DA1:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x100A6DA1: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A6DAB; /* 0x100A6DA4: jbe 0x100a6dab */
L_100A6DA6:
    /* cmp MEM32(ebp + 0x18), ebx */ /* 0x100A6DA6: cmp dword ptr [ebp + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A6DBF; /* 0x100A6DA9: jne 0x100a6dbf */
L_100A6DAB:
    RECOMP_CALL(sub_1001177D); /* 0x100A6DAB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A6DB0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A6DB6: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6DBB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6DEB; /* 0x100A6DBD: jmp 0x100a6deb */
L_100A6DBF:
    /* cmp MEM32(edi), ebx */ /* 0x100A6DBF: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A6DD8; /* 0x100A6DC1: jbe 0x100a6dd8 */
L_100A6DC3:
    PUSH32(esp, esi); /* 0x100A6DC3: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A6DC4: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x100A6DC7: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6DCA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A6DCB: pop ecx */
    /* test eax, eax */ /* 0x100A6DCC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6DE9; /* 0x100A6DCE: je 0x100a6de9 */
L_100A6DD0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x14); /* 0x100A6DD0: add esi, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A6DD3: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi) */ /* 0x100A6DD4: cmp ebx, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100A6DC3; /* 0x100A6DD6: jb 0x100a6dc3 */
L_100A6DD8:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A6DD8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A6DDB: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100A6DDE: push esi */
    RECOMP_CALL(sub_1000F594); /* 0x100A6DDF: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6DE4: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x100A6DE7: inc dword ptr [edi] */
    _flag_k = FK_INC;
L_100A6DE9:
    eax = esi; /* 0x100A6DE9: mov eax, esi */
L_100A6DEB:
    esi = POP32_VAL(esp); /* 0x100A6DEB: pop esi */
L_100A6DEC:
    edi = POP32_VAL(esp); /* 0x100A6DEC: pop edi */
L_100A6DED:
    ebx = POP32_VAL(esp); /* 0x100A6DED: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6DEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6DEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6DF0u);

L_100A6DF0:
    PUSH32(esp, ebp); /* 0x100A6DF0: push ebp */
    ebp = esp; /* 0x100A6DF1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100A6DF3: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A6DF4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x100A6DF6: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A6E0F; /* 0x100A6DF9: jne 0x100a6e0f */
L_100A6DFB:
    RECOMP_CALL(sub_1001177D); /* 0x100A6DFB: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A6E00: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A6E06: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6E0B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6E83; /* 0x100A6E0D: jmp 0x100a6e83 */
L_100A6E0F:
    PUSH32(esp, edi); /* 0x100A6E0F: push edi */
    edi = MEM32(ebp + 0x10); /* 0x100A6E10: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x100A6E13: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6E2B; /* 0x100A6E15: jne 0x100a6e2b */
L_100A6E17:
    RECOMP_CALL(sub_1001177D); /* 0x100A6E17: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A6E1C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A6E22: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6E27: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6E82; /* 0x100A6E29: jmp 0x100a6e82 */
L_100A6E2B:
    PUSH32(esp, esi); /* 0x100A6E2B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100A6E2C: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x100A6E2F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6E3D; /* 0x100A6E31: je 0x100a6e3d */
L_100A6E33:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x100A6E33: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A6E3D; /* 0x100A6E36: jbe 0x100a6e3d */
L_100A6E38:
    /* cmp MEM32(ebp + 0x18), ebx */ /* 0x100A6E38: cmp dword ptr [ebp + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A6E51; /* 0x100A6E3B: jne 0x100a6e51 */
L_100A6E3D:
    RECOMP_CALL(sub_1001177D); /* 0x100A6E3D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A6E42: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A6E48: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6E4D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6E81; /* 0x100A6E4F: jmp 0x100a6e81 */
L_100A6E51:
    /* cmp MEM32(edi), ebx */ /* 0x100A6E51: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A6E6E; /* 0x100A6E53: jbe 0x100a6e6e */
L_100A6E55:
    PUSH32(esp, esi); /* 0x100A6E55: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A6E56: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100A6E59: push dword ptr [ebp + 0x1c] */
    RECOMP_ICALL(MEM32(ebp + 0x18)); /* 0x100A6E5C: call dword ptr [ebp + 0x18] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6E5F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A6E62: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6E7F; /* 0x100A6E64: je 0x100a6e7f */
L_100A6E66:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x14); /* 0x100A6E66: add esi, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A6E69: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi) */ /* 0x100A6E6A: cmp ebx, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100A6E55; /* 0x100A6E6C: jb 0x100a6e55 */
L_100A6E6E:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A6E6E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A6E71: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100A6E74: push esi */
    RECOMP_CALL(sub_1000F594); /* 0x100A6E75: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A6E7A: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x100A6E7D: inc dword ptr [edi] */
    _flag_k = FK_INC;
L_100A6E7F:
    eax = esi; /* 0x100A6E7F: mov eax, esi */
L_100A6E81:
    esi = POP32_VAL(esp); /* 0x100A6E81: pop esi */
L_100A6E82:
    edi = POP32_VAL(esp); /* 0x100A6E82: pop edi */
L_100A6E83:
    ebx = POP32_VAL(esp); /* 0x100A6E83: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6E84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6E85: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6E86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6E86u);

L_100A6E86:
    PUSH32(esp, ebp); /* 0x100A6E86: push ebp */
    ebp = esp; /* 0x100A6E87: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100A6E89: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A6E8C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A6E8F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A6E92: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A6E95: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A6E97: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A6EA4); /* 0x100A6E9A: call 0x100a6ea4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100A6E9F: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A6EA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6EA3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6EA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6EA4u);

L_100A6EA4:
    PUSH32(esp, ebp); /* 0x100A6EA4: push ebp */
    ebp = esp; /* 0x100A6EA5: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100A6EA7: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x100A6EAA: push ebx */
    PUSH32(esp, esi); /* 0x100A6EAB: push esi */
    PUSH32(esp, edi); /* 0x100A6EAC: push edi */
    /* test eax, eax */ /* 0x100A6EAD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6F81; /* 0x100A6EAF: je 0x100a6f81 */
L_100A6EB5:
    ebx = MEM32(ebp + 0xC); /* 0x100A6EB5: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x100A6EB8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6F81; /* 0x100A6EBA: je 0x100a6f81 */
L_100A6EC0:
    ecx = MEM32(ebp + 0x10); /* 0x100A6EC0: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A6EC3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x100A6EC5: mov esi, eax */
    /* test ecx, ecx */ /* 0x100A6EC7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6EE5; /* 0x100A6EC9: je 0x100a6ee5 */
L_100A6ECB:
    SET_LO8(ecx, MEM8(ecx)); /* 0x100A6ECB: mov cl, byte ptr [ecx] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x100A6ECD: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6EE5; /* 0x100A6ECF: je 0x100a6ee5 */
L_100A6ED1:
    PUSH32(esp, 2); /* 0x100A6ED1: push 2 */
    edi = POP32_VAL(esp); /* 0x100A6ED3: pop edi */
    /* cmp ebx, edi */ /* 0x100A6ED4: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A6F6B; /* 0x100A6ED6: jbe 0x100a6f6b */
L_100A6EDC:
    esi = eax + 0x1; /* 0x100A6EDC: lea esi, [eax + 1] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x100A6EDF: mov byte ptr [eax], cl */
    MEM8(esi) = (uint8_t)(0x3Au); /* 0x100A6EE1: mov byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A6EE4: inc esi */
    _flag_k = FK_INC;
L_100A6EE5:
    edx = MEM32(ebp + 0x14); /* 0x100A6EE5: mov edx, dword ptr [ebp + 0x14] */
    ecx = edx; /* 0x100A6EE8: mov ecx, edx */
    /* test edx, edx */ /* 0x100A6EEA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6F1F; /* 0x100A6EEC: je 0x100a6f1f */
L_100A6EEE:
    /* cmp MEM8(edx), 0 */ /* 0x100A6EEE: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A6F1F; /* 0x100A6EF1: je 0x100a6f1f */
L_100A6EF3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A6EF3: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x100A6EF4: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A6F6B; /* 0x100A6EF6: jae 0x100a6f6b */
L_100A6EF8:
    SET_LO8(eax, MEM8(ecx)); /* 0x100A6EF8: mov al, byte ptr [ecx] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x100A6EFA: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A6EFC: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A6EFD: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0 */ /* 0x100A6EFE: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A6EF3; /* 0x100A6F01: jne 0x100a6ef3 */
L_100A6F03:
    PUSH32(esp, ecx); /* 0x100A6F03: push ecx */
    PUSH32(esp, edx); /* 0x100A6F04: push edx */
    RECOMP_CALL(sub_1008CE86); /* 0x100A6F05: call 0x1008ce86 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6F0A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A6F0B: pop ecx */
    SET_LO8(eax, MEM8(eax)); /* 0x100A6F0C: mov al, byte ptr [eax] */
    /* cmp LO8(eax), 0x2Fu */ /* 0x100A6F0E: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A6F1F; /* 0x100A6F10: je 0x100a6f1f */
L_100A6F12:
    /* cmp LO8(eax), 0x5Cu */ /* 0x100A6F12: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A6F1F; /* 0x100A6F14: je 0x100a6f1f */
L_100A6F16:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A6F16: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x100A6F17: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A6F6B; /* 0x100A6F19: jae 0x100a6f6b */
L_100A6F1B:
    MEM8(esi) = (uint8_t)(0x5Cu); /* 0x100A6F1B: mov byte ptr [esi], 0x5c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A6F1E: inc esi */
    _flag_k = FK_INC;
L_100A6F1F:
    ecx = MEM32(ebp + 0x18); /* 0x100A6F1F: mov ecx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x100A6F22: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A6F33; /* 0x100A6F24: jne 0x100a6f33 */
L_100A6F26:
    goto L_100A6F38; /* 0x100A6F26: jmp 0x100a6f38 */
L_100A6F28:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A6F28: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x100A6F29: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A6F6B; /* 0x100A6F2B: jae 0x100a6f6b */
L_100A6F2D:
    SET_LO8(eax, MEM8(ecx)); /* 0x100A6F2D: mov al, byte ptr [ecx] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x100A6F2F: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A6F31: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A6F32: inc ecx */
    _flag_k = FK_INC;
L_100A6F33:
    /* cmp MEM8(ecx), 0 */ /* 0x100A6F33: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A6F28; /* 0x100A6F36: jne 0x100a6f28 */
L_100A6F38:
    ecx = MEM32(ebp + 0x1C); /* 0x100A6F38: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x100A6F3B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6F64; /* 0x100A6F3D: je 0x100a6f64 */
L_100A6F3F:
    SET_LO8(eax, MEM8(ecx)); /* 0x100A6F3F: mov al, byte ptr [ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x100A6F41: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A6F64; /* 0x100A6F43: je 0x100a6f64 */
L_100A6F45:
    /* cmp LO8(eax), 0x2Eu */ /* 0x100A6F45: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A6F5F; /* 0x100A6F47: je 0x100a6f5f */
L_100A6F49:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A6F49: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x100A6F4A: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A6F6B; /* 0x100A6F4C: jae 0x100a6f6b */
L_100A6F4E:
    MEM8(esi) = (uint8_t)(0x2Eu); /* 0x100A6F4E: mov byte ptr [esi], 0x2e */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A6F51: inc esi */
    _flag_k = FK_INC;
    goto L_100A6F5F; /* 0x100A6F52: jmp 0x100a6f5f */
L_100A6F54:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A6F54: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x100A6F55: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A6F6B; /* 0x100A6F57: jae 0x100a6f6b */
L_100A6F59:
    SET_LO8(eax, MEM8(ecx)); /* 0x100A6F59: mov al, byte ptr [ecx] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x100A6F5B: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A6F5D: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A6F5E: inc ecx */
    _flag_k = FK_INC;
L_100A6F5F:
    /* cmp MEM8(ecx), 0 */ /* 0x100A6F5F: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A6F54; /* 0x100A6F62: jne 0x100a6f54 */
L_100A6F64:
    eax = edi + 0x1; /* 0x100A6F64: lea eax, [edi + 1] */
    /* cmp eax, ebx */ /* 0x100A6F67: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A6F7A; /* 0x100A6F69: jbe 0x100a6f7a */
L_100A6F6B:
    eax = MEM32(ebp + 0x8); /* 0x100A6F6B: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(0); /* 0x100A6F6E: mov byte ptr [eax], 0 */
    RECOMP_CALL(sub_1001177D); /* 0x100A6F71: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x100A6F76: push 0x22 */
    goto L_100A6F88; /* 0x100A6F78: jmp 0x100a6f88 */
L_100A6F7A:
    MEM8(esi) = (uint8_t)(0); /* 0x100A6F7A: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A6F7D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A6F92; /* 0x100A6F7F: jmp 0x100a6f92 */
L_100A6F81:
    RECOMP_CALL(sub_1001177D); /* 0x100A6F81: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A6F86: push 0x16 */
L_100A6F88:
    esi = POP32_VAL(esp); /* 0x100A6F88: pop esi */
    MEM32(eax) = esi; /* 0x100A6F89: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A6F8B: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A6F90: mov eax, esi */
L_100A6F92:
    edi = POP32_VAL(esp); /* 0x100A6F92: pop edi */
    esi = POP32_VAL(esp); /* 0x100A6F93: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A6F94: pop ebx */
    ebp = POP32_VAL(esp); /* 0x100A6F95: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6F96: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6F97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6F97u);

L_100A6F97:
    PUSH32(esp, 0xCu); /* 0x100A6F97: push 0xc */
    PUSH32(esp, 0x100A6FE8u); /* 0x100A6F99: push 0x100a6fe8 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A6F9E: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A6FA3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A6FA5: mov dword ptr [ebp - 0x1c], esi */
    PUSH32(esp, 7); /* 0x100A6FA8: push 7 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A6FAA: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6FAF: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A6FB0: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, esi); /* 0x100A6FB3: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A6FB4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A7004); /* 0x100A6FB7: call 0x100a7004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6FBC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A6FBD: pop ecx */
    esi = eax; /* 0x100A6FBE: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A6FC0: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A6FC3: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A6FDA); /* 0x100A6FCA: call 0x100a6fda */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A6FCF: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A6FD1: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6FD6: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A6FDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A6FDAu);

L_100A6FDA:
    PUSH32(esp, 7); /* 0x100A6FDA: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A6FDC: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A6FE1: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A6FE2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A7004(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A7004u);

L_100A7004:
    PUSH32(esp, ebp); /* 0x100A7004: push ebp */
    ebp = esp; /* 0x100A7005: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A7007: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A7008: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100A700C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A700D: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100A7010: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A702C; /* 0x100A7012: jne 0x100a702c */
L_100A7014:
    RECOMP_CALL(sub_1001177D); /* 0x100A7014: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A7019: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A701F: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A7024: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A71FE; /* 0x100A7027: jmp 0x100a71fe */
L_100A702C:
    PUSH32(esp, ebx); /* 0x100A702C: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x100A702D: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x100A7030: push edi */
    /* test ebx, ebx */ /* 0x100A7031: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A708A; /* 0x100A7033: jne 0x100a708a */
L_100A7035:
    PUSH32(esp, 0x3Du); /* 0x100A7035: push 0x3d */
    PUSH32(esp, esi); /* 0x100A7037: push esi */
    RECOMP_CALL(sub_100312F9); /* 0x100A7038: call 0x100312f9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A703D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A703E: pop ecx */
    /* test eax, eax */ /* 0x100A703F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A705E; /* 0x100A7041: je 0x100a705e */
L_100A7043:
    ecx = eax; /* 0x100A7043: mov ecx, eax */
    edi = 0x7FFFu; /* 0x100A7045: mov edi, 0x7fff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x100A704A: sub ecx, esi */
    _flag_k = FK_CMP;
    /* cmp ecx, edi */ /* 0x100A704C: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100A70AC; /* 0x100A704E: jge 0x100a70ac */
L_100A7050:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A7050: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x100A7051: push edi */
    PUSH32(esp, eax); /* 0x100A7052: push eax */
    RECOMP_CALL(sub_10017154); /* 0x100A7053: call 0x10017154 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A7058: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A7059: pop ecx */
    /* cmp eax, edi */ /* 0x100A705A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A70AC; /* 0x100A705C: jae 0x100a70ac */
L_100A705E:
    PUSH32(esp, esi); /* 0x100A705E: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x100A705F: call 0x100129af */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x100A7064: push 1 */
    edi = eax + 0x1; /* 0x100A7066: lea edi, [eax + 1] */
    PUSH32(esp, edi); /* 0x100A7069: push edi */
    RECOMP_CALL(sub_10011208); /* 0x100A706A: call 0x10011208 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A706F: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x100A7072: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x100A7075: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A71F5; /* 0x100A7077: je 0x100a71f5 */
L_100A707D:
    PUSH32(esp, esi); /* 0x100A707D: push esi */
    PUSH32(esp, edi); /* 0x100A707E: push edi */
    PUSH32(esp, eax); /* 0x100A707F: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x100A7080: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7085: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_100A7108; /* 0x100A7088: jmp 0x100a7108 */
L_100A708A:
    edi = 0x7FFFu; /* 0x100A708A: mov edi, 0x7fff */
    PUSH32(esp, edi); /* 0x100A708F: push edi */
    PUSH32(esp, esi); /* 0x100A7090: push esi */
    RECOMP_CALL(sub_10017154); /* 0x100A7091: call 0x10017154 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100A7096: push edi */
    PUSH32(esp, ebx); /* 0x100A7097: push ebx */
    MEM32(ebp + 0x8) = eax; /* 0x100A7098: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_10017154); /* 0x100A709B: call 0x10017154 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A70A0: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x100A70A3: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A70AC; /* 0x100A70A6: jae 0x100a70ac */
L_100A70A8:
    /* cmp eax, edi */ /* 0x100A70A8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A70C1; /* 0x100A70AA: jb 0x100a70c1 */
L_100A70AC:
    RECOMP_CALL(sub_1001177D); /* 0x100A70AC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x100A70B1: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_100A4670); /* 0x100A70B7: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    goto L_100A71F5; /* 0x100A70BC: jmp 0x100a71f5 */
L_100A70C1:
    edi = MEM32(ebp + 0x8); /* 0x100A70C1: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x100A70C4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x100A70C7: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, 1); /* 0x100A70C9: push 1 */
    PUSH32(esp, eax); /* 0x100A70CB: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x100A70CC: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_10011208); /* 0x100A70CF: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x100A70D4: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x100A70D7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A70D8: pop ecx */
    /* test eax, eax */ /* 0x100A70D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A71F5; /* 0x100A70DB: je 0x100a71f5 */
L_100A70E1:
    PUSH32(esp, esi); /* 0x100A70E1: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A70E2: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x100A70E5: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x100A70E6: call 0x100147cd */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x100A70EB: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x100A70EE: push ebx */
    MEM8(edi + eax) = (uint8_t)(0x3Du); /* 0x100A70EF: mov byte ptr [edi + eax], 0x3d */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A70F3: inc edi */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x100A70F4: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x100A70F7: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100A70F9: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x100A70FA: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x100A70FD: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100A70FF: push eax */
    RECOMP_CALL(sub_100147CD); /* 0x100A7100: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100A7105: add esp, 0x18 */
    _flag_k = FK_ADD;
L_100A7108:
    eax = ebp + (-0x4); /* 0x100A7108: lea eax, [ebp - 4] */
    PUSH32(esp, 1); /* 0x100A710B: push 1 */
    PUSH32(esp, eax); /* 0x100A710D: push eax */
    RECOMP_CALL(sub_10030F2D); /* 0x100A710E: call 0x10030f2d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A7113: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A7114: pop ecx */
    /* test eax, eax */ /* 0x100A7115: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A712B; /* 0x100A7117: je 0x100a712b */
L_100A7119:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x100A7119: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A71F5; /* 0x100A711D: je 0x100a71f5 */
L_100A7123:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x100A7123: push dword ptr [ebp - 4] */
    goto L_100A71EF; /* 0x100A7126: jmp 0x100a71ef */
L_100A712B:
    /* cmp MEM32(0x100DF61C), 0 */ /* 0x100A712B: cmp dword ptr [0x100df61c], 0 */
    _flag_a = (uint32_t)(MEM32(0x100DF61C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A71FA; /* 0x100A7132: je 0x100a71fa */
L_100A7138:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A7138: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A713A: push eax */
    PUSH32(esp, eax); /* 0x100A713B: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A713C: push -1 */
    PUSH32(esp, esi); /* 0x100A713E: push esi */
    PUSH32(esp, eax); /* 0x100A713F: push eax */
    PUSH32(esp, eax); /* 0x100A7140: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x100A7141: mov dword ptr [ebp + 8], eax */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x100A7144: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A714A: mov edi, eax */
    /* test edi, edi */ /* 0x100A714C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A71C8; /* 0x100A714E: je 0x100a71c8 */
L_100A7150:
    /* test ebx, ebx */ /* 0x100A7150: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A716A; /* 0x100A7152: je 0x100a716a */
L_100A7154:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A7154: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A7156: push eax */
    PUSH32(esp, eax); /* 0x100A7157: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A7158: push -1 */
    PUSH32(esp, ebx); /* 0x100A715A: push ebx */
    PUSH32(esp, eax); /* 0x100A715B: push eax */
    PUSH32(esp, eax); /* 0x100A715C: push eax */
    RECOMP_ICALL(MEM32(0x100E5024)); /* 0x100A715D: call dword ptr [0x100e5024] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A7163: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A71C8; /* 0x100A7165: je 0x100a71c8 */
L_100A7167:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100A7167: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x100A7168: add edi, eax */
    _flag_k = FK_ADD;
L_100A716A:
    PUSH32(esp, 2); /* 0x100A716A: push 2 */
    PUSH32(esp, edi); /* 0x100A716C: push edi */
    RECOMP_CALL(sub_10011208); /* 0x100A716D: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x100A7172: mov dword ptr [ebp + 8], eax */
    ecx = POP32_VAL(esp); /* 0x100A7175: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A7176: pop ecx */
    /* test eax, eax */ /* 0x100A7177: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A71F5; /* 0x100A7179: je 0x100a71f5 */
L_100A717B:
    PUSH32(esp, edi); /* 0x100A717B: push edi */
    PUSH32(esp, eax); /* 0x100A717C: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A717D: push -1 */
    PUSH32(esp, esi); /* 0x100A717F: push esi */
    esi = MEM32(0x100E5024); /* 0x100A7180: mov esi, dword ptr [0x100e5024] */
    PUSH32(esp, 0); /* 0x100A7186: push 0 */
    PUSH32(esp, 0); /* 0x100A7188: push 0 */
    RECOMP_ICALL(esi); /* 0x100A718A: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A718C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A71BF; /* 0x100A718E: je 0x100a71bf */
L_100A7190:
    /* test ebx, ebx */ /* 0x100A7190: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A71D5; /* 0x100A7192: je 0x100a71d5 */
L_100A7194:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A7194: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A7197: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A719C: pop ecx */
    ecx = MEM32(ebp + 0x8); /* 0x100A719D: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x3Du); /* 0x100A71A0: push 0x3d */
    edx = POP32_VAL(esp); /* 0x100A71A2: pop edx */
    MEM16(ecx + eax * 2) = (uint16_t)(LO16(edx)); /* 0x100A71A3: mov word ptr [ecx + eax*2], dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A71A7: inc eax */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + 0x8); /* 0x100A71A8: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x100A71AB: sub edi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x100A71AD: push edi */
    eax = ecx + eax * 2; /* 0x100A71AE: lea eax, [ecx + eax*2] */
    PUSH32(esp, eax); /* 0x100A71B1: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A71B2: push -1 */
    PUSH32(esp, ebx); /* 0x100A71B4: push ebx */
    PUSH32(esp, 0); /* 0x100A71B5: push 0 */
    PUSH32(esp, 0); /* 0x100A71B7: push 0 */
    RECOMP_ICALL(esi); /* 0x100A71B9: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A71BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A71D5; /* 0x100A71BD: jne 0x100a71d5 */
L_100A71BF:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A71BF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A71C2: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A71C7: pop ecx */
L_100A71C8:
    RECOMP_CALL(sub_1001177D); /* 0x100A71C8: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x100A71CD: mov dword ptr [eax], 0x2a */
    goto L_100A71F5; /* 0x100A71D3: jmp 0x100a71f5 */
L_100A71D5:
    eax = ebp + 0x8; /* 0x100A71D5: lea eax, [ebp + 8] */
    PUSH32(esp, 0); /* 0x100A71D8: push 0 */
    PUSH32(esp, eax); /* 0x100A71DA: push eax */
    RECOMP_CALL(sub_1003120C); /* 0x100A71DB: call 0x1003120c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A71E0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A71E1: pop ecx */
    /* test eax, eax */ /* 0x100A71E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A71FA; /* 0x100A71E4: je 0x100a71fa */
L_100A71E6:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x100A71E6: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A71F5; /* 0x100A71EA: je 0x100a71f5 */
L_100A71EC:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A71EC: push dword ptr [ebp + 8] */
L_100A71EF:
    RECOMP_CALL(sub_1000ECE0); /* 0x100A71EF: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A71F4: pop ecx */
L_100A71F5:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x100A71F5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A71FC; /* 0x100A71F8: jmp 0x100a71fc */
L_100A71FA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A71FA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A71FC:
    edi = POP32_VAL(esp); /* 0x100A71FC: pop edi */
    ebx = POP32_VAL(esp); /* 0x100A71FD: pop ebx */
L_100A71FE:
    esi = POP32_VAL(esp); /* 0x100A71FE: pop esi */
    esp = ebp; /* 0x100A71FF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A7201: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A7202: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A7203(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A7203u);

L_100A7203:
    PUSH32(esp, 0xCu); /* 0x100A7203: push 0xc */
    PUSH32(esp, 0x100A7278u); /* 0x100A7205: push 0x100a7278 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100A720A: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A720F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A7211: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A7214: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x100A7216: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100A7219: setne al */
    /* test eax, eax */ /* 0x100A721C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7237; /* 0x100A721E: jne 0x100a7237 */
L_100A7220:
    RECOMP_CALL(sub_1001177D); /* 0x100A7220: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A7225: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A7227: pop esi */
    MEM32(eax) = esi; /* 0x100A7228: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A722A: call 0x100a4670 */
    RECOMP_FLAGS_IN();
L_100A722F:
    eax = esi; /* 0x100A722F: mov eax, esi */
    RECOMP_CALL(sub_1000EDC3); /* 0x100A7231: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A7236: ret  */
L_100A7237:
    PUSH32(esp, 7); /* 0x100A7237: push 7 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100A7239: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A723E: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x100A723F: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A7242: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A7245: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A7004); /* 0x100A7248: call 0x100a7004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A724D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A724E: pop ecx */
    /* test eax, eax */ /* 0x100A724F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A725A; /* 0x100A7251: je 0x100a725a */
L_100A7253:
    RECOMP_CALL(sub_1001177D); /* 0x100A7253: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x100A7258: mov esi, dword ptr [eax] */
L_100A725A:
    MEM32(ebp + (-0x1C)) = esi; /* 0x100A725A: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x100A725D: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100A726E); /* 0x100A7264: call 0x100a726e */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100A722F; /* 0x100A7269: jmp 0x100a722f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A726E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A726Eu);

L_100A726E:
    PUSH32(esp, 7); /* 0x100A726E: push 7 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100A7270: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A7275: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A7276: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A7294(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A7294u);

L_100A7294:
    PUSH32(esp, ebp); /* 0x100A7294: push ebp */
    ebp = esp; /* 0x100A7295: mov ebp, esp */
    PUSH32(esp, 0x104u); /* 0x100A7297: push 0x104 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A729C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A729F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A72A2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A72AF); /* 0x100A72A5: call 0x100a72af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A72AA: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A72AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A72AE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A72AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A72AFu);

L_100A72AF:
    PUSH32(esp, ebp); /* 0x100A72AF: push ebp */
    ebp = esp; /* 0x100A72B0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x12Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x12Cu; /* 0x100A72B2: sub esp, 0x12c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100A72B8: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100A72BD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100A72BF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x100A72C2: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x100A72C5: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x14); /* 0x100A72C8: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x100A72CB: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A72CC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x114)) = eax; /* 0x100A72CE: mov dword ptr [ebp - 0x114], eax */
    eax = MEM32(ebp + 0x10); /* 0x100A72D4: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x120)) = ecx; /* 0x100A72D7: mov dword ptr [ebp - 0x120], ecx */
    MEM32(ebp + (-0x118)) = eax; /* 0x100A72DD: mov dword ptr [ebp - 0x118], eax */
    MEM32(ebp + (-0x128)) = edx; /* 0x100A72E3: mov dword ptr [ebp - 0x128], edx */
    MEM32(ebp + (-0x124)) = ebx; /* 0x100A72E9: mov dword ptr [ebp - 0x124], ebx */
    PUSH32(esp, esi); /* 0x100A72EF: push esi */
    esi = ebx; /* 0x100A72F0: mov esi, ebx */
    MEM32(ebp + (-0x110)) = esi; /* 0x100A72F2: mov dword ptr [ebp - 0x110], esi */
    /* test eax, eax */ /* 0x100A72F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7312; /* 0x100A72FA: jne 0x100a7312 */
L_100A72FC:
    RECOMP_CALL(sub_1001177D); /* 0x100A72FC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A7301: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A7303: pop esi */
    MEM32(eax) = esi; /* 0x100A7304: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A7306: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A730B: mov eax, esi */
    goto L_100A7604; /* 0x100A730D: jmp 0x100a7604 */
L_100A7312:
    /* test edx, edx */ /* 0x100A7312: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A72FC; /* 0x100A7314: je 0x100a72fc */
L_100A7316:
    /* test ecx, ecx */ /* 0x100A7316: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A731E; /* 0x100A7318: jne 0x100a731e */
L_100A731A:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x100A731A: mov byte ptr [eax], bl */
    RECOMP_BACKEDGE();
    goto L_100A72FC; /* 0x100A731C: jmp 0x100a72fc */
L_100A731E:
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x100A731E: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A733B; /* 0x100A7320: jne 0x100a733b */
L_100A7322:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x100A7322: mov byte ptr [eax], bl */
    RECOMP_CALL(sub_1001177D); /* 0x100A7324: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 2; /* 0x100A7329: mov dword ptr [eax], 2 */
    RECOMP_CALL(sub_1001177D); /* 0x100A732F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x100A7334: mov ebx, dword ptr [eax] */
    goto L_100A75E5; /* 0x100A7336: jmp 0x100a75e5 */
L_100A733B:
    PUSH32(esp, edi); /* 0x100A733B: push edi */
    RECOMP_CALL(sub_1001177D); /* 0x100A733C: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x100A7341: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x120))); /* 0x100A7342: push dword ptr [ebp - 0x120] */
    edi = MEM32(eax); /* 0x100A7348: mov edi, dword ptr [eax] */
    RECOMP_CALL(sub_1007E270); /* 0x100A734A: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A734F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A7350: pop ecx */
    esi = eax; /* 0x100A7351: mov esi, eax */
    RECOMP_CALL(sub_1001177D); /* 0x100A7353: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x100A7358: mov dword ptr [eax], edi */
    /* test esi, esi */ /* 0x100A735A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A738C; /* 0x100A735C: jne 0x100a738c */
L_100A735E:
    edi = MEM32(ebp + (-0x128)); /* 0x100A735E: mov edi, dword ptr [ebp - 0x128] */
    PUSH32(esp, edi); /* 0x100A7364: push edi */
    PUSH32(esp, MEM32(ebp + (-0x120))); /* 0x100A7365: push dword ptr [ebp - 0x120] */
    edi = MEM32(ebp + (-0x118)); /* 0x100A736B: mov edi, dword ptr [ebp - 0x118] */
    PUSH32(esp, edi); /* 0x100A7371: push edi */
    RECOMP_CALL(sub_10031321); /* 0x100A7372: call 0x10031321 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7377: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A737A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7385; /* 0x100A737C: jne 0x100a7385 */
L_100A737E:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x100A737E: mov byte ptr [edi], bl */
    goto L_100A75D7; /* 0x100A7380: jmp 0x100a75d7 */
L_100A7385:
    esi = ebx; /* 0x100A7385: mov esi, ebx */
    goto L_100A75E4; /* 0x100A7387: jmp 0x100a75e4 */
L_100A738C:
    PUSH32(esp, MEM32(ebp + (-0x114))); /* 0x100A738C: push dword ptr [ebp - 0x114] */
    eax = ebp + (-0x124); /* 0x100A7392: lea eax, [ebp - 0x124] */
    PUSH32(esp, ebx); /* 0x100A7398: push ebx */
    PUSH32(esp, eax); /* 0x100A7399: push eax */
    RECOMP_CALL(sub_100A5072); /* 0x100A739A: call 0x100a5072 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A739F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A73A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A73B4; /* 0x100A73A4: je 0x100a73b4 */
L_100A73A6:
    /* cmp eax, 0x16u */ /* 0x100A73A6: cmp eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A7614; /* 0x100A73A9: je 0x100a7614 */
L_100A73AF:
    goto L_100A75C4; /* 0x100A73AF: jmp 0x100a75c4 */
L_100A73B4:
    edi = MEM32(ebp + (-0x124)); /* 0x100A73B4: mov edi, dword ptr [ebp - 0x124] */
    /* test edi, edi */ /* 0x100A73BA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A75C4; /* 0x100A73BC: je 0x100a75c4 */
L_100A73C2:
    PUSH32(esp, MEM32(ebp + (-0x120))); /* 0x100A73C2: push dword ptr [ebp - 0x120] */
    RECOMP_CALL(sub_100129AF); /* 0x100A73C8: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A73CD: pop ecx */
    ecx = eax; /* 0x100A73CE: mov ecx, eax */
    esi = ebp + (-0x10C); /* 0x100A73D0: lea esi, [ebp - 0x10c] */
    eax = 0x108u; /* 0x100A73D6: mov eax, 0x108 */
    MEM32(ebp + (-0x11C)) = ecx; /* 0x100A73DB: mov dword ptr [ebp - 0x11c], ecx */
    MEM32(ebp + (-0x110)) = eax; /* 0x100A73E1: mov dword ptr [ebp - 0x110], eax */
    /* cmp ecx, eax */ /* 0x100A73E7: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A7430; /* 0x100A73E9: jb 0x100a7430 */
L_100A73EB:
    PUSH32(esp, edi); /* 0x100A73EB: push edi */
    RECOMP_CALL(sub_100129AF); /* 0x100A73EC: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x11C)); /* 0x100A73F1: mov ecx, dword ptr [ebp - 0x11c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x100A73F7: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x100A73FA: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 1); /* 0x100A73FC: push 1 */
    PUSH32(esp, eax); /* 0x100A73FE: push eax */
    MEM32(ebp + (-0x110)) = eax; /* 0x100A73FF: mov dword ptr [ebp - 0x110], eax */
    RECOMP_CALL(sub_10011208); /* 0x100A7405: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A740A: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A740C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x100A740F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7430; /* 0x100A7411: jne 0x100a7430 */
L_100A7413:
    edi = MEM32(ebp + (-0x118)); /* 0x100A7413: mov edi, dword ptr [ebp - 0x118] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x100A7419: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_1001177D); /* 0x100A741B: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x100A7420: mov dword ptr [eax], 0xc */
L_100A7426:
    RECOMP_CALL(sub_1001177D); /* 0x100A7426: call 0x1001177d */
    RECOMP_FLAGS_IN();
    goto L_100A75E2; /* 0x100A742B: jmp 0x100a75e2 */
L_100A7430:
    RECOMP_CALL(sub_1001177D); /* 0x100A7430: call 0x1001177d */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x100A7435: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x12C)) = eax; /* 0x100A7437: mov dword ptr [ebp - 0x12c], eax */
    goto L_100A7530; /* 0x100A743D: jmp 0x100a7530 */
L_100A7442:
    eax = MEM32(ebp + (-0x110)); /* 0x100A7442: mov eax, dword ptr [ebp - 0x110] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x11C)); /* 0x100A7448: sub eax, dword ptr [ebp - 0x11c] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100A744E: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x114)) = edi; /* 0x100A744F: mov dword ptr [ebp - 0x114], edi */
    PUSH32(esp, eax); /* 0x100A7455: push eax */
    PUSH32(esp, esi); /* 0x100A7456: push esi */
    PUSH32(esp, edi); /* 0x100A7457: push edi */
    RECOMP_CALL(sub_100A525C); /* 0x100A7458: call 0x100a525c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A745D: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A745F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x100A7462: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A74CF; /* 0x100A7464: jne 0x100a74cf */
L_100A7466:
    eax = ebp + (-0x10C); /* 0x100A7466: lea eax, [ebp - 0x10c] */
    /* cmp esi, eax */ /* 0x100A746C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A7538; /* 0x100A746E: jne 0x100a7538 */
L_100A7474:
    RECOMP_CALL(sub_1001177D); /* 0x100A7474: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x22u */ /* 0x100A7479: cmp dword ptr [eax], 0x22 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A7538; /* 0x100A747C: jne 0x100a7538 */
L_100A7482:
    PUSH32(esp, MEM32(ebp + (-0x114))); /* 0x100A7482: push dword ptr [ebp - 0x114] */
    RECOMP_CALL(sub_100129AF); /* 0x100A7488: call 0x100129af */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x11C)); /* 0x100A748D: mov edi, dword ptr [ebp - 0x11c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x100A7493: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x100A7496: add edi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 1); /* 0x100A7498: push 1 */
    PUSH32(esp, edi); /* 0x100A749A: push edi */
    MEM32(ebp + (-0x110)) = edi; /* 0x100A749B: mov dword ptr [ebp - 0x110], edi */
    RECOMP_CALL(sub_10011208); /* 0x100A74A1: call 0x10011208 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A74A6: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A74A8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x100A74AB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7413; /* 0x100A74AD: je 0x100a7413 */
L_100A74B3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x11C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x11C)); /* 0x100A74B3: sub edi, dword ptr [ebp - 0x11c] */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x100A74B9: push edi */
    PUSH32(esp, esi); /* 0x100A74BA: push esi */
    PUSH32(esp, MEM32(ebp + (-0x114))); /* 0x100A74BB: push dword ptr [ebp - 0x114] */
    RECOMP_CALL(sub_100A525C); /* 0x100A74C1: call 0x100a525c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A74C6: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A74C8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x100A74CB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7538; /* 0x100A74CD: je 0x100a7538 */
L_100A74CF:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x100A74CF: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A7538; /* 0x100A74D1: je 0x100a7538 */
L_100A74D3:
    PUSH32(esp, esi); /* 0x100A74D3: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x100A74D4: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A74D9: pop ecx */
    MEM32(ebp + (-0x114)) = eax; /* 0x100A74DA: mov dword ptr [ebp - 0x114], eax */
    ecx = eax + esi; /* 0x100A74E0: lea ecx, [eax + esi] */
    edx = (int32_t)(int8_t)MEM8(ecx + (-0x1)); /* 0x100A74E3: movsx edx, byte ptr [ecx - 1] */
    /* cmp edx, 0x2Fu */ /* 0x100A74E7: cmp edx, 0x2f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A7501; /* 0x100A74EA: je 0x100a7501 */
L_100A74EC:
    /* cmp edx, 0x5Cu */ /* 0x100A74EC: cmp edx, 0x5c */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A7501; /* 0x100A74EF: je 0x100a7501 */
L_100A74F1:
    /* cmp edx, 0x3Au */ /* 0x100A74F1: cmp edx, 0x3a */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A7501; /* 0x100A74F4: je 0x100a7501 */
L_100A74F6:
    MEM8(ecx) = (uint8_t)(0x5Cu); /* 0x100A74F6: mov byte ptr [ecx], 0x5c */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A74F9: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A74FA: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x114)) = eax; /* 0x100A74FB: mov dword ptr [ebp - 0x114], eax */
L_100A7501:
    eax = MEM32(ebp + (-0x110)); /* 0x100A7501: mov eax, dword ptr [ebp - 0x110] */
    PUSH32(esp, MEM32(ebp + (-0x120))); /* 0x100A7507: push dword ptr [ebp - 0x120] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100A750D: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x100A750F: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100A7511: push eax */
    PUSH32(esp, ecx); /* 0x100A7512: push ecx */
    RECOMP_CALL(sub_100147CD); /* 0x100A7513: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7518: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x100A751B: push ebx */
    /* test eax, eax */ /* 0x100A751C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7615; /* 0x100A751E: jne 0x100a7615 */
L_100A7524:
    PUSH32(esp, esi); /* 0x100A7524: push esi */
    RECOMP_CALL(sub_1007E270); /* 0x100A7525: call 0x1007e270 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A752A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A752B: pop ecx */
    /* test eax, eax */ /* 0x100A752C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7550; /* 0x100A752E: je 0x100a7550 */
L_100A7530:
    /* test edi, edi */ /* 0x100A7530: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7442; /* 0x100A7532: jne 0x100a7442 */
L_100A7538:
    edi = MEM32(ebp + (-0x118)); /* 0x100A7538: mov edi, dword ptr [ebp - 0x118] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x100A753E: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_1001177D); /* 0x100A7540: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 2; /* 0x100A7545: mov dword ptr [eax], 2 */
    RECOMP_BACKEDGE();
    goto L_100A7426; /* 0x100A754B: jmp 0x100a7426 */
L_100A7550:
    eax = MEM32(ebp + (-0x11C)); /* 0x100A7550: mov eax, dword ptr [ebp - 0x11c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x114)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x114)); /* 0x100A7556: add eax, dword ptr [ebp - 0x114] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x128)); /* 0x100A755C: mov edi, dword ptr [ebp - 0x128] */
    /* cmp eax, edi */ /* 0x100A7562: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A758F; /* 0x100A7564: jb 0x100a758f */
L_100A7566:
    edi = MEM32(ebp + (-0x118)); /* 0x100A7566: mov edi, dword ptr [ebp - 0x118] */
    eax = ebp + (-0x10C); /* 0x100A756C: lea eax, [ebp - 0x10c] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x100A7572: mov byte ptr [edi], bl */
    /* cmp esi, eax */ /* 0x100A7574: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A757F; /* 0x100A7576: je 0x100a757f */
L_100A7578:
    PUSH32(esp, esi); /* 0x100A7578: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A7579: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A757E: pop ecx */
L_100A757F:
    RECOMP_CALL(sub_1001177D); /* 0x100A757F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x100A7584: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_100A7426; /* 0x100A758A: jmp 0x100a7426 */
L_100A758F:
    RECOMP_CALL(sub_1001177D); /* 0x100A758F: call 0x1001177d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x12C)); /* 0x100A7594: mov ecx, dword ptr [ebp - 0x12c] */
    PUSH32(esp, esi); /* 0x100A759A: push esi */
    PUSH32(esp, edi); /* 0x100A759B: push edi */
    edi = MEM32(ebp + (-0x118)); /* 0x100A759C: mov edi, dword ptr [ebp - 0x118] */
    PUSH32(esp, edi); /* 0x100A75A2: push edi */
    MEM32(eax) = ecx; /* 0x100A75A3: mov dword ptr [eax], ecx */
    RECOMP_CALL(sub_100147CD); /* 0x100A75A5: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A75AA: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A75AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7614; /* 0x100A75AF: jne 0x100a7614 */
L_100A75B1:
    eax = ebp + (-0x10C); /* 0x100A75B1: lea eax, [ebp - 0x10c] */
    /* cmp esi, eax */ /* 0x100A75B7: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A75E4; /* 0x100A75B9: je 0x100a75e4 */
L_100A75BB:
    PUSH32(esp, esi); /* 0x100A75BB: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A75BC: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A75C1: pop ecx */
    goto L_100A75E4; /* 0x100A75C2: jmp 0x100a75e4 */
L_100A75C4:
    edi = MEM32(ebp + (-0x118)); /* 0x100A75C4: mov edi, dword ptr [ebp - 0x118] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x100A75CA: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_1001177D); /* 0x100A75CC: call 0x1001177d */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 2; /* 0x100A75D1: mov dword ptr [eax], 2 */
L_100A75D7:
    RECOMP_CALL(sub_1001177D); /* 0x100A75D7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x110)); /* 0x100A75DC: mov esi, dword ptr [ebp - 0x110] */
L_100A75E2:
    ebx = MEM32(eax); /* 0x100A75E2: mov ebx, dword ptr [eax] */
L_100A75E4:
    edi = POP32_VAL(esp); /* 0x100A75E4: pop edi */
L_100A75E5:
    eax = ebp + (-0x10C); /* 0x100A75E5: lea eax, [ebp - 0x10c] */
    /* cmp esi, eax */ /* 0x100A75EB: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A75F6; /* 0x100A75ED: je 0x100a75f6 */
L_100A75EF:
    PUSH32(esp, esi); /* 0x100A75EF: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A75F0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A75F5: pop ecx */
L_100A75F6:
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x100A75F6: push dword ptr [ebp - 0x124] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100A75FC: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A7601: pop ecx */
    eax = ebx; /* 0x100A7602: mov eax, ebx */
L_100A7604:
    ecx = MEM32(ebp + (-0x4)); /* 0x100A7604: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x100A7607: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100A7608: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100A760A: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100A760B: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100A7610: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A7612: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A7613: ret  */
L_100A7614:
    PUSH32(esp, ebx); /* 0x100A7614: push ebx */
L_100A7615:
    PUSH32(esp, ebx); /* 0x100A7615: push ebx */
    PUSH32(esp, ebx); /* 0x100A7616: push ebx */
    PUSH32(esp, ebx); /* 0x100A7617: push ebx */
    PUSH32(esp, ebx); /* 0x100A7618: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x100A7619: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A761Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A761F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A761Fu);

L_100A761F:
    PUSH32(esp, ebp); /* 0x100A761F: push ebp */
    ebp = esp; /* 0x100A7620: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x100A7622: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(0x100E18AC); /* 0x100A7625: mov eax, dword ptr [0x100e18ac] */
    edx = ~edx; /* 0x100A762A: not edx */
    ecx = MEM32(ebp + 0x8); /* 0x100A762C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x100A762F: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    ecx = ecx & MEM32(ebp + 0xC); /* 0x100A7631: and ecx, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x100A7634: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E18AC) = edx; /* 0x100A7636: mov dword ptr [0x100e18ac], edx */
    ebp = POP32_VAL(esp); /* 0x100A763C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A763D: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A763E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A763Eu);

L_100A763E:
    RECOMP_CALL(sub_100A4845); /* 0x100A763E: call 0x100a4845 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A7643: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A764F; /* 0x100A7645: je 0x100a764f */
L_100A7647:
    PUSH32(esp, 0x16u); /* 0x100A7647: push 0x16 */
    RECOMP_CALL(sub_100A491C); /* 0x100A7649: call 0x100a491c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A764E: pop ecx */
L_100A764F:
    /* test MEM8(0x100E18AC), 2 */ /* 0x100A764F: test byte ptr [0x100e18ac], 2 */
    _flag_a = (uint32_t)(MEM8(0x100E18AC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7679; /* 0x100A7656: je 0x100a7679 */
L_100A7658:
    PUSH32(esp, 0x17u); /* 0x100A7658: push 0x17 */
    RECOMP_CALL(sub_1002DB46); /* 0x100A765A: call 0x1002db46 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A765F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7668; /* 0x100A7661: je 0x100a7668 */
L_100A7663:
    PUSH32(esp, 7); /* 0x100A7663: push 7 */
    ecx = POP32_VAL(esp); /* 0x100A7665: pop ecx */
    void_lift_trap(0x100A7666u, "int 0x29");
L_100A7668:
    PUSH32(esp, 1); /* 0x100A7668: push 1 */
    PUSH32(esp, 0x40000015u); /* 0x100A766A: push 0x40000015 */
    PUSH32(esp, 3); /* 0x100A766F: push 3 */
    RECOMP_CALL(sub_100A4519); /* 0x100A7671: call 0x100a4519 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7676: add esp, 0xc */
    _flag_k = FK_ADD;
L_100A7679:
    PUSH32(esp, 3); /* 0x100A7679: push 3 */
    RECOMP_CALL(sub_1007BBB8); /* 0x100A767B: call 0x1007bbb8 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A7680u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A7681(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A7681u);

L_100A7681:
    PUSH32(esp, ebp); /* 0x100A7681: push ebp */
    ebp = esp; /* 0x100A7682: mov ebp, esp */
    eax = MEM32(ebp + 0x18); /* 0x100A7684: mov eax, dword ptr [ebp + 0x18] */
    ecx = 0x100u; /* 0x100A7687: mov ecx, 0x100 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A768C: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A768E: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100A7690: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A7692: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100A7693: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x14); /* 0x100A7696: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A7699: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A769B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100A769D: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A769F: push eax */
    eax = MEM32(ebp + 0x10); /* 0x100A76A0: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x100A76A3: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A76A6: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A76A8: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100A76AA: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A76AC: push eax */
    eax = MEM32(ebp + 0xC); /* 0x100A76AD: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A76B0: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A76B3: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A76B5: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x100A76B7: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A76BA: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A76BB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A76BE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A76CB); /* 0x100A76C1: call 0x100a76cb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x100A76C6: add esp, 0x24 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A76C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A76CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A76CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A76CBu);

L_100A76CB:
    PUSH32(esp, ebp); /* 0x100A76CB: push ebp */
    ebp = esp; /* 0x100A76CC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A76CE: push ecx */
    PUSH32(esp, ecx); /* 0x100A76CF: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A76D0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x10); /* 0x100A76D4: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x100A76D7: push ebx */
    PUSH32(esp, esi); /* 0x100A76D8: push esi */
    PUSH32(esp, edi); /* 0x100A76D9: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A76DA: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x100A76DD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A76EC; /* 0x100A76DF: je 0x100a76ec */
L_100A76E1:
    ecx = MEM32(ebp + 0xC); /* 0x100A76E1: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x100A76E4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A76FA; /* 0x100A76E6: jne 0x100a76fa */
L_100A76E8:
    /* test edx, edx */ /* 0x100A76E8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A76FE; /* 0x100A76EA: je 0x100a76fe */
L_100A76EC:
    ebx = MEM32(ebp + 0x14); /* 0x100A76EC: mov ebx, dword ptr [ebp + 0x14] */
L_100A76EF:
    eax = MEM32(ebp + 0x24); /* 0x100A76EF: mov eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A76F2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A76F4: inc esi */
    _flag_k = FK_INC;
    goto L_100A786C; /* 0x100A76F5: jmp 0x100a786c */
L_100A76FA:
    /* test edx, edx */ /* 0x100A76FA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A76EC; /* 0x100A76FC: je 0x100a76ec */
L_100A76FE:
    ebx = MEM32(ebp + 0x14); /* 0x100A76FE: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x100A7701: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A770C; /* 0x100A7703: jne 0x100a770c */
L_100A7705:
    /* cmp MEM32(ebp + 0x18), ebx */ /* 0x100A7705: cmp dword ptr [ebp + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A7712; /* 0x100A7708: je 0x100a7712 */
L_100A770A:
    RECOMP_BACKEDGE();
    goto L_100A76EF; /* 0x100A770A: jmp 0x100a76ef */
L_100A770C:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x100A770C: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A76EF; /* 0x100A7710: je 0x100a76ef */
L_100A7712:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x100A7712: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A7720; /* 0x100A7716: jne 0x100a7720 */
L_100A7718:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x100A7718: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A7726; /* 0x100A771C: je 0x100a7726 */
L_100A771E:
    RECOMP_BACKEDGE();
    goto L_100A76EF; /* 0x100A771E: jmp 0x100a76ef */
L_100A7720:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x100A7720: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A76EF; /* 0x100A7724: je 0x100a76ef */
L_100A7726:
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x100A7726: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A7734; /* 0x100A772A: jne 0x100a7734 */
L_100A772C:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x100A772C: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A773A; /* 0x100A7730: je 0x100a773a */
L_100A7732:
    RECOMP_BACKEDGE();
    goto L_100A76EF; /* 0x100A7732: jmp 0x100a76ef */
L_100A7734:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x100A7734: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A76EF; /* 0x100A7738: je 0x100a76ef */
L_100A773A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A773A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x100A773C: mov esi, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A773E: inc eax */
    _flag_k = FK_INC;
L_100A773F:
    /* cmp MEM8(esi), 0 */ /* 0x100A773F: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A7748; /* 0x100A7742: je 0x100a7748 */
L_100A7744:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A7744: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100A7745: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100A773F; /* 0x100A7746: jne 0x100a773f */
L_100A7748:
    /* cmp MEM8(esi), 0x3Au */ /* 0x100A7748: cmp byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A7770; /* 0x100A774B: jne 0x100a7770 */
L_100A774D:
    /* test ecx, ecx */ /* 0x100A774D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7768; /* 0x100A774F: je 0x100a7768 */
L_100A7751:
    /* cmp edx, 3 */ /* 0x100A7751: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A78BD; /* 0x100A7754: jb 0x100a78bd */
L_100A775A:
    PUSH32(esp, 2); /* 0x100A775A: push 2 */
    PUSH32(esp, edi); /* 0x100A775C: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A775D: push -1 */
    PUSH32(esp, ecx); /* 0x100A775F: push ecx */
    RECOMP_CALL(sub_1008D8A4); /* 0x100A7760: call 0x1008d8a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A7765: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100A7768:
    edi = esi + 0x1; /* 0x100A7768: lea edi, [esi + 1] */
    MEM32(ebp + 0x8) = edi; /* 0x100A776B: mov dword ptr [ebp + 8], edi */
    goto L_100A7777; /* 0x100A776E: jmp 0x100a7777 */
L_100A7770:
    /* test ecx, ecx */ /* 0x100A7770: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7777; /* 0x100A7772: je 0x100a7777 */
L_100A7774:
    MEM8(ecx) = (uint8_t)(0); /* 0x100A7774: mov byte ptr [ecx], 0 */
L_100A7777:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x100A7777: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A777B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x100A777D: mov esi, edi */
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x100A777F: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A77E3; /* 0x100A7781: je 0x100a77e3 */
L_100A7783:
    edi = MEM32(ebp + (-0x8)); /* 0x100A7783: mov edi, dword ptr [ebp - 8] */
L_100A7786:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x100A7786: movsx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x100A7789: push eax */
    RECOMP_CALL(sub_1002E05B); /* 0x100A778A: call 0x1002e05b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A778F: pop ecx */
    /* test eax, eax */ /* 0x100A7790: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7797; /* 0x100A7792: je 0x100a7797 */
L_100A7794:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A7794: inc esi */
    _flag_k = FK_INC;
    goto L_100A77AC; /* 0x100A7795: jmp 0x100a77ac */
L_100A7797:
    SET_LO8(eax, MEM8(esi)); /* 0x100A7797: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x2Fu */ /* 0x100A7799: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A77A9; /* 0x100A779B: je 0x100a77a9 */
L_100A779D:
    /* cmp LO8(eax), 0x5Cu */ /* 0x100A779D: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A77A9; /* 0x100A779F: je 0x100a77a9 */
L_100A77A1:
    /* cmp LO8(eax), 0x2Eu */ /* 0x100A77A1: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A77AC; /* 0x100A77A3: jne 0x100a77ac */
L_100A77A5:
    ebx = esi; /* 0x100A77A5: mov ebx, esi */
    goto L_100A77AC; /* 0x100A77A7: jmp 0x100a77ac */
L_100A77A9:
    edi = esi + 0x1; /* 0x100A77A9: lea edi, [esi + 1] */
L_100A77AC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A77AC: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x100A77AD: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A7786; /* 0x100A77B0: jne 0x100a7786 */
L_100A77B2:
    MEM32(ebp + (-0x8)) = edi; /* 0x100A77B2: mov dword ptr [ebp - 8], edi */
    /* test edi, edi */ /* 0x100A77B5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x100A77B7: mov edi, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A77E3; /* 0x100A77BA: je 0x100a77e3 */
L_100A77BC:
    ecx = MEM32(ebp + 0x14); /* 0x100A77BC: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x100A77BF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A77DE; /* 0x100A77C1: je 0x100a77de */
L_100A77C3:
    eax = MEM32(ebp + (-0x8)); /* 0x100A77C3: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x100A77C6: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x18), eax */ /* 0x100A77C8: cmp dword ptr [ebp + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A7863; /* 0x100A77CB: jbe 0x100a7863 */
L_100A77D1:
    PUSH32(esp, eax); /* 0x100A77D1: push eax */
    PUSH32(esp, edi); /* 0x100A77D2: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A77D3: push -1 */
    PUSH32(esp, ecx); /* 0x100A77D5: push ecx */
    RECOMP_CALL(sub_1008D8A4); /* 0x100A77D6: call 0x1008d8a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A77DB: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100A77DE:
    edi = MEM32(ebp + (-0x8)); /* 0x100A77DE: mov edi, dword ptr [ebp - 8] */
    goto L_100A77ED; /* 0x100A77E1: jmp 0x100a77ed */
L_100A77E3:
    ecx = MEM32(ebp + 0x14); /* 0x100A77E3: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x100A77E6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A77ED; /* 0x100A77E8: je 0x100a77ed */
L_100A77EA:
    MEM8(ecx) = (uint8_t)(0); /* 0x100A77EA: mov byte ptr [ecx], 0 */
L_100A77ED:
    /* test ebx, ebx */ /* 0x100A77ED: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A782F; /* 0x100A77EF: je 0x100a782f */
L_100A77F1:
    /* cmp ebx, edi */ /* 0x100A77F1: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A782F; /* 0x100A77F3: jb 0x100a782f */
L_100A77F5:
    ecx = MEM32(ebp + 0x1C); /* 0x100A77F5: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x100A77F8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7812; /* 0x100A77FA: je 0x100a7812 */
L_100A77FC:
    eax = ebx; /* 0x100A77FC: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x100A77FE: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x20), eax */ /* 0x100A7800: cmp dword ptr [ebp + 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A7858; /* 0x100A7803: jbe 0x100a7858 */
L_100A7805:
    PUSH32(esp, eax); /* 0x100A7805: push eax */
    PUSH32(esp, edi); /* 0x100A7806: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A7807: push -1 */
    PUSH32(esp, ecx); /* 0x100A7809: push ecx */
    RECOMP_CALL(sub_1008D8A4); /* 0x100A780A: call 0x1008d8a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A780F: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100A7812:
    eax = MEM32(ebp + 0x24); /* 0x100A7812: mov eax, dword ptr [ebp + 0x24] */
    /* test eax, eax */ /* 0x100A7815: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7854; /* 0x100A7817: je 0x100a7854 */
L_100A7819:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x100A7819: sub esi, ebx */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x28), esi */ /* 0x100A781B: cmp dword ptr [ebp + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A7866; /* 0x100A781E: jbe 0x100a7866 */
L_100A7820:
    PUSH32(esp, esi); /* 0x100A7820: push esi */
    PUSH32(esp, ebx); /* 0x100A7821: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A7822: push -1 */
    PUSH32(esp, eax); /* 0x100A7824: push eax */
    RECOMP_CALL(sub_1008D8A4); /* 0x100A7825: call 0x1008d8a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A782A: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100A7854; /* 0x100A782D: jmp 0x100a7854 */
L_100A782F:
    ecx = MEM32(ebp + 0x1C); /* 0x100A782F: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x100A7832: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A784A; /* 0x100A7834: je 0x100a784a */
L_100A7836:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x100A7836: sub esi, edi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x20), esi */ /* 0x100A7838: cmp dword ptr [ebp + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A7858; /* 0x100A783B: jbe 0x100a7858 */
L_100A783D:
    PUSH32(esp, esi); /* 0x100A783D: push esi */
    PUSH32(esp, edi); /* 0x100A783E: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A783F: push -1 */
    PUSH32(esp, ecx); /* 0x100A7841: push ecx */
    RECOMP_CALL(sub_1008D8A4); /* 0x100A7842: call 0x1008d8a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A7847: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100A784A:
    eax = MEM32(ebp + 0x24); /* 0x100A784A: mov eax, dword ptr [ebp + 0x24] */
    /* test eax, eax */ /* 0x100A784D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7854; /* 0x100A784F: je 0x100a7854 */
L_100A7851:
    MEM8(eax) = (uint8_t)(0); /* 0x100A7851: mov byte ptr [eax], 0 */
L_100A7854:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A7854: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A78CD; /* 0x100A7856: jmp 0x100a78cd */
L_100A7858:
    eax = MEM32(ebp + 0x24); /* 0x100A7858: mov eax, dword ptr [ebp + 0x24] */
    ebx = MEM32(ebp + 0x14); /* 0x100A785B: mov ebx, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + (-0x4)); /* 0x100A785E: mov esi, dword ptr [ebp - 4] */
    goto L_100A786F; /* 0x100A7861: jmp 0x100a786f */
L_100A7863:
    eax = MEM32(ebp + 0x24); /* 0x100A7863: mov eax, dword ptr [ebp + 0x24] */
L_100A7866:
    ebx = MEM32(ebp + 0x14); /* 0x100A7866: mov ebx, dword ptr [ebp + 0x14] */
L_100A7869:
    esi = MEM32(ebp + (-0x4)); /* 0x100A7869: mov esi, dword ptr [ebp - 4] */
L_100A786C:
    ecx = MEM32(ebp + 0x1C); /* 0x100A786C: mov ecx, dword ptr [ebp + 0x1c] */
L_100A786F:
    edx = MEM32(ebp + 0xC); /* 0x100A786F: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x100A7872: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A787F; /* 0x100A7874: je 0x100a787f */
L_100A7876:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x100A7876: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A787F; /* 0x100A787A: jbe 0x100a787f */
L_100A787C:
    MEM8(edx) = (uint8_t)(0); /* 0x100A787C: mov byte ptr [edx], 0 */
L_100A787F:
    /* test ebx, ebx */ /* 0x100A787F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A788C; /* 0x100A7881: je 0x100a788c */
L_100A7883:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x100A7883: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A788C; /* 0x100A7887: jbe 0x100a788c */
L_100A7889:
    MEM8(ebx) = (uint8_t)(0); /* 0x100A7889: mov byte ptr [ebx], 0 */
L_100A788C:
    /* test ecx, ecx */ /* 0x100A788C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7899; /* 0x100A788E: je 0x100a7899 */
L_100A7890:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x100A7890: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A7899; /* 0x100A7894: jbe 0x100a7899 */
L_100A7896:
    MEM8(ecx) = (uint8_t)(0); /* 0x100A7896: mov byte ptr [ecx], 0 */
L_100A7899:
    /* test eax, eax */ /* 0x100A7899: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A78A6; /* 0x100A789B: je 0x100a78a6 */
L_100A789D:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x100A789D: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A78A6; /* 0x100A78A1: jbe 0x100a78a6 */
L_100A78A3:
    MEM8(eax) = (uint8_t)(0); /* 0x100A78A3: mov byte ptr [eax], 0 */
L_100A78A6:
    RECOMP_CALL(sub_1001177D); /* 0x100A78A6: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x100A78AB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A78C2; /* 0x100A78AD: jne 0x100a78c2 */
L_100A78AF:
    PUSH32(esp, 0x16u); /* 0x100A78AF: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A78B1: pop esi */
    MEM32(eax) = esi; /* 0x100A78B2: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A78B4: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A78B9: mov eax, esi */
    goto L_100A78CD; /* 0x100A78BB: jmp 0x100a78cd */
L_100A78BD:
    eax = MEM32(ebp + 0x24); /* 0x100A78BD: mov eax, dword ptr [ebp + 0x24] */
    RECOMP_BACKEDGE();
    goto L_100A7869; /* 0x100A78C0: jmp 0x100a7869 */
L_100A78C2:
    /* test esi, esi */ /* 0x100A78C2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A78AF; /* 0x100A78C4: jne 0x100a78af */
L_100A78C6:
    PUSH32(esp, 0x22u); /* 0x100A78C6: push 0x22 */
    ecx = POP32_VAL(esp); /* 0x100A78C8: pop ecx */
    MEM32(eax) = ecx; /* 0x100A78C9: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x100A78CB: mov eax, ecx */
L_100A78CD:
    edi = POP32_VAL(esp); /* 0x100A78CD: pop edi */
    esi = POP32_VAL(esp); /* 0x100A78CE: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A78CF: pop ebx */
    esp = ebp; /* 0x100A78D0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A78D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A78D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A78D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A78D4u);

L_100A78D4:
    PUSH32(esp, ebp); /* 0x100A78D4: push ebp */
    ebp = esp; /* 0x100A78D5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A78D7: push ecx */
    PUSH32(esp, ecx); /* 0x100A78D8: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A78D9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x10); /* 0x100A78DD: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x100A78E0: push ebx */
    PUSH32(esp, esi); /* 0x100A78E1: push esi */
    PUSH32(esp, edi); /* 0x100A78E2: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100A78E3: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x100A78E6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A78F5; /* 0x100A78E8: je 0x100a78f5 */
L_100A78EA:
    ecx = MEM32(ebp + 0xC); /* 0x100A78EA: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x100A78ED: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7903; /* 0x100A78EF: jne 0x100a7903 */
L_100A78F1:
    /* test edx, edx */ /* 0x100A78F1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7907; /* 0x100A78F3: je 0x100a7907 */
L_100A78F5:
    ebx = MEM32(ebp + 0x14); /* 0x100A78F5: mov ebx, dword ptr [ebp + 0x14] */
L_100A78F8:
    eax = MEM32(ebp + 0x24); /* 0x100A78F8: mov eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A78FB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A78FD: inc esi */
    _flag_k = FK_INC;
    goto L_100A7A78; /* 0x100A78FE: jmp 0x100a7a78 */
L_100A7903:
    /* test edx, edx */ /* 0x100A7903: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A78F5; /* 0x100A7905: je 0x100a78f5 */
L_100A7907:
    ebx = MEM32(ebp + 0x14); /* 0x100A7907: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x100A790A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7915; /* 0x100A790C: jne 0x100a7915 */
L_100A790E:
    /* cmp MEM32(ebp + 0x18), ebx */ /* 0x100A790E: cmp dword ptr [ebp + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A791B; /* 0x100A7911: je 0x100a791b */
L_100A7913:
    RECOMP_BACKEDGE();
    goto L_100A78F8; /* 0x100A7913: jmp 0x100a78f8 */
L_100A7915:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x100A7915: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A78F8; /* 0x100A7919: je 0x100a78f8 */
L_100A791B:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x100A791B: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A7929; /* 0x100A791F: jne 0x100a7929 */
L_100A7921:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x100A7921: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A792F; /* 0x100A7925: je 0x100a792f */
L_100A7927:
    RECOMP_BACKEDGE();
    goto L_100A78F8; /* 0x100A7927: jmp 0x100a78f8 */
L_100A7929:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x100A7929: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A78F8; /* 0x100A792D: je 0x100a78f8 */
L_100A792F:
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x100A792F: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A793D; /* 0x100A7933: jne 0x100a793d */
L_100A7935:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x100A7935: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A7943; /* 0x100A7939: je 0x100a7943 */
L_100A793B:
    RECOMP_BACKEDGE();
    goto L_100A78F8; /* 0x100A793B: jmp 0x100a78f8 */
L_100A793D:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x100A793D: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A78F8; /* 0x100A7941: je 0x100a78f8 */
L_100A7943:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A7943: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x100A7945: mov esi, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100A7947: inc eax */
    _flag_k = FK_INC;
L_100A7948:
    /* cmp MEM8(esi), 0 */ /* 0x100A7948: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A7951; /* 0x100A794B: je 0x100a7951 */
L_100A794D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A794D: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100A794E: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100A7948; /* 0x100A794F: jne 0x100a7948 */
L_100A7951:
    /* cmp MEM8(esi), 0x3Au */ /* 0x100A7951: cmp byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A7978; /* 0x100A7954: jne 0x100a7978 */
L_100A7956:
    /* test ecx, ecx */ /* 0x100A7956: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7970; /* 0x100A7958: je 0x100a7970 */
L_100A795A:
    /* cmp edx, 3 */ /* 0x100A795A: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A7AC9; /* 0x100A795D: jb 0x100a7ac9 */
L_100A7963:
    PUSH32(esp, 2); /* 0x100A7963: push 2 */
    PUSH32(esp, edi); /* 0x100A7965: push edi */
    PUSH32(esp, edx); /* 0x100A7966: push edx */
    PUSH32(esp, ecx); /* 0x100A7967: push ecx */
    RECOMP_CALL(sub_10012A18); /* 0x100A7968: call 0x10012a18 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A796D: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100A7970:
    edi = esi + 0x1; /* 0x100A7970: lea edi, [esi + 1] */
    MEM32(ebp + 0x8) = edi; /* 0x100A7973: mov dword ptr [ebp + 8], edi */
    goto L_100A797F; /* 0x100A7976: jmp 0x100a797f */
L_100A7978:
    /* test ecx, ecx */ /* 0x100A7978: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A797F; /* 0x100A797A: je 0x100a797f */
L_100A797C:
    MEM8(ecx) = (uint8_t)(0); /* 0x100A797C: mov byte ptr [ecx], 0 */
L_100A797F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x100A797F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A7983: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x100A7985: mov esi, edi */
    /* cmp MEM8(edi), LO8(ebx) */ /* 0x100A7987: cmp byte ptr [edi], bl */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A79EC; /* 0x100A7989: je 0x100a79ec */
L_100A798B:
    edi = MEM32(ebp + (-0x8)); /* 0x100A798B: mov edi, dword ptr [ebp - 8] */
L_100A798E:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x100A798E: movsx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x100A7991: push eax */
    RECOMP_CALL(sub_1002E05B); /* 0x100A7992: call 0x1002e05b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A7997: pop ecx */
    /* test eax, eax */ /* 0x100A7998: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A799F; /* 0x100A799A: je 0x100a799f */
L_100A799C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A799C: inc esi */
    _flag_k = FK_INC;
    goto L_100A79B4; /* 0x100A799D: jmp 0x100a79b4 */
L_100A799F:
    SET_LO8(eax, MEM8(esi)); /* 0x100A799F: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x2Fu */ /* 0x100A79A1: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A79B1; /* 0x100A79A3: je 0x100a79b1 */
L_100A79A5:
    /* cmp LO8(eax), 0x5Cu */ /* 0x100A79A5: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A79B1; /* 0x100A79A7: je 0x100a79b1 */
L_100A79A9:
    /* cmp LO8(eax), 0x2Eu */ /* 0x100A79A9: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A79B4; /* 0x100A79AB: jne 0x100a79b4 */
L_100A79AD:
    ebx = esi; /* 0x100A79AD: mov ebx, esi */
    goto L_100A79B4; /* 0x100A79AF: jmp 0x100a79b4 */
L_100A79B1:
    edi = esi + 0x1; /* 0x100A79B1: lea edi, [esi + 1] */
L_100A79B4:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A79B4: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x100A79B5: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A798E; /* 0x100A79B8: jne 0x100a798e */
L_100A79BA:
    MEM32(ebp + (-0x8)) = edi; /* 0x100A79BA: mov dword ptr [ebp - 8], edi */
    /* test edi, edi */ /* 0x100A79BD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x100A79BF: mov edi, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A79EC; /* 0x100A79C2: je 0x100a79ec */
L_100A79C4:
    ecx = MEM32(ebp + 0x14); /* 0x100A79C4: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x100A79C7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A79E7; /* 0x100A79C9: je 0x100a79e7 */
L_100A79CB:
    eax = MEM32(ebp + (-0x8)); /* 0x100A79CB: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x100A79CE: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x18), eax */ /* 0x100A79D0: cmp dword ptr [ebp + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A7A6F; /* 0x100A79D3: jbe 0x100a7a6f */
L_100A79D9:
    PUSH32(esp, eax); /* 0x100A79D9: push eax */
    PUSH32(esp, edi); /* 0x100A79DA: push edi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100A79DB: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x100A79DE: push ecx */
    RECOMP_CALL(sub_10012A18); /* 0x100A79DF: call 0x10012a18 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A79E4: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100A79E7:
    edi = MEM32(ebp + (-0x8)); /* 0x100A79E7: mov edi, dword ptr [ebp - 8] */
    goto L_100A79F6; /* 0x100A79EA: jmp 0x100a79f6 */
L_100A79EC:
    ecx = MEM32(ebp + 0x14); /* 0x100A79EC: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x100A79EF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A79F6; /* 0x100A79F1: je 0x100a79f6 */
L_100A79F3:
    MEM8(ecx) = (uint8_t)(0); /* 0x100A79F3: mov byte ptr [ecx], 0 */
L_100A79F6:
    /* test ebx, ebx */ /* 0x100A79F6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7A3A; /* 0x100A79F8: je 0x100a7a3a */
L_100A79FA:
    /* cmp ebx, edi */ /* 0x100A79FA: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100A7A3A; /* 0x100A79FC: jb 0x100a7a3a */
L_100A79FE:
    ecx = MEM32(ebp + 0x1C); /* 0x100A79FE: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x100A7A01: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7A1C; /* 0x100A7A03: je 0x100a7a1c */
L_100A7A05:
    eax = ebx; /* 0x100A7A05: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x100A7A07: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x20), eax */ /* 0x100A7A09: cmp dword ptr [ebp + 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A7A64; /* 0x100A7A0C: jbe 0x100a7a64 */
L_100A7A0E:
    PUSH32(esp, eax); /* 0x100A7A0E: push eax */
    PUSH32(esp, edi); /* 0x100A7A0F: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x100A7A10: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x100A7A13: push ecx */
    RECOMP_CALL(sub_10012A18); /* 0x100A7A14: call 0x10012a18 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A7A19: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100A7A1C:
    eax = MEM32(ebp + 0x24); /* 0x100A7A1C: mov eax, dword ptr [ebp + 0x24] */
    /* test eax, eax */ /* 0x100A7A1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7A60; /* 0x100A7A21: je 0x100a7a60 */
L_100A7A23:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x100A7A23: sub esi, ebx */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x28), esi */ /* 0x100A7A25: cmp dword ptr [ebp + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A7A72; /* 0x100A7A28: jbe 0x100a7a72 */
L_100A7A2A:
    PUSH32(esp, esi); /* 0x100A7A2A: push esi */
    PUSH32(esp, ebx); /* 0x100A7A2B: push ebx */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x100A7A2C: push dword ptr [ebp + 0x28] */
    PUSH32(esp, eax); /* 0x100A7A2F: push eax */
    RECOMP_CALL(sub_10012A18); /* 0x100A7A30: call 0x10012a18 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A7A35: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100A7A60; /* 0x100A7A38: jmp 0x100a7a60 */
L_100A7A3A:
    ecx = MEM32(ebp + 0x1C); /* 0x100A7A3A: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x100A7A3D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7A56; /* 0x100A7A3F: je 0x100a7a56 */
L_100A7A41:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x100A7A41: sub esi, edi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x20), esi */ /* 0x100A7A43: cmp dword ptr [ebp + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A7A64; /* 0x100A7A46: jbe 0x100a7a64 */
L_100A7A48:
    PUSH32(esp, esi); /* 0x100A7A48: push esi */
    PUSH32(esp, edi); /* 0x100A7A49: push edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x100A7A4A: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x100A7A4D: push ecx */
    RECOMP_CALL(sub_10012A18); /* 0x100A7A4E: call 0x10012a18 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A7A53: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100A7A56:
    eax = MEM32(ebp + 0x24); /* 0x100A7A56: mov eax, dword ptr [ebp + 0x24] */
    /* test eax, eax */ /* 0x100A7A59: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7A60; /* 0x100A7A5B: je 0x100a7a60 */
L_100A7A5D:
    MEM8(eax) = (uint8_t)(0); /* 0x100A7A5D: mov byte ptr [eax], 0 */
L_100A7A60:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A7A60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100A7AD9; /* 0x100A7A62: jmp 0x100a7ad9 */
L_100A7A64:
    eax = MEM32(ebp + 0x24); /* 0x100A7A64: mov eax, dword ptr [ebp + 0x24] */
    ebx = MEM32(ebp + 0x14); /* 0x100A7A67: mov ebx, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + (-0x4)); /* 0x100A7A6A: mov esi, dword ptr [ebp - 4] */
    goto L_100A7A7B; /* 0x100A7A6D: jmp 0x100a7a7b */
L_100A7A6F:
    eax = MEM32(ebp + 0x24); /* 0x100A7A6F: mov eax, dword ptr [ebp + 0x24] */
L_100A7A72:
    ebx = MEM32(ebp + 0x14); /* 0x100A7A72: mov ebx, dword ptr [ebp + 0x14] */
L_100A7A75:
    esi = MEM32(ebp + (-0x4)); /* 0x100A7A75: mov esi, dword ptr [ebp - 4] */
L_100A7A78:
    ecx = MEM32(ebp + 0x1C); /* 0x100A7A78: mov ecx, dword ptr [ebp + 0x1c] */
L_100A7A7B:
    edx = MEM32(ebp + 0xC); /* 0x100A7A7B: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x100A7A7E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7A8B; /* 0x100A7A80: je 0x100a7a8b */
L_100A7A82:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x100A7A82: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A7A8B; /* 0x100A7A86: jbe 0x100a7a8b */
L_100A7A88:
    MEM8(edx) = (uint8_t)(0); /* 0x100A7A88: mov byte ptr [edx], 0 */
L_100A7A8B:
    /* test ebx, ebx */ /* 0x100A7A8B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7A98; /* 0x100A7A8D: je 0x100a7a98 */
L_100A7A8F:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x100A7A8F: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A7A98; /* 0x100A7A93: jbe 0x100a7a98 */
L_100A7A95:
    MEM8(ebx) = (uint8_t)(0); /* 0x100A7A95: mov byte ptr [ebx], 0 */
L_100A7A98:
    /* test ecx, ecx */ /* 0x100A7A98: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7AA5; /* 0x100A7A9A: je 0x100a7aa5 */
L_100A7A9C:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x100A7A9C: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A7AA5; /* 0x100A7AA0: jbe 0x100a7aa5 */
L_100A7AA2:
    MEM8(ecx) = (uint8_t)(0); /* 0x100A7AA2: mov byte ptr [ecx], 0 */
L_100A7AA5:
    /* test eax, eax */ /* 0x100A7AA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7AB2; /* 0x100A7AA7: je 0x100a7ab2 */
L_100A7AA9:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x100A7AA9: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A7AB2; /* 0x100A7AAD: jbe 0x100a7ab2 */
L_100A7AAF:
    MEM8(eax) = (uint8_t)(0); /* 0x100A7AAF: mov byte ptr [eax], 0 */
L_100A7AB2:
    RECOMP_CALL(sub_1001177D); /* 0x100A7AB2: call 0x1001177d */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x100A7AB7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7ACE; /* 0x100A7AB9: jne 0x100a7ace */
L_100A7ABB:
    PUSH32(esp, 0x16u); /* 0x100A7ABB: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A7ABD: pop esi */
    MEM32(eax) = esi; /* 0x100A7ABE: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A7AC0: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A7AC5: mov eax, esi */
    goto L_100A7AD9; /* 0x100A7AC7: jmp 0x100a7ad9 */
L_100A7AC9:
    eax = MEM32(ebp + 0x24); /* 0x100A7AC9: mov eax, dword ptr [ebp + 0x24] */
    RECOMP_BACKEDGE();
    goto L_100A7A75; /* 0x100A7ACC: jmp 0x100a7a75 */
L_100A7ACE:
    /* test esi, esi */ /* 0x100A7ACE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7ABB; /* 0x100A7AD0: jne 0x100a7abb */
L_100A7AD2:
    PUSH32(esp, 0x22u); /* 0x100A7AD2: push 0x22 */
    ecx = POP32_VAL(esp); /* 0x100A7AD4: pop ecx */
    MEM32(eax) = ecx; /* 0x100A7AD5: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x100A7AD7: mov eax, ecx */
L_100A7AD9:
    edi = POP32_VAL(esp); /* 0x100A7AD9: pop edi */
    esi = POP32_VAL(esp); /* 0x100A7ADA: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A7ADB: pop ebx */
    esp = ebp; /* 0x100A7ADC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A7ADE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A7ADF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A7AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A7AE0u);

L_100A7AE0:
    PUSH32(esp, ebp); /* 0x100A7AE0: push ebp */
    ebp = esp; /* 0x100A7AE1: mov ebp, esp */
    PUSH32(esp, edi); /* 0x100A7AE3: push edi */
    RECOMP_CALL(sub_1000F720); /* 0x100A7AE4: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100A7AE9: mov edi, eax */
    /* test edi, edi */ /* 0x100A7AEB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7B90; /* 0x100A7AED: je 0x100a7b90 */
L_100A7AF3:
    PUSH32(esp, ebx); /* 0x100A7AF3: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A7AF4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100A7AF6: push esi */
    esi = 0x86u; /* 0x100A7AF7: mov esi, 0x86 */
    /* cmp MEM32(edi + 0x24), ebx */ /* 0x100A7AFC: cmp dword ptr [edi + 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A7B12; /* 0x100A7AFF: jne 0x100a7b12 */
L_100A7B01:
    PUSH32(esp, 1); /* 0x100A7B01: push 1 */
    PUSH32(esp, esi); /* 0x100A7B03: push esi */
    RECOMP_CALL(sub_10011208); /* 0x100A7B04: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x24) = eax; /* 0x100A7B09: mov dword ptr [edi + 0x24], eax */
    ecx = POP32_VAL(esp); /* 0x100A7B0C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A7B0D: pop ecx */
    /* test eax, eax */ /* 0x100A7B0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7B8E; /* 0x100A7B10: je 0x100a7b8e */
L_100A7B12:
    edi = MEM32(edi + 0x24); /* 0x100A7B12: mov edi, dword ptr [edi + 0x24] */
    eax = MEM32(ebp + 0x8); /* 0x100A7B15: mov eax, dword ptr [ebp + 8] */
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x100A7B18: mov byte ptr [edi], bl */
    /* test eax, eax */ /* 0x100A7B1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7B49; /* 0x100A7B1C: je 0x100a7b49 */
L_100A7B1E:
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x100A7B1E: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A7B49; /* 0x100A7B20: je 0x100a7b49 */
L_100A7B22:
    PUSH32(esp, 0x82u); /* 0x100A7B22: push 0x82 */
    PUSH32(esp, eax); /* 0x100A7B27: push eax */
    PUSH32(esp, esi); /* 0x100A7B28: push esi */
    PUSH32(esp, edi); /* 0x100A7B29: push edi */
    RECOMP_CALL(sub_1008D511); /* 0x100A7B2A: call 0x1008d511 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A7B2F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7B32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7B93; /* 0x100A7B34: jne 0x100a7b93 */
L_100A7B36:
    PUSH32(esp, 0x10062FF4u); /* 0x100A7B36: push 0x10062ff4 */
    PUSH32(esp, esi); /* 0x100A7B3B: push esi */
    PUSH32(esp, edi); /* 0x100A7B3C: push edi */
    RECOMP_CALL(sub_1002E676); /* 0x100A7B3D: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7B42: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7B45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7B93; /* 0x100A7B47: jne 0x100a7b93 */
L_100A7B49:
    RECOMP_CALL(sub_1001177D); /* 0x100A7B49: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax)); /* 0x100A7B4E: push dword ptr [eax] */
    RECOMP_CALL(sub_100A6394); /* 0x100A7B50: call 0x100a6394 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100A7B55: push edi */
    esi = eax; /* 0x100A7B56: mov esi, eax */
    RECOMP_CALL(sub_100129AF); /* 0x100A7B58: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = 0x84u; /* 0x100A7B5D: mov ecx, 0x84 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100A7B62: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x100A7B64: push ecx */
    PUSH32(esp, esi); /* 0x100A7B65: push esi */
    esi = 0x86u; /* 0x100A7B66: mov esi, 0x86 */
    PUSH32(esp, esi); /* 0x100A7B6B: push esi */
    PUSH32(esp, edi); /* 0x100A7B6C: push edi */
    RECOMP_CALL(sub_1002FFBB); /* 0x100A7B6D: call 0x1002ffbb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100A7B72: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7B75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7B93; /* 0x100A7B77: jne 0x100a7b93 */
L_100A7B79:
    PUSH32(esp, 0x10062FECu); /* 0x100A7B79: push 0x10062fec */
    PUSH32(esp, esi); /* 0x100A7B7E: push esi */
    PUSH32(esp, edi); /* 0x100A7B7F: push edi */
    RECOMP_CALL(sub_1002E676); /* 0x100A7B80: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7B85: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7B88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7B93; /* 0x100A7B8A: jne 0x100a7b93 */
L_100A7B8C:
    eax = edi; /* 0x100A7B8C: mov eax, edi */
L_100A7B8E:
    esi = POP32_VAL(esp); /* 0x100A7B8E: pop esi */
    ebx = POP32_VAL(esp); /* 0x100A7B8F: pop ebx */
L_100A7B90:
    edi = POP32_VAL(esp); /* 0x100A7B90: pop edi */
    ebp = POP32_VAL(esp); /* 0x100A7B91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A7B92: ret  */
L_100A7B93:
    PUSH32(esp, ebx); /* 0x100A7B93: push ebx */
    PUSH32(esp, ebx); /* 0x100A7B94: push ebx */
    PUSH32(esp, ebx); /* 0x100A7B95: push ebx */
    PUSH32(esp, ebx); /* 0x100A7B96: push ebx */
    PUSH32(esp, ebx); /* 0x100A7B97: push ebx */
    RECOMP_CALL(sub_100A469B); /* 0x100A7B98: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A7B9Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A7B9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A7B9Eu);

L_100A7B9E:
    PUSH32(esp, ebp); /* 0x100A7B9E: push ebp */
    ebp = esp; /* 0x100A7B9F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100A7BA1: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100A7BA2: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x100A7BA5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7BBF; /* 0x100A7BA7: jne 0x100a7bbf */
L_100A7BA9:
    RECOMP_CALL(sub_1001177D); /* 0x100A7BA9: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A7BAE: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A7BB0: pop esi */
    MEM32(eax) = esi; /* 0x100A7BB1: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A7BB3: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A7BB8: mov eax, esi */
    goto L_100A7C3F; /* 0x100A7BBA: jmp 0x100a7c3f */
L_100A7BBF:
    PUSH32(esp, edi); /* 0x100A7BBF: push edi */
    edi = MEM32(ebp + 0xC); /* 0x100A7BC0: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x100A7BC3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7BDA; /* 0x100A7BC5: jne 0x100a7bda */
L_100A7BC7:
    RECOMP_CALL(sub_1001177D); /* 0x100A7BC7: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A7BCC: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A7BCE: pop esi */
    MEM32(eax) = esi; /* 0x100A7BCF: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A7BD1: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A7BD6: mov eax, esi */
    goto L_100A7C3E; /* 0x100A7BD8: jmp 0x100a7c3e */
L_100A7BDA:
    PUSH32(esp, ebx); /* 0x100A7BDA: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x100A7BDB: mov ebx, dword ptr [ebp + 0x10] */
    MEM8(esi) = (uint8_t)(0); /* 0x100A7BDE: mov byte ptr [esi], 0 */
    /* test ebx, ebx */ /* 0x100A7BE1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A7C1A; /* 0x100A7BE3: je 0x100a7c1a */
L_100A7BE5:
    /* cmp MEM8(ebx), 0 */ /* 0x100A7BE5: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A7C1A; /* 0x100A7BE8: je 0x100a7c1a */
L_100A7BEA:
    PUSH32(esp, ebx); /* 0x100A7BEA: push ebx */
    RECOMP_CALL(sub_100129AF); /* 0x100A7BEB: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A7BF0: pop ecx */
    ecx = edi + (-0x7); /* 0x100A7BF1: lea ecx, [edi - 7] */
    /* cmp eax, ecx */ /* 0x100A7BF4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A7C1A; /* 0x100A7BF6: jae 0x100a7c1a */
L_100A7BF8:
    PUSH32(esp, ebx); /* 0x100A7BF8: push ebx */
    PUSH32(esp, edi); /* 0x100A7BF9: push edi */
    PUSH32(esp, esi); /* 0x100A7BFA: push esi */
    RECOMP_CALL(sub_100147CD); /* 0x100A7BFB: call 0x100147cd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7C00: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7C03: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7C42; /* 0x100A7C05: jne 0x100a7c42 */
L_100A7C07:
    PUSH32(esp, 0x10062FF4u); /* 0x100A7C07: push 0x10062ff4 */
    PUSH32(esp, edi); /* 0x100A7C0C: push edi */
    PUSH32(esp, esi); /* 0x100A7C0D: push esi */
    RECOMP_CALL(sub_1002E676); /* 0x100A7C0E: call 0x1002e676 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7C13: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7C16: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7C42; /* 0x100A7C18: jne 0x100a7c42 */
L_100A7C1A:
    RECOMP_CALL(sub_1001177D); /* 0x100A7C1A: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax)); /* 0x100A7C1F: push dword ptr [eax] */
    PUSH32(esp, esi); /* 0x100A7C21: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x100A7C22: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A7C27: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x100A7C28: sub edi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x100A7C2A: push edi */
    PUSH32(esp, esi); /* 0x100A7C2B: push esi */
    RECOMP_CALL(sub_100129AF); /* 0x100A7C2C: call 0x100129af */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A7C31: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x100A7C32: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100A7C34: push eax */
    RECOMP_CALL(sub_100A9160); /* 0x100A7C35: call 0x100a9160 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7C3A: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x100A7C3D: pop ebx */
L_100A7C3E:
    edi = POP32_VAL(esp); /* 0x100A7C3E: pop edi */
L_100A7C3F:
    esi = POP32_VAL(esp); /* 0x100A7C3F: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A7C40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A7C41: ret  */
L_100A7C42:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A7C42: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A7C44: push eax */
    PUSH32(esp, eax); /* 0x100A7C45: push eax */
    PUSH32(esp, eax); /* 0x100A7C46: push eax */
    PUSH32(esp, eax); /* 0x100A7C47: push eax */
    PUSH32(esp, eax); /* 0x100A7C48: push eax */
    RECOMP_CALL(sub_100A469B); /* 0x100A7C49: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A7C4Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A7C4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A7C4Fu);

L_100A7C4F:
    PUSH32(esp, ebp); /* 0x100A7C4F: push ebp */
    ebp = esp; /* 0x100A7C50: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100A7C52: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100A7C53: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x100A7C57: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x100A7C5A: push eax */
    eax = MEM32(ebp + 0x8); /* 0x100A7C5B: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x180u);
    eax = eax & 0x180u; /* 0x100A7C5E: and eax, 0x180 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100A7C63: push eax */
    RECOMP_CALL(sub_100A7C72); /* 0x100A7C64: call 0x100a7c72 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x100A7C69: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x100A7C6C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A7C6D: pop ecx */
    esp = ebp; /* 0x100A7C6E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A7C70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A7C71: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A7C72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A7C72u);

L_100A7C72:
    PUSH32(esp, ebp); /* 0x100A7C72: push ebp */
    ebp = esp; /* 0x100A7C73: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x100A7C75: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x100A7C78: push esi */
    /* test ecx, ecx */ /* 0x100A7C79: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7C90; /* 0x100A7C7B: jne 0x100a7c90 */
L_100A7C7D:
    RECOMP_CALL(sub_1001177D); /* 0x100A7C7D: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A7C82: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A7C84: pop esi */
    MEM32(eax) = esi; /* 0x100A7C85: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A7C87: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A7C8C: mov eax, esi */
    goto L_100A7CAD; /* 0x100A7C8E: jmp 0x100a7cad */
L_100A7C90:
    eax = MEM32(0x100E0668); /* 0x100A7C90: mov eax, dword ptr [0x100e0668] */
    MEM32(ecx) = eax; /* 0x100A7C95: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x8); /* 0x100A7C97: mov eax, dword ptr [ebp + 8] */
    /* test eax, 0xFFFFFE7Fu */ /* 0x100A7C9A: test eax, 0xfffffe7f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFE7Fu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7C7D; /* 0x100A7C9F: jne 0x100a7c7d */
L_100A7CA1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x180u);
    eax = eax & 0x180u; /* 0x100A7CA1: and eax, 0x180 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E0668) = eax; /* 0x100A7CA6: mov dword ptr [0x100e0668], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100A7CAB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A7CAD:
    esi = POP32_VAL(esp); /* 0x100A7CAD: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A7CAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A7CAF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A7CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A7CB0u);

L_100A7CB0:
    PUSH32(esp, ebp); /* 0x100A7CB0: push ebp */
    ebp = esp; /* 0x100A7CB1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100A7CB3: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x100A7CB6: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x100A7CB9: mov dword ptr [eax], ecx */
    ebp = POP32_VAL(esp); /* 0x100A7CBB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A7CBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A7CBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A7CBDu);

L_100A7CBD:
    PUSH32(esp, ebp); /* 0x100A7CBD: push ebp */
    ebp = esp; /* 0x100A7CBE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB20u; /* 0x100A7CC0: sub esp, 0xb20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x100A7CC6: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x100A7CCB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x100A7CCD: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x100A7CD0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x100A7CD3: push ebx */
    PUSH32(esp, esi); /* 0x100A7CD4: push esi */
    esi = MEM32(ebp + 0xC); /* 0x100A7CD5: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x100A7CD8: push edi */
    PUSH32(esp, 3); /* 0x100A7CD9: push 3 */
    MEM32(ebp + (-0xB20)) = eax; /* 0x100A7CDB: mov dword ptr [ebp - 0xb20], eax */
    RECOMP_CALL(sub_1007B3D7); /* 0x100A7CE1: call 0x1007b3d7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100A7CE6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A7CE8: inc ebx */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x100A7CE9: pop ecx */
    /* cmp eax, ebx */ /* 0x100A7CEA: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A8275; /* 0x100A7CEC: je 0x100a8275 */
L_100A7CF2:
    PUSH32(esp, 3); /* 0x100A7CF2: push 3 */
    RECOMP_CALL(sub_1007B3D7); /* 0x100A7CF4: call 0x1007b3d7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A7CF9: pop ecx */
    /* test eax, eax */ /* 0x100A7CFA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7D0A; /* 0x100A7CFC: jne 0x100a7d0a */
L_100A7CFE:
    /* cmp MEM32(0x100DFDE8), ebx */ /* 0x100A7CFE: cmp dword ptr [0x100dfde8], ebx */
    _flag_a = (uint32_t)(MEM32(0x100DFDE8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A8275; /* 0x100A7D04: je 0x100a8275 */
L_100A7D0A:
    PUSH32(esp, 0x100A8358u); /* 0x100A7D0A: push 0x100a8358 */
    eax = ebp + (-0x484); /* 0x100A7D0F: lea eax, [ebp - 0x484] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A7D15: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x240u); /* 0x100A7D17: push 0x240 */
    PUSH32(esp, eax); /* 0x100A7D1C: push eax */
    MEM32(ebp + (-0xB1C)) = edi; /* 0x100A7D1D: mov dword ptr [ebp - 0xb1c], edi */
    RECOMP_CALL(sub_10011693); /* 0x100A7D23: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7D28: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7D2B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A7D2D: jne 0x100a8338 */
L_100A7D33:
    PUSH32(esp, MEM32(0x100E1908)); /* 0x100A7D33: push dword ptr [0x100e1908] */
    eax = ebp + (-0x484); /* 0x100A7D39: lea eax, [ebp - 0x484] */
    PUSH32(esp, 0x240u); /* 0x100A7D3F: push 0x240 */
    PUSH32(esp, eax); /* 0x100A7D44: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A7D45: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7D4A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7D4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A7D4F: jne 0x100a8338 */
L_100A7D55:
    PUSH32(esp, 0x100A837Cu); /* 0x100A7D55: push 0x100a837c */
    eax = ebp + (-0x484); /* 0x100A7D5A: lea eax, [ebp - 0x484] */
    PUSH32(esp, 0x240u); /* 0x100A7D60: push 0x240 */
    PUSH32(esp, eax); /* 0x100A7D65: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A7D66: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7D6B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7D6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A7D70: jne 0x100a8338 */
L_100A7D76:
    eax = ebp + (-0xB1C); /* 0x100A7D76: lea eax, [ebp - 0xb1c] */
    PUSH32(esp, eax); /* 0x100A7D7C: push eax */
    PUSH32(esp, MEM32(ebp + 0x4)); /* 0x100A7D7D: push dword ptr [ebp + 4] */
    PUSH32(esp, 6); /* 0x100A7D80: push 6 */
    RECOMP_ICALL(MEM32(0x100E5018)); /* 0x100A7D82: call dword ptr [0x100e5018] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A7D88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7D90; /* 0x100A7D8A: jne 0x100a7d90 */
L_100A7D8C:
    eax = edi; /* 0x100A7D8C: mov eax, edi */
    goto L_100A7DA5; /* 0x100A7D8E: jmp 0x100a7da5 */
L_100A7D90:
    eax = MEM32(ebp + (-0xB1C)); /* 0x100A7D90: mov eax, dword ptr [ebp - 0xb1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x10000000u; /* 0x100A7D96: sub eax, 0x10000000 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A7D9B: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A7D9D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xB1C)));
    eax = eax & MEM32(ebp + (-0xB1C)); /* 0x100A7D9F: and eax, dword ptr [ebp - 0xb1c] */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A7DA5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100A7DA5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB1C)) = eax; /* 0x100A7DA7: mov dword ptr [ebp - 0xb1c], eax */
    MEM16(ebp + (-0x488)) = (uint16_t)(LO16(ecx)); /* 0x100A7DAD: mov word ptr [ebp - 0x488], cx */
    ecx = ebp + (-0x690); /* 0x100A7DB4: lea ecx, [ebp - 0x690] */
    PUSH32(esp, 0x104u); /* 0x100A7DBA: push 0x104 */
    PUSH32(esp, ecx); /* 0x100A7DBF: push ecx */
    PUSH32(esp, eax); /* 0x100A7DC0: push eax */
    RECOMP_ICALL(MEM32(0x100E5050)); /* 0x100A7DC1: call dword ptr [0x100e5050] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A7DC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A7DEC; /* 0x100A7DC9: jne 0x100a7dec */
L_100A7DCB:
    PUSH32(esp, 0x100620B8u); /* 0x100A7DCB: push 0x100620b8 */
    eax = ebp + (-0x690); /* 0x100A7DD0: lea eax, [ebp - 0x690] */
    PUSH32(esp, 0x105u); /* 0x100A7DD6: push 0x105 */
    PUSH32(esp, eax); /* 0x100A7DDB: push eax */
    RECOMP_CALL(sub_10011693); /* 0x100A7DDC: call 0x10011693 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7DE1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7DE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A7DE6: jne 0x100a8338 */
L_100A7DEC:
    eax = ebp + (-0x690); /* 0x100A7DEC: lea eax, [ebp - 0x690] */
    PUSH32(esp, eax); /* 0x100A7DF2: push eax */
    MEM32(ebp + (-0xB14)) = eax; /* 0x100A7DF3: mov dword ptr [ebp - 0xb14], eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A7DF9: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xBu; /* 0x100A7DFE: add eax, 0xb */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x100A7E01: pop ecx */
    /* cmp eax, 0x40u */ /* 0x100A7E02: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A7E4F; /* 0x100A7E05: jbe 0x100a7e4f */
L_100A7E07:
    eax = ebp + (-0x690); /* 0x100A7E07: lea eax, [ebp - 0x690] */
    PUSH32(esp, eax); /* 0x100A7E0D: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A7E0E: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x690); /* 0x100A7E13: lea ecx, [ebp - 0x690] */
    PUSH32(esp, 6); /* 0x100A7E19: push 6 */
    PUSH32(esp, MEM32(0x100E1900)); /* 0x100A7E1B: push dword ptr [0x100e1900] */
    edx = ebp + eax * 2 + (-0x6FA); /* 0x100A7E21: lea edx, [ebp + eax*2 - 0x6fa] */
    eax = edx; /* 0x100A7E28: mov eax, edx */
    MEM32(ebp + (-0xB14)) = edx; /* 0x100A7E2A: mov dword ptr [ebp - 0xb14], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100A7E30: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = 0x105u; /* 0x100A7E32: mov ecx, 0x105 */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x100A7E37: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100A7E39: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x100A7E3B: add ecx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x100A7E3D: push ecx */
    PUSH32(esp, edx); /* 0x100A7E3E: push edx */
    RECOMP_CALL(sub_1000F62F); /* 0x100A7E3F: call 0x1000f62f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A7E44: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7E47: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A7E49: jne 0x100a8338 */
L_100A7E4F:
    PUSH32(esp, MEM32(ebp + (-0xB14))); /* 0x100A7E4F: push dword ptr [ebp - 0xb14] */
    eax = ebp + (-0x484); /* 0x100A7E55: lea eax, [ebp - 0x484] */
    PUSH32(esp, 0x240u); /* 0x100A7E5B: push 0x240 */
    PUSH32(esp, eax); /* 0x100A7E60: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A7E61: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7E66: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7E69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A7E6B: jne 0x100a8338 */
L_100A7E71:
    PUSH32(esp, MEM32(0x100E1904)); /* 0x100A7E71: push dword ptr [0x100e1904] */
    eax = ebp + (-0x484); /* 0x100A7E77: lea eax, [ebp - 0x484] */
    PUSH32(esp, 0x240u); /* 0x100A7E7D: push 0x240 */
    PUSH32(esp, eax); /* 0x100A7E82: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A7E83: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7E88: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7E8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A7E8D: jne 0x100a8338 */
L_100A7E93:
    PUSH32(esp, 0x100A8390u); /* 0x100A7E93: push 0x100a8390 */
    eax = ebp + (-0x484); /* 0x100A7E98: lea eax, [ebp - 0x484] */
    PUSH32(esp, 0x240u); /* 0x100A7E9E: push 0x240 */
    PUSH32(esp, eax); /* 0x100A7EA3: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A7EA4: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7EA9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7EAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A7EAE: jne 0x100a8338 */
L_100A7EB4:
    PUSH32(esp, esi); /* 0x100A7EB4: push esi */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A7EB5: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x100A7EBA: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x100A7EBD: pop ecx */
    PUSH32(esp, esi); /* 0x100A7EBE: push esi */
    /* cmp eax, 0x40u */ /* 0x100A7EBF: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A81B6; /* 0x100A7EC2: jbe 0x100a81b6 */
L_100A7EC8:
    RECOMP_CALL(sub_1000F1F3); /* 0x100A7EC8: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A7ECD: pop ecx */
    PUSH32(esp, 0x5Cu); /* 0x100A7ECE: push 0x5c */
    edx = POP32_VAL(esp); /* 0x100A7ED0: pop edx */
    ecx = (uint32_t)MEM16(esi + eax * 2 + (-0x2)); /* 0x100A7ED1: movzx ecx, word ptr [esi + eax*2 - 2] */
    MEM32(ebp + (-0xB14)) = eax; /* 0x100A7ED6: mov dword ptr [ebp - 0xb14], eax */
    MEM32(ebp + (-0xB18)) = edx; /* 0x100A7EDC: mov dword ptr [ebp - 0xb18], edx */
    /* cmp LO16(ecx), LO16(edx) */ /* 0x100A7EE2: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A7F15; /* 0x100A7EE5: je 0x100a7f15 */
L_100A7EE7:
    edi = eax; /* 0x100A7EE7: mov edi, eax */
    edx = ecx; /* 0x100A7EE9: mov edx, ecx */
    ecx = edi + (-0x1); /* 0x100A7EEB: lea ecx, [edi - 1] */
    ecx = esi + ecx * 2; /* 0x100A7EEE: lea ecx, [esi + ecx*2] */
L_100A7EF1:
    /* cmp LO16(edx), 0x2Fu */ /* 0x100A7EF1: cmp dx, 0x2f */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0x2Fu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A7F0D; /* 0x100A7EF5: je 0x100a7f0d */
L_100A7EF7:
    /* cmp ebx, edi */ /* 0x100A7EF7: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A7F0D; /* 0x100A7EF9: jae 0x100a7f0d */
L_100A7EFB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x100A7EFB: sub ecx, 2 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A7EFE: inc ebx */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM16(ecx); /* 0x100A7EFF: movzx eax, word ptr [ecx] */
    edx = eax; /* 0x100A7F02: mov edx, eax */
    /* cmp LO16(eax), MEM16(ebp + (-0xB18)) */ /* 0x100A7F04: cmp ax, word ptr [ebp - 0xb18] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0xB18))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A7EF1; /* 0x100A7F0B: jne 0x100a7ef1 */
L_100A7F0D:
    eax = MEM32(ebp + (-0xB14)); /* 0x100A7F0D: mov eax, dword ptr [ebp - 0xb14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A7F13: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A7F15:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x100A7F15: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xB18)) = eax; /* 0x100A7F17: mov dword ptr [ebp - 0xb18], eax */
    /* cmp eax, 0x26u */ /* 0x100A7F1D: cmp eax, 0x26 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x26u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A8161; /* 0x100A7F20: jbe 0x100a8161 */
L_100A7F26:
    /* cmp ebx, 0x12u */ /* 0x100A7F26: cmp ebx, 0x12 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100A815E; /* 0x100A7F29: jae 0x100a815e */
L_100A7F2F:
    PUSH32(esp, 0x35u); /* 0x100A7F2F: push 0x35 */
    eax = POP32_VAL(esp); /* 0x100A7F31: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x100A7F32: sub eax, ebx */
    _flag_k = FK_CMP;
    ebx = 0x240u; /* 0x100A7F34: mov ebx, 0x240 */
    PUSH32(esp, eax); /* 0x100A7F39: push eax */
    PUSH32(esp, esi); /* 0x100A7F3A: push esi */
    eax = ebp + (-0x484); /* 0x100A7F3B: lea eax, [ebp - 0x484] */
    PUSH32(esp, ebx); /* 0x100A7F41: push ebx */
    PUSH32(esp, eax); /* 0x100A7F42: push eax */
    RECOMP_CALL(sub_10020B38); /* 0x100A7F43: call 0x10020b38 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A7F48: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7F4B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A7F4D: jne 0x100a8338 */
L_100A7F53:
    PUSH32(esp, MEM32(0x100E1900)); /* 0x100A7F53: push dword ptr [0x100e1900] */
    eax = ebp + (-0x484); /* 0x100A7F59: lea eax, [ebp - 0x484] */
    PUSH32(esp, ebx); /* 0x100A7F5F: push ebx */
    PUSH32(esp, eax); /* 0x100A7F60: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A7F61: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7F66: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7F69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A7F6B: jne 0x100a8338 */
L_100A7F71:
    eax = MEM32(ebp + (-0xB18)); /* 0x100A7F71: mov eax, dword ptr [ebp - 0xb18] */
L_100A7F77:
    eax = esi + eax * 2; /* 0x100A7F77: lea eax, [esi + eax*2] */
    PUSH32(esp, eax); /* 0x100A7F7A: push eax */
L_100A7F7B:
    eax = ebp + (-0x484); /* 0x100A7F7B: lea eax, [ebp - 0x484] */
    PUSH32(esp, ebx); /* 0x100A7F81: push ebx */
    PUSH32(esp, eax); /* 0x100A7F82: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A7F83: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7F88: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7F8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A7F8D: jne 0x100a8338 */
L_100A7F93:
    PUSH32(esp, MEM32(0x100E1904)); /* 0x100A7F93: push dword ptr [0x100e1904] */
    eax = ebp + (-0x484); /* 0x100A7F99: lea eax, [ebp - 0x484] */
    PUSH32(esp, ebx); /* 0x100A7F9F: push ebx */
    PUSH32(esp, eax); /* 0x100A7FA0: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A7FA1: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7FA6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7FA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A7FAB: jne 0x100a8338 */
L_100A7FB1:
    PUSH32(esp, 0x100A83A0u); /* 0x100A7FB1: push 0x100a83a0 */
    eax = ebp + (-0x484); /* 0x100A7FB6: lea eax, [ebp - 0x484] */
    PUSH32(esp, ebx); /* 0x100A7FBC: push ebx */
    PUSH32(esp, eax); /* 0x100A7FBD: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A7FBE: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A7FC3: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A7FC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A7FC8: jne 0x100a8338 */
L_100A7FCE:
    eax = ebp + (-0x484); /* 0x100A7FCE: lea eax, [ebp - 0x484] */
    PUSH32(esp, 0xAu); /* 0x100A7FD4: push 0xa */
    PUSH32(esp, eax); /* 0x100A7FD6: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A7FD7: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A7FDC: pop ecx */
    ecx = ebx; /* 0x100A7FDD: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100A7FDF: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = ebp + (-0x484); /* 0x100A7FE1: lea eax, [ebp - 0x484] */
    PUSH32(esp, ecx); /* 0x100A7FE7: push ecx */
    PUSH32(esp, eax); /* 0x100A7FE8: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A7FE9: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A7FEE: pop ecx */
    eax = ebp + eax * 2 + (-0x484); /* 0x100A7FEF: lea eax, [ebp + eax*2 - 0x484] */
    PUSH32(esp, eax); /* 0x100A7FF6: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A7FF7: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1001CB95); /* 0x100A7FFA: call 0x1001cb95 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A7FFF: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A8002: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A8004: jne 0x100a8338 */
L_100A800A:
    PUSH32(esp, MEM32(0x100E1908)); /* 0x100A800A: push dword ptr [0x100e1908] */
    eax = ebp + (-0x484); /* 0x100A8010: lea eax, [ebp - 0x484] */
    PUSH32(esp, ebx); /* 0x100A8016: push ebx */
    PUSH32(esp, eax); /* 0x100A8017: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A8018: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A801D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A8020: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A8022: jne 0x100a8338 */
L_100A8028:
    PUSH32(esp, 0x100A83B0u); /* 0x100A8028: push 0x100a83b0 */
    eax = ebp + (-0x484); /* 0x100A802D: lea eax, [ebp - 0x484] */
    PUSH32(esp, ebx); /* 0x100A8033: push ebx */
    PUSH32(esp, eax); /* 0x100A8034: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A8035: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A803A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A803D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A803F: jne 0x100a8338 */
L_100A8045:
    ebx = MEM32(ebp + (-0xB20)); /* 0x100A8045: mov ebx, dword ptr [ebp - 0xb20] */
    PUSH32(esp, ebx); /* 0x100A804B: push ebx */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A804C: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A8051: mov esi, eax */
    eax = ebp + (-0x484); /* 0x100A8053: lea eax, [ebp - 0x484] */
    PUSH32(esp, eax); /* 0x100A8059: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A805A: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xB0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xB0u; /* 0x100A805F: add esi, 0xb0 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x100A8065: add eax, esi */
    _flag_k = FK_ADD;
    esi = 0x240u; /* 0x100A8067: mov esi, 0x240 */
    ecx = POP32_VAL(esp); /* 0x100A806C: pop ecx */
    /* cmp eax, esi */ /* 0x100A806D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x484); /* 0x100A806F: lea eax, [ebp - 0x484] */
    ecx = POP32_VAL(esp); /* 0x100A8075: pop ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A824E; /* 0x100A8076: jbe 0x100a824e */
L_100A807C:
    PUSH32(esp, eax); /* 0x100A807C: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A807D: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = 0x18Du; /* 0x100A8082: mov ecx, 0x18d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x100A8087: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = ebp + (-0x484); /* 0x100A8089: lea eax, [ebp - 0x484] */
    PUSH32(esp, ecx); /* 0x100A808F: push ecx */
    PUSH32(esp, ebx); /* 0x100A8090: push ebx */
    PUSH32(esp, esi); /* 0x100A8091: push esi */
    PUSH32(esp, eax); /* 0x100A8092: push eax */
    RECOMP_CALL(sub_10020B38); /* 0x100A8093: call 0x10020b38 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A8098: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A809B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A809D: jne 0x100a8338 */
L_100A80A3:
    PUSH32(esp, MEM32(0x100E1900)); /* 0x100A80A3: push dword ptr [0x100e1900] */
    eax = ebp + (-0x484); /* 0x100A80A9: lea eax, [ebp - 0x484] */
L_100A80AF:
    PUSH32(esp, esi); /* 0x100A80AF: push esi */
    PUSH32(esp, eax); /* 0x100A80B0: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A80B1: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A80B6: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A80B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A80BB: jne 0x100a8338 */
L_100A80C1:
    PUSH32(esp, MEM32(0x100E1908)); /* 0x100A80C1: push dword ptr [0x100e1908] */
    eax = ebp + (-0x484); /* 0x100A80C7: lea eax, [ebp - 0x484] */
    PUSH32(esp, esi); /* 0x100A80CD: push esi */
    PUSH32(esp, eax); /* 0x100A80CE: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A80CF: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A80D4: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A80D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A80D9: jne 0x100a8338 */
L_100A80DF:
    PUSH32(esp, 0x100A83D0u); /* 0x100A80DF: push 0x100a83d0 */
    eax = ebp + (-0x484); /* 0x100A80E4: lea eax, [ebp - 0x484] */
    PUSH32(esp, esi); /* 0x100A80EA: push esi */
    PUSH32(esp, eax); /* 0x100A80EB: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A80EC: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A80F1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A80F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A80F6: jne 0x100a8338 */
L_100A80FC:
    PUSH32(esp, MEM32(0x100E1908)); /* 0x100A80FC: push dword ptr [0x100e1908] */
    eax = ebp + (-0x484); /* 0x100A8102: lea eax, [ebp - 0x484] */
    PUSH32(esp, esi); /* 0x100A8108: push esi */
    PUSH32(esp, eax); /* 0x100A8109: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A810A: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A810F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A8112: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A8114: jne 0x100a8338 */
L_100A811A:
    PUSH32(esp, 0x100A84B0u); /* 0x100A811A: push 0x100a84b0 */
    eax = ebp + (-0x484); /* 0x100A811F: lea eax, [ebp - 0x484] */
    PUSH32(esp, esi); /* 0x100A8125: push esi */
    PUSH32(esp, eax); /* 0x100A8126: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A8127: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A812C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A812F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A8131: jne 0x100a8338 */
L_100A8137:
    PUSH32(esp, 0x00012012u); /* 0x100A8137: push 0x12012 */
    eax = ebp + (-0x484); /* 0x100A813C: lea eax, [ebp - 0x484] */
    PUSH32(esp, 0x100620E8u); /* 0x100A8142: push 0x100620e8 */
    PUSH32(esp, eax); /* 0x100A8147: push eax */
    RECOMP_CALL(sub_100A4E66); /* 0x100A8148: call 0x100a4e66 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A814D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 3 */ /* 0x100A8150: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A8342; /* 0x100A8153: je 0x100a8342 */
L_100A8159:
    goto L_100A8254; /* 0x100A8159: jmp 0x100a8254 */
L_100A815E:
    /* cmp eax, 0x26u */ /* 0x100A815E: cmp eax, 0x26 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x26u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_100A8161:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A81C0; /* 0x100A8161: jae 0x100a81c0 */
L_100A8163:
    PUSH32(esp, 0x35u); /* 0x100A8163: push 0x35 */
    eax = POP32_VAL(esp); /* 0x100A8165: pop eax */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x100A8166: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x100A8166: shr ebx, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x100A8168: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x100A816A: push eax */
    PUSH32(esp, esi); /* 0x100A816B: push esi */
    eax = ebp + (-0x484); /* 0x100A816C: lea eax, [ebp - 0x484] */
    PUSH32(esp, 0x240u); /* 0x100A8172: push 0x240 */
    PUSH32(esp, eax); /* 0x100A8177: push eax */
    RECOMP_CALL(sub_10020B38); /* 0x100A8178: call 0x10020b38 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A817D: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A8180: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A8182: jne 0x100a8338 */
L_100A8188:
    PUSH32(esp, MEM32(0x100E1900)); /* 0x100A8188: push dword ptr [0x100e1900] */
    eax = ebp + (-0x484); /* 0x100A818E: lea eax, [ebp - 0x484] */
    PUSH32(esp, 0x240u); /* 0x100A8194: push 0x240 */
    PUSH32(esp, eax); /* 0x100A8199: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A819A: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A819F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A81A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A81A4: jne 0x100a8338 */
L_100A81AA:
    eax = MEM32(ebp + (-0xB14)); /* 0x100A81AA: mov eax, dword ptr [ebp - 0xb14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x100A81B0: sub eax, ebx */
    _flag_k = FK_CMP;
    eax = esi + eax * 2; /* 0x100A81B2: lea eax, [esi + eax*2] */
    PUSH32(esp, eax); /* 0x100A81B5: push eax */
L_100A81B6:
    ebx = 0x240u; /* 0x100A81B6: mov ebx, 0x240 */
    RECOMP_BACKEDGE();
    goto L_100A7F7B; /* 0x100A81BB: jmp 0x100a7f7b */
L_100A81C0:
    PUSH32(esp, 0x23u); /* 0x100A81C0: push 0x23 */
    PUSH32(esp, esi); /* 0x100A81C2: push esi */
    ebx = 0x240u; /* 0x100A81C3: mov ebx, 0x240 */
    eax = ebp + (-0x484); /* 0x100A81C8: lea eax, [ebp - 0x484] */
    PUSH32(esp, ebx); /* 0x100A81CE: push ebx */
    PUSH32(esp, eax); /* 0x100A81CF: push eax */
    RECOMP_CALL(sub_10020B38); /* 0x100A81D0: call 0x10020b38 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A81D5: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A81D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A81DA: jne 0x100a8338 */
L_100A81E0:
    PUSH32(esp, MEM32(0x100E1900)); /* 0x100A81E0: push dword ptr [0x100e1900] */
    eax = ebp + (-0x484); /* 0x100A81E6: lea eax, [ebp - 0x484] */
    PUSH32(esp, ebx); /* 0x100A81EC: push ebx */
    PUSH32(esp, eax); /* 0x100A81ED: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A81EE: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A81F3: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A81F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A81F8: jne 0x100a8338 */
L_100A81FE:
    eax = MEM32(ebp + (-0xB18)); /* 0x100A81FE: mov eax, dword ptr [ebp - 0xb18] */
    PUSH32(esp, 8); /* 0x100A8204: push 8 */
    eax = esi + eax * 2; /* 0x100A8206: lea eax, [esi + eax*2] */
    PUSH32(esp, eax); /* 0x100A8209: push eax */
    eax = ebp + (-0x484); /* 0x100A820A: lea eax, [ebp - 0x484] */
    PUSH32(esp, ebx); /* 0x100A8210: push ebx */
    PUSH32(esp, eax); /* 0x100A8211: push eax */
    RECOMP_CALL(sub_10020B38); /* 0x100A8212: call 0x10020b38 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A8217: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A821A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A821C: jne 0x100a8338 */
L_100A8222:
    PUSH32(esp, MEM32(0x100E1900)); /* 0x100A8222: push dword ptr [0x100e1900] */
    eax = ebp + (-0x484); /* 0x100A8228: lea eax, [ebp - 0x484] */
    PUSH32(esp, ebx); /* 0x100A822E: push ebx */
    PUSH32(esp, eax); /* 0x100A822F: push eax */
    RECOMP_CALL(sub_1001212A); /* 0x100A8230: call 0x1001212a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100A8235: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A8238: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8338; /* 0x100A823A: jne 0x100a8338 */
L_100A8240:
    eax = MEM32(ebp + (-0xB14)); /* 0x100A8240: mov eax, dword ptr [ebp - 0xb14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF9u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFF9u; /* 0x100A8246: add eax, -7 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_100A7F77; /* 0x100A8249: jmp 0x100a7f77 */
L_100A824E:
    PUSH32(esp, ebx); /* 0x100A824E: push ebx */
    RECOMP_BACKEDGE();
    goto L_100A80AF; /* 0x100A824F: jmp 0x100a80af */
L_100A8254:
    /* cmp eax, 4 */ /* 0x100A8254: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A826B; /* 0x100A8257: jne 0x100a826b */
L_100A8259:
    void_lift_trap(0x100A8259u, "int3 ");
L_100A825A:
    ecx = MEM32(ebp + (-0x4)); /* 0x100A825A: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x100A825D: pop edi */
    esi = POP32_VAL(esp); /* 0x100A825E: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100A825F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x100A8261: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x100A8262: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x100A8267: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100A8269: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A826A: ret  */
L_100A826B:
    /* cmp eax, 5 */ /* 0x100A826B: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A825A; /* 0x100A826E: je 0x100a825a */
L_100A8270:
    goto L_100A8351; /* 0x100A8270: jmp 0x100a8351 */
L_100A8275:
    PUSH32(esp, 0xFFFFFFF4u); /* 0x100A8275: push -0xc */
    RECOMP_ICALL(MEM32(0x100E5058)); /* 0x100A8277: call dword ptr [0x100e5058] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100A827D: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A827F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x100A8281: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A82E5; /* 0x100A8284: je 0x100a82e5 */
L_100A8286:
    /* test ebx, ebx */ /* 0x100A8286: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A82E5; /* 0x100A8288: je 0x100a82e5 */
L_100A828A:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A828A: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0xB10); /* 0x100A828D: lea eax, [ebp - 0xb10] */
    PUSH32(esp, esi); /* 0x100A8293: push esi */
    PUSH32(esp, MEM32(ebp + (-0xB20))); /* 0x100A8294: push dword ptr [ebp - 0xb20] */
    PUSH32(esp, 0x100E18B0u); /* 0x100A829A: push 0x100e18b0 */
    PUSH32(esp, 0x240u); /* 0x100A829F: push 0x240 */
    PUSH32(esp, eax); /* 0x100A82A4: push eax */
    RECOMP_CALL(sub_100A852A); /* 0x100A82A5: call 0x100a852a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100A82AA: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A82AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100A82E5; /* 0x100A82AF: js 0x100a82e5 */
L_100A82B1:
    PUSH32(esp, ebx); /* 0x100A82B1: push ebx */
    RECOMP_ICALL(MEM32(0x100E5210)); /* 0x100A82B2: call dword ptr [0x100e5210] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 2 */ /* 0x100A82B8: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A82E5; /* 0x100A82BB: jne 0x100a82e5 */
L_100A82BD:
    PUSH32(esp, edi); /* 0x100A82BD: push edi */
    eax = ebp + (-0xB18); /* 0x100A82BE: lea eax, [ebp - 0xb18] */
    PUSH32(esp, eax); /* 0x100A82C4: push eax */
    eax = ebp + (-0xB10); /* 0x100A82C5: lea eax, [ebp - 0xb10] */
    PUSH32(esp, eax); /* 0x100A82CB: push eax */
    RECOMP_CALL(sub_1000F1F3); /* 0x100A82CC: call 0x1000f1f3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A82D1: pop ecx */
    PUSH32(esp, eax); /* 0x100A82D2: push eax */
    eax = ebp + (-0xB10); /* 0x100A82D3: lea eax, [ebp - 0xb10] */
    PUSH32(esp, eax); /* 0x100A82D9: push eax */
    PUSH32(esp, ebx); /* 0x100A82DA: push ebx */
    RECOMP_ICALL(MEM32(0x100E5258)); /* 0x100A82DB: call dword ptr [0x100e5258] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100A82E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8351; /* 0x100A82E3: jne 0x100a8351 */
L_100A82E5:
    RECOMP_CALL(sub_100142B5); /* 0x100A82E5: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    /* test MEM32(eax + 0x4C), 0x10Cu */ /* 0x100A82EA: test dword ptr [eax + 0x4c], 0x10c */
    _flag_a = (uint32_t)(MEM32(eax + 0x4C)); _flag_b = (uint32_t)(0x10Cu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8308; /* 0x100A82F1: jne 0x100a8308 */
L_100A82F3:
    PUSH32(esp, edi); /* 0x100A82F3: push edi */
    PUSH32(esp, 4); /* 0x100A82F4: push 4 */
    PUSH32(esp, edi); /* 0x100A82F6: push edi */
    RECOMP_CALL(sub_100142B5); /* 0x100A82F7: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x100A82FC: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100A82FF: push eax */
    RECOMP_CALL(sub_1002FCDA); /* 0x100A8300: call 0x1002fcda */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100A8305: add esp, 0x10 */
    _flag_k = FK_ADD;
L_100A8308:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A8308: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x100A830B: push esi */
    PUSH32(esp, MEM32(ebp + (-0xB20))); /* 0x100A830C: push dword ptr [ebp - 0xb20] */
    PUSH32(esp, 0x100E18B0u); /* 0x100A8312: push 0x100e18b0 */
    RECOMP_CALL(sub_100142B5); /* 0x100A8317: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x100A831C: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100A831F: push eax */
    RECOMP_CALL(sub_10082828); /* 0x100A8320: call 0x10082828 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100142B5); /* 0x100A8325: call 0x100142b5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x100A832A: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100A832D: push eax */
    RECOMP_CALL(sub_10020A94); /* 0x100A832E: call 0x10020a94 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100A8333: add esp, 0x18 */
    _flag_k = FK_ADD;
    goto L_100A8351; /* 0x100A8336: jmp 0x100a8351 */
L_100A8338:
    PUSH32(esp, edi); /* 0x100A8338: push edi */
    PUSH32(esp, edi); /* 0x100A8339: push edi */
    PUSH32(esp, edi); /* 0x100A833A: push edi */
    PUSH32(esp, edi); /* 0x100A833B: push edi */
    PUSH32(esp, edi); /* 0x100A833C: push edi */
    RECOMP_CALL(sub_100A469B); /* 0x100A833D: call 0x100a469b */
    RECOMP_FLAGS_IN();
L_100A8342:
    PUSH32(esp, 0x16u); /* 0x100A8342: push 0x16 */
    RECOMP_CALL(sub_100A491C); /* 0x100A8344: call 0x100a491c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A8349: pop ecx */
    PUSH32(esp, 3); /* 0x100A834A: push 3 */
    RECOMP_CALL(sub_1007BBB8); /* 0x100A834C: call 0x1007bbb8 */
    RECOMP_FLAGS_IN();
L_100A8351:
    RECOMP_CALL(sub_100A763E); /* 0x100A8351: call 0x100a763e */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A8356u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A8358(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A8358u);

L_100A8358:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100A8358: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100A8359: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A835E; /* 0x100A835C: jae 0x100a835e */
L_100A835E:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100A835E: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A8364; /* 0x100A8362: je 0x100a8364 */
L_100A8364:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A8364: imul eax, dword ptr [eax], 0x6e006f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A836A: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A836C: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0065006Cu); /* 0x100A8370: imul eax, dword ptr [eax], 0x65006c */
    _flag_a = (uint32_t)(MEM8(FS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (ecx)) = (uint8_t)(MEM8(FS_BASE + (ecx)) + HI8(eax)); /* 0x100A8376: add byte ptr fs:[ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A8379: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(edx)); /* 0x100A837B: add byte ptr [eax], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8380; /* 0x100A837E: jb 0x100a8380 */
L_100A8380:
    /* outsd: no port I/O under Win32 */ /* 0x100A8380: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x100A8381: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8386; /* 0x100A8384: jb 0x100a8386 */
L_100A8386:
    POPAD(); /* 0x100A8386: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8387: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A838A: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A838C: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A838E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A8390: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A8391: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A8394u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8395: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A8398: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A839A: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A839C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100A839E: nop  */
    /* nop */ /* 0x100A839F: nop  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x100A83A0: dec esp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A83A1: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A83A4: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A83A5: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A83A8: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83AA: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A83AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100A83AE: nop  */
    /* nop */ /* 0x100A83AF: nop  */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100A83B0: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ebx)); /* 0x100A83B1: add byte ptr [eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A83B6; /* 0x100A83B4: jo 0x100a83b6 */
L_100A83B6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A83B8; /* 0x100A83B6: jb 0x100a83b8 */
L_100A83B8:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebx)) = (uint8_t)(MEM8(GS_BASE + (ebx)) + HI8(edx)); /* 0x100A83B8: add byte ptr gs:[ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A83BE; /* 0x100A83BC: jae 0x100a83be */
L_100A83BE:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A83BE: imul eax, dword ptr [eax], 0x6e006f */
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A83C4: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83C6: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A83C8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100A83CA: nop  */
    /* nop */ /* 0x100A83CB: nop  */
    /* nop */ /* 0x100A83CC: nop  */
    /* nop */ /* 0x100A83CD: nop  */
    /* nop */ /* 0x100A83CE: nop  */
    /* nop */ /* 0x100A83CF: nop  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A83D0: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A83D1: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A83D6; /* 0x100A83D4: jb 0x100a83d6 */
L_100A83D6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83D6: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0066006Eu); /* 0x100A83D8: imul eax, dword ptr [eax], 0x66006e */
    /* outsd: no port I/O under Win32 */ /* 0x100A83DE: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A83DF: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A83E2u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A83E3: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A83E8; /* 0x100A83E6: je 0x100a83e8 */
L_100A83E8:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A83E8: imul eax, dword ptr [eax], 0x6e006f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83EE: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A83F0: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A83F1: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83F4: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0x77006F00u); /* 0x100A83F6: push 0x77006f00 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A83FB: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ebx)); /* 0x100A83FD: add byte ptr [ecx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A8400: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A8401: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8406; /* 0x100A8404: jb 0x100a8406 */
L_100A8406:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8406: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (CMP_O(_flag_a, _flag_b)) goto L_100A840A; /* 0x100A8408: jo 0x100a840a */
L_100A840A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A840C; /* 0x100A840A: jb 0x100a840c */
L_100A840C:
    /* outsd: no port I/O under Win32 */ /* 0x100A840C: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x100A840D: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8412; /* 0x100A8410: jb 0x100a8412 */
L_100A8412:
    POPAD(); /* 0x100A8412: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8413: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8416: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8418u, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A841A: popal  */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A841B: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A841E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8420u, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A8422: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A8423: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A8428; /* 0x100A8426: jae 0x100a8428 */
L_100A8428:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x100A8428: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A842B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A842E: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A842F: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A8431: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A8436; /* 0x100A8434: jae 0x100a8436 */
L_100A8436:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A8438; /* 0x100A8436: jae 0x100a8438 */
L_100A8438:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100A8438: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A843E; /* 0x100A843C: je 0x100a843e */
L_100A843E:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A843E: imul eax, dword ptr [eax], 0x6e006f */
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x100A8444: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A8446: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0075006Cu); /* 0x100A844A: imul eax, dword ptr [eax], 0x75006c */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8452; /* 0x100A8450: jb 0x100a8452 */
L_100A8452:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + eax))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax + eax)) = (uint8_t)(MEM8(GS_BASE + (eax + eax)) + HI8(ecx)); /* 0x100A8452: add byte ptr gs:[eax + eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8456: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A845A; /* 0x100A8458: jae 0x100a845a */
L_100A845A:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp)) = (uint8_t)(MEM8(GS_BASE + (ebp)) + HI8(eax)); /* 0x100A845A: add byte ptr gs:[ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A845E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A8462; /* 0x100A8460: je 0x100a8462 */
L_100A8462:
    PUSH32(esp, 0x20006500u); /* 0x100A8462: push 0x20006500 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(edx)); /* 0x100A8467: add byte ptr [esi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x00750073u); /* 0x100A846A: imul eax, dword ptr [eax], 0x750073 */
    POPAD(); /* 0x100A8470: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x20) = (uint8_t)(MEM8(eax + eax + 0x20) + HI8(ecx)); /* 0x100A8471: add byte ptr [eax + eax + 0x20], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A8475: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(eax); /* 0x100A8478: sub eax, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(eax); /* 0x100A847A: sub eax, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A847C: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (edi))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (edi)) = (uint8_t)(MEM8(FS_BASE + (edi)) + HI8(ecx)); /* 0x100A847E: add byte ptr fs:[edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A8482u, "arpl word ptr [eax], ax");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A8486; /* 0x100A8484: jne 0x100a8486 */
L_100A8486:
    void_lift_trap(0x100A8486u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8487: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A848A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x61)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x61) = (uint8_t)(MEM8(eax + eax + 0x61) + HI8(edx)); /* 0x100A848B: add byte ptr [eax + eax + 0x61], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x69)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x69) = (uint8_t)(MEM8(eax + eax + 0x69) + HI8(edx)); /* 0x100A848F: add byte ptr [eax + eax + 0x69], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A8493: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A8496: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A8497: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A8499: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A849C: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A849D: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A849F: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A84A4; /* 0x100A84A2: jae 0x100a84a4 */
L_100A84A4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A84A6; /* 0x100A84A4: jae 0x100a84a6 */
L_100A84A6:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100A84A6: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A84AC; /* 0x100A84AA: je 0x100a84ac */
L_100A84AC:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A84AE; /* 0x100A84AC: jae 0x100a84ae */
L_100A84AE:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A84AE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax) = (uint8_t)(MEM8(eax) - LO8(eax)); /* 0x100A84B0: sub byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, eax); /* 0x100A84B2: push eax */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A84B3: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebx)) = (uint8_t)(MEM8(GS_BASE + (ebx)) + HI8(edx)); /* 0x100A84B6: add byte ptr gs:[ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A84BC; /* 0x100A84BA: jae 0x100a84bc */
L_100A84BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84BC: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edx); /* 0x100A84BE: push edx */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A84BF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A84C4; /* 0x100A84C2: je 0x100a84c4 */
L_100A84C4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A84C6; /* 0x100A84C4: jb 0x100a84c6 */
L_100A84C6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_100A84C8; /* 0x100A84C6: jns 0x100a84c8 */
L_100A84C8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84C8: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A84CC; /* 0x100A84CA: je 0x100a84cc */
L_100A84CC:
    /* outsd: no port I/O under Win32 */ /* 0x100A84CC: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A84CD: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x65) = (uint8_t)(MEM8(eax + eax + 0x65) + HI8(eax)); /* 0x100A84CF: add byte ptr [eax + eax + 0x65], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x100A84D3: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A84D8; /* 0x100A84D6: jne 0x100a84d8 */
L_100A84D8:
    _flag_a = (uint32_t)(MEM8(ebx + esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + esi) = (uint8_t)(MEM8(ebx + esi) + HI8(eax)); /* 0x100A84D8: add byte ptr [bx + si], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x68)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x68) = (uint8_t)(MEM8(eax + eax + 0x68) + HI8(edx)); /* 0x100A84DB: add byte ptr [eax + eax + 0x68], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A84DF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84E2: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    POPAD(); /* 0x100A84E4: popal  */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x100A84E5: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A84EA; /* 0x100A84E8: jo 0x100a84ea */
L_100A84EA:
    void_lift_trap(0x100A84EAu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A84EB: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A84EEu, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A84F0: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x69)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x69) = (uint8_t)(MEM8(eax + eax + 0x69) + HI8(edx)); /* 0x100A84F1: add byte ptr [eax + eax + 0x69], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A84F5: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A84F8: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A84F9: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x4A002000)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x4A002000) = (uint8_t)(MEM8(0x4A002000) + HI8(ecx)); /* 0x100A84FB: add byte ptr [0x4a002000], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x100A8501: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x100A8504: push esp */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A8505: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8507: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A850C; /* 0x100A850A: jne 0x100a850c */
L_100A850C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A850E; /* 0x100A850C: jae 0x100a850e */
L_100A850E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A8510; /* 0x100A850E: je 0x100a8510 */
L_100A8510:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8510: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8512u, "bound eax, qword ptr [eax]");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x100A8514: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8517: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A851A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A851B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A851Eu, "bound eax, qword ptr [eax]");
    void_lift_trap(0x100A8520u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8521: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (ecx)) = (uint8_t)(MEM8(FS_BASE + (ecx)) + HI8(ecx)); /* 0x100A8524: add byte ptr fs:[ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A8527: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A8529: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A852C: in al, dx */
    eax = ebp + 0x14; /* 0x100A852D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100A8530: push eax */
    PUSH32(esp, 0); /* 0x100A8531: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A8533: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A8536: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A8539: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084DCF); /* 0x100A853C: call 0x10084dcf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A8541: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A8544: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A8545: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A837C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A837Cu);

L_100A837C:
    PUSH32(esp, eax); /* 0x100A837C: push eax */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A837D: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A8380: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x100A8381: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8386; /* 0x100A8384: jb 0x100a8386 */
L_100A8386:
    POPAD(); /* 0x100A8386: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8387: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A838A: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A838C: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A838E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A8390: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A8391: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A8394u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8395: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A8398: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A839A: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A839C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100A839E: nop  */
    /* nop */ /* 0x100A839F: nop  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x100A83A0: dec esp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A83A1: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A83A4: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A83A5: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A83A8: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83AA: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A83AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100A83AE: nop  */
    /* nop */ /* 0x100A83AF: nop  */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100A83B0: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ebx)); /* 0x100A83B1: add byte ptr [eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A83B6; /* 0x100A83B4: jo 0x100a83b6 */
L_100A83B6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A83B8; /* 0x100A83B6: jb 0x100a83b8 */
L_100A83B8:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebx)) = (uint8_t)(MEM8(GS_BASE + (ebx)) + HI8(edx)); /* 0x100A83B8: add byte ptr gs:[ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A83BE; /* 0x100A83BC: jae 0x100a83be */
L_100A83BE:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A83BE: imul eax, dword ptr [eax], 0x6e006f */
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A83C4: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83C6: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A83C8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100A83CA: nop  */
    /* nop */ /* 0x100A83CB: nop  */
    /* nop */ /* 0x100A83CC: nop  */
    /* nop */ /* 0x100A83CD: nop  */
    /* nop */ /* 0x100A83CE: nop  */
    /* nop */ /* 0x100A83CF: nop  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A83D0: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A83D1: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A83D6; /* 0x100A83D4: jb 0x100a83d6 */
L_100A83D6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83D6: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0066006Eu); /* 0x100A83D8: imul eax, dword ptr [eax], 0x66006e */
    /* outsd: no port I/O under Win32 */ /* 0x100A83DE: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A83DF: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A83E2u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A83E3: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A83E8; /* 0x100A83E6: je 0x100a83e8 */
L_100A83E8:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A83E8: imul eax, dword ptr [eax], 0x6e006f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83EE: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A83F0: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A83F1: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83F4: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0x77006F00u); /* 0x100A83F6: push 0x77006f00 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A83FB: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ebx)); /* 0x100A83FD: add byte ptr [ecx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A8400: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A8401: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8406; /* 0x100A8404: jb 0x100a8406 */
L_100A8406:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8406: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (CMP_O(_flag_a, _flag_b)) goto L_100A840A; /* 0x100A8408: jo 0x100a840a */
L_100A840A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A840C; /* 0x100A840A: jb 0x100a840c */
L_100A840C:
    /* outsd: no port I/O under Win32 */ /* 0x100A840C: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x100A840D: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8412; /* 0x100A8410: jb 0x100a8412 */
L_100A8412:
    POPAD(); /* 0x100A8412: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8413: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8416: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8418u, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A841A: popal  */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A841B: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A841E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8420u, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A8422: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A8423: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A8428; /* 0x100A8426: jae 0x100a8428 */
L_100A8428:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x100A8428: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A842B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A842E: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A842F: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A8431: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A8436; /* 0x100A8434: jae 0x100a8436 */
L_100A8436:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A8438; /* 0x100A8436: jae 0x100a8438 */
L_100A8438:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100A8438: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A843E; /* 0x100A843C: je 0x100a843e */
L_100A843E:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A843E: imul eax, dword ptr [eax], 0x6e006f */
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x100A8444: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A8446: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0075006Cu); /* 0x100A844A: imul eax, dword ptr [eax], 0x75006c */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8452; /* 0x100A8450: jb 0x100a8452 */
L_100A8452:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + eax))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax + eax)) = (uint8_t)(MEM8(GS_BASE + (eax + eax)) + HI8(ecx)); /* 0x100A8452: add byte ptr gs:[eax + eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8456: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A845A; /* 0x100A8458: jae 0x100a845a */
L_100A845A:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp)) = (uint8_t)(MEM8(GS_BASE + (ebp)) + HI8(eax)); /* 0x100A845A: add byte ptr gs:[ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A845E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A8462; /* 0x100A8460: je 0x100a8462 */
L_100A8462:
    PUSH32(esp, 0x20006500u); /* 0x100A8462: push 0x20006500 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(edx)); /* 0x100A8467: add byte ptr [esi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x00750073u); /* 0x100A846A: imul eax, dword ptr [eax], 0x750073 */
    POPAD(); /* 0x100A8470: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x20) = (uint8_t)(MEM8(eax + eax + 0x20) + HI8(ecx)); /* 0x100A8471: add byte ptr [eax + eax + 0x20], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A8475: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(eax); /* 0x100A8478: sub eax, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(eax); /* 0x100A847A: sub eax, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A847C: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (edi))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (edi)) = (uint8_t)(MEM8(FS_BASE + (edi)) + HI8(ecx)); /* 0x100A847E: add byte ptr fs:[edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A8482u, "arpl word ptr [eax], ax");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A8486; /* 0x100A8484: jne 0x100a8486 */
L_100A8486:
    void_lift_trap(0x100A8486u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8487: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A848A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x61)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x61) = (uint8_t)(MEM8(eax + eax + 0x61) + HI8(edx)); /* 0x100A848B: add byte ptr [eax + eax + 0x61], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x69)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x69) = (uint8_t)(MEM8(eax + eax + 0x69) + HI8(edx)); /* 0x100A848F: add byte ptr [eax + eax + 0x69], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A8493: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A8496: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A8497: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A8499: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A849C: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A849D: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A849F: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A84A4; /* 0x100A84A2: jae 0x100a84a4 */
L_100A84A4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A84A6; /* 0x100A84A4: jae 0x100a84a6 */
L_100A84A6:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100A84A6: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A84AC; /* 0x100A84AA: je 0x100a84ac */
L_100A84AC:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A84AE; /* 0x100A84AC: jae 0x100a84ae */
L_100A84AE:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A84AE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax) = (uint8_t)(MEM8(eax) - LO8(eax)); /* 0x100A84B0: sub byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, eax); /* 0x100A84B2: push eax */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A84B3: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebx)) = (uint8_t)(MEM8(GS_BASE + (ebx)) + HI8(edx)); /* 0x100A84B6: add byte ptr gs:[ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A84BC; /* 0x100A84BA: jae 0x100a84bc */
L_100A84BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84BC: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edx); /* 0x100A84BE: push edx */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A84BF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A84C4; /* 0x100A84C2: je 0x100a84c4 */
L_100A84C4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A84C6; /* 0x100A84C4: jb 0x100a84c6 */
L_100A84C6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_100A84C8; /* 0x100A84C6: jns 0x100a84c8 */
L_100A84C8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84C8: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A84CC; /* 0x100A84CA: je 0x100a84cc */
L_100A84CC:
    /* outsd: no port I/O under Win32 */ /* 0x100A84CC: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A84CD: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x65) = (uint8_t)(MEM8(eax + eax + 0x65) + HI8(eax)); /* 0x100A84CF: add byte ptr [eax + eax + 0x65], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x100A84D3: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A84D8; /* 0x100A84D6: jne 0x100a84d8 */
L_100A84D8:
    _flag_a = (uint32_t)(MEM8(ebx + esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + esi) = (uint8_t)(MEM8(ebx + esi) + HI8(eax)); /* 0x100A84D8: add byte ptr [bx + si], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x68)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x68) = (uint8_t)(MEM8(eax + eax + 0x68) + HI8(edx)); /* 0x100A84DB: add byte ptr [eax + eax + 0x68], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A84DF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84E2: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    POPAD(); /* 0x100A84E4: popal  */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x100A84E5: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A84EA; /* 0x100A84E8: jo 0x100a84ea */
L_100A84EA:
    void_lift_trap(0x100A84EAu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A84EB: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A84EEu, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A84F0: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x69)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x69) = (uint8_t)(MEM8(eax + eax + 0x69) + HI8(edx)); /* 0x100A84F1: add byte ptr [eax + eax + 0x69], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A84F5: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A84F8: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A84F9: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x4A002000)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x4A002000) = (uint8_t)(MEM8(0x4A002000) + HI8(ecx)); /* 0x100A84FB: add byte ptr [0x4a002000], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x100A8501: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x100A8504: push esp */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A8505: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8507: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A850C; /* 0x100A850A: jne 0x100a850c */
L_100A850C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A850E; /* 0x100A850C: jae 0x100a850e */
L_100A850E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A8510; /* 0x100A850E: je 0x100a8510 */
L_100A8510:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8510: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8512u, "bound eax, qword ptr [eax]");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x100A8514: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8517: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A851A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A851B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A851Eu, "bound eax, qword ptr [eax]");
    void_lift_trap(0x100A8520u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8521: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (ecx)) = (uint8_t)(MEM8(FS_BASE + (ecx)) + HI8(ecx)); /* 0x100A8524: add byte ptr fs:[ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A8527: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A8529: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A852C: in al, dx */
    eax = ebp + 0x14; /* 0x100A852D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100A8530: push eax */
    PUSH32(esp, 0); /* 0x100A8531: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A8533: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A8536: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A8539: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084DCF); /* 0x100A853C: call 0x10084dcf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A8541: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A8544: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A8545: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A8390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A8390u);

L_100A8390:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A8390: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A8391: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A8394u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8395: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A8398: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A839A: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A839C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100A839E: nop  */
    /* nop */ /* 0x100A839F: nop  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x100A83A0: dec esp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A83A1: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A83A4: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A83A5: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A83A8: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83AA: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A83AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100A83AE: nop  */
    /* nop */ /* 0x100A83AF: nop  */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100A83B0: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ebx)); /* 0x100A83B1: add byte ptr [eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A83B6; /* 0x100A83B4: jo 0x100a83b6 */
L_100A83B6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A83B8; /* 0x100A83B6: jb 0x100a83b8 */
L_100A83B8:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebx)) = (uint8_t)(MEM8(GS_BASE + (ebx)) + HI8(edx)); /* 0x100A83B8: add byte ptr gs:[ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A83BE; /* 0x100A83BC: jae 0x100a83be */
L_100A83BE:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A83BE: imul eax, dword ptr [eax], 0x6e006f */
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A83C4: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83C6: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A83C8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100A83CA: nop  */
    /* nop */ /* 0x100A83CB: nop  */
    /* nop */ /* 0x100A83CC: nop  */
    /* nop */ /* 0x100A83CD: nop  */
    /* nop */ /* 0x100A83CE: nop  */
    /* nop */ /* 0x100A83CF: nop  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A83D0: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A83D1: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A83D6; /* 0x100A83D4: jb 0x100a83d6 */
L_100A83D6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83D6: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0066006Eu); /* 0x100A83D8: imul eax, dword ptr [eax], 0x66006e */
    /* outsd: no port I/O under Win32 */ /* 0x100A83DE: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A83DF: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A83E2u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A83E3: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A83E8; /* 0x100A83E6: je 0x100a83e8 */
L_100A83E8:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A83E8: imul eax, dword ptr [eax], 0x6e006f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83EE: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A83F0: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A83F1: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83F4: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0x77006F00u); /* 0x100A83F6: push 0x77006f00 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A83FB: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ebx)); /* 0x100A83FD: add byte ptr [ecx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A8400: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A8401: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8406; /* 0x100A8404: jb 0x100a8406 */
L_100A8406:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8406: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (CMP_O(_flag_a, _flag_b)) goto L_100A840A; /* 0x100A8408: jo 0x100a840a */
L_100A840A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A840C; /* 0x100A840A: jb 0x100a840c */
L_100A840C:
    /* outsd: no port I/O under Win32 */ /* 0x100A840C: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x100A840D: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8412; /* 0x100A8410: jb 0x100a8412 */
L_100A8412:
    POPAD(); /* 0x100A8412: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8413: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8416: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8418u, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A841A: popal  */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A841B: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A841E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8420u, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A8422: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A8423: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A8428; /* 0x100A8426: jae 0x100a8428 */
L_100A8428:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x100A8428: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A842B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A842E: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A842F: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A8431: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A8436; /* 0x100A8434: jae 0x100a8436 */
L_100A8436:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A8438; /* 0x100A8436: jae 0x100a8438 */
L_100A8438:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100A8438: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A843E; /* 0x100A843C: je 0x100a843e */
L_100A843E:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A843E: imul eax, dword ptr [eax], 0x6e006f */
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x100A8444: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A8446: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0075006Cu); /* 0x100A844A: imul eax, dword ptr [eax], 0x75006c */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8452; /* 0x100A8450: jb 0x100a8452 */
L_100A8452:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + eax))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax + eax)) = (uint8_t)(MEM8(GS_BASE + (eax + eax)) + HI8(ecx)); /* 0x100A8452: add byte ptr gs:[eax + eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8456: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A845A; /* 0x100A8458: jae 0x100a845a */
L_100A845A:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp)) = (uint8_t)(MEM8(GS_BASE + (ebp)) + HI8(eax)); /* 0x100A845A: add byte ptr gs:[ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A845E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A8462; /* 0x100A8460: je 0x100a8462 */
L_100A8462:
    PUSH32(esp, 0x20006500u); /* 0x100A8462: push 0x20006500 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(edx)); /* 0x100A8467: add byte ptr [esi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x00750073u); /* 0x100A846A: imul eax, dword ptr [eax], 0x750073 */
    POPAD(); /* 0x100A8470: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x20) = (uint8_t)(MEM8(eax + eax + 0x20) + HI8(ecx)); /* 0x100A8471: add byte ptr [eax + eax + 0x20], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A8475: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(eax); /* 0x100A8478: sub eax, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(eax); /* 0x100A847A: sub eax, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A847C: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (edi))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (edi)) = (uint8_t)(MEM8(FS_BASE + (edi)) + HI8(ecx)); /* 0x100A847E: add byte ptr fs:[edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A8482u, "arpl word ptr [eax], ax");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A8486; /* 0x100A8484: jne 0x100a8486 */
L_100A8486:
    void_lift_trap(0x100A8486u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8487: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A848A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x61)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x61) = (uint8_t)(MEM8(eax + eax + 0x61) + HI8(edx)); /* 0x100A848B: add byte ptr [eax + eax + 0x61], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x69)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x69) = (uint8_t)(MEM8(eax + eax + 0x69) + HI8(edx)); /* 0x100A848F: add byte ptr [eax + eax + 0x69], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A8493: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A8496: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A8497: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A8499: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A849C: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A849D: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A849F: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A84A4; /* 0x100A84A2: jae 0x100a84a4 */
L_100A84A4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A84A6; /* 0x100A84A4: jae 0x100a84a6 */
L_100A84A6:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100A84A6: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A84AC; /* 0x100A84AA: je 0x100a84ac */
L_100A84AC:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A84AE; /* 0x100A84AC: jae 0x100a84ae */
L_100A84AE:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A84AE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax) = (uint8_t)(MEM8(eax) - LO8(eax)); /* 0x100A84B0: sub byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, eax); /* 0x100A84B2: push eax */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A84B3: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebx)) = (uint8_t)(MEM8(GS_BASE + (ebx)) + HI8(edx)); /* 0x100A84B6: add byte ptr gs:[ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A84BC; /* 0x100A84BA: jae 0x100a84bc */
L_100A84BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84BC: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edx); /* 0x100A84BE: push edx */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A84BF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A84C4; /* 0x100A84C2: je 0x100a84c4 */
L_100A84C4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A84C6; /* 0x100A84C4: jb 0x100a84c6 */
L_100A84C6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_100A84C8; /* 0x100A84C6: jns 0x100a84c8 */
L_100A84C8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84C8: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A84CC; /* 0x100A84CA: je 0x100a84cc */
L_100A84CC:
    /* outsd: no port I/O under Win32 */ /* 0x100A84CC: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A84CD: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x65) = (uint8_t)(MEM8(eax + eax + 0x65) + HI8(eax)); /* 0x100A84CF: add byte ptr [eax + eax + 0x65], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x100A84D3: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A84D8; /* 0x100A84D6: jne 0x100a84d8 */
L_100A84D8:
    _flag_a = (uint32_t)(MEM8(ebx + esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + esi) = (uint8_t)(MEM8(ebx + esi) + HI8(eax)); /* 0x100A84D8: add byte ptr [bx + si], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x68)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x68) = (uint8_t)(MEM8(eax + eax + 0x68) + HI8(edx)); /* 0x100A84DB: add byte ptr [eax + eax + 0x68], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A84DF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84E2: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    POPAD(); /* 0x100A84E4: popal  */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x100A84E5: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A84EA; /* 0x100A84E8: jo 0x100a84ea */
L_100A84EA:
    void_lift_trap(0x100A84EAu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A84EB: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A84EEu, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A84F0: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x69)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x69) = (uint8_t)(MEM8(eax + eax + 0x69) + HI8(edx)); /* 0x100A84F1: add byte ptr [eax + eax + 0x69], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A84F5: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A84F8: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A84F9: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x4A002000)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x4A002000) = (uint8_t)(MEM8(0x4A002000) + HI8(ecx)); /* 0x100A84FB: add byte ptr [0x4a002000], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x100A8501: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x100A8504: push esp */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A8505: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8507: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A850C; /* 0x100A850A: jne 0x100a850c */
L_100A850C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A850E; /* 0x100A850C: jae 0x100a850e */
L_100A850E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A8510; /* 0x100A850E: je 0x100a8510 */
L_100A8510:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8510: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8512u, "bound eax, qword ptr [eax]");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x100A8514: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8517: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A851A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A851B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A851Eu, "bound eax, qword ptr [eax]");
    void_lift_trap(0x100A8520u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8521: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (ecx)) = (uint8_t)(MEM8(FS_BASE + (ecx)) + HI8(ecx)); /* 0x100A8524: add byte ptr fs:[ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A8527: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A8529: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A852C: in al, dx */
    eax = ebp + 0x14; /* 0x100A852D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100A8530: push eax */
    PUSH32(esp, 0); /* 0x100A8531: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A8533: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A8536: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A8539: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084DCF); /* 0x100A853C: call 0x10084dcf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A8541: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A8544: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A8545: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A83A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A83A0u);

L_100A83A0:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x100A83A0: dec esp */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A83A1: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A83A4: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A83A5: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A83A8: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83AA: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A83AC: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100A83AE: nop  */
    /* nop */ /* 0x100A83AF: nop  */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100A83B0: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ebx)); /* 0x100A83B1: add byte ptr [eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A83B6; /* 0x100A83B4: jo 0x100a83b6 */
L_100A83B6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A83B8; /* 0x100A83B6: jb 0x100a83b8 */
L_100A83B8:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebx)) = (uint8_t)(MEM8(GS_BASE + (ebx)) + HI8(edx)); /* 0x100A83B8: add byte ptr gs:[ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A83BE; /* 0x100A83BC: jae 0x100a83be */
L_100A83BE:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A83BE: imul eax, dword ptr [eax], 0x6e006f */
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A83C4: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83C6: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A83C8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100A83CA: nop  */
    /* nop */ /* 0x100A83CB: nop  */
    /* nop */ /* 0x100A83CC: nop  */
    /* nop */ /* 0x100A83CD: nop  */
    /* nop */ /* 0x100A83CE: nop  */
    /* nop */ /* 0x100A83CF: nop  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A83D0: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A83D1: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A83D6; /* 0x100A83D4: jb 0x100a83d6 */
L_100A83D6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83D6: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0066006Eu); /* 0x100A83D8: imul eax, dword ptr [eax], 0x66006e */
    /* outsd: no port I/O under Win32 */ /* 0x100A83DE: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A83DF: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A83E2u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A83E3: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A83E8; /* 0x100A83E6: je 0x100a83e8 */
L_100A83E8:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A83E8: imul eax, dword ptr [eax], 0x6e006f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83EE: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A83F0: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A83F1: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83F4: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0x77006F00u); /* 0x100A83F6: push 0x77006f00 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A83FB: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ebx)); /* 0x100A83FD: add byte ptr [ecx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A8400: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A8401: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8406; /* 0x100A8404: jb 0x100a8406 */
L_100A8406:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8406: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (CMP_O(_flag_a, _flag_b)) goto L_100A840A; /* 0x100A8408: jo 0x100a840a */
L_100A840A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A840C; /* 0x100A840A: jb 0x100a840c */
L_100A840C:
    /* outsd: no port I/O under Win32 */ /* 0x100A840C: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x100A840D: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8412; /* 0x100A8410: jb 0x100a8412 */
L_100A8412:
    POPAD(); /* 0x100A8412: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8413: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8416: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8418u, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A841A: popal  */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A841B: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A841E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8420u, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A8422: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A8423: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A8428; /* 0x100A8426: jae 0x100a8428 */
L_100A8428:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x100A8428: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A842B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A842E: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A842F: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A8431: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A8436; /* 0x100A8434: jae 0x100a8436 */
L_100A8436:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A8438; /* 0x100A8436: jae 0x100a8438 */
L_100A8438:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100A8438: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A843E; /* 0x100A843C: je 0x100a843e */
L_100A843E:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A843E: imul eax, dword ptr [eax], 0x6e006f */
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x100A8444: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A8446: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0075006Cu); /* 0x100A844A: imul eax, dword ptr [eax], 0x75006c */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8452; /* 0x100A8450: jb 0x100a8452 */
L_100A8452:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + eax))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax + eax)) = (uint8_t)(MEM8(GS_BASE + (eax + eax)) + HI8(ecx)); /* 0x100A8452: add byte ptr gs:[eax + eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8456: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A845A; /* 0x100A8458: jae 0x100a845a */
L_100A845A:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp)) = (uint8_t)(MEM8(GS_BASE + (ebp)) + HI8(eax)); /* 0x100A845A: add byte ptr gs:[ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A845E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A8462; /* 0x100A8460: je 0x100a8462 */
L_100A8462:
    PUSH32(esp, 0x20006500u); /* 0x100A8462: push 0x20006500 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(edx)); /* 0x100A8467: add byte ptr [esi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x00750073u); /* 0x100A846A: imul eax, dword ptr [eax], 0x750073 */
    POPAD(); /* 0x100A8470: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x20) = (uint8_t)(MEM8(eax + eax + 0x20) + HI8(ecx)); /* 0x100A8471: add byte ptr [eax + eax + 0x20], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A8475: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(eax); /* 0x100A8478: sub eax, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(eax); /* 0x100A847A: sub eax, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A847C: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (edi))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (edi)) = (uint8_t)(MEM8(FS_BASE + (edi)) + HI8(ecx)); /* 0x100A847E: add byte ptr fs:[edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A8482u, "arpl word ptr [eax], ax");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A8486; /* 0x100A8484: jne 0x100a8486 */
L_100A8486:
    void_lift_trap(0x100A8486u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8487: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A848A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x61)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x61) = (uint8_t)(MEM8(eax + eax + 0x61) + HI8(edx)); /* 0x100A848B: add byte ptr [eax + eax + 0x61], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x69)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x69) = (uint8_t)(MEM8(eax + eax + 0x69) + HI8(edx)); /* 0x100A848F: add byte ptr [eax + eax + 0x69], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A8493: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A8496: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A8497: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A8499: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A849C: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A849D: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A849F: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A84A4; /* 0x100A84A2: jae 0x100a84a4 */
L_100A84A4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A84A6; /* 0x100A84A4: jae 0x100a84a6 */
L_100A84A6:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100A84A6: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A84AC; /* 0x100A84AA: je 0x100a84ac */
L_100A84AC:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A84AE; /* 0x100A84AC: jae 0x100a84ae */
L_100A84AE:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A84AE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax) = (uint8_t)(MEM8(eax) - LO8(eax)); /* 0x100A84B0: sub byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, eax); /* 0x100A84B2: push eax */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A84B3: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebx)) = (uint8_t)(MEM8(GS_BASE + (ebx)) + HI8(edx)); /* 0x100A84B6: add byte ptr gs:[ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A84BC; /* 0x100A84BA: jae 0x100a84bc */
L_100A84BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84BC: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edx); /* 0x100A84BE: push edx */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A84BF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A84C4; /* 0x100A84C2: je 0x100a84c4 */
L_100A84C4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A84C6; /* 0x100A84C4: jb 0x100a84c6 */
L_100A84C6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_100A84C8; /* 0x100A84C6: jns 0x100a84c8 */
L_100A84C8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84C8: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A84CC; /* 0x100A84CA: je 0x100a84cc */
L_100A84CC:
    /* outsd: no port I/O under Win32 */ /* 0x100A84CC: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A84CD: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x65) = (uint8_t)(MEM8(eax + eax + 0x65) + HI8(eax)); /* 0x100A84CF: add byte ptr [eax + eax + 0x65], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x100A84D3: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A84D8; /* 0x100A84D6: jne 0x100a84d8 */
L_100A84D8:
    _flag_a = (uint32_t)(MEM8(ebx + esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + esi) = (uint8_t)(MEM8(ebx + esi) + HI8(eax)); /* 0x100A84D8: add byte ptr [bx + si], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x68)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x68) = (uint8_t)(MEM8(eax + eax + 0x68) + HI8(edx)); /* 0x100A84DB: add byte ptr [eax + eax + 0x68], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A84DF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84E2: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    POPAD(); /* 0x100A84E4: popal  */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x100A84E5: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A84EA; /* 0x100A84E8: jo 0x100a84ea */
L_100A84EA:
    void_lift_trap(0x100A84EAu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A84EB: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A84EEu, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A84F0: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x69)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x69) = (uint8_t)(MEM8(eax + eax + 0x69) + HI8(edx)); /* 0x100A84F1: add byte ptr [eax + eax + 0x69], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A84F5: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A84F8: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A84F9: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x4A002000)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x4A002000) = (uint8_t)(MEM8(0x4A002000) + HI8(ecx)); /* 0x100A84FB: add byte ptr [0x4a002000], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x100A8501: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x100A8504: push esp */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A8505: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8507: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A850C; /* 0x100A850A: jne 0x100a850c */
L_100A850C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A850E; /* 0x100A850C: jae 0x100a850e */
L_100A850E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A8510; /* 0x100A850E: je 0x100a8510 */
L_100A8510:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8510: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8512u, "bound eax, qword ptr [eax]");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x100A8514: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8517: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A851A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A851B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A851Eu, "bound eax, qword ptr [eax]");
    void_lift_trap(0x100A8520u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8521: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (ecx)) = (uint8_t)(MEM8(FS_BASE + (ecx)) + HI8(ecx)); /* 0x100A8524: add byte ptr fs:[ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A8527: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A8529: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A852C: in al, dx */
    eax = ebp + 0x14; /* 0x100A852D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100A8530: push eax */
    PUSH32(esp, 0); /* 0x100A8531: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A8533: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A8536: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A8539: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084DCF); /* 0x100A853C: call 0x10084dcf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A8541: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A8544: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A8545: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A83B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A83B0u);

L_100A83B0:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x100A83B0: inc ebp */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ebx)); /* 0x100A83B1: add byte ptr [eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A83B6; /* 0x100A83B4: jo 0x100a83b6 */
L_100A83B6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A83B8; /* 0x100A83B6: jb 0x100a83b8 */
L_100A83B8:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebx)) = (uint8_t)(MEM8(GS_BASE + (ebx)) + HI8(edx)); /* 0x100A83B8: add byte ptr gs:[ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A83BE; /* 0x100A83BC: jae 0x100a83be */
L_100A83BE:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A83BE: imul eax, dword ptr [eax], 0x6e006f */
    /* cmp LO8(eax), MEM8(eax) */ /* 0x100A83C4: cmp al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83C6: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A83C8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* nop */ /* 0x100A83CA: nop  */
    /* nop */ /* 0x100A83CB: nop  */
    /* nop */ /* 0x100A83CC: nop  */
    /* nop */ /* 0x100A83CD: nop  */
    /* nop */ /* 0x100A83CE: nop  */
    /* nop */ /* 0x100A83CF: nop  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A83D0: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A83D1: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A83D6; /* 0x100A83D4: jb 0x100a83d6 */
L_100A83D6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83D6: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0066006Eu); /* 0x100A83D8: imul eax, dword ptr [eax], 0x66006e */
    /* outsd: no port I/O under Win32 */ /* 0x100A83DE: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A83DF: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A83E2u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A83E3: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A83E8; /* 0x100A83E6: je 0x100a83e8 */
L_100A83E8:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A83E8: imul eax, dword ptr [eax], 0x6e006f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83EE: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A83F0: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A83F1: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83F4: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0x77006F00u); /* 0x100A83F6: push 0x77006f00 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A83FB: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ebx)); /* 0x100A83FD: add byte ptr [ecx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A8400: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A8401: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8406; /* 0x100A8404: jb 0x100a8406 */
L_100A8406:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8406: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (CMP_O(_flag_a, _flag_b)) goto L_100A840A; /* 0x100A8408: jo 0x100a840a */
L_100A840A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A840C; /* 0x100A840A: jb 0x100a840c */
L_100A840C:
    /* outsd: no port I/O under Win32 */ /* 0x100A840C: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x100A840D: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8412; /* 0x100A8410: jb 0x100a8412 */
L_100A8412:
    POPAD(); /* 0x100A8412: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8413: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8416: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8418u, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A841A: popal  */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A841B: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A841E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8420u, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A8422: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A8423: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A8428; /* 0x100A8426: jae 0x100a8428 */
L_100A8428:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x100A8428: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A842B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A842E: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A842F: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A8431: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A8436; /* 0x100A8434: jae 0x100a8436 */
L_100A8436:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A8438; /* 0x100A8436: jae 0x100a8438 */
L_100A8438:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100A8438: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A843E; /* 0x100A843C: je 0x100a843e */
L_100A843E:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A843E: imul eax, dword ptr [eax], 0x6e006f */
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x100A8444: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A8446: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0075006Cu); /* 0x100A844A: imul eax, dword ptr [eax], 0x75006c */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8452; /* 0x100A8450: jb 0x100a8452 */
L_100A8452:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + eax))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax + eax)) = (uint8_t)(MEM8(GS_BASE + (eax + eax)) + HI8(ecx)); /* 0x100A8452: add byte ptr gs:[eax + eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8456: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A845A; /* 0x100A8458: jae 0x100a845a */
L_100A845A:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp)) = (uint8_t)(MEM8(GS_BASE + (ebp)) + HI8(eax)); /* 0x100A845A: add byte ptr gs:[ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A845E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A8462; /* 0x100A8460: je 0x100a8462 */
L_100A8462:
    PUSH32(esp, 0x20006500u); /* 0x100A8462: push 0x20006500 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(edx)); /* 0x100A8467: add byte ptr [esi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x00750073u); /* 0x100A846A: imul eax, dword ptr [eax], 0x750073 */
    POPAD(); /* 0x100A8470: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x20) = (uint8_t)(MEM8(eax + eax + 0x20) + HI8(ecx)); /* 0x100A8471: add byte ptr [eax + eax + 0x20], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A8475: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(eax); /* 0x100A8478: sub eax, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(eax); /* 0x100A847A: sub eax, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A847C: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (edi))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (edi)) = (uint8_t)(MEM8(FS_BASE + (edi)) + HI8(ecx)); /* 0x100A847E: add byte ptr fs:[edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A8482u, "arpl word ptr [eax], ax");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A8486; /* 0x100A8484: jne 0x100a8486 */
L_100A8486:
    void_lift_trap(0x100A8486u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8487: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A848A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x61)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x61) = (uint8_t)(MEM8(eax + eax + 0x61) + HI8(edx)); /* 0x100A848B: add byte ptr [eax + eax + 0x61], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x69)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x69) = (uint8_t)(MEM8(eax + eax + 0x69) + HI8(edx)); /* 0x100A848F: add byte ptr [eax + eax + 0x69], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A8493: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A8496: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A8497: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A8499: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A849C: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A849D: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A849F: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A84A4; /* 0x100A84A2: jae 0x100a84a4 */
L_100A84A4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A84A6; /* 0x100A84A4: jae 0x100a84a6 */
L_100A84A6:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100A84A6: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A84AC; /* 0x100A84AA: je 0x100a84ac */
L_100A84AC:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A84AE; /* 0x100A84AC: jae 0x100a84ae */
L_100A84AE:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A84AE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax) = (uint8_t)(MEM8(eax) - LO8(eax)); /* 0x100A84B0: sub byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, eax); /* 0x100A84B2: push eax */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A84B3: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebx)) = (uint8_t)(MEM8(GS_BASE + (ebx)) + HI8(edx)); /* 0x100A84B6: add byte ptr gs:[ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A84BC; /* 0x100A84BA: jae 0x100a84bc */
L_100A84BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84BC: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edx); /* 0x100A84BE: push edx */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A84BF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A84C4; /* 0x100A84C2: je 0x100a84c4 */
L_100A84C4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A84C6; /* 0x100A84C4: jb 0x100a84c6 */
L_100A84C6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_100A84C8; /* 0x100A84C6: jns 0x100a84c8 */
L_100A84C8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84C8: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A84CC; /* 0x100A84CA: je 0x100a84cc */
L_100A84CC:
    /* outsd: no port I/O under Win32 */ /* 0x100A84CC: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A84CD: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x65) = (uint8_t)(MEM8(eax + eax + 0x65) + HI8(eax)); /* 0x100A84CF: add byte ptr [eax + eax + 0x65], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x100A84D3: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A84D8; /* 0x100A84D6: jne 0x100a84d8 */
L_100A84D8:
    _flag_a = (uint32_t)(MEM8(ebx + esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + esi) = (uint8_t)(MEM8(ebx + esi) + HI8(eax)); /* 0x100A84D8: add byte ptr [bx + si], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x68)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x68) = (uint8_t)(MEM8(eax + eax + 0x68) + HI8(edx)); /* 0x100A84DB: add byte ptr [eax + eax + 0x68], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A84DF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84E2: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    POPAD(); /* 0x100A84E4: popal  */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x100A84E5: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A84EA; /* 0x100A84E8: jo 0x100a84ea */
L_100A84EA:
    void_lift_trap(0x100A84EAu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A84EB: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A84EEu, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A84F0: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x69)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x69) = (uint8_t)(MEM8(eax + eax + 0x69) + HI8(edx)); /* 0x100A84F1: add byte ptr [eax + eax + 0x69], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A84F5: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A84F8: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A84F9: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x4A002000)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x4A002000) = (uint8_t)(MEM8(0x4A002000) + HI8(ecx)); /* 0x100A84FB: add byte ptr [0x4a002000], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x100A8501: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x100A8504: push esp */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A8505: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8507: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A850C; /* 0x100A850A: jne 0x100a850c */
L_100A850C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A850E; /* 0x100A850C: jae 0x100a850e */
L_100A850E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A8510; /* 0x100A850E: je 0x100a8510 */
L_100A8510:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8510: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8512u, "bound eax, qword ptr [eax]");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x100A8514: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8517: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A851A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A851B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A851Eu, "bound eax, qword ptr [eax]");
    void_lift_trap(0x100A8520u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8521: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (ecx)) = (uint8_t)(MEM8(FS_BASE + (ecx)) + HI8(ecx)); /* 0x100A8524: add byte ptr fs:[ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A8527: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A8529: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A852C: in al, dx */
    eax = ebp + 0x14; /* 0x100A852D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100A8530: push eax */
    PUSH32(esp, 0); /* 0x100A8531: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A8533: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A8536: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A8539: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084DCF); /* 0x100A853C: call 0x10084dcf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A8541: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A8544: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A8545: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A83D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A83D0u);

L_100A83D0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100A83D0: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A83D1: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A83D6; /* 0x100A83D4: jb 0x100a83d6 */
L_100A83D6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83D6: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0066006Eu); /* 0x100A83D8: imul eax, dword ptr [eax], 0x66006e */
    /* outsd: no port I/O under Win32 */ /* 0x100A83DE: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A83DF: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A83E2u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A83E3: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A83E8; /* 0x100A83E6: je 0x100a83e8 */
L_100A83E8:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A83E8: imul eax, dword ptr [eax], 0x6e006f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83EE: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A83F0: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A83F1: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A83F4: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0x77006F00u); /* 0x100A83F6: push 0x77006f00 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A83FB: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ebx)); /* 0x100A83FD: add byte ptr [ecx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A8400: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A8401: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8406; /* 0x100A8404: jb 0x100a8406 */
L_100A8406:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8406: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (CMP_O(_flag_a, _flag_b)) goto L_100A840A; /* 0x100A8408: jo 0x100a840a */
L_100A840A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A840C; /* 0x100A840A: jb 0x100a840c */
L_100A840C:
    /* outsd: no port I/O under Win32 */ /* 0x100A840C: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(eax)); /* 0x100A840D: add byte ptr [edi], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8412; /* 0x100A8410: jb 0x100a8412 */
L_100A8412:
    POPAD(); /* 0x100A8412: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8413: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8416: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8418u, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A841A: popal  */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + HI8(ecx)); /* 0x100A841B: add byte ptr [esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A841E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8420u, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A8422: popal  */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(edx)); /* 0x100A8423: add byte ptr [ebp], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A8428; /* 0x100A8426: jae 0x100a8428 */
L_100A8428:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x100A8428: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A842B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A842E: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A842F: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A8431: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A8436; /* 0x100A8434: jae 0x100a8436 */
L_100A8436:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A8438; /* 0x100A8436: jae 0x100a8438 */
L_100A8438:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100A8438: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A843E; /* 0x100A843C: je 0x100a843e */
L_100A843E:
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x006E006Fu); /* 0x100A843E: imul eax, dword ptr [eax], 0x6e006f */
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax)); /* 0x100A8444: or al, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A8446: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x0075006Cu); /* 0x100A844A: imul eax, dword ptr [eax], 0x75006c */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8452; /* 0x100A8450: jb 0x100a8452 */
L_100A8452:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax + eax))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax + eax)) = (uint8_t)(MEM8(GS_BASE + (eax + eax)) + HI8(ecx)); /* 0x100A8452: add byte ptr gs:[eax + eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8456: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (1) goto L_100A845A; /* 0x100A8458: jae 0x100a845a */
L_100A845A:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebp))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebp)) = (uint8_t)(MEM8(GS_BASE + (ebp)) + HI8(eax)); /* 0x100A845A: add byte ptr gs:[ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A845E: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A8462; /* 0x100A8460: je 0x100a8462 */
L_100A8462:
    PUSH32(esp, 0x20006500u); /* 0x100A8462: push 0x20006500 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(edx)); /* 0x100A8467: add byte ptr [esi], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = (uint32_t)((int32_t)MEM32(eax) * (int32_t)0x00750073u); /* 0x100A846A: imul eax, dword ptr [eax], 0x750073 */
    POPAD(); /* 0x100A8470: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x20) = (uint8_t)(MEM8(eax + eax + 0x20) + HI8(ecx)); /* 0x100A8471: add byte ptr [eax + eax + 0x20], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A8475: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(eax); /* 0x100A8478: sub eax, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(eax); /* 0x100A847A: sub eax, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A847C: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (edi))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (edi)) = (uint8_t)(MEM8(FS_BASE + (edi)) + HI8(ecx)); /* 0x100A847E: add byte ptr fs:[edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A8482u, "arpl word ptr [eax], ax");
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A8486; /* 0x100A8484: jne 0x100a8486 */
L_100A8486:
    void_lift_trap(0x100A8486u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8487: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A848A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x61)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x61) = (uint8_t)(MEM8(eax + eax + 0x61) + HI8(edx)); /* 0x100A848B: add byte ptr [eax + eax + 0x61], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x69)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x69) = (uint8_t)(MEM8(eax + eax + 0x69) + HI8(edx)); /* 0x100A848F: add byte ptr [eax + eax + 0x69], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A8493: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A8496: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A8497: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A8499: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A849C: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A849D: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A849F: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A84A4; /* 0x100A84A2: jae 0x100a84a4 */
L_100A84A4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A84A6; /* 0x100A84A4: jae 0x100a84a6 */
L_100A84A6:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100A84A6: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A84AC; /* 0x100A84AA: je 0x100a84ac */
L_100A84AC:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A84AE; /* 0x100A84AC: jae 0x100a84ae */
L_100A84AE:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A84AE: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax) = (uint8_t)(MEM8(eax) - LO8(eax)); /* 0x100A84B0: sub byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, eax); /* 0x100A84B2: push eax */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A84B3: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebx)) = (uint8_t)(MEM8(GS_BASE + (ebx)) + HI8(edx)); /* 0x100A84B6: add byte ptr gs:[ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A84BC; /* 0x100A84BA: jae 0x100a84bc */
L_100A84BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84BC: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edx); /* 0x100A84BE: push edx */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A84BF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A84C4; /* 0x100A84C2: je 0x100a84c4 */
L_100A84C4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A84C6; /* 0x100A84C4: jb 0x100a84c6 */
L_100A84C6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_100A84C8; /* 0x100A84C6: jns 0x100a84c8 */
L_100A84C8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84C8: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A84CC; /* 0x100A84CA: je 0x100a84cc */
L_100A84CC:
    /* outsd: no port I/O under Win32 */ /* 0x100A84CC: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A84CD: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x65) = (uint8_t)(MEM8(eax + eax + 0x65) + HI8(eax)); /* 0x100A84CF: add byte ptr [eax + eax + 0x65], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x100A84D3: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A84D8; /* 0x100A84D6: jne 0x100a84d8 */
L_100A84D8:
    _flag_a = (uint32_t)(MEM8(ebx + esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + esi) = (uint8_t)(MEM8(ebx + esi) + HI8(eax)); /* 0x100A84D8: add byte ptr [bx + si], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x68)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x68) = (uint8_t)(MEM8(eax + eax + 0x68) + HI8(edx)); /* 0x100A84DB: add byte ptr [eax + eax + 0x68], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A84DF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84E2: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    POPAD(); /* 0x100A84E4: popal  */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x100A84E5: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A84EA; /* 0x100A84E8: jo 0x100a84ea */
L_100A84EA:
    void_lift_trap(0x100A84EAu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A84EB: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A84EEu, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A84F0: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x69)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x69) = (uint8_t)(MEM8(eax + eax + 0x69) + HI8(edx)); /* 0x100A84F1: add byte ptr [eax + eax + 0x69], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A84F5: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A84F8: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A84F9: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x4A002000)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x4A002000) = (uint8_t)(MEM8(0x4A002000) + HI8(ecx)); /* 0x100A84FB: add byte ptr [0x4a002000], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x100A8501: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x100A8504: push esp */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A8505: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8507: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A850C; /* 0x100A850A: jne 0x100a850c */
L_100A850C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A850E; /* 0x100A850C: jae 0x100a850e */
L_100A850E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A8510; /* 0x100A850E: je 0x100a8510 */
L_100A8510:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8510: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8512u, "bound eax, qword ptr [eax]");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x100A8514: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8517: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A851A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A851B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A851Eu, "bound eax, qword ptr [eax]");
    void_lift_trap(0x100A8520u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8521: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (ecx)) = (uint8_t)(MEM8(FS_BASE + (ecx)) + HI8(ecx)); /* 0x100A8524: add byte ptr fs:[ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A8527: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A8529: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A852C: in al, dx */
    eax = ebp + 0x14; /* 0x100A852D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100A8530: push eax */
    PUSH32(esp, 0); /* 0x100A8531: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A8533: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A8536: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A8539: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084DCF); /* 0x100A853C: call 0x10084dcf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A8541: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A8544: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A8545: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A84B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A84B0u);

L_100A84B0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax) = (uint8_t)(MEM8(eax) - LO8(eax)); /* 0x100A84B0: sub byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, eax); /* 0x100A84B2: push eax */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A84B3: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (ebx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (ebx)) = (uint8_t)(MEM8(GS_BASE + (ebx)) + HI8(edx)); /* 0x100A84B6: add byte ptr gs:[ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A84BC; /* 0x100A84BA: jae 0x100a84bc */
L_100A84BC:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84BC: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edx); /* 0x100A84BE: push edx */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A84BF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A84C4; /* 0x100A84C2: je 0x100a84c4 */
L_100A84C4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A84C6; /* 0x100A84C4: jb 0x100a84c6 */
L_100A84C6:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_100A84C8; /* 0x100A84C6: jns 0x100a84c8 */
L_100A84C8:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84C8: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A84CC; /* 0x100A84CA: je 0x100a84cc */
L_100A84CC:
    /* outsd: no port I/O under Win32 */ /* 0x100A84CC: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A84CD: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x65) = (uint8_t)(MEM8(eax + eax + 0x65) + HI8(eax)); /* 0x100A84CF: add byte ptr [eax + eax + 0x65], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x100A84D3: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A84D8; /* 0x100A84D6: jne 0x100a84d8 */
L_100A84D8:
    _flag_a = (uint32_t)(MEM8(ebx + esi)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + esi) = (uint8_t)(MEM8(ebx + esi) + HI8(eax)); /* 0x100A84D8: add byte ptr [bx + si], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x68)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x68) = (uint8_t)(MEM8(eax + eax + 0x68) + HI8(edx)); /* 0x100A84DB: add byte ptr [eax + eax + 0x68], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A84DF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A84E2: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    POPAD(); /* 0x100A84E4: popal  */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(edx)); /* 0x100A84E5: add byte ptr [eax], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A84EA; /* 0x100A84E8: jo 0x100a84ea */
L_100A84EA:
    void_lift_trap(0x100A84EAu, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A84EB: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A84EEu, "arpl word ptr [eax], ax");
    POPAD(); /* 0x100A84F0: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x69)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x69) = (uint8_t)(MEM8(eax + eax + 0x69) + HI8(edx)); /* 0x100A84F1: add byte ptr [eax + eax + 0x69], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A84F5: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A84F8: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A84F9: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(0x4A002000)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(0x4A002000) = (uint8_t)(MEM8(0x4A002000) + HI8(ecx)); /* 0x100A84FB: add byte ptr [0x4a002000], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + LO8(ecx)); /* 0x100A8501: add byte ptr [ecx], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x100A8504: push esp */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A8505: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8507: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A850C; /* 0x100A850A: jne 0x100a850c */
L_100A850C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_100A850E; /* 0x100A850C: jae 0x100a850e */
L_100A850E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100A8510; /* 0x100A850E: je 0x100a8510 */
L_100A8510:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A8510: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A8512u, "bound eax, qword ptr [eax]");
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x100A8514: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8517: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A851A: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(eax)); /* 0x100A851B: add byte ptr [ecx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A851Eu, "bound eax, qword ptr [eax]");
    void_lift_trap(0x100A8520u, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A8521: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(FS_BASE + (ecx))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(FS_BASE + (ecx)) = (uint8_t)(MEM8(FS_BASE + (ecx)) + HI8(ecx)); /* 0x100A8524: add byte ptr fs:[ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A8527: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A8529: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A852C: in al, dx */
    eax = ebp + 0x14; /* 0x100A852D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100A8530: push eax */
    PUSH32(esp, 0); /* 0x100A8531: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A8533: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A8536: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A8539: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084DCF); /* 0x100A853C: call 0x10084dcf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A8541: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A8544: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A8545: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A852A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A852Au);

L_100A852A:
    PUSH32(esp, ebp); /* 0x100A852A: push ebp */
    ebp = esp; /* 0x100A852B: mov ebp, esp */
    eax = ebp + 0x14; /* 0x100A852D: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x100A8530: push eax */
    PUSH32(esp, 0); /* 0x100A8531: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A8533: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A8536: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A8539: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10084DCF); /* 0x100A853C: call 0x10084dcf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A8541: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x100A8544: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A8545: ret  */
    RECOMP_REGS_OUT();
}

void sub_100A8546(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A8546u);

L_100A8546:
    PUSH32(esp, ebp); /* 0x100A8546: push ebp */
    ebp = esp; /* 0x100A8547: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100A8549: push esi */
    RECOMP_CALL(sub_1000F720); /* 0x100A854A: call 0x1000f720 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100A854F: mov esi, eax */
    /* test esi, esi */ /* 0x100A8551: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A855C; /* 0x100A8553: jne 0x100a855c */
L_100A8555:
    eax = 0x100A85B8u; /* 0x100A8555: mov eax, 0x100a85b8 */
    goto L_100A8582; /* 0x100A855A: jmp 0x100a8582 */
L_100A855C:
    PUSH32(esp, ebx); /* 0x100A855C: push ebx */
    PUSH32(esp, edi); /* 0x100A855D: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100A855E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 0x86u; /* 0x100A8560: mov ebx, 0x86 */
    /* cmp MEM32(esi + 0x28), edi */ /* 0x100A8565: cmp dword ptr [esi + 0x28], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A8585; /* 0x100A8568: jne 0x100a8585 */
L_100A856A:
    PUSH32(esp, 2); /* 0x100A856A: push 2 */
    PUSH32(esp, ebx); /* 0x100A856C: push ebx */
    RECOMP_CALL(sub_10011208); /* 0x100A856D: call 0x10011208 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x28) = eax; /* 0x100A8572: mov dword ptr [esi + 0x28], eax */
    ecx = POP32_VAL(esp); /* 0x100A8575: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100A8576: pop ecx */
    /* test eax, eax */ /* 0x100A8577: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A8585; /* 0x100A8579: jne 0x100a8585 */
L_100A857B:
    eax = 0x100A85B8u; /* 0x100A857B: mov eax, 0x100a85b8 */
L_100A8580:
    edi = POP32_VAL(esp); /* 0x100A8580: pop edi */
    ebx = POP32_VAL(esp); /* 0x100A8581: pop ebx */
L_100A8582:
    esi = POP32_VAL(esp); /* 0x100A8582: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A8583: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A8584: ret  */
L_100A8585:
    esi = MEM32(esi + 0x28); /* 0x100A8585: mov esi, dword ptr [esi + 0x28] */
    PUSH32(esp, 0x85u); /* 0x100A8588: push 0x85 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A858D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100A6394); /* 0x100A8590: call 0x100a6394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A8595: pop ecx */
    PUSH32(esp, eax); /* 0x100A8596: push eax */
    PUSH32(esp, ebx); /* 0x100A8597: push ebx */
    PUSH32(esp, esi); /* 0x100A8598: push esi */
    PUSH32(esp, edi); /* 0x100A8599: push edi */
    RECOMP_CALL(sub_10012F50); /* 0x100A859A: call 0x10012f50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A859F: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100A85A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100A85AA; /* 0x100A85A4: jne 0x100a85aa */
L_100A85A6:
    eax = esi; /* 0x100A85A6: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_100A8580; /* 0x100A85A8: jmp 0x100a8580 */
L_100A85AA:
    PUSH32(esp, edi); /* 0x100A85AA: push edi */
    PUSH32(esp, edi); /* 0x100A85AB: push edi */
    PUSH32(esp, edi); /* 0x100A85AC: push edi */
    PUSH32(esp, edi); /* 0x100A85AD: push edi */
    PUSH32(esp, edi); /* 0x100A85AE: push edi */
    RECOMP_CALL(sub_100A469B); /* 0x100A85AF: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A85B4u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A85B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A85B8u);

L_100A85B8:
    PUSH32(esp, esi); /* 0x100A85B8: push esi */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx) = (uint8_t)(MEM8(ecx) + HI8(ecx)); /* 0x100A85B9: add byte ptr [ecx], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_AE)) goto L_100A85BE; /* 0x100A85BC: jae 0x100a85be */
L_100A85BE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100A85C0; /* 0x100A85BE: jne 0x100a85c0 */
L_100A85C0:
    POPAD(); /* 0x100A85C0: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x20)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x20) = (uint8_t)(MEM8(eax + eax + 0x20) + HI8(ecx)); /* 0x100A85C1: add byte ptr [eax + eax + 0x20], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + LO8(eax)); /* 0x100A85C5: add byte ptr [ebx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(eax); /* 0x100A85C8: sub eax, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(eax); /* 0x100A85CA: sub eax, dword ptr [eax] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A85CC: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100A85CE: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(edx)); /* 0x100A85CF: add byte ptr [edx], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esp); /* 0x100A85D2: push esp */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(ebx)); /* 0x100A85D3: add byte ptr [edx], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A85D5: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(esi) = (uint8_t)(MEM8(esi) + LO8(ecx)); /* 0x100A85D7: add byte ptr [esi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A85DA: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x20)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x20) = (uint8_t)(MEM8(eax + eax + 0x20) + HI8(edx)); /* 0x100A85DB: add byte ptr [eax + eax + 0x20], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A85DF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100A85E2: outsb dx, byte ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A85E3: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_100A85E8; /* 0x100A85E6: jne 0x100a85e8 */
L_100A85E8:
    _flag_a = (uint32_t)(MEM8(ebx + esi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + esi) = (uint8_t)(MEM8(ebx + esi) + HI8(ecx)); /* 0x100A85E8: add byte ptr [bx + si], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A85EC: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    void_lift_trap(0x100A85EEu, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A85EF: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100A85F2u, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100A85F3: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A85F8; /* 0x100A85F6: jb 0x100a85f8 */
L_100A85F8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_100A85FA; /* 0x100A85F8: jns 0x100a85fa */
L_100A85FA:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) & LO8(eax)); /* 0x100A85FA: and byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A85FE; /* 0x100A85FC: je 0x100a85fe */
L_100A85FE:
    /* outsd: no port I/O under Win32 */ /* 0x100A85FE: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A85FF: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100A8601: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsd: no port I/O under Win32 */ /* 0x100A8604: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100A8605: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_100A860A; /* 0x100A8608: jo 0x100a860a */
L_100A860A:
    void_lift_trap(0x100A860Au, "insb byte ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(eax)); /* 0x100A860B: add byte ptr [ebp], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A8610; /* 0x100A860E: je 0x100a8610 */
L_100A8610:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (eax))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (eax)) = (uint8_t)(MEM8(GS_BASE + (eax)) + HI8(eax)); /* 0x100A8610: add byte ptr gs:[eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(eax)); /* 0x100A8613: add byte ptr [ebx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    POPAD(); /* 0x100A8616: popal  */
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x6C)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x6C) = (uint8_t)(MEM8(eax + eax + 0x6C) + HI8(ecx)); /* 0x100A8617: add byte ptr [eax + eax + 0x6c], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A861B: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x6F)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x6F) = (uint8_t)(MEM8(eax + eax + 0x6F) + HI8(edx)); /* 0x100A861D: add byte ptr [eax + eax + 0x6f], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(eax)); /* 0x100A8621: add byte ptr [eax], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100A8623: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100A8628; /* 0x100A8626: je 0x100a8628 */
L_100A8628:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_100A862A; /* 0x100A8628: jb 0x100a862a */
L_100A862A:
    _flag_a = (uint32_t)(MEM8(GS_BASE + (edx))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (edx)) = (uint8_t)(MEM8(GS_BASE + (edx)) + HI8(edx)); /* 0x100A862A: add byte ptr gs:[edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_100A8630; /* 0x100A862E: jb 0x100a8630 */
L_100A8630:
    /* outsd: no port I/O under Win32 */ /* 0x100A8630: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(edx)); /* 0x100A8631: add byte ptr [edx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100A8634: add byte ptr cs:[eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100A8637: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100A863A: in al, dx */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x100A863B: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100A863F: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A8655; /* 0x100A8640: jne 0x100a8655 */
L_100A8642:
    RECOMP_CALL(sub_1001177D); /* 0x100A8642: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A8647: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A8649: pop esi */
    MEM32(eax) = esi; /* 0x100A864A: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A864C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A8651: mov eax, esi */
    goto L_100A8691; /* 0x100A8653: jmp 0x100a8691 */
L_100A8655:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100A8655: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A8642; /* 0x100A8659: jbe 0x100a8642 */
L_100A865B:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A865B: push -1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A865D: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100A6394); /* 0x100A8660: call 0x100a6394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A8665: pop ecx */
    PUSH32(esp, eax); /* 0x100A8666: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A8667: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A866A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A866C: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100A866F: push esi */
    RECOMP_CALL(sub_10012F50); /* 0x100A8670: call 0x10012f50 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100A8675: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A8677: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x100A867A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A8688; /* 0x100A867C: je 0x100a8688 */
L_100A867E:
    /* cmp ecx, 0x16u */ /* 0x100A867E: cmp ecx, 0x16 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A8694; /* 0x100A8681: je 0x100a8694 */
L_100A8683:
    /* cmp ecx, 0x22u */ /* 0x100A8683: cmp ecx, 0x22 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A8694; /* 0x100A8686: je 0x100a8694 */
L_100A8688:
    eax = ecx + (-0x50); /* 0x100A8688: lea eax, [ecx - 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A868B: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A868D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100A868F: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A8691:
    esi = POP32_VAL(esp); /* 0x100A8691: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A8692: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A8693: ret  */
L_100A8694:
    PUSH32(esp, esi); /* 0x100A8694: push esi */
    PUSH32(esp, esi); /* 0x100A8695: push esi */
    PUSH32(esp, esi); /* 0x100A8696: push esi */
    PUSH32(esp, esi); /* 0x100A8697: push esi */
    PUSH32(esp, esi); /* 0x100A8698: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x100A8699: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A869Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100A8638(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100A8638u);

L_100A8638:
    PUSH32(esp, ebp); /* 0x100A8638: push ebp */
    ebp = esp; /* 0x100A8639: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x100A863B: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100A863F: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_100A8655; /* 0x100A8640: jne 0x100a8655 */
L_100A8642:
    RECOMP_CALL(sub_1001177D); /* 0x100A8642: call 0x1001177d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x100A8647: push 0x16 */
    esi = POP32_VAL(esp); /* 0x100A8649: pop esi */
    MEM32(eax) = esi; /* 0x100A864A: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_100A4670); /* 0x100A864C: call 0x100a4670 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100A8651: mov eax, esi */
    goto L_100A8691; /* 0x100A8653: jmp 0x100a8691 */
L_100A8655:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x100A8655: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_100A8642; /* 0x100A8659: jbe 0x100a8642 */
L_100A865B:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100A865B: push -1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100A865D: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_100A6394); /* 0x100A8660: call 0x100a6394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100A8665: pop ecx */
    PUSH32(esp, eax); /* 0x100A8666: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100A8667: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100A866A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100A866C: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100A866F: push esi */
    RECOMP_CALL(sub_10012F50); /* 0x100A8670: call 0x10012f50 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100A8675: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x100A8677: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x100A867A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100A8688; /* 0x100A867C: je 0x100a8688 */
L_100A867E:
    /* cmp ecx, 0x16u */ /* 0x100A867E: cmp ecx, 0x16 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A8694; /* 0x100A8681: je 0x100a8694 */
L_100A8683:
    /* cmp ecx, 0x22u */ /* 0x100A8683: cmp ecx, 0x22 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100A8694; /* 0x100A8686: je 0x100a8694 */
L_100A8688:
    eax = ecx + (-0x50); /* 0x100A8688: lea eax, [ecx - 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100A868B: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100A868D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100A868F: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100A8691:
    esi = POP32_VAL(esp); /* 0x100A8691: pop esi */
    ebp = POP32_VAL(esp); /* 0x100A8692: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100A8693: ret  */
L_100A8694:
    PUSH32(esp, esi); /* 0x100A8694: push esi */
    PUSH32(esp, esi); /* 0x100A8695: push esi */
    PUSH32(esp, esi); /* 0x100A8696: push esi */
    PUSH32(esp, esi); /* 0x100A8697: push esi */
    PUSH32(esp, esi); /* 0x100A8698: push esi */
    RECOMP_CALL(sub_100A469B); /* 0x100A8699: call 0x100a469b */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100A869Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
