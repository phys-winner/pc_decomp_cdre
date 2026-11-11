#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_171C84F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C84F0u);

L_171C84F0:
    edi = edi; /* 0x171C84F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C84F2: push ebp */
    ebp = esp; /* 0x171C84F3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171C84F5: push ecx */
    eax = MEM32(esi + 0x4); /* 0x171C84F6: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C84F9: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x171C84FC: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x171C84FE: push ebx */
    ebx = MEM32(esi); /* 0x171C84FF: mov ebx, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C8501: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x171C8504: push edi */
    edi = MEM32(eax); /* 0x171C8505: mov edi, dword ptr [eax] */
    eax = MEM32(ebx + 0x4); /* 0x171C8507: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(eax + 0x10); /* 0x171C850A: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(edi + 0x4); /* 0x171C850D: mov eax, dword ptr [edi + 4] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C8510: fld qword ptr [ecx + 0x28] */
    edx = MEM32(eax + 0x10); /* 0x171C8513: mov edx, dword ptr [eax + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x28)); /* 0x171C8516: fcomp qword ptr [edx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8519: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C851B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C8581; /* 0x171C851E: jnp 0x171c8581 */
L_171C8520:
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C8520: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C8523: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8526: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8528: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C852A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C853C; /* 0x171C852D: jp 0x171c853c */
L_171C852F:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C852F: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x30)); /* 0x171C8532: fcomp qword ptr [edx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8535: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C8537: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C8581; /* 0x171C853A: jnp 0x171c8581 */
L_171C853C:
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x171C853C: push dword ptr [edi + 0x10] */
    PUSH32(esp, ecx); /* 0x171C853F: push ecx */
    PUSH32(esp, edx); /* 0x171C8540: push edx */
    RECOMP_CALL(sub_171C9869); /* 0x171C8541: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C8546: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C854C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C854E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C8557; /* 0x171C8551: jne 0x171c8557 */
L_171C8553:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C8553: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171C85C5; /* 0x171C8555: jmp 0x171c85c5 */
L_171C8557:
    eax = MEM32(ebp + (-0x4)); /* 0x171C8557: mov eax, dword ptr [ebp - 4] */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x171C855A: mov byte ptr [eax + 0xe], 1 */
    PUSH32(esp, edi); /* 0x171C855E: push edi */
    MEM8(esi + 0xE) = (uint8_t)(1); /* 0x171C855F: mov byte ptr [esi + 0xe], 1 */
    RECOMP_CALL(sub_171C7016); /* 0x171C8563: call 0x171c7016 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x171C8568: push dword ptr [edi + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C856B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x171C856E: push dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_171C6E99); /* 0x171C8571: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x171C8576: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x4); /* 0x171C8579: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x14); /* 0x171C857C: mov eax, dword ptr [eax + 0x14] */
    goto L_171C85BC; /* 0x171C857F: jmp 0x171c85bc */
L_171C8581:
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x171C8581: push dword ptr [ebx + 0x10] */
    PUSH32(esp, edx); /* 0x171C8584: push edx */
    PUSH32(esp, ecx); /* 0x171C8585: push ecx */
    RECOMP_CALL(sub_171C9869); /* 0x171C8586: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C858B: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8591: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C8593: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C8553; /* 0x171C8596: jnp 0x171c8553 */
L_171C8598:
    eax = MEM32(esi + 0x4); /* 0x171C8598: mov eax, dword ptr [esi + 4] */
    MEM8(esi + 0xE) = (uint8_t)(1); /* 0x171C859B: mov byte ptr [esi + 0xe], 1 */
    eax = MEM32(eax + 0x4); /* 0x171C859F: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x171C85A2: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x171C85A4: push ebx */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x171C85A5: mov byte ptr [eax + 0xe], 1 */
    RECOMP_CALL(sub_171C7016); /* 0x171C85A9: call 0x171c7016 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171C85AE: mov ebx, eax */
    PUSH32(esp, ebx); /* 0x171C85B0: push ebx */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x171C85B1: push dword ptr [edi + 4] */
    RECOMP_CALL(sub_171C6E99); /* 0x171C85B4: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x14); /* 0x171C85B9: mov eax, dword ptr [ebx + 0x14] */
L_171C85BC:
    SET_LO8(ecx, MEM8(esi + 0xC)); /* 0x171C85BC: mov cl, byte ptr [esi + 0xc] */
    MEM8(eax + 0x15) = (uint8_t)(LO8(ecx)); /* 0x171C85BF: mov byte ptr [eax + 0x15], cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C85C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C85C4: inc eax */
    _flag_k = FK_INC;
L_171C85C5:
    edi = POP32_VAL(esp); /* 0x171C85C5: pop edi */
    ebx = POP32_VAL(esp); /* 0x171C85C6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C85C7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C85C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C85CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C85CEu);

L_171C85CE:
    edi = edi; /* 0x171C85CE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C85D0: push ebp */
    ebp = esp; /* 0x171C85D1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x171C85D3: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171C85D6: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x171C85D9: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + 0x8); /* 0x171C85DC: mov ecx, dword ptr [ecx + 8] */
    ecx = MEM32(ecx); /* 0x171C85DF: mov ecx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x171C85E1: push esi */
    esi = MEM32(eax); /* 0x171C85E2: mov esi, dword ptr [eax] */
    eax = MEM32(esi + 0x4); /* 0x171C85E4: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x10); /* 0x171C85E7: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, edi); /* 0x171C85EA: push edi */
    edi = MEM32(ecx); /* 0x171C85EB: mov edi, dword ptr [ecx] */
    edx = MEM32(edi + 0x10); /* 0x171C85ED: mov edx, dword ptr [edi + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C85F0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(edi + 0x4); /* 0x171C85F3: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x10); /* 0x171C85F6: mov eax, dword ptr [eax + 0x10] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x171C85F9: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(esi + 0x10); /* 0x171C85FC: mov ecx, dword ptr [esi + 0x10] */
    /* cmp ecx, edx */ /* 0x171C85FF: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = ecx; /* 0x171C8601: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0xC)) = edx; /* 0x171C8604: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x171C8607: mov dword ptr [ebp - 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8A09; /* 0x171C860A: je 0x171c8a09 */
L_171C8610:
    eax = MEM32(ebp + (-0x4)); /* 0x171C8610: mov eax, dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C8613: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x30)); /* 0x171C8616: fcomp qword ptr [eax + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8619: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C861B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8625; /* 0x171C861E: jp 0x171c8625 */
L_171C8620:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C8620: fld qword ptr [ecx + 0x30] */
    goto L_171C862B; /* 0x171C8623: jmp 0x171c862b */
L_171C8625:
    eax = MEM32(ebp + (-0x4)); /* 0x171C8625: mov eax, dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x171C8628: fld qword ptr [eax + 0x30] */
L_171C862B:
    eax = MEM32(ebp + (-0x8)); /* 0x171C862B: mov eax, dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171C862E: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x30)); /* 0x171C8631: fcomp qword ptr [eax + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8634: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171C8636: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C8640; /* 0x171C8639: jne 0x171c8640 */
L_171C863B:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171C863B: fld qword ptr [edx + 0x30] */
    goto L_171C8646; /* 0x171C863E: jmp 0x171c8646 */
L_171C8640:
    eax = MEM32(ebp + (-0x8)); /* 0x171C8640: mov eax, dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x171C8643: fld qword ptr [eax + 0x30] */
L_171C8646:
    fp_push(_st[1]); /* 0x171C8646: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8648: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C864A: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C864C: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x171C864E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C8A09; /* 0x171C8651: je 0x171c8a09 */
L_171C8657:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C8657: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x28)); /* 0x171C865A: fcomp qword ptr [edx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C865D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C865F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C869C; /* 0x171C8662: jnp 0x171c869c */
L_171C8664:
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C8664: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C8667: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C866A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C866C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C866E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8680; /* 0x171C8671: jp 0x171c8680 */
L_171C8673:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C8673: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x30)); /* 0x171C8676: fcomp qword ptr [edx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8679: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C867B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C869C; /* 0x171C867E: jnp 0x171c869c */
L_171C8680:
    PUSH32(esp, ecx); /* 0x171C8680: push ecx */
    PUSH32(esp, edx); /* 0x171C8681: push edx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171C8682: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_171C9869); /* 0x171C8685: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C868A: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8690: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C8692: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C86B7; /* 0x171C8695: jp 0x171c86b7 */
L_171C8697:
    goto L_171C8A09; /* 0x171C8697: jmp 0x171c8a09 */
L_171C869C:
    PUSH32(esp, edx); /* 0x171C869C: push edx */
    PUSH32(esp, ecx); /* 0x171C869D: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171C869E: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_171C9869); /* 0x171C86A1: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C86A6: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C86AC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C86AE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C8A09; /* 0x171C86B1: je 0x171c8a09 */
L_171C86B7:
    eax = ebp + (-0x58); /* 0x171C86B7: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x171C86BA: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171C86BB: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171C86BE: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x171C86C1: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171C86C4: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_171C999B); /* 0x171C86C7: call 0x171c999b */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x171C86CC: fld qword ptr [ebp - 0x30] */
    ecx = MEM32(ebx + 0x70); /* 0x171C86CF: mov ecx, dword ptr [ebx + 0x70] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x171C86D2: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C86D5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C86D7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C86F8; /* 0x171C86DA: jnp 0x171c86f8 */
L_171C86DC:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C86DC: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x171C86DF: fld qword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C86E2: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C86E4: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C86E6: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8707; /* 0x171C86E9: jp 0x171c8707 */
L_171C86EB:
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x171C86EB: fld qword ptr [ebp - 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x171C86EE: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C86F1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C86F3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8707; /* 0x171C86F6: jp 0x171c8707 */
L_171C86F8:
    eax = MEM32(ebx + 0x70); /* 0x171C86F8: mov eax, dword ptr [ebx + 0x70] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171C86FB: fld qword ptr [eax + 0x28] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x171C86FE: fstp qword ptr [ebp - 0x30] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x171C8701: fld qword ptr [eax + 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x28)) = _v; } /* 0x171C8704: fstp qword ptr [ebp - 0x28] */
L_171C8707:
    edx = MEM32(ebp + (-0x18)); /* 0x171C8707: mov edx, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0xC)); /* 0x171C870A: mov eax, dword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C870D: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x28)); /* 0x171C8710: fcomp qword ptr [eax + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8713: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C8715: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C8744; /* 0x171C8718: jnp 0x171c8744 */
L_171C871A:
    eax = MEM32(ebp + (-0xC)); /* 0x171C871A: mov eax, dword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171C871D: fld qword ptr [eax + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C8720: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8723: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8725: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8727: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C873C; /* 0x171C872A: jp 0x171c873c */
L_171C872C:
    eax = MEM32(ebp + (-0xC)); /* 0x171C872C: mov eax, dword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171C872F: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x30)); /* 0x171C8732: fcomp qword ptr [eax + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8735: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C8737: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C8744; /* 0x171C873A: jnp 0x171c8744 */
L_171C873C:
    eax = MEM32(ebp + (-0xC)); /* 0x171C873C: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x171C873F: mov dword ptr [ebp - 0x10], eax */
    goto L_171C8747; /* 0x171C8742: jmp 0x171c8747 */
L_171C8744:
    MEM32(ebp + (-0x10)) = edx; /* 0x171C8744: mov dword ptr [ebp - 0x10], edx */
L_171C8747:
    eax = MEM32(ebp + (-0x10)); /* 0x171C8747: mov eax, dword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171C874A: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x30))); /* 0x171C874D: fcomp qword ptr [ebp - 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8750: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C8752: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C8779; /* 0x171C8755: jnp 0x171c8779 */
L_171C8757:
    eax = MEM32(ebp + (-0x10)); /* 0x171C8757: mov eax, dword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x171C875A: fld qword ptr [ebp - 0x30] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171C875D: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8760: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8762: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8764: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8788; /* 0x171C8767: jp 0x171c8788 */
L_171C8769:
    eax = MEM32(ebp + (-0x10)); /* 0x171C8769: mov eax, dword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x171C876C: fld qword ptr [eax + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x28))); /* 0x171C876F: fcomp qword ptr [ebp - 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8772: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C8774: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8788; /* 0x171C8777: jp 0x171c8788 */
L_171C8779:
    eax = MEM32(ebp + (-0x10)); /* 0x171C8779: mov eax, dword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171C877C: fld qword ptr [eax + 0x28] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x171C877F: fstp qword ptr [ebp - 0x30] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x171C8782: fld qword ptr [eax + 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x28)) = _v; } /* 0x171C8785: fstp qword ptr [ebp - 0x28] */
L_171C8788:
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C8788: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x171C878B: fld qword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C878E: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8790: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8792: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C87A6; /* 0x171C8795: jp 0x171c87a6 */
L_171C8797:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171C8797: fld qword ptr [edx + 0x30] */
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x171C879A: fld qword ptr [ebp - 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C879D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C879F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C87A1: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C87C7; /* 0x171C87A4: jnp 0x171c87c7 */
L_171C87A6:
    edx = MEM32(ebp + (-0xC)); /* 0x171C87A6: mov edx, dword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C87A9: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x171C87AC: fld qword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C87AF: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C87B1: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C87B3: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C87D5; /* 0x171C87B6: jp 0x171c87d5 */
L_171C87B8:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171C87B8: fld qword ptr [edx + 0x30] */
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x171C87BB: fld qword ptr [ebp - 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C87BE: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C87C0: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C87C2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C87D5; /* 0x171C87C5: jp 0x171c87d5 */
L_171C87C7:
    eax = MEM32(ebp + 0x8); /* 0x171C87C7: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171C87CA: push ebx */
    RECOMP_CALL(sub_171C83D5); /* 0x171C87CB: call 0x171c83d5 */
    RECOMP_FLAGS_IN();
    goto L_171C8A09; /* 0x171C87D0: jmp 0x171c8a09 */
L_171C87D5:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C87D5: fld qword ptr [ecx + 0x28] */
    edx = MEM32(ebp + (-0x4)); /* 0x171C87D8: mov edx, dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C87DB: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C87DE: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C87E0: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C87E2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C87F6; /* 0x171C87E5: jp 0x171c87f6 */
L_171C87E7:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C87E7: fld qword ptr [ecx + 0x30] */
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171C87EA: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C87ED: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C87EF: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C87F1: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C8812; /* 0x171C87F4: jnp 0x171c8812 */
L_171C87F6:
    eax = ebp + (-0x58); /* 0x171C87F6: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x171C87F9: push eax */
    PUSH32(esp, ecx); /* 0x171C87FA: push ecx */
    PUSH32(esp, edx); /* 0x171C87FB: push edx */
    RECOMP_CALL(sub_171C9869); /* 0x171C87FC: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C8801: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8807: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171C8809: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C88C1; /* 0x171C880C: je 0x171c88c1 */
L_171C8812:
    ecx = MEM32(ebx + 0x70); /* 0x171C8812: mov ecx, dword ptr [ebx + 0x70] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C8815: fld qword ptr [ecx + 0x28] */
    edx = MEM32(ebp + (-0x8)); /* 0x171C8818: mov edx, dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C881B: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C881E: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8820: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8822: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8836; /* 0x171C8825: jp 0x171c8836 */
L_171C8827:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C8827: fld qword ptr [ecx + 0x30] */
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171C882A: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C882D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C882F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8831: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C884E; /* 0x171C8834: jnp 0x171c884e */
L_171C8836:
    eax = ebp + (-0x58); /* 0x171C8836: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x171C8839: push eax */
    PUSH32(esp, ecx); /* 0x171C883A: push ecx */
    PUSH32(esp, edx); /* 0x171C883B: push edx */
    RECOMP_CALL(sub_171C9869); /* 0x171C883C: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C8841: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8847: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C8849: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C88C1; /* 0x171C884C: jnp 0x171c88c1 */
L_171C884E:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171C884E: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_171C7016); /* 0x171C8851: call 0x171c7016 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x171C8856: push dword ptr [edi + 4] */
    RECOMP_CALL(sub_171C7016); /* 0x171C8859: call 0x171c7016 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x171C885E: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, esi); /* 0x171C8861: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C8862: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_171C6E99); /* 0x171C8865: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x171C886A: fld qword ptr [ebp - 0x30] */
    eax = MEM32(esi + 0x10); /* 0x171C886D: mov eax, dword ptr [esi + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x28) = _v; } /* 0x171C8870: fstp qword ptr [eax + 0x28] */
    eax = MEM32(esi + 0x10); /* 0x171C8873: mov eax, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x171C8876: fld qword ptr [ebp - 0x28] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x30) = _v; } /* 0x171C8879: fstp qword ptr [eax + 0x30] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x171C887C: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(ebx + 0x6C)); /* 0x171C887F: push dword ptr [ebx + 0x6c] */
    RECOMP_CALL(sub_171CA5FD); /* 0x171C8882: call 0x171ca5fd */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171C8887: push dword ptr [ebp - 0xc] */
    ecx = MEM32(esi + 0x10); /* 0x171C888A: mov ecx, dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x171C888D: push dword ptr [ebp - 0x18] */
    edx = MEM32(ebp + (-0x4)); /* 0x171C8890: mov edx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x38) = eax; /* 0x171C8893: mov dword ptr [ecx + 0x38], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x171C8896: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(esi + 0x10); /* 0x171C8899: mov ecx, dword ptr [esi + 0x10] */
    PUSH32(esp, ebx); /* 0x171C889C: push ebx */
    RECOMP_CALL(sub_171C8365); /* 0x171C889D: call 0x171c8365 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x171C88A2: mov eax, dword ptr [ebp - 0x14] */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x171C88A5: mov byte ptr [eax + 0xe], 1 */
    eax = MEM32(ebp + 0x8); /* 0x171C88A9: mov eax, dword ptr [ebp + 8] */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x171C88AC: mov byte ptr [eax + 0xe], 1 */
    eax = MEM32(eax + 0x4); /* 0x171C88B0: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x4); /* 0x171C88B3: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x171C88B6: mov eax, dword ptr [eax] */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x171C88B8: mov byte ptr [eax + 0xe], 1 */
    goto L_171C8A09; /* 0x171C88BC: jmp 0x171c8a09 */
L_171C88C1:
    eax = MEM32(ebx + 0x70); /* 0x171C88C1: mov eax, dword ptr [ebx + 0x70] */
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x171C88C4: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8904; /* 0x171C88C7: jne 0x171c8904 */
L_171C88C9:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171C88C9: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_171C7016); /* 0x171C88CC: call 0x171c7016 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171C88D1: push esi */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x171C88D2: push dword ptr [edi + 4] */
    RECOMP_CALL(sub_171C6E99); /* 0x171C88D5: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171C88DA: mov eax, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C8009); /* 0x171C88DD: call 0x171c8009 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x171C88E2: push dword ptr [ebp - 0x14] */
    edi = eax; /* 0x171C88E5: mov edi, eax */
    eax = MEM32(edi + 0x4); /* 0x171C88E7: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C88EA: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x171C88ED: mov eax, dword ptr [eax] */
    esi = MEM32(eax); /* 0x171C88EF: mov esi, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x171C88F1: push ebx */
    RECOMP_CALL(sub_171C8134); /* 0x171C88F2: call 0x171c8134 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x171C88F7: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, 1); /* 0x171C88FA: push 1 */
    PUSH32(esp, esi); /* 0x171C88FC: push esi */
    PUSH32(esp, esi); /* 0x171C88FD: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C88FE: push dword ptr [eax + 0xc] */
    PUSH32(esp, edi); /* 0x171C8901: push edi */
    goto L_171C8964; /* 0x171C8902: jmp 0x171c8964 */
L_171C8904:
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x171C8904: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8972; /* 0x171C8907: jne 0x171c8972 */
L_171C8909:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x171C8909: push dword ptr [edi + 4] */
    RECOMP_CALL(sub_171C7016); /* 0x171C890C: call 0x171c7016 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x171C8911: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C8914: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171C8917: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_171C6E99); /* 0x171C891A: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171C891F: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = eax; /* 0x171C8922: mov dword ptr [ebp - 0x14], eax */
    RECOMP_CALL(sub_171C8064); /* 0x171C8925: call 0x171c8064 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x171C892A: mov dword ptr [ebp + 8], eax */
    eax = MEM32(eax + 0x4); /* 0x171C892D: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C8930: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x171C8933: mov eax, dword ptr [eax] */
    eax = MEM32(eax); /* 0x171C8935: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x171C8937: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C893A: mov eax, dword ptr [eax + 8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x171C893D: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(edi + 0x4); /* 0x171C8940: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(eax + 0xC); /* 0x171C8943: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(ebp + (-0x14)); /* 0x171C8946: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, 0); /* 0x171C8949: push 0 */
    PUSH32(esp, ebx); /* 0x171C894B: push ebx */
    MEM32(eax) = ecx; /* 0x171C894C: mov dword ptr [eax], ecx */
    RECOMP_CALL(sub_171C8134); /* 0x171C894E: call 0x171c8134 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x171C8953: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, 1); /* 0x171C8956: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x171C8958: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x171C895B: push dword ptr [ecx + 8] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x171C895E: push dword ptr [eax + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8961: push dword ptr [ebp + 8] */
L_171C8964:
    PUSH32(esp, ebx); /* 0x171C8964: push ebx */
    RECOMP_CALL(sub_171C8CD6); /* 0x171C8965: call 0x171c8cd6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C896A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C896C: inc eax */
    _flag_k = FK_INC;
    goto L_171C8A0B; /* 0x171C896D: jmp 0x171c8a0b */
L_171C8972:
    ecx = ebp + (-0x58); /* 0x171C8972: lea ecx, [ebp - 0x58] */
    PUSH32(esp, ecx); /* 0x171C8975: push ecx */
    PUSH32(esp, eax); /* 0x171C8976: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171C8977: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_171C9869); /* 0x171C897A: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C897F: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8985: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171C8987: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C89BF; /* 0x171C898A: jne 0x171c89bf */
L_171C898C:
    eax = MEM32(ebp + 0x8); /* 0x171C898C: mov eax, dword ptr [ebp + 8] */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x171C898F: mov byte ptr [eax + 0xe], 1 */
    eax = MEM32(eax + 0x4); /* 0x171C8993: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x4); /* 0x171C8996: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x171C8999: mov eax, dword ptr [eax] */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x171C899B: mov byte ptr [eax + 0xe], 1 */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171C899F: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_171C7016); /* 0x171C89A2: call 0x171c7016 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x70); /* 0x171C89A7: mov eax, dword ptr [ebx + 0x70] */
    ecx = MEM32(esi + 0x10); /* 0x171C89AA: mov ecx, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171C89AD: fld qword ptr [eax + 0x28] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x28) = _v; } /* 0x171C89B0: fstp qword ptr [ecx + 0x28] */
    eax = MEM32(ebx + 0x70); /* 0x171C89B3: mov eax, dword ptr [ebx + 0x70] */
    ecx = MEM32(esi + 0x10); /* 0x171C89B6: mov ecx, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x171C89B9: fld qword ptr [eax + 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x30) = _v; } /* 0x171C89BC: fstp qword ptr [ecx + 0x30] */
L_171C89BF:
    eax = ebp + (-0x58); /* 0x171C89BF: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x171C89C2: push eax */
    PUSH32(esp, MEM32(ebx + 0x70)); /* 0x171C89C3: push dword ptr [ebx + 0x70] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171C89C6: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_171C9869); /* 0x171C89C9: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C89CE: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C89D4: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C89D6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8A09; /* 0x171C89D9: jp 0x171c8a09 */
L_171C89DB:
    eax = MEM32(ebp + (-0x14)); /* 0x171C89DB: mov eax, dword ptr [ebp - 0x14] */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x171C89DE: mov byte ptr [eax + 0xe], 1 */
    eax = MEM32(ebp + 0x8); /* 0x171C89E2: mov eax, dword ptr [ebp + 8] */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x171C89E5: mov byte ptr [eax + 0xe], 1 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x171C89E9: push dword ptr [edi + 4] */
    RECOMP_CALL(sub_171C7016); /* 0x171C89EC: call 0x171c7016 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x70); /* 0x171C89F1: mov eax, dword ptr [ebx + 0x70] */
    ecx = MEM32(edi + 0x10); /* 0x171C89F4: mov ecx, dword ptr [edi + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171C89F7: fld qword ptr [eax + 0x28] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x28) = _v; } /* 0x171C89FA: fstp qword ptr [ecx + 0x28] */
    eax = MEM32(ebx + 0x70); /* 0x171C89FD: mov eax, dword ptr [ebx + 0x70] */
    ecx = MEM32(edi + 0x10); /* 0x171C8A00: mov ecx, dword ptr [edi + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x171C8A03: fld qword ptr [eax + 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x30) = _v; } /* 0x171C8A06: fstp qword ptr [ecx + 0x30] */
L_171C8A09:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C8A09: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171C8A0B:
    edi = POP32_VAL(esp); /* 0x171C8A0B: pop edi */
    esi = POP32_VAL(esp); /* 0x171C8A0C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C8A0D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C8A0E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C8A16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C8A16u);

L_171C8A16:
    edi = edi; /* 0x171C8A16: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C8A18: push ebp */
    ebp = esp; /* 0x171C8A19: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171C8A1B: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171C8A1E: push ebx */
    PUSH32(esp, esi); /* 0x171C8A1F: push esi */
    PUSH32(esp, edi); /* 0x171C8A20: push edi */
    edi = eax; /* 0x171C8A21: mov edi, eax */
    eax = MEM32(edi + 0x4); /* 0x171C8A23: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C8A26: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x171C8A29: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C8A2B: mov dword ptr [ebp - 4], eax */
L_171C8A2E:
    eax = MEM32(ebp + (-0x4)); /* 0x171C8A2E: mov eax, dword ptr [ebp - 4] */
    goto L_171C8A41; /* 0x171C8A31: jmp 0x171c8a41 */
L_171C8A33:
    edi = MEM32(ebp + (-0x4)); /* 0x171C8A33: mov edi, dword ptr [ebp - 4] */
    eax = MEM32(edi + 0x4); /* 0x171C8A36: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C8A39: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x171C8A3C: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C8A3E: mov dword ptr [ebp - 4], eax */
L_171C8A41:
    /* cmp MEM8(eax + 0xE), 0 */ /* 0x171C8A41: cmp byte ptr [eax + 0xe], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xE)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8A33; /* 0x171C8A45: jne 0x171c8a33 */
L_171C8A47:
    /* cmp MEM8(edi + 0xE), 0 */ /* 0x171C8A47: cmp byte ptr [edi + 0xe], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xE)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8A6A; /* 0x171C8A4B: jne 0x171c8a6a */
L_171C8A4D:
    eax = MEM32(edi + 0x4); /* 0x171C8A4D: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x4); /* 0x171C8A50: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x4)) = edi; /* 0x171C8A53: mov dword ptr [ebp - 4], edi */
    edi = MEM32(eax); /* 0x171C8A56: mov edi, dword ptr [eax] */
    /* test edi, edi */ /* 0x171C8A58: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C8B8B; /* 0x171C8A5A: je 0x171c8b8b */
L_171C8A60:
    /* cmp MEM8(edi + 0xE), 0 */ /* 0x171C8A60: cmp byte ptr [edi + 0xe], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xE)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8B8B; /* 0x171C8A64: je 0x171c8b8b */
L_171C8A6A:
    ebx = MEM32(edi); /* 0x171C8A6A: mov ebx, dword ptr [edi] */
    eax = MEM32(ebp + (-0x4)); /* 0x171C8A6C: mov eax, dword ptr [ebp - 4] */
    MEM8(edi + 0xE) = (uint8_t)(0); /* 0x171C8A6F: mov byte ptr [edi + 0xe], 0 */
    esi = MEM32(eax); /* 0x171C8A73: mov esi, dword ptr [eax] */
    ecx = MEM32(ebx + 0x4); /* 0x171C8A75: mov ecx, dword ptr [ebx + 4] */
    eax = MEM32(esi + 0x4); /* 0x171C8A78: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(ecx + 0x10); /* 0x171C8A7B: mov ecx, dword ptr [ecx + 0x10] */
    /* cmp ecx, MEM32(eax + 0x10) */ /* 0x171C8A7E: cmp ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x171C8A81: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = esi; /* 0x171C8A84: mov dword ptr [ebp - 8], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8AEA; /* 0x171C8A87: je 0x171c8aea */
L_171C8A89:
    esi = edi; /* 0x171C8A89: mov esi, edi */
    RECOMP_CALL(sub_171C84F0); /* 0x171C8A8B: call 0x171c84f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171C8A90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C8AE7; /* 0x171C8A92: je 0x171c8ae7 */
L_171C8A94:
    esi = MEM32(ebp + (-0x4)); /* 0x171C8A94: mov esi, dword ptr [ebp - 4] */
    /* cmp MEM8(esi + 0xF), 0 */ /* 0x171C8A97: cmp byte ptr [esi + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8ABF; /* 0x171C8A9B: je 0x171c8abf */
L_171C8A9D:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8A9D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C7FE0); /* 0x171C8AA0: call 0x171c7fe0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171C8AA5: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_171C6F1B); /* 0x171C8AA8: call 0x171c6f1b */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x171C8AAD: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C8AB0: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x171C8AB3: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C8AB5: mov dword ptr [ebp - 4], eax */
    eax = MEM32(eax); /* 0x171C8AB8: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171C8ABA: mov dword ptr [ebp - 8], eax */
    goto L_171C8AE7; /* 0x171C8ABD: jmp 0x171c8ae7 */
L_171C8ABF:
    /* cmp MEM8(edi + 0xF), 0 */ /* 0x171C8ABF: cmp byte ptr [edi + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8AE7; /* 0x171C8AC3: je 0x171c8ae7 */
L_171C8AC5:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8AC5: push dword ptr [ebp + 8] */
    esi = edi; /* 0x171C8AC8: mov esi, edi */
    RECOMP_CALL(sub_171C7FE0); /* 0x171C8ACA: call 0x171c7fe0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x171C8ACF: push ebx */
    RECOMP_CALL(sub_171C6F1B); /* 0x171C8AD0: call 0x171c6f1b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x171C8AD5: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x4); /* 0x171C8AD8: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x4); /* 0x171C8ADB: mov eax, dword ptr [eax + 4] */
    edi = MEM32(eax); /* 0x171C8ADE: mov edi, dword ptr [eax] */
    eax = MEM32(edi); /* 0x171C8AE0: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0xC)) = eax; /* 0x171C8AE2: mov dword ptr [ebp - 0xc], eax */
    ebx = eax; /* 0x171C8AE5: mov ebx, eax */
L_171C8AE7:
    esi = MEM32(ebp + (-0x8)); /* 0x171C8AE7: mov esi, dword ptr [ebp - 8] */
L_171C8AEA:
    eax = MEM32(ebx + 0x10); /* 0x171C8AEA: mov eax, dword ptr [ebx + 0x10] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x171C8AED: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8B3E; /* 0x171C8AF0: je 0x171c8b3e */
L_171C8AF2:
    eax = MEM32(ebx + 0x4); /* 0x171C8AF2: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(esi + 0x4); /* 0x171C8AF5: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x10); /* 0x171C8AF8: mov eax, dword ptr [eax + 0x10] */
    edx = MEM32(ecx + 0x10); /* 0x171C8AFB: mov edx, dword ptr [ecx + 0x10] */
    /* cmp eax, edx */ /* 0x171C8AFE: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8B34; /* 0x171C8B00: je 0x171c8b34 */
L_171C8B02:
    /* cmp MEM8(edi + 0xF), 0 */ /* 0x171C8B02: cmp byte ptr [edi + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8B34; /* 0x171C8B06: jne 0x171c8b34 */
L_171C8B08:
    ecx = MEM32(ebp + (-0x4)); /* 0x171C8B08: mov ecx, dword ptr [ebp - 4] */
    /* cmp MEM8(ecx + 0xF), 0 */ /* 0x171C8B0B: cmp byte ptr [ecx + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8B34; /* 0x171C8B0F: jne 0x171c8b34 */
L_171C8B11:
    ecx = MEM32(ebp + 0x8); /* 0x171C8B11: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x70); /* 0x171C8B14: mov ecx, dword ptr [ecx + 0x70] */
    /* cmp eax, ecx */ /* 0x171C8B17: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8B1F; /* 0x171C8B19: je 0x171c8b1f */
L_171C8B1B:
    /* cmp edx, ecx */ /* 0x171C8B1B: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8B34; /* 0x171C8B1D: jne 0x171c8b34 */
L_171C8B1F:
    ebx = MEM32(ebp + 0x8); /* 0x171C8B1F: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171C8B22: push edi */
    RECOMP_CALL(sub_171C85CE); /* 0x171C8B23: call 0x171c85ce */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171C8B28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C8B8B; /* 0x171C8B2A: jne 0x171c8b8b */
L_171C8B2C:
    ebx = MEM32(ebp + (-0xC)); /* 0x171C8B2C: mov ebx, dword ptr [ebp - 0xc] */
    esi = MEM32(ebp + (-0x8)); /* 0x171C8B2F: mov esi, dword ptr [ebp - 8] */
    goto L_171C8B3E; /* 0x171C8B32: jmp 0x171c8b3e */
L_171C8B34:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8B34: push dword ptr [ebp + 8] */
    eax = edi; /* 0x171C8B37: mov eax, edi */
    RECOMP_CALL(sub_171C83D5); /* 0x171C8B39: call 0x171c83d5 */
    RECOMP_FLAGS_IN();
L_171C8B3E:
    eax = MEM32(ebx + 0x10); /* 0x171C8B3E: mov eax, dword ptr [ebx + 0x10] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x171C8B41: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8A2E; /* 0x171C8B44: jne 0x171c8a2e */
L_171C8B4A:
    ecx = MEM32(ebx + 0x4); /* 0x171C8B4A: mov ecx, dword ptr [ebx + 4] */
    eax = MEM32(esi + 0x4); /* 0x171C8B4D: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(ecx + 0x10); /* 0x171C8B50: mov ecx, dword ptr [ecx + 0x10] */
    /* cmp ecx, MEM32(eax + 0x10) */ /* 0x171C8B53: cmp ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8A2E; /* 0x171C8B56: jne 0x171c8a2e */
L_171C8B5C:
    ecx = MEM32(ebx + 0x1C); /* 0x171C8B5C: mov ecx, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + ecx; /* 0x171C8B5F: add dword ptr [esi + 0x1c], ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0x4); /* 0x171C8B62: mov ecx, dword ptr [ebx + 4] */
    ecx = MEM32(ecx + 0x1C); /* 0x171C8B65: mov ecx, dword ptr [ecx + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8B68: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + ecx; /* 0x171C8B6B: add dword ptr [eax + 0x1c], ecx */
    _flag_k = FK_ADD;
    esi = edi; /* 0x171C8B6E: mov esi, edi */
    RECOMP_CALL(sub_171C7FE0); /* 0x171C8B70: call 0x171c7fe0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x171C8B75: push ebx */
    RECOMP_CALL(sub_171C6F1B); /* 0x171C8B76: call 0x171c6f1b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x171C8B7B: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x4); /* 0x171C8B7E: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x4); /* 0x171C8B81: mov eax, dword ptr [eax + 4] */
    edi = MEM32(eax); /* 0x171C8B84: mov edi, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_171C8A2E; /* 0x171C8B86: jmp 0x171c8a2e */
L_171C8B8B:
    edi = POP32_VAL(esp); /* 0x171C8B8B: pop edi */
    esi = POP32_VAL(esp); /* 0x171C8B8C: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C8B8D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C8B8E: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C8B8F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C8B97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C8B97u);

L_171C8B97:
    edi = edi; /* 0x171C8B97: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C8B99: push ebp */
    ebp = esp; /* 0x171C8B9A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C8B9C: push esi */
    PUSH32(esp, edi); /* 0x171C8B9D: push edi */
    PUSH32(esp, 0x10u); /* 0x171C8B9E: push 0x10 */
    edi = eax; /* 0x171C8BA0: mov edi, eax */
    RECOMP_CALL(sub_1721B254); /* 0x171C8BA2: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171C8BA7: mov esi, eax */
    /* test esi, esi */ /* 0x171C8BA9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171C8BAB: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C8C14; /* 0x171C8BAC: je 0x171c8c14 */
L_171C8BAE:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x171C8BAE: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_171C6E5D); /* 0x171C8BB1: call 0x171c6e5d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171C8BB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C8C14; /* 0x171C8BB8: je 0x171c8c14 */
L_171C8BBA:
    ecx = MEM32(eax + 0x10); /* 0x171C8BBA: mov ecx, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(0x17025D28)); /* 0x171C8BBD: fld qword ptr [0x17025d28] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x28) = _v; } /* 0x171C8BC3: fstp qword ptr [ecx + 0x28] */
    ecx = MEM32(eax + 0x10); /* 0x171C8BC6: mov ecx, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x171C8BC9: fld qword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171C8BCC: push esi */
    *(double*)ADDR(ecx + 0x30) = _st[0]; /* 0x171C8BCD: fst qword ptr [ecx + 0x30] */
    ecx = MEM32(eax + 0x4); /* 0x171C8BD0: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + 0x10); /* 0x171C8BD3: mov ecx, dword ptr [ecx + 0x10] */
    fp_push(*(double*)ADDR(0x17025D20)); /* 0x171C8BD6: fld qword ptr [0x17025d20] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x28) = _v; } /* 0x171C8BDC: fstp qword ptr [ecx + 0x28] */
    ecx = MEM32(eax + 0x4); /* 0x171C8BDF: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + 0x10); /* 0x171C8BE2: mov ecx, dword ptr [ecx + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x30) = _v; } /* 0x171C8BE5: fstp qword ptr [ecx + 0x30] */
    ecx = MEM32(eax + 0x4); /* 0x171C8BE8: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + 0x10); /* 0x171C8BEB: mov ecx, dword ptr [ecx + 0x10] */
    MEM32(edi + 0x70) = ecx; /* 0x171C8BEE: mov dword ptr [edi + 0x70], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x171C8BF1: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x171C8BF5: mov dword ptr [esi], eax */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x171C8BF7: mov byte ptr [esi + 0xc], 0 */
    MEM8(esi + 0xF) = (uint8_t)(0); /* 0x171C8BFB: mov byte ptr [esi + 0xf], 0 */
    MEM8(esi + 0xD) = (uint8_t)(1); /* 0x171C8BFF: mov byte ptr [esi + 0xd], 1 */
    MEM8(esi + 0xE) = (uint8_t)(0); /* 0x171C8C03: mov byte ptr [esi + 0xe], 0 */
    edi = MEM32(edi + 0x68); /* 0x171C8C07: mov edi, dword ptr [edi + 0x68] */
    PUSH32(esp, edi); /* 0x171C8C0A: push edi */
    PUSH32(esp, edi); /* 0x171C8C0B: push edi */
    RECOMP_CALL(sub_171C9EF6); /* 0x171C8C0C: call 0x171c9ef6 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x171C8C11: mov dword ptr [esi + 4], eax */
L_171C8C14:
    edi = POP32_VAL(esp); /* 0x171C8C14: pop edi */
    esi = POP32_VAL(esp); /* 0x171C8C15: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C8C16: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C8C17: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C8C1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C8C1Fu);

L_171C8C1F:
    edi = edi; /* 0x171C8C1F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C8C21: push ebp */
    ebp = esp; /* 0x171C8C22: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171C8C24: push ecx */
    PUSH32(esp, ecx); /* 0x171C8C25: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x171C8C26: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x171C8C29: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x58u; /* 0x171C8C2C: add eax, 0x58 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x171C8C2F: push esi */
    esi = MEM32(eax); /* 0x171C8C30: mov esi, dword ptr [eax] */
    /* cmp esi, eax */ /* 0x171C8C32: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x171C8C34: mov dword ptr [ebp - 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8CCC; /* 0x171C8C37: je 0x171c8ccc */
L_171C8C3D:
    PUSH32(esp, ebx); /* 0x171C8C3D: push ebx */
    PUSH32(esp, edi); /* 0x171C8C3E: push edi */
L_171C8C3F:
    eax = MEM32(esi + 0x4); /* 0x171C8C3F: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax + 0x10); /* 0x171C8C42: mov edx, dword ptr [eax + 0x10] */
    ecx = MEM32(esi + 0x10); /* 0x171C8C45: mov ecx, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C8C48: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C8C4B: fld qword ptr [ecx + 0x28] */
    edi = MEM32(esi); /* 0x171C8C4E: mov edi, dword ptr [esi] */
    ebx = MEM32(esi + 0xC); /* 0x171C8C50: mov ebx, dword ptr [esi + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8C53: fucompp  */
    fp_pop(); fp_pop();
    MEM32(ebp + (-0x4)) = edi; /* 0x171C8C55: mov dword ptr [ebp - 4], edi */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8C58: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8C5A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8C8A; /* 0x171C8C5D: jp 0x171c8c8a */
L_171C8C5F:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171C8C5F: fld qword ptr [edx + 0x30] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C8C62: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8C65: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8C67: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8C69: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8C8A; /* 0x171C8C6C: jp 0x171c8c8a */
L_171C8C6E:
    /* cmp MEM32(ebx + 0xC), esi */ /* 0x171C8C6E: cmp dword ptr [ebx + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8C8F; /* 0x171C8C71: je 0x171c8c8f */
L_171C8C73:
    edi = MEM32(ebp + 0x8); /* 0x171C8C73: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171C8C76: push ebx */
    RECOMP_CALL(sub_171C823D); /* 0x171C8C77: call 0x171c823d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171C8C7C: push esi */
    RECOMP_CALL(sub_171C6F1B); /* 0x171C8C7D: call 0x171c6f1b */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x4)); /* 0x171C8C82: mov edi, dword ptr [ebp - 4] */
    esi = ebx; /* 0x171C8C85: mov esi, ebx */
    ebx = MEM32(ebx + 0xC); /* 0x171C8C87: mov ebx, dword ptr [ebx + 0xc] */
L_171C8C8A:
    /* cmp MEM32(ebx + 0xC), esi */ /* 0x171C8C8A: cmp dword ptr [ebx + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8CBF; /* 0x171C8C8D: jne 0x171c8cbf */
L_171C8C8F:
    /* cmp ebx, esi */ /* 0x171C8C8F: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8CA9; /* 0x171C8C91: je 0x171c8ca9 */
L_171C8C93:
    /* cmp ebx, edi */ /* 0x171C8C93: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8C9C; /* 0x171C8C95: je 0x171c8c9c */
L_171C8C97:
    /* cmp ebx, MEM32(edi + 0x4) */ /* 0x171C8C97: cmp ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8CA3; /* 0x171C8C9A: jne 0x171c8ca3 */
L_171C8C9C:
    eax = MEM32(edi); /* 0x171C8C9C: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C8C9E: mov dword ptr [ebp - 4], eax */
    edi = eax; /* 0x171C8CA1: mov edi, eax */
L_171C8CA3:
    PUSH32(esp, ebx); /* 0x171C8CA3: push ebx */
    RECOMP_CALL(sub_171C6F1B); /* 0x171C8CA4: call 0x171c6f1b */
    RECOMP_FLAGS_IN();
L_171C8CA9:
    /* cmp esi, edi */ /* 0x171C8CA9: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8CB2; /* 0x171C8CAB: je 0x171c8cb2 */
L_171C8CAD:
    /* cmp esi, MEM32(edi + 0x4) */ /* 0x171C8CAD: cmp esi, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8CB9; /* 0x171C8CB0: jne 0x171c8cb9 */
L_171C8CB2:
    eax = MEM32(edi); /* 0x171C8CB2: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C8CB4: mov dword ptr [ebp - 4], eax */
    edi = eax; /* 0x171C8CB7: mov edi, eax */
L_171C8CB9:
    PUSH32(esp, esi); /* 0x171C8CB9: push esi */
    RECOMP_CALL(sub_171C6F1B); /* 0x171C8CBA: call 0x171c6f1b */
    RECOMP_FLAGS_IN();
L_171C8CBF:
    /* cmp edi, MEM32(ebp + (-0x8)) */ /* 0x171C8CBF: cmp edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = edi; /* 0x171C8CC2: mov esi, edi */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8C3F; /* 0x171C8CC4: jne 0x171c8c3f */
L_171C8CCA:
    edi = POP32_VAL(esp); /* 0x171C8CCA: pop edi */
    ebx = POP32_VAL(esp); /* 0x171C8CCB: pop ebx */
L_171C8CCC:
    esi = POP32_VAL(esp); /* 0x171C8CCC: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C8CCD: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C8CCE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C8CD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C8CD6u);

L_171C8CD6:
    edi = edi; /* 0x171C8CD6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C8CD8: push ebp */
    ebp = esp; /* 0x171C8CD9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171C8CDB: push ecx */
    PUSH32(esp, ebx); /* 0x171C8CDC: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x171C8CDD: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x171C8CE0: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171C8CE1: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171C8CE4: push edi */
    MEM32(ebp + (-0x4)) = 1; /* 0x171C8CE5: mov dword ptr [ebp - 4], 1 */
L_171C8CEC:
    edi = MEM32(ebx + 0x4); /* 0x171C8CEC: mov edi, dword ptr [ebx + 4] */
    PUSH32(esp, esi); /* 0x171C8CEF: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8CF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C8084); /* 0x171C8CF3: call 0x171c8084 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebx + 0x8); /* 0x171C8CF8: mov ebx, dword ptr [ebx + 8] */
    /* cmp ebx, MEM32(ebp + 0x14) */ /* 0x171C8CFB: cmp ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8CEC; /* 0x171C8CFE: jne 0x171c8cec */
L_171C8D00:
    eax = MEM32(ebp + 0x18); /* 0x171C8D00: mov eax, dword ptr [ebp + 0x18] */
    /* test eax, eax */ /* 0x171C8D03: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C8D17; /* 0x171C8D05: jne 0x171c8d17 */
L_171C8D07:
    eax = MEM32(esi + 0x4); /* 0x171C8D07: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C8D0A: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x171C8D0D: mov eax, dword ptr [eax] */
    eax = MEM32(eax); /* 0x171C8D0F: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x171C8D11: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C8D14: mov eax, dword ptr [eax + 8] */
L_171C8D17:
    ecx = MEM32(esi + 0x4); /* 0x171C8D17: mov ecx, dword ptr [esi + 4] */
    goto L_171C8D9B; /* 0x171C8D1A: jmp 0x171c8d9b */
L_171C8D1C:
    eax = MEM32(ebp + 0x10); /* 0x171C8D1C: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(edi + 0x8), eax */ /* 0x171C8D1F: cmp dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8D3F; /* 0x171C8D22: je 0x171c8d3f */
L_171C8D24:
    eax = MEM32(edi + 0x4); /* 0x171C8D24: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, edi); /* 0x171C8D27: push edi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C8D28: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_171C6E99); /* 0x171C8D2B: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x171C8D30: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x171C8D33: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, edi); /* 0x171C8D36: push edi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C8D37: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_171C6E99); /* 0x171C8D3A: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
L_171C8D3F:
    eax = MEM32(esi + 0x8); /* 0x171C8D3F: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x1C); /* 0x171C8D42: sub eax, dword ptr [edi + 0x1c] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x171C8D45: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebx + 0x8) = eax; /* 0x171C8D48: mov dword ptr [ebx + 8], eax */
    RECOMP_CALL(sub_171C80CA); /* 0x171C8D4B: call 0x171c80ca */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x171C8D50: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebx + 0xC) = (uint8_t)(LO8(eax)); /* 0x171C8D54: mov byte ptr [ebx + 0xc], al */
    MEM8(esi + 0xE) = (uint8_t)(1); /* 0x171C8D57: mov byte ptr [esi + 0xe], 1 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8D90; /* 0x171C8D5B: jne 0x171c8d90 */
L_171C8D5D:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8D5D: push dword ptr [ebp + 8] */
    eax = esi; /* 0x171C8D60: mov eax, esi */
    RECOMP_CALL(sub_171C83D5); /* 0x171C8D62: call 0x171c83d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171C8D67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C8D90; /* 0x171C8D69: je 0x171c8d90 */
L_171C8D6B:
    ecx = MEM32(ebp + 0x10); /* 0x171C8D6B: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0x1C); /* 0x171C8D6E: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) + eax; /* 0x171C8D71: add dword ptr [edi + 0x1c], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ecx + 0x4); /* 0x171C8D74: mov ecx, dword ptr [ecx + 4] */
    eax = MEM32(edi + 0x4); /* 0x171C8D77: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(ecx + 0x1C); /* 0x171C8D7A: mov ecx, dword ptr [ecx + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8D7D: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + ecx; /* 0x171C8D80: add dword ptr [eax + 0x1c], ecx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171C7FE0); /* 0x171C8D83: call 0x171c7fe0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171C8D88: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_171C6F1B); /* 0x171C8D8B: call 0x171c6f1b */
    RECOMP_FLAGS_IN();
L_171C8D90:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171C8D90: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x4); /* 0x171C8D94: mov ecx, dword ptr [ebx + 4] */
    esi = ebx; /* 0x171C8D97: mov esi, ebx */
    eax = edi; /* 0x171C8D99: mov eax, edi */
L_171C8D9B:
    ecx = MEM32(ecx + 0x8); /* 0x171C8D9B: mov ecx, dword ptr [ecx + 8] */
    ebx = MEM32(ecx); /* 0x171C8D9E: mov ebx, dword ptr [ecx] */
    ecx = MEM32(ebx); /* 0x171C8DA0: mov ecx, dword ptr [ebx] */
    edi = MEM32(ecx + 0x4); /* 0x171C8DA2: mov edi, dword ptr [ecx + 4] */
    ecx = MEM32(edi + 0x10); /* 0x171C8DA5: mov ecx, dword ptr [edi + 0x10] */
    /* cmp ecx, MEM32(eax + 0x10) */ /* 0x171C8DA8: cmp ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = eax; /* 0x171C8DAB: mov dword ptr [ebp + 0x10], eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8D1C; /* 0x171C8DAE: je 0x171c8d1c */
L_171C8DB4:
    /* cmp MEM8(ebp + 0x1C), 0 */ /* 0x171C8DB4: cmp byte ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(esi + 0xE) = (uint8_t)(1); /* 0x171C8DB8: mov byte ptr [esi + 0xe], 1 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8DC8; /* 0x171C8DBC: je 0x171c8dc8 */
L_171C8DBE:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8DBE: push dword ptr [ebp + 8] */
    eax = esi; /* 0x171C8DC1: mov eax, esi */
    RECOMP_CALL(sub_171C8A16); /* 0x171C8DC3: call 0x171c8a16 */
    RECOMP_FLAGS_IN();
L_171C8DC8:
    edi = POP32_VAL(esp); /* 0x171C8DC8: pop edi */
    esi = POP32_VAL(esp); /* 0x171C8DC9: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C8DCA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C8DCB: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x171C8DCC: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_171C8DD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C8DD4u);

L_171C8DD4:
    edi = edi; /* 0x171C8DD4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C8DD6: push ebp */
    ebp = esp; /* 0x171C8DD7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171C8DD9: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x171C8DDC: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171C8DE0: push ebx */
    PUSH32(esp, esi); /* 0x171C8DE1: push esi */
    esi = eax; /* 0x171C8DE2: mov esi, eax */
    eax = MEM32(ebp + 0xC); /* 0x171C8DE4: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x8); /* 0x171C8DE7: mov eax, dword ptr [eax + 8] */
    ebx = MEM32(esi); /* 0x171C8DEA: mov ebx, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C8DEC: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x4); /* 0x171C8DEF: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C8DF2: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x171C8DF5: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x171C8DF7: push edi */
    edi = MEM32(eax); /* 0x171C8DF8: mov edi, dword ptr [eax] */
    ecx = MEM32(edi + 0x4); /* 0x171C8DFA: mov ecx, dword ptr [edi + 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x171C8DFD: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebx + 0x4); /* 0x171C8E00: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x10); /* 0x171C8E03: mov eax, dword ptr [eax + 0x10] */
    /* cmp eax, MEM32(ecx + 0x10) */ /* 0x171C8E06: cmp eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ebx; /* 0x171C8E09: mov dword ptr [ebp - 0x10], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8E1A; /* 0x171C8E0C: je 0x171c8e1a */
L_171C8E0E:
    ebx = MEM32(ebp + 0x8); /* 0x171C8E0E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171C8E11: push esi */
    RECOMP_CALL(sub_171C85CE); /* 0x171C8E12: call 0x171c85ce */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x10)); /* 0x171C8E17: mov ebx, dword ptr [ebp - 0x10] */
L_171C8E1A:
    eax = MEM32(ebp + 0x8); /* 0x171C8E1A: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x70); /* 0x171C8E1D: mov edx, dword ptr [eax + 0x70] */
    ecx = MEM32(ebx + 0x10); /* 0x171C8E20: mov ecx, dword ptr [ebx + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C8E23: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C8E26: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8E29: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8E2B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8E2D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8E78; /* 0x171C8E30: jp 0x171c8e78 */
L_171C8E32:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171C8E32: fld qword ptr [edx + 0x30] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C8E35: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8E38: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8E3A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8E3C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8E78; /* 0x171C8E3F: jp 0x171c8e78 */
L_171C8E41:
    eax = MEM32(ebp + (-0x4)); /* 0x171C8E41: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x4); /* 0x171C8E44: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, ebx); /* 0x171C8E47: push ebx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C8E48: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_171C6E99); /* 0x171C8E4B: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171C8E50: mov eax, esi */
    RECOMP_CALL(sub_171C8009); /* 0x171C8E52: call 0x171c8009 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171C8E57: push dword ptr [ebp - 0xc] */
    esi = eax; /* 0x171C8E5A: mov esi, eax */
    eax = MEM32(esi + 0x4); /* 0x171C8E5C: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C8E5F: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x171C8E62: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x171C8E64: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8E66: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171C8E69: mov dword ptr [ebp - 4], ecx */
    RECOMP_CALL(sub_171C8134); /* 0x171C8E6C: call 0x171c8134 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = 1; /* 0x171C8E71: mov dword ptr [ebp - 8], 1 */
L_171C8E78:
    eax = MEM32(ebp + 0x8); /* 0x171C8E78: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x70); /* 0x171C8E7B: mov edx, dword ptr [eax + 0x70] */
    ecx = MEM32(edi + 0x10); /* 0x171C8E7E: mov ecx, dword ptr [edi + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C8E81: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C8E84: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8E87: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8E89: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8E8B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8EC4; /* 0x171C8E8E: jp 0x171c8ec4 */
L_171C8E90:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171C8E90: fld qword ptr [edx + 0x30] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C8E93: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8E96: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8E98: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8E9A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8EC4; /* 0x171C8E9D: jp 0x171c8ec4 */
L_171C8E9F:
    eax = MEM32(edi + 0x4); /* 0x171C8E9F: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C8EA2: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171C8EA5: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_171C6E99); /* 0x171C8EA8: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x171C8EAD: mov eax, dword ptr [ebp - 0xc] */
    PUSH32(esp, 0); /* 0x171C8EB0: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8EB2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C8134); /* 0x171C8EB5: call 0x171c8134 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x171C8EBA: mov dword ptr [ebp + 0xc], eax */
    MEM32(ebp + (-0x8)) = 1; /* 0x171C8EBD: mov dword ptr [ebp - 8], 1 */
L_171C8EC4:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x171C8EC4: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8EE3; /* 0x171C8EC8: je 0x171c8ee3 */
L_171C8ECA:
    eax = MEM32(ebp + 0xC); /* 0x171C8ECA: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x171C8ECD: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171C8ECF: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171C8ED2: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x171C8ED5: push dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x171C8ED8: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8ED9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C8CD6); /* 0x171C8EDC: call 0x171c8cd6 */
    RECOMP_FLAGS_IN();
    goto L_171C8F4E; /* 0x171C8EE1: jmp 0x171c8f4e */
L_171C8EE3:
    ecx = MEM32(edi + 0x10); /* 0x171C8EE3: mov ecx, dword ptr [edi + 0x10] */
    edx = MEM32(ebx + 0x10); /* 0x171C8EE6: mov edx, dword ptr [ebx + 0x10] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C8EE9: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x28)); /* 0x171C8EEC: fcomp qword ptr [edx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8EEF: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C8EF1: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C8F12; /* 0x171C8EF4: jnp 0x171c8f12 */
L_171C8EF6:
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C8EF6: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C8EF9: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8EFC: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8EFE: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8F00: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8F18; /* 0x171C8F03: jp 0x171c8f18 */
L_171C8F05:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C8F05: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x30)); /* 0x171C8F08: fcomp qword ptr [edx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8F0B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C8F0D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8F18; /* 0x171C8F10: jp 0x171c8f18 */
L_171C8F12:
    eax = MEM32(edi + 0x4); /* 0x171C8F12: mov eax, dword ptr [edi + 4] */
    ebx = MEM32(eax + 0xC); /* 0x171C8F15: mov ebx, dword ptr [eax + 0xc] */
L_171C8F18:
    eax = MEM32(ebp + 0xC); /* 0x171C8F18: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x8); /* 0x171C8F1B: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, ebx); /* 0x171C8F1E: push ebx */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x171C8F1F: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_171C707E); /* 0x171C8F22: call 0x171c707e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x171C8F27: push 0 */
    edi = eax; /* 0x171C8F29: mov edi, eax */
    eax = MEM32(edi + 0x8); /* 0x171C8F2B: mov eax, dword ptr [edi + 8] */
    PUSH32(esp, eax); /* 0x171C8F2E: push eax */
    PUSH32(esp, eax); /* 0x171C8F2F: push eax */
    PUSH32(esp, edi); /* 0x171C8F30: push edi */
    PUSH32(esp, esi); /* 0x171C8F31: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8F32: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C8CD6); /* 0x171C8F35: call 0x171c8cd6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x171C8F3A: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x18); /* 0x171C8F3D: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8F40: push dword ptr [ebp + 8] */
    MEM8(eax + 0xF) = (uint8_t)(1); /* 0x171C8F43: mov byte ptr [eax + 0xf], 1 */
    eax = esi; /* 0x171C8F47: mov eax, esi */
    RECOMP_CALL(sub_171C8A16); /* 0x171C8F49: call 0x171c8a16 */
    RECOMP_FLAGS_IN();
L_171C8F4E:
    edi = POP32_VAL(esp); /* 0x171C8F4E: pop edi */
    esi = POP32_VAL(esp); /* 0x171C8F4F: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C8F50: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C8F51: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C8F52: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C8F5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C8F5Au);

L_171C8F5A:
    edi = edi; /* 0x171C8F5A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C8F5C: push ebp */
    ebp = esp; /* 0x171C8F5D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171C8F5F: push ecx */
    PUSH32(esp, ebx); /* 0x171C8F60: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171C8F61: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171C8F64: push esi */
    esi = MEM32(ebx); /* 0x171C8F65: mov esi, dword ptr [ebx] */
    ecx = MEM32(esi + 0x10); /* 0x171C8F67: mov ecx, dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x171C8F6A: push edi */
    edi = MEM32(ebp + 0x10); /* 0x171C8F6B: mov edi, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171C8F6E: fld qword ptr [edi + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C8F71: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8F74: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8F76: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8F78: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8F9D; /* 0x171C8F7B: jp 0x171c8f9d */
L_171C8F7D:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x171C8F7D: fld qword ptr [edi + 0x30] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C8F80: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8F83: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8F85: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8F87: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C8F9D; /* 0x171C8F8A: jp 0x171c8f9d */
L_171C8F8C:
    PUSH32(esp, esi); /* 0x171C8F8C: push esi */
    esi = MEM32(edi + 0x8); /* 0x171C8F8D: mov esi, dword ptr [edi + 8] */
    edi = MEM32(ebp + 0x8); /* 0x171C8F90: mov edi, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C823D); /* 0x171C8F93: call 0x171c823d */
    RECOMP_FLAGS_IN();
    goto L_171C9082; /* 0x171C8F98: jmp 0x171c9082 */
L_171C8F9D:
    edx = MEM32(esi + 0x4); /* 0x171C8F9D: mov edx, dword ptr [esi + 4] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171C8FA0: fld qword ptr [edi + 0x28] */
    ecx = MEM32(edx + 0x10); /* 0x171C8FA3: mov ecx, dword ptr [edx + 0x10] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C8FA6: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8FA9: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8FAB: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8FAD: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9058; /* 0x171C8FB0: jp 0x171c9058 */
L_171C8FB6:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x171C8FB6: fld qword ptr [edi + 0x30] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C8FB9: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8FBC: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8FBE: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C8FC0: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9058; /* 0x171C8FC3: jp 0x171c9058 */
L_171C8FC9:
    eax = ebx; /* 0x171C8FC9: mov eax, ebx */
    RECOMP_CALL(sub_171C8064); /* 0x171C8FCB: call 0x171c8064 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x171C8FD0: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(eax + 0x4); /* 0x171C8FD3: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C8FD6: mov eax, dword ptr [eax + 8] */
    esi = MEM32(eax); /* 0x171C8FD9: mov esi, dword ptr [eax] */
    /* cmp MEM8(esi + 0xF), 0 */ /* 0x171C8FDB: cmp byte ptr [esi + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi); /* 0x171C8FDF: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + 0x4); /* 0x171C8FE1: mov ebx, dword ptr [eax + 4] */
    edi = MEM32(ebx + 0x8); /* 0x171C8FE4: mov edi, dword ptr [ebx + 8] */
    MEM32(ebp + (-0x4)) = edi; /* 0x171C8FE7: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C9000; /* 0x171C8FEA: je 0x171c9000 */
L_171C8FEC:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8FEC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C7FE0); /* 0x171C8FEF: call 0x171c7fe0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x171C8FF4: push ebx */
    RECOMP_CALL(sub_171C6F1B); /* 0x171C8FF5: call 0x171c6f1b */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x171C8FFA: mov eax, dword ptr [edi + 4] */
    ebx = MEM32(eax + 0xC); /* 0x171C8FFD: mov ebx, dword ptr [eax + 0xc] */
L_171C9000:
    eax = MEM32(ebp + 0x10); /* 0x171C9000: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x171C9003: push ebx */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x171C9004: push dword ptr [eax + 8] */
    RECOMP_CALL(sub_171C6E99); /* 0x171C9007: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x171C900C: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(eax + 0x10); /* 0x171C900F: mov ecx, dword ptr [eax + 0x10] */
    edx = MEM32(edi + 0x10); /* 0x171C9012: mov edx, dword ptr [edi + 0x10] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C9015: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x28)); /* 0x171C9018: fcomp qword ptr [edx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C901B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C901D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9042; /* 0x171C9020: jnp 0x171c9042 */
L_171C9022:
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C9022: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C9025: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9028: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C902A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C902C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C903E; /* 0x171C902F: jp 0x171c903e */
L_171C9031:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C9031: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x30)); /* 0x171C9034: fcomp qword ptr [edx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9037: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9039: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9042; /* 0x171C903C: jnp 0x171c9042 */
L_171C903E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171C903E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171C9042:
    PUSH32(esp, 1); /* 0x171C9042: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171C9044: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x171C9047: push edi */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x171C9048: push dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171C904B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C904E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C8CD6); /* 0x171C9051: call 0x171c8cd6 */
    RECOMP_FLAGS_IN();
    goto L_171C9082; /* 0x171C9056: jmp 0x171c9082 */
L_171C9058:
    PUSH32(esp, edx); /* 0x171C9058: push edx */
    RECOMP_CALL(sub_171C7016); /* 0x171C9059: call 0x171c7016 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebx + 0xF), 0 */ /* 0x171C905E: cmp byte ptr [ebx + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C9070; /* 0x171C9062: je 0x171c9070 */
L_171C9064:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x171C9064: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_171C6F1B); /* 0x171C9067: call 0x171c6f1b */
    RECOMP_FLAGS_IN();
    MEM8(ebx + 0xF) = (uint8_t)(0); /* 0x171C906C: mov byte ptr [ebx + 0xf], 0 */
L_171C9070:
    PUSH32(esp, esi); /* 0x171C9070: push esi */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x171C9071: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_171C6E99); /* 0x171C9074: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171C9079: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C907A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C91E3); /* 0x171C907D: call 0x171c91e3 */
    RECOMP_FLAGS_IN();
L_171C9082:
    edi = POP32_VAL(esp); /* 0x171C9082: pop edi */
    esi = POP32_VAL(esp); /* 0x171C9083: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C9084: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C9085: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171C9086: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171C908E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C908Eu);

L_171C908E:
    edi = edi; /* 0x171C908E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C9090: push ebp */
    ebp = esp; /* 0x171C9091: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x171C9093: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x171C9096: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x8); /* 0x171C9099: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax + 0x4); /* 0x171C909C: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x171C909F: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, edi); /* 0x171C90A2: push edi */
    eax = ebp + (-0x14); /* 0x171C90A3: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x171C90A6: push eax */
    eax = MEM32(ebp + 0x8); /* 0x171C90A7: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x68)); /* 0x171C90AA: push dword ptr [eax + 0x68] */
    RECOMP_CALL(sub_171C9F72); /* 0x171C90AD: call 0x171c9f72 */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x171C90B2: mov edi, dword ptr [eax] */
    /* test edi, edi */ /* 0x171C90B4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C91D9; /* 0x171C90B6: je 0x171c91d9 */
L_171C90BC:
    eax = MEM32(edi + 0x4); /* 0x171C90BC: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C90BF: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x171C90C2: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x171C90C4: push ebx */
    ebx = MEM32(eax); /* 0x171C90C5: mov ebx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x171C90C7: push esi */
    esi = MEM32(edi); /* 0x171C90C8: mov esi, dword ptr [edi] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x171C90CA: push dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C90CD: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171C90D0: push dword ptr [ebp + 0xc] */
    eax = MEM32(esi + 0x4); /* 0x171C90D3: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x171C90D6: push dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_171C9869); /* 0x171C90D9: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C90DE: fld qword ptr [0x17001d90] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C90E4: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C90E6: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C90E8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C90FE; /* 0x171C90EB: jp 0x171c90fe */
L_171C90ED:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171C90ED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171C90F0: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C90F1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C8F5A); /* 0x171C90F4: call 0x171c8f5a */
    RECOMP_FLAGS_IN();
    goto L_171C91D7; /* 0x171C90F9: jmp 0x171c91d7 */
L_171C90FE:
    edx = MEM32(ebx + 0x4); /* 0x171C90FE: mov edx, dword ptr [ebx + 4] */
    eax = MEM32(esi + 0x4); /* 0x171C9101: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(edx + 0x10); /* 0x171C9104: mov ecx, dword ptr [edx + 0x10] */
    ebx = MEM32(eax + 0x10); /* 0x171C9107: mov ebx, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C910A: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x28)); /* 0x171C910D: fcomp qword ptr [ebx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9110: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9112: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9138; /* 0x171C9115: jnp 0x171c9138 */
L_171C9117:
    fp_push(*(double*)ADDR(ebx + 0x28)); /* 0x171C9117: fld qword ptr [ebx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C911A: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C911D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C911F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C9121: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9133; /* 0x171C9124: jp 0x171c9133 */
L_171C9126:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C9126: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x30)); /* 0x171C9129: fcomp qword ptr [ebx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C912C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C912E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9138; /* 0x171C9131: jnp 0x171c9138 */
L_171C9133:
    ebx = MEM32(ebp + (-0x4)); /* 0x171C9133: mov ebx, dword ptr [ebp - 4] */
    goto L_171C913A; /* 0x171C9136: jmp 0x171c913a */
L_171C9138:
    ebx = edi; /* 0x171C9138: mov ebx, edi */
L_171C913A:
    /* cmp MEM8(edi + 0xC), 0 */ /* 0x171C913A: cmp byte ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C915D; /* 0x171C913E: jne 0x171c915d */
L_171C9140:
    /* cmp MEM8(ebx + 0xF), 0 */ /* 0x171C9140: cmp byte ptr [ebx + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C915D; /* 0x171C9144: jne 0x171c915d */
L_171C9146:
    eax = MEM32(ebp + 0xC); /* 0x171C9146: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x8); /* 0x171C9149: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, 1); /* 0x171C914C: push 1 */
    PUSH32(esp, 0); /* 0x171C914E: push 0 */
    PUSH32(esp, eax); /* 0x171C9150: push eax */
    PUSH32(esp, eax); /* 0x171C9151: push eax */
    PUSH32(esp, edi); /* 0x171C9152: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C9153: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C8CD6); /* 0x171C9156: call 0x171c8cd6 */
    RECOMP_FLAGS_IN();
    goto L_171C91D7; /* 0x171C915B: jmp 0x171c91d7 */
L_171C915D:
    /* cmp ebx, edi */ /* 0x171C915D: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x171C915F: mov eax, dword ptr [ebp + 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C9176; /* 0x171C9162: jne 0x171c9176 */
L_171C9164:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171C9164: push dword ptr [esi + 0xc] */
    eax = MEM32(eax + 0x8); /* 0x171C9167: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x171C916A: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_171C707E); /* 0x171C916D: call 0x171c707e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171C9172: mov esi, eax */
    goto L_171C9187; /* 0x171C9174: jmp 0x171c9187 */
L_171C9176:
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x171C9176: push dword ptr [eax + 8] */
    eax = MEM32(edx + 0x8); /* 0x171C9179: mov eax, dword ptr [edx + 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x171C917C: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_171C707E); /* 0x171C917F: call 0x171c707e */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x4); /* 0x171C9184: mov esi, dword ptr [eax + 4] */
L_171C9187:
    /* cmp MEM8(ebx + 0xF), 0 */ /* 0x171C9187: cmp byte ptr [ebx + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C919F; /* 0x171C918B: je 0x171c919f */
L_171C918D:
    PUSH32(esp, MEM32(ebx)); /* 0x171C918D: push dword ptr [ebx] */
    RECOMP_CALL(sub_171C6F1B); /* 0x171C918F: call 0x171c6f1b */
    RECOMP_FLAGS_IN();
    MEM8(ebx + 0xF) = (uint8_t)(0); /* 0x171C9194: mov byte ptr [ebx + 0xf], 0 */
    MEM32(ebx) = esi; /* 0x171C9198: mov dword ptr [ebx], esi */
    MEM32(esi + 0x18) = ebx; /* 0x171C919A: mov dword ptr [esi + 0x18], ebx */
    goto L_171C91CC; /* 0x171C919D: jmp 0x171c91cc */
L_171C919F:
    PUSH32(esp, edi); /* 0x171C919F: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C91A0: push dword ptr [ebp + 8] */
    edi = esi; /* 0x171C91A3: mov edi, esi */
    RECOMP_CALL(sub_171C8084); /* 0x171C91A5: call 0x171c8084 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x171C91AA: mov edx, eax */
    eax = MEM32(edx + 0x4); /* 0x171C91AC: mov eax, dword ptr [edx + 4] */
    eax = MEM32(eax + 0x4); /* 0x171C91AF: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x171C91B2: mov eax, dword ptr [eax] */
    ecx = MEM32(edx); /* 0x171C91B4: mov ecx, dword ptr [edx] */
    ecx = MEM32(ecx + 0x1C); /* 0x171C91B6: mov ecx, dword ptr [ecx + 0x1c] */
    eax = MEM32(eax + 0x8); /* 0x171C91B9: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171C91BC: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x171C91BE: mov ecx, dword ptr [ebp + 8] */
    MEM32(edx + 0x8) = eax; /* 0x171C91C1: mov dword ptr [edx + 8], eax */
    RECOMP_CALL(sub_171C80CA); /* 0x171C91C4: call 0x171c80ca */
    RECOMP_FLAGS_IN();
    MEM8(edx + 0xC) = (uint8_t)(LO8(eax)); /* 0x171C91C9: mov byte ptr [edx + 0xc], al */
L_171C91CC:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171C91CC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C91CF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C91E3); /* 0x171C91D2: call 0x171c91e3 */
    RECOMP_FLAGS_IN();
L_171C91D7:
    esi = POP32_VAL(esp); /* 0x171C91D7: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C91D8: pop ebx */
L_171C91D9:
    edi = POP32_VAL(esp); /* 0x171C91D9: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C91DA: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C91DB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C91E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C91E3u);

L_171C91E3:
    edi = edi; /* 0x171C91E3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C91E5: push ebp */
    ebp = esp; /* 0x171C91E6: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x171C91E8: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171C91EB: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171C91EC: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebx + 0x70) = ecx; /* 0x171C91EF: mov dword ptr [ebx + 0x70], ecx */
    edx = MEM32(ecx + 0x8); /* 0x171C91F2: mov edx, dword ptr [ecx + 8] */
    eax = edx; /* 0x171C91F5: mov eax, edx */
    goto L_171C9200; /* 0x171C91F7: jmp 0x171c9200 */
L_171C91F9:
    eax = MEM32(eax + 0x8); /* 0x171C91F9: mov eax, dword ptr [eax + 8] */
    /* cmp eax, edx */ /* 0x171C91FC: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C9236; /* 0x171C91FE: je 0x171c9236 */
L_171C9200:
    /* cmp MEM32(eax + 0x18), 0 */ /* 0x171C9200: cmp dword ptr [eax + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C91F9; /* 0x171C9204: je 0x171c91f9 */
L_171C9206:
    eax = MEM32(eax + 0x18); /* 0x171C9206: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, esi); /* 0x171C9209: push esi */
    PUSH32(esp, edi); /* 0x171C920A: push edi */
    RECOMP_CALL(sub_171C8009); /* 0x171C920B: call 0x171c8009 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171C9210: mov edi, eax */
    eax = MEM32(edi + 0x4); /* 0x171C9212: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C9215: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x171C9218: mov eax, dword ptr [eax] */
    esi = MEM32(eax); /* 0x171C921A: mov esi, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x171C921C: push 0 */
    PUSH32(esp, ebx); /* 0x171C921E: push ebx */
    RECOMP_CALL(sub_171C8134); /* 0x171C921F: call 0x171c8134 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x8); /* 0x171C9224: mov ecx, dword ptr [eax + 8] */
    /* cmp ecx, esi */ /* 0x171C9227: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C923F; /* 0x171C9229: jne 0x171c923f */
L_171C922B:
    PUSH32(esp, eax); /* 0x171C922B: push eax */
    PUSH32(esp, ebx); /* 0x171C922C: push ebx */
    eax = edi; /* 0x171C922D: mov eax, edi */
    RECOMP_CALL(sub_171C8DD4); /* 0x171C922F: call 0x171c8dd4 */
    RECOMP_FLAGS_IN();
    goto L_171C924B; /* 0x171C9234: jmp 0x171c924b */
L_171C9236:
    PUSH32(esp, ecx); /* 0x171C9236: push ecx */
    PUSH32(esp, ebx); /* 0x171C9237: push ebx */
    RECOMP_CALL(sub_171C908E); /* 0x171C9238: call 0x171c908e */
    RECOMP_FLAGS_IN();
    goto L_171C924D; /* 0x171C923D: jmp 0x171c924d */
L_171C923F:
    PUSH32(esp, 1); /* 0x171C923F: push 1 */
    PUSH32(esp, esi); /* 0x171C9241: push esi */
    PUSH32(esp, esi); /* 0x171C9242: push esi */
    PUSH32(esp, ecx); /* 0x171C9243: push ecx */
    PUSH32(esp, edi); /* 0x171C9244: push edi */
    PUSH32(esp, ebx); /* 0x171C9245: push ebx */
    RECOMP_CALL(sub_171C8CD6); /* 0x171C9246: call 0x171c8cd6 */
    RECOMP_FLAGS_IN();
L_171C924B:
    edi = POP32_VAL(esp); /* 0x171C924B: pop edi */
    esi = POP32_VAL(esp); /* 0x171C924C: pop esi */
L_171C924D:
    ebx = POP32_VAL(esp); /* 0x171C924D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C924E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C924F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C9257(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C9257u);

L_171C9257:
    edi = edi; /* 0x171C9257: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C9259: push ebp */
    ebp = esp; /* 0x171C925A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171C925C: push ebx */
    PUSH32(esp, esi); /* 0x171C925D: push esi */
    PUSH32(esp, edi); /* 0x171C925E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171C925F: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171C9262: push edi */
    MEM8(edi + 0x64) = (uint8_t)(0); /* 0x171C9263: mov byte ptr [edi + 0x64], 0 */
    RECOMP_CALL(sub_171C8C1F); /* 0x171C9267: call 0x171c8c1f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x171C97A3u); /* 0x171C926C: push 0x171c97a3 */
    RECOMP_CALL(sub_171CA361); /* 0x171C9271: call 0x171ca361 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171C9276: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x171C9278: mov dword ptr [ebp + 8], eax */
    MEM32(edi + 0x6C) = eax; /* 0x171C927B: mov dword ptr [edi + 0x6c], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C92A1; /* 0x171C927E: je 0x171c92a1 */
L_171C9280:
    ebx = MEM32(edi + 0x8); /* 0x171C9280: mov ebx, dword ptr [edi + 8] */
    esi = MEM32(ebx); /* 0x171C9283: mov esi, dword ptr [ebx] */
    goto L_171C9295; /* 0x171C9285: jmp 0x171c9295 */
L_171C9287:
    PUSH32(esp, esi); /* 0x171C9287: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C9288: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA5FD); /* 0x171C928B: call 0x171ca5fd */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x38) = eax; /* 0x171C9290: mov dword ptr [esi + 0x38], eax */
    esi = MEM32(esi); /* 0x171C9293: mov esi, dword ptr [esi] */
L_171C9295:
    /* cmp esi, ebx */ /* 0x171C9295: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C9287; /* 0x171C9297: jne 0x171c9287 */
L_171C9299:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C9299: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA3E1); /* 0x171C929C: call 0x171ca3e1 */
    RECOMP_FLAGS_IN();
L_171C92A1:
    PUSH32(esp, 0x171C7F18u); /* 0x171C92A1: push 0x171c7f18 */
    PUSH32(esp, edi); /* 0x171C92A6: push edi */
    RECOMP_CALL(sub_171C9E98); /* 0x171C92A7: call 0x171c9e98 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x17025D20)); /* 0x171C92AC: fld qword ptr [0x17025d20] */
    PUSH32(esp, ecx); /* 0x171C92B2: push ecx */
    MEM32(edi + 0x68) = eax; /* 0x171C92B3: mov dword ptr [edi + 0x68], eax */
    PUSH32(esp, ecx); /* 0x171C92B6: push ecx */
    eax = edi; /* 0x171C92B7: mov eax, edi */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x171C92B9: fstp qword ptr [esp] */
    RECOMP_CALL(sub_171C8B97); /* 0x171C92BC: call 0x171c8b97 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x17025D28)); /* 0x171C92C1: fld qword ptr [0x17025d28] */
    PUSH32(esp, ecx); /* 0x171C92C7: push ecx */
    PUSH32(esp, ecx); /* 0x171C92C8: push ecx */
    eax = edi; /* 0x171C92C9: mov eax, edi */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x171C92CB: fstp qword ptr [esp] */
    RECOMP_CALL(sub_171C8B97); /* 0x171C92CE: call 0x171c8b97 */
    RECOMP_FLAGS_IN();
    goto L_171C931B; /* 0x171C92D3: jmp 0x171c931b */
L_171C92D5:
    fp_push(*(double*)ADDR(ebx + 0x28)); /* 0x171C92D5: fld qword ptr [ebx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C92D8: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C92DB: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C92DD: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C92DF: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9314; /* 0x171C92E2: jp 0x171c9314 */
L_171C92E4:
    fp_push(*(double*)ADDR(ebx + 0x30)); /* 0x171C92E4: fld qword ptr [ebx + 0x30] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C92E7: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C92EA: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C92EC: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C92EE: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9314; /* 0x171C92F1: jp 0x171c9314 */
L_171C92F3:
    PUSH32(esp, MEM32(edi + 0x6C)); /* 0x171C92F3: push dword ptr [edi + 0x6c] */
    RECOMP_CALL(sub_171CA659); /* 0x171C92F6: call 0x171ca659 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x171C92FB: push dword ptr [ebx + 8] */
    esi = MEM32(eax + 0x8); /* 0x171C92FE: mov esi, dword ptr [eax + 8] */
    RECOMP_CALL(sub_171C823D); /* 0x171C9301: call 0x171c823d */
    RECOMP_FLAGS_IN();
L_171C9306:
    PUSH32(esp, MEM32(edi + 0x6C)); /* 0x171C9306: push dword ptr [edi + 0x6c] */
    RECOMP_CALL(sub_171CA6E2); /* 0x171C9309: call 0x171ca6e2 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x171C930E: mov ecx, eax */
    /* test ecx, ecx */ /* 0x171C9310: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C92D5; /* 0x171C9312: jne 0x171c92d5 */
L_171C9314:
    PUSH32(esp, ebx); /* 0x171C9314: push ebx */
    PUSH32(esp, edi); /* 0x171C9315: push edi */
    RECOMP_CALL(sub_171C91E3); /* 0x171C9316: call 0x171c91e3 */
    RECOMP_FLAGS_IN();
L_171C931B:
    PUSH32(esp, MEM32(edi + 0x6C)); /* 0x171C931B: push dword ptr [edi + 0x6c] */
    RECOMP_CALL(sub_171CA659); /* 0x171C931E: call 0x171ca659 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171C9323: mov ebx, eax */
    /* test ebx, ebx */ /* 0x171C9325: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C9306; /* 0x171C9327: jne 0x171c9306 */
L_171C9329:
    eax = MEM32(edi + 0x68); /* 0x171C9329: mov eax, dword ptr [edi + 0x68] */
    ecx = MEM32(eax + 0x4); /* 0x171C932C: mov ecx, dword ptr [eax + 4] */
    ecx = MEM32(ecx); /* 0x171C932F: mov ecx, dword ptr [ecx] */
    ecx = MEM32(ecx); /* 0x171C9331: mov ecx, dword ptr [ecx] */
    ecx = MEM32(ecx + 0x10); /* 0x171C9333: mov ecx, dword ptr [ecx + 0x10] */
    MEM32(edi + 0x70) = ecx; /* 0x171C9336: mov dword ptr [edi + 0x70], ecx */
    goto L_171C9344; /* 0x171C9339: jmp 0x171c9344 */
L_171C933B:
    PUSH32(esp, edi); /* 0x171C933B: push edi */
    RECOMP_CALL(sub_171C7FE0); /* 0x171C933C: call 0x171c7fe0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x68); /* 0x171C9341: mov eax, dword ptr [edi + 0x68] */
L_171C9344:
    eax = MEM32(eax + 0x4); /* 0x171C9344: mov eax, dword ptr [eax + 4] */
    esi = MEM32(eax); /* 0x171C9347: mov esi, dword ptr [eax] */
    /* test esi, esi */ /* 0x171C9349: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C933B; /* 0x171C934B: jne 0x171c933b */
L_171C934D:
    PUSH32(esp, MEM32(edi + 0x68)); /* 0x171C934D: push dword ptr [edi + 0x68] */
    RECOMP_CALL(sub_171C9EC7); /* 0x171C9350: call 0x171c9ec7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x6C)); /* 0x171C9355: push dword ptr [edi + 0x6c] */
    RECOMP_CALL(sub_171CA3AE); /* 0x171C9358: call 0x171ca3ae */
    RECOMP_FLAGS_IN();
    edi = MEM32(edi + 0x8); /* 0x171C935D: mov edi, dword ptr [edi + 8] */
    esi = edi + 0x40; /* 0x171C9360: lea esi, [edi + 0x40] */
    eax = MEM32(esi); /* 0x171C9363: mov eax, dword ptr [esi] */
    /* cmp eax, esi */ /* 0x171C9365: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C939A; /* 0x171C9367: je 0x171c939a */
L_171C9369:
    edi = MEM32(eax); /* 0x171C9369: mov edi, dword ptr [eax] */
    eax = MEM32(eax + 0x8); /* 0x171C936B: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(eax + 0xC); /* 0x171C936E: mov ecx, dword ptr [eax + 0xc] */
    /* cmp MEM32(ecx + 0xC), eax */ /* 0x171C9371: cmp dword ptr [ecx + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C9394; /* 0x171C9374: jne 0x171c9394 */
L_171C9376:
    ecx = MEM32(eax + 0x8); /* 0x171C9376: mov ecx, dword ptr [eax + 8] */
    edx = MEM32(eax + 0x1C); /* 0x171C9379: mov edx, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + edx; /* 0x171C937C: add dword ptr [ecx + 0x1c], edx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x8); /* 0x171C937F: mov ecx, dword ptr [eax + 8] */
    edx = MEM32(eax + 0x4); /* 0x171C9382: mov edx, dword ptr [eax + 4] */
    ecx = MEM32(ecx + 0x4); /* 0x171C9385: mov ecx, dword ptr [ecx + 4] */
    edx = MEM32(edx + 0x1C); /* 0x171C9388: mov edx, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + edx; /* 0x171C938B: add dword ptr [ecx + 0x1c], edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171C938E: push eax */
    RECOMP_CALL(sub_171C6F1B); /* 0x171C938F: call 0x171c6f1b */
    RECOMP_FLAGS_IN();
L_171C9394:
    /* cmp edi, esi */ /* 0x171C9394: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi; /* 0x171C9396: mov eax, edi */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C9369; /* 0x171C9398: jne 0x171c9369 */
L_171C939A:
    edi = POP32_VAL(esp); /* 0x171C939A: pop edi */
    esi = POP32_VAL(esp); /* 0x171C939B: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C939C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C939D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C939E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C93A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C93A6u);

L_171C93A6:
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C93A6: fld qword ptr [0x17001d90] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C93AC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x8)); /* 0x171C93AE: fcom qword ptr [ecx + 8] */
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x171C93B1: fld qword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C93B4: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C93B6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C93BD; /* 0x171C93B9: jne 0x171c93bd */
L_171C93BB:
    _st[0] = -_st[0]; /* 0x171C93BB: fchs  */
L_171C93BD:
    fp_push(*(double*)ADDR(ecx)); /* 0x171C93BD: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x171C93BF: fcomp st(2) */
    fp_pop();
    fp_push(*(double*)ADDR(ecx)); /* 0x171C93C1: fld qword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C93C3: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C93C5: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C93CC; /* 0x171C93C8: jp 0x171c93cc */
L_171C93CA:
    _st[0] = -_st[0]; /* 0x171C93CA: fchs  */
L_171C93CC:
    fp_push(_st[1]); /* 0x171C93CC: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C93CE: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C93D0: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C93D2: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x171C93D4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C93DC; /* 0x171C93D7: jne 0x171c93dc */
L_171C93D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C93D9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171C93DB: inc edx */
    _flag_k = FK_INC;
L_171C93DC:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x10)); /* 0x171C93DC: fcomp qword ptr [ecx + 0x10] */
    fp_pop();
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x171C93DF: fld qword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C93E2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C93E4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C93EB; /* 0x171C93E7: jne 0x171c93eb */
L_171C93E9:
    _st[0] = -_st[0]; /* 0x171C93E9: fchs  */
L_171C93EB:
    ecx = ecx + edx * 8; /* 0x171C93EB: lea ecx, [ecx + edx*8] */
    fp_push(*(double*)ADDR(ecx)); /* 0x171C93EE: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C93F0: fcomp qword ptr [0x17001d90] */
    fp_pop();
    fp_push(*(double*)ADDR(ecx)); /* 0x171C93F6: fld qword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C93F8: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C93FA: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9401; /* 0x171C93FD: jp 0x171c9401 */
L_171C93FF:
    _st[0] = -_st[0]; /* 0x171C93FF: fchs  */
L_171C9401:
    fp_push(_st[1]); /* 0x171C9401: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9403: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9405: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9407: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x171C9409: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C9411; /* 0x171C940C: jne 0x171c9411 */
L_171C940E:
    PUSH32(esp, 2); /* 0x171C940E: push 2 */
    edx = POP32_VAL(esp); /* 0x171C9410: pop edx */
L_171C9411:
    eax = edx; /* 0x171C9411: mov eax, edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C9413: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C9419(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C9419u);

L_171C9419:
    edi = edi; /* 0x171C9419: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C941B: push ebp */
    ebp = esp; /* 0x171C941C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x68u; /* 0x171C941E: sub esp, 0x68 */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(0x17025D38)); /* 0x171C9421: fld qword ptr [0x17025d38] */
    PUSH32(esp, ebx); /* 0x171C9427: push ebx */
    ebx = MEM32(eax + 0x8); /* 0x171C9428: mov ebx, dword ptr [eax + 8] */
    *(double*)ADDR(ebp + (-0x58)) = _st[0]; /* 0x171C942B: fst qword ptr [ebp - 0x58] */
    ecx = MEM32(ebx); /* 0x171C942E: mov ecx, dword ptr [ebx] */
    *(double*)ADDR(ebp + (-0x60)) = _st[0]; /* 0x171C9430: fst qword ptr [ebp - 0x60] */
    /* cmp ecx, ebx */ /* 0x171C9433: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x68)) = _v; } /* 0x171C9435: fstp qword ptr [ebp - 0x68] */
    fp_push(*(double*)ADDR(0x17025D30)); /* 0x171C9438: fld qword ptr [0x17025d30] */
    PUSH32(esp, esi); /* 0x171C943E: push esi */
    *(double*)ADDR(ebp + (-0x40)) = _st[0]; /* 0x171C943F: fst qword ptr [ebp - 0x40] */
    *(double*)ADDR(ebp + (-0x48)) = _st[0]; /* 0x171C9442: fst qword ptr [ebp - 0x48] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x50)) = _v; } /* 0x171C9445: fstp qword ptr [ebp - 0x50] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C949A; /* 0x171C9448: je 0x171c949a */
L_171C944A:
    PUSH32(esp, edi); /* 0x171C944A: push edi */
L_171C944B:
    eax = ecx + 0x10; /* 0x171C944B: lea eax, [ecx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C944E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x171C9450: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C9453: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171C9455:
    eax = MEM32(ebp + (-0x4)); /* 0x171C9455: mov eax, dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(eax)); /* 0x171C9458: fld qword ptr [eax] */
    esi = ebp + edi + (-0x50); /* 0x171C945A: lea esi, [ebp + edi - 0x50] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi)); /* 0x171C945E: fcom qword ptr [esi] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9460: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9462: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C946D; /* 0x171C9465: jp 0x171c946d */
L_171C9467:
    *(double*)ADDR(esi) = _st[0]; /* 0x171C9467: fst qword ptr [esi] */
    MEM32(ebp + edx + (-0x14)) = ecx; /* 0x171C9469: mov dword ptr [ebp + edx - 0x14], ecx */
L_171C946D:
    esi = ebp + edi + (-0x68); /* 0x171C946D: lea esi, [ebp + edi - 0x68] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi)); /* 0x171C9471: fcom qword ptr [esi] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9473: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9475: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C9482; /* 0x171C9478: jne 0x171c9482 */
L_171C947A:
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x171C947A: fstp qword ptr [esi] */
    MEM32(ebp + edx + (-0x2C)) = ecx; /* 0x171C947C: mov dword ptr [ebp + edx - 0x2c], ecx */
    goto L_171C9484; /* 0x171C9480: jmp 0x171c9484 */
L_171C9482:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9482: fstp st(0) */
L_171C9484:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 8; /* 0x171C9484: add dword ptr [ebp - 4], 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x171C9488: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171C948B: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, 0x18u */ /* 0x171C948E: cmp edi, 0x18 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C9455; /* 0x171C9491: jl 0x171c9455 */
L_171C9493:
    ecx = MEM32(ecx); /* 0x171C9493: mov ecx, dword ptr [ecx] */
    /* cmp ecx, ebx */ /* 0x171C9495: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C944B; /* 0x171C9497: jne 0x171c944b */
L_171C9499:
    edi = POP32_VAL(esp); /* 0x171C9499: pop edi */
L_171C949A:
    fp_push(*(double*)ADDR(ebp + (-0x60))); /* 0x171C949A: fld qword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C949D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] -= *(double*)ADDR(ebp + (-0x48)); /* 0x171C949F: fsub qword ptr [ebp - 0x48] */
    fp_push(*(double*)ADDR(ebp + (-0x68))); /* 0x171C94A2: fld qword ptr [ebp - 0x68] */
    _st[0] -= *(double*)ADDR(ebp + (-0x50)); /* 0x171C94A5: fsub qword ptr [ebp - 0x50] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C94A8: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C94AA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C94AC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C94B2; /* 0x171C94AF: jp 0x171c94b2 */
L_171C94B1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171C94B1: inc ecx */
    _flag_k = FK_INC;
L_171C94B2:
    fp_push(*(double*)ADDR(ebp + (-0x58))); /* 0x171C94B2: fld qword ptr [ebp - 0x58] */
    _st[0] -= *(double*)ADDR(ebp + (-0x40)); /* 0x171C94B5: fsub qword ptr [ebp - 0x40] */
    fp_push(*(double*)ADDR(ebp + ecx * 8 + (-0x68))); /* 0x171C94B8: fld qword ptr [ebp + ecx*8 - 0x68] */
    _st[0] -= *(double*)ADDR(ebp + ecx * 8 + (-0x50)); /* 0x171C94BC: fsub qword ptr [ebp + ecx*8 - 0x50] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C94C0: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C94C2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C94C4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C94CC; /* 0x171C94C7: jp 0x171c94cc */
L_171C94C9:
    PUSH32(esp, 2); /* 0x171C94C9: push 2 */
    ecx = POP32_VAL(esp); /* 0x171C94CB: pop ecx */
L_171C94CC:
    fp_push(*(double*)ADDR(ebp + ecx * 8 + (-0x50))); /* 0x171C94CC: fld qword ptr [ebp + ecx*8 - 0x50] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + ecx * 8 + (-0x68))); /* 0x171C94D0: fcomp qword ptr [ebp + ecx*8 - 0x68] */
    fp_pop();
    fp_push(0.0); /* 0x171C94D4: fldz  */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C94D6: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171C94D8: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C94F1; /* 0x171C94DB: jne 0x171c94f1 */
L_171C94DD:
    eax = MEM32(ebp + 0x8); /* 0x171C94DD: mov eax, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x171C94E0: fstp qword ptr [eax] */
    fp_push(0.0); /* 0x171C94E2: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x8) = _v; } /* 0x171C94E4: fstp qword ptr [eax + 8] */
    fp_push(1.0); /* 0x171C94E7: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x10) = _v; } /* 0x171C94E9: fstp qword ptr [eax + 0x10] */
    goto L_171C95D6; /* 0x171C94EC: jmp 0x171c95d6 */
L_171C94F1:
    edx = MEM32(ebx); /* 0x171C94F1: mov edx, dword ptr [ebx] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x171C94F3: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x171C94F3: shl ecx, 2 */
    /* cmp edx, ebx */ /* 0x171C94F6: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + ecx + (-0x14)); /* 0x171C94F8: mov eax, dword ptr [ebp + ecx - 0x14] */
    ecx = MEM32(ebp + ecx + (-0x2C)); /* 0x171C94FC: mov ecx, dword ptr [ebp + ecx - 0x2c] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x171C9500: fld qword ptr [eax + 0x10] */
    _st[0] -= *(double*)ADDR(ecx + 0x10); /* 0x171C9503: fsub qword ptr [ecx + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x171C9506: fstp qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(eax + 0x18)); /* 0x171C9509: fld qword ptr [eax + 0x18] */
    _st[0] -= *(double*)ADDR(ecx + 0x18); /* 0x171C950C: fsub qword ptr [ecx + 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x171C950F: fstp qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(eax + 0x20)); /* 0x171C9512: fld qword ptr [eax + 0x20] */
    _st[0] -= *(double*)ADDR(ecx + 0x20); /* 0x171C9515: fsub qword ptr [ecx + 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x171C9518: fstp qword ptr [ebp - 0x10] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C95B6; /* 0x171C951B: je 0x171c95b6 */
L_171C9521:
    fp_push(*(double*)ADDR(edx + 0x10)); /* 0x171C9521: fld qword ptr [edx + 0x10] */
    _st[0] -= *(double*)ADDR(ecx + 0x10); /* 0x171C9524: fsub qword ptr [ecx + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x18)); /* 0x171C9527: fld qword ptr [edx + 0x18] */
    _st[0] -= *(double*)ADDR(ecx + 0x18); /* 0x171C952A: fsub qword ptr [ecx + 0x18] */
    fp_push(*(double*)ADDR(edx + 0x20)); /* 0x171C952D: fld qword ptr [edx + 0x20] */
    _st[0] -= *(double*)ADDR(ecx + 0x20); /* 0x171C9530: fsub qword ptr [ecx + 0x20] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x171C9533: fld qword ptr [ebp - 0x18] */
    _st[0] *= _st[1]; /* 0x171C9536: fmul st(1) */
    fp_push(_st[2]); /* 0x171C9538: fld st(2) */
    _st[0] *= *(double*)ADDR(ebp + (-0x10)); /* 0x171C953A: fmul qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C953D: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x38)) = _v; } /* 0x171C953F: fstp qword ptr [ebp - 0x38] */
    fp_push(_st[2]); /* 0x171C9542: fld st(2) */
    _st[0] *= *(double*)ADDR(ebp + (-0x10)); /* 0x171C9544: fmul qword ptr [ebp - 0x10] */
    fp_push(_st[1]); /* 0x171C9547: fld st(1) */
    _st[0] *= *(double*)ADDR(ebp + (-0x20)); /* 0x171C9549: fmul qword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C954C: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x171C954E: fstp qword ptr [ebp - 0x30] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9551: fstp st(0) */
    _st[0] *= *(double*)ADDR(ebp + (-0x20)); /* 0x171C9553: fmul qword ptr [ebp - 0x20] */
    fp_push(_st[1]); /* 0x171C9556: fld st(1) */
    _st[0] *= *(double*)ADDR(ebp + (-0x18)); /* 0x171C9558: fmul qword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C955B: fsubp st(1) */
    *(double*)ADDR(ebp + (-0x28)) = _st[0]; /* 0x171C955D: fst qword ptr [ebp - 0x28] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171C9560: fstp st(1) */
    fp_push(_st[0]); /* 0x171C9562: fld st(0) */
    _st[0] *= _st[1]; /* 0x171C9564: fmul st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x171C9566: fld qword ptr [ebp - 0x30] */
    _st[0] *= *(double*)ADDR(ebp + (-0x30)); /* 0x171C9569: fmul qword ptr [ebp - 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C956C: faddp st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x38))); /* 0x171C956E: fld qword ptr [ebp - 0x38] */
    _st[0] *= *(double*)ADDR(ebp + (-0x38)); /* 0x171C9571: fmul qword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C9574: faddp st(1) */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x171C9576: fst qword ptr [ebp - 8] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171C9579: fstp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C957B: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C957D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C957F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C959D; /* 0x171C9582: jne 0x171c959d */
L_171C9584:
    eax = MEM32(ebp + 0x8); /* 0x171C9584: mov eax, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9587: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9589: fld qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + (-0x38))); /* 0x171C958C: fld qword ptr [ebp - 0x38] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x171C958F: fstp qword ptr [eax] */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x171C9591: fld qword ptr [ebp - 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x8) = _v; } /* 0x171C9594: fstp qword ptr [eax + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x171C9597: fld qword ptr [ebp - 0x28] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x10) = _v; } /* 0x171C959A: fstp qword ptr [eax + 0x10] */
L_171C959D:
    edx = MEM32(edx); /* 0x171C959D: mov edx, dword ptr [edx] */
    /* cmp edx, ebx */ /* 0x171C959F: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C9521; /* 0x171C95A1: jne 0x171c9521 */
L_171C95A7:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C95A7: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C95AD: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C95AF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C95D6; /* 0x171C95B2: jp 0x171c95d6 */
L_171C95B4:
    goto L_171C95B8; /* 0x171C95B4: jmp 0x171c95b8 */
L_171C95B6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C95B6: fstp st(0) */
L_171C95B8:
    esi = MEM32(ebp + 0x8); /* 0x171C95B8: mov esi, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x171C95BB: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x171C95BD: fstp qword ptr [esi + 0x10] */
    ecx = ebp + (-0x20); /* 0x171C95C0: lea ecx, [ebp - 0x20] */
    fp_push(0.0); /* 0x171C95C3: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x171C95C5: fstp qword ptr [esi + 8] */
    fp_push(0.0); /* 0x171C95C8: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x171C95CA: fstp qword ptr [esi] */
    RECOMP_CALL(sub_171C93A6); /* 0x171C95CC: call 0x171c93a6 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x171C95D1: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(esi + eax * 8) = _v; } /* 0x171C95D3: fstp qword ptr [esi + eax*8] */
L_171C95D6:
    esi = POP32_VAL(esp); /* 0x171C95D6: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C95D7: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C95D8: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C95D9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C95E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C95E1u);

L_171C95E1:
    edi = edi; /* 0x171C95E1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C95E3: push ebp */
    ebp = esp; /* 0x171C95E4: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171C95E6: mov ecx, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x171C95E9: fldz  */
    PUSH32(esp, ebx); /* 0x171C95EB: push ebx */
    PUSH32(esp, esi); /* 0x171C95EC: push esi */
    PUSH32(esp, edi); /* 0x171C95ED: push edi */
    edi = MEM32(ecx + 0x8); /* 0x171C95EE: mov edi, dword ptr [ecx + 8] */
    ebx = edi + 0x40; /* 0x171C95F1: lea ebx, [edi + 0x40] */
    esi = MEM32(ebx); /* 0x171C95F4: mov esi, dword ptr [ebx] */
    /* cmp esi, ebx */ /* 0x171C95F6: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C9666; /* 0x171C95F8: je 0x171c9666 */
L_171C95FA:
    eax = MEM32(esi + 0x8); /* 0x171C95FA: mov eax, dword ptr [esi + 8] */
    /* cmp MEM32(eax + 0x1C), 0 */ /* 0x171C95FD: cmp dword ptr [eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C9627; /* 0x171C9601: jle 0x171c9627 */
L_171C9603:
    ecx = MEM32(eax + 0x10); /* 0x171C9603: mov ecx, dword ptr [eax + 0x10] */
    edx = MEM32(eax + 0x4); /* 0x171C9606: mov edx, dword ptr [eax + 4] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C9609: fld qword ptr [ecx + 0x28] */
    edx = MEM32(edx + 0x10); /* 0x171C960C: mov edx, dword ptr [edx + 0x10] */
    _st[0] -= *(double*)ADDR(edx + 0x28); /* 0x171C960F: fsub qword ptr [edx + 0x28] */
    eax = MEM32(eax + 0xC); /* 0x171C9612: mov eax, dword ptr [eax + 0xc] */
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x171C9615: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171C9618: fld qword ptr [edx + 0x30] */
    _st[0] += *(double*)ADDR(ecx + 0x30); /* 0x171C961B: fadd qword ptr [ecx + 0x30] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171C961E: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C9620: faddp st(1) */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C9603; /* 0x171C9622: jne 0x171c9603 */
L_171C9624:
    ecx = MEM32(ebp + 0x8); /* 0x171C9624: mov ecx, dword ptr [ebp + 8] */
L_171C9627:
    esi = MEM32(esi); /* 0x171C9627: mov esi, dword ptr [esi] */
    /* cmp esi, ebx */ /* 0x171C9629: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C95FA; /* 0x171C962B: jne 0x171c95fa */
L_171C962D:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C962D: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9633: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9635: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9668; /* 0x171C9638: jp 0x171c9668 */
L_171C963A:
    eax = MEM32(edi); /* 0x171C963A: mov eax, dword ptr [edi] */
    goto L_171C9648; /* 0x171C963C: jmp 0x171c9648 */
L_171C963E:
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x171C963E: fld qword ptr [eax + 0x30] */
    _st[0] = -_st[0]; /* 0x171C9641: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x30) = _v; } /* 0x171C9643: fstp qword ptr [eax + 0x30] */
    eax = MEM32(eax); /* 0x171C9646: mov eax, dword ptr [eax] */
L_171C9648:
    /* cmp eax, edi */ /* 0x171C9648: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C963E; /* 0x171C964A: jne 0x171c963e */
L_171C964C:
    fp_push(*(double*)ADDR(ecx + 0x40)); /* 0x171C964C: fld qword ptr [ecx + 0x40] */
    _st[0] = -_st[0]; /* 0x171C964F: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x40) = _v; } /* 0x171C9651: fstp qword ptr [ecx + 0x40] */
    fp_push(*(double*)ADDR(ecx + 0x48)); /* 0x171C9654: fld qword ptr [ecx + 0x48] */
    _st[0] = -_st[0]; /* 0x171C9657: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x48) = _v; } /* 0x171C9659: fstp qword ptr [ecx + 0x48] */
    fp_push(*(double*)ADDR(ecx + 0x50)); /* 0x171C965C: fld qword ptr [ecx + 0x50] */
    _st[0] = -_st[0]; /* 0x171C965F: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x50) = _v; } /* 0x171C9661: fstp qword ptr [ecx + 0x50] */
    goto L_171C9668; /* 0x171C9664: jmp 0x171c9668 */
L_171C9666:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9666: fstp st(0) */
L_171C9668:
    edi = POP32_VAL(esp); /* 0x171C9668: pop edi */
    esi = POP32_VAL(esp); /* 0x171C9669: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C966A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C966B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C966C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C9674(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C9674u);

L_171C9674:
    edi = edi; /* 0x171C9674: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C9676: push ebp */
    ebp = esp; /* 0x171C9677: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x171C9679: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171C967C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C967D: mov esi, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(esi + 0x10)); /* 0x171C9680: fld qword ptr [esi + 0x10] */
    eax = MEM32(esi + 0x8); /* 0x171C9683: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x171C9686: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x171C968A: fstp qword ptr [ebp - 0x1c] */
    fp_push(*(double*)ADDR(esi + 0x18)); /* 0x171C968D: fld qword ptr [esi + 0x18] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C9690: mov dword ptr [ebp - 4], eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x171C9693: fstp qword ptr [ebp - 0x14] */
    fp_push(*(double*)ADDR(esi + 0x20)); /* 0x171C9696: fld qword ptr [esi + 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C9699: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C969C: fld qword ptr [0x17001d90] */
    fp_push(*(double*)ADDR(ebp + (-0x1C))); /* 0x171C96A2: fld qword ptr [ebp - 0x1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C96A5: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C96A7: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C96A9: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C96E4; /* 0x171C96AC: jp 0x171c96e4 */
L_171C96AE:
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C96AE: fld qword ptr [0x17001d90] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x171C96B4: fld qword ptr [ebp - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C96B7: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C96B9: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C96BB: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C96E4; /* 0x171C96BE: jp 0x171c96e4 */
L_171C96C0:
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C96C0: fld qword ptr [0x17001d90] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x171C96C6: fld qword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C96C9: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C96CB: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C96CD: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C96E4; /* 0x171C96D0: jp 0x171c96e4 */
L_171C96D2:
    eax = ebp + (-0x1C); /* 0x171C96D2: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x171C96D5: push eax */
    eax = esi; /* 0x171C96D6: mov eax, esi */
    RECOMP_CALL(sub_171C9419); /* 0x171C96D8: call 0x171c9419 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = 1; /* 0x171C96DD: mov dword ptr [ebp + 8], 1 */
L_171C96E4:
    PUSH32(esp, ebx); /* 0x171C96E4: push ebx */
    PUSH32(esp, edi); /* 0x171C96E5: push edi */
    ecx = ebp + (-0x1C); /* 0x171C96E6: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_171C93A6); /* 0x171C96E9: call 0x171c93a6 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x171C96EE: fldz  */
    ebx = eax; /* 0x171C96F0: mov ebx, eax */
    PUSH32(esp, 3); /* 0x171C96F2: push 3 */
    eax = ebx + 0x1; /* 0x171C96F4: lea eax, [ebx + 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171C96F7: cdq  */
    ecx = POP32_VAL(esp); /* 0x171C96F8: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x171C96F9: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = ebx + 0x2; /* 0x171C96FB: lea eax, [ebx + 2] */
    PUSH32(esp, 3); /* 0x171C96FE: push 3 */
    edi = ebx; /* 0x171C9700: mov edi, ebx */
    ebx = POP32_VAL(esp); /* 0x171C9702: pop ebx */
    if (3u) _cf = (((edi) >> 29) & 1u); /* 0x171C9703: shl edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 3u; /* 0x171C9703: shl edi, 3 */
    { double _v = fp_pop(); *(double*)ADDR(edi + esi + 0x28) = _v; } /* 0x171C9706: fstp qword ptr [edi + esi + 0x28] */
    fp_push(1.0); /* 0x171C970A: fld1  */
    ecx = edx; /* 0x171C970C: mov ecx, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171C970E: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x171C970F: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x171C9711: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x171C9711: shl ecx, 3 */
    { double _v = fp_pop(); *(double*)ADDR(ecx + esi + 0x28) = _v; } /* 0x171C9714: fstp qword ptr [ecx + esi + 0x28] */
    fp_push(0.0); /* 0x171C9718: fldz  */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x171C971A: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x171C971A: shl edx, 3 */
    { double _v = fp_pop(); *(double*)ADDR(edx + esi + 0x28) = _v; } /* 0x171C971D: fstp qword ptr [edx + esi + 0x28] */
    fp_push(0.0); /* 0x171C9721: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(edi + esi + 0x40) = _v; } /* 0x171C9723: fstp qword ptr [edi + esi + 0x40] */
    fp_push(0.0); /* 0x171C9727: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(ecx + esi + 0x40) = _v; } /* 0x171C9729: fstp qword ptr [ecx + esi + 0x40] */
    fp_push(*(double*)ADDR(ebp + edi + (-0x1C))); /* 0x171C972D: fld qword ptr [ebp + edi - 0x1c] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9731: fcomp qword ptr [0x17001d90] */
    fp_pop();
    edi = POP32_VAL(esp); /* 0x171C9737: pop edi */
    ebx = POP32_VAL(esp); /* 0x171C9738: pop ebx */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9739: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C973B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C9744; /* 0x171C973E: jne 0x171c9744 */
L_171C9740:
    fp_push(1.0); /* 0x171C9740: fld1  */
    goto L_171C974A; /* 0x171C9742: jmp 0x171c974a */
L_171C9744:
    fp_push(*(double*)ADDR(0x170055F8)); /* 0x171C9744: fld qword ptr [0x170055f8] */
L_171C974A:
    ecx = MEM32(ebp + (-0x4)); /* 0x171C974A: mov ecx, dword ptr [ebp - 4] */
    { double _v = fp_pop(); *(double*)ADDR(edx + esi + 0x40) = _v; } /* 0x171C974D: fstp qword ptr [edx + esi + 0x40] */
    eax = MEM32(ecx); /* 0x171C9751: mov eax, dword ptr [ecx] */
    goto L_171C9789; /* 0x171C9753: jmp 0x171c9789 */
L_171C9755:
    fp_push(*(double*)ADDR(eax + 0x20)); /* 0x171C9755: fld qword ptr [eax + 0x20] */
    _st[0] *= *(double*)ADDR(esi + 0x38); /* 0x171C9758: fmul qword ptr [esi + 0x38] */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C975B: fld qword ptr [esi + 0x30] */
    _st[0] *= *(double*)ADDR(eax + 0x18); /* 0x171C975E: fmul qword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C9761: faddp st(1) */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x171C9763: fld qword ptr [eax + 0x10] */
    _st[0] *= *(double*)ADDR(esi + 0x28); /* 0x171C9766: fmul qword ptr [esi + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C9769: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x28) = _v; } /* 0x171C976B: fstp qword ptr [eax + 0x28] */
    fp_push(*(double*)ADDR(eax + 0x20)); /* 0x171C976E: fld qword ptr [eax + 0x20] */
    _st[0] *= *(double*)ADDR(esi + 0x50); /* 0x171C9771: fmul qword ptr [esi + 0x50] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x171C9774: fld qword ptr [eax + 0x10] */
    _st[0] *= *(double*)ADDR(esi + 0x40); /* 0x171C9777: fmul qword ptr [esi + 0x40] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C977A: faddp st(1) */
    fp_push(*(double*)ADDR(eax + 0x18)); /* 0x171C977C: fld qword ptr [eax + 0x18] */
    _st[0] *= *(double*)ADDR(esi + 0x48); /* 0x171C977F: fmul qword ptr [esi + 0x48] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C9782: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x30) = _v; } /* 0x171C9784: fstp qword ptr [eax + 0x30] */
    eax = MEM32(eax); /* 0x171C9787: mov eax, dword ptr [eax] */
L_171C9789:
    /* cmp eax, ecx */ /* 0x171C9789: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C9755; /* 0x171C978B: jne 0x171c9755 */
L_171C978D:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171C978D: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C9799; /* 0x171C9791: je 0x171c9799 */
L_171C9793:
    PUSH32(esp, esi); /* 0x171C9793: push esi */
    RECOMP_CALL(sub_171C95E1); /* 0x171C9794: call 0x171c95e1 */
    RECOMP_FLAGS_IN();
L_171C9799:
    esi = POP32_VAL(esp); /* 0x171C9799: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C979A: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C979B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C97A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C97A3u);

L_171C97A3:
    edi = edi; /* 0x171C97A3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C97A5: push ebp */
    ebp = esp; /* 0x171C97A6: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171C97A8: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x171C97AB: mov edx, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C97AE: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x28)); /* 0x171C97B1: fcomp qword ptr [edx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C97B4: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C97B6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C97DB; /* 0x171C97B9: jnp 0x171c97db */
L_171C97BB:
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C97BB: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C97BE: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C97C1: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C97C3: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C97C5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C97D7; /* 0x171C97C8: jp 0x171c97d7 */
L_171C97CA:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C97CA: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x30)); /* 0x171C97CD: fcomp qword ptr [edx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C97D0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C97D2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C97DB; /* 0x171C97D5: jnp 0x171c97db */
L_171C97D7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C97D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171C97DE; /* 0x171C97D9: jmp 0x171c97de */
L_171C97DB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C97DB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C97DD: inc eax */
    _flag_k = FK_INC;
L_171C97DE:
    ebp = POP32_VAL(esp); /* 0x171C97DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C97DF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C97E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C97E7u);

L_171C97E7:
    edi = edi; /* 0x171C97E7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C97E9: push ebp */
    ebp = esp; /* 0x171C97EA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171C97EC: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x171C97EF: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C97F2: fld qword ptr [ecx + 0x28] */
    edx = MEM32(ebp + 0x8); /* 0x171C97F5: mov edx, dword ptr [ebp + 8] */
    _st[0] -= *(double*)ADDR(edx + 0x28); /* 0x171C97F8: fsub qword ptr [edx + 0x28] */
    PUSH32(esp, esi); /* 0x171C97FB: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171C97FC: mov esi, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C97FF: fld qword ptr [esi + 0x28] */
    _st[0] -= *(double*)ADDR(ecx + 0x28); /* 0x171C9802: fsub qword ptr [ecx + 0x28] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x171C9805: fst qword ptr [ebp - 8] */
    _st[0] += _st[1]; /* 0x171C9808: fadd st(1) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x171C980A: fst qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C980D: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9813: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9815: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C9857; /* 0x171C9818: jne 0x171c9857 */
L_171C981A:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x171C981A: fcom qword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C981D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C981F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C983D; /* 0x171C9822: jp 0x171c983d */
L_171C9824:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171C9824: fld qword ptr [edx + 0x30] */
    _st[0] -= *(double*)ADDR(esi + 0x30); /* 0x171C9827: fsub qword ptr [esi + 0x30] */
    fp_push(_st[1]); /* 0x171C982A: fld st(1) */
    _st[0] /= *(double*)ADDR(ebp + (-0x10)); /* 0x171C982C: fdiv qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171C982F: fmulp st(1) */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C9831: fld qword ptr [ecx + 0x30] */
    _st[0] -= *(double*)ADDR(edx + 0x30); /* 0x171C9834: fsub qword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C9837: faddp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171C9839: fstp st(1) */
    goto L_171C985F; /* 0x171C983B: jmp 0x171c985f */
L_171C983D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C983D: fstp st(0) */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C983F: fld qword ptr [esi + 0x30] */
    _st[0] -= *(double*)ADDR(edx + 0x30); /* 0x171C9842: fsub qword ptr [edx + 0x30] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9845: fld qword ptr [ebp - 8] */
    _st[0] /= *(double*)ADDR(ebp + (-0x10)); /* 0x171C9848: fdiv qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171C984B: fmulp st(1) */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C984D: fld qword ptr [ecx + 0x30] */
    _st[0] -= *(double*)ADDR(esi + 0x30); /* 0x171C9850: fsub qword ptr [esi + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C9853: faddp st(1) */
    goto L_171C985F; /* 0x171C9855: jmp 0x171c985f */
L_171C9857:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9857: fstp st(0) */
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C9859: fld qword ptr [0x17001d90] */
L_171C985F:
    esi = POP32_VAL(esp); /* 0x171C985F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C9860: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171C9861: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171C9869(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C9869u);

L_171C9869:
    edi = edi; /* 0x171C9869: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C986B: push ebp */
    ebp = esp; /* 0x171C986C: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x171C986E: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C9871: fld qword ptr [ecx + 0x28] */
    edx = MEM32(ebp + 0x8); /* 0x171C9874: mov edx, dword ptr [ebp + 8] */
    _st[0] -= *(double*)ADDR(edx + 0x28); /* 0x171C9877: fsub qword ptr [edx + 0x28] */
    PUSH32(esp, esi); /* 0x171C987A: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171C987B: mov esi, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C987E: fld qword ptr [esi + 0x28] */
    _st[0] -= *(double*)ADDR(ecx + 0x28); /* 0x171C9881: fsub qword ptr [ecx + 0x28] */
    fp_push(_st[0]); /* 0x171C9884: fld st(0) */
    _st[0] += _st[2]; /* 0x171C9886: fadd st(2) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9888: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C988E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9890: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C98AD; /* 0x171C9893: jne 0x171c98ad */
L_171C9895:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C9895: fld qword ptr [ecx + 0x30] */
    _st[0] -= *(double*)ADDR(edx + 0x30); /* 0x171C9898: fsub qword ptr [edx + 0x30] */
    _st[0] *= _st[1]; /* 0x171C989B: fmul st(1) */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C989D: fld qword ptr [ecx + 0x30] */
    _st[0] -= *(double*)ADDR(esi + 0x30); /* 0x171C98A0: fsub qword ptr [esi + 0x30] */
    _st[0] *= _st[3]; /* 0x171C98A3: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C98A5: faddp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C98A7: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C98A9: fstp st(0) */
    goto L_171C98B7; /* 0x171C98AB: jmp 0x171c98b7 */
L_171C98AD:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C98AD: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C98AF: fstp st(0) */
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C98B1: fld qword ptr [0x17001d90] */
L_171C98B7:
    esi = POP32_VAL(esp); /* 0x171C98B7: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C98B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171C98B9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171C98C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C98C1u);

L_171C98C1:
    edi = edi; /* 0x171C98C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C98C3: push ebp */
    ebp = esp; /* 0x171C98C4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171C98C6: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x171C98C9: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C98CC: fld qword ptr [ecx + 0x30] */
    edx = MEM32(ebp + 0x8); /* 0x171C98CF: mov edx, dword ptr [ebp + 8] */
    _st[0] -= *(double*)ADDR(edx + 0x30); /* 0x171C98D2: fsub qword ptr [edx + 0x30] */
    PUSH32(esp, esi); /* 0x171C98D5: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171C98D6: mov esi, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C98D9: fld qword ptr [esi + 0x30] */
    _st[0] -= *(double*)ADDR(ecx + 0x30); /* 0x171C98DC: fsub qword ptr [ecx + 0x30] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x171C98DF: fst qword ptr [ebp - 8] */
    _st[0] += _st[1]; /* 0x171C98E2: fadd st(1) */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x171C98E4: fst qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C98E7: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C98ED: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C98EF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C9931; /* 0x171C98F2: jne 0x171c9931 */
L_171C98F4:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x171C98F4: fcom qword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C98F7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C98F9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9917; /* 0x171C98FC: jp 0x171c9917 */
L_171C98FE:
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C98FE: fld qword ptr [edx + 0x28] */
    _st[0] -= *(double*)ADDR(esi + 0x28); /* 0x171C9901: fsub qword ptr [esi + 0x28] */
    fp_push(_st[1]); /* 0x171C9904: fld st(1) */
    _st[0] /= *(double*)ADDR(ebp + (-0x10)); /* 0x171C9906: fdiv qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171C9909: fmulp st(1) */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C990B: fld qword ptr [ecx + 0x28] */
    _st[0] -= *(double*)ADDR(edx + 0x28); /* 0x171C990E: fsub qword ptr [edx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C9911: faddp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171C9913: fstp st(1) */
    goto L_171C9939; /* 0x171C9915: jmp 0x171c9939 */
L_171C9917:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9917: fstp st(0) */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C9919: fld qword ptr [esi + 0x28] */
    _st[0] -= *(double*)ADDR(edx + 0x28); /* 0x171C991C: fsub qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C991F: fld qword ptr [ebp - 8] */
    _st[0] /= *(double*)ADDR(ebp + (-0x10)); /* 0x171C9922: fdiv qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171C9925: fmulp st(1) */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C9927: fld qword ptr [ecx + 0x28] */
    _st[0] -= *(double*)ADDR(esi + 0x28); /* 0x171C992A: fsub qword ptr [esi + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C992D: faddp st(1) */
    goto L_171C9939; /* 0x171C992F: jmp 0x171c9939 */
L_171C9931:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9931: fstp st(0) */
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C9933: fld qword ptr [0x17001d90] */
L_171C9939:
    esi = POP32_VAL(esp); /* 0x171C9939: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C993A: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171C993B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171C9943(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C9943u);

L_171C9943:
    edi = edi; /* 0x171C9943: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C9945: push ebp */
    ebp = esp; /* 0x171C9946: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x171C9948: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C994B: fld qword ptr [ecx + 0x30] */
    edx = MEM32(ebp + 0x8); /* 0x171C994E: mov edx, dword ptr [ebp + 8] */
    _st[0] -= *(double*)ADDR(edx + 0x30); /* 0x171C9951: fsub qword ptr [edx + 0x30] */
    PUSH32(esp, esi); /* 0x171C9954: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171C9955: mov esi, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C9958: fld qword ptr [esi + 0x30] */
    _st[0] -= *(double*)ADDR(ecx + 0x30); /* 0x171C995B: fsub qword ptr [ecx + 0x30] */
    fp_push(_st[0]); /* 0x171C995E: fld st(0) */
    _st[0] += _st[2]; /* 0x171C9960: fadd st(2) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9962: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9968: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C996A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C9987; /* 0x171C996D: jne 0x171c9987 */
L_171C996F:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C996F: fld qword ptr [ecx + 0x28] */
    _st[0] -= *(double*)ADDR(edx + 0x28); /* 0x171C9972: fsub qword ptr [edx + 0x28] */
    _st[0] *= _st[1]; /* 0x171C9975: fmul st(1) */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C9977: fld qword ptr [ecx + 0x28] */
    _st[0] -= *(double*)ADDR(esi + 0x28); /* 0x171C997A: fsub qword ptr [esi + 0x28] */
    _st[0] *= _st[3]; /* 0x171C997D: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C997F: faddp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C9981: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9983: fstp st(0) */
    goto L_171C9991; /* 0x171C9985: jmp 0x171c9991 */
L_171C9987:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9987: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9989: fstp st(0) */
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C998B: fld qword ptr [0x17001d90] */
L_171C9991:
    esi = POP32_VAL(esp); /* 0x171C9991: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C9992: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171C9993: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171C999B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C999Bu);

L_171C999B:
    edi = edi; /* 0x171C999B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C999D: push ebp */
    ebp = esp; /* 0x171C999E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171C99A0: push ecx */
    PUSH32(esp, ecx); /* 0x171C99A1: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171C99A2: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C99A5: fld qword ptr [ecx + 0x28] */
    PUSH32(esp, ebx); /* 0x171C99A8: push ebx */
    PUSH32(esp, esi); /* 0x171C99A9: push esi */
    PUSH32(esp, edi); /* 0x171C99AA: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171C99AB: mov edi, dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x28)); /* 0x171C99AE: fcomp qword ptr [edi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C99B1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C99B3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C99DC; /* 0x171C99B6: jnp 0x171c99dc */
L_171C99B8:
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171C99B8: fld qword ptr [edi + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C99BB: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C99BE: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C99C0: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C99C2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C99D4; /* 0x171C99C5: jp 0x171c99d4 */
L_171C99C7:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C99C7: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x30)); /* 0x171C99CA: fcomp qword ptr [edi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C99CD: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C99CF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C99DC; /* 0x171C99D2: jnp 0x171c99dc */
L_171C99D4:
    MEM32(ebp + 0x8) = edi; /* 0x171C99D4: mov dword ptr [ebp + 8], edi */
    edi = ecx; /* 0x171C99D7: mov edi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171C99D9: mov ecx, dword ptr [ebp + 8] */
L_171C99DC:
    esi = MEM32(ebp + 0x10); /* 0x171C99DC: mov esi, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + 0x14); /* 0x171C99DF: mov ebx, dword ptr [ebp + 0x14] */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C99E2: fld qword ptr [esi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x28)); /* 0x171C99E5: fcomp qword ptr [ebx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C99E8: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C99EA: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9A11; /* 0x171C99ED: jnp 0x171c9a11 */
L_171C99EF:
    fp_push(*(double*)ADDR(ebx + 0x28)); /* 0x171C99EF: fld qword ptr [ebx + 0x28] */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C99F2: fld qword ptr [esi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C99F5: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C99F7: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C99F9: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9A0B; /* 0x171C99FC: jp 0x171c9a0b */
L_171C99FE:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C99FE: fld qword ptr [esi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x30)); /* 0x171C9A01: fcomp qword ptr [ebx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9A04: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9A06: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9A11; /* 0x171C9A09: jnp 0x171c9a11 */
L_171C9A0B:
    eax = esi; /* 0x171C9A0B: mov eax, esi */
    esi = ebx; /* 0x171C9A0D: mov esi, ebx */
    ebx = eax; /* 0x171C9A0F: mov ebx, eax */
L_171C9A11:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C9A11: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x28)); /* 0x171C9A14: fcomp qword ptr [esi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9A17: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9A19: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9A48; /* 0x171C9A1C: jnp 0x171c9a48 */
L_171C9A1E:
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C9A1E: fld qword ptr [esi + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C9A21: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9A24: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9A26: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C9A28: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9A3A; /* 0x171C9A2B: jp 0x171c9a3a */
L_171C9A2D:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C9A2D: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x30)); /* 0x171C9A30: fcomp qword ptr [esi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9A33: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9A35: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9A48; /* 0x171C9A38: jnp 0x171c9a48 */
L_171C9A3A:
    MEM32(ebp + 0x8) = esi; /* 0x171C9A3A: mov dword ptr [ebp + 8], esi */
    eax = edi; /* 0x171C9A3D: mov eax, edi */
    esi = ecx; /* 0x171C9A3F: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171C9A41: mov ecx, dword ptr [ebp + 8] */
    edi = ebx; /* 0x171C9A44: mov edi, ebx */
    ebx = eax; /* 0x171C9A46: mov ebx, eax */
L_171C9A48:
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C9A48: fld qword ptr [esi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x28)); /* 0x171C9A4B: fcomp qword ptr [edi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9A4E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9A50: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9A88; /* 0x171C9A53: jnp 0x171c9a88 */
L_171C9A55:
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171C9A55: fld qword ptr [edi + 0x28] */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C9A58: fld qword ptr [esi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9A5B: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9A5D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C9A5F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9A71; /* 0x171C9A62: jp 0x171c9a71 */
L_171C9A64:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C9A64: fld qword ptr [esi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x30)); /* 0x171C9A67: fcomp qword ptr [edi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9A6A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9A6C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9A88; /* 0x171C9A6F: jnp 0x171c9a88 */
L_171C9A71:
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C9A71: fld qword ptr [esi + 0x28] */
    eax = MEM32(ebp + 0x18); /* 0x171C9A74: mov eax, dword ptr [ebp + 0x18] */
    _st[0] += *(double*)ADDR(edi + 0x28); /* 0x171C9A77: fadd qword ptr [edi + 0x28] */
    _st[0] *= *(double*)ADDR(0x17001938); /* 0x171C9A7A: fmul qword ptr [0x17001938] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x28) = _v; } /* 0x171C9A80: fstp qword ptr [eax + 0x28] */
    goto L_171C9C25; /* 0x171C9A83: jmp 0x171c9c25 */
L_171C9A88:
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171C9A88: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x28)); /* 0x171C9A8B: fcomp qword ptr [ebx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9A8E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9A90: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9B6B; /* 0x171C9A93: jnp 0x171c9b6b */
L_171C9A99:
    fp_push(*(double*)ADDR(ebx + 0x28)); /* 0x171C9A99: fld qword ptr [ebx + 0x28] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171C9A9C: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9A9F: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9AA1: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C9AA3: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9AB9; /* 0x171C9AA6: jp 0x171c9ab9 */
L_171C9AA8:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x171C9AA8: fld qword ptr [edi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x30)); /* 0x171C9AAB: fcomp qword ptr [ebx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9AAE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9AB0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9B6B; /* 0x171C9AB3: jnp 0x171c9b6b */
L_171C9AB9:
    PUSH32(esp, edi); /* 0x171C9AB9: push edi */
    PUSH32(esp, esi); /* 0x171C9ABA: push esi */
    PUSH32(esp, ecx); /* 0x171C9ABB: push ecx */
    RECOMP_CALL(sub_171C9869); /* 0x171C9ABC: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C9AC1: fstp qword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x171C9AC4: push edi */
    PUSH32(esp, ebx); /* 0x171C9AC5: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C9AC6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C9869); /* 0x171C9AC9: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _st[0] = -_st[0]; /* 0x171C9ACE: fchs  */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9AD0: fld qword ptr [ebp - 8] */
    _st[0] += _st[1]; /* 0x171C9AD3: fadd st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9AD5: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9ADB: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9ADD: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9AF0; /* 0x171C9AE0: jp 0x171c9af0 */
L_171C9AE2:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9AE2: fld qword ptr [ebp - 8] */
    _st[0] = -_st[0]; /* 0x171C9AE5: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C9AE7: fstp qword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x171C9AEA: fld st(0) */
    _st[0] = -_st[0]; /* 0x171C9AEC: fchs  */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171C9AEE: fstp st(1) */
L_171C9AF0:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9AF0: fld qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9AF3: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9AF9: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9AFB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9B05; /* 0x171C9AFE: jp 0x171c9b05 */
L_171C9B00:
    fp_push(0.0); /* 0x171C9B00: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C9B02: fstp qword ptr [ebp - 8] */
L_171C9B05:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9B05: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9B0B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9B0D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9B16; /* 0x171C9B10: jp 0x171c9b16 */
L_171C9B12:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9B12: fstp st(0) */
    fp_push(0.0); /* 0x171C9B14: fldz  */
L_171C9B16:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9B16: fld qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9B19: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9B1B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9B1D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9B54; /* 0x171C9B20: jp 0x171c9b54 */
L_171C9B22:
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C9B22: fld qword ptr [0x17001d90] */
    fp_push(_st[1]); /* 0x171C9B28: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9B2A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9B2C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C9B2E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9B46; /* 0x171C9B31: jp 0x171c9b46 */
L_171C9B33:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9B33: fstp st(0) */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C9B35: fld qword ptr [esi + 0x28] */
    _st[0] += *(double*)ADDR(ebx + 0x28); /* 0x171C9B38: fadd qword ptr [ebx + 0x28] */
L_171C9B3B:
    _st[0] *= *(double*)ADDR(0x17001938); /* 0x171C9B3B: fmul qword ptr [0x17001938] */
L_171C9B41:
    goto L_171C9C18; /* 0x171C9B41: jmp 0x171c9c18 */
L_171C9B46:
    _st[0] += *(double*)ADDR(ebp + (-0x8)); /* 0x171C9B46: fadd qword ptr [ebp - 8] */
    _st[0] = *(double*)ADDR(ebp + (-0x8)) / _st[0]; /* 0x171C9B49: fdivr qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebx + 0x28)); /* 0x171C9B4C: fld qword ptr [ebx + 0x28] */
    goto L_171C9BF7; /* 0x171C9B4F: jmp 0x171c9bf7 */
L_171C9B54:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9B54: fld qword ptr [ebp - 8] */
    _st[0] += _st[1]; /* 0x171C9B57: fadd st(1) */
    _st[0] = _st[1] / _st[0]; /* 0x171C9B59: fdivr st(1) */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C9B5B: fld qword ptr [esi + 0x28] */
    _st[0] -= *(double*)ADDR(ebx + 0x28); /* 0x171C9B5E: fsub qword ptr [ebx + 0x28] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171C9B61: fmulp st(1) */
    _st[0] += *(double*)ADDR(ebx + 0x28); /* 0x171C9B63: fadd qword ptr [ebx + 0x28] */
    goto L_171C9C16; /* 0x171C9B66: jmp 0x171c9c16 */
L_171C9B6B:
    PUSH32(esp, edi); /* 0x171C9B6B: push edi */
    PUSH32(esp, esi); /* 0x171C9B6C: push esi */
    PUSH32(esp, ecx); /* 0x171C9B6D: push ecx */
    RECOMP_CALL(sub_171C97E7); /* 0x171C9B6E: call 0x171c97e7 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C9B73: fstp qword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x171C9B76: push ebx */
    PUSH32(esp, edi); /* 0x171C9B77: push edi */
    PUSH32(esp, esi); /* 0x171C9B78: push esi */
    RECOMP_CALL(sub_171C97E7); /* 0x171C9B79: call 0x171c97e7 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9B7E: fld qword ptr [ebp - 8] */
    _st[0] += _st[1]; /* 0x171C9B81: fadd st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9B83: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9B89: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9B8B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9B9E; /* 0x171C9B8E: jp 0x171c9b9e */
L_171C9B90:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9B90: fld qword ptr [ebp - 8] */
    _st[0] = -_st[0]; /* 0x171C9B93: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C9B95: fstp qword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x171C9B98: fld st(0) */
    _st[0] = -_st[0]; /* 0x171C9B9A: fchs  */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171C9B9C: fstp st(1) */
L_171C9B9E:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9B9E: fld qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9BA1: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9BA7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9BA9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9BB3; /* 0x171C9BAC: jp 0x171c9bb3 */
L_171C9BAE:
    fp_push(0.0); /* 0x171C9BAE: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C9BB0: fstp qword ptr [ebp - 8] */
L_171C9BB3:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9BB3: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9BB9: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9BBB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9BC4; /* 0x171C9BBE: jp 0x171c9bc4 */
L_171C9BC0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9BC0: fstp st(0) */
    fp_push(0.0); /* 0x171C9BC2: fldz  */
L_171C9BC4:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9BC4: fld qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9BC7: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9BC9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9BCB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9C04; /* 0x171C9BCE: jp 0x171c9c04 */
L_171C9BD0:
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C9BD0: fld qword ptr [0x17001d90] */
    fp_push(_st[1]); /* 0x171C9BD6: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9BD8: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9BDA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C9BDC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9BEE; /* 0x171C9BDF: jp 0x171c9bee */
L_171C9BE1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9BE1: fstp st(0) */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C9BE3: fld qword ptr [esi + 0x28] */
    _st[0] += *(double*)ADDR(edi + 0x28); /* 0x171C9BE6: fadd qword ptr [edi + 0x28] */
    RECOMP_BACKEDGE();
    goto L_171C9B3B; /* 0x171C9BE9: jmp 0x171c9b3b */
L_171C9BEE:
    _st[0] += *(double*)ADDR(ebp + (-0x8)); /* 0x171C9BEE: fadd qword ptr [ebp - 8] */
    _st[0] = *(double*)ADDR(ebp + (-0x8)) / _st[0]; /* 0x171C9BF1: fdivr qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171C9BF4: fld qword ptr [edi + 0x28] */
L_171C9BF7:
    _st[0] -= *(double*)ADDR(esi + 0x28); /* 0x171C9BF7: fsub qword ptr [esi + 0x28] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171C9BFA: fmulp st(1) */
    _st[0] += *(double*)ADDR(esi + 0x28); /* 0x171C9BFC: fadd qword ptr [esi + 0x28] */
    RECOMP_BACKEDGE();
    goto L_171C9B41; /* 0x171C9BFF: jmp 0x171c9b41 */
L_171C9C04:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9C04: fld qword ptr [ebp - 8] */
    _st[0] += _st[1]; /* 0x171C9C07: fadd st(1) */
    _st[0] = _st[1] / _st[0]; /* 0x171C9C09: fdivr st(1) */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C9C0B: fld qword ptr [esi + 0x28] */
    _st[0] -= *(double*)ADDR(edi + 0x28); /* 0x171C9C0E: fsub qword ptr [edi + 0x28] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171C9C11: fmulp st(1) */
    _st[0] += *(double*)ADDR(edi + 0x28); /* 0x171C9C13: fadd qword ptr [edi + 0x28] */
L_171C9C16:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171C9C16: fstp st(1) */
L_171C9C18:
    eax = MEM32(ebp + 0x18); /* 0x171C9C18: mov eax, dword ptr [ebp + 0x18] */
    fp_push(_st[0]); /* 0x171C9C1B: fld st(0) */
    ecx = MEM32(ebp + 0x8); /* 0x171C9C1D: mov ecx, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x28) = _v; } /* 0x171C9C20: fstp qword ptr [eax + 0x28] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9C23: fstp st(0) */
L_171C9C25:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C9C25: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x30)); /* 0x171C9C28: fcomp qword ptr [edi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9C2B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9C2D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9C56; /* 0x171C9C30: jnp 0x171c9c56 */
L_171C9C32:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x171C9C32: fld qword ptr [edi + 0x30] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C9C35: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9C38: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9C3A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C9C3C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9C4E; /* 0x171C9C3F: jp 0x171c9c4e */
L_171C9C41:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C9C41: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x28)); /* 0x171C9C44: fcomp qword ptr [edi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9C47: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9C49: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9C56; /* 0x171C9C4C: jnp 0x171c9c56 */
L_171C9C4E:
    MEM32(ebp + 0x8) = edi; /* 0x171C9C4E: mov dword ptr [ebp + 8], edi */
    edi = ecx; /* 0x171C9C51: mov edi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171C9C53: mov ecx, dword ptr [ebp + 8] */
L_171C9C56:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C9C56: fld qword ptr [esi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x30)); /* 0x171C9C59: fcomp qword ptr [ebx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9C5C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9C5E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9C85; /* 0x171C9C61: jnp 0x171c9c85 */
L_171C9C63:
    fp_push(*(double*)ADDR(ebx + 0x30)); /* 0x171C9C63: fld qword ptr [ebx + 0x30] */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C9C66: fld qword ptr [esi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9C69: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9C6B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C9C6D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9C7F; /* 0x171C9C70: jp 0x171c9c7f */
L_171C9C72:
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C9C72: fld qword ptr [esi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x28)); /* 0x171C9C75: fcomp qword ptr [ebx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9C78: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9C7A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9C85; /* 0x171C9C7D: jnp 0x171c9c85 */
L_171C9C7F:
    eax = esi; /* 0x171C9C7F: mov eax, esi */
    esi = ebx; /* 0x171C9C81: mov esi, ebx */
    ebx = eax; /* 0x171C9C83: mov ebx, eax */
L_171C9C85:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C9C85: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x30)); /* 0x171C9C88: fcomp qword ptr [esi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9C8B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9C8D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9CBC; /* 0x171C9C90: jnp 0x171c9cbc */
L_171C9C92:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C9C92: fld qword ptr [esi + 0x30] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C9C95: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9C98: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9C9A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C9C9C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9CAE; /* 0x171C9C9F: jp 0x171c9cae */
L_171C9CA1:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C9CA1: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x28)); /* 0x171C9CA4: fcomp qword ptr [esi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9CA7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9CA9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9CBC; /* 0x171C9CAC: jnp 0x171c9cbc */
L_171C9CAE:
    MEM32(ebp + 0x8) = esi; /* 0x171C9CAE: mov dword ptr [ebp + 8], esi */
    eax = edi; /* 0x171C9CB1: mov eax, edi */
    esi = ecx; /* 0x171C9CB3: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171C9CB5: mov ecx, dword ptr [ebp + 8] */
    edi = ebx; /* 0x171C9CB8: mov edi, ebx */
    ebx = eax; /* 0x171C9CBA: mov ebx, eax */
L_171C9CBC:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C9CBC: fld qword ptr [esi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x30)); /* 0x171C9CBF: fcomp qword ptr [edi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9CC2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9CC4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9CF6; /* 0x171C9CC7: jnp 0x171c9cf6 */
L_171C9CC9:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x171C9CC9: fld qword ptr [edi + 0x30] */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C9CCC: fld qword ptr [esi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9CCF: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9CD1: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C9CD3: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9CE5; /* 0x171C9CD6: jp 0x171c9ce5 */
L_171C9CD8:
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C9CD8: fld qword ptr [esi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x28)); /* 0x171C9CDB: fcomp qword ptr [edi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9CDE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9CE0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9CF6; /* 0x171C9CE3: jnp 0x171c9cf6 */
L_171C9CE5:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C9CE5: fld qword ptr [esi + 0x30] */
    _st[0] += *(double*)ADDR(edi + 0x30); /* 0x171C9CE8: fadd qword ptr [edi + 0x30] */
    _st[0] *= *(double*)ADDR(0x17001938); /* 0x171C9CEB: fmul qword ptr [0x17001938] */
    goto L_171C9E86; /* 0x171C9CF1: jmp 0x171c9e86 */
L_171C9CF6:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x171C9CF6: fld qword ptr [edi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x30)); /* 0x171C9CF9: fcomp qword ptr [ebx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9CFC: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9CFE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9DD9; /* 0x171C9D01: jnp 0x171c9dd9 */
L_171C9D07:
    fp_push(*(double*)ADDR(ebx + 0x30)); /* 0x171C9D07: fld qword ptr [ebx + 0x30] */
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x171C9D0A: fld qword ptr [edi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9D0D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9D0F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C9D11: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9D27; /* 0x171C9D14: jp 0x171c9d27 */
L_171C9D16:
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171C9D16: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x28)); /* 0x171C9D19: fcomp qword ptr [ebx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9D1C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9D1E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C9DD9; /* 0x171C9D21: jnp 0x171c9dd9 */
L_171C9D27:
    PUSH32(esp, edi); /* 0x171C9D27: push edi */
    PUSH32(esp, esi); /* 0x171C9D28: push esi */
    PUSH32(esp, ecx); /* 0x171C9D29: push ecx */
    RECOMP_CALL(sub_171C9943); /* 0x171C9D2A: call 0x171c9943 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C9D2F: fstp qword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x171C9D32: push edi */
    PUSH32(esp, ebx); /* 0x171C9D33: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C9D34: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C9943); /* 0x171C9D37: call 0x171c9943 */
    RECOMP_FLAGS_IN();
    _st[0] = -_st[0]; /* 0x171C9D3C: fchs  */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9D3E: fld qword ptr [ebp - 8] */
    _st[0] += _st[1]; /* 0x171C9D41: fadd st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9D43: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9D49: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9D4B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9D5E; /* 0x171C9D4E: jp 0x171c9d5e */
L_171C9D50:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9D50: fld qword ptr [ebp - 8] */
    _st[0] = -_st[0]; /* 0x171C9D53: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C9D55: fstp qword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x171C9D58: fld st(0) */
    _st[0] = -_st[0]; /* 0x171C9D5A: fchs  */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171C9D5C: fstp st(1) */
L_171C9D5E:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9D5E: fld qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9D61: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9D67: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9D69: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9D73; /* 0x171C9D6C: jp 0x171c9d73 */
L_171C9D6E:
    fp_push(0.0); /* 0x171C9D6E: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C9D70: fstp qword ptr [ebp - 8] */
L_171C9D73:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9D73: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9D79: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9D7B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9D84; /* 0x171C9D7E: jp 0x171c9d84 */
L_171C9D80:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9D80: fstp st(0) */
    fp_push(0.0); /* 0x171C9D82: fldz  */
L_171C9D84:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9D84: fld qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9D87: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9D89: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9D8B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9DC2; /* 0x171C9D8E: jp 0x171c9dc2 */
L_171C9D90:
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C9D90: fld qword ptr [0x17001d90] */
    fp_push(_st[1]); /* 0x171C9D96: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9D98: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9D9A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C9D9C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9DB4; /* 0x171C9D9F: jp 0x171c9db4 */
L_171C9DA1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9DA1: fstp st(0) */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C9DA3: fld qword ptr [esi + 0x30] */
    _st[0] += *(double*)ADDR(ebx + 0x30); /* 0x171C9DA6: fadd qword ptr [ebx + 0x30] */
L_171C9DA9:
    _st[0] *= *(double*)ADDR(0x17001938); /* 0x171C9DA9: fmul qword ptr [0x17001938] */
L_171C9DAF:
    goto L_171C9E86; /* 0x171C9DAF: jmp 0x171c9e86 */
L_171C9DB4:
    _st[0] += *(double*)ADDR(ebp + (-0x8)); /* 0x171C9DB4: fadd qword ptr [ebp - 8] */
    _st[0] = *(double*)ADDR(ebp + (-0x8)) / _st[0]; /* 0x171C9DB7: fdivr qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebx + 0x30)); /* 0x171C9DBA: fld qword ptr [ebx + 0x30] */
    goto L_171C9E65; /* 0x171C9DBD: jmp 0x171c9e65 */
L_171C9DC2:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9DC2: fld qword ptr [ebp - 8] */
    _st[0] += _st[1]; /* 0x171C9DC5: fadd st(1) */
    _st[0] = _st[1] / _st[0]; /* 0x171C9DC7: fdivr st(1) */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C9DC9: fld qword ptr [esi + 0x30] */
    _st[0] -= *(double*)ADDR(ebx + 0x30); /* 0x171C9DCC: fsub qword ptr [ebx + 0x30] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171C9DCF: fmulp st(1) */
    _st[0] += *(double*)ADDR(ebx + 0x30); /* 0x171C9DD1: fadd qword ptr [ebx + 0x30] */
    goto L_171C9E84; /* 0x171C9DD4: jmp 0x171c9e84 */
L_171C9DD9:
    PUSH32(esp, edi); /* 0x171C9DD9: push edi */
    PUSH32(esp, esi); /* 0x171C9DDA: push esi */
    PUSH32(esp, ecx); /* 0x171C9DDB: push ecx */
    RECOMP_CALL(sub_171C98C1); /* 0x171C9DDC: call 0x171c98c1 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C9DE1: fstp qword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x171C9DE4: push ebx */
    PUSH32(esp, edi); /* 0x171C9DE5: push edi */
    PUSH32(esp, esi); /* 0x171C9DE6: push esi */
    RECOMP_CALL(sub_171C98C1); /* 0x171C9DE7: call 0x171c98c1 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9DEC: fld qword ptr [ebp - 8] */
    _st[0] += _st[1]; /* 0x171C9DEF: fadd st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9DF1: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9DF7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9DF9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9E0C; /* 0x171C9DFC: jp 0x171c9e0c */
L_171C9DFE:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9DFE: fld qword ptr [ebp - 8] */
    _st[0] = -_st[0]; /* 0x171C9E01: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C9E03: fstp qword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x171C9E06: fld st(0) */
    _st[0] = -_st[0]; /* 0x171C9E08: fchs  */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171C9E0A: fstp st(1) */
L_171C9E0C:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9E0C: fld qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9E0F: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9E15: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9E17: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9E21; /* 0x171C9E1A: jp 0x171c9e21 */
L_171C9E1C:
    fp_push(0.0); /* 0x171C9E1C: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C9E1E: fstp qword ptr [ebp - 8] */
L_171C9E21:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C9E21: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9E27: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C9E29: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9E32; /* 0x171C9E2C: jp 0x171c9e32 */
L_171C9E2E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9E2E: fstp st(0) */
    fp_push(0.0); /* 0x171C9E30: fldz  */
L_171C9E32:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9E32: fld qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9E35: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9E37: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C9E39: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9E72; /* 0x171C9E3C: jp 0x171c9e72 */
L_171C9E3E:
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C9E3E: fld qword ptr [0x17001d90] */
    fp_push(_st[1]); /* 0x171C9E44: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C9E46: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C9E48: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C9E4A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C9E5C; /* 0x171C9E4D: jp 0x171c9e5c */
L_171C9E4F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C9E4F: fstp st(0) */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C9E51: fld qword ptr [esi + 0x30] */
    _st[0] += *(double*)ADDR(edi + 0x30); /* 0x171C9E54: fadd qword ptr [edi + 0x30] */
    RECOMP_BACKEDGE();
    goto L_171C9DA9; /* 0x171C9E57: jmp 0x171c9da9 */
L_171C9E5C:
    _st[0] += *(double*)ADDR(ebp + (-0x8)); /* 0x171C9E5C: fadd qword ptr [ebp - 8] */
    _st[0] = *(double*)ADDR(ebp + (-0x8)) / _st[0]; /* 0x171C9E5F: fdivr qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x171C9E62: fld qword ptr [edi + 0x30] */
L_171C9E65:
    _st[0] -= *(double*)ADDR(esi + 0x30); /* 0x171C9E65: fsub qword ptr [esi + 0x30] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171C9E68: fmulp st(1) */
    _st[0] += *(double*)ADDR(esi + 0x30); /* 0x171C9E6A: fadd qword ptr [esi + 0x30] */
    RECOMP_BACKEDGE();
    goto L_171C9DAF; /* 0x171C9E6D: jmp 0x171c9daf */
L_171C9E72:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C9E72: fld qword ptr [ebp - 8] */
    _st[0] += _st[1]; /* 0x171C9E75: fadd st(1) */
    _st[0] = _st[1] / _st[0]; /* 0x171C9E77: fdivr st(1) */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C9E79: fld qword ptr [esi + 0x30] */
    _st[0] -= *(double*)ADDR(edi + 0x30); /* 0x171C9E7C: fsub qword ptr [edi + 0x30] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171C9E7F: fmulp st(1) */
    _st[0] += *(double*)ADDR(edi + 0x30); /* 0x171C9E81: fadd qword ptr [edi + 0x30] */
L_171C9E84:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171C9E84: fstp st(1) */
L_171C9E86:
    eax = MEM32(ebp + 0x18); /* 0x171C9E86: mov eax, dword ptr [ebp + 0x18] */
    edi = POP32_VAL(esp); /* 0x171C9E89: pop edi */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x30) = _v; } /* 0x171C9E8A: fstp qword ptr [eax + 0x30] */
    esi = POP32_VAL(esp); /* 0x171C9E8D: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C9E8E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C9E8F: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C9E90: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C9E98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C9E98u);

L_171C9E98:
    edi = edi; /* 0x171C9E98: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C9E9A: push ebp */
    ebp = esp; /* 0x171C9E9B: mov ebp, esp */
    PUSH32(esp, 0x14u); /* 0x171C9E9D: push 0x14 */
    RECOMP_CALL(sub_1721B254); /* 0x171C9E9F: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171C9EA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171C9EA6: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C9EBE; /* 0x171C9EA7: je 0x171c9ebe */
L_171C9EA9:
    ecx = MEM32(ebp + 0x8); /* 0x171C9EA9: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x171C9EAC: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0xC) = ecx; /* 0x171C9EAF: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171C9EB2: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x4) = eax; /* 0x171C9EB5: mov dword ptr [eax + 4], eax */
    MEM32(eax + 0x8) = eax; /* 0x171C9EB8: mov dword ptr [eax + 8], eax */
    MEM32(eax + 0x10) = ecx; /* 0x171C9EBB: mov dword ptr [eax + 0x10], ecx */
L_171C9EBE:
    ebp = POP32_VAL(esp); /* 0x171C9EBE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C9EBF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C9EC7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C9EC7u);

L_171C9EC7:
    edi = edi; /* 0x171C9EC7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C9EC9: push ebp */
    ebp = esp; /* 0x171C9ECA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C9ECC: push esi */
    PUSH32(esp, edi); /* 0x171C9ECD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171C9ECE: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0x4); /* 0x171C9ED1: mov esi, dword ptr [edi + 4] */
    goto L_171C9EE0; /* 0x171C9ED4: jmp 0x171c9ee0 */
L_171C9ED6:
    PUSH32(esp, esi); /* 0x171C9ED6: push esi */
    RECOMP_CALL(sub_1721B224); /* 0x171C9ED7: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x4); /* 0x171C9EDC: mov esi, dword ptr [esi + 4] */
    ecx = POP32_VAL(esp); /* 0x171C9EDF: pop ecx */
L_171C9EE0:
    /* cmp esi, edi */ /* 0x171C9EE0: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C9ED6; /* 0x171C9EE2: jne 0x171c9ed6 */
L_171C9EE4:
    PUSH32(esp, edi); /* 0x171C9EE4: push edi */
    RECOMP_CALL(sub_1721B224); /* 0x171C9EE5: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171C9EEA: pop ecx */
    edi = POP32_VAL(esp); /* 0x171C9EEB: pop edi */
    esi = POP32_VAL(esp); /* 0x171C9EEC: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C9EED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C9EEE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C9EF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C9EF6u);

L_171C9EF6:
    edi = edi; /* 0x171C9EF6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C9EF8: push ebp */
    ebp = esp; /* 0x171C9EF9: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171C9EFB: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x171C9EFC: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x171C9EFF: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171C9F00: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171C9F03: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171C9F04: mov edi, dword ptr [ebp + 8] */
L_171C9F07:
    esi = MEM32(esi + 0x8); /* 0x171C9F07: mov esi, dword ptr [esi + 8] */
    eax = MEM32(esi); /* 0x171C9F0A: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x171C9F0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C9F1C; /* 0x171C9F0E: je 0x171c9f1c */
L_171C9F10:
    PUSH32(esp, ebx); /* 0x171C9F10: push ebx */
    PUSH32(esp, eax); /* 0x171C9F11: push eax */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x171C9F12: push dword ptr [edi + 0xc] */
    RECOMP_ICALL(MEM32(edi + 0x10)); /* 0x171C9F15: call dword ptr [edi + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171C9F18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C9F07; /* 0x171C9F1A: je 0x171c9f07 */
L_171C9F1C:
    PUSH32(esp, 0xCu); /* 0x171C9F1C: push 0xc */
    RECOMP_CALL(sub_1721B254); /* 0x171C9F1E: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171C9F23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171C9F25: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C9F3C; /* 0x171C9F26: je 0x171c9f3c */
L_171C9F28:
    MEM32(eax) = ebx; /* 0x171C9F28: mov dword ptr [eax], ebx */
    ecx = MEM32(esi + 0x4); /* 0x171C9F2A: mov ecx, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x171C9F2D: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(esi + 0x4); /* 0x171C9F30: mov ecx, dword ptr [esi + 4] */
    MEM32(ecx + 0x8) = eax; /* 0x171C9F33: mov dword ptr [ecx + 8], eax */
    MEM32(eax + 0x8) = esi; /* 0x171C9F36: mov dword ptr [eax + 8], esi */
    MEM32(esi + 0x4) = eax; /* 0x171C9F39: mov dword ptr [esi + 4], eax */
L_171C9F3C:
    edi = POP32_VAL(esp); /* 0x171C9F3C: pop edi */
    esi = POP32_VAL(esp); /* 0x171C9F3D: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C9F3E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C9F3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171C9F40: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171C9F48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C9F48u);

L_171C9F48:
    edi = edi; /* 0x171C9F48: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C9F4A: push ebp */
    ebp = esp; /* 0x171C9F4B: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171C9F4D: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x4); /* 0x171C9F50: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(eax + 0x8); /* 0x171C9F53: mov edx, dword ptr [eax + 8] */
    MEM32(ecx + 0x8) = edx; /* 0x171C9F56: mov dword ptr [ecx + 8], edx */
    ecx = MEM32(eax + 0x8); /* 0x171C9F59: mov ecx, dword ptr [eax + 8] */
    edx = MEM32(eax + 0x4); /* 0x171C9F5C: mov edx, dword ptr [eax + 4] */
    PUSH32(esp, eax); /* 0x171C9F5F: push eax */
    MEM32(ecx + 0x4) = edx; /* 0x171C9F60: mov dword ptr [ecx + 4], edx */
    RECOMP_CALL(sub_1721B224); /* 0x171C9F63: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171C9F68: pop ecx */
    ebp = POP32_VAL(esp); /* 0x171C9F69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C9F6A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C9F72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C9F72u);

L_171C9F72:
    edi = edi; /* 0x171C9F72: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C9F74: push ebp */
    ebp = esp; /* 0x171C9F75: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C9F77: push esi */
    PUSH32(esp, edi); /* 0x171C9F78: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171C9F79: mov edi, dword ptr [ebp + 8] */
    esi = edi; /* 0x171C9F7C: mov esi, edi */
L_171C9F7E:
    esi = MEM32(esi + 0x4); /* 0x171C9F7E: mov esi, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x171C9F81: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x171C9F83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C9F95; /* 0x171C9F85: je 0x171c9f95 */
L_171C9F87:
    PUSH32(esp, eax); /* 0x171C9F87: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171C9F88: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x171C9F8B: push dword ptr [edi + 0xc] */
    RECOMP_ICALL(MEM32(edi + 0x10)); /* 0x171C9F8E: call dword ptr [edi + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171C9F91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C9F7E; /* 0x171C9F93: je 0x171c9f7e */
L_171C9F95:
    edi = POP32_VAL(esp); /* 0x171C9F95: pop edi */
    eax = esi; /* 0x171C9F96: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171C9F98: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C9F99: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C9F9A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C9FA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C9FA2u);

L_171C9FA2:
    edi = edi; /* 0x171C9FA2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C9FA4: push ebp */
    ebp = esp; /* 0x171C9FA5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C9FA7: push esi */
    PUSH32(esp, 0x1Cu); /* 0x171C9FA8: push 0x1c */
    RECOMP_CALL(sub_1721B254); /* 0x171C9FAA: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171C9FAF: mov esi, eax */
    /* test esi, esi */ /* 0x171C9FB1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171C9FB3: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CA007; /* 0x171C9FB4: je 0x171ca007 */
L_171C9FB6:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x171C9FB6: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x84u); /* 0x171C9FBA: push 0x84 */
    MEM32(esi + 0xC) = 0x20u; /* 0x171C9FBF: mov dword ptr [esi + 0xc], 0x20 */
    RECOMP_CALL(sub_1721B254); /* 0x171C9FC6: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x171C9FCB: mov dword ptr [esi], eax */
    MEM32(esp) = 0x108u; /* 0x171C9FCD: mov dword ptr [esp], 0x108 */
    RECOMP_CALL(sub_1721B254); /* 0x171C9FD4: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171C9FD9: pop ecx */
    ecx = MEM32(esi); /* 0x171C9FDA: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x171C9FDC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x171C9FDE: mov dword ptr [esi + 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CA007; /* 0x171C9FE1: je 0x171ca007 */
L_171C9FE3:
    /* test eax, eax */ /* 0x171C9FE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CA007; /* 0x171C9FE5: je 0x171ca007 */
L_171C9FE7:
    eax = MEM32(ebp + 0x8); /* 0x171C9FE7: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0; /* 0x171C9FEA: and dword ptr [esi + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x171C9FEE: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x18) = eax; /* 0x171C9FF2: mov dword ptr [esi + 0x18], eax */
    MEM32(ecx + 0x4) = 1; /* 0x171C9FF5: mov dword ptr [ecx + 4], 1 */
    eax = MEM32(esi + 0x4); /* 0x171C9FFC: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) & 0; /* 0x171C9FFF: and dword ptr [eax + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x171CA003: mov eax, esi */
    goto L_171CA009; /* 0x171CA005: jmp 0x171ca009 */
L_171CA007:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CA007: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171CA009:
    esi = POP32_VAL(esp); /* 0x171CA009: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CA00A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CA00B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CA013(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA013u);

L_171CA013:
    edi = edi; /* 0x171CA013: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA015: push ebp */
    ebp = esp; /* 0x171CA016: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171CA018: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CA019: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171CA01C: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1721B224); /* 0x171CA01F: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x171CA024: push dword ptr [esi] */
    RECOMP_CALL(sub_1721B224); /* 0x171CA026: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171CA02B: push esi */
    RECOMP_CALL(sub_1721B224); /* 0x171CA02C: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171CA031: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x171CA034: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CA035: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CA036: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CA03E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA03Eu);

L_171CA03E:
    edi = edi; /* 0x171CA03E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA040: push ebp */
    ebp = esp; /* 0x171CA041: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171CA043: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171CA046: push ebx */
    PUSH32(esp, esi); /* 0x171CA047: push esi */
    PUSH32(esp, edi); /* 0x171CA048: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171CA049: mov edi, dword ptr [ebp + 8] */
    edx = MEM32(edi); /* 0x171CA04C: mov edx, dword ptr [edi] */
    ecx = MEM32(edi + 0x4); /* 0x171CA04E: mov ecx, dword ptr [edi + 4] */
    esi = eax; /* 0x171CA051: mov esi, eax */
    eax = MEM32(edx + esi * 4); /* 0x171CA053: mov eax, dword ptr [edx + esi*4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171CA056: mov dword ptr [ebp - 8], eax */
L_171CA059:
    edi = MEM32(edi + 0x8); /* 0x171CA059: mov edi, dword ptr [edi + 8] */
    eax = esi + esi; /* 0x171CA05C: lea eax, [esi + esi] */
    /* cmp eax, edi */ /* 0x171CA05F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171CA061: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = edi; /* 0x171CA064: mov dword ptr [ebp - 0xc], edi */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171CA0A6; /* 0x171CA067: jge 0x171ca0a6 */
L_171CA069:
    eax = edx + eax * 4; /* 0x171CA069: lea eax, [edx + eax*4] */
    edi = MEM32(eax + 0x4); /* 0x171CA06C: mov edi, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x171CA06F: mov eax, dword ptr [eax] */
    edi = MEM32(ecx + edi * 8); /* 0x171CA071: mov edi, dword ptr [ecx + edi*8] */
    ebx = MEM32(ecx + eax * 8); /* 0x171CA074: mov ebx, dword ptr [ecx + eax*8] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171CA077: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x28)); /* 0x171CA07A: fcomp qword ptr [ebx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA07D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CA07F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CA0A0; /* 0x171CA082: jnp 0x171ca0a0 */
L_171CA084:
    fp_push(*(double*)ADDR(ebx + 0x28)); /* 0x171CA084: fld qword ptr [ebx + 0x28] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171CA087: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CA08A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA08C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171CA08E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CA0A3; /* 0x171CA091: jp 0x171ca0a3 */
L_171CA093:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x171CA093: fld qword ptr [edi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x30)); /* 0x171CA096: fcomp qword ptr [ebx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA099: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CA09B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CA0A3; /* 0x171CA09E: jp 0x171ca0a3 */
L_171CA0A0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171CA0A0: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
L_171CA0A3:
    eax = MEM32(ebp + (-0x4)); /* 0x171CA0A3: mov eax, dword ptr [ebp - 4] */
L_171CA0A6:
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x171CA0A6: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(edx + eax * 4); /* 0x171CA0A9: mov ebx, dword ptr [edx + eax*4] */
    if (CMP_G(_flag_a, _flag_b)) goto L_171CA0FF; /* 0x171CA0AC: jg 0x171ca0ff */
L_171CA0AE:
    eax = MEM32(ebp + (-0x8)); /* 0x171CA0AE: mov eax, dword ptr [ebp - 8] */
    edi = MEM32(ecx + eax * 8); /* 0x171CA0B1: mov edi, dword ptr [ecx + eax*8] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171CA0B4: fld qword ptr [edi + 0x28] */
    eax = ecx + ebx * 8; /* 0x171CA0B7: lea eax, [ecx + ebx*8] */
    ebx = MEM32(eax); /* 0x171CA0BA: mov ebx, dword ptr [eax] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x28)); /* 0x171CA0BC: fcomp qword ptr [ebx + 0x28] */
    fp_pop();
    MEM32(ebp + (-0xC)) = eax; /* 0x171CA0BF: mov dword ptr [ebp - 0xc], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA0C2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CA0C4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CA0FF; /* 0x171CA0C7: jnp 0x171ca0ff */
L_171CA0C9:
    fp_push(*(double*)ADDR(ebx + 0x28)); /* 0x171CA0C9: fld qword ptr [ebx + 0x28] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171CA0CC: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CA0CF: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA0D1: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171CA0D3: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CA0E5; /* 0x171CA0D6: jp 0x171ca0e5 */
L_171CA0D8:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x171CA0D8: fld qword ptr [edi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x30)); /* 0x171CA0DB: fcomp qword ptr [ebx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA0DE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CA0E0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CA0FF; /* 0x171CA0E3: jnp 0x171ca0ff */
L_171CA0E5:
    eax = MEM32(ebp + (-0x4)); /* 0x171CA0E5: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(edx + eax * 4); /* 0x171CA0E8: mov eax, dword ptr [edx + eax*4] */
    edi = MEM32(ebp + 0x8); /* 0x171CA0EB: mov edi, dword ptr [ebp + 8] */
    MEM32(edx + esi * 4) = eax; /* 0x171CA0EE: mov dword ptr [edx + esi*4], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x171CA0F1: mov eax, dword ptr [ebp - 0xc] */
    MEM32(eax + 0x4) = esi; /* 0x171CA0F4: mov dword ptr [eax + 4], esi */
    esi = MEM32(ebp + (-0x4)); /* 0x171CA0F7: mov esi, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_171CA059; /* 0x171CA0FA: jmp 0x171ca059 */
L_171CA0FF:
    eax = MEM32(ebp + (-0x8)); /* 0x171CA0FF: mov eax, dword ptr [ebp - 8] */
    MEM32(edx + esi * 4) = eax; /* 0x171CA102: mov dword ptr [edx + esi*4], eax */
    edi = POP32_VAL(esp); /* 0x171CA105: pop edi */
    MEM32(ecx + eax * 8 + 0x4) = esi; /* 0x171CA106: mov dword ptr [ecx + eax*8 + 4], esi */
    esi = POP32_VAL(esp); /* 0x171CA10A: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CA10B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CA10C: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CA10D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CA115(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA115u);

L_171CA115:
    edi = edi; /* 0x171CA115: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA117: push ebp */
    ebp = esp; /* 0x171CA118: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171CA11A: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171CA11D: push ebx */
    ebx = MEM32(eax + 0x4); /* 0x171CA11E: mov ebx, dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x171CA121: push esi */
    esi = ecx; /* 0x171CA122: mov esi, ecx */
    ecx = MEM32(eax); /* 0x171CA124: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx + esi * 4); /* 0x171CA126: mov eax, dword ptr [ecx + esi*4] */
    edx = esi; /* 0x171CA129: mov edx, esi */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x171CA12B: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    PUSH32(esp, edi); /* 0x171CA12D: push edi */
    edi = MEM32(ecx + edx * 4); /* 0x171CA12E: mov edi, dword ptr [ecx + edx*4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x171CA131: mov dword ptr [ebp - 0xc], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171CA19B; /* 0x171CA134: je 0x171ca19b */
L_171CA136:
    eax = ebx + eax * 8; /* 0x171CA136: lea eax, [ebx + eax*8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171CA139: mov dword ptr [ebp - 8], eax */
L_171CA13C:
    eax = ebx + edi * 8; /* 0x171CA13C: lea eax, [ebx + edi*8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171CA13F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(eax); /* 0x171CA142: mov eax, dword ptr [eax] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171CA144: fld qword ptr [eax + 0x28] */
    eax = MEM32(ebp + (-0x8)); /* 0x171CA147: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax); /* 0x171CA14A: mov eax, dword ptr [eax] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x28)); /* 0x171CA14C: fcomp qword ptr [eax + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA14F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CA151: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CA198; /* 0x171CA154: jnp 0x171ca198 */
L_171CA156:
    eax = MEM32(ebp + (-0x8)); /* 0x171CA156: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax); /* 0x171CA159: mov eax, dword ptr [eax] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171CA15B: fld qword ptr [eax + 0x28] */
    eax = MEM32(ebp + (-0x4)); /* 0x171CA15E: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax); /* 0x171CA161: mov eax, dword ptr [eax] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171CA163: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CA166: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA168: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171CA16A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CA186; /* 0x171CA16D: jp 0x171ca186 */
L_171CA16F:
    eax = MEM32(ebp + (-0x4)); /* 0x171CA16F: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax); /* 0x171CA172: mov eax, dword ptr [eax] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x171CA174: fld qword ptr [eax + 0x30] */
    eax = MEM32(ebp + (-0x8)); /* 0x171CA177: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax); /* 0x171CA17A: mov eax, dword ptr [eax] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x30)); /* 0x171CA17C: fcomp qword ptr [eax + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA17F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CA181: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CA198; /* 0x171CA184: jnp 0x171ca198 */
L_171CA186:
    eax = MEM32(ebp + (-0x4)); /* 0x171CA186: mov eax, dword ptr [ebp - 4] */
    MEM32(ecx + esi * 4) = edi; /* 0x171CA189: mov dword ptr [ecx + esi*4], edi */
    MEM32(eax + 0x4) = esi; /* 0x171CA18C: mov dword ptr [eax + 4], esi */
    esi = edx; /* 0x171CA18F: mov esi, edx */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x171CA191: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    edi = MEM32(ecx + edx * 4); /* 0x171CA193: mov edi, dword ptr [ecx + edx*4] */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171CA13C; /* 0x171CA196: jne 0x171ca13c */
L_171CA198:
    eax = MEM32(ebp + (-0xC)); /* 0x171CA198: mov eax, dword ptr [ebp - 0xc] */
L_171CA19B:
    MEM32(ecx + esi * 4) = eax; /* 0x171CA19B: mov dword ptr [ecx + esi*4], eax */
    edi = POP32_VAL(esp); /* 0x171CA19E: pop edi */
    MEM32(ebx + eax * 8 + 0x4) = esi; /* 0x171CA19F: mov dword ptr [ebx + eax*8 + 4], esi */
    esi = POP32_VAL(esp); /* 0x171CA1A3: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CA1A4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CA1A5: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171CA1A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_171CA1AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA1ACu);

L_171CA1AC:
    edi = edi; /* 0x171CA1AC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA1AE: push ebp */
    ebp = esp; /* 0x171CA1AF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171CA1B1: push esi */
    PUSH32(esp, edi); /* 0x171CA1B2: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171CA1B3: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0x8); /* 0x171CA1B6: mov esi, dword ptr [edi + 8] */
    goto L_171CA1C4; /* 0x171CA1B9: jmp 0x171ca1c4 */
L_171CA1BB:
    PUSH32(esp, edi); /* 0x171CA1BB: push edi */
    eax = esi; /* 0x171CA1BC: mov eax, esi */
    RECOMP_CALL(sub_171CA03E); /* 0x171CA1BE: call 0x171ca03e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171CA1C3: dec esi */
    _flag_k = FK_DEC;
L_171CA1C4:
    /* cmp esi, 1 */ /* 0x171CA1C4: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_171CA1BB; /* 0x171CA1C7: jge 0x171ca1bb */
L_171CA1C9:
    MEM32(edi + 0x14) = 1; /* 0x171CA1C9: mov dword ptr [edi + 0x14], 1 */
    edi = POP32_VAL(esp); /* 0x171CA1D0: pop edi */
    esi = POP32_VAL(esp); /* 0x171CA1D1: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CA1D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CA1D3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CA1DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA1DBu);

L_171CA1DB:
    edi = edi; /* 0x171CA1DB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA1DD: push ebp */
    ebp = esp; /* 0x171CA1DE: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171CA1E0: push ebx */
    PUSH32(esp, esi); /* 0x171CA1E1: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CA1E2: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x171CA1E5: inc dword ptr [esi + 8] */
    _flag_k = FK_INC;
    ebx = MEM32(esi + 0x8); /* 0x171CA1E8: mov ebx, dword ptr [esi + 8] */
    eax = MEM32(esi + 0xC); /* 0x171CA1EB: mov eax, dword ptr [esi + 0xc] */
    /* cmp ebx, eax */ /* 0x171CA1EE: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171CA1F0: push edi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CA222; /* 0x171CA1F1: jle 0x171ca222 */
L_171CA1F3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x171CA1F3: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0xC) = eax; /* 0x171CA1F5: mov dword ptr [esi + 0xc], eax */
    eax = eax * 4 + 0x4; /* 0x171CA1F8: lea eax, [eax*4 + 4] */
    PUSH32(esp, eax); /* 0x171CA1FF: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x171CA200: push dword ptr [esi] */
    RECOMP_CALL(sub_1721B260); /* 0x171CA202: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x171CA207: mov dword ptr [esi], eax */
    eax = MEM32(esi + 0xC); /* 0x171CA209: mov eax, dword ptr [esi + 0xc] */
    eax = eax * 8 + 0x8; /* 0x171CA20C: lea eax, [eax*8 + 8] */
    PUSH32(esp, eax); /* 0x171CA213: push eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171CA214: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1721B260); /* 0x171CA217: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x171CA21C: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x171CA21F: mov dword ptr [esi + 4], eax */
L_171CA222:
    edi = MEM32(esi + 0x10); /* 0x171CA222: mov edi, dword ptr [esi + 0x10] */
    /* test edi, edi */ /* 0x171CA225: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CA22D; /* 0x171CA227: jne 0x171ca22d */
L_171CA229:
    edi = ebx; /* 0x171CA229: mov edi, ebx */
    goto L_171CA237; /* 0x171CA22B: jmp 0x171ca237 */
L_171CA22D:
    eax = MEM32(esi + 0x4); /* 0x171CA22D: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + edi * 8 + 0x4); /* 0x171CA230: mov eax, dword ptr [eax + edi*8 + 4] */
    MEM32(esi + 0x10) = eax; /* 0x171CA234: mov dword ptr [esi + 0x10], eax */
L_171CA237:
    eax = MEM32(esi); /* 0x171CA237: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0xC); /* 0x171CA239: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + ebx * 4) = edi; /* 0x171CA23C: mov dword ptr [eax + ebx*4], edi */
    eax = MEM32(esi + 0x4); /* 0x171CA23F: mov eax, dword ptr [esi + 4] */
    MEM32(eax + edi * 8 + 0x4) = ebx; /* 0x171CA242: mov dword ptr [eax + edi*8 + 4], ebx */
    eax = MEM32(esi + 0x4); /* 0x171CA246: mov eax, dword ptr [esi + 4] */
    MEM32(eax + edi * 8) = ecx; /* 0x171CA249: mov dword ptr [eax + edi*8], ecx */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x171CA24C: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CA25B; /* 0x171CA250: je 0x171ca25b */
L_171CA252:
    ecx = ebx; /* 0x171CA252: mov ecx, ebx */
    eax = esi; /* 0x171CA254: mov eax, esi */
    RECOMP_CALL(sub_171CA115); /* 0x171CA256: call 0x171ca115 */
    RECOMP_FLAGS_IN();
L_171CA25B:
    eax = edi; /* 0x171CA25B: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x171CA25D: pop edi */
    esi = POP32_VAL(esp); /* 0x171CA25E: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CA25F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171CA260: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CA261: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CA269(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA269u);

L_171CA269:
    edi = edi; /* 0x171CA269: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA26B: push ebp */
    ebp = esp; /* 0x171CA26C: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171CA26E: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171CA271: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x171CA273: push ebx */
    ebx = MEM32(eax + 0x4); /* 0x171CA274: mov ebx, dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x171CA277: push esi */
    PUSH32(esp, edi); /* 0x171CA278: push edi */
    edi = MEM32(ecx + 0x4); /* 0x171CA279: mov edi, dword ptr [ecx + 4] */
    edx = edi + ebx * 8; /* 0x171CA27C: lea edx, [edi + ebx*8] */
    esi = MEM32(edx); /* 0x171CA27F: mov esi, dword ptr [edx] */
    MEM32(ebp + 0x8) = esi; /* 0x171CA281: mov dword ptr [ebp + 8], esi */
    esi = MEM32(ecx + 0x8); /* 0x171CA284: mov esi, dword ptr [ecx + 8] */
    /* test esi, esi */ /* 0x171CA287: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171CA2B3; /* 0x171CA289: jle 0x171ca2b3 */
L_171CA28B:
    esi = MEM32(eax + esi * 4); /* 0x171CA28B: mov esi, dword ptr [eax + esi*4] */
    MEM32(eax + 0x4) = esi; /* 0x171CA28E: mov dword ptr [eax + 4], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CA291: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CA293: inc eax */
    _flag_k = FK_INC;
    MEM32(edi + esi * 8 + 0x4) = eax; /* 0x171CA294: mov dword ptr [edi + esi*8 + 4], eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x171CA298: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ecx + 0x10); /* 0x171CA29B: mov esi, dword ptr [ecx + 0x10] */
    MEM32(edx + 0x4) = esi; /* 0x171CA29E: mov dword ptr [edx + 4], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) - 1; /* 0x171CA2A1: dec dword ptr [ecx + 8] */
    _flag_k = FK_DEC;
    /* cmp MEM32(ecx + 0x8), 0 */ /* 0x171CA2A4: cmp dword ptr [ecx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx + 0x10) = ebx; /* 0x171CA2A8: mov dword ptr [ecx + 0x10], ebx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CA2B3; /* 0x171CA2AB: jle 0x171ca2b3 */
L_171CA2AD:
    PUSH32(esp, ecx); /* 0x171CA2AD: push ecx */
    RECOMP_CALL(sub_171CA03E); /* 0x171CA2AE: call 0x171ca03e */
    RECOMP_FLAGS_IN();
L_171CA2B3:
    eax = MEM32(ebp + 0x8); /* 0x171CA2B3: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x171CA2B6: pop edi */
    esi = POP32_VAL(esp); /* 0x171CA2B7: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CA2B8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171CA2B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CA2BA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CA2C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA2C2u);

L_171CA2C2:
    edi = edi; /* 0x171CA2C2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA2C4: push ebp */
    ebp = esp; /* 0x171CA2C5: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x171CA2C7: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171CA2CA: push ebx */
    PUSH32(esp, esi); /* 0x171CA2CB: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CA2CC: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171CA2CF: mov eax, dword ptr [esi + 4] */
    edx = MEM32(esi); /* 0x171CA2D2: mov edx, dword ptr [esi] */
    ecx = eax + ecx * 8; /* 0x171CA2D4: lea ecx, [eax + ecx*8] */
    PUSH32(esp, edi); /* 0x171CA2D7: push edi */
    edi = MEM32(esi + 0x8); /* 0x171CA2D8: mov edi, dword ptr [esi + 8] */
    edi = MEM32(edx + edi * 4); /* 0x171CA2DB: mov edi, dword ptr [edx + edi*4] */
    MEM32(ebp + 0x8) = ecx; /* 0x171CA2DE: mov dword ptr [ebp + 8], ecx */
    ecx = MEM32(ecx + 0x4); /* 0x171CA2E1: mov ecx, dword ptr [ecx + 4] */
    ebx = edx + ecx * 4; /* 0x171CA2E4: lea ebx, [edx + ecx*4] */
    MEM32(ebx) = edi; /* 0x171CA2E7: mov dword ptr [ebx], edi */
    MEM32(eax + edi * 8 + 0x4) = ecx; /* 0x171CA2E9: mov dword ptr [eax + edi*8 + 4], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) - 1; /* 0x171CA2ED: dec dword ptr [esi + 8] */
    _flag_k = FK_DEC;
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x171CA2F0: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171CA343; /* 0x171CA2F3: jg 0x171ca343 */
L_171CA2F5:
    /* cmp ecx, 1 */ /* 0x171CA2F5: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CA33B; /* 0x171CA2F8: jle 0x171ca33b */
L_171CA2FA:
    edi = ecx; /* 0x171CA2FA: mov edi, ecx */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x171CA2FC: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    edx = MEM32(edx + edi * 4); /* 0x171CA2FE: mov edx, dword ptr [edx + edi*4] */
    edx = MEM32(eax + edx * 8); /* 0x171CA301: mov edx, dword ptr [eax + edx*8] */
    edi = MEM32(ebx); /* 0x171CA304: mov edi, dword ptr [ebx] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171CA306: fld qword ptr [edx + 0x28] */
    edi = MEM32(eax + edi * 8); /* 0x171CA309: mov edi, dword ptr [eax + edi*8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x28)); /* 0x171CA30C: fcomp qword ptr [edi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA30F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CA311: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CA33B; /* 0x171CA314: jnp 0x171ca33b */
L_171CA316:
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171CA316: fld qword ptr [edi + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171CA319: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CA31C: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA31E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171CA320: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CA332; /* 0x171CA323: jp 0x171ca332 */
L_171CA325:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171CA325: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x30)); /* 0x171CA328: fcomp qword ptr [edi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA32B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CA32D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CA33B; /* 0x171CA330: jnp 0x171ca33b */
L_171CA332:
    eax = esi; /* 0x171CA332: mov eax, esi */
    RECOMP_CALL(sub_171CA115); /* 0x171CA334: call 0x171ca115 */
    RECOMP_FLAGS_IN();
    goto L_171CA343; /* 0x171CA339: jmp 0x171ca343 */
L_171CA33B:
    PUSH32(esp, esi); /* 0x171CA33B: push esi */
    eax = ecx; /* 0x171CA33C: mov eax, ecx */
    RECOMP_CALL(sub_171CA03E); /* 0x171CA33E: call 0x171ca03e */
    RECOMP_FLAGS_IN();
L_171CA343:
    eax = MEM32(ebp + 0x8); /* 0x171CA343: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x171CA346: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x10); /* 0x171CA349: mov ecx, dword ptr [esi + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x171CA34C: mov dword ptr [eax + 4], ecx */
    eax = MEM32(ebp + 0xC); /* 0x171CA34F: mov eax, dword ptr [ebp + 0xc] */
    edi = POP32_VAL(esp); /* 0x171CA352: pop edi */
    MEM32(esi + 0x10) = eax; /* 0x171CA353: mov dword ptr [esi + 0x10], eax */
    esi = POP32_VAL(esp); /* 0x171CA356: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CA357: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171CA358: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CA359: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CA361(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA361u);

L_171CA361:
    edi = edi; /* 0x171CA361: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA363: push ebp */
    ebp = esp; /* 0x171CA364: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171CA366: push esi */
    PUSH32(esp, 0x1Cu); /* 0x171CA367: push 0x1c */
    RECOMP_CALL(sub_1721B254); /* 0x171CA369: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171CA36E: mov esi, eax */
    /* test esi, esi */ /* 0x171CA370: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171CA372: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CA3A4; /* 0x171CA373: je 0x171ca3a4 */
L_171CA375:
    PUSH32(esp, edi); /* 0x171CA375: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171CA376: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171CA379: push edi */
    RECOMP_CALL(sub_171C9FA2); /* 0x171CA37A: call 0x171c9fa2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x80u); /* 0x171CA37F: push 0x80 */
    MEM32(esi) = eax; /* 0x171CA384: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_1721B254); /* 0x171CA386: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x171CA38B: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0; /* 0x171CA38F: and dword ptr [esi + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171CA393: pop ecx */
    MEM32(esi + 0x4) = eax; /* 0x171CA394: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x18) = edi; /* 0x171CA397: mov dword ptr [esi + 0x18], edi */
    MEM32(esi + 0x10) = 0x20u; /* 0x171CA39A: mov dword ptr [esi + 0x10], 0x20 */
    eax = esi; /* 0x171CA3A1: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x171CA3A3: pop edi */
L_171CA3A4:
    esi = POP32_VAL(esp); /* 0x171CA3A4: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CA3A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CA3A6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CA3AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA3AEu);

L_171CA3AE:
    edi = edi; /* 0x171CA3AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA3B0: push ebp */
    ebp = esp; /* 0x171CA3B1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171CA3B3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CA3B4: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi)); /* 0x171CA3B7: push dword ptr [esi] */
    RECOMP_CALL(sub_171CA013); /* 0x171CA3B9: call 0x171ca013 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x171CA3BE: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_1721B224); /* 0x171CA3C1: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171CA3C6: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1721B224); /* 0x171CA3C9: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171CA3CE: push esi */
    RECOMP_CALL(sub_1721B224); /* 0x171CA3CF: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171CA3D4: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x171CA3D7: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CA3D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CA3D9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CA3E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA3E1u);

L_171CA3E1:
    edi = edi; /* 0x171CA3E1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA3E3: push ebp */
    ebp = esp; /* 0x171CA3E4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1A8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1A8u; /* 0x171CA3E6: sub esp, 0x1a8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171CA3EC: push ebx */
    PUSH32(esp, edi); /* 0x171CA3ED: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171CA3EE: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0xC); /* 0x171CA3F1: mov eax, dword ptr [edi + 0xc] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171CA3F4: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171CA3F4: shl eax, 2 */
    ebx = ebp + (-0x1A8); /* 0x171CA3F7: lea ebx, [ebp - 0x1a8] */
    PUSH32(esp, eax); /* 0x171CA3FD: push eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171CA3FE: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x14)) = 0x7830F0C3u; /* 0x171CA401: mov dword ptr [ebp - 0x14], 0x7830f0c3 */
    RECOMP_CALL(sub_1721B254); /* 0x171CA408: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CA40D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171CA40F: pop ecx */
    MEM32(edi + 0x8) = eax; /* 0x171CA410: mov dword ptr [edi + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CA5F2; /* 0x171CA413: je 0x171ca5f2 */
L_171CA419:
    ecx = MEM32(edi + 0xC); /* 0x171CA419: mov ecx, dword ptr [edi + 0xc] */
    edx = eax + ecx * 4 + (-0x4); /* 0x171CA41C: lea edx, [eax + ecx*4 - 4] */
    /* cmp eax, edx */ /* 0x171CA420: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(edi + 0x4); /* 0x171CA422: mov ecx, dword ptr [edi + 4] */
    PUSH32(esp, esi); /* 0x171CA425: push esi */
    esi = eax; /* 0x171CA426: mov esi, eax */
    if (CMP_A(_flag_a, _flag_b)) goto L_171CA436; /* 0x171CA428: ja 0x171ca436 */
L_171CA42A:
    MEM32(esi) = ecx; /* 0x171CA42A: mov dword ptr [esi], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171CA42C: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171CA42F: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, edx */ /* 0x171CA432: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CA42A; /* 0x171CA434: jbe 0x171ca42a */
L_171CA436:
    MEM32(ebp + (-0x1A8)) = eax; /* 0x171CA436: mov dword ptr [ebp - 0x1a8], eax */
    MEM32(ebp + (-0x1A4)) = edx; /* 0x171CA43C: mov dword ptr [ebp - 0x1a4], edx */
    goto L_171CA447; /* 0x171CA442: jmp 0x171ca447 */
L_171CA444:
    ebx = MEM32(ebp + (-0x4)); /* 0x171CA444: mov ebx, dword ptr [ebp - 4] */
L_171CA447:
    esi = MEM32(ebx); /* 0x171CA447: mov esi, dword ptr [ebx] */
    ebx = MEM32(ebx + 0x4); /* 0x171CA449: mov ebx, dword ptr [ebx + 4] */
    eax = esi + 0x28; /* 0x171CA44C: lea eax, [esi + 0x28] */
    /* cmp ebx, eax */ /* 0x171CA44F: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ebx; /* 0x171CA451: mov dword ptr [ebp - 0x10], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CA561; /* 0x171CA454: jbe 0x171ca561 */
L_171CA45A:
    eax = MEM32(ebp + (-0x14)); /* 0x171CA45A: mov eax, dword ptr [ebp - 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5BC19F0Du); /* 0x171CA45D: imul eax, eax, 0x5bc19f0d */
    ecx = ebx; /* 0x171CA463: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x171CA465: sub ecx, esi */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CA467: sar ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 2u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CA46A: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171CA46B: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171CA46C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x171CA46E: mov dword ptr [ebp - 0x14], eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x171CA471: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(esi); /* 0x171CA473: mov ecx, dword ptr [esi] */
    eax = esi + edx * 4; /* 0x171CA475: lea eax, [esi + edx*4] */
    edi = MEM32(eax); /* 0x171CA478: mov edi, dword ptr [eax] */
    MEM32(eax) = ecx; /* 0x171CA47A: mov dword ptr [eax], ecx */
    MEM32(ebp + (-0xC)) = edi; /* 0x171CA47C: mov dword ptr [ebp - 0xc], edi */
    MEM32(esi) = edi; /* 0x171CA47F: mov dword ptr [esi], edi */
    ecx = esi + (-0x4); /* 0x171CA481: lea ecx, [esi - 4] */
    edx = ebx + 0x4; /* 0x171CA484: lea edx, [ebx + 4] */
    goto L_171CA48C; /* 0x171CA487: jmp 0x171ca48c */
L_171CA489:
    edi = MEM32(ebp + (-0xC)); /* 0x171CA489: mov edi, dword ptr [ebp - 0xc] */
L_171CA48C:
    edi = MEM32(edi); /* 0x171CA48C: mov edi, dword ptr [edi] */
L_171CA48E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171CA48E: add ecx, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x171CA491: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x171CA493: mov eax, dword ptr [eax] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171CA495: fld qword ptr [eax + 0x28] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171CA498: mov dword ptr [ebp - 8], eax */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x28)); /* 0x171CA49B: fcomp qword ptr [edi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA49E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CA4A0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CA4C8; /* 0x171CA4A3: jnp 0x171ca4c8 */
L_171CA4A5:
    eax = MEM32(ebp + (-0x8)); /* 0x171CA4A5: mov eax, dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171CA4A8: fld qword ptr [edi + 0x28] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171CA4AB: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CA4AE: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA4B0: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171CA4B2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CA48E; /* 0x171CA4B5: jp 0x171ca48e */
L_171CA4B7:
    eax = MEM32(ecx); /* 0x171CA4B7: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x171CA4B9: mov eax, dword ptr [eax] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x171CA4BB: fld qword ptr [eax + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x30)); /* 0x171CA4BE: fcomp qword ptr [edi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA4C1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CA4C3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CA489; /* 0x171CA4C6: jp 0x171ca489 */
L_171CA4C8:
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171CA4C8: fld qword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x171CA4CB: sub edx, 4 */
    _flag_k = FK_CMP;
    eax = MEM32(edx); /* 0x171CA4CE: mov eax, dword ptr [edx] */
    eax = MEM32(eax); /* 0x171CA4D0: mov eax, dword ptr [eax] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x28)); /* 0x171CA4D2: fcomp qword ptr [eax + 0x28] */
    fp_pop();
    MEM32(ebp + (-0x8)) = eax; /* 0x171CA4D5: mov dword ptr [ebp - 8], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA4D8: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CA4DA: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CA502; /* 0x171CA4DD: jnp 0x171ca502 */
L_171CA4DF:
    eax = MEM32(ebp + (-0x8)); /* 0x171CA4DF: mov eax, dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171CA4E2: fld qword ptr [eax + 0x28] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171CA4E5: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CA4E8: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA4EA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171CA4EC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CA4C8; /* 0x171CA4EF: jp 0x171ca4c8 */
L_171CA4F1:
    eax = MEM32(edx); /* 0x171CA4F1: mov eax, dword ptr [edx] */
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x171CA4F3: fld qword ptr [edi + 0x30] */
    eax = MEM32(eax); /* 0x171CA4F6: mov eax, dword ptr [eax] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x30)); /* 0x171CA4F8: fcomp qword ptr [eax + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA4FB: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CA4FD: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CA4C8; /* 0x171CA500: jp 0x171ca4c8 */
L_171CA502:
    /* cmp ecx, edx */ /* 0x171CA502: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edx); /* 0x171CA504: mov eax, dword ptr [edx] */
    edi = MEM32(ecx); /* 0x171CA506: mov edi, dword ptr [ecx] */
    MEM32(ecx) = eax; /* 0x171CA508: mov dword ptr [ecx], eax */
    MEM32(edx) = edi; /* 0x171CA50A: mov dword ptr [edx], edi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171CA489; /* 0x171CA50C: jb 0x171ca489 */
L_171CA512:
    eax = MEM32(ecx); /* 0x171CA512: mov eax, dword ptr [ecx] */
    MEM32(ecx) = edi; /* 0x171CA514: mov dword ptr [ecx], edi */
    MEM32(edx) = eax; /* 0x171CA516: mov dword ptr [edx], eax */
    eax = ebx; /* 0x171CA518: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171CA51A: sub eax, edx */
    _flag_k = FK_CMP;
    edi = ecx; /* 0x171CA51C: mov edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171CA51E: sub edi, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x171CA520: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edi = edi & 0xFFFFFFFCu; /* 0x171CA523: and edi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, eax */ /* 0x171CA526: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x4)); /* 0x171CA528: mov eax, dword ptr [ebp - 4] */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171CA542; /* 0x171CA52B: jge 0x171ca542 */
L_171CA52D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171CA52D: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x4) = ebx; /* 0x171CA530: mov dword ptr [eax + 4], ebx */
    MEM32(eax) = edx; /* 0x171CA533: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171CA535: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFCu; /* 0x171CA538: add ecx, -4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x171CA53B: mov dword ptr [ebp - 0x10], ecx */
    ebx = ecx; /* 0x171CA53E: mov ebx, ecx */
    goto L_171CA550; /* 0x171CA540: jmp 0x171ca550 */
L_171CA542:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFCu; /* 0x171CA542: add ecx, -4 */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x171CA545: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = ecx; /* 0x171CA547: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171CA54A: add eax, 8 */
    _flag_k = FK_ADD;
    esi = edx + 0x4; /* 0x171CA54D: lea esi, [edx + 4] */
L_171CA550:
    MEM32(ebp + (-0x4)) = eax; /* 0x171CA550: mov dword ptr [ebp - 4], eax */
    eax = esi + 0x28; /* 0x171CA553: lea eax, [esi + 0x28] */
    /* cmp ebx, eax */ /* 0x171CA556: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_171CA45A; /* 0x171CA558: ja 0x171ca45a */
L_171CA55E:
    edi = MEM32(ebp + 0x8); /* 0x171CA55E: mov edi, dword ptr [ebp + 8] */
L_171CA561:
    eax = esi + 0x4; /* 0x171CA561: lea eax, [esi + 4] */
    goto L_171CA5C3; /* 0x171CA564: jmp 0x171ca5c3 */
L_171CA566:
    /* cmp eax, esi */ /* 0x171CA566: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax); /* 0x171CA568: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171CA56A: mov dword ptr [ebp - 0xc], ecx */
    ecx = eax; /* 0x171CA56D: mov ecx, eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CA5BB; /* 0x171CA56F: jbe 0x171ca5bb */
L_171CA571:
    eax = MEM32(ebp + (-0xC)); /* 0x171CA571: mov eax, dword ptr [ebp - 0xc] */
    edx = MEM32(eax); /* 0x171CA574: mov edx, dword ptr [eax] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171CA576: fld qword ptr [edx + 0x28] */
    eax = ecx + (-0x4); /* 0x171CA579: lea eax, [ecx - 4] */
    ebx = MEM32(eax); /* 0x171CA57C: mov ebx, dword ptr [eax] */
    edi = MEM32(ebx); /* 0x171CA57E: mov edi, dword ptr [ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x28)); /* 0x171CA580: fcomp qword ptr [edi + 0x28] */
    fp_pop();
    MEM32(ebp + (-0x18)) = eax; /* 0x171CA583: mov dword ptr [ebp - 0x18], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA586: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CA588: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CA5B2; /* 0x171CA58B: jnp 0x171ca5b2 */
L_171CA58D:
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171CA58D: fld qword ptr [edi + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171CA590: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CA593: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA595: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171CA597: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CA5A9; /* 0x171CA59A: jp 0x171ca5a9 */
L_171CA59C:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171CA59C: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x30)); /* 0x171CA59F: fcomp qword ptr [edi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA5A2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CA5A4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CA5B2; /* 0x171CA5A7: jnp 0x171ca5b2 */
L_171CA5A9:
    MEM32(ecx) = ebx; /* 0x171CA5A9: mov dword ptr [ecx], ebx */
    ecx = MEM32(ebp + (-0x18)); /* 0x171CA5AB: mov ecx, dword ptr [ebp - 0x18] */
    /* cmp ecx, esi */ /* 0x171CA5AE: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_171CA571; /* 0x171CA5B0: ja 0x171ca571 */
L_171CA5B2:
    eax = MEM32(ebp + (-0x8)); /* 0x171CA5B2: mov eax, dword ptr [ebp - 8] */
    ebx = MEM32(ebp + (-0x10)); /* 0x171CA5B5: mov ebx, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x171CA5B8: mov edi, dword ptr [ebp + 8] */
L_171CA5BB:
    edx = MEM32(ebp + (-0xC)); /* 0x171CA5BB: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ecx) = edx; /* 0x171CA5BE: mov dword ptr [ecx], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171CA5C0: add eax, 4 */
    _flag_k = FK_ADD;
L_171CA5C3:
    /* cmp eax, ebx */ /* 0x171CA5C3: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x171CA5C5: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CA566; /* 0x171CA5C8: jbe 0x171ca566 */
L_171CA5CA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 8; /* 0x171CA5CA: sub dword ptr [ebp - 4], 8 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x1A8); /* 0x171CA5CE: lea eax, [ebp - 0x1a8] */
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x171CA5D4: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_171CA444; /* 0x171CA5D7: jae 0x171ca444 */
L_171CA5DD:
    eax = MEM32(edi + 0xC); /* 0x171CA5DD: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, MEM32(edi)); /* 0x171CA5E0: push dword ptr [edi] */
    MEM32(edi + 0x10) = eax; /* 0x171CA5E2: mov dword ptr [edi + 0x10], eax */
    MEM32(edi + 0x14) = 1; /* 0x171CA5E5: mov dword ptr [edi + 0x14], 1 */
    RECOMP_CALL(sub_171CA1AC); /* 0x171CA5EC: call 0x171ca1ac */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171CA5F1: pop esi */
L_171CA5F2:
    edi = POP32_VAL(esp); /* 0x171CA5F2: pop edi */
    ebx = POP32_VAL(esp); /* 0x171CA5F3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CA5F4: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CA5F5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CA5FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA5FDu);

L_171CA5FD:
    edi = edi; /* 0x171CA5FD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA5FF: push ebp */
    ebp = esp; /* 0x171CA600: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171CA602: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CA603: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x171CA606: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CA618; /* 0x171CA60A: je 0x171ca618 */
L_171CA60C:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171CA60C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(esi)); /* 0x171CA60F: push dword ptr [esi] */
    RECOMP_CALL(sub_171CA1DB); /* 0x171CA611: call 0x171ca1db */
    RECOMP_FLAGS_IN();
    goto L_171CA64F; /* 0x171CA616: jmp 0x171ca64f */
L_171CA618:
    ecx = MEM32(esi + 0x10); /* 0x171CA618: mov ecx, dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x171CA61B: push edi */
    edi = MEM32(esi + 0xC); /* 0x171CA61C: mov edi, dword ptr [esi + 0xc] */
    eax = edi + 0x1; /* 0x171CA61F: lea eax, [edi + 1] */
    /* cmp eax, ecx */ /* 0x171CA622: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0xC) = eax; /* 0x171CA624: mov dword ptr [esi + 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_171CA640; /* 0x171CA627: jl 0x171ca640 */
L_171CA629:
    eax = ecx + ecx; /* 0x171CA629: lea eax, [ecx + ecx] */
    MEM32(esi + 0x10) = eax; /* 0x171CA62C: mov dword ptr [esi + 0x10], eax */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171CA62F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171CA62F: shl eax, 2 */
    PUSH32(esp, eax); /* 0x171CA632: push eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171CA633: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1721B260); /* 0x171CA636: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171CA63B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171CA63C: pop ecx */
    MEM32(esi + 0x4) = eax; /* 0x171CA63D: mov dword ptr [esi + 4], eax */
L_171CA640:
    eax = MEM32(esi + 0x4); /* 0x171CA640: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(ebp + 0xC); /* 0x171CA643: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + edi * 4) = ecx; /* 0x171CA646: mov dword ptr [eax + edi*4], ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171CA649: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171CA64C: sub eax, edi */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x171CA64E: pop edi */
L_171CA64F:
    esi = POP32_VAL(esp); /* 0x171CA64F: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CA650: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CA651: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CA659(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA659u);

L_171CA659:
    edi = edi; /* 0x171CA659: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA65B: push ebp */
    ebp = esp; /* 0x171CA65C: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171CA65E: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0xC); /* 0x171CA661: mov eax, dword ptr [ecx + 0xc] */
    /* test eax, eax */ /* 0x171CA664: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CA671; /* 0x171CA666: jne 0x171ca671 */
L_171CA668:
    PUSH32(esp, MEM32(ecx)); /* 0x171CA668: push dword ptr [ecx] */
    RECOMP_CALL(sub_171CA269); /* 0x171CA66A: call 0x171ca269 */
    RECOMP_FLAGS_IN();
    goto L_171CA6D9; /* 0x171CA66F: jmp 0x171ca6d9 */
L_171CA671:
    edx = MEM32(ecx); /* 0x171CA671: mov edx, dword ptr [ecx] */
    /* cmp MEM32(edx + 0x8), 0 */ /* 0x171CA673: cmp dword ptr [edx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171CA677: push ebx */
    PUSH32(esp, esi); /* 0x171CA678: push esi */
    esi = MEM32(ecx + 0x8); /* 0x171CA679: mov esi, dword ptr [ecx + 8] */
    eax = MEM32(esi + eax * 4 + (-0x4)); /* 0x171CA67C: mov eax, dword ptr [esi + eax*4 - 4] */
    PUSH32(esp, edi); /* 0x171CA680: push edi */
    edi = MEM32(eax); /* 0x171CA681: mov edi, dword ptr [eax] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CA6C1; /* 0x171CA683: je 0x171ca6c1 */
L_171CA685:
    eax = MEM32(edx); /* 0x171CA685: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x4); /* 0x171CA687: mov eax, dword ptr [eax + 4] */
    ebx = MEM32(edx + 0x4); /* 0x171CA68A: mov ebx, dword ptr [edx + 4] */
    ebx = MEM32(ebx + eax * 8); /* 0x171CA68D: mov ebx, dword ptr [ebx + eax*8] */
    fp_push(*(double*)ADDR(ebx + 0x28)); /* 0x171CA690: fld qword ptr [ebx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x28)); /* 0x171CA693: fcomp qword ptr [edi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA696: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CA698: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CA6B9; /* 0x171CA69B: jnp 0x171ca6b9 */
L_171CA69D:
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171CA69D: fld qword ptr [edi + 0x28] */
    fp_push(*(double*)ADDR(ebx + 0x28)); /* 0x171CA6A0: fld qword ptr [ebx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CA6A3: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA6A5: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171CA6A7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CA6C1; /* 0x171CA6AA: jp 0x171ca6c1 */
L_171CA6AC:
    fp_push(*(double*)ADDR(ebx + 0x30)); /* 0x171CA6AC: fld qword ptr [ebx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x30)); /* 0x171CA6AF: fcomp qword ptr [edi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA6B2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CA6B4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CA6C1; /* 0x171CA6B7: jp 0x171ca6c1 */
L_171CA6B9:
    PUSH32(esp, edx); /* 0x171CA6B9: push edx */
    RECOMP_CALL(sub_171CA269); /* 0x171CA6BA: call 0x171ca269 */
    RECOMP_FLAGS_IN();
    goto L_171CA6D6; /* 0x171CA6BF: jmp 0x171ca6d6 */
L_171CA6C1:
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1; /* 0x171CA6C1: dec dword ptr [ecx + 0xc] */
    _flag_k = FK_DEC;
    eax = MEM32(ecx + 0xC); /* 0x171CA6C4: mov eax, dword ptr [ecx + 0xc] */
    /* test eax, eax */ /* 0x171CA6C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171CA6D4; /* 0x171CA6C9: jle 0x171ca6d4 */
L_171CA6CB:
    eax = MEM32(esi + eax * 4 + (-0x4)); /* 0x171CA6CB: mov eax, dword ptr [esi + eax*4 - 4] */
    /* cmp MEM32(eax), 0 */ /* 0x171CA6CF: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CA6C1; /* 0x171CA6D2: je 0x171ca6c1 */
L_171CA6D4:
    eax = edi; /* 0x171CA6D4: mov eax, edi */
L_171CA6D6:
    edi = POP32_VAL(esp); /* 0x171CA6D6: pop edi */
    esi = POP32_VAL(esp); /* 0x171CA6D7: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CA6D8: pop ebx */
L_171CA6D9:
    ebp = POP32_VAL(esp); /* 0x171CA6D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CA6DA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CA6E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA6E2u);

L_171CA6E2:
    edi = edi; /* 0x171CA6E2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA6E4: push ebp */
    ebp = esp; /* 0x171CA6E5: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171CA6E7: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0xC); /* 0x171CA6EA: mov ecx, dword ptr [eax + 0xc] */
    /* test ecx, ecx */ /* 0x171CA6ED: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CA700; /* 0x171CA6EF: jne 0x171ca700 */
L_171CA6F1:
    eax = MEM32(eax); /* 0x171CA6F1: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x171CA6F3: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx + 0x4); /* 0x171CA6F5: mov ecx, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x4); /* 0x171CA6F8: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + ecx * 8); /* 0x171CA6FB: mov eax, dword ptr [eax + ecx*8] */
    goto L_171CA74B; /* 0x171CA6FE: jmp 0x171ca74b */
L_171CA700:
    edx = MEM32(eax + 0x8); /* 0x171CA700: mov edx, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x171CA703: mov eax, dword ptr [eax] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x171CA705: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(edx + ecx * 4 + (-0x4)); /* 0x171CA709: mov ecx, dword ptr [edx + ecx*4 - 4] */
    ecx = MEM32(ecx); /* 0x171CA70D: mov ecx, dword ptr [ecx] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CA749; /* 0x171CA70F: je 0x171ca749 */
L_171CA711:
    edx = MEM32(eax); /* 0x171CA711: mov edx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x171CA713: mov eax, dword ptr [eax + 4] */
    edx = MEM32(edx + 0x4); /* 0x171CA716: mov edx, dword ptr [edx + 4] */
    edx = MEM32(eax + edx * 8); /* 0x171CA719: mov edx, dword ptr [eax + edx*8] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171CA71C: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x171CA71F: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA722: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CA724: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CA745; /* 0x171CA727: jnp 0x171ca745 */
L_171CA729:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171CA729: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171CA72C: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CA72F: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA731: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171CA733: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CA749; /* 0x171CA736: jp 0x171ca749 */
L_171CA738:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171CA738: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x171CA73B: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CA73E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CA740: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CA749; /* 0x171CA743: jp 0x171ca749 */
L_171CA745:
    eax = edx; /* 0x171CA745: mov eax, edx */
    goto L_171CA74B; /* 0x171CA747: jmp 0x171ca74b */
L_171CA749:
    eax = ecx; /* 0x171CA749: mov eax, ecx */
L_171CA74B:
    ebp = POP32_VAL(esp); /* 0x171CA74B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CA74C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CA754(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA754u);

L_171CA754:
    edi = edi; /* 0x171CA754: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA756: push ebp */
    ebp = esp; /* 0x171CA757: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171CA759: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171CA75C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171CA76D; /* 0x171CA75E: jl 0x171ca76d */
L_171CA760:
    PUSH32(esp, eax); /* 0x171CA760: push eax */
    eax = MEM32(ebp + 0x8); /* 0x171CA761: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax)); /* 0x171CA764: push dword ptr [eax] */
    RECOMP_CALL(sub_171CA2C2); /* 0x171CA766: call 0x171ca2c2 */
    RECOMP_FLAGS_IN();
    goto L_171CA7A0; /* 0x171CA76B: jmp 0x171ca7a0 */
L_171CA76D:
    eax = eax * 4 + 0x4; /* 0x171CA76D: lea eax, [eax*4 + 4] */
    ecx = eax; /* 0x171CA774: mov ecx, eax */
    eax = MEM32(ebp + 0x8); /* 0x171CA776: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x4); /* 0x171CA779: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x171CA77C: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x171CA77E: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x171CA781: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CA7A0; /* 0x171CA785: jle 0x171ca7a0 */
L_171CA787:
    edx = MEM32(eax + 0x8); /* 0x171CA787: mov edx, dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x171CA78A: push edi */
L_171CA78B:
    ecx = MEM32(eax + 0xC); /* 0x171CA78B: mov ecx, dword ptr [eax + 0xc] */
    edi = MEM32(edx + ecx * 4 + (-0x4)); /* 0x171CA78E: mov edi, dword ptr [edx + ecx*4 - 4] */
    /* cmp MEM32(edi), 0 */ /* 0x171CA792: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CA79F; /* 0x171CA795: jne 0x171ca79f */
L_171CA797:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171CA797: dec ecx */
    _flag_k = FK_DEC;
    /* test ecx, ecx */ /* 0x171CA798: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0xC) = ecx; /* 0x171CA79A: mov dword ptr [eax + 0xc], ecx */
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171CA78B; /* 0x171CA79D: jg 0x171ca78b */
L_171CA79F:
    edi = POP32_VAL(esp); /* 0x171CA79F: pop edi */
L_171CA7A0:
    ebp = POP32_VAL(esp); /* 0x171CA7A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CA7A1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CA7A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA7A9u);

L_171CA7A9:
    edi = edi; /* 0x171CA7A9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA7AB: push ebp */
    ebp = esp; /* 0x171CA7AC: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171CA7AE: push ebx */
    PUSH32(esp, esi); /* 0x171CA7AF: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CA7B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171CA7B2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171CA7B3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171CA7B5:
    edx = MEM32(ebp + 0x8); /* 0x171CA7B5: mov edx, dword ptr [ebp + 8] */
    edx = (uint32_t)MEM8(edx + esi + 0x11C); /* 0x171CA7B8: movzx edx, byte ptr [edx + esi + 0x11c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171CA7C0: inc esi */
    _flag_k = FK_INC;
    /* cmp edx, 0x41u */ /* 0x171CA7C1: cmp edx, 0x41 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171CA7DA; /* 0x171CA7C4: jl 0x171ca7da */
L_171CA7C6:
    /* cmp edx, 0x7Au */ /* 0x171CA7C6: cmp edx, 0x7a */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171CA7DA; /* 0x171CA7C9: jg 0x171ca7da */
L_171CA7CB:
    /* cmp edx, 0x5Au */ /* 0x171CA7CB: cmp edx, 0x5a */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x5Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CA7D5; /* 0x171CA7CE: jle 0x171ca7d5 */
L_171CA7D0:
    /* cmp edx, 0x61u */ /* 0x171CA7D0: cmp edx, 0x61 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x61u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171CA7DA; /* 0x171CA7D3: jl 0x171ca7da */
L_171CA7D5:
    MEM8(eax + ecx) = (uint8_t)(LO8(edx)); /* 0x171CA7D5: mov byte ptr [eax + ecx], dl */
    goto L_171CA802; /* 0x171CA7D8: jmp 0x171ca802 */
L_171CA7DA:
    MEM8(eax + ecx) = (uint8_t)(0x5Bu); /* 0x171CA7DA: mov byte ptr [eax + ecx], 0x5b */
    edi = edx; /* 0x171CA7DE: mov edi, edx */
    if (4u) _cf = (((edi) >> 3) & 1u); /* 0x171CA7E0: sar edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 4u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    edi = edi & 0xFu; /* 0x171CA7E3: and edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(edi + 0x17025D40)); /* 0x171CA7E6: mov bl, byte ptr [edi + 0x17025d40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CA7EC: inc eax */
    _flag_k = FK_INC;
    MEM8(eax + ecx) = (uint8_t)(LO8(ebx)); /* 0x171CA7ED: mov byte ptr [eax + ecx], bl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x171CA7F0: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(edx + 0x17025D40)); /* 0x171CA7F3: mov dl, byte ptr [edx + 0x17025d40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CA7F9: inc eax */
    _flag_k = FK_INC;
    MEM8(eax + ecx) = (uint8_t)(LO8(edx)); /* 0x171CA7FA: mov byte ptr [eax + ecx], dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CA7FD: inc eax */
    _flag_k = FK_INC;
    MEM8(eax + ecx) = (uint8_t)(0x5Du); /* 0x171CA7FE: mov byte ptr [eax + ecx], 0x5d */
L_171CA802:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CA802: inc eax */
    _flag_k = FK_INC;
    /* cmp esi, 4 */ /* 0x171CA803: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CA7B5; /* 0x171CA806: jl 0x171ca7b5 */
L_171CA808:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171CA808: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x171CA80A: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CA814; /* 0x171CA80D: jne 0x171ca814 */
L_171CA80F:
    MEM8(eax + ecx) = (uint8_t)(LO8(ebx)); /* 0x171CA80F: mov byte ptr [eax + ecx], bl */
    goto L_171CA832; /* 0x171CA812: jmp 0x171ca832 */
L_171CA814:
    MEM8(eax + ecx) = (uint8_t)(0x3Au); /* 0x171CA814: mov byte ptr [eax + ecx], 0x3a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CA818: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 0x3Fu); /* 0x171CA819: push 0x3f */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171CA81B: push dword ptr [ebp + 0xc] */
    esi = eax + ecx + 0x1; /* 0x171CA81E: lea esi, [eax + ecx + 1] */
    PUSH32(esp, esi); /* 0x171CA822: push esi */
    MEM8(eax + ecx) = (uint8_t)(0x20u); /* 0x171CA823: mov byte ptr [eax + ecx], 0x20 */
    RECOMP_CALL(sub_1721B5D8); /* 0x171CA827: call 0x1721b5d8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171CA82C: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(esi + 0x3F) = (uint8_t)(LO8(ebx)); /* 0x171CA82F: mov byte ptr [esi + 0x3f], bl */
L_171CA832:
    edi = POP32_VAL(esp); /* 0x171CA832: pop edi */
    esi = POP32_VAL(esp); /* 0x171CA833: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CA834: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171CA835: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CA836: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CA83E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA83Eu);

L_171CA83E:
    edi = edi; /* 0x171CA83E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA840: push ebp */
    ebp = esp; /* 0x171CA841: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171CA843: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x171CA846: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x48) = ecx; /* 0x171CA849: mov dword ptr [eax + 0x48], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171CA84C: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x40) = ecx; /* 0x171CA84F: mov dword ptr [eax + 0x40], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x171CA852: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x44) = ecx; /* 0x171CA855: mov dword ptr [eax + 0x44], ecx */
    ebp = POP32_VAL(esp); /* 0x171CA858: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171CA859: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171CA861(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA861u);

L_171CA861:
    edi = edi; /* 0x171CA861: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA863: push ebp */
    ebp = esp; /* 0x171CA864: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171CA866: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CA867: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x171CA86A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CA87B; /* 0x171CA86C: je 0x171ca87b */
L_171CA86E:
    eax = MEM32(esi + 0x40); /* 0x171CA86E: mov eax, dword ptr [esi + 0x40] */
    /* test eax, eax */ /* 0x171CA871: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CA87B; /* 0x171CA873: je 0x171ca87b */
L_171CA875:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171CA875: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171CA878: push esi */
    RECOMP_ICALL(eax); /* 0x171CA879: call eax */
    RECOMP_FLAGS_IN();
L_171CA87B:
    PUSH32(esp, 1); /* 0x171CA87B: push 1 */
    PUSH32(esp, esi); /* 0x171CA87D: push esi */
    RECOMP_CALL(sub_1721B2CC); /* 0x171CA87E: call 0x1721b2cc */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x171CA883u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171CA889(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA889u);

L_171CA889:
    edi = edi; /* 0x171CA889: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA88B: push ebp */
    ebp = esp; /* 0x171CA88C: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171CA88E: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171CA891: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(eax), 0x23u */ /* 0x171CA893: cmp byte ptr [eax], 0x23 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x23u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CA8A5; /* 0x171CA896: jne 0x171ca8a5 */
L_171CA898:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171CA898: inc ecx */
    _flag_k = FK_INC;
L_171CA899:
    /* cmp MEM8(ecx + eax), 0x20u */ /* 0x171CA899: cmp byte ptr [ecx + eax], 0x20 */
    _flag_a = (uint32_t)(MEM8(ecx + eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CA8A5; /* 0x171CA89D: je 0x171ca8a5 */
L_171CA89F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171CA89F: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 0xFu */ /* 0x171CA8A0: cmp ecx, 0xf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CA899; /* 0x171CA8A3: jl 0x171ca899 */
L_171CA8A5:
    PUSH32(esp, esi); /* 0x171CA8A5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CA8A6: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x171CA8A9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CA8BA; /* 0x171CA8AB: je 0x171ca8ba */
L_171CA8AD:
    edx = MEM32(esi + 0x44); /* 0x171CA8AD: mov edx, dword ptr [esi + 0x44] */
    /* test edx, edx */ /* 0x171CA8B0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CA8BA; /* 0x171CA8B2: je 0x171ca8ba */
L_171CA8B4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171CA8B4: add ecx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x171CA8B6: push ecx */
    PUSH32(esp, esi); /* 0x171CA8B7: push esi */
    RECOMP_ICALL(edx); /* 0x171CA8B8: call edx */
    RECOMP_FLAGS_IN();
L_171CA8BA:
    esi = POP32_VAL(esp); /* 0x171CA8BA: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CA8BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CA8BC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CA8C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA8C4u);

L_171CA8C4:
    edi = edi; /* 0x171CA8C4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA8C6: push ebp */
    ebp = esp; /* 0x171CA8C7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x171CA8C9: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171CA8CC: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, esi); /* 0x171CA8D1: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CA8D2: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171CA8D5: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x171CA8D8: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171CA8DB: push eax */
    PUSH32(esp, esi); /* 0x171CA8DC: push esi */
    ecx = ebp + (-0x58); /* 0x171CA8DD: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_171CA7A9); /* 0x171CA8E0: call 0x171ca7a9 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x58); /* 0x171CA8E5: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x171CA8E8: push eax */
    PUSH32(esp, esi); /* 0x171CA8E9: push esi */
    RECOMP_CALL(sub_171CA861); /* 0x171CA8EA: call 0x171ca861 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x171CA8EFu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171CA8F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA8F5u);

L_171CA8F5:
    edi = edi; /* 0x171CA8F5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA8F7: push ebp */
    ebp = esp; /* 0x171CA8F8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x171CA8FA: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171CA8FD: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171CA902: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x171CA905: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171CA908: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CA909: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x171CA90C: push eax */
    PUSH32(esp, esi); /* 0x171CA90D: push esi */
    ecx = ebp + (-0x58); /* 0x171CA90E: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_171CA7A9); /* 0x171CA911: call 0x171ca7a9 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x58); /* 0x171CA916: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x171CA919: push eax */
    PUSH32(esp, esi); /* 0x171CA91A: push esi */
    RECOMP_CALL(sub_171CA889); /* 0x171CA91B: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x171CA920: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x171CA923: pop esi */
    RECOMP_CALL(sub_1721B76C); /* 0x171CA924: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CA929: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CA92A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CA932(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA932u);

L_171CA932:
    edi = edi; /* 0x171CA932: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA934: push ebp */
    ebp = esp; /* 0x171CA935: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171CA937: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x171CA93A: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(0x1723C894); /* 0x171CA93D: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, 8); /* 0x171CA942: push 8 */
    edx = POP32_VAL(esp); /* 0x171CA944: pop edx */
    /* cmp ecx, edx */ /* 0x171CA945: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171CA947: mov dword ptr [ebp - 4], eax */
    MEM8(ebp + (-0xC)) = (uint8_t)(0x89u); /* 0x171CA94A: mov byte ptr [ebp - 0xc], 0x89 */
    MEM8(ebp + (-0xB)) = (uint8_t)(0x50u); /* 0x171CA94E: mov byte ptr [ebp - 0xb], 0x50 */
    MEM8(ebp + (-0xA)) = (uint8_t)(0x4Eu); /* 0x171CA952: mov byte ptr [ebp - 0xa], 0x4e */
    MEM8(ebp + (-0x9)) = (uint8_t)(0x47u); /* 0x171CA956: mov byte ptr [ebp - 9], 0x47 */
    MEM8(ebp + (-0x8)) = (uint8_t)(0xDu); /* 0x171CA95A: mov byte ptr [ebp - 8], 0xd */
    MEM8(ebp + (-0x7)) = (uint8_t)(0xAu); /* 0x171CA95E: mov byte ptr [ebp - 7], 0xa */
    MEM8(ebp + (-0x6)) = (uint8_t)(0x1Au); /* 0x171CA962: mov byte ptr [ebp - 6], 0x1a */
    MEM8(ebp + (-0x5)) = (uint8_t)(0xAu); /* 0x171CA966: mov byte ptr [ebp - 5], 0xa */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CA970; /* 0x171CA96A: jbe 0x171ca970 */
L_171CA96C:
    ecx = edx; /* 0x171CA96C: mov ecx, edx */
    goto L_171CA975; /* 0x171CA96E: jmp 0x171ca975 */
L_171CA970:
    /* cmp ecx, 1 */ /* 0x171CA970: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171CA97D; /* 0x171CA973: jb 0x171ca97d */
L_171CA975:
    eax = MEM32(ebp + 0xC); /* 0x171CA975: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 7 */ /* 0x171CA978: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CA981; /* 0x171CA97B: jbe 0x171ca981 */
L_171CA97D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CA97D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171CA9A5; /* 0x171CA97F: jmp 0x171ca9a5 */
L_171CA981:
    PUSH32(esp, esi); /* 0x171CA981: push esi */
    esi = eax + ecx; /* 0x171CA982: lea esi, [eax + ecx] */
    /* cmp esi, edx */ /* 0x171CA985: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171CA987: push edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CA98E; /* 0x171CA988: jbe 0x171ca98e */
L_171CA98A:
    ecx = edx; /* 0x171CA98A: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171CA98C: sub ecx, eax */
    _flag_k = FK_CMP;
L_171CA98E:
    edx = MEM32(ebp + 0x8); /* 0x171CA98E: mov edx, dword ptr [ebp + 8] */
    edi = ebp + eax + (-0xC); /* 0x171CA991: lea edi, [ebp + eax - 0xc] */
    esi = edx + eax; /* 0x171CA995: lea esi, [edx + eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CA998: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171CA99A: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    edi = POP32_VAL(esp); /* 0x171CA99C: pop edi */
    esi = POP32_VAL(esp); /* 0x171CA99D: pop esi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171CA9A5; /* 0x171CA99E: je 0x171ca9a5 */
L_171CA9A0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171CA9A0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171CA9A2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_171CA9A5:
    ecx = MEM32(ebp + (-0x4)); /* 0x171CA9A5: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B76C); /* 0x171CA9A8: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CA9AD: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171CA9AE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171CA9B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CA9B6u);

L_171CA9B6:
    edi = edi; /* 0x171CA9B6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CA9B8: push ebp */
    ebp = esp; /* 0x171CA9B9: mov ebp, esp */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171CA9BB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171CA9BE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x10); /* 0x171CA9C0: div dword ptr [ebp + 0x10] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebp + 0xC); /* 0x171CA9C3: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171CA9C6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CA9C7: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171CA9CA: push edi */
    edi = MEM32(esi + 0x6C); /* 0x171CA9CB: mov edi, dword ptr [esi + 0x6c] */
    /* cmp ecx, eax */ /* 0x171CA9CE: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CA9E1; /* 0x171CA9D0: jbe 0x171ca9e1 */
L_171CA9D2:
    PUSH32(esp, 0x17025D50u); /* 0x171CA9D2: push 0x17025d50 */
    PUSH32(esp, esi); /* 0x171CA9D7: push esi */
    RECOMP_CALL(sub_171CA889); /* 0x171CA9D8: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CA9DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171CAA36; /* 0x171CA9DF: jmp 0x171caa36 */
L_171CA9E1:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x10)); /* 0x171CA9E1: imul ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x171CA9E5: push ebx */
    ebx = ecx; /* 0x171CA9E6: mov ebx, ecx */
    eax = edi; /* 0x171CA9E8: mov eax, edi */
    PUSH32(esp, ebx); /* 0x171CA9EA: push ebx */
    _flag_a = (uint32_t)((eax | 0x00100000u)); _flag_b = (uint32_t)((eax | 0x00100000u));
    eax = eax | 0x00100000u; /* 0x171CA9EB: or eax, 0x100000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171CA9F0: push esi */
    MEM32(esi + 0x6C) = eax; /* 0x171CA9F1: mov dword ptr [esi + 0x6c], eax */
    RECOMP_CALL(sub_171D1E85); /* 0x171CA9F4: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x171CA9F9: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CA9FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x171CA9FD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x6C) = edi; /* 0x171CA9FF: mov dword ptr [esi + 0x6c], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CAA35; /* 0x171CAA02: je 0x171caa35 */
L_171CAA04:
    /* cmp ebx, 0x8000u */ /* 0x171CAA04: cmp ebx, 0x8000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = edx; /* 0x171CAA0A: mov edi, edx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CAA23; /* 0x171CAA0C: jbe 0x171caa23 */
L_171CAA0E:
    ecx = 0x2000u; /* 0x171CAA0E: mov ecx, 0x2000 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171CAA13: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = ebx + (-0x8000); /* 0x171CAA15: lea ecx, [ebx - 0x8000] */
    edi = edx + 0x8000; /* 0x171CAA1B: lea edi, [edx + 0x8000] */
    goto L_171CAA25; /* 0x171CAA21: jmp 0x171caa25 */
L_171CAA23:
    ecx = ebx; /* 0x171CAA23: mov ecx, ebx */
L_171CAA25:
    esi = ecx; /* 0x171CAA25: mov esi, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CAA27: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171CAA27: shr ecx, 2 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171CAA2A: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = esi; /* 0x171CAA2C: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171CAA2E: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x171CAA31: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = edx; /* 0x171CAA33: mov eax, edx */
L_171CAA35:
    ebx = POP32_VAL(esp); /* 0x171CAA35: pop ebx */
L_171CAA36:
    edi = POP32_VAL(esp); /* 0x171CAA36: pop edi */
    esi = POP32_VAL(esp); /* 0x171CAA37: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CAA38: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171CAA39: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171CAA41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CAA41u);

L_171CAA41:
    edi = edi; /* 0x171CAA41: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CAA43: push ebp */
    ebp = esp; /* 0x171CAA44: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x171CAA46: pop ebp */
    goto L_171D1ECA; /* 0x171CAA47: jmp 0x171d1eca */
L_171D1ECA:
    edi = edi; /* 0x171D1ECA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171D1ECC: push ebp */
    ebp = esp; /* 0x171D1ECD: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171D1ECF: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171D1EE4; /* 0x171D1ED3: je 0x171d1ee4 */
L_171D1ED5:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171D1ED5: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171D1EE4; /* 0x171D1ED9: je 0x171d1ee4 */
L_171D1EDB:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171D1EDB: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171D1EDE: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171D1EE3: pop ecx */
L_171D1EE4:
    ebp = POP32_VAL(esp); /* 0x171D1EE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171D1EE5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CAA51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CAA51u);

L_171CAA51:
    edi = edi; /* 0x171CAA51: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CAA53: push ebp */
    ebp = esp; /* 0x171CAA54: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CAA56: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x171CAA58: push eax */
    PUSH32(esp, eax); /* 0x171CAA59: push eax */
    PUSH32(esp, eax); /* 0x171CAA5A: push eax */
    RECOMP_CALL(sub_1720586D); /* 0x171CAA5B: call 0x1720586d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x171CAA60: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x110) = eax; /* 0x171CAA63: mov dword ptr [ecx + 0x110], eax */
    ebp = POP32_VAL(esp); /* 0x171CAA69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CAA6A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CAA72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CAA72u);

L_171CAA72:
    edi = edi; /* 0x171CAA72: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CAA74: push ebp */
    ebp = esp; /* 0x171CAA75: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171CAA77: mov eax, dword ptr [ebp + 8] */
    /* test MEM8(eax + 0x11C), 0x20u */ /* 0x171CAA7A: test byte ptr [eax + 0x11c], 0x20 */
    _flag_a = (uint32_t)(MEM8(eax + 0x11C)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CAA93; /* 0x171CAA81: je 0x171caa93 */
L_171CAA83:
    edx = MEM32(eax + 0x6C); /* 0x171CAA83: mov edx, dword ptr [eax + 0x6c] */
    ecx = 0x300u; /* 0x171CAA86: mov ecx, 0x300 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x171CAA8B: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ecx */ /* 0x171CAA8D: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CAA99; /* 0x171CAA8F: jne 0x171caa99 */
L_171CAA91:
    goto L_171CAAB0; /* 0x171CAA91: jmp 0x171caab0 */
L_171CAA93:
    /* test MEM8(eax + 0x6D), 8 */ /* 0x171CAA93: test byte ptr [eax + 0x6d], 8 */
    _flag_a = (uint32_t)(MEM8(eax + 0x6D)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CAAB0; /* 0x171CAA97: jne 0x171caab0 */
L_171CAA99:
    PUSH32(esp, esi); /* 0x171CAA99: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171CAA9A: push dword ptr [ebp + 0x10] */
    esi = eax + 0x110; /* 0x171CAA9D: lea esi, [eax + 0x110] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171CAAA3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(esi)); /* 0x171CAAA6: push dword ptr [esi] */
    RECOMP_CALL(sub_1720586D); /* 0x171CAAA8: call 0x1720586d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x171CAAAD: mov dword ptr [esi], eax */
    esi = POP32_VAL(esp); /* 0x171CAAAF: pop esi */
L_171CAAB0:
    ebp = POP32_VAL(esp); /* 0x171CAAB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171CAAB1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171CAAB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CAAB9u);

L_171CAAB9:
    edi = edi; /* 0x171CAAB9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CAABB: push ebp */
    ebp = esp; /* 0x171CAABC: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0x120u */ /* 0x171CAABE: cmp dword ptr [ebp + 0xc], 0x120 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171CAAC5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CAAC6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171CAAC9: push edi */
    edi = MEM32(esi); /* 0x171CAACA: mov edi, dword ptr [esi] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171CAADF; /* 0x171CAACC: jae 0x171caadf */
L_171CAACE:
    PUSH32(esp, edi); /* 0x171CAACE: push edi */
    RECOMP_CALL(sub_171D1E68); /* 0x171CAACF: call 0x171d1e68 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x171CAAD4: push 2 */
    RECOMP_CALL(sub_171D1E19); /* 0x171CAAD6: call 0x171d1e19 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171CAADB: mov edi, eax */
    MEM32(esi) = edi; /* 0x171CAADD: mov dword ptr [esi], edi */
L_171CAADF:
    PUSH32(esp, 0x48u); /* 0x171CAADF: push 0x48 */
    ecx = POP32_VAL(esp); /* 0x171CAAE1: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CAAE2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171CAAE4: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = POP32_VAL(esp); /* 0x171CAAE6: pop edi */
    esi = POP32_VAL(esp); /* 0x171CAAE7: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CAAE8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CAAE9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CAAF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CAAF1u);

L_171CAAF1:
    edi = edi; /* 0x171CAAF1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CAAF3: push ebp */
    ebp = esp; /* 0x171CAAF4: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171CAAF6: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171CAAF7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x171CAAF9: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CAE2B; /* 0x171CAAFC: je 0x171cae2b */
L_171CAB02:
    PUSH32(esp, esi); /* 0x171CAB02: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171CAB03: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, ebx */ /* 0x171CAB06: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CAE2A; /* 0x171CAB08: je 0x171cae2a */
L_171CAB0E:
    eax = MEM32(esi + 0xB8); /* 0x171CAB0E: mov eax, dword ptr [esi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    eax = eax & MEM32(ebp + 0x10); /* 0x171CAB14: and eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171CAB17: push edi */
    edi = 0x4000u; /* 0x171CAB18: mov edi, 0x4000 */
    /* test edi, eax */ /* 0x171CAB1D: test edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CAB7F; /* 0x171CAB1F: je 0x171cab7f */
L_171CAB21:
    /* cmp MEM32(ebp + 0x14), 0xFFFFFFFFu */ /* 0x171CAB21: cmp dword ptr [ebp + 0x14], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CAB4E; /* 0x171CAB25: je 0x171cab4e */
L_171CAB27:
    eax = MEM32(esi + 0x38); /* 0x171CAB27: mov eax, dword ptr [esi + 0x38] */
    /* cmp eax, ebx */ /* 0x171CAB2A: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CAB7F; /* 0x171CAB2C: je 0x171cab7f */
L_171CAB2E:
    edi = MEM32(ebp + 0x14); /* 0x171CAB2E: mov edi, dword ptr [ebp + 0x14] */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x171CAB31: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x171CAB31: shl edi, 4 */
    eax = MEM32(edi + eax + 0x4); /* 0x171CAB34: mov eax, dword ptr [edi + eax + 4] */
    /* cmp eax, ebx */ /* 0x171CAB38: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CAB7F; /* 0x171CAB3A: je 0x171cab7f */
L_171CAB3C:
    PUSH32(esp, eax); /* 0x171CAB3C: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CAB3D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CAB40: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x38); /* 0x171CAB45: mov eax, dword ptr [esi + 0x38] */
    MEM32(edi + eax + 0x4) = ebx; /* 0x171CAB48: mov dword ptr [edi + eax + 4], ebx */
    goto L_171CAB7F; /* 0x171CAB4C: jmp 0x171cab7f */
L_171CAB4E:
    /* cmp MEM32(esi + 0x30), ebx */ /* 0x171CAB4E: cmp dword ptr [esi + 0x30], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ebx; /* 0x171CAB51: mov dword ptr [ebp + 0xc], ebx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CAB6E; /* 0x171CAB54: jle 0x171cab6e */
L_171CAB56:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171CAB56: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171CAB59: push edi */
    PUSH32(esp, esi); /* 0x171CAB5A: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CAB5B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CAAF1); /* 0x171CAB5E: call 0x171caaf1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x171CAB63: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0xC); /* 0x171CAB66: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(esi + 0x30) */ /* 0x171CAB69: cmp eax, dword ptr [esi + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CAB56; /* 0x171CAB6C: jl 0x171cab56 */
L_171CAB6E:
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x171CAB6E: push dword ptr [esi + 0x38] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CAB71: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CAB74: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x38) = ebx; /* 0x171CAB79: mov dword ptr [esi + 0x38], ebx */
    MEM32(esi + 0x30) = ebx; /* 0x171CAB7C: mov dword ptr [esi + 0x30], ebx */
L_171CAB7F:
    eax = MEM32(esi + 0xB8); /* 0x171CAB7F: mov eax, dword ptr [esi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    eax = eax & MEM32(ebp + 0x10); /* 0x171CAB85: and eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test HI8(eax), 0x20u */ /* 0x171CAB88: test ah, 0x20 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CAB9F; /* 0x171CAB8B: je 0x171cab9f */
L_171CAB8D:
    PUSH32(esp, MEM32(esi + 0x4C)); /* 0x171CAB8D: push dword ptr [esi + 0x4c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CAB90: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CAB93: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0xFFFFFFEFu; /* 0x171CAB98: and dword ptr [esi + 8], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4C) = ebx; /* 0x171CAB9C: mov dword ptr [esi + 0x4c], ebx */
L_171CAB9F:
    eax = MEM32(esi + 0xB8); /* 0x171CAB9F: mov eax, dword ptr [esi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    eax = eax & MEM32(ebp + 0x10); /* 0x171CABA5: and eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test HI8(eax), 1 */ /* 0x171CABA8: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CABB1; /* 0x171CABAB: je 0x171cabb1 */
L_171CABAD:
    _flag_a = (uint32_t)(MEM8(esi + 0x9)) << 24; _flag_b = (uint32_t)(0xBFu) << 24;
    MEM8(esi + 0x9) = (uint8_t)(MEM8(esi + 0x9) & 0xBFu); /* 0x171CABAD: and byte ptr [esi + 9], 0xbf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171CABB1:
    /* test LO8(eax), LO8(eax) */ /* 0x171CABB1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171CAC2B; /* 0x171CABB3: jns 0x171cac2b */
L_171CABB5:
    edi = esi + 0xA0; /* 0x171CABB5: lea edi, [esi + 0xa0] */
    PUSH32(esp, MEM32(edi)); /* 0x171CABBB: push dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CABBD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CABC0: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xAC)); /* 0x171CABC5: push dword ptr [esi + 0xac] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CABCB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CABCE: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0xB0), ebx */ /* 0x171CABD3: cmp dword ptr [esi + 0xb0], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xB0)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi) = ebx; /* 0x171CABD9: mov dword ptr [edi], ebx */
    MEM32(esi + 0xAC) = ebx; /* 0x171CABDB: mov dword ptr [esi + 0xac], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CAC27; /* 0x171CABE1: je 0x171cac27 */
L_171CABE3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171CABE3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(esi + 0xB5), LO8(ebx) */ /* 0x171CABE5: cmp byte ptr [esi + 0xb5], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0xB5)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CAC13; /* 0x171CABEB: jbe 0x171cac13 */
L_171CABED:
    eax = MEM32(esi + 0xB0); /* 0x171CABED: mov eax, dword ptr [esi + 0xb0] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x171CABF3: push dword ptr [eax + edi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CABF6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CABF9: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xB0); /* 0x171CABFE: mov eax, dword ptr [esi + 0xb0] */
    MEM32(eax + edi * 4) = ebx; /* 0x171CAC04: mov dword ptr [eax + edi*4], ebx */
    eax = (uint32_t)MEM8(esi + 0xB5); /* 0x171CAC07: movzx eax, byte ptr [esi + 0xb5] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171CAC0E: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, eax */ /* 0x171CAC0F: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CABED; /* 0x171CAC11: jl 0x171cabed */
L_171CAC13:
    PUSH32(esp, MEM32(esi + 0xB0)); /* 0x171CAC13: push dword ptr [esi + 0xb0] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CAC19: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CAC1C: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xB0) = ebx; /* 0x171CAC21: mov dword ptr [esi + 0xb0], ebx */
L_171CAC27:
    _flag_a = (uint32_t)(MEM8(esi + 0x9)) << 24; _flag_b = (uint32_t)(0xFBu) << 24;
    MEM8(esi + 0x9) = (uint8_t)(MEM8(esi + 0x9) & 0xFBu); /* 0x171CAC27: and byte ptr [esi + 9], 0xfb */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171CAC2B:
    eax = MEM32(esi + 0xB8); /* 0x171CAC2B: mov eax, dword ptr [esi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    eax = eax & MEM32(ebp + 0x10); /* 0x171CAC31: and eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 0x10u */ /* 0x171CAC34: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CAC62; /* 0x171CAC36: je 0x171cac62 */
L_171CAC38:
    edi = esi + 0xC4; /* 0x171CAC38: lea edi, [esi + 0xc4] */
    PUSH32(esp, MEM32(edi)); /* 0x171CAC3E: push dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CAC40: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CAC43: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC8)); /* 0x171CAC48: push dword ptr [esi + 0xc8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CAC4E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CAC51: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(esi + 0x9)) << 24; _flag_b = (uint32_t)(0xEFu) << 24;
    MEM8(esi + 0x9) = (uint8_t)(MEM8(esi + 0x9) & 0xEFu); /* 0x171CAC56: and byte ptr [esi + 9], 0xef */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(edi) = ebx; /* 0x171CAC5A: mov dword ptr [edi], ebx */
    MEM32(esi + 0xC8) = ebx; /* 0x171CAC5C: mov dword ptr [esi + 0xc8], ebx */
L_171CAC62:
    eax = MEM32(esi + 0xB8); /* 0x171CAC62: mov eax, dword ptr [esi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    eax = eax & MEM32(ebp + 0x10); /* 0x171CAC68: and eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 0x20u */ /* 0x171CAC6B: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CACFB; /* 0x171CAC6D: je 0x171cacfb */
L_171CAC73:
    edi = MEM32(ebp + 0x14); /* 0x171CAC73: mov edi, dword ptr [ebp + 0x14] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x171CAC76: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CACBA; /* 0x171CAC79: je 0x171cacba */
L_171CAC7B:
    eax = MEM32(esi + 0xD4); /* 0x171CAC7B: mov eax, dword ptr [esi + 0xd4] */
    /* cmp eax, ebx */ /* 0x171CAC81: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CACFB; /* 0x171CAC83: je 0x171cacfb */
L_171CAC85:
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x171CAC85: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x171CAC85: shl edi, 4 */
    PUSH32(esp, MEM32(eax + edi)); /* 0x171CAC88: push dword ptr [eax + edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CAC8B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CAC8E: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xD4); /* 0x171CAC93: mov eax, dword ptr [esi + 0xd4] */
    PUSH32(esp, MEM32(edi + eax + 0x8)); /* 0x171CAC99: push dword ptr [edi + eax + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CAC9D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CACA0: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xD4); /* 0x171CACA5: mov eax, dword ptr [esi + 0xd4] */
    MEM32(edi + eax) = ebx; /* 0x171CACAB: mov dword ptr [edi + eax], ebx */
    eax = MEM32(esi + 0xD4); /* 0x171CACAE: mov eax, dword ptr [esi + 0xd4] */
    MEM32(edi + eax + 0x8) = ebx; /* 0x171CACB4: mov dword ptr [edi + eax + 8], ebx */
    goto L_171CACFB; /* 0x171CACB8: jmp 0x171cacfb */
L_171CACBA:
    eax = MEM32(esi + 0xD8); /* 0x171CACBA: mov eax, dword ptr [esi + 0xd8] */
    /* cmp eax, ebx */ /* 0x171CACC0: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CACF7; /* 0x171CACC2: je 0x171cacf7 */
L_171CACC4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171CACC4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171CACC6: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CACDF; /* 0x171CACC8: jle 0x171cacdf */
L_171CACCA:
    PUSH32(esp, edi); /* 0x171CACCA: push edi */
    PUSH32(esp, 0x20u); /* 0x171CACCB: push 0x20 */
    PUSH32(esp, esi); /* 0x171CACCD: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CACCE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CAAF1); /* 0x171CACD1: call 0x171caaf1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171CACD6: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0xD8) */ /* 0x171CACD7: cmp edi, dword ptr [esi + 0xd8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CACCA; /* 0x171CACDD: jl 0x171cacca */
L_171CACDF:
    edi = esi + 0xD4; /* 0x171CACDF: lea edi, [esi + 0xd4] */
    PUSH32(esp, MEM32(edi)); /* 0x171CACE5: push dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CACE7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CACEA: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x171CACEF: mov dword ptr [edi], ebx */
    MEM32(esi + 0xD8) = ebx; /* 0x171CACF1: mov dword ptr [esi + 0xd8], ebx */
L_171CACF7:
    _flag_a = (uint32_t)(MEM8(esi + 0x9)) << 24; _flag_b = (uint32_t)(0xDFu) << 24;
    MEM8(esi + 0x9) = (uint8_t)(MEM8(esi + 0x9) & 0xDFu); /* 0x171CACF7: and byte ptr [esi + 9], 0xdf */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171CACFB:
    eax = MEM32(esi + 0xB8); /* 0x171CACFB: mov eax, dword ptr [esi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    eax = eax & MEM32(ebp + 0x10); /* 0x171CAD01: and eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test HI8(eax), 2 */ /* 0x171CAD04: test ah, 2 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CAD79; /* 0x171CAD07: je 0x171cad79 */
L_171CAD09:
    edi = MEM32(ebp + 0x14); /* 0x171CAD09: mov edi, dword ptr [ebp + 0x14] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x171CAD0C: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CAD39; /* 0x171CAD0F: je 0x171cad39 */
L_171CAD11:
    eax = MEM32(esi + 0xBC); /* 0x171CAD11: mov eax, dword ptr [esi + 0xbc] */
    /* cmp eax, ebx */ /* 0x171CAD17: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CAD79; /* 0x171CAD19: je 0x171cad79 */
L_171CAD1B:
    edi = edi + edi * 4; /* 0x171CAD1B: lea edi, [edi + edi*4] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x171CAD1E: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x171CAD1E: shl edi, 2 */
    PUSH32(esp, MEM32(edi + eax + 0x8)); /* 0x171CAD21: push dword ptr [edi + eax + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CAD25: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CAD28: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xBC); /* 0x171CAD2D: mov eax, dword ptr [esi + 0xbc] */
    MEM32(eax + edi + 0x8) = ebx; /* 0x171CAD33: mov dword ptr [eax + edi + 8], ebx */
    goto L_171CAD79; /* 0x171CAD37: jmp 0x171cad79 */
L_171CAD39:
    eax = MEM32(esi + 0xC0); /* 0x171CAD39: mov eax, dword ptr [esi + 0xc0] */
    /* cmp eax, ebx */ /* 0x171CAD3F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CAD79; /* 0x171CAD41: je 0x171cad79 */
L_171CAD43:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171CAD43: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171CAD45: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CAD61; /* 0x171CAD47: jle 0x171cad61 */
L_171CAD49:
    PUSH32(esp, edi); /* 0x171CAD49: push edi */
    PUSH32(esp, 0x200u); /* 0x171CAD4A: push 0x200 */
    PUSH32(esp, esi); /* 0x171CAD4F: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CAD50: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CAAF1); /* 0x171CAD53: call 0x171caaf1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171CAD58: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0xC0) */ /* 0x171CAD59: cmp edi, dword ptr [esi + 0xc0] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xC0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CAD49; /* 0x171CAD5F: jl 0x171cad49 */
L_171CAD61:
    edi = esi + 0xBC; /* 0x171CAD61: lea edi, [esi + 0xbc] */
    PUSH32(esp, MEM32(edi)); /* 0x171CAD67: push dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CAD69: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CAD6C: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x171CAD71: mov dword ptr [edi], ebx */
    MEM32(esi + 0xC0) = ebx; /* 0x171CAD73: mov dword ptr [esi + 0xc0], ebx */
L_171CAD79:
    eax = MEM32(esi + 0xB8); /* 0x171CAD79: mov eax, dword ptr [esi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    eax = eax & MEM32(ebp + 0x10); /* 0x171CAD7F: and eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 8 */ /* 0x171CAD82: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CAD98; /* 0x171CAD84: je 0x171cad98 */
L_171CAD86:
    PUSH32(esp, MEM32(esi + 0x7C)); /* 0x171CAD86: push dword ptr [esi + 0x7c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CAD89: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CAD8C: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0xFFFFFFBFu);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0xFFFFFFBFu; /* 0x171CAD91: and dword ptr [esi + 8], 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x7C) = ebx; /* 0x171CAD95: mov dword ptr [esi + 0x7c], ebx */
L_171CAD98:
    eax = MEM32(esi + 0xB8); /* 0x171CAD98: mov eax, dword ptr [esi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    eax = eax & MEM32(ebp + 0x10); /* 0x171CAD9E: and eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test HI8(eax), 0x10u */ /* 0x171CADA1: test ah, 0x10 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CADBC; /* 0x171CADA4: je 0x171cadbc */
L_171CADA6:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x171CADA6: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CADA9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CADAC: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0xFFFFFFF7u; /* 0x171CADB1: and dword ptr [esi + 8], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10) = ebx; /* 0x171CADB5: mov dword ptr [esi + 0x10], ebx */
    MEM16(esi + 0x14) = (uint16_t)(LO16(ebx)); /* 0x171CADB8: mov word ptr [esi + 0x14], bx */
L_171CADBC:
    ecx = MEM32(esi + 0xB8); /* 0x171CADBC: mov ecx, dword ptr [esi + 0xb8] */
    eax = MEM32(ebp + 0x10); /* 0x171CADC2: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x171CADC5: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ecx), 0x40u */ /* 0x171CADC7: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CAE16; /* 0x171CADCA: je 0x171cae16 */
L_171CADCC:
    /* cmp MEM32(esi + 0xF8), ebx */ /* 0x171CADCC: cmp dword ptr [esi + 0xf8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xF8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CAE0F; /* 0x171CADD2: je 0x171cae0f */
L_171CADD4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171CADD4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x4), ebx */ /* 0x171CADD6: cmp dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CADFB; /* 0x171CADD9: jle 0x171cadfb */
L_171CADDB:
    eax = MEM32(esi + 0xF8); /* 0x171CADDB: mov eax, dword ptr [esi + 0xf8] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x171CADE1: push dword ptr [eax + edi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CADE4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CADE7: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xF8); /* 0x171CADEC: mov eax, dword ptr [esi + 0xf8] */
    MEM32(eax + edi * 4) = ebx; /* 0x171CADF2: mov dword ptr [eax + edi*4], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171CADF5: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x171CADF6: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CADDB; /* 0x171CADF9: jl 0x171caddb */
L_171CADFB:
    PUSH32(esp, MEM32(esi + 0xF8)); /* 0x171CADFB: push dword ptr [esi + 0xf8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CAE01: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CAE04: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xF8) = ebx; /* 0x171CAE09: mov dword ptr [esi + 0xf8], ebx */
L_171CAE0F:
    _flag_a = (uint32_t)(MEM8(esi + 0x9)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    MEM8(esi + 0x9) = (uint8_t)(MEM8(esi + 0x9) & 0x7Fu); /* 0x171CAE0F: and byte ptr [esi + 9], 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x10); /* 0x171CAE13: mov eax, dword ptr [ebp + 0x10] */
L_171CAE16:
    /* cmp MEM32(ebp + 0x14), 0xFFFFFFFFu */ /* 0x171CAE16: cmp dword ptr [ebp + 0x14], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x171CAE1A: pop edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CAE22; /* 0x171CAE1B: je 0x171cae22 */
L_171CAE1D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFBDDFu);
    eax = eax & 0xFFFFBDDFu; /* 0x171CAE1D: and eax, 0xffffbddf */
    _cf = 0;
    _flag_k = FK_TEST;
L_171CAE22:
    eax = ~eax; /* 0x171CAE22: not eax */
    _flag_a = (uint32_t)(MEM32(esi + 0xB8)); _flag_b = (uint32_t)(eax);
    MEM32(esi + 0xB8) = MEM32(esi + 0xB8) & eax; /* 0x171CAE24: and dword ptr [esi + 0xb8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171CAE2A:
    esi = POP32_VAL(esp); /* 0x171CAE2A: pop esi */
L_171CAE2B:
    ebx = POP32_VAL(esp); /* 0x171CAE2B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171CAE2C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171CAE2D: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171CAE35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CAE35u);

L_171CAE35:
    edi = edi; /* 0x171CAE35: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CAE37: push ebp */
    ebp = esp; /* 0x171CAE38: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171CAE3A: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171CAE3B: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171CAE3E: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171CAE3F: push -1 */
    PUSH32(esp, 0x7FFFu); /* 0x171CAE41: push 0x7fff */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171CAE46: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171CAE49: push ebx */
    RECOMP_CALL(sub_171CAAF1); /* 0x171CAE4A: call 0x171caaf1 */
    RECOMP_FLAGS_IN();
    edi = ebx + 0x220; /* 0x171CAE4F: lea edi, [ebx + 0x220] */
    /* cmp MEM32(edi), 0 */ /* 0x171CAE55: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CAE70; /* 0x171CAE58: je 0x171cae70 */
L_171CAE5A:
    PUSH32(esp, esi); /* 0x171CAE5A: push esi */
    esi = ebx + 0x224; /* 0x171CAE5B: lea esi, [ebx + 0x224] */
    PUSH32(esp, MEM32(esi)); /* 0x171CAE61: push dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x171CAE63: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CAE64: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x171CAE69: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x171CAE6C: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171CAE6F: pop esi */
L_171CAE70:
    PUSH32(esp, 0x120u); /* 0x171CAE70: push 0x120 */
    eax = ebp + 0xC; /* 0x171CAE75: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171CAE78: push eax */
    RECOMP_CALL(sub_171CAAB9); /* 0x171CAE79: call 0x171caab9 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171CAE7E: pop edi */
    ebx = POP32_VAL(esp); /* 0x171CAE7F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171CAE80: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CAE81: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CAE89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CAE89u);

L_171CAE89:
    edi = edi; /* 0x171CAE89: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CAE8B: push ebp */
    ebp = esp; /* 0x171CAE8C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171CAE8E: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x54); /* 0x171CAE91: mov eax, dword ptr [eax + 0x54] */
    ebp = POP32_VAL(esp); /* 0x171CAE94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CAE95: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CAE9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CAE9Du);

L_171CAE9D:
    eax = 0x170077E4u; /* 0x171CAE9D: mov eax, 0x170077e4 */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CAEA2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CAEAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CAEAAu);

L_171CAEAA:
    edi = edi; /* 0x171CAEAA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CAEAC: push ebp */
    ebp = esp; /* 0x171CAEAD: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171CAEAF: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x171CAEB2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0xC); /* 0x171CAEB4: mov edx, dword ptr [ebp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CAEBD; /* 0x171CAEB7: jne 0x171caebd */
L_171CAEB9:
    /* test edx, edx */ /* 0x171CAEB9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CAEC8; /* 0x171CAEBB: je 0x171caec8 */
L_171CAEBD:
    eax = ecx + 0x220; /* 0x171CAEBD: lea eax, [ecx + 0x220] */
    /* cmp MEM32(eax), 0 */ /* 0x171CAEC3: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171CAECC; /* 0x171CAEC6: jg 0x171caecc */
L_171CAEC8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CAEC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171CAEED; /* 0x171CAECA: jmp 0x171caeed */
L_171CAECC:
    eax = MEM32(eax); /* 0x171CAECC: mov eax, dword ptr [eax] */
    ecx = MEM32(ecx + 0x224); /* 0x171CAECE: mov ecx, dword ptr [ecx + 0x224] */
    PUSH32(esp, esi); /* 0x171CAED4: push esi */
    esi = eax + eax * 4; /* 0x171CAED5: lea esi, [eax + eax*4] */
    ecx = esi + ecx + (-0x5); /* 0x171CAED8: lea ecx, [esi + ecx - 5] */
    goto L_171CAEE8; /* 0x171CAEDC: jmp 0x171caee8 */
L_171CAEDE:
    esi = MEM32(edx); /* 0x171CAEDE: mov esi, dword ptr [edx] */
    /* cmp esi, MEM32(ecx) */ /* 0x171CAEE0: cmp esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CAEF1; /* 0x171CAEE2: je 0x171caef1 */
L_171CAEE4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171CAEE4: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 5; /* 0x171CAEE5: sub ecx, 5 */
    _flag_k = FK_CMP;
L_171CAEE8:
    /* test eax, eax */ /* 0x171CAEE8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CAEDE; /* 0x171CAEEA: jne 0x171caede */
L_171CAEEC:
    esi = POP32_VAL(esp); /* 0x171CAEEC: pop esi */
L_171CAEED:
    ebp = POP32_VAL(esp); /* 0x171CAEED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CAEEE: ret 8 */
L_171CAEF1:
    eax = (uint32_t)MEM8(ecx + 0x4); /* 0x171CAEF1: movzx eax, byte ptr [ecx + 4] */
    RECOMP_BACKEDGE();
    goto L_171CAEEC; /* 0x171CAEF5: jmp 0x171caeec */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171CAEFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CAEFCu);

L_171CAEFC:
    edi = edi; /* 0x171CAEFC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CAEFE: push ebp */
    ebp = esp; /* 0x171CAEFF: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171CAF01: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CAF0B; /* 0x171CAF05: jne 0x171caf0b */
L_171CAF07:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CAF07: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171CAF2A; /* 0x171CAF09: jmp 0x171caf2a */
L_171CAF0B:
    PUSH32(esp, 2); /* 0x171CAF0B: push 2 */
    RECOMP_CALL(sub_171D1E19); /* 0x171CAF0D: call 0x171d1e19 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CAF12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x171CAF14: mov dword ptr [ebp + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CAF27; /* 0x171CAF17: je 0x171caf27 */
L_171CAF19:
    PUSH32(esp, 0x120u); /* 0x171CAF19: push 0x120 */
    eax = ebp + 0x8; /* 0x171CAF1E: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171CAF21: push eax */
    RECOMP_CALL(sub_171CAAB9); /* 0x171CAF22: call 0x171caab9 */
    RECOMP_FLAGS_IN();
L_171CAF27:
    eax = MEM32(ebp + 0x8); /* 0x171CAF27: mov eax, dword ptr [ebp + 8] */
L_171CAF2A:
    ebp = POP32_VAL(esp); /* 0x171CAF2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CAF2B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CAF33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CAF33u);

L_171CAF33:
    edi = edi; /* 0x171CAF33: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CAF35: push ebp */
    ebp = esp; /* 0x171CAF36: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171CAF38: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171CAF39: mov ebx, dword ptr [ebp + 8] */
    /* test MEM8(ebx + 0x69), 4 */ /* 0x171CAF3C: test byte ptr [ebx + 0x69], 4 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x69)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CB09A; /* 0x171CAF40: jne 0x171cb09a */
L_171CAF46:
    PUSH32(esp, esi); /* 0x171CAF46: push esi */
    PUSH32(esp, ebx); /* 0x171CAF47: push ebx */
    RECOMP_CALL(sub_171D2072); /* 0x171CAF48: call 0x171d2072 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x171CAF4D: mov esi, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM8(esi + 0x1C); /* 0x171CAF50: movzx eax, byte ptr [esi + 0x1c] */
    PUSH32(esp, eax); /* 0x171CAF54: push eax */
    eax = (uint32_t)MEM8(esi + 0x1B); /* 0x171CAF55: movzx eax, byte ptr [esi + 0x1b] */
    PUSH32(esp, eax); /* 0x171CAF59: push eax */
    eax = (uint32_t)MEM8(esi + 0x1A); /* 0x171CAF5A: movzx eax, byte ptr [esi + 0x1a] */
    PUSH32(esp, eax); /* 0x171CAF5E: push eax */
    eax = (uint32_t)MEM8(esi + 0x19); /* 0x171CAF5F: movzx eax, byte ptr [esi + 0x19] */
    PUSH32(esp, eax); /* 0x171CAF63: push eax */
    eax = (uint32_t)MEM8(esi + 0x18); /* 0x171CAF64: movzx eax, byte ptr [esi + 0x18] */
    PUSH32(esp, eax); /* 0x171CAF68: push eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171CAF69: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x171CAF6C: push dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x171CAF6E: push ebx */
    RECOMP_CALL(sub_171D2F2B); /* 0x171CAF6F: call 0x171d2f2b */
    RECOMP_FLAGS_IN();
    /* test MEM8(esi + 0x8), 1 */ /* 0x171CAF74: test byte ptr [esi + 8], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CAF88; /* 0x171CAF78: je 0x171caf88 */
L_171CAF7A:
    fp_push(*(float*)&MEM32(esi + 0x28)); /* 0x171CAF7A: fld dword ptr [esi + 0x28] */
    PUSH32(esp, ecx); /* 0x171CAF7D: push ecx */
    PUSH32(esp, ecx); /* 0x171CAF7E: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x171CAF7F: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x171CAF82: push ebx */
    RECOMP_CALL(sub_171D3380); /* 0x171CAF83: call 0x171d3380 */
    RECOMP_FLAGS_IN();
L_171CAF88:
    /* test MEM8(esi + 0x9), 8 */ /* 0x171CAF88: test byte ptr [esi + 9], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x9)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CAF99; /* 0x171CAF8C: je 0x171caf99 */
L_171CAF8E:
    eax = (uint32_t)MEM8(esi + 0x2C); /* 0x171CAF8E: movzx eax, byte ptr [esi + 0x2c] */
    PUSH32(esp, eax); /* 0x171CAF92: push eax */
    PUSH32(esp, ebx); /* 0x171CAF93: push ebx */
    RECOMP_CALL(sub_171D33E8); /* 0x171CAF94: call 0x171d33e8 */
    RECOMP_FLAGS_IN();
L_171CAF99:
    /* test MEM8(esi + 0x9), 0x10u */ /* 0x171CAF99: test byte ptr [esi + 9], 0x10 */
    _flag_a = (uint32_t)(MEM8(esi + 0x9)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CAFB9; /* 0x171CAF9D: je 0x171cafb9 */
L_171CAF9F:
    PUSH32(esp, MEM32(esi + 0xCC)); /* 0x171CAF9F: push dword ptr [esi + 0xcc] */
    PUSH32(esp, MEM32(esi + 0xC8)); /* 0x171CAFA5: push dword ptr [esi + 0xc8] */
    PUSH32(esp, 0); /* 0x171CAFAB: push 0 */
    PUSH32(esp, MEM32(esi + 0xC4)); /* 0x171CAFAD: push dword ptr [esi + 0xc4] */
    PUSH32(esp, ebx); /* 0x171CAFB3: push ebx */
    RECOMP_CALL(sub_171D344A); /* 0x171CAFB4: call 0x171d344a */
    RECOMP_FLAGS_IN();
L_171CAFB9:
    /* test MEM8(esi + 0x8), 2 */ /* 0x171CAFB9: test byte ptr [esi + 8], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CAFCE; /* 0x171CAFBD: je 0x171cafce */
L_171CAFBF:
    eax = (uint32_t)MEM8(esi + 0x19); /* 0x171CAFBF: movzx eax, byte ptr [esi + 0x19] */
    PUSH32(esp, eax); /* 0x171CAFC3: push eax */
    eax = esi + 0x44; /* 0x171CAFC4: lea eax, [esi + 0x44] */
    PUSH32(esp, eax); /* 0x171CAFC7: push eax */
    PUSH32(esp, ebx); /* 0x171CAFC8: push ebx */
    RECOMP_CALL(sub_171D3687); /* 0x171CAFC9: call 0x171d3687 */
    RECOMP_FLAGS_IN();
L_171CAFCE:
    /* test MEM8(esi + 0x8), 4 */ /* 0x171CAFCE: test byte ptr [esi + 8], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB02C; /* 0x171CAFD2: je 0x171cb02c */
L_171CAFD4:
    fp_push(*(float*)&MEM32(esi + 0x9C)); /* 0x171CAFD4: fld dword ptr [esi + 0x9c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x171CAFDA: sub esp, 0x40 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x38) = _v; } /* 0x171CAFDD: fstp qword ptr [esp + 0x38] */
    fp_push(*(float*)&MEM32(esi + 0x98)); /* 0x171CAFE1: fld dword ptr [esi + 0x98] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x30) = _v; } /* 0x171CAFE7: fstp qword ptr [esp + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x94)); /* 0x171CAFEB: fld dword ptr [esi + 0x94] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x28) = _v; } /* 0x171CAFF1: fstp qword ptr [esp + 0x28] */
    fp_push(*(float*)&MEM32(esi + 0x90)); /* 0x171CAFF5: fld dword ptr [esi + 0x90] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x20) = _v; } /* 0x171CAFFB: fstp qword ptr [esp + 0x20] */
    fp_push(*(float*)&MEM32(esi + 0x8C)); /* 0x171CAFFF: fld dword ptr [esi + 0x8c] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x18) = _v; } /* 0x171CB005: fstp qword ptr [esp + 0x18] */
    fp_push(*(float*)&MEM32(esi + 0x88)); /* 0x171CB009: fld dword ptr [esi + 0x88] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x171CB00F: fstp qword ptr [esp + 0x10] */
    fp_push(*(float*)&MEM32(esi + 0x84)); /* 0x171CB013: fld dword ptr [esi + 0x84] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x171CB019: fstp qword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(esi + 0x80)); /* 0x171CB01D: fld dword ptr [esi + 0x80] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x171CB023: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x171CB026: push ebx */
    RECOMP_CALL(sub_171D3755); /* 0x171CB027: call 0x171d3755 */
    RECOMP_FLAGS_IN();
L_171CB02C:
    eax = MEM32(esi + 0xC0); /* 0x171CB02C: mov eax, dword ptr [esi + 0xc0] */
    /* test eax, eax */ /* 0x171CB032: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB095; /* 0x171CB034: je 0x171cb095 */
L_171CB036:
    PUSH32(esp, edi); /* 0x171CB036: push edi */
    edi = MEM32(esi + 0xBC); /* 0x171CB037: mov edi, dword ptr [esi + 0xbc] */
    eax = eax + eax * 4; /* 0x171CB03D: lea eax, [eax + eax*4] */
    eax = edi + eax * 4; /* 0x171CB040: lea eax, [edi + eax*4] */
    goto L_171CB090; /* 0x171CB043: jmp 0x171cb090 */
L_171CB045:
    PUSH32(esp, edi); /* 0x171CB045: push edi */
    PUSH32(esp, ebx); /* 0x171CB046: push ebx */
    RECOMP_CALL(sub_171CAEAA); /* 0x171CB047: call 0x171caeaa */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x171CB04C: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CB07B; /* 0x171CB04F: je 0x171cb07b */
L_171CB051:
    SET_LO8(ecx, MEM8(edi + 0x10)); /* 0x171CB051: mov cl, byte ptr [edi + 0x10] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x171CB054: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB07B; /* 0x171CB056: je 0x171cb07b */
L_171CB058:
    /* test LO8(ecx), 6 */ /* 0x171CB058: test cl, 6 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CB07B; /* 0x171CB05B: jne 0x171cb07b */
L_171CB05D:
    /* test MEM8(edi + 0x3), 0x20u */ /* 0x171CB05D: test byte ptr [edi + 3], 0x20 */
    _flag_a = (uint32_t)(MEM8(edi + 0x3)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CB06E; /* 0x171CB061: jne 0x171cb06e */
L_171CB063:
    /* cmp eax, 3 */ /* 0x171CB063: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CB06E; /* 0x171CB066: je 0x171cb06e */
L_171CB068:
    /* test MEM8(ebx + 0x6E), 1 */ /* 0x171CB068: test byte ptr [ebx + 0x6e], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x6E)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB07B; /* 0x171CB06C: je 0x171cb07b */
L_171CB06E:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x171CB06E: push dword ptr [edi + 0xc] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x171CB071: push dword ptr [edi + 8] */
    PUSH32(esp, edi); /* 0x171CB074: push edi */
    PUSH32(esp, ebx); /* 0x171CB075: push ebx */
    RECOMP_CALL(sub_171D2EF9); /* 0x171CB076: call 0x171d2ef9 */
    RECOMP_FLAGS_IN();
L_171CB07B:
    eax = MEM32(esi + 0xC0); /* 0x171CB07B: mov eax, dword ptr [esi + 0xc0] */
    ecx = MEM32(esi + 0xBC); /* 0x171CB081: mov ecx, dword ptr [esi + 0xbc] */
    eax = eax + eax * 4; /* 0x171CB087: lea eax, [eax + eax*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x171CB08A: add edi, 0x14 */
    _flag_k = FK_ADD;
    eax = ecx + eax * 4; /* 0x171CB08D: lea eax, [ecx + eax*4] */
L_171CB090:
    /* cmp edi, eax */ /* 0x171CB090: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171CB045; /* 0x171CB092: jb 0x171cb045 */
L_171CB094:
    edi = POP32_VAL(esp); /* 0x171CB094: pop edi */
L_171CB095:
    _flag_a = (uint32_t)((MEM8(ebx + 0x69) | 4)) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0x69) | 4)) << 24;
    MEM8(ebx + 0x69) = (uint8_t)(MEM8(ebx + 0x69) | 4); /* 0x171CB095: or byte ptr [ebx + 0x69], 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x171CB099: pop esi */
L_171CB09A:
    ebx = POP32_VAL(esp); /* 0x171CB09A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171CB09B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CB09C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CB0A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CB0A4u);

L_171CB0A4:
    edi = edi; /* 0x171CB0A4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CB0A6: push ebp */
    ebp = esp; /* 0x171CB0A7: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171CB0A9: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171CB0AA: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171CB0AD: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171CB0AE: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171CB0B1: push edi */
    PUSH32(esp, esi); /* 0x171CB0B2: push esi */
    PUSH32(esp, ebx); /* 0x171CB0B3: push ebx */
    RECOMP_CALL(sub_171CAF33); /* 0x171CB0B4: call 0x171caf33 */
    RECOMP_FLAGS_IN();
    /* test MEM8(esi + 0x8), 8 */ /* 0x171CB0B9: test byte ptr [esi + 8], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB0CF; /* 0x171CB0BD: je 0x171cb0cf */
L_171CB0BF:
    eax = (uint32_t)MEM16(esi + 0x14); /* 0x171CB0BF: movzx eax, word ptr [esi + 0x14] */
    PUSH32(esp, eax); /* 0x171CB0C3: push eax */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x171CB0C4: push dword ptr [esi + 0x10] */
    PUSH32(esp, ebx); /* 0x171CB0C7: push ebx */
    RECOMP_CALL(sub_171D23CD); /* 0x171CB0C8: call 0x171d23cd */
    RECOMP_FLAGS_IN();
    goto L_171CB0E0; /* 0x171CB0CD: jmp 0x171cb0e0 */
L_171CB0CF:
    /* cmp MEM8(esi + 0x19), 3 */ /* 0x171CB0CF: cmp byte ptr [esi + 0x19], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x19)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CB0E0; /* 0x171CB0D3: jne 0x171cb0e0 */
L_171CB0D5:
    PUSH32(esp, 0x17025D98u); /* 0x171CB0D5: push 0x17025d98 */
    PUSH32(esp, ebx); /* 0x171CB0DA: push ebx */
    RECOMP_CALL(sub_171CA861); /* 0x171CB0DB: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CB0E0:
    /* test MEM8(esi + 0x8), 0x10u */ /* 0x171CB0E0: test byte ptr [esi + 8], 0x10 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB126; /* 0x171CB0E4: je 0x171cb126 */
L_171CB0E6:
    /* test MEM8(ebx + 0x72), 8 */ /* 0x171CB0E6: test byte ptr [ebx + 0x72], 8 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x72)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB10F; /* 0x171CB0EA: je 0x171cb10f */
L_171CB0EC:
    /* cmp MEM8(esi + 0x19), 3 */ /* 0x171CB0EC: cmp byte ptr [esi + 0x19], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x19)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CB10F; /* 0x171CB0F0: jne 0x171cb10f */
L_171CB0F2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171CB0F2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x16), LO16(ecx) */ /* 0x171CB0F4: cmp word ptr [esi + 0x16], cx */
    _flag_a = (uint32_t)(MEM16(esi + 0x16)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CB10F; /* 0x171CB0F8: jbe 0x171cb10f */
L_171CB0FA:
    eax = MEM32(esi + 0x4C); /* 0x171CB0FA: mov eax, dword ptr [esi + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171CB0FD: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((LO8(edx) | 0xFFu)) << 24; _flag_b = (uint32_t)((LO8(edx) | 0xFFu)) << 24;
    SET_LO8(edx, LO8(edx) | 0xFFu); /* 0x171CB0FF: or dl, 0xff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(edx, LO8(edx) - MEM8(eax)); /* 0x171CB102: sub dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171CB104: inc ecx */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x171CB105: mov byte ptr [eax], dl */
    eax = (uint32_t)MEM16(esi + 0x16); /* 0x171CB107: movzx eax, word ptr [esi + 0x16] */
    /* cmp ecx, eax */ /* 0x171CB10B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CB0FA; /* 0x171CB10D: jl 0x171cb0fa */
L_171CB10F:
    eax = (uint32_t)MEM8(esi + 0x19); /* 0x171CB10F: movzx eax, byte ptr [esi + 0x19] */
    PUSH32(esp, eax); /* 0x171CB113: push eax */
    eax = (uint32_t)MEM16(esi + 0x16); /* 0x171CB114: movzx eax, word ptr [esi + 0x16] */
    PUSH32(esp, eax); /* 0x171CB118: push eax */
    eax = esi + 0x50; /* 0x171CB119: lea eax, [esi + 0x50] */
    PUSH32(esp, eax); /* 0x171CB11C: push eax */
    PUSH32(esp, MEM32(esi + 0x4C)); /* 0x171CB11D: push dword ptr [esi + 0x4c] */
    PUSH32(esp, ebx); /* 0x171CB120: push ebx */
    RECOMP_CALL(sub_171D3A09); /* 0x171CB121: call 0x171d3a09 */
    RECOMP_FLAGS_IN();
L_171CB126:
    /* test MEM8(esi + 0x8), 0x20u */ /* 0x171CB126: test byte ptr [esi + 8], 0x20 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB13B; /* 0x171CB12A: je 0x171cb13b */
L_171CB12C:
    eax = (uint32_t)MEM8(esi + 0x19); /* 0x171CB12C: movzx eax, byte ptr [esi + 0x19] */
    PUSH32(esp, eax); /* 0x171CB130: push eax */
    eax = esi + 0x5A; /* 0x171CB131: lea eax, [esi + 0x5a] */
    PUSH32(esp, eax); /* 0x171CB134: push eax */
    PUSH32(esp, ebx); /* 0x171CB135: push ebx */
    RECOMP_CALL(sub_171D3B0F); /* 0x171CB136: call 0x171d3b0f */
    RECOMP_FLAGS_IN();
L_171CB13B:
    /* test MEM8(esi + 0x8), 0x40u */ /* 0x171CB13B: test byte ptr [esi + 8], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB14F; /* 0x171CB13F: je 0x171cb14f */
L_171CB141:
    eax = (uint32_t)MEM16(esi + 0x14); /* 0x171CB141: movzx eax, word ptr [esi + 0x14] */
    PUSH32(esp, eax); /* 0x171CB145: push eax */
    PUSH32(esp, MEM32(esi + 0x7C)); /* 0x171CB146: push dword ptr [esi + 0x7c] */
    PUSH32(esp, ebx); /* 0x171CB149: push ebx */
    RECOMP_CALL(sub_171D2490); /* 0x171CB14A: call 0x171d2490 */
    RECOMP_FLAGS_IN();
L_171CB14F:
    /* test MEM8(esi + 0x9), 1 */ /* 0x171CB14F: test byte ptr [esi + 9], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x9)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB166; /* 0x171CB153: je 0x171cb166 */
L_171CB155:
    eax = (uint32_t)MEM8(esi + 0x6C); /* 0x171CB155: movzx eax, byte ptr [esi + 0x6c] */
    PUSH32(esp, eax); /* 0x171CB159: push eax */
    PUSH32(esp, MEM32(esi + 0x68)); /* 0x171CB15A: push dword ptr [esi + 0x68] */
    PUSH32(esp, MEM32(esi + 0x64)); /* 0x171CB15D: push dword ptr [esi + 0x64] */
    PUSH32(esp, ebx); /* 0x171CB160: push ebx */
    RECOMP_CALL(sub_171D3BFC); /* 0x171CB161: call 0x171d3bfc */
    RECOMP_FLAGS_IN();
L_171CB166:
    /* test MEM8(esi + 0x9), 4 */ /* 0x171CB166: test byte ptr [esi + 9], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x9)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB1A0; /* 0x171CB16A: je 0x171cb1a0 */
L_171CB16C:
    PUSH32(esp, MEM32(esi + 0xB0)); /* 0x171CB16C: push dword ptr [esi + 0xb0] */
    eax = (uint32_t)MEM8(esi + 0xB5); /* 0x171CB172: movzx eax, byte ptr [esi + 0xb5] */
    PUSH32(esp, MEM32(esi + 0xAC)); /* 0x171CB179: push dword ptr [esi + 0xac] */
    PUSH32(esp, eax); /* 0x171CB17F: push eax */
    eax = (uint32_t)MEM8(esi + 0xB4); /* 0x171CB180: movzx eax, byte ptr [esi + 0xb4] */
    PUSH32(esp, eax); /* 0x171CB187: push eax */
    PUSH32(esp, MEM32(esi + 0xA8)); /* 0x171CB188: push dword ptr [esi + 0xa8] */
    PUSH32(esp, MEM32(esi + 0xA4)); /* 0x171CB18E: push dword ptr [esi + 0xa4] */
    PUSH32(esp, MEM32(esi + 0xA0)); /* 0x171CB194: push dword ptr [esi + 0xa0] */
    PUSH32(esp, ebx); /* 0x171CB19A: push ebx */
    RECOMP_CALL(sub_171D287D); /* 0x171CB19B: call 0x171d287d */
    RECOMP_FLAGS_IN();
L_171CB1A0:
    /* test MEM8(esi + 0x9), 0x40u */ /* 0x171CB1A0: test byte ptr [esi + 9], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0x9)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB1CA; /* 0x171CB1A4: je 0x171cb1ca */
L_171CB1A6:
    fp_push(*(double*)ADDR(esi + 0xE8)); /* 0x171CB1A6: fld qword ptr [esi + 0xe8] */
    eax = (uint32_t)MEM8(esi + 0xDC); /* 0x171CB1AC: movzx eax, byte ptr [esi + 0xdc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171CB1B3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x171CB1B6: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(esi + 0xE0)); /* 0x171CB1BA: fld qword ptr [esi + 0xe0] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x171CB1C0: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x171CB1C3: push eax */
    PUSH32(esp, ebx); /* 0x171CB1C4: push ebx */
    RECOMP_CALL(sub_171D29F9); /* 0x171CB1C5: call 0x171d29f9 */
    RECOMP_FLAGS_IN();
L_171CB1CA:
    /* test MEM8(esi + 0x8), 0x80u */ /* 0x171CB1CA: test byte ptr [esi + 8], 0x80 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB1E1; /* 0x171CB1CE: je 0x171cb1e1 */
L_171CB1D0:
    eax = (uint32_t)MEM8(esi + 0x78); /* 0x171CB1D0: movzx eax, byte ptr [esi + 0x78] */
    PUSH32(esp, eax); /* 0x171CB1D4: push eax */
    PUSH32(esp, MEM32(esi + 0x74)); /* 0x171CB1D5: push dword ptr [esi + 0x74] */
    PUSH32(esp, MEM32(esi + 0x70)); /* 0x171CB1D8: push dword ptr [esi + 0x70] */
    PUSH32(esp, ebx); /* 0x171CB1DB: push ebx */
    RECOMP_CALL(sub_171D3C76); /* 0x171CB1DC: call 0x171d3c76 */
    RECOMP_FLAGS_IN();
L_171CB1E1:
    edi = 0x200u; /* 0x171CB1E1: mov edi, 0x200 */
    /* test MEM32(esi + 0x8), edi */ /* 0x171CB1E6: test dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB1F8; /* 0x171CB1E9: je 0x171cb1f8 */
L_171CB1EB:
    eax = esi + 0x3C; /* 0x171CB1EB: lea eax, [esi + 0x3c] */
    PUSH32(esp, eax); /* 0x171CB1EE: push eax */
    PUSH32(esp, ebx); /* 0x171CB1EF: push ebx */
    RECOMP_CALL(sub_171D3CF0); /* 0x171CB1F0: call 0x171d3cf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebx + 0x68) | edi)); _flag_b = (uint32_t)((MEM32(ebx + 0x68) | edi));
    MEM32(ebx + 0x68) = MEM32(ebx + 0x68) | edi; /* 0x171CB1F5: or dword ptr [ebx + 0x68], edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171CB1F8:
    /* test MEM8(esi + 0x9), 0x20u */ /* 0x171CB1F8: test byte ptr [esi + 9], 0x20 */
    _flag_a = (uint32_t)(MEM8(esi + 0x9)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB22A; /* 0x171CB1FC: je 0x171cb22a */
L_171CB1FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171CB1FE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xD8), edi */ /* 0x171CB200: cmp dword ptr [esi + 0xd8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xD8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CB22A; /* 0x171CB206: jle 0x171cb22a */
L_171CB208:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171CB208: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171CB20A:
    eax = MEM32(esi + 0xD4); /* 0x171CB20A: mov eax, dword ptr [esi + 0xd4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171CB210: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171CB212: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CB213: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D3526); /* 0x171CB216: call 0x171d3526 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171CB21B: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x171CB21C: add ebx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(esi + 0xD8) */ /* 0x171CB21F: cmp edi, dword ptr [esi + 0xd8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CB20A; /* 0x171CB225: jl 0x171cb20a */
L_171CB227:
    ebx = MEM32(ebp + 0x8); /* 0x171CB227: mov ebx, dword ptr [ebp + 8] */
L_171CB22A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171CB22A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x30), edi */ /* 0x171CB22C: cmp dword ptr [esi + 0x30], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edi; /* 0x171CB22F: mov dword ptr [ebp + 0xc], edi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CB2A6; /* 0x171CB232: jle 0x171cb2a6 */
L_171CB234:
    PUSH32(esp, 0xFFFFFFFDu); /* 0x171CB234: push -3 */
    ebx = POP32_VAL(esp); /* 0x171CB236: pop ebx */
L_171CB237:
    eax = MEM32(esi + 0x38); /* 0x171CB237: mov eax, dword ptr [esi + 0x38] */
    eax = MEM32(edi + eax); /* 0x171CB23A: mov eax, dword ptr [edi + eax] */
    /* test eax, eax */ /* 0x171CB23D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171CB250; /* 0x171CB23F: jle 0x171cb250 */
L_171CB241:
    PUSH32(esp, 0x17025D74u); /* 0x171CB241: push 0x17025d74 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CB246: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA889); /* 0x171CB249: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    goto L_171CB28F; /* 0x171CB24E: jmp 0x171cb28f */
L_171CB250:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171CB275; /* 0x171CB250: jne 0x171cb275 */
L_171CB252:
    eax = MEM32(esi + 0x38); /* 0x171CB252: mov eax, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x171CB255: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax)); /* 0x171CB257: push dword ptr [eax] */
    PUSH32(esp, 0); /* 0x171CB259: push 0 */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x171CB25B: push dword ptr [eax + 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x171CB25E: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CB261: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D277A); /* 0x171CB264: call 0x171d277a */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x38); /* 0x171CB269: mov eax, dword ptr [esi + 0x38] */
    MEM32(edi + eax) = 0xFFFFFFFEu; /* 0x171CB26C: mov dword ptr [edi + eax], 0xfffffffe */
    goto L_171CB295; /* 0x171CB273: jmp 0x171cb295 */
L_171CB275:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171CB275: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CB295; /* 0x171CB278: jne 0x171cb295 */
L_171CB27A:
    eax = MEM32(esi + 0x38); /* 0x171CB27A: mov eax, dword ptr [esi + 0x38] */
    PUSH32(esp, 0); /* 0x171CB27D: push 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x171CB27F: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x171CB281: push dword ptr [eax + 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x171CB284: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CB287: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D26BD); /* 0x171CB28A: call 0x171d26bd */
    RECOMP_FLAGS_IN();
L_171CB28F:
    eax = MEM32(esi + 0x38); /* 0x171CB28F: mov eax, dword ptr [esi + 0x38] */
    MEM32(edi + eax) = ebx; /* 0x171CB292: mov dword ptr [edi + eax], ebx */
L_171CB295:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x171CB295: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0xC); /* 0x171CB298: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x171CB29B: add edi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x30) */ /* 0x171CB29E: cmp eax, dword ptr [esi + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CB237; /* 0x171CB2A1: jl 0x171cb237 */
L_171CB2A3:
    ebx = MEM32(ebp + 0x8); /* 0x171CB2A3: mov ebx, dword ptr [ebp + 8] */
L_171CB2A6:
    eax = MEM32(esi + 0xC0); /* 0x171CB2A6: mov eax, dword ptr [esi + 0xc0] */
    /* test eax, eax */ /* 0x171CB2AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB312; /* 0x171CB2AE: je 0x171cb312 */
L_171CB2B0:
    edi = MEM32(esi + 0xBC); /* 0x171CB2B0: mov edi, dword ptr [esi + 0xbc] */
    eax = eax + eax * 4; /* 0x171CB2B6: lea eax, [eax + eax*4] */
    eax = edi + eax * 4; /* 0x171CB2B9: lea eax, [edi + eax*4] */
    goto L_171CB30E; /* 0x171CB2BC: jmp 0x171cb30e */
L_171CB2BE:
    PUSH32(esp, edi); /* 0x171CB2BE: push edi */
    PUSH32(esp, ebx); /* 0x171CB2BF: push ebx */
    RECOMP_CALL(sub_171CAEAA); /* 0x171CB2C0: call 0x171caeaa */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x171CB2C5: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CB2F9; /* 0x171CB2C8: je 0x171cb2f9 */
L_171CB2CA:
    SET_LO8(ecx, MEM8(edi + 0x10)); /* 0x171CB2CA: mov cl, byte ptr [edi + 0x10] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x171CB2CD: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB2F9; /* 0x171CB2CF: je 0x171cb2f9 */
L_171CB2D1:
    /* test LO8(ecx), 2 */ /* 0x171CB2D1: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB2F9; /* 0x171CB2D4: je 0x171cb2f9 */
L_171CB2D6:
    /* test LO8(ecx), 4 */ /* 0x171CB2D6: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CB2F9; /* 0x171CB2D9: jne 0x171cb2f9 */
L_171CB2DB:
    /* test MEM8(edi + 0x3), 0x20u */ /* 0x171CB2DB: test byte ptr [edi + 3], 0x20 */
    _flag_a = (uint32_t)(MEM8(edi + 0x3)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CB2EC; /* 0x171CB2DF: jne 0x171cb2ec */
L_171CB2E1:
    /* cmp eax, 3 */ /* 0x171CB2E1: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CB2EC; /* 0x171CB2E4: je 0x171cb2ec */
L_171CB2E6:
    /* test MEM8(ebx + 0x6E), 1 */ /* 0x171CB2E6: test byte ptr [ebx + 0x6e], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x6E)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB2F9; /* 0x171CB2EA: je 0x171cb2f9 */
L_171CB2EC:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x171CB2EC: push dword ptr [edi + 0xc] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x171CB2EF: push dword ptr [edi + 8] */
    PUSH32(esp, edi); /* 0x171CB2F2: push edi */
    PUSH32(esp, ebx); /* 0x171CB2F3: push ebx */
    RECOMP_CALL(sub_171D2EF9); /* 0x171CB2F4: call 0x171d2ef9 */
    RECOMP_FLAGS_IN();
L_171CB2F9:
    eax = MEM32(esi + 0xC0); /* 0x171CB2F9: mov eax, dword ptr [esi + 0xc0] */
    ecx = MEM32(esi + 0xBC); /* 0x171CB2FF: mov ecx, dword ptr [esi + 0xbc] */
    eax = eax + eax * 4; /* 0x171CB305: lea eax, [eax + eax*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x171CB308: add edi, 0x14 */
    _flag_k = FK_ADD;
    eax = ecx + eax * 4; /* 0x171CB30B: lea eax, [ecx + eax*4] */
L_171CB30E:
    /* cmp edi, eax */ /* 0x171CB30E: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171CB2BE; /* 0x171CB310: jb 0x171cb2be */
L_171CB312:
    edi = POP32_VAL(esp); /* 0x171CB312: pop edi */
    esi = POP32_VAL(esp); /* 0x171CB313: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CB314: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171CB315: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CB316: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CB31E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CB31Eu);

L_171CB31E:
    edi = edi; /* 0x171CB31E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CB320: push ebp */
    ebp = esp; /* 0x171CB321: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171CB323: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171CB324: mov ebx, dword ptr [ebp + 8] */
    /* test MEM8(ebx + 0x68), 4 */ /* 0x171CB327: test byte ptr [ebx + 0x68], 4 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x68)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x171CB32B: push esi */
    PUSH32(esp, edi); /* 0x171CB32C: push edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CB33A; /* 0x171CB32D: jne 0x171cb33a */
L_171CB32F:
    PUSH32(esp, 0x17025DC4u); /* 0x171CB32F: push 0x17025dc4 */
    PUSH32(esp, ebx); /* 0x171CB334: push ebx */
    RECOMP_CALL(sub_171CA861); /* 0x171CB335: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CB33A:
    esi = MEM32(ebp + 0xC); /* 0x171CB33A: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171CB33D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x171CB33F: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CB441; /* 0x171CB341: je 0x171cb441 */
L_171CB347:
    eax = 0x200u; /* 0x171CB347: mov eax, 0x200 */
    /* test MEM32(esi + 0x8), eax */ /* 0x171CB34C: test dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB360; /* 0x171CB34F: je 0x171cb360 */
L_171CB351:
    /* test MEM32(ebx + 0x68), eax */ /* 0x171CB351: test dword ptr [ebx + 0x68], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x68)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CB360; /* 0x171CB354: jne 0x171cb360 */
L_171CB356:
    eax = esi + 0x3C; /* 0x171CB356: lea eax, [esi + 0x3c] */
    PUSH32(esp, eax); /* 0x171CB359: push eax */
    PUSH32(esp, ebx); /* 0x171CB35A: push ebx */
    RECOMP_CALL(sub_171D3CF0); /* 0x171CB35B: call 0x171d3cf0 */
    RECOMP_FLAGS_IN();
L_171CB360:
    /* cmp MEM32(esi + 0x30), edi */ /* 0x171CB360: cmp dword ptr [esi + 0x30], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edi; /* 0x171CB363: mov dword ptr [ebp + 0xc], edi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CB3DA; /* 0x171CB366: jle 0x171cb3da */
L_171CB368:
    PUSH32(esp, 0xFFFFFFFDu); /* 0x171CB368: push -3 */
    ebx = POP32_VAL(esp); /* 0x171CB36A: pop ebx */
L_171CB36B:
    eax = MEM32(esi + 0x38); /* 0x171CB36B: mov eax, dword ptr [esi + 0x38] */
    eax = MEM32(edi + eax); /* 0x171CB36E: mov eax, dword ptr [edi + eax] */
    /* test eax, eax */ /* 0x171CB371: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171CB384; /* 0x171CB373: jle 0x171cb384 */
L_171CB375:
    PUSH32(esp, 0x17025D74u); /* 0x171CB375: push 0x17025d74 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CB37A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA889); /* 0x171CB37D: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    goto L_171CB3C3; /* 0x171CB382: jmp 0x171cb3c3 */
L_171CB384:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_L, _cf)) goto L_171CB3A9; /* 0x171CB384: jl 0x171cb3a9 */
L_171CB386:
    eax = MEM32(esi + 0x38); /* 0x171CB386: mov eax, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x171CB389: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax)); /* 0x171CB38B: push dword ptr [eax] */
    PUSH32(esp, 0); /* 0x171CB38D: push 0 */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x171CB38F: push dword ptr [eax + 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x171CB392: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CB395: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D277A); /* 0x171CB398: call 0x171d277a */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x38); /* 0x171CB39D: mov eax, dword ptr [esi + 0x38] */
    MEM32(edi + eax) = 0xFFFFFFFEu; /* 0x171CB3A0: mov dword ptr [edi + eax], 0xfffffffe */
    goto L_171CB3C9; /* 0x171CB3A7: jmp 0x171cb3c9 */
L_171CB3A9:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171CB3A9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CB3C9; /* 0x171CB3AC: jne 0x171cb3c9 */
L_171CB3AE:
    eax = MEM32(esi + 0x38); /* 0x171CB3AE: mov eax, dword ptr [esi + 0x38] */
    PUSH32(esp, 0); /* 0x171CB3B1: push 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x171CB3B3: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x171CB3B5: push dword ptr [eax + 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x171CB3B8: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CB3BB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D26BD); /* 0x171CB3BE: call 0x171d26bd */
    RECOMP_FLAGS_IN();
L_171CB3C3:
    eax = MEM32(esi + 0x38); /* 0x171CB3C3: mov eax, dword ptr [esi + 0x38] */
    MEM32(edi + eax) = ebx; /* 0x171CB3C6: mov dword ptr [edi + eax], ebx */
L_171CB3C9:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x171CB3C9: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0xC); /* 0x171CB3CC: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x171CB3CF: add edi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x30) */ /* 0x171CB3D2: cmp eax, dword ptr [esi + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CB36B; /* 0x171CB3D5: jl 0x171cb36b */
L_171CB3D7:
    ebx = MEM32(ebp + 0x8); /* 0x171CB3D7: mov ebx, dword ptr [ebp + 8] */
L_171CB3DA:
    eax = MEM32(esi + 0xC0); /* 0x171CB3DA: mov eax, dword ptr [esi + 0xc0] */
    /* test eax, eax */ /* 0x171CB3E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB441; /* 0x171CB3E2: je 0x171cb441 */
L_171CB3E4:
    edi = MEM32(esi + 0xBC); /* 0x171CB3E4: mov edi, dword ptr [esi + 0xbc] */
    eax = eax + eax * 4; /* 0x171CB3EA: lea eax, [eax + eax*4] */
    eax = edi + eax * 4; /* 0x171CB3ED: lea eax, [edi + eax*4] */
    goto L_171CB43D; /* 0x171CB3F0: jmp 0x171cb43d */
L_171CB3F2:
    PUSH32(esp, edi); /* 0x171CB3F2: push edi */
    PUSH32(esp, ebx); /* 0x171CB3F3: push ebx */
    RECOMP_CALL(sub_171CAEAA); /* 0x171CB3F4: call 0x171caeaa */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x171CB3F9: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CB428; /* 0x171CB3FC: je 0x171cb428 */
L_171CB3FE:
    SET_LO8(ecx, MEM8(edi + 0x10)); /* 0x171CB3FE: mov cl, byte ptr [edi + 0x10] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x171CB401: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB428; /* 0x171CB403: je 0x171cb428 */
L_171CB405:
    /* test LO8(ecx), 8 */ /* 0x171CB405: test cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB428; /* 0x171CB408: je 0x171cb428 */
L_171CB40A:
    /* test MEM8(edi + 0x3), 0x20u */ /* 0x171CB40A: test byte ptr [edi + 3], 0x20 */
    _flag_a = (uint32_t)(MEM8(edi + 0x3)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CB41B; /* 0x171CB40E: jne 0x171cb41b */
L_171CB410:
    /* cmp eax, 3 */ /* 0x171CB410: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CB41B; /* 0x171CB413: je 0x171cb41b */
L_171CB415:
    /* test MEM8(ebx + 0x6E), 1 */ /* 0x171CB415: test byte ptr [ebx + 0x6e], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x6E)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB428; /* 0x171CB419: je 0x171cb428 */
L_171CB41B:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x171CB41B: push dword ptr [edi + 0xc] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x171CB41E: push dword ptr [edi + 8] */
    PUSH32(esp, edi); /* 0x171CB421: push edi */
    PUSH32(esp, ebx); /* 0x171CB422: push ebx */
    RECOMP_CALL(sub_171D2EF9); /* 0x171CB423: call 0x171d2ef9 */
    RECOMP_FLAGS_IN();
L_171CB428:
    eax = MEM32(esi + 0xC0); /* 0x171CB428: mov eax, dword ptr [esi + 0xc0] */
    ecx = MEM32(esi + 0xBC); /* 0x171CB42E: mov ecx, dword ptr [esi + 0xbc] */
    eax = eax + eax * 4; /* 0x171CB434: lea eax, [eax + eax*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x171CB437: add edi, 0x14 */
    _flag_k = FK_ADD;
    eax = ecx + eax * 4; /* 0x171CB43A: lea eax, [ecx + eax*4] */
L_171CB43D:
    /* cmp edi, eax */ /* 0x171CB43D: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171CB3F2; /* 0x171CB43F: jb 0x171cb3f2 */
L_171CB441:
    _flag_a = (uint32_t)((MEM32(ebx + 0x68) | 8)); _flag_b = (uint32_t)((MEM32(ebx + 0x68) | 8));
    MEM32(ebx + 0x68) = MEM32(ebx + 0x68) | 8; /* 0x171CB441: or dword ptr [ebx + 0x68], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171CB445: push ebx */
    RECOMP_CALL(sub_171D3335); /* 0x171CB446: call 0x171d3335 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171CB44B: pop edi */
    esi = POP32_VAL(esp); /* 0x171CB44C: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CB44D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171CB44E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CB44F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CB457(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CB457u);

L_171CB457:
    edi = edi; /* 0x171CB457: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CB459: push ebp */
    ebp = esp; /* 0x171CB45A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171CB45C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CB45D: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0xE4), 0 */ /* 0x171CB460: cmp dword ptr [esi + 0xe4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xE4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CB489; /* 0x171CB467: jne 0x171cb489 */
L_171CB469:
    /* cmp MEM8(esi + 0x124), 0 */ /* 0x171CB469: cmp byte ptr [esi + 0x124], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x124)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CB489; /* 0x171CB470: jne 0x171cb489 */
L_171CB472:
    /* test MEM8(esi + 0x69), 4 */ /* 0x171CB472: test byte ptr [esi + 0x69], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x69)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CB483; /* 0x171CB476: jne 0x171cb483 */
L_171CB478:
    PUSH32(esp, 0x17025DE0u); /* 0x171CB478: push 0x17025de0 */
    PUSH32(esp, esi); /* 0x171CB47D: push esi */
    RECOMP_CALL(sub_171CA861); /* 0x171CB47E: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CB483:
    PUSH32(esp, esi); /* 0x171CB483: push esi */
    RECOMP_CALL(sub_171D2ADE); /* 0x171CB484: call 0x171d2ade */
    RECOMP_FLAGS_IN();
L_171CB489:
    /* cmp MEM8(esi + 0x123), 0 */ /* 0x171CB489: cmp byte ptr [esi + 0x123], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x123)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CB52B; /* 0x171CB490: je 0x171cb52b */
L_171CB496:
    /* test MEM8(esi + 0x70), 2 */ /* 0x171CB496: test byte ptr [esi + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB52B; /* 0x171CB49A: je 0x171cb52b */
L_171CB4A0:
    eax = (uint32_t)MEM8(esi + 0x124); /* 0x171CB4A0: movzx eax, byte ptr [esi + 0x124] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171CB4A7: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171CB522; /* 0x171CB4AA: je 0x171cb522 */
L_171CB4AC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171CB4AC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171CB50E; /* 0x171CB4AD: je 0x171cb50e */
L_171CB4AF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171CB4AF: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171CB502; /* 0x171CB4B0: je 0x171cb502 */
L_171CB4B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171CB4B2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171CB4F0; /* 0x171CB4B3: je 0x171cb4f0 */
L_171CB4B5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171CB4B5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171CB4E4; /* 0x171CB4B6: je 0x171cb4e4 */
L_171CB4B8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171CB4B8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171CB4D2; /* 0x171CB4B9: je 0x171cb4d2 */
L_171CB4BB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171CB4BB: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171CB52B; /* 0x171CB4BC: jne 0x171cb52b */
L_171CB4BE:
    /* test MEM8(esi + 0xE4), 1 */ /* 0x171CB4BE: test byte ptr [esi + 0xe4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CB52B; /* 0x171CB4C5: jne 0x171cb52b */
L_171CB4C7:
    PUSH32(esp, esi); /* 0x171CB4C7: push esi */
    RECOMP_CALL(sub_171D3D9D); /* 0x171CB4C8: call 0x171d3d9d */
    RECOMP_FLAGS_IN();
    goto L_171CB5FD; /* 0x171CB4CD: jmp 0x171cb5fd */
L_171CB4D2:
    /* test MEM8(esi + 0xE4), 1 */ /* 0x171CB4D2: test byte ptr [esi + 0xe4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CB4C7; /* 0x171CB4D9: jne 0x171cb4c7 */
L_171CB4DB:
    /* cmp MEM32(esi + 0xC8), 2 */ /* 0x171CB4DB: cmp dword ptr [esi + 0xc8], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_171CB51E; /* 0x171CB4E2: jmp 0x171cb51e */
L_171CB4E4:
    eax = MEM32(esi + 0xE4); /* 0x171CB4E4: mov eax, dword ptr [esi + 0xe4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    SET_LO8(eax, LO8(eax) & 3); /* 0x171CB4EA: and al, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 2 */ /* 0x171CB4EC: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_171CB529; /* 0x171CB4EE: jmp 0x171cb529 */
L_171CB4F0:
    /* test MEM8(esi + 0xE4), 3 */ /* 0x171CB4F0: test byte ptr [esi + 0xe4], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CB4C7; /* 0x171CB4F7: jne 0x171cb4c7 */
L_171CB4F9:
    /* cmp MEM32(esi + 0xC8), 3 */ /* 0x171CB4F9: cmp dword ptr [esi + 0xc8], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC8)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_171CB51E; /* 0x171CB500: jmp 0x171cb51e */
L_171CB502:
    eax = MEM32(esi + 0xE4); /* 0x171CB502: mov eax, dword ptr [esi + 0xe4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    SET_LO8(eax, LO8(eax) & 7); /* 0x171CB508: and al, 7 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 4 */ /* 0x171CB50A: cmp al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_171CB529; /* 0x171CB50C: jmp 0x171cb529 */
L_171CB50E:
    /* test MEM8(esi + 0xE4), 7 */ /* 0x171CB50E: test byte ptr [esi + 0xe4], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CB4C7; /* 0x171CB515: jne 0x171cb4c7 */
L_171CB517:
    /* cmp MEM32(esi + 0xC8), 5 */ /* 0x171CB517: cmp dword ptr [esi + 0xc8], 5 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC8)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_171CB51E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_171CB52B; /* 0x171CB51E: jae 0x171cb52b */
L_171CB520:
    RECOMP_BACKEDGE();
    goto L_171CB4C7; /* 0x171CB520: jmp 0x171cb4c7 */
L_171CB522:
    /* test MEM8(esi + 0xE4), 7 */ /* 0x171CB522: test byte ptr [esi + 0xe4], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171CB529:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171CB4C7; /* 0x171CB529: jne 0x171cb4c7 */
L_171CB52B:
    SET_LO8(eax, MEM8(esi + 0x126)); /* 0x171CB52B: mov al, byte ptr [esi + 0x126] */
    SET_LO8(edx, MEM8(esi + 0x12B)); /* 0x171CB531: mov dl, byte ptr [esi + 0x12b] */
    ecx = MEM32(esi + 0xD4); /* 0x171CB537: mov ecx, dword ptr [esi + 0xd4] */
    MEM8(esi + 0x108) = (uint8_t)(LO8(eax)); /* 0x171CB53D: mov byte ptr [esi + 0x108], al */
    SET_LO8(eax, MEM8(esi + 0x128)); /* 0x171CB543: mov al, byte ptr [esi + 0x128] */
    MEM8(esi + 0x109) = (uint8_t)(LO8(eax)); /* 0x171CB549: mov byte ptr [esi + 0x109], al */
    { int32_t _r = (int32_t)(int8_t)LO8(eax) * (int8_t)(LO8(edx)); /* 0x171CB54F: imul dl */
      SET_LO16(eax, (uint16_t)_r); uint32_t _ov = _r != (int8_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edi); /* 0x171CB551: push edi */
    edi = esi + 0x100; /* 0x171CB552: lea edi, [esi + 0x100] */
    MEM8(esi + 0x10B) = (uint8_t)(LO8(eax)); /* 0x171CB558: mov byte ptr [esi + 0x10b], al */
    /* cmp LO8(eax), 8 */ /* 0x171CB55E: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(edi) = ecx; /* 0x171CB560: mov dword ptr [edi], ecx */
    MEM8(esi + 0x10A) = (uint8_t)(LO8(edx)); /* 0x171CB562: mov byte ptr [esi + 0x10a], dl */
    eax = (uint32_t)LO8(eax); /* 0x171CB568: movzx eax, al */
    if (CMP_B(_flag_a, _flag_b)) goto L_171CB575; /* 0x171CB56B: jb 0x171cb575 */
L_171CB56D:
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171CB56D: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x171CB56D: shr eax, 3 */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x171CB570: imul eax, ecx */
    goto L_171CB57E; /* 0x171CB573: jmp 0x171cb57e */
L_171CB575:
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x171CB575: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x171CB578: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171CB57B: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x171CB57B: shr eax, 3 */
L_171CB57E:
    PUSH32(esp, eax); /* 0x171CB57E: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171CB57F: push dword ptr [ebp + 0xc] */
    MEM32(esi + 0x104) = eax; /* 0x171CB582: mov dword ptr [esi + 0x104], eax */
    eax = MEM32(esi + 0xEC); /* 0x171CB588: mov eax, dword ptr [esi + 0xec] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CB58E: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171CB58F: push eax */
    PUSH32(esp, esi); /* 0x171CB590: push esi */
    RECOMP_CALL(sub_171D1EED); /* 0x171CB591: call 0x171d1eed */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x123), 0 */ /* 0x171CB596: cmp byte ptr [esi + 0x123], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x123)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CB5CE; /* 0x171CB59D: je 0x171cb5ce */
L_171CB59F:
    SET_LO8(eax, MEM8(esi + 0x124)); /* 0x171CB59F: mov al, byte ptr [esi + 0x124] */
    /* cmp LO8(eax), 6 */ /* 0x171CB5A5: cmp al, 6 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_171CB5CE; /* 0x171CB5A7: jae 0x171cb5ce */
L_171CB5A9:
    /* test MEM8(esi + 0x70), 2 */ /* 0x171CB5A9: test byte ptr [esi + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB5CE; /* 0x171CB5AD: je 0x171cb5ce */
L_171CB5AF:
    eax = (uint32_t)LO8(eax); /* 0x171CB5AF: movzx eax, al */
    PUSH32(esp, eax); /* 0x171CB5B2: push eax */
    eax = MEM32(esi + 0xEC); /* 0x171CB5B3: mov eax, dword ptr [esi + 0xec] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CB5B9: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171CB5BA: push eax */
    PUSH32(esp, edi); /* 0x171CB5BB: push edi */
    RECOMP_CALL(sub_171D2C42); /* 0x171CB5BC: call 0x171d2c42 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi), 0 */ /* 0x171CB5C1: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CB5CE; /* 0x171CB5C4: jne 0x171cb5ce */
L_171CB5C6:
    PUSH32(esp, esi); /* 0x171CB5C6: push esi */
    RECOMP_CALL(sub_171D3D9D); /* 0x171CB5C7: call 0x171d3d9d */
    RECOMP_FLAGS_IN();
    goto L_171CB5FC; /* 0x171CB5CC: jmp 0x171cb5fc */
L_171CB5CE:
    /* cmp MEM32(esi + 0x70), 0 */ /* 0x171CB5CE: cmp dword ptr [esi + 0x70], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x70)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CB5DA; /* 0x171CB5D2: je 0x171cb5da */
L_171CB5D4:
    PUSH32(esp, esi); /* 0x171CB5D4: push esi */
    RECOMP_CALL(sub_171D5060); /* 0x171CB5D5: call 0x171d5060 */
    RECOMP_FLAGS_IN();
L_171CB5DA:
    PUSH32(esp, edi); /* 0x171CB5DA: push edi */
    PUSH32(esp, esi); /* 0x171CB5DB: push esi */
    RECOMP_CALL(sub_171D405E); /* 0x171CB5DC: call 0x171d405e */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x19C); /* 0x171CB5E1: mov eax, dword ptr [esi + 0x19c] */
    /* test eax, eax */ /* 0x171CB5E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB5FC; /* 0x171CB5E9: je 0x171cb5fc */
L_171CB5EB:
    ecx = (uint32_t)MEM8(esi + 0x124); /* 0x171CB5EB: movzx ecx, byte ptr [esi + 0x124] */
    PUSH32(esp, ecx); /* 0x171CB5F2: push ecx */
    PUSH32(esp, MEM32(esi + 0xE4)); /* 0x171CB5F3: push dword ptr [esi + 0xe4] */
    PUSH32(esp, esi); /* 0x171CB5F9: push esi */
    RECOMP_ICALL(eax); /* 0x171CB5FA: call eax */
    RECOMP_FLAGS_IN();
L_171CB5FC:
    edi = POP32_VAL(esp); /* 0x171CB5FC: pop edi */
L_171CB5FD:
    esi = POP32_VAL(esp); /* 0x171CB5FD: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CB5FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CB5FF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CB607(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CB607u);

L_171CB607:
    edi = edi; /* 0x171CB607: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CB609: push ebp */
    ebp = esp; /* 0x171CB60A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171CB60C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CB60D: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0xE4); /* 0x171CB610: mov eax, dword ptr [esi + 0xe4] */
    /* cmp eax, MEM32(esi + 0xD0) */ /* 0x171CB616: cmp eax, dword ptr [esi + 0xd0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xD0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171CB6C0; /* 0x171CB61C: jae 0x171cb6c0 */
L_171CB622:
    PUSH32(esp, ebx); /* 0x171CB622: push ebx */
    PUSH32(esp, edi); /* 0x171CB623: push edi */
L_171CB624:
    PUSH32(esp, 2); /* 0x171CB624: push 2 */
    eax = esi + 0x74; /* 0x171CB626: lea eax, [esi + 0x74] */
    PUSH32(esp, eax); /* 0x171CB629: push eax */
    RECOMP_CALL(sub_17205EF7); /* 0x171CB62A: call 0x17205ef7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CB62F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB64B; /* 0x171CB631: je 0x171cb64b */
L_171CB633:
    eax = MEM32(esi + 0x8C); /* 0x171CB633: mov eax, dword ptr [esi + 0x8c] */
    /* test eax, eax */ /* 0x171CB639: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CB640; /* 0x171CB63B: je 0x171cb640 */
L_171CB63D:
    PUSH32(esp, eax); /* 0x171CB63D: push eax */
    goto L_171CB645; /* 0x171CB63E: jmp 0x171cb645 */
L_171CB640:
    PUSH32(esp, 0x17025E18u); /* 0x171CB640: push 0x17025e18 */
L_171CB645:
    PUSH32(esp, esi); /* 0x171CB645: push esi */
    RECOMP_CALL(sub_171CA861); /* 0x171CB646: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CB64B:
    /* cmp MEM32(esi + 0x84), 0 */ /* 0x171CB64B: cmp dword ptr [esi + 0x84], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x84)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CB67C; /* 0x171CB652: jne 0x171cb67c */
L_171CB654:
    edi = esi + 0xB0; /* 0x171CB654: lea edi, [esi + 0xb0] */
    PUSH32(esp, MEM32(edi)); /* 0x171CB65A: push dword ptr [edi] */
    ebx = esi + 0xAC; /* 0x171CB65C: lea ebx, [esi + 0xac] */
    PUSH32(esp, MEM32(ebx)); /* 0x171CB662: push dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x171CB664: push esi */
    RECOMP_CALL(sub_171D320E); /* 0x171CB665: call 0x171d320e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x171CB66A: mov eax, dword ptr [ebx] */
    MEM32(esi + 0x80) = eax; /* 0x171CB66C: mov dword ptr [esi + 0x80], eax */
    eax = MEM32(edi); /* 0x171CB672: mov eax, dword ptr [edi] */
    MEM32(esi + 0x84) = eax; /* 0x171CB674: mov dword ptr [esi + 0x84], eax */
    RECOMP_BACKEDGE();
    goto L_171CB624; /* 0x171CB67A: jmp 0x171cb624 */
L_171CB67C:
    eax = MEM32(esi + 0xB0); /* 0x171CB67C: mov eax, dword ptr [esi + 0xb0] */
    ecx = MEM32(esi + 0x84); /* 0x171CB682: mov ecx, dword ptr [esi + 0x84] */
    /* cmp eax, ecx */ /* 0x171CB688: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CB6B1; /* 0x171CB68A: je 0x171cb6b1 */
L_171CB68C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171CB68C: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x171CB68E: push eax */
    edi = esi + 0xAC; /* 0x171CB68F: lea edi, [esi + 0xac] */
    PUSH32(esp, MEM32(edi)); /* 0x171CB695: push dword ptr [edi] */
    PUSH32(esp, esi); /* 0x171CB697: push esi */
    RECOMP_CALL(sub_171D320E); /* 0x171CB698: call 0x171d320e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x171CB69D: mov eax, dword ptr [edi] */
    MEM32(esi + 0x80) = eax; /* 0x171CB69F: mov dword ptr [esi + 0x80], eax */
    eax = MEM32(esi + 0xB0); /* 0x171CB6A5: mov eax, dword ptr [esi + 0xb0] */
    MEM32(esi + 0x84) = eax; /* 0x171CB6AB: mov dword ptr [esi + 0x84], eax */
L_171CB6B1:
    _flag_a = (uint32_t)(MEM32(esi + 0x154)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x154) = MEM32(esi + 0x154) & 0; /* 0x171CB6B1: and dword ptr [esi + 0x154], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171CB6B8: push esi */
    RECOMP_CALL(sub_171CBC4F); /* 0x171CB6B9: call 0x171cbc4f */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171CB6BE: pop edi */
    ebx = POP32_VAL(esp); /* 0x171CB6BF: pop ebx */
L_171CB6C0:
    esi = POP32_VAL(esp); /* 0x171CB6C0: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CB6C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CB6C2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CB6CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CB6CAu);

L_171CB6CA:
    edi = edi; /* 0x171CB6CA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CB6CC: push ebp */
    ebp = esp; /* 0x171CB6CD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x171CB6CF: sub esp, 0x40 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171CB6D2: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171CB6D3: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171CB6D6: push esi */
    PUSH32(esp, edi); /* 0x171CB6D7: push edi */
    eax = ebx + 0x74; /* 0x171CB6D8: lea eax, [ebx + 0x74] */
    PUSH32(esp, eax); /* 0x171CB6DB: push eax */
    RECOMP_CALL(sub_1720613B); /* 0x171CB6DC: call 0x1720613b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xAC)); /* 0x171CB6E1: push dword ptr [ebx + 0xac] */
    PUSH32(esp, ebx); /* 0x171CB6E7: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CB6E8: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xEC)); /* 0x171CB6ED: push dword ptr [ebx + 0xec] */
    PUSH32(esp, ebx); /* 0x171CB6F3: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CB6F4: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xE8)); /* 0x171CB6F9: push dword ptr [ebx + 0xe8] */
    PUSH32(esp, ebx); /* 0x171CB6FF: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CB700: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xF0)); /* 0x171CB705: push dword ptr [ebx + 0xf0] */
    PUSH32(esp, ebx); /* 0x171CB70B: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CB70C: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xF4)); /* 0x171CB711: push dword ptr [ebx + 0xf4] */
    PUSH32(esp, ebx); /* 0x171CB717: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CB718: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xF8)); /* 0x171CB71D: push dword ptr [ebx + 0xf8] */
    PUSH32(esp, ebx); /* 0x171CB723: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CB724: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xFC)); /* 0x171CB729: push dword ptr [ebx + 0xfc] */
    PUSH32(esp, ebx); /* 0x171CB72F: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CB730: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x210)); /* 0x171CB735: push dword ptr [ebx + 0x210] */
    PUSH32(esp, ebx); /* 0x171CB73B: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CB73C: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x1FC)); /* 0x171CB741: push dword ptr [ebx + 0x1fc] */
    PUSH32(esp, ebx); /* 0x171CB747: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CB748: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x200)); /* 0x171CB74D: push dword ptr [ebx + 0x200] */
    PUSH32(esp, ebx); /* 0x171CB753: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CB754: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x204)); /* 0x171CB759: push dword ptr [ebx + 0x204] */
    PUSH32(esp, ebx); /* 0x171CB75F: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CB760: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x208)); /* 0x171CB765: push dword ptr [ebx + 0x208] */
    PUSH32(esp, ebx); /* 0x171CB76B: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CB76C: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x20C)); /* 0x171CB771: push dword ptr [ebx + 0x20c] */
    PUSH32(esp, ebx); /* 0x171CB777: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CB778: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x48); /* 0x171CB77D: mov eax, dword ptr [ebx + 0x48] */
    edx = MEM32(ebx + 0x40); /* 0x171CB780: mov edx, dword ptr [ebx + 0x40] */
    PUSH32(esp, 0x10u); /* 0x171CB783: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x171CB785: pop ecx */
    esi = ebx; /* 0x171CB786: mov esi, ebx */
    edi = ebp + (-0x40); /* 0x171CB788: lea edi, [ebp - 0x40] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CB78B: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebx + 0x44); /* 0x171CB78D: mov esi, dword ptr [ebx + 0x44] */
    MEM32(ebp + 0x8) = eax; /* 0x171CB790: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CB793: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x171CB795: mov edi, ebx */
    PUSH32(esp, 0x10u); /* 0x171CB797: push 0x10 */
    ecx = 0x94u; /* 0x171CB799: mov ecx, 0x94 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171CB79E: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + 0x8); /* 0x171CB7A0: mov eax, dword ptr [ebp + 8] */
    MEM32(ebx + 0x44) = esi; /* 0x171CB7A3: mov dword ptr [ebx + 0x44], esi */
    ecx = POP32_VAL(esp); /* 0x171CB7A6: pop ecx */
    edi = ebx; /* 0x171CB7A7: mov edi, ebx */
    esi = ebp + (-0x40); /* 0x171CB7A9: lea esi, [ebp - 0x40] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CB7AC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x171CB7AE: pop edi */
    esi = POP32_VAL(esp); /* 0x171CB7AF: pop esi */
    MEM32(ebx + 0x40) = edx; /* 0x171CB7B0: mov dword ptr [ebx + 0x40], edx */
    MEM32(ebx + 0x48) = eax; /* 0x171CB7B3: mov dword ptr [ebx + 0x48], eax */
    ebx = POP32_VAL(esp); /* 0x171CB7B6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CB7B7: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CB7B8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CB7C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CB7C0u);

L_171CB7C0:
    edi = edi; /* 0x171CB7C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CB7C2: push ebp */
    ebp = esp; /* 0x171CB7C3: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171CB7C5: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 3 */ /* 0x171CB7C8: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171CB7DF; /* 0x171CB7CB: jl 0x171cb7df */
L_171CB7CD:
    PUSH32(esp, 0x17025E30u); /* 0x171CB7CD: push 0x17025e30 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CB7D2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA889); /* 0x171CB7D5: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    goto L_171CB9CD; /* 0x171CB7DA: jmp 0x171cb9cd */
L_171CB7DF:
    PUSH32(esp, ebx); /* 0x171CB7DF: push ebx */
    PUSH32(esp, esi); /* 0x171CB7E0: push esi */
    PUSH32(esp, edi); /* 0x171CB7E1: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171CB7E2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x171CB7E4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CB7EB; /* 0x171CB7E6: jne 0x171cb7eb */
L_171CB7E8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CB7E8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CB7EA: inc eax */
    _flag_k = FK_INC;
L_171CB7EB:
    ebx = MEM32(ebp + 0x10); /* 0x171CB7EB: mov ebx, dword ptr [ebp + 0x10] */
    /* cmp ebx, edi */ /* 0x171CB7EE: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171CB7FC; /* 0x171CB7F0: jl 0x171cb7fc */
L_171CB7F2:
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x171CB7F2: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CB7FC; /* 0x171CB7F5: je 0x171cb7fc */
L_171CB7F7:
    /* cmp eax, 1 */ /* 0x171CB7F7: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CB7FE; /* 0x171CB7FA: jne 0x171cb7fe */
L_171CB7FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171CB7FC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171CB7FE:
    /* cmp ebx, edi */ /* 0x171CB7FE: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x171CB800: mov esi, dword ptr [ebp + 8] */
    MEM8(esi + 0x1F9) = (uint8_t)(LO8(ebx)); /* 0x171CB803: mov byte ptr [esi + 0x1f9], bl */
    MEM8(esi + 0x1F8) = (uint8_t)(LO8(eax)); /* 0x171CB809: mov byte ptr [esi + 0x1f8], al */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CB8FE; /* 0x171CB80F: jle 0x171cb8fe */
L_171CB815:
    /* cmp MEM32(esi + 0x1FC), edi */ /* 0x171CB815: cmp dword ptr [esi + 0x1fc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x1FC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CB83F; /* 0x171CB81B: jne 0x171cb83f */
L_171CB81D:
    PUSH32(esp, ebx); /* 0x171CB81D: push ebx */
    PUSH32(esp, esi); /* 0x171CB81E: push esi */
    RECOMP_CALL(sub_171D1E85); /* 0x171CB81F: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1FC) = eax; /* 0x171CB824: mov dword ptr [esi + 0x1fc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CB82A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x171CB82C: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CB83F; /* 0x171CB82E: jle 0x171cb83f */
L_171CB830:
    ecx = MEM32(esi + 0x1FC); /* 0x171CB830: mov ecx, dword ptr [esi + 0x1fc] */
    MEM8(eax + ecx) = (uint8_t)(0xFFu); /* 0x171CB836: mov byte ptr [eax + ecx], 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CB83A: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ebx */ /* 0x171CB83B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CB830; /* 0x171CB83D: jl 0x171cb830 */
L_171CB83F:
    /* cmp MEM32(esi + 0x200), edi */ /* 0x171CB83F: cmp dword ptr [esi + 0x200], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x200)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CB887; /* 0x171CB845: jne 0x171cb887 */
L_171CB847:
    edi = ebx + ebx; /* 0x171CB847: lea edi, [ebx + ebx] */
    PUSH32(esp, edi); /* 0x171CB84A: push edi */
    PUSH32(esp, esi); /* 0x171CB84B: push esi */
    RECOMP_CALL(sub_171D1E85); /* 0x171CB84C: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171CB851: push edi */
    PUSH32(esp, esi); /* 0x171CB852: push esi */
    MEM32(esi + 0x200) = eax; /* 0x171CB853: mov dword ptr [esi + 0x200], eax */
    RECOMP_CALL(sub_171D1E85); /* 0x171CB859: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x204) = eax; /* 0x171CB85E: mov dword ptr [esi + 0x204], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CB864: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x171CB866: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171CB887; /* 0x171CB868: jle 0x171cb887 */
L_171CB86A:
    ecx = MEM32(esi + 0x200); /* 0x171CB86A: mov ecx, dword ptr [esi + 0x200] */
    MEM16(ecx + eax * 2) = (uint16_t)(0x100u); /* 0x171CB870: mov word ptr [ecx + eax*2], 0x100 */
    ecx = MEM32(esi + 0x204); /* 0x171CB876: mov ecx, dword ptr [esi + 0x204] */
    MEM16(ecx + eax * 2) = (uint16_t)(0x100u); /* 0x171CB87C: mov word ptr [ecx + eax*2], 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CB882: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ebx */ /* 0x171CB883: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CB86A; /* 0x171CB885: jl 0x171cb86a */
L_171CB887:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171CB887: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x171CB889: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171CB8FE; /* 0x171CB88B: jle 0x171cb8fe */
L_171CB88D:
    fp_push(*(double*)ADDR(0x17025E28)); /* 0x171CB88D: fld qword ptr [0x17025e28] */
L_171CB893:
    ecx = MEM32(ebp + 0x14); /* 0x171CB893: mov ecx, dword ptr [ebp + 0x14] */
    fp_push(*(double*)ADDR(ecx + edi * 8)); /* 0x171CB896: fld qword ptr [ecx + edi*8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171CB899: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CB89F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CB8A1: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CB8C0; /* 0x171CB8A4: jp 0x171cb8c0 */
L_171CB8A6:
    eax = MEM32(esi + 0x200); /* 0x171CB8A6: mov eax, dword ptr [esi + 0x200] */
    MEM16(eax + edi * 2) = (uint16_t)(0x100u); /* 0x171CB8AC: mov word ptr [eax + edi*2], 0x100 */
    eax = MEM32(esi + 0x204); /* 0x171CB8B2: mov eax, dword ptr [esi + 0x204] */
    MEM16(eax + edi * 2) = (uint16_t)(0x100u); /* 0x171CB8B8: mov word ptr [eax + edi*2], 0x100 */
    goto L_171CB8F7; /* 0x171CB8BE: jmp 0x171cb8f7 */
L_171CB8C0:
    fp_push(*(double*)ADDR(ecx + edi * 8)); /* 0x171CB8C0: fld qword ptr [ecx + edi*8] */
    _st[0] *= _st[1]; /* 0x171CB8C3: fmul st(1) */
    _st[0] += *(double*)ADDR(0x17001938); /* 0x171CB8C5: fadd qword ptr [0x17001938] */
    RECOMP_CALL(sub_1721B050); /* 0x171CB8CB: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(_st[0]); /* 0x171CB8D0: fld st(0) */
    ecx = MEM32(esi + 0x204); /* 0x171CB8D2: mov ecx, dword ptr [esi + 0x204] */
    MEM16(ecx + edi * 2) = (uint16_t)(LO16(eax)); /* 0x171CB8D8: mov word ptr [ecx + edi*2], ax */
    eax = MEM32(ebp + 0x14); /* 0x171CB8DC: mov eax, dword ptr [ebp + 0x14] */
    _st[0] /= *(double*)ADDR(eax + edi * 8); /* 0x171CB8DF: fdiv qword ptr [eax + edi*8] */
    _st[0] += *(double*)ADDR(0x17001938); /* 0x171CB8E2: fadd qword ptr [0x17001938] */
    RECOMP_CALL(sub_1721B050); /* 0x171CB8E8: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x200); /* 0x171CB8ED: mov ecx, dword ptr [esi + 0x200] */
    MEM16(ecx + edi * 2) = (uint16_t)(LO16(eax)); /* 0x171CB8F3: mov word ptr [ecx + edi*2], ax */
L_171CB8F7:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171CB8F7: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x171CB8F8: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CB893; /* 0x171CB8FA: jl 0x171cb893 */
L_171CB8FC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171CB8FC: fstp st(0) */
L_171CB8FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171CB8FE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x208), edi */ /* 0x171CB900: cmp dword ptr [esi + 0x208], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x208)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CB945; /* 0x171CB906: jne 0x171cb945 */
L_171CB908:
    PUSH32(esp, 0xAu); /* 0x171CB908: push 0xa */
    PUSH32(esp, esi); /* 0x171CB90A: push esi */
    RECOMP_CALL(sub_171D1E85); /* 0x171CB90B: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x171CB910: push 0xa */
    PUSH32(esp, esi); /* 0x171CB912: push esi */
    MEM32(esi + 0x208) = eax; /* 0x171CB913: mov dword ptr [esi + 0x208], eax */
    RECOMP_CALL(sub_171D1E85); /* 0x171CB919: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x20C) = eax; /* 0x171CB91E: mov dword ptr [esi + 0x20c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CB924: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171CB926:
    ecx = MEM32(esi + 0x208); /* 0x171CB926: mov ecx, dword ptr [esi + 0x208] */
    MEM16(eax + ecx) = (uint16_t)(8); /* 0x171CB92C: mov word ptr [eax + ecx], 8 */
    ecx = MEM32(esi + 0x20C); /* 0x171CB932: mov ecx, dword ptr [esi + 0x20c] */
    MEM16(eax + ecx) = (uint16_t)(8); /* 0x171CB938: mov word ptr [eax + ecx], 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CB93E: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CB93F: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0xAu */ /* 0x171CB940: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CB926; /* 0x171CB943: jl 0x171cb926 */
L_171CB945:
    ebx = MEM32(ebp + 0x18); /* 0x171CB945: mov ebx, dword ptr [ebp + 0x18] */
    fp_push(*(double*)ADDR(0x17005510)); /* 0x171CB948: fld qword ptr [0x17005510] */
L_171CB94E:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x171CB94E: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CB9A6; /* 0x171CB952: je 0x171cb9a6 */
L_171CB954:
    fp_push(*(double*)ADDR(ebx)); /* 0x171CB954: fld qword ptr [ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171CB956: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CB95C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CB95E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CB9A6; /* 0x171CB961: jnp 0x171cb9a6 */
L_171CB963:
    fp_push(*(double*)ADDR(ebx)); /* 0x171CB963: fld qword ptr [ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D88)); /* 0x171CB965: fcomp qword ptr [0x17001d88] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CB96B: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171CB96D: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CB9BE; /* 0x171CB970: jne 0x171cb9be */
L_171CB972:
    fp_push(_st[0]); /* 0x171CB972: fld st(0) */
    _st[0] /= *(double*)ADDR(ebx); /* 0x171CB974: fdiv qword ptr [ebx] */
    _st[0] += *(double*)ADDR(0x17001938); /* 0x171CB976: fadd qword ptr [0x17001938] */
    RECOMP_CALL(sub_1721B050); /* 0x171CB97C: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x20C); /* 0x171CB981: mov ecx, dword ptr [esi + 0x20c] */
    MEM16(edi + ecx) = (uint16_t)(LO16(eax)); /* 0x171CB987: mov word ptr [edi + ecx], ax */
    fp_push(*(double*)ADDR(ebx)); /* 0x171CB98B: fld qword ptr [ebx] */
    _st[0] *= _st[1]; /* 0x171CB98D: fmul st(1) */
    _st[0] += *(double*)ADDR(0x17001938); /* 0x171CB98F: fadd qword ptr [0x17001938] */
    RECOMP_CALL(sub_1721B050); /* 0x171CB995: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x208); /* 0x171CB99A: mov ecx, dword ptr [esi + 0x208] */
    MEM16(edi + ecx) = (uint16_t)(LO16(eax)); /* 0x171CB9A0: mov word ptr [edi + ecx], ax */
    goto L_171CB9BE; /* 0x171CB9A4: jmp 0x171cb9be */
L_171CB9A6:
    eax = MEM32(esi + 0x208); /* 0x171CB9A6: mov eax, dword ptr [esi + 0x208] */
    MEM16(edi + eax) = (uint16_t)(8); /* 0x171CB9AC: mov word ptr [edi + eax], 8 */
    eax = MEM32(esi + 0x20C); /* 0x171CB9B2: mov eax, dword ptr [esi + 0x20c] */
    MEM16(edi + eax) = (uint16_t)(8); /* 0x171CB9B8: mov word ptr [edi + eax], 8 */
L_171CB9BE:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x171CB9BE: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171CB9C1: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171CB9C2: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 0xAu */ /* 0x171CB9C3: cmp edi, 0xa */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CB94E; /* 0x171CB9C6: jl 0x171cb94e */
L_171CB9C8:
    edi = POP32_VAL(esp); /* 0x171CB9C8: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171CB9C9: fstp st(0) */
    esi = POP32_VAL(esp); /* 0x171CB9CB: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CB9CC: pop ebx */
L_171CB9CD:
    ebp = POP32_VAL(esp); /* 0x171CB9CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171CB9CE: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171CB9D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CB9D6u);

L_171CB9D6:
    edi = edi; /* 0x171CB9D6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CB9D8: push ebp */
    ebp = esp; /* 0x171CB9D9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x171CB9DB: sub esp, 0x5c */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171CB9DE: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171CB9E3: push ebx */
    PUSH32(esp, esi); /* 0x171CB9E4: push esi */
    PUSH32(esp, edi); /* 0x171CB9E5: push edi */
    PUSH32(esp, 1); /* 0x171CB9E6: push 1 */
    MEM32(ebp + (-0x4)) = eax; /* 0x171CB9E8: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_171D1E19); /* 0x171CB9EB: call 0x171d1e19 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171CB9F0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x171CB9F2: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x5C)) = eax; /* 0x171CB9F4: mov dword ptr [ebp - 0x5c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CBA1F; /* 0x171CB9F7: je 0x171cba1f */
L_171CB9F9:
    PUSH32(esp, edi); /* 0x171CB9F9: push edi */
    PUSH32(esp, eax); /* 0x171CB9FA: push eax */
    RECOMP_CALL(sub_1721B2D8); /* 0x171CB9FB: call 0x1721b2d8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CBA00: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171CBA02: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171CBA03: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBA26; /* 0x171CBA04: je 0x171cba26 */
L_171CBA06:
    ebx = MEM32(ebp + (-0x5C)); /* 0x171CBA06: mov ebx, dword ptr [ebp - 0x5c] */
    esi = ebx + 0xAC; /* 0x171CBA09: lea esi, [ebx + 0xac] */
    PUSH32(esp, MEM32(esi)); /* 0x171CBA0F: push dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x171CBA11: push ebx */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CBA12: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x171CBA17: push ebx */
    MEM32(esi) = edi; /* 0x171CBA18: mov dword ptr [esi], edi */
    RECOMP_CALL(sub_171D1E68); /* 0x171CBA1A: call 0x171d1e68 */
    RECOMP_FLAGS_IN();
L_171CBA1F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CBA1F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171CBB2A; /* 0x171CBA21: jmp 0x171cbb2a */
L_171CBA26:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171CBA26: push dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + (-0x5C)); /* 0x171CBA29: mov esi, dword ptr [ebp - 0x5c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171CBA2C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171CBA2F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171CBA32: push esi */
    RECOMP_CALL(sub_171CA83E); /* 0x171CBA33: call 0x171ca83e */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x171CBA38: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x58)) = edi; /* 0x171CBA3B: mov dword ptr [ebp - 0x58], edi */
L_171CBA3E:
    PUSH32(esp, edi); /* 0x171CBA3E: push edi */
    RECOMP_CALL(sub_171CAE9D); /* 0x171CBA3F: call 0x171cae9d */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x171CBA44: mov ecx, eax */
    eax = MEM32(ebp + (-0x58)); /* 0x171CBA46: mov eax, dword ptr [ebp - 0x58] */
    SET_LO8(edx, MEM8(eax + ebx)); /* 0x171CBA49: mov dl, byte ptr [eax + ebx] */
    /* cmp LO8(edx), MEM8(ecx + eax) */ /* 0x171CBA4C: cmp dl, byte ptr [ecx + eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CBA55; /* 0x171CBA4F: je 0x171cba55 */
L_171CBA51:
    _flag_a = (uint32_t)((MEM8(esi + 0x6E) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x6E) | 2)) << 24;
    MEM8(esi + 0x6E) = (uint8_t)(MEM8(esi + 0x6E) | 2); /* 0x171CBA51: or byte ptr [esi + 0x6e], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171CBA55:
    PUSH32(esp, edi); /* 0x171CBA55: push edi */
    RECOMP_CALL(sub_171CAE9D); /* 0x171CBA56: call 0x171cae9d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x58)); /* 0x171CBA5B: mov ecx, dword ptr [ebp - 0x58] */
    SET_LO8(eax, MEM8(eax + ecx)); /* 0x171CBA5E: mov al, byte ptr [eax + ecx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x58)) = MEM32(ebp + (-0x58)) + 1; /* 0x171CBA61: inc dword ptr [ebp - 0x58] */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x171CBA64: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CBA3E; /* 0x171CBA66: jne 0x171cba3e */
L_171CBA68:
    /* test MEM8(esi + 0x6E), 2 */ /* 0x171CBA68: test byte ptr [esi + 0x6e], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x6E)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBAE9; /* 0x171CBA6C: je 0x171cbae9 */
L_171CBA6E:
    /* cmp ebx, edi */ /* 0x171CBA6E: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CBABC; /* 0x171CBA70: je 0x171cbabc */
L_171CBA72:
    PUSH32(esp, edi); /* 0x171CBA72: push edi */
    RECOMP_CALL(sub_171CAE9D); /* 0x171CBA73: call 0x171cae9d */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(ebx)); /* 0x171CBA78: mov cl, byte ptr [ebx] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x171CBA7A: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CBA9C; /* 0x171CBA7C: jne 0x171cba9c */
L_171CBA7E:
    /* cmp LO8(ecx), 0x31u */ /* 0x171CBA7E: cmp cl, 0x31 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x31u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CBA91; /* 0x171CBA81: jne 0x171cba91 */
L_171CBA83:
    PUSH32(esp, edi); /* 0x171CBA83: push edi */
    RECOMP_CALL(sub_171CAE9D); /* 0x171CBA84: call 0x171cae9d */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(ebx + 0x2)); /* 0x171CBA89: mov cl, byte ptr [ebx + 2] */
    /* cmp LO8(ecx), MEM8(eax + 0x2) */ /* 0x171CBA8C: cmp cl, byte ptr [eax + 2] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CBA9C; /* 0x171CBA8F: jne 0x171cba9c */
L_171CBA91:
    /* cmp MEM8(ebx), 0x30u */ /* 0x171CBA91: cmp byte ptr [ebx], 0x30 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CBAE9; /* 0x171CBA94: jne 0x171cbae9 */
L_171CBA96:
    /* cmp MEM8(ebx + 0x2), 0x39u */ /* 0x171CBA96: cmp byte ptr [ebx + 2], 0x39 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x2)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_GE(_flag_a, _flag_b)) goto L_171CBAE9; /* 0x171CBA9A: jge 0x171cbae9 */
L_171CBA9C:
    /* cmp ebx, edi */ /* 0x171CBA9C: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CBABC; /* 0x171CBA9E: je 0x171cbabc */
L_171CBAA0:
    PUSH32(esp, ebx); /* 0x171CBAA0: push ebx */
    eax = ebp + (-0x54); /* 0x171CBAA1: lea eax, [ebp - 0x54] */
    PUSH32(esp, 0x17025EC0u); /* 0x171CBAA4: push 0x17025ec0 */
    PUSH32(esp, eax); /* 0x171CBAA9: push eax */
    RECOMP_CALL(sub_1721B5E4); /* 0x171CBAAA: call 0x1721b5e4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171CBAAF: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0x54); /* 0x171CBAB2: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x171CBAB5: push eax */
    PUSH32(esp, esi); /* 0x171CBAB6: push esi */
    RECOMP_CALL(sub_171CA889); /* 0x171CBAB7: call 0x171ca889 */
    RECOMP_FLAGS_IN();
L_171CBABC:
    PUSH32(esp, edi); /* 0x171CBABC: push edi */
    RECOMP_CALL(sub_171CAE9D); /* 0x171CBABD: call 0x171cae9d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x171CBAC2: push eax */
    eax = ebp + (-0x54); /* 0x171CBAC3: lea eax, [ebp - 0x54] */
    PUSH32(esp, 0x17025E88u); /* 0x171CBAC6: push 0x17025e88 */
    PUSH32(esp, eax); /* 0x171CBACB: push eax */
    RECOMP_CALL(sub_1721B5E4); /* 0x171CBACC: call 0x1721b5e4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171CBAD1: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0x54); /* 0x171CBAD4: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x171CBAD7: push eax */
    PUSH32(esp, esi); /* 0x171CBAD8: push esi */
    RECOMP_CALL(sub_171CA889); /* 0x171CBAD9: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17025E50u); /* 0x171CBADE: push 0x17025e50 */
    PUSH32(esp, esi); /* 0x171CBAE3: push esi */
    RECOMP_CALL(sub_171CA861); /* 0x171CBAE4: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CBAE9:
    eax = 0x2000u; /* 0x171CBAE9: mov eax, 0x2000 */
    PUSH32(esp, eax); /* 0x171CBAEE: push eax */
    PUSH32(esp, esi); /* 0x171CBAEF: push esi */
    MEM32(esi + 0xB0) = eax; /* 0x171CBAF0: mov dword ptr [esi + 0xb0], eax */
    RECOMP_CALL(sub_171D1E85); /* 0x171CBAF6: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171CBAFB: push edi */
    PUSH32(esp, edi); /* 0x171CBAFC: push edi */
    PUSH32(esp, edi); /* 0x171CBAFD: push edi */
    PUSH32(esp, esi); /* 0x171CBAFE: push esi */
    MEM32(esi + 0xAC) = eax; /* 0x171CBAFF: mov dword ptr [esi + 0xac], eax */
    RECOMP_CALL(sub_171CBC8C); /* 0x171CBB05: call 0x171cbc8c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171CBB0A: push edi */
    PUSH32(esp, edi); /* 0x171CBB0B: push edi */
    PUSH32(esp, 1); /* 0x171CBB0C: push 1 */
    PUSH32(esp, edi); /* 0x171CBB0E: push edi */
    PUSH32(esp, esi); /* 0x171CBB0F: push esi */
    RECOMP_CALL(sub_171CB7C0); /* 0x171CBB10: call 0x171cb7c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171CBB15: push edi */
    PUSH32(esp, esi); /* 0x171CBB16: push esi */
    RECOMP_CALL(sub_1721B2D8); /* 0x171CBB17: call 0x1721b2d8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CBB1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171CBB1E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171CBB1F: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBB27; /* 0x171CBB20: je 0x171cbb27 */
L_171CBB22:
    RECOMP_CALL(sub_1721B5F0); /* 0x171CBB22: call 0x1721b5f0 */
    RECOMP_FLAGS_IN();
L_171CBB27:
    eax = MEM32(ebp + (-0x5C)); /* 0x171CBB27: mov eax, dword ptr [ebp - 0x5c] */
L_171CBB2A:
    ecx = MEM32(ebp + (-0x4)); /* 0x171CBB2A: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B76C); /* 0x171CBB2D: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171CBB32: pop edi */
    esi = POP32_VAL(esp); /* 0x171CBB33: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CBB34: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CBB35: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171CBB36: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171CBB3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CBB3Eu);

L_171CBB3E:
    edi = edi; /* 0x171CBB3E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CBB40: push ebp */
    ebp = esp; /* 0x171CBB41: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171CBB43: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171CBB44: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171CBB47: push edi */
    edi = MEM32(ebp + 0x10); /* 0x171CBB48: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x171CBB4B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBB5F; /* 0x171CBB4D: jbe 0x171cbb5f */
L_171CBB4F:
    PUSH32(esp, MEM32(esi)); /* 0x171CBB4F: push dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CBB51: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CB457); /* 0x171CBB54: call 0x171cb457 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171CBB59: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171CBB5C: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171CBB4F; /* 0x171CBB5D: jne 0x171cbb4f */
L_171CBB5F:
    edi = POP32_VAL(esp); /* 0x171CBB5F: pop edi */
    esi = POP32_VAL(esp); /* 0x171CBB60: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CBB61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171CBB62: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171CBB6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CBB6Au);

L_171CBB6A:
    edi = edi; /* 0x171CBB6A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CBB6C: push ebp */
    ebp = esp; /* 0x171CBB6D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171CBB6F: push ecx */
    PUSH32(esp, ebx); /* 0x171CBB70: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171CBB71: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171CBB74: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171CBB75: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x171CBB77: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBB7D; /* 0x171CBB79: je 0x171cbb7d */
L_171CBB7B:
    esi = MEM32(ebx); /* 0x171CBB7B: mov esi, dword ptr [ebx] */
L_171CBB7D:
    PUSH32(esp, edi); /* 0x171CBB7D: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171CBB7E: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x171CBB81: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBBCC; /* 0x171CBB83: je 0x171cbbcc */
L_171CBB85:
    eax = MEM32(edi); /* 0x171CBB85: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x171CBB87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x171CBB89: mov dword ptr [ebp - 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBBCC; /* 0x171CBB8C: je 0x171cbbcc */
L_171CBB8E:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171CBB8E: push -1 */
    PUSH32(esp, 0x7FFFu); /* 0x171CBB90: push 0x7fff */
    PUSH32(esp, eax); /* 0x171CBB95: push eax */
    PUSH32(esp, esi); /* 0x171CBB96: push esi */
    RECOMP_CALL(sub_171CAAF1); /* 0x171CBB97: call 0x171caaf1 */
    RECOMP_FLAGS_IN();
    ebx = esi + 0x220; /* 0x171CBB9C: lea ebx, [esi + 0x220] */
    /* cmp MEM32(ebx), 0 */ /* 0x171CBBA2: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CBBBE; /* 0x171CBBA5: je 0x171cbbbe */
L_171CBBA7:
    edi = esi + 0x224; /* 0x171CBBA7: lea edi, [esi + 0x224] */
    PUSH32(esp, MEM32(edi)); /* 0x171CBBAD: push dword ptr [edi] */
    PUSH32(esp, esi); /* 0x171CBBAF: push esi */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CBBB0: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x171CBBB5: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x171CBBB8: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x171CBBBB: mov edi, dword ptr [ebp + 0xc] */
L_171CBBBE:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171CBBBE: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_171D1E68); /* 0x171CBBC1: call 0x171d1e68 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x171CBBC6: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x8); /* 0x171CBBC9: mov ebx, dword ptr [ebp + 8] */
L_171CBBCC:
    /* test esi, esi */ /* 0x171CBBCC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x171CBBCE: pop edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBBE0; /* 0x171CBBCF: je 0x171cbbe0 */
L_171CBBD1:
    PUSH32(esp, esi); /* 0x171CBBD1: push esi */
    RECOMP_CALL(sub_171CB6CA); /* 0x171CBBD2: call 0x171cb6ca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171CBBD7: push esi */
    RECOMP_CALL(sub_171D1E68); /* 0x171CBBD8: call 0x171d1e68 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x171CBBDD: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171CBBE0:
    esi = POP32_VAL(esp); /* 0x171CBBE0: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CBBE1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CBBE2: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CBBE3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CBBEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CBBEBu);

L_171CBBEB:
    edi = edi; /* 0x171CBBEB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CBBED: push ebp */
    ebp = esp; /* 0x171CBBEE: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171CBBF0: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4C); /* 0x171CBBF3: mov eax, dword ptr [ecx + 0x4c] */
    /* test eax, eax */ /* 0x171CBBF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBC05; /* 0x171CBBF8: je 0x171cbc05 */
L_171CBBFA:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171CBBFA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171CBBFD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x171CBC00: push ecx */
    RECOMP_ICALL(eax); /* 0x171CBC01: call eax */
    RECOMP_FLAGS_IN();
    goto L_171CBC10; /* 0x171CBC03: jmp 0x171cbc10 */
L_171CBC05:
    PUSH32(esp, 0x17025EF8u); /* 0x171CBC05: push 0x17025ef8 */
    PUSH32(esp, ecx); /* 0x171CBC0A: push ecx */
    RECOMP_CALL(sub_171CA861); /* 0x171CBC0B: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CBC10:
    ebp = POP32_VAL(esp); /* 0x171CBC10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171CBC11: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171CBC19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CBC19u);

L_171CBC19:
    edi = edi; /* 0x171CBC19: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CBC1B: push ebp */
    ebp = esp; /* 0x171CBC1C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171CBC1E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CBC1F: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x54)); /* 0x171CBC22: push dword ptr [esi + 0x54] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171CBC25: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x171CBC28: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171CBC2A: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1721B5FC); /* 0x171CBC2D: call 0x1721b5fc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x171CBC32: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x171CBC35: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CBC45; /* 0x171CBC38: je 0x171cbc45 */
L_171CBC3A:
    PUSH32(esp, 0x17025F14u); /* 0x171CBC3A: push 0x17025f14 */
    PUSH32(esp, esi); /* 0x171CBC3F: push esi */
    RECOMP_CALL(sub_171CA861); /* 0x171CBC40: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CBC45:
    esi = POP32_VAL(esp); /* 0x171CBC45: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CBC46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171CBC47: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171CBC4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CBC4Fu);

L_171CBC4F:
    edi = edi; /* 0x171CBC4F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CBC51: push ebp */
    ebp = esp; /* 0x171CBC52: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171CBC54: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x14C); /* 0x171CBC57: mov eax, dword ptr [ecx + 0x14c] */
    /* test eax, eax */ /* 0x171CBC5D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBC64; /* 0x171CBC5F: je 0x171cbc64 */
L_171CBC61:
    PUSH32(esp, ecx); /* 0x171CBC61: push ecx */
    RECOMP_ICALL(eax); /* 0x171CBC62: call eax */
    RECOMP_FLAGS_IN();
L_171CBC64:
    ebp = POP32_VAL(esp); /* 0x171CBC64: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CBC65: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CBC6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CBC6Du);

L_171CBC6D:
    edi = edi; /* 0x171CBC6D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CBC6F: push ebp */
    ebp = esp; /* 0x171CBC70: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171CBC72: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x54); /* 0x171CBC75: mov eax, dword ptr [eax + 0x54] */
    /* test eax, eax */ /* 0x171CBC78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBC83; /* 0x171CBC7A: je 0x171cbc83 */
L_171CBC7C:
    PUSH32(esp, eax); /* 0x171CBC7C: push eax */
    RECOMP_CALL(sub_1721B608); /* 0x171CBC7D: call 0x1721b608 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171CBC82: pop ecx */
L_171CBC83:
    ebp = POP32_VAL(esp); /* 0x171CBC83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171CBC84: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171CBC8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CBC8Cu);

L_171CBC8C:
    edi = edi; /* 0x171CBC8C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CBC8E: push ebp */
    ebp = esp; /* 0x171CBC8F: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171CBC91: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171CBC94: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CBC95: mov esi, dword ptr [ebp + 8] */
    MEM32(esi + 0x54) = eax; /* 0x171CBC98: mov dword ptr [esi + 0x54], eax */
    eax = MEM32(ebp + 0x10); /* 0x171CBC9B: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171CBC9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBCA7; /* 0x171CBCA0: je 0x171cbca7 */
L_171CBCA2:
    MEM32(esi + 0x4C) = eax; /* 0x171CBCA2: mov dword ptr [esi + 0x4c], eax */
    goto L_171CBCAE; /* 0x171CBCA5: jmp 0x171cbcae */
L_171CBCA7:
    MEM32(esi + 0x4C) = 0x171CBC19u; /* 0x171CBCA7: mov dword ptr [esi + 0x4c], 0x171cbc19 */
L_171CBCAE:
    eax = MEM32(ebp + 0x14); /* 0x171CBCAE: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x171CBCB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBCBD; /* 0x171CBCB3: je 0x171cbcbd */
L_171CBCB5:
    MEM32(esi + 0x14C) = eax; /* 0x171CBCB5: mov dword ptr [esi + 0x14c], eax */
    goto L_171CBCC7; /* 0x171CBCBB: jmp 0x171cbcc7 */
L_171CBCBD:
    MEM32(esi + 0x14C) = 0x171CBC6Du; /* 0x171CBCBD: mov dword ptr [esi + 0x14c], 0x171cbc6d */
L_171CBCC7:
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x171CBCC7: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CBCE7; /* 0x171CBCCB: je 0x171cbce7 */
L_171CBCCD:
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) & 0; /* 0x171CBCCD: and dword ptr [esi + 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x17025F58u); /* 0x171CBCD1: push 0x17025f58 */
    PUSH32(esp, esi); /* 0x171CBCD6: push esi */
    RECOMP_CALL(sub_171CA889); /* 0x171CBCD7: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17025F20u); /* 0x171CBCDC: push 0x17025f20 */
    PUSH32(esp, esi); /* 0x171CBCE1: push esi */
    RECOMP_CALL(sub_171CA889); /* 0x171CBCE2: call 0x171ca889 */
    RECOMP_FLAGS_IN();
L_171CBCE7:
    esi = POP32_VAL(esp); /* 0x171CBCE7: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CBCE8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171CBCE9: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171CBCF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CBCF1u);

L_171CBCF1:
    edi = edi; /* 0x171CBCF1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CBCF3: push ebp */
    ebp = esp; /* 0x171CBCF4: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171CBCF6: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CBD15; /* 0x171CBCFA: je 0x171cbd15 */
L_171CBCFC:
    eax = MEM32(ebp + 0xC); /* 0x171CBCFC: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171CBCFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBD15; /* 0x171CBD01: je 0x171cbd15 */
L_171CBD03:
    PUSH32(esp, esi); /* 0x171CBD03: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171CBD04: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x171CBD07: push edi */
    edi = eax + 0x5A; /* 0x171CBD08: lea edi, [eax + 0x5a] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171CBD0B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171CBD0C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x171CBD0D: movsw word ptr es:[edi], word ptr [esi] */
    _flag_a = (uint32_t)((MEM32(eax + 0x8) | 0x20u)); _flag_b = (uint32_t)((MEM32(eax + 0x8) | 0x20u));
    MEM32(eax + 0x8) = MEM32(eax + 0x8) | 0x20u; /* 0x171CBD0F: or dword ptr [eax + 8], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x171CBD13: pop edi */
    esi = POP32_VAL(esp); /* 0x171CBD14: pop esi */
L_171CBD15:
    ebp = POP32_VAL(esp); /* 0x171CBD15: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171CBD16: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171CBD1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CBD1Eu);

L_171CBD1E:
    edi = edi; /* 0x171CBD1E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CBD20: push ebp */
    ebp = esp; /* 0x171CBD21: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171CBD23: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CBF4C; /* 0x171CBD27: je 0x171cbf4c */
L_171CBD2D:
    PUSH32(esp, esi); /* 0x171CBD2D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171CBD2E: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x171CBD31: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBF4B; /* 0x171CBD33: je 0x171cbf4b */
L_171CBD39:
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171CBD39: fld qword ptr [0x17001d90] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x171CBD3F: fld qword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBD42: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBD44: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CBD46: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CBF3C; /* 0x171CBD49: jnp 0x171cbf3c */
L_171CBD4F:
    fp_push(*(double*)ADDR(ebp + 0x18)); /* 0x171CBD4F: fld qword ptr [ebp + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBD52: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBD54: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CBD56: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CBF3C; /* 0x171CBD59: jnp 0x171cbf3c */
L_171CBD5F:
    fp_push(*(double*)ADDR(ebp + 0x20)); /* 0x171CBD5F: fld qword ptr [ebp + 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBD62: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBD64: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CBD66: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CBF3C; /* 0x171CBD69: jnp 0x171cbf3c */
L_171CBD6F:
    fp_push(*(double*)ADDR(ebp + 0x28)); /* 0x171CBD6F: fld qword ptr [ebp + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBD72: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBD74: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CBD76: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CBF3C; /* 0x171CBD79: jnp 0x171cbf3c */
L_171CBD7F:
    fp_push(*(double*)ADDR(ebp + 0x30)); /* 0x171CBD7F: fld qword ptr [ebp + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBD82: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBD84: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CBD86: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CBF3C; /* 0x171CBD89: jnp 0x171cbf3c */
L_171CBD8F:
    fp_push(*(double*)ADDR(ebp + 0x38)); /* 0x171CBD8F: fld qword ptr [ebp + 0x38] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBD92: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBD94: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CBD96: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CBF3C; /* 0x171CBD99: jnp 0x171cbf3c */
L_171CBD9F:
    fp_push(*(double*)ADDR(ebp + 0x40)); /* 0x171CBD9F: fld qword ptr [ebp + 0x40] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBDA2: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBDA4: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CBDA6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CBF3C; /* 0x171CBDA9: jnp 0x171cbf3c */
L_171CBDAF:
    fp_push(*(double*)ADDR(ebp + 0x48)); /* 0x171CBDAF: fld qword ptr [ebp + 0x48] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBDB2: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBDB4: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171CBDB6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171CBF3E; /* 0x171CBDB9: jnp 0x171cbf3e */
L_171CBDBF:
    fp_push(*(double*)ADDR(0x17026010)); /* 0x171CBDBF: fld qword ptr [0x17026010] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x171CBDC5: fld qword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBDC8: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBDCA: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CBDCC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBF33; /* 0x171CBDCF: je 0x171cbf33 */
L_171CBDD5:
    fp_push(*(double*)ADDR(ebp + 0x18)); /* 0x171CBDD5: fld qword ptr [ebp + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBDD8: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBDDA: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CBDDC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBF33; /* 0x171CBDDF: je 0x171cbf33 */
L_171CBDE5:
    fp_push(*(double*)ADDR(ebp + 0x20)); /* 0x171CBDE5: fld qword ptr [ebp + 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBDE8: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBDEA: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CBDEC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBF33; /* 0x171CBDEF: je 0x171cbf33 */
L_171CBDF5:
    fp_push(*(double*)ADDR(ebp + 0x28)); /* 0x171CBDF5: fld qword ptr [ebp + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBDF8: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBDFA: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CBDFC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBF33; /* 0x171CBDFF: je 0x171cbf33 */
L_171CBE05:
    fp_push(*(double*)ADDR(ebp + 0x30)); /* 0x171CBE05: fld qword ptr [ebp + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBE08: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBE0A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CBE0C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBF33; /* 0x171CBE0F: je 0x171cbf33 */
L_171CBE15:
    fp_push(*(double*)ADDR(ebp + 0x38)); /* 0x171CBE15: fld qword ptr [ebp + 0x38] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBE18: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBE1A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CBE1C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBF33; /* 0x171CBE1F: je 0x171cbf33 */
L_171CBE25:
    fp_push(*(double*)ADDR(ebp + 0x40)); /* 0x171CBE25: fld qword ptr [ebp + 0x40] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBE28: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBE2A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CBE2C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBF33; /* 0x171CBE2F: je 0x171cbf33 */
L_171CBE35:
    fp_push(*(double*)ADDR(ebp + 0x48)); /* 0x171CBE35: fld qword ptr [ebp + 0x48] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBE38: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBE3A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CBE3C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CBF35; /* 0x171CBE3F: je 0x171cbf35 */
L_171CBE45:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x171CBE45: fld qword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x80) = _v; } /* 0x171CBE48: fstp dword ptr [esi + 0x80] */
    fp_push(*(double*)ADDR(ebp + 0x18)); /* 0x171CBE4E: fld qword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x84) = _v; } /* 0x171CBE51: fstp dword ptr [esi + 0x84] */
    fp_push(*(double*)ADDR(ebp + 0x20)); /* 0x171CBE57: fld qword ptr [ebp + 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x88) = _v; } /* 0x171CBE5A: fstp dword ptr [esi + 0x88] */
    fp_push(*(double*)ADDR(ebp + 0x28)); /* 0x171CBE60: fld qword ptr [ebp + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8C) = _v; } /* 0x171CBE63: fstp dword ptr [esi + 0x8c] */
    fp_push(*(double*)ADDR(ebp + 0x30)); /* 0x171CBE69: fld qword ptr [ebp + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x90) = _v; } /* 0x171CBE6C: fstp dword ptr [esi + 0x90] */
    fp_push(*(double*)ADDR(ebp + 0x38)); /* 0x171CBE72: fld qword ptr [ebp + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x94) = _v; } /* 0x171CBE75: fstp dword ptr [esi + 0x94] */
    fp_push(*(double*)ADDR(ebp + 0x40)); /* 0x171CBE7B: fld qword ptr [ebp + 0x40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x98) = _v; } /* 0x171CBE7E: fstp dword ptr [esi + 0x98] */
    fp_push(*(double*)ADDR(ebp + 0x48)); /* 0x171CBE84: fld qword ptr [ebp + 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x9C) = _v; } /* 0x171CBE87: fstp dword ptr [esi + 0x9c] */
    fp_push(*(double*)ADDR(0x17026008)); /* 0x171CBE8D: fld qword ptr [0x17026008] */
    fp_push(*(double*)ADDR(0x17001938)); /* 0x171CBE93: fld qword ptr [0x17001938] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x171CBE99: fld qword ptr [ebp + 0x10] */
    _st[0] *= _st[2]; /* 0x171CBE9C: fmul st(2) */
    _st[0] += _st[1]; /* 0x171CBE9E: fadd st(1) */
    RECOMP_CALL(sub_1721B050); /* 0x171CBEA0: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x18)); /* 0x171CBEA5: fld qword ptr [ebp + 0x18] */
    _st[0] *= _st[2]; /* 0x171CBEA8: fmul st(2) */
    MEM32(esi + 0x100) = eax; /* 0x171CBEAA: mov dword ptr [esi + 0x100], eax */
    _st[0] += _st[1]; /* 0x171CBEB0: fadd st(1) */
    RECOMP_CALL(sub_1721B050); /* 0x171CBEB2: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x20)); /* 0x171CBEB7: fld qword ptr [ebp + 0x20] */
    _st[0] *= _st[2]; /* 0x171CBEBA: fmul st(2) */
    MEM32(esi + 0x104) = eax; /* 0x171CBEBC: mov dword ptr [esi + 0x104], eax */
    _st[0] += _st[1]; /* 0x171CBEC2: fadd st(1) */
    RECOMP_CALL(sub_1721B050); /* 0x171CBEC4: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x28)); /* 0x171CBEC9: fld qword ptr [ebp + 0x28] */
    _st[0] *= _st[2]; /* 0x171CBECC: fmul st(2) */
    MEM32(esi + 0x108) = eax; /* 0x171CBECE: mov dword ptr [esi + 0x108], eax */
    _st[0] += _st[1]; /* 0x171CBED4: fadd st(1) */
    RECOMP_CALL(sub_1721B050); /* 0x171CBED6: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x30)); /* 0x171CBEDB: fld qword ptr [ebp + 0x30] */
    _st[0] *= _st[2]; /* 0x171CBEDE: fmul st(2) */
    MEM32(esi + 0x10C) = eax; /* 0x171CBEE0: mov dword ptr [esi + 0x10c], eax */
    _st[0] += _st[1]; /* 0x171CBEE6: fadd st(1) */
    RECOMP_CALL(sub_1721B050); /* 0x171CBEE8: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x38)); /* 0x171CBEED: fld qword ptr [ebp + 0x38] */
    _st[0] *= _st[2]; /* 0x171CBEF0: fmul st(2) */
    MEM32(esi + 0x110) = eax; /* 0x171CBEF2: mov dword ptr [esi + 0x110], eax */
    _st[0] += _st[1]; /* 0x171CBEF8: fadd st(1) */
    RECOMP_CALL(sub_1721B050); /* 0x171CBEFA: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x40)); /* 0x171CBEFF: fld qword ptr [ebp + 0x40] */
    _st[0] *= _st[2]; /* 0x171CBF02: fmul st(2) */
    MEM32(esi + 0x114) = eax; /* 0x171CBF04: mov dword ptr [esi + 0x114], eax */
    _st[0] += _st[1]; /* 0x171CBF0A: fadd st(1) */
    RECOMP_CALL(sub_1721B050); /* 0x171CBF0C: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x48)); /* 0x171CBF11: fld qword ptr [ebp + 0x48] */
    _st[0] *= _st[2]; /* 0x171CBF14: fmul st(2) */
    MEM32(esi + 0x118) = eax; /* 0x171CBF16: mov dword ptr [esi + 0x118], eax */
    _st[0] += _st[1]; /* 0x171CBF1C: fadd st(1) */
    RECOMP_CALL(sub_1721B050); /* 0x171CBF1E: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171CBF23: fstp st(0) */
    _flag_a = (uint32_t)((MEM32(esi + 0x8) | 4)); _flag_b = (uint32_t)((MEM32(esi + 0x8) | 4));
    MEM32(esi + 0x8) = MEM32(esi + 0x8) | 4; /* 0x171CBF25: or dword ptr [esi + 8], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171CBF29: fstp st(0) */
    MEM32(esi + 0x11C) = eax; /* 0x171CBF2B: mov dword ptr [esi + 0x11c], eax */
    goto L_171CBF4B; /* 0x171CBF31: jmp 0x171cbf4b */
L_171CBF33:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171CBF33: fstp st(0) */
L_171CBF35:
    PUSH32(esp, 0x17025FC4u); /* 0x171CBF35: push 0x17025fc4 */
    goto L_171CBF43; /* 0x171CBF3A: jmp 0x171cbf43 */
L_171CBF3C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171CBF3C: fstp st(0) */
L_171CBF3E:
    PUSH32(esp, 0x17025F90u); /* 0x171CBF3E: push 0x17025f90 */
L_171CBF43:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CBF43: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA889); /* 0x171CBF46: call 0x171ca889 */
    RECOMP_FLAGS_IN();
L_171CBF4B:
    esi = POP32_VAL(esp); /* 0x171CBF4B: pop esi */
L_171CBF4C:
    ebp = POP32_VAL(esp); /* 0x171CBF4C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 76; { RECOMP_REGS_OUT(); return; } /* 0x171CBF4D: ret 0x48 */
    RECOMP_REGS_OUT();
}

void sub_171CBF55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CBF55u);

L_171CBF55:
    edi = edi; /* 0x171CBF55: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CBF57: push ebp */
    ebp = esp; /* 0x171CBF58: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x171CBF5A: sub esp, 0x40 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CBF5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x171CBF5F: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC122; /* 0x171CBF62: je 0x171cc122 */
L_171CBF68:
    ecx = MEM32(ebp + 0xC); /* 0x171CBF68: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, eax */ /* 0x171CBF6B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC122; /* 0x171CBF6D: je 0x171cc122 */
L_171CBF73:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x171CBF73: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171CBF76: push ebx */
    PUSH32(esp, esi); /* 0x171CBF77: push esi */
    PUSH32(esp, edi); /* 0x171CBF78: push edi */
    if (CMP_L(_flag_a, _flag_b)) goto L_171CC112; /* 0x171CBF79: jl 0x171cc112 */
L_171CBF7F:
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x171CBF7F: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171CC112; /* 0x171CBF82: jl 0x171cc112 */
L_171CBF88:
    /* cmp MEM32(ebp + 0x18), eax */ /* 0x171CBF88: cmp dword ptr [ebp + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171CC112; /* 0x171CBF8B: jl 0x171cc112 */
L_171CBF91:
    /* cmp MEM32(ebp + 0x1C), eax */ /* 0x171CBF91: cmp dword ptr [ebp + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171CC112; /* 0x171CBF94: jl 0x171cc112 */
L_171CBF9A:
    ebx = MEM32(ebp + 0x20); /* 0x171CBF9A: mov ebx, dword ptr [ebp + 0x20] */
    /* cmp ebx, eax */ /* 0x171CBF9D: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171CC112; /* 0x171CBF9F: jl 0x171cc112 */
L_171CBFA5:
    edi = MEM32(ebp + 0x24); /* 0x171CBFA5: mov edi, dword ptr [ebp + 0x24] */
    /* cmp edi, eax */ /* 0x171CBFA8: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171CC112; /* 0x171CBFAA: jl 0x171cc112 */
L_171CBFB0:
    esi = MEM32(ebp + 0x28); /* 0x171CBFB0: mov esi, dword ptr [ebp + 0x28] */
    /* cmp esi, eax */ /* 0x171CBFB3: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171CC112; /* 0x171CBFB5: jl 0x171cc112 */
L_171CBFBB:
    edx = MEM32(ebp + 0x2C); /* 0x171CBFBB: mov edx, dword ptr [ebp + 0x2c] */
    /* cmp edx, eax */ /* 0x171CBFBE: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171CC112; /* 0x171CBFC0: jl 0x171cc112 */
L_171CBFC6:
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x171CBFC6: fild dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171CBFC9: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(0x17026018)); /* 0x171CBFCC: fld qword ptr [0x17026018] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171CBFD2: fld qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBFD5: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBFD7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CBFD9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC109; /* 0x171CBFDC: je 0x171cc109 */
L_171CBFE2:
    fp_push((double)(int32_t)MEM32(ebp + 0x14)); /* 0x171CBFE2: fild dword ptr [ebp + 0x14] */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x171CBFE5: fst qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBFE8: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBFEA: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CBFEC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC109; /* 0x171CBFEF: je 0x171cc109 */
L_171CBFF5:
    fp_push((double)(int32_t)MEM32(ebp + 0x18)); /* 0x171CBFF5: fild dword ptr [ebp + 0x18] */
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x171CBFF8: fst qword ptr [ebp - 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CBFFB: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CBFFD: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CBFFF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC109; /* 0x171CC002: je 0x171cc109 */
L_171CC008:
    fp_push((double)(int32_t)MEM32(ebp + 0x1C)); /* 0x171CC008: fild dword ptr [ebp + 0x1c] */
    *(double*)ADDR(ebp + (-0x20)) = _st[0]; /* 0x171CC00B: fst qword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CC00E: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CC010: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CC012: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC109; /* 0x171CC015: je 0x171cc109 */
L_171CC01B:
    fp_push((double)(int32_t)MEM32(ebp + 0x20)); /* 0x171CC01B: fild dword ptr [ebp + 0x20] */
    *(double*)ADDR(ebp + (-0x28)) = _st[0]; /* 0x171CC01E: fst qword ptr [ebp - 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CC021: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CC023: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CC025: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC109; /* 0x171CC028: je 0x171cc109 */
L_171CC02E:
    fp_push((double)(int32_t)MEM32(ebp + 0x24)); /* 0x171CC02E: fild dword ptr [ebp + 0x24] */
    *(double*)ADDR(ebp + (-0x30)) = _st[0]; /* 0x171CC031: fst qword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CC034: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CC036: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CC038: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC109; /* 0x171CC03B: je 0x171cc109 */
L_171CC041:
    fp_push((double)(int32_t)MEM32(ebp + 0x28)); /* 0x171CC041: fild dword ptr [ebp + 0x28] */
    *(double*)ADDR(ebp + (-0x38)) = _st[0]; /* 0x171CC044: fst qword ptr [ebp - 0x38] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CC047: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CC049: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CC04B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC109; /* 0x171CC04E: je 0x171cc109 */
L_171CC054:
    fp_push((double)(int32_t)MEM32(ebp + 0x2C)); /* 0x171CC054: fild dword ptr [ebp + 0x2c] */
    *(double*)ADDR(ebp + (-0x40)) = _st[0]; /* 0x171CC057: fst qword ptr [ebp - 0x40] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CC05A: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CC05C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CC05E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC10B; /* 0x171CC061: je 0x171cc10b */
L_171CC067:
    fp_push(*(double*)ADDR(0x170063A0)); /* 0x171CC067: fld qword ptr [0x170063a0] */
    eax = MEM32(ebp + 0x10); /* 0x171CC06D: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171CC070: fld qword ptr [ebp - 8] */
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) | 4)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) | 4));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) | 4; /* 0x171CC073: or dword ptr [ecx + 8], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x171CC077: fmul st(1) */
    MEM32(ecx + 0x100) = eax; /* 0x171CC079: mov dword ptr [ecx + 0x100], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x80) = _v; } /* 0x171CC07F: fstp dword ptr [ecx + 0x80] */
    eax = MEM32(ebp + 0x14); /* 0x171CC085: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x171CC088: fld qword ptr [ebp - 0x10] */
    MEM32(ecx + 0x104) = eax; /* 0x171CC08B: mov dword ptr [ecx + 0x104], eax */
    _st[0] *= _st[1]; /* 0x171CC091: fmul st(1) */
    eax = MEM32(ebp + 0x18); /* 0x171CC093: mov eax, dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x84) = _v; } /* 0x171CC096: fstp dword ptr [ecx + 0x84] */
    MEM32(ecx + 0x108) = eax; /* 0x171CC09C: mov dword ptr [ecx + 0x108], eax */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x171CC0A2: fld qword ptr [ebp - 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x171CC0A5: mov eax, dword ptr [ebp + 0x1c] */
    _st[0] *= _st[1]; /* 0x171CC0A8: fmul st(1) */
    MEM32(ecx + 0x10C) = eax; /* 0x171CC0AA: mov dword ptr [ecx + 0x10c], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x88) = _v; } /* 0x171CC0B0: fstp dword ptr [ecx + 0x88] */
    MEM32(ecx + 0x110) = ebx; /* 0x171CC0B6: mov dword ptr [ecx + 0x110], ebx */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x171CC0BC: fld qword ptr [ebp - 0x20] */
    MEM32(ecx + 0x114) = edi; /* 0x171CC0BF: mov dword ptr [ecx + 0x114], edi */
    _st[0] *= _st[1]; /* 0x171CC0C5: fmul st(1) */
    MEM32(ecx + 0x118) = esi; /* 0x171CC0C7: mov dword ptr [ecx + 0x118], esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8C) = _v; } /* 0x171CC0CD: fstp dword ptr [ecx + 0x8c] */
    MEM32(ecx + 0x11C) = edx; /* 0x171CC0D3: mov dword ptr [ecx + 0x11c], edx */
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x171CC0D9: fld qword ptr [ebp - 0x28] */
    _st[0] *= _st[1]; /* 0x171CC0DC: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x90) = _v; } /* 0x171CC0DE: fstp dword ptr [ecx + 0x90] */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x171CC0E4: fld qword ptr [ebp - 0x30] */
    _st[0] *= _st[1]; /* 0x171CC0E7: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x94) = _v; } /* 0x171CC0E9: fstp dword ptr [ecx + 0x94] */
    fp_push(*(double*)ADDR(ebp + (-0x38))); /* 0x171CC0EF: fld qword ptr [ebp - 0x38] */
    _st[0] *= _st[1]; /* 0x171CC0F2: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x98) = _v; } /* 0x171CC0F4: fstp dword ptr [ecx + 0x98] */
    fp_push(*(double*)ADDR(ebp + (-0x40))); /* 0x171CC0FA: fld qword ptr [ebp - 0x40] */
    _st[0] *= _st[1]; /* 0x171CC0FD: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x9C) = _v; } /* 0x171CC0FF: fstp dword ptr [ecx + 0x9c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171CC105: fstp st(0) */
    goto L_171CC11F; /* 0x171CC107: jmp 0x171cc11f */
L_171CC109:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171CC109: fstp st(0) */
L_171CC10B:
    PUSH32(esp, 0x17025FC4u); /* 0x171CC10B: push 0x17025fc4 */
    goto L_171CC117; /* 0x171CC110: jmp 0x171cc117 */
L_171CC112:
    PUSH32(esp, 0x17025F90u); /* 0x171CC112: push 0x17025f90 */
L_171CC117:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC117: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA889); /* 0x171CC11A: call 0x171ca889 */
    RECOMP_FLAGS_IN();
L_171CC11F:
    edi = POP32_VAL(esp); /* 0x171CC11F: pop edi */
    esi = POP32_VAL(esp); /* 0x171CC120: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CC121: pop ebx */
L_171CC122:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CC122: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x171CC123: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_171CC12B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CC12Bu);

L_171CC12B:
    edi = edi; /* 0x171CC12B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CC12D: push ebp */
    ebp = esp; /* 0x171CC12E: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171CC130: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC1A7; /* 0x171CC134: je 0x171cc1a7 */
L_171CC136:
    PUSH32(esp, esi); /* 0x171CC136: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171CC137: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x171CC13A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC1A6; /* 0x171CC13C: je 0x171cc1a6 */
L_171CC13E:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x171CC13E: fld qword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17026010)); /* 0x171CC141: fcomp qword ptr [0x17026010] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CC147: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171CC149: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CC163; /* 0x171CC14C: jne 0x171cc163 */
L_171CC14E:
    PUSH32(esp, 0x17026030u); /* 0x171CC14E: push 0x17026030 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC153: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA889); /* 0x171CC156: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x17026010)); /* 0x171CC15B: fld qword ptr [0x17026010] */
    goto L_171CC166; /* 0x171CC161: jmp 0x171cc166 */
L_171CC163:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x171CC163: fld qword ptr [ebp + 0x10] */
L_171CC166:
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x28) = _v; } /* 0x171CC166: fst dword ptr [esi + 0x28] */
    fp_push(*(double*)ADDR(0x17026008)); /* 0x171CC169: fld qword ptr [0x17026008] */
    _st[0] *= _st[1]; /* 0x171CC16F: fmul st(1) */
    _st[0] += *(double*)ADDR(0x17001938); /* 0x171CC171: fadd qword ptr [0x17001938] */
    RECOMP_CALL(sub_1721B050); /* 0x171CC177: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171CC17C: fld qword ptr [0x17001d90] */
    _flag_a = (uint32_t)((MEM32(esi + 0x8) | 1)); _flag_b = (uint32_t)((MEM32(esi + 0x8) | 1));
    MEM32(esi + 0x8) = MEM32(esi + 0x8) | 1; /* 0x171CC182: or dword ptr [esi + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[1]); /* 0x171CC186: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171CC188: fucompp  */
    fp_pop(); fp_pop();
    MEM32(esi + 0xFC) = eax; /* 0x171CC18A: mov dword ptr [esi + 0xfc], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171CC190: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171CC192: fstp st(0) */
    /* test HI8(eax), 0x44u */ /* 0x171CC194: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171CC1A6; /* 0x171CC197: jp 0x171cc1a6 */
L_171CC199:
    PUSH32(esp, 0x17026020u); /* 0x171CC199: push 0x17026020 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC19E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA889); /* 0x171CC1A1: call 0x171ca889 */
    RECOMP_FLAGS_IN();
L_171CC1A6:
    esi = POP32_VAL(esp); /* 0x171CC1A6: pop esi */
L_171CC1A7:
    ebp = POP32_VAL(esp); /* 0x171CC1A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171CC1A8: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171CC1B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CC1B0u);

L_171CC1B0:
    edi = edi; /* 0x171CC1B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CC1B2: push ebp */
    ebp = esp; /* 0x171CC1B3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171CC1B5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171CC1B6: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x171CC1B9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC21F; /* 0x171CC1BB: je 0x171cc21f */
L_171CC1BD:
    PUSH32(esp, esi); /* 0x171CC1BD: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171CC1BE: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x171CC1C1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC21E; /* 0x171CC1C3: je 0x171cc21e */
L_171CC1C5:
    PUSH32(esp, edi); /* 0x171CC1C5: push edi */
    edi = 0x7FFFFFFFu; /* 0x171CC1C6: mov edi, 0x7fffffff */
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x171CC1CB: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CC1DD; /* 0x171CC1CE: jle 0x171cc1dd */
L_171CC1D0:
    PUSH32(esp, 0x17026030u); /* 0x171CC1D0: push 0x17026030 */
    PUSH32(esp, ebx); /* 0x171CC1D5: push ebx */
    RECOMP_CALL(sub_171CA889); /* 0x171CC1D6: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    goto L_171CC1F5; /* 0x171CC1DB: jmp 0x171cc1f5 */
L_171CC1DD:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171CC1DD: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171CC1F2; /* 0x171CC1E1: jge 0x171cc1f2 */
L_171CC1E3:
    PUSH32(esp, 0x1702604Cu); /* 0x171CC1E3: push 0x1702604c */
    PUSH32(esp, ebx); /* 0x171CC1E8: push ebx */
    RECOMP_CALL(sub_171CA889); /* 0x171CC1E9: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171CC1EE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171CC1F5; /* 0x171CC1F0: jmp 0x171cc1f5 */
L_171CC1F2:
    edi = MEM32(ebp + 0x10); /* 0x171CC1F2: mov edi, dword ptr [ebp + 0x10] */
L_171CC1F5:
    _flag_a = (uint32_t)((MEM32(esi + 0x8) | 1)); _flag_b = (uint32_t)((MEM32(esi + 0x8) | 1));
    MEM32(esi + 0x8) = MEM32(esi + 0x8) | 1; /* 0x171CC1F5: or dword ptr [esi + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edi; /* 0x171CC1F9: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x171CC1FC: fild dword ptr [ebp + 0x10] */
    MEM32(esi + 0xFC) = edi; /* 0x171CC1FF: mov dword ptr [esi + 0xfc], edi */
    /* test edi, edi */ /* 0x171CC205: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x171CC207: pop edi */
    _st[0] *= *(double*)ADDR(0x170063A0); /* 0x171CC208: fmul qword ptr [0x170063a0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x171CC20E: fstp dword ptr [esi + 0x28] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CC21E; /* 0x171CC211: jne 0x171cc21e */
L_171CC213:
    PUSH32(esp, 0x17026020u); /* 0x171CC213: push 0x17026020 */
    PUSH32(esp, ebx); /* 0x171CC218: push ebx */
    RECOMP_CALL(sub_171CA889); /* 0x171CC219: call 0x171ca889 */
    RECOMP_FLAGS_IN();
L_171CC21E:
    esi = POP32_VAL(esp); /* 0x171CC21E: pop esi */
L_171CC21F:
    ebx = POP32_VAL(esp); /* 0x171CC21F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171CC220: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171CC221: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171CC229(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CC229u);

L_171CC229:
    edi = edi; /* 0x171CC229: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CC22B: push ebp */
    ebp = esp; /* 0x171CC22C: mov ebp, esp */
    PUSH32(esp, edi); /* 0x171CC22E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171CC22F: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x171CC232: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC2B0; /* 0x171CC234: je 0x171cc2b0 */
L_171CC236:
    PUSH32(esp, esi); /* 0x171CC236: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171CC237: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x171CC23A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC2AF; /* 0x171CC23C: je 0x171cc2af */
L_171CC23E:
    /* cmp MEM16(esi + 0x14), 0 */ /* 0x171CC23E: cmp word ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0x14)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CC252; /* 0x171CC243: jne 0x171cc252 */
L_171CC245:
    PUSH32(esp, 0x17026098u); /* 0x171CC245: push 0x17026098 */
L_171CC24A:
    PUSH32(esp, edi); /* 0x171CC24A: push edi */
    RECOMP_CALL(sub_171CA889); /* 0x171CC24B: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    goto L_171CC2AF; /* 0x171CC250: jmp 0x171cc2af */
L_171CC252:
    PUSH32(esp, 0); /* 0x171CC252: push 0 */
    PUSH32(esp, 8); /* 0x171CC254: push 8 */
    PUSH32(esp, esi); /* 0x171CC256: push esi */
    PUSH32(esp, edi); /* 0x171CC257: push edi */
    RECOMP_CALL(sub_171CAAF1); /* 0x171CC258: call 0x171caaf1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x200u); /* 0x171CC25D: push 0x200 */
    PUSH32(esp, edi); /* 0x171CC262: push edi */
    RECOMP_CALL(sub_171D1E85); /* 0x171CC263: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CC268: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x1F4) = eax; /* 0x171CC26A: mov dword ptr [edi + 0x1f4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CC279; /* 0x171CC270: jne 0x171cc279 */
L_171CC272:
    PUSH32(esp, 0x1702606Cu); /* 0x171CC272: push 0x1702606c */
    RECOMP_BACKEDGE();
    goto L_171CC24A; /* 0x171CC277: jmp 0x171cc24a */
L_171CC279:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CC279: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0x14), LO16(eax) */ /* 0x171CC27B: cmp word ptr [esi + 0x14], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x14)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CC29B; /* 0x171CC27F: jbe 0x171cc29b */
L_171CC281:
    edx = MEM32(ebp + 0x10); /* 0x171CC281: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(edi + 0x1F4); /* 0x171CC284: mov ecx, dword ptr [edi + 0x1f4] */
    SET_LO16(edx, MEM16(edx + eax * 2)); /* 0x171CC28A: mov dx, word ptr [edx + eax*2] */
    MEM16(ecx + eax * 2) = (uint16_t)(LO16(edx)); /* 0x171CC28E: mov word ptr [ecx + eax*2], dx */
    ecx = (uint32_t)MEM16(esi + 0x14); /* 0x171CC292: movzx ecx, word ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CC296: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x171CC297: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CC281; /* 0x171CC299: jl 0x171cc281 */
L_171CC29B:
    eax = MEM32(edi + 0x1F4); /* 0x171CC29B: mov eax, dword ptr [edi + 0x1f4] */
    _flag_a = (uint32_t)((MEM32(esi + 0x8) | 0x40u)); _flag_b = (uint32_t)((MEM32(esi + 0x8) | 0x40u));
    MEM32(esi + 0x8) = MEM32(esi + 0x8) | 0x40u; /* 0x171CC2A1: or dword ptr [esi + 8], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(esi + 0xB8) | 8)); _flag_b = (uint32_t)((MEM32(esi + 0xB8) | 8));
    MEM32(esi + 0xB8) = MEM32(esi + 0xB8) | 8; /* 0x171CC2A5: or dword ptr [esi + 0xb8], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x7C) = eax; /* 0x171CC2AC: mov dword ptr [esi + 0x7c], eax */
L_171CC2AF:
    esi = POP32_VAL(esp); /* 0x171CC2AF: pop esi */
L_171CC2B0:
    edi = POP32_VAL(esp); /* 0x171CC2B0: pop edi */
    ebp = POP32_VAL(esp); /* 0x171CC2B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171CC2B2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171CC2BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CC2BAu);

L_171CC2BA:
    edi = edi; /* 0x171CC2BA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CC2BC: push ebp */
    ebp = esp; /* 0x171CC2BD: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171CC2BF: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171CC2C0: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x171CC2C3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC457; /* 0x171CC2C5: je 0x171cc457 */
L_171CC2CB:
    PUSH32(esp, esi); /* 0x171CC2CB: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171CC2CC: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x171CC2CF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC456; /* 0x171CC2D1: je 0x171cc456 */
L_171CC2D7:
    PUSH32(esp, edi); /* 0x171CC2D7: push edi */
    edi = MEM32(ebp + 0x10); /* 0x171CC2D8: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x171CC2DB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC2E5; /* 0x171CC2DD: je 0x171cc2e5 */
L_171CC2DF:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x171CC2DF: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CC2F0; /* 0x171CC2E3: jne 0x171cc2f0 */
L_171CC2E5:
    PUSH32(esp, 0x1702620Cu); /* 0x171CC2E5: push 0x1702620c */
    PUSH32(esp, ebx); /* 0x171CC2EA: push ebx */
    RECOMP_CALL(sub_171CA861); /* 0x171CC2EB: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CC2F0:
    eax = 0x000F4240u; /* 0x171CC2F0: mov eax, 0xf4240 */
    /* cmp edi, eax */ /* 0x171CC2F5: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171CC2FE; /* 0x171CC2F7: ja 0x171cc2fe */
L_171CC2F9:
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x171CC2F9: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CC309; /* 0x171CC2FC: jbe 0x171cc309 */
L_171CC2FE:
    PUSH32(esp, 0x170261E4u); /* 0x171CC2FE: push 0x170261e4 */
    PUSH32(esp, ebx); /* 0x171CC303: push ebx */
    RECOMP_CALL(sub_171CA861); /* 0x171CC304: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CC309:
    eax = 0x7FFFFFFFu; /* 0x171CC309: mov eax, 0x7fffffff */
    /* cmp edi, eax */ /* 0x171CC30E: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171CC317; /* 0x171CC310: ja 0x171cc317 */
L_171CC312:
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x171CC312: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CC322; /* 0x171CC315: jbe 0x171cc322 */
L_171CC317:
    PUSH32(esp, 0x170261C8u); /* 0x171CC317: push 0x170261c8 */
    PUSH32(esp, ebx); /* 0x171CC31C: push ebx */
    RECOMP_CALL(sub_171CA861); /* 0x171CC31D: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CC322:
    /* cmp edi, 0x1FFFFF7Eu */ /* 0x171CC322: cmp edi, 0x1fffff7e */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1FFFFF7Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CC335; /* 0x171CC328: jbe 0x171cc335 */
L_171CC32A:
    PUSH32(esp, 0x17026198u); /* 0x171CC32A: push 0x17026198 */
    PUSH32(esp, ebx); /* 0x171CC32F: push ebx */
    RECOMP_CALL(sub_171CA889); /* 0x171CC330: call 0x171ca889 */
    RECOMP_FLAGS_IN();
L_171CC335:
    eax = MEM32(ebp + 0x18); /* 0x171CC335: mov eax, dword ptr [ebp + 0x18] */
    /* cmp eax, 1 */ /* 0x171CC338: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC35C; /* 0x171CC33B: je 0x171cc35c */
L_171CC33D:
    /* cmp eax, 2 */ /* 0x171CC33D: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC35C; /* 0x171CC340: je 0x171cc35c */
L_171CC342:
    /* cmp eax, 4 */ /* 0x171CC342: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC35C; /* 0x171CC345: je 0x171cc35c */
L_171CC347:
    /* cmp eax, 8 */ /* 0x171CC347: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC35C; /* 0x171CC34A: je 0x171cc35c */
L_171CC34C:
    /* cmp eax, 0x10u */ /* 0x171CC34C: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC35C; /* 0x171CC34F: je 0x171cc35c */
L_171CC351:
    PUSH32(esp, 0x1702617Cu); /* 0x171CC351: push 0x1702617c */
    PUSH32(esp, ebx); /* 0x171CC356: push ebx */
    RECOMP_CALL(sub_171CA861); /* 0x171CC357: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CC35C:
    ebx = MEM32(ebp + 0x1C); /* 0x171CC35C: mov ebx, dword ptr [ebp + 0x1c] */
    /* test ebx, ebx */ /* 0x171CC35F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171CC372; /* 0x171CC361: jl 0x171cc372 */
L_171CC363:
    /* cmp ebx, 1 */ /* 0x171CC363: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC372; /* 0x171CC366: je 0x171cc372 */
L_171CC368:
    /* cmp ebx, 5 */ /* 0x171CC368: cmp ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC372; /* 0x171CC36B: je 0x171cc372 */
L_171CC36D:
    /* cmp ebx, 6 */ /* 0x171CC36D: cmp ebx, 6 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CC37F; /* 0x171CC370: jle 0x171cc37f */
L_171CC372:
    PUSH32(esp, 0x17026160u); /* 0x171CC372: push 0x17026160 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC377: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA861); /* 0x171CC37A: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CC37F:
    /* cmp ebx, 3 */ /* 0x171CC37F: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CC38A; /* 0x171CC382: jne 0x171cc38a */
L_171CC384:
    /* cmp MEM32(ebp + 0x18), 8 */ /* 0x171CC384: cmp dword ptr [ebp + 0x18], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171CC39F; /* 0x171CC388: jg 0x171cc39f */
L_171CC38A:
    /* cmp ebx, 2 */ /* 0x171CC38A: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC399; /* 0x171CC38D: je 0x171cc399 */
L_171CC38F:
    /* cmp ebx, 4 */ /* 0x171CC38F: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC399; /* 0x171CC392: je 0x171cc399 */
L_171CC394:
    /* cmp ebx, 6 */ /* 0x171CC394: cmp ebx, 6 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CC3AC; /* 0x171CC397: jne 0x171cc3ac */
L_171CC399:
    /* cmp MEM32(ebp + 0x18), 8 */ /* 0x171CC399: cmp dword ptr [ebp + 0x18], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171CC3AC; /* 0x171CC39D: jge 0x171cc3ac */
L_171CC39F:
    PUSH32(esp, 0x1702612Cu); /* 0x171CC39F: push 0x1702612c */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC3A4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA861); /* 0x171CC3A7: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CC3AC:
    /* cmp MEM32(ebp + 0x20), 2 */ /* 0x171CC3AC: cmp dword ptr [ebp + 0x20], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171CC3BF; /* 0x171CC3B0: jl 0x171cc3bf */
L_171CC3B2:
    PUSH32(esp, 0x17026108u); /* 0x171CC3B2: push 0x17026108 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC3B7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA861); /* 0x171CC3BA: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CC3BF:
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x171CC3BF: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC3D2; /* 0x171CC3C3: je 0x171cc3d2 */
L_171CC3C5:
    PUSH32(esp, 0x170260E4u); /* 0x171CC3C5: push 0x170260e4 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC3CA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA861); /* 0x171CC3CD: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CC3D2:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x171CC3D2: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC3E5; /* 0x171CC3D6: je 0x171cc3e5 */
L_171CC3D8:
    PUSH32(esp, 0x170260C4u); /* 0x171CC3D8: push 0x170260c4 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC3DD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA861); /* 0x171CC3E0: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CC3E5:
    /* cmp LO8(ebx), 3 */ /* 0x171CC3E5: cmp bl, 3 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + 0x14); /* 0x171CC3E8: mov eax, dword ptr [ebp + 0x14] */
    SET_LO8(ecx, MEM8(ebp + 0x18)); /* 0x171CC3EB: mov cl, byte ptr [ebp + 0x18] */
    MEM32(esi + 0x4) = eax; /* 0x171CC3EE: mov dword ptr [esi + 4], eax */
    SET_LO8(eax, MEM8(ebp + 0x24)); /* 0x171CC3F1: mov al, byte ptr [ebp + 0x24] */
    MEM8(esi + 0x1A) = (uint8_t)(LO8(eax)); /* 0x171CC3F4: mov byte ptr [esi + 0x1a], al */
    SET_LO8(eax, MEM8(ebp + 0x28)); /* 0x171CC3F7: mov al, byte ptr [ebp + 0x28] */
    MEM8(esi + 0x1B) = (uint8_t)(LO8(eax)); /* 0x171CC3FA: mov byte ptr [esi + 0x1b], al */
    SET_LO8(eax, MEM8(ebp + 0x20)); /* 0x171CC3FD: mov al, byte ptr [ebp + 0x20] */
    MEM32(esi) = edi; /* 0x171CC400: mov dword ptr [esi], edi */
    MEM8(esi + 0x18) = (uint8_t)(LO8(ecx)); /* 0x171CC402: mov byte ptr [esi + 0x18], cl */
    MEM8(esi + 0x19) = (uint8_t)(LO8(ebx)); /* 0x171CC405: mov byte ptr [esi + 0x19], bl */
    MEM8(esi + 0x1C) = (uint8_t)(LO8(eax)); /* 0x171CC408: mov byte ptr [esi + 0x1c], al */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC418; /* 0x171CC40B: je 0x171cc418 */
L_171CC40D:
    /* test LO8(ebx), 2 */ /* 0x171CC40D: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC418; /* 0x171CC410: je 0x171cc418 */
L_171CC412:
    MEM8(esi + 0x1D) = (uint8_t)(3); /* 0x171CC412: mov byte ptr [esi + 0x1d], 3 */
    goto L_171CC41C; /* 0x171CC416: jmp 0x171cc41c */
L_171CC418:
    MEM8(esi + 0x1D) = (uint8_t)(1); /* 0x171CC418: mov byte ptr [esi + 0x1d], 1 */
L_171CC41C:
    /* test LO8(ebx), 4 */ /* 0x171CC41C: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC424; /* 0x171CC41F: je 0x171cc424 */
L_171CC421:
    _flag_a = (uint32_t)(MEM8(esi + 0x1D)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(esi + 0x1D) = (uint8_t)(MEM8(esi + 0x1D) + 1); /* 0x171CC421: inc byte ptr [esi + 0x1d] */
    _flag_k = FK_NARROW(FK_INC, 24);
L_171CC424:
    SET_LO8(eax, MEM8(esi + 0x1D)); /* 0x171CC424: mov al, byte ptr [esi + 0x1d] */
    { int32_t _r = (int32_t)(int8_t)LO8(eax) * (int8_t)(LO8(ecx)); /* 0x171CC427: imul cl */
      SET_LO16(eax, (uint16_t)_r); uint32_t _ov = _r != (int8_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    /* cmp edi, 0x1FFFFF7Eu */ /* 0x171CC429: cmp edi, 0x1fffff7e */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1FFFFF7Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(esi + 0x1E) = (uint8_t)(LO8(eax)); /* 0x171CC42F: mov byte ptr [esi + 0x1e], al */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CC43A; /* 0x171CC432: jbe 0x171cc43a */
L_171CC434:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x171CC434: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171CC455; /* 0x171CC438: jmp 0x171cc455 */
L_171CC43A:
    /* cmp LO8(eax), 8 */ /* 0x171CC43A: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = (uint32_t)LO8(eax); /* 0x171CC43C: movzx eax, al */
    if (CMP_B(_flag_a, _flag_b)) goto L_171CC449; /* 0x171CC43F: jb 0x171cc449 */
L_171CC441:
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171CC441: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x171CC441: shr eax, 3 */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x171CC444: imul eax, edi */
    goto L_171CC452; /* 0x171CC447: jmp 0x171cc452 */
L_171CC449:
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x171CC449: imul eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x171CC44C: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171CC44F: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x171CC44F: shr eax, 3 */
L_171CC452:
    MEM32(esi + 0xC) = eax; /* 0x171CC452: mov dword ptr [esi + 0xc], eax */
L_171CC455:
    edi = POP32_VAL(esp); /* 0x171CC455: pop edi */
L_171CC456:
    esi = POP32_VAL(esp); /* 0x171CC456: pop esi */
L_171CC457:
    ebx = POP32_VAL(esp); /* 0x171CC457: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171CC458: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x171CC459: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_171CC461(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CC461u);

L_171CC461:
    edi = edi; /* 0x171CC461: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CC463: push ebp */
    ebp = esp; /* 0x171CC464: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171CC466: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC489; /* 0x171CC46A: je 0x171cc489 */
L_171CC46C:
    eax = MEM32(ebp + 0xC); /* 0x171CC46C: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171CC46F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC489; /* 0x171CC471: je 0x171cc489 */
L_171CC473:
    ecx = MEM32(ebp + 0x10); /* 0x171CC473: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((MEM8(eax + 0x9) | 1)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x9) | 1)) << 24;
    MEM8(eax + 0x9) = (uint8_t)(MEM8(eax + 0x9) | 1); /* 0x171CC476: or byte ptr [eax + 9], 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax + 0x64) = ecx; /* 0x171CC47A: mov dword ptr [eax + 0x64], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x171CC47D: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x68) = ecx; /* 0x171CC480: mov dword ptr [eax + 0x68], ecx */
    SET_LO8(ecx, MEM8(ebp + 0x18)); /* 0x171CC483: mov cl, byte ptr [ebp + 0x18] */
    MEM8(eax + 0x6C) = (uint8_t)(LO8(ecx)); /* 0x171CC486: mov byte ptr [eax + 0x6c], cl */
L_171CC489:
    ebp = POP32_VAL(esp); /* 0x171CC489: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171CC48A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171CC492(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CC492u);

L_171CC492:
    edi = edi; /* 0x171CC492: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CC494: push ebp */
    ebp = esp; /* 0x171CC495: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171CC497: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC609; /* 0x171CC49B: je 0x171cc609 */
L_171CC4A1:
    PUSH32(esp, ebx); /* 0x171CC4A1: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171CC4A2: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x171CC4A5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC608; /* 0x171CC4A7: je 0x171cc608 */
L_171CC4AD:
    eax = MEM32(ebp + 0x10); /* 0x171CC4AD: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x171CC4B0: push esi */
    esi = eax + 0x1; /* 0x171CC4B1: lea esi, [eax + 1] */
L_171CC4B4:
    SET_LO8(ecx, MEM8(eax)); /* 0x171CC4B4: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CC4B6: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171CC4B7: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CC4B4; /* 0x171CC4B9: jne 0x171cc4b4 */
L_171CC4BB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171CC4BB: sub eax, esi */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x171CC4BD: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171CC4C0: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC4C1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1E85); /* 0x171CC4C4: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CC4C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xA0) = eax; /* 0x171CC4CB: mov dword ptr [ebx + 0xa0], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CC4E5; /* 0x171CC4D1: jne 0x171cc4e5 */
L_171CC4D3:
    PUSH32(esp, 0x170262A8u); /* 0x171CC4D3: push 0x170262a8 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC4D8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA889); /* 0x171CC4DB: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    goto L_171CC607; /* 0x171CC4E0: jmp 0x171cc607 */
L_171CC4E5:
    ecx = esi; /* 0x171CC4E5: mov ecx, esi */
    esi = MEM32(ebp + 0x10); /* 0x171CC4E7: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x171CC4EA: push edi */
    edi = eax; /* 0x171CC4EB: mov edi, eax */
    eax = ecx; /* 0x171CC4ED: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CC4EF: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171CC4EF: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CC4F2: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171CC4F4: mov ecx, eax */
    eax = MEM32(ebp + 0x14); /* 0x171CC4F6: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171CC4F9: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171CC4FC: rep movsb byte ptr es:[edi], byte ptr [esi] */
    MEM32(ebx + 0xA4) = eax; /* 0x171CC4FE: mov dword ptr [ebx + 0xa4], eax */
    eax = MEM32(ebp + 0x18); /* 0x171CC504: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebx + 0xA8) = eax; /* 0x171CC507: mov dword ptr [ebx + 0xa8], eax */
    SET_LO8(eax, MEM8(ebp + 0x1C)); /* 0x171CC50D: mov al, byte ptr [ebp + 0x1c] */
    MEM8(ebx + 0xB4) = (uint8_t)(LO8(eax)); /* 0x171CC510: mov byte ptr [ebx + 0xb4], al */
    SET_LO8(eax, MEM8(ebp + 0x20)); /* 0x171CC516: mov al, byte ptr [ebp + 0x20] */
    MEM8(ebx + 0xB5) = (uint8_t)(LO8(eax)); /* 0x171CC519: mov byte ptr [ebx + 0xb5], al */
    eax = MEM32(ebp + 0x24); /* 0x171CC51F: mov eax, dword ptr [ebp + 0x24] */
    esi = eax + 0x1; /* 0x171CC522: lea esi, [eax + 1] */
L_171CC525:
    SET_LO8(ecx, MEM8(eax)); /* 0x171CC525: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CC527: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171CC528: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CC525; /* 0x171CC52A: jne 0x171cc525 */
L_171CC52C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171CC52C: sub eax, esi */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x171CC52E: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171CC531: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC532: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1E85); /* 0x171CC535: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CC53A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xAC) = eax; /* 0x171CC53C: mov dword ptr [ebx + 0xac], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CC556; /* 0x171CC542: jne 0x171cc556 */
L_171CC544:
    PUSH32(esp, 0x17026284u); /* 0x171CC544: push 0x17026284 */
L_171CC549:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC549: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA889); /* 0x171CC54C: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    goto L_171CC606; /* 0x171CC551: jmp 0x171cc606 */
L_171CC556:
    ecx = esi; /* 0x171CC556: mov ecx, esi */
    esi = MEM32(ebp + 0x24); /* 0x171CC558: mov esi, dword ptr [ebp + 0x24] */
    edi = eax; /* 0x171CC55B: mov edi, eax */
    eax = ecx; /* 0x171CC55D: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CC55F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171CC55F: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CC562: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171CC564: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171CC566: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171CC569: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + 0x20); /* 0x171CC56B: mov esi, dword ptr [ebp + 0x20] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x171CC56E: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x171CC56E: shl esi, 2 */
    eax = esi + 0x4; /* 0x171CC571: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x171CC574: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC575: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1E85); /* 0x171CC578: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171CC57D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x171CC57F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0xB0) = eax; /* 0x171CC581: mov dword ptr [ebx + 0xb0], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CC590; /* 0x171CC587: jne 0x171cc590 */
L_171CC589:
    PUSH32(esp, 0x1702625Cu); /* 0x171CC589: push 0x1702625c */
    RECOMP_BACKEDGE();
    goto L_171CC549; /* 0x171CC58E: jmp 0x171cc549 */
L_171CC590:
    /* cmp MEM32(ebp + 0x20), ecx */ /* 0x171CC590: cmp dword ptr [ebp + 0x20], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + eax) = ecx; /* 0x171CC593: mov dword ptr [esi + eax], ecx */
    MEM32(ebp + 0x10) = ecx; /* 0x171CC596: mov dword ptr [ebp + 0x10], ecx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CC5FB; /* 0x171CC599: jle 0x171cc5fb */
L_171CC59B:
    esi = MEM32(ebp + 0x10); /* 0x171CC59B: mov esi, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x28); /* 0x171CC59E: mov eax, dword ptr [ebp + 0x28] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x171CC5A1: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x171CC5A1: shl esi, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x171CC5A4: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x24) = eax; /* 0x171CC5A6: mov dword ptr [ebp + 0x24], eax */
    eax = MEM32(eax); /* 0x171CC5A9: mov eax, dword ptr [eax] */
    edi = eax + 0x1; /* 0x171CC5AB: lea edi, [eax + 1] */
L_171CC5AE:
    SET_LO8(ecx, MEM8(eax)); /* 0x171CC5AE: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CC5B0: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171CC5B1: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CC5AE; /* 0x171CC5B3: jne 0x171cc5ae */
L_171CC5B5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171CC5B5: sub eax, edi */
    _flag_k = FK_CMP;
    edi = eax + 0x1; /* 0x171CC5B7: lea edi, [eax + 1] */
    PUSH32(esp, edi); /* 0x171CC5BA: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC5BB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1E85); /* 0x171CC5BE: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xB0); /* 0x171CC5C3: mov ecx, dword ptr [ebx + 0xb0] */
    MEM32(esi + ecx) = eax; /* 0x171CC5C9: mov dword ptr [esi + ecx], eax */
    eax = MEM32(ebx + 0xB0); /* 0x171CC5CC: mov eax, dword ptr [ebx + 0xb0] */
    eax = MEM32(esi + eax); /* 0x171CC5D2: mov eax, dword ptr [esi + eax] */
    /* test eax, eax */ /* 0x171CC5D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC60D; /* 0x171CC5D7: je 0x171cc60d */
L_171CC5D9:
    edx = MEM32(ebp + 0x24); /* 0x171CC5D9: mov edx, dword ptr [ebp + 0x24] */
    esi = MEM32(edx); /* 0x171CC5DC: mov esi, dword ptr [edx] */
    ecx = edi; /* 0x171CC5DE: mov ecx, edi */
    edi = eax; /* 0x171CC5E0: mov edi, eax */
    eax = ecx; /* 0x171CC5E2: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CC5E4: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171CC5E4: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CC5E7: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171CC5E9: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171CC5EB: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x171CC5EE: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x10); /* 0x171CC5F1: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(ebp + 0x20) */ /* 0x171CC5F4: cmp eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171CC5F7: rep movsb byte ptr es:[edi], byte ptr [esi] */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CC59B; /* 0x171CC5F9: jl 0x171cc59b */
L_171CC5FB:
    _flag_a = (uint32_t)((MEM8(ebx + 0x9) | 4)) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0x9) | 4)) << 24;
    MEM8(ebx + 0x9) = (uint8_t)(MEM8(ebx + 0x9) | 4); /* 0x171CC5FB: or byte ptr [ebx + 9], 4 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM8(ebx + 0xB8) | 0x80u)) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0xB8) | 0x80u)) << 24;
    MEM8(ebx + 0xB8) = (uint8_t)(MEM8(ebx + 0xB8) | 0x80u); /* 0x171CC5FF: or byte ptr [ebx + 0xb8], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171CC606:
    edi = POP32_VAL(esp); /* 0x171CC606: pop edi */
L_171CC607:
    esi = POP32_VAL(esp); /* 0x171CC607: pop esi */
L_171CC608:
    ebx = POP32_VAL(esp); /* 0x171CC608: pop ebx */
L_171CC609:
    ebp = POP32_VAL(esp); /* 0x171CC609: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x171CC60A: ret 0x24 */
L_171CC60D:
    PUSH32(esp, 0x17026234u); /* 0x171CC60D: push 0x17026234 */
    RECOMP_BACKEDGE();
    goto L_171CC549; /* 0x171CC612: jmp 0x171cc549 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171CC61C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CC61Cu);

L_171CC61C:
    edi = edi; /* 0x171CC61C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CC61E: push ebp */
    ebp = esp; /* 0x171CC61F: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171CC621: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC64D; /* 0x171CC625: je 0x171cc64d */
L_171CC627:
    eax = MEM32(ebp + 0xC); /* 0x171CC627: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171CC62A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC64D; /* 0x171CC62C: je 0x171cc64d */
L_171CC62E:
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x171CC62E: fld qword ptr [ebp + 0x14] */
    SET_LO8(ecx, MEM8(ebp + 0x10)); /* 0x171CC631: mov cl, byte ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((MEM8(eax + 0x9) | 0x40u)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x9) | 0x40u)) << 24;
    MEM8(eax + 0x9) = (uint8_t)(MEM8(eax + 0x9) | 0x40u); /* 0x171CC634: or byte ptr [eax + 9], 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { double _v = fp_pop(); *(double*)ADDR(eax + 0xE0) = _v; } /* 0x171CC638: fstp qword ptr [eax + 0xe0] */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x171CC63E: fld qword ptr [ebp + 0x1c] */
    MEM8(eax + 0xDC) = (uint8_t)(LO8(ecx)); /* 0x171CC641: mov byte ptr [eax + 0xdc], cl */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0xE8) = _v; } /* 0x171CC647: fstp qword ptr [eax + 0xe8] */
L_171CC64D:
    ebp = POP32_VAL(esp); /* 0x171CC64D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x171CC64E: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_171CC656(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CC656u);

L_171CC656:
    edi = edi; /* 0x171CC656: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CC658: push ebp */
    ebp = esp; /* 0x171CC659: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171CC65B: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC67E; /* 0x171CC65F: je 0x171cc67e */
L_171CC661:
    eax = MEM32(ebp + 0xC); /* 0x171CC661: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171CC664: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC67E; /* 0x171CC666: je 0x171cc67e */
L_171CC668:
    ecx = MEM32(ebp + 0x10); /* 0x171CC668: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((MEM8(eax + 0x8) | 0x80u)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x8) | 0x80u)) << 24;
    MEM8(eax + 0x8) = (uint8_t)(MEM8(eax + 0x8) | 0x80u); /* 0x171CC66B: or byte ptr [eax + 8], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax + 0x70) = ecx; /* 0x171CC66F: mov dword ptr [eax + 0x70], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x171CC672: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x74) = ecx; /* 0x171CC675: mov dword ptr [eax + 0x74], ecx */
    SET_LO8(ecx, MEM8(ebp + 0x18)); /* 0x171CC678: mov cl, byte ptr [ebp + 0x18] */
    MEM8(eax + 0x78) = (uint8_t)(LO8(ecx)); /* 0x171CC67B: mov byte ptr [eax + 0x78], cl */
L_171CC67E:
    ebp = POP32_VAL(esp); /* 0x171CC67E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171CC67F: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171CC687(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CC687u);

L_171CC687:
    edi = edi; /* 0x171CC687: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CC689: push ebp */
    ebp = esp; /* 0x171CC68A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171CC68C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CC68D: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x171CC690: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC70B; /* 0x171CC692: je 0x171cc70b */
L_171CC694:
    PUSH32(esp, ebx); /* 0x171CC694: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171CC695: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x171CC698: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC70A; /* 0x171CC69A: je 0x171cc70a */
L_171CC69C:
    PUSH32(esp, edi); /* 0x171CC69C: push edi */
    PUSH32(esp, 0); /* 0x171CC69D: push 0 */
    PUSH32(esp, 0x1000u); /* 0x171CC69F: push 0x1000 */
    PUSH32(esp, ebx); /* 0x171CC6A4: push ebx */
    PUSH32(esp, esi); /* 0x171CC6A5: push esi */
    RECOMP_CALL(sub_171CAAF1); /* 0x171CC6A6: call 0x171caaf1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x300u); /* 0x171CC6AB: push 0x300 */
    PUSH32(esp, esi); /* 0x171CC6B0: push esi */
    RECOMP_CALL(sub_171D1E85); /* 0x171CC6B1: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x171CC6B6: mov edx, dword ptr [ebp + 8] */
    edi = eax; /* 0x171CC6B9: mov edi, eax */
    MEM32(esi + 0x114) = edi; /* 0x171CC6BB: mov dword ptr [esi + 0x114], edi */
    esi = MEM32(ebp + 0x10); /* 0x171CC6C1: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CC6C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0xC0u; /* 0x171CC6C6: mov ecx, 0xc0 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171CC6CB: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = MEM32(edx + 0x114); /* 0x171CC6CD: mov edi, dword ptr [edx + 0x114] */
    eax = MEM32(ebp + 0x14); /* 0x171CC6D3: mov eax, dword ptr [ebp + 0x14] */
    ecx = eax + eax * 2; /* 0x171CC6D6: lea ecx, [eax + eax*2] */
    edx = ecx; /* 0x171CC6D9: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CC6DB: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171CC6DB: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CC6DE: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x171CC6E0: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171CC6E2: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171CC6E5: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x171CC6E7: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x114); /* 0x171CC6EA: mov edx, dword ptr [ecx + 0x114] */
    MEM32(ebx + 0x10) = edx; /* 0x171CC6F0: mov dword ptr [ebx + 0x10], edx */
    MEM16(ecx + 0x118) = (uint16_t)(LO16(eax)); /* 0x171CC6F3: mov word ptr [ecx + 0x118], ax */
    _flag_a = (uint32_t)((MEM8(ebx + 0xB9) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0xB9) | 0x10u)) << 24;
    MEM8(ebx + 0xB9) = (uint8_t)(MEM8(ebx + 0xB9) | 0x10u); /* 0x171CC6FA: or byte ptr [ebx + 0xb9], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM32(ebx + 0x8) | 8)); _flag_b = (uint32_t)((MEM32(ebx + 0x8) | 8));
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) | 8; /* 0x171CC701: or dword ptr [ebx + 8], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + 0x14) = (uint16_t)(LO16(eax)); /* 0x171CC705: mov word ptr [ebx + 0x14], ax */
    edi = POP32_VAL(esp); /* 0x171CC709: pop edi */
L_171CC70A:
    ebx = POP32_VAL(esp); /* 0x171CC70A: pop ebx */
L_171CC70B:
    esi = POP32_VAL(esp); /* 0x171CC70B: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CC70C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171CC70D: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171CC715(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CC715u);

L_171CC715:
    edi = edi; /* 0x171CC715: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CC717: push ebp */
    ebp = esp; /* 0x171CC718: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171CC71A: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC737; /* 0x171CC71E: je 0x171cc737 */
L_171CC720:
    eax = MEM32(ebp + 0xC); /* 0x171CC720: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171CC723: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC737; /* 0x171CC725: je 0x171cc737 */
L_171CC727:
    PUSH32(esp, esi); /* 0x171CC727: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171CC728: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x171CC72B: push edi */
    edi = eax + 0x44; /* 0x171CC72C: lea edi, [eax + 0x44] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171CC72F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x171CC730: movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)((MEM32(eax + 0x8) | 2)); _flag_b = (uint32_t)((MEM32(eax + 0x8) | 2));
    MEM32(eax + 0x8) = MEM32(eax + 0x8) | 2; /* 0x171CC731: or dword ptr [eax + 8], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x171CC735: pop edi */
    esi = POP32_VAL(esp); /* 0x171CC736: pop esi */
L_171CC737:
    ebp = POP32_VAL(esp); /* 0x171CC737: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171CC738: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171CC740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CC740u);

L_171CC740:
    edi = edi; /* 0x171CC740: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CC742: push ebp */
    ebp = esp; /* 0x171CC743: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171CC745: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC75C; /* 0x171CC749: je 0x171cc75c */
L_171CC74B:
    eax = MEM32(ebp + 0xC); /* 0x171CC74B: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171CC74E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC75C; /* 0x171CC750: je 0x171cc75c */
L_171CC752:
    SET_LO8(ecx, MEM8(ebp + 0x10)); /* 0x171CC752: mov cl, byte ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((MEM8(eax + 0x9) | 8)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x9) | 8)) << 24;
    MEM8(eax + 0x9) = (uint8_t)(MEM8(eax + 0x9) | 8); /* 0x171CC755: or byte ptr [eax + 9], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(eax + 0x2C) = (uint8_t)(LO8(ecx)); /* 0x171CC759: mov byte ptr [eax + 0x2c], cl */
L_171CC75C:
    ebp = POP32_VAL(esp); /* 0x171CC75C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171CC75D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171CC765(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CC765u);

L_171CC765:
    edi = edi; /* 0x171CC765: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CC767: push ebp */
    ebp = esp; /* 0x171CC768: mov ebp, esp */
    PUSH32(esp, edi); /* 0x171CC76A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171CC76B: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x171CC76E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC833; /* 0x171CC770: je 0x171cc833 */
L_171CC776:
    PUSH32(esp, esi); /* 0x171CC776: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171CC777: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x171CC77A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC832; /* 0x171CC77C: je 0x171cc832 */
L_171CC782:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171CC782: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x171CC785: push esi */
    PUSH32(esp, edi); /* 0x171CC786: push edi */
    RECOMP_CALL(sub_171CC740); /* 0x171CC787: call 0x171cc740 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x17026310)); /* 0x171CC78C: fld qword ptr [0x17026310] */
    PUSH32(esp, ecx); /* 0x171CC792: push ecx */
    PUSH32(esp, ecx); /* 0x171CC793: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x171CC794: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x171CC797: push esi */
    PUSH32(esp, edi); /* 0x171CC798: push edi */
    RECOMP_CALL(sub_171CC12B); /* 0x171CC799: call 0x171cc12b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xB18Fu); /* 0x171CC79E: push 0xb18f */
    PUSH32(esp, esi); /* 0x171CC7A3: push esi */
    PUSH32(esp, edi); /* 0x171CC7A4: push edi */
    RECOMP_CALL(sub_171CC1B0); /* 0x171CC7A5: call 0x171cc1b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1770u); /* 0x171CC7AA: push 0x1770 */
    PUSH32(esp, 0x3A98u); /* 0x171CC7AF: push 0x3a98 */
    PUSH32(esp, 0xEA60u); /* 0x171CC7B4: push 0xea60 */
    PUSH32(esp, 0x7530u); /* 0x171CC7B9: push 0x7530 */
    PUSH32(esp, 0x80E8u); /* 0x171CC7BE: push 0x80e8 */
    PUSH32(esp, 0xFA00u); /* 0x171CC7C3: push 0xfa00 */
    PUSH32(esp, 0x8084u); /* 0x171CC7C8: push 0x8084 */
    PUSH32(esp, 0x7A26u); /* 0x171CC7CD: push 0x7a26 */
    PUSH32(esp, esi); /* 0x171CC7D2: push esi */
    PUSH32(esp, edi); /* 0x171CC7D3: push edi */
    RECOMP_CALL(sub_171CBF55); /* 0x171CC7D4: call 0x171cbf55 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x17026308)); /* 0x171CC7D9: fld qword ptr [0x17026308] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x171CC7DF: sub esp, 0x40 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x38) = _v; } /* 0x171CC7E2: fstp qword ptr [esp + 0x38] */
    fp_push(*(double*)ADDR(0x17026300)); /* 0x171CC7E6: fld qword ptr [0x17026300] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x30) = _v; } /* 0x171CC7EC: fstp qword ptr [esp + 0x30] */
    fp_push(*(double*)ADDR(0x170262F8)); /* 0x171CC7F0: fld qword ptr [0x170262f8] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x28) = _v; } /* 0x171CC7F6: fstp qword ptr [esp + 0x28] */
    fp_push(*(double*)ADDR(0x170262F0)); /* 0x171CC7FA: fld qword ptr [0x170262f0] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x20) = _v; } /* 0x171CC800: fstp qword ptr [esp + 0x20] */
    fp_push(*(double*)ADDR(0x170262E8)); /* 0x171CC804: fld qword ptr [0x170262e8] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x18) = _v; } /* 0x171CC80A: fstp qword ptr [esp + 0x18] */
    fp_push(*(double*)ADDR(0x170262E0)); /* 0x171CC80E: fld qword ptr [0x170262e0] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x171CC814: fstp qword ptr [esp + 0x10] */
    fp_push(*(double*)ADDR(0x170262D8)); /* 0x171CC818: fld qword ptr [0x170262d8] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x171CC81E: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(0x170262D0)); /* 0x171CC822: fld qword ptr [0x170262d0] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x171CC828: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x171CC82B: push esi */
    PUSH32(esp, edi); /* 0x171CC82C: push edi */
    RECOMP_CALL(sub_171CBD1E); /* 0x171CC82D: call 0x171cbd1e */
    RECOMP_FLAGS_IN();
L_171CC832:
    esi = POP32_VAL(esp); /* 0x171CC832: pop esi */
L_171CC833:
    edi = POP32_VAL(esp); /* 0x171CC833: pop edi */
    ebp = POP32_VAL(esp); /* 0x171CC834: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171CC835: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171CC83D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CC83Du);

L_171CC83D:
    edi = edi; /* 0x171CC83D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CC83F: push ebp */
    ebp = esp; /* 0x171CC840: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171CC842: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC929; /* 0x171CC846: je 0x171cc929 */
L_171CC84C:
    PUSH32(esp, ebx); /* 0x171CC84C: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171CC84D: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x171CC850: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC928; /* 0x171CC852: je 0x171cc928 */
L_171CC858:
    PUSH32(esp, edi); /* 0x171CC858: push edi */
    edi = MEM32(ebp + 0x10); /* 0x171CC859: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x171CC85C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC927; /* 0x171CC85E: je 0x171cc927 */
L_171CC864:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x171CC864: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CC927; /* 0x171CC868: je 0x171cc927 */
L_171CC86E:
    eax = edi; /* 0x171CC86E: mov eax, edi */
    edx = eax + 0x1; /* 0x171CC870: lea edx, [eax + 1] */
L_171CC873:
    SET_LO8(ecx, MEM8(eax)); /* 0x171CC873: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CC875: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171CC876: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CC873; /* 0x171CC878: jne 0x171cc873 */
L_171CC87A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171CC87A: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171CC87C: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CC87D: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171CC87E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC87F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1E85); /* 0x171CC882: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171CC887: mov esi, eax */
    /* test esi, esi */ /* 0x171CC889: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = esi; /* 0x171CC88B: mov dword ptr [ebp + 0xc], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CC8A2; /* 0x171CC88E: jne 0x171cc8a2 */
L_171CC890:
    PUSH32(esp, 0x17026348u); /* 0x171CC890: push 0x17026348 */
L_171CC895:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC895: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA889); /* 0x171CC898: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    goto L_171CC926; /* 0x171CC89D: jmp 0x171cc926 */
L_171CC8A2:
    edx = esi; /* 0x171CC8A2: mov edx, esi */
    eax = edi; /* 0x171CC8A4: mov eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x171CC8A6: sub edx, edi */
    _flag_k = FK_CMP;
L_171CC8A8:
    SET_LO8(ecx, MEM8(eax)); /* 0x171CC8A8: mov cl, byte ptr [eax] */
    MEM8(edx + eax) = (uint8_t)(LO8(ecx)); /* 0x171CC8AA: mov byte ptr [edx + eax], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CC8AD: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171CC8AE: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CC8A8; /* 0x171CC8B0: jne 0x171cc8a8 */
L_171CC8B2:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x171CC8B2: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC8B5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1E85); /* 0x171CC8B8: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171CC8BD: mov edi, eax */
    /* test edi, edi */ /* 0x171CC8BF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edi; /* 0x171CC8C1: mov dword ptr [ebp + 0x10], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CC8D6; /* 0x171CC8C4: jne 0x171cc8d6 */
L_171CC8C6:
    PUSH32(esp, esi); /* 0x171CC8C6: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC8C7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CC8CA: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17026318u); /* 0x171CC8CF: push 0x17026318 */
    RECOMP_BACKEDGE();
    goto L_171CC895; /* 0x171CC8D4: jmp 0x171cc895 */
L_171CC8D6:
    ecx = MEM32(ebp + 0x1C); /* 0x171CC8D6: mov ecx, dword ptr [ebp + 0x1c] */
    esi = MEM32(ebp + 0x18); /* 0x171CC8D9: mov esi, dword ptr [ebp + 0x18] */
    eax = ecx; /* 0x171CC8DC: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CC8DE: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171CC8DE: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CC8E1: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 0); /* 0x171CC8E3: push 0 */
    PUSH32(esp, 0x10u); /* 0x171CC8E5: push 0x10 */
    ecx = eax; /* 0x171CC8E7: mov ecx, eax */
    PUSH32(esp, ebx); /* 0x171CC8E9: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC8EA: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171CC8ED: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171CC8F0: rep movsb byte ptr es:[edi], byte ptr [esi] */
    RECOMP_CALL(sub_171CAAF1); /* 0x171CC8F2: call 0x171caaf1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x1C); /* 0x171CC8F7: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)((MEM32(ebx + 0xB8) | 0x10u)); _flag_b = (uint32_t)((MEM32(ebx + 0xB8) | 0x10u));
    MEM32(ebx + 0xB8) = MEM32(ebx + 0xB8) | 0x10u; /* 0x171CC8FA: or dword ptr [ebx + 0xb8], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM8(ebx + 0x9) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0x9) | 0x10u)) << 24;
    MEM8(ebx + 0x9) = (uint8_t)(MEM8(ebx + 0x9) | 0x10u); /* 0x171CC901: or byte ptr [ebx + 9], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebx + 0xCC) = eax; /* 0x171CC905: mov dword ptr [ebx + 0xcc], eax */
    eax = MEM32(ebp + 0xC); /* 0x171CC90B: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebx + 0xC4) = eax; /* 0x171CC90E: mov dword ptr [ebx + 0xc4], eax */
    eax = MEM32(ebp + 0x10); /* 0x171CC914: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0xC8) = eax; /* 0x171CC917: mov dword ptr [ebx + 0xc8], eax */
    SET_LO8(eax, MEM8(ebp + 0x14)); /* 0x171CC91D: mov al, byte ptr [ebp + 0x14] */
    MEM8(ebx + 0xD0) = (uint8_t)(LO8(eax)); /* 0x171CC920: mov byte ptr [ebx + 0xd0], al */
L_171CC926:
    esi = POP32_VAL(esp); /* 0x171CC926: pop esi */
L_171CC927:
    edi = POP32_VAL(esp); /* 0x171CC927: pop edi */
L_171CC928:
    ebx = POP32_VAL(esp); /* 0x171CC928: pop ebx */
L_171CC929:
    ebp = POP32_VAL(esp); /* 0x171CC929: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x171CC92A: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_171CC932(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CC932u);

L_171CC932:
    edi = edi; /* 0x171CC932: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CC934: push ebp */
    ebp = esp; /* 0x171CC935: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171CC937: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171CC93A: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171CC93E: push ebx */
    PUSH32(esp, esi); /* 0x171CC93F: push esi */
    PUSH32(esp, edi); /* 0x171CC940: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CCAFB; /* 0x171CC941: je 0x171ccafb */
L_171CC947:
    ebx = MEM32(ebp + 0xC); /* 0x171CC947: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x171CC94A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CCAFB; /* 0x171CC94C: je 0x171ccafb */
L_171CC952:
    edi = MEM32(ebp + 0x14); /* 0x171CC952: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x171CC955: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CCAFB; /* 0x171CC957: je 0x171ccafb */
L_171CC95D:
    eax = MEM32(ebx + 0x30); /* 0x171CC95D: mov eax, dword ptr [ebx + 0x30] */
    esi = MEM32(ebx + 0x34); /* 0x171CC960: mov esi, dword ptr [ebx + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x171CC963: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x171CC965: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CC9E5; /* 0x171CC967: jle 0x171cc9e5 */
L_171CC969:
    ecx = MEM32(ebx + 0x38); /* 0x171CC969: mov ecx, dword ptr [ebx + 0x38] */
    /* test ecx, ecx */ /* 0x171CC96C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171CC96E: mov dword ptr [ebp - 4], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC9C1; /* 0x171CC971: je 0x171cc9c1 */
L_171CC973:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171CC973: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x34) = eax; /* 0x171CC976: mov dword ptr [ebx + 0x34], eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x171CC979: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x171CC979: shl eax, 4 */
    PUSH32(esp, eax); /* 0x171CC97C: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC97D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1E85); /* 0x171CC980: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CC985: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171CC987: push dword ptr [ebp - 4] */
    MEM32(ebx + 0x38) = eax; /* 0x171CC98A: mov dword ptr [ebx + 0x38], eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC98D: push dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CC99F; /* 0x171CC990: jne 0x171cc99f */
L_171CC992:
    RECOMP_CALL(sub_171D1ECA); /* 0x171CC992: call 0x171d1eca */
    RECOMP_FLAGS_IN();
L_171CC997:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CC997: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CC999: inc eax */
    _flag_k = FK_INC;
    goto L_171CCAFD; /* 0x171CC99A: jmp 0x171ccafd */
L_171CC99F:
    ecx = esi; /* 0x171CC99F: mov ecx, esi */
    esi = MEM32(ebp + (-0x4)); /* 0x171CC9A1: mov esi, dword ptr [ebp - 4] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x171CC9A4: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x171CC9A4: shl ecx, 4 */
    edi = eax; /* 0x171CC9A7: mov edi, eax */
    eax = ecx; /* 0x171CC9A9: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CC9AB: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171CC9AB: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CC9AE: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171CC9B0: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171CC9B2: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171CC9B5: rep movsb byte ptr es:[edi], byte ptr [esi] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CC9B7: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x14); /* 0x171CC9BC: mov edi, dword ptr [ebp + 0x14] */
    goto L_171CC9E5; /* 0x171CC9BF: jmp 0x171cc9e5 */
L_171CC9C1:
    _flag_a = (uint32_t)(MEM32(ebx + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) & 0; /* 0x171CC9C1: and dword ptr [ebx + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x8; /* 0x171CC9C5: lea eax, [edi + 8] */
    MEM32(ebx + 0x34) = eax; /* 0x171CC9C8: mov dword ptr [ebx + 0x34], eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x171CC9CB: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x171CC9CB: shl eax, 4 */
    PUSH32(esp, eax); /* 0x171CC9CE: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CC9CF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1E85); /* 0x171CC9D2: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CC9D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x38) = eax; /* 0x171CC9D9: mov dword ptr [ebx + 0x38], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC997; /* 0x171CC9DC: je 0x171cc997 */
L_171CC9DE:
    _flag_a = (uint32_t)((MEM8(ebx + 0xB9) | 0x40u)) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0xB9) | 0x40u)) << 24;
    MEM8(ebx + 0xB9) = (uint8_t)(MEM8(ebx + 0xB9) | 0x40u); /* 0x171CC9DE: or byte ptr [ebx + 0xb9], 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171CC9E5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x171CC9E5: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x171CC9E9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171CCAFB; /* 0x171CC9EB: jle 0x171ccafb */
L_171CC9F1:
    esi = MEM32(ebp + 0x10); /* 0x171CC9F1: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x171CC9F4: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = esi; /* 0x171CC9F7: mov dword ptr [ebp - 8], esi */
    goto L_171CC9FF; /* 0x171CC9FA: jmp 0x171cc9ff */
L_171CC9FC:
    ebx = MEM32(ebp + 0xC); /* 0x171CC9FC: mov ebx, dword ptr [ebp + 0xc] */
L_171CC9FF:
    ebx = MEM32(ebx + 0x30); /* 0x171CC9FF: mov ebx, dword ptr [ebx + 0x30] */
    eax = MEM32(ebp + 0xC); /* 0x171CCA02: mov eax, dword ptr [ebp + 0xc] */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x171CCA05: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x171CCA05: shl ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + 0x38); /* 0x171CCA08: add ebx, dword ptr [eax + 0x38] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + (-0x4)); /* 0x171CCA0B: mov eax, dword ptr [esi - 4] */
    /* test eax, eax */ /* 0x171CCA0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CCAE6; /* 0x171CCA10: je 0x171ccae6 */
L_171CCA16:
    edx = eax + 0x1; /* 0x171CCA16: lea edx, [eax + 1] */
L_171CCA19:
    SET_LO8(ecx, MEM8(eax)); /* 0x171CCA19: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CCA1B: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171CCA1C: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CCA19; /* 0x171CCA1E: jne 0x171cca19 */
L_171CCA20:
    edi = MEM32(esi + (-0x8)); /* 0x171CCA20: mov edi, dword ptr [esi - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171CCA23: sub eax, edx */
    _flag_k = FK_CMP;
    /* test edi, edi */ /* 0x171CCA25: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x171CCA27: mov dword ptr [ebp + 0x10], eax */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171CCAD9; /* 0x171CCA2A: jg 0x171ccad9 */
L_171CCA30:
    eax = MEM32(esi); /* 0x171CCA30: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x171CCA32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CCA4D; /* 0x171CCA34: je 0x171cca4d */
L_171CCA36:
    /* cmp MEM8(eax), LO8(ecx) */ /* 0x171CCA36: cmp byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CCA4D; /* 0x171CCA38: je 0x171cca4d */
L_171CCA3A:
    edx = eax + 0x1; /* 0x171CCA3A: lea edx, [eax + 1] */
L_171CCA3D:
    SET_LO8(ecx, MEM8(eax)); /* 0x171CCA3D: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CCA3F: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171CCA40: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CCA3D; /* 0x171CCA42: jne 0x171cca3d */
L_171CCA44:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171CCA44: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171CCA46: mov dword ptr [ebp - 4], eax */
    MEM32(ebx) = edi; /* 0x171CCA49: mov dword ptr [ebx], edi */
    goto L_171CCA54; /* 0x171CCA4B: jmp 0x171cca54 */
L_171CCA4D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171CCA4D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx) | 0xFFFFFFFFu));
    MEM32(ebx) = MEM32(ebx) | 0xFFFFFFFFu; /* 0x171CCA51: or dword ptr [ebx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_171CCA54:
    ecx = MEM32(ebp + 0x10); /* 0x171CCA54: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + (-0x4)); /* 0x171CCA57: mov eax, dword ptr [ebp - 4] */
    eax = eax + ecx + 0x4; /* 0x171CCA5A: lea eax, [eax + ecx + 4] */
    PUSH32(esp, eax); /* 0x171CCA5E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CCA5F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1E85); /* 0x171CCA62: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CCA67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x4) = eax; /* 0x171CCA69: mov dword ptr [ebx + 4], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CC997; /* 0x171CCA6C: je 0x171cc997 */
L_171CCA72:
    ecx = MEM32(ebp + 0x10); /* 0x171CCA72: mov ecx, dword ptr [ebp + 0x10] */
    esi = MEM32(esi + (-0x4)); /* 0x171CCA75: mov esi, dword ptr [esi - 4] */
    edi = eax; /* 0x171CCA78: mov edi, eax */
    eax = ecx; /* 0x171CCA7A: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CCA7C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171CCA7C: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CCA7F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171CCA81: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171CCA83: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171CCA86: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebx + 0x4); /* 0x171CCA88: mov ecx, dword ptr [ebx + 4] */
    MEM8(eax + ecx) = (uint8_t)(0); /* 0x171CCA8B: mov byte ptr [eax + ecx], 0 */
    ecx = MEM32(ebx + 0x4); /* 0x171CCA8F: mov ecx, dword ptr [ebx + 4] */
    edi = eax + ecx + 0x1; /* 0x171CCA92: lea edi, [eax + ecx + 1] */
    eax = MEM32(ebp + (-0x4)); /* 0x171CCA96: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x171CCA99: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x8) = edi; /* 0x171CCA9B: mov dword ptr [ebx + 8], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CCAB5; /* 0x171CCA9E: je 0x171ccab5 */
L_171CCAA0:
    edx = MEM32(ebp + (-0x8)); /* 0x171CCAA0: mov edx, dword ptr [ebp - 8] */
    esi = MEM32(edx); /* 0x171CCAA3: mov esi, dword ptr [edx] */
    ecx = eax; /* 0x171CCAA5: mov ecx, eax */
    edx = ecx; /* 0x171CCAA7: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CCAA9: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171CCAA9: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CCAAC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x171CCAAE: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171CCAB0: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171CCAB3: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171CCAB5:
    ecx = MEM32(ebx + 0x8); /* 0x171CCAB5: mov ecx, dword ptr [ebx + 8] */
    MEM8(eax + ecx) = (uint8_t)(0); /* 0x171CCAB8: mov byte ptr [eax + ecx], 0 */
    MEM32(ebx + 0xC) = eax; /* 0x171CCABC: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + 0xC); /* 0x171CCABF: mov eax, dword ptr [ebp + 0xc] */
    edi = MEM32(eax + 0x30); /* 0x171CCAC2: mov edi, dword ptr [eax + 0x30] */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x171CCAC5: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x171CCAC5: shl edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x38));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0x38); /* 0x171CCAC8: add edi, dword ptr [eax + 0x38] */
    _flag_k = FK_ADD;
    esi = ebx; /* 0x171CCACB: mov esi, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171CCACD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171CCACE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171CCACF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171CCAD0: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(eax + 0x30)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) + 1; /* 0x171CCAD1: inc dword ptr [eax + 0x30] */
    _flag_k = FK_INC;
    esi = MEM32(ebp + (-0x8)); /* 0x171CCAD4: mov esi, dword ptr [ebp - 8] */
    goto L_171CCAE6; /* 0x171CCAD7: jmp 0x171ccae6 */
L_171CCAD9:
    PUSH32(esp, 0x17026374u); /* 0x171CCAD9: push 0x17026374 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CCADE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA889); /* 0x171CCAE1: call 0x171ca889 */
    RECOMP_FLAGS_IN();
L_171CCAE6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x171CCAE6: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0xC)); /* 0x171CCAE9: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x171CCAEC: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x171CCAEF: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = esi; /* 0x171CCAF2: mov dword ptr [ebp - 8], esi */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CC9FC; /* 0x171CCAF5: jl 0x171cc9fc */
L_171CCAFB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CCAFB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171CCAFD:
    edi = POP32_VAL(esp); /* 0x171CCAFD: pop edi */
    esi = POP32_VAL(esp); /* 0x171CCAFE: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CCAFF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CCB00: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171CCB01: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171CCB09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CCB09u);

L_171CCB09:
    edi = edi; /* 0x171CCB09: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CCB0B: push ebp */
    ebp = esp; /* 0x171CCB0C: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x171CCB0E: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x171CCB11: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CCB39; /* 0x171CCB13: je 0x171ccb39 */
L_171CCB15:
    eax = MEM32(ebp + 0xC); /* 0x171CCB15: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171CCB18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CCB39; /* 0x171CCB1A: je 0x171ccb39 */
L_171CCB1C:
    ecx = 0x200u; /* 0x171CCB1C: mov ecx, 0x200 */
    /* test MEM32(edx + 0x68), ecx */ /* 0x171CCB21: test dword ptr [edx + 0x68], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x68)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CCB39; /* 0x171CCB24: jne 0x171ccb39 */
L_171CCB26:
    edx = MEM32(ebp + 0x10); /* 0x171CCB26: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x171CCB29: push esi */
    esi = MEM32(edx); /* 0x171CCB2A: mov esi, dword ptr [edx] */
    MEM32(eax + 0x3C) = esi; /* 0x171CCB2C: mov dword ptr [eax + 0x3c], esi */
    edx = MEM32(edx + 0x4); /* 0x171CCB2F: mov edx, dword ptr [edx + 4] */
    _flag_a = (uint32_t)((MEM32(eax + 0x8) | ecx)); _flag_b = (uint32_t)((MEM32(eax + 0x8) | ecx));
    MEM32(eax + 0x8) = MEM32(eax + 0x8) | ecx; /* 0x171CCB32: or dword ptr [eax + 8], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x40) = edx; /* 0x171CCB35: mov dword ptr [eax + 0x40], edx */
    esi = POP32_VAL(esp); /* 0x171CCB38: pop esi */
L_171CCB39:
    ebp = POP32_VAL(esp); /* 0x171CCB39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171CCB3A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171CCB42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CCB42u);

L_171CCB42:
    edi = edi; /* 0x171CCB42: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CCB44: push ebp */
    ebp = esp; /* 0x171CCB45: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171CCB47: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CCB48: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x171CCB4B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CCBC7; /* 0x171CCB4D: je 0x171ccbc7 */
L_171CCB4F:
    PUSH32(esp, ebx); /* 0x171CCB4F: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171CCB50: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x171CCB53: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CCBC6; /* 0x171CCB55: je 0x171ccbc6 */
L_171CCB57:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171CCB57: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171CCB5B: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CCB9E; /* 0x171CCB5C: je 0x171ccb9e */
L_171CCB5E:
    PUSH32(esp, 0); /* 0x171CCB5E: push 0 */
    PUSH32(esp, 0x2000u); /* 0x171CCB60: push 0x2000 */
    PUSH32(esp, ebx); /* 0x171CCB65: push ebx */
    PUSH32(esp, esi); /* 0x171CCB66: push esi */
    RECOMP_CALL(sub_171CAAF1); /* 0x171CCB67: call 0x171caaf1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100u); /* 0x171CCB6C: push 0x100 */
    PUSH32(esp, esi); /* 0x171CCB71: push esi */
    RECOMP_CALL(sub_171D1E85); /* 0x171CCB72: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x14); /* 0x171CCB77: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ebx + 0x4C) = eax; /* 0x171CCB7A: mov dword ptr [ebx + 0x4c], eax */
    MEM32(esi + 0x188) = eax; /* 0x171CCB7D: mov dword ptr [esi + 0x188], eax */
    edi = MEM32(ebx + 0x4C); /* 0x171CCB83: mov edi, dword ptr [ebx + 0x4c] */
    esi = MEM32(ebp + 0x10); /* 0x171CCB86: mov esi, dword ptr [ebp + 0x10] */
    eax = ecx; /* 0x171CCB89: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CCB8B: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171CCB8B: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CCB8E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171CCB90: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171CCB92: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171CCB95: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)((MEM8(ebx + 0xB9) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0xB9) | 0x20u)) << 24;
    MEM8(ebx + 0xB9) = (uint8_t)(MEM8(ebx + 0xB9) | 0x20u); /* 0x171CCB97: or byte ptr [ebx + 0xb9], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171CCB9E:
    esi = MEM32(ebp + 0x18); /* 0x171CCB9E: mov esi, dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x171CCBA1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CCBB9; /* 0x171CCBA3: je 0x171ccbb9 */
L_171CCBA5:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x171CCBA5: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = ebx + 0x50; /* 0x171CCBA9: lea edi, [ebx + 0x50] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171CCBAC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171CCBAD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x171CCBAE: movsw word ptr es:[edi], word ptr [esi] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CCBB9; /* 0x171CCBB0: jne 0x171ccbb9 */
L_171CCBB2:
    MEM32(ebp + 0x14) = 1; /* 0x171CCBB2: mov dword ptr [ebp + 0x14], 1 */
L_171CCBB9:
    SET_LO16(eax, MEM16(ebp + 0x14)); /* 0x171CCBB9: mov ax, word ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((MEM32(ebx + 0x8) | 0x10u)); _flag_b = (uint32_t)((MEM32(ebx + 0x8) | 0x10u));
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) | 0x10u; /* 0x171CCBBD: or dword ptr [ebx + 8], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + 0x16) = (uint16_t)(LO16(eax)); /* 0x171CCBC1: mov word ptr [ebx + 0x16], ax */
    edi = POP32_VAL(esp); /* 0x171CCBC5: pop edi */
L_171CCBC6:
    ebx = POP32_VAL(esp); /* 0x171CCBC6: pop ebx */
L_171CCBC7:
    esi = POP32_VAL(esp); /* 0x171CCBC7: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CCBC8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171CCBC9: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171CCBD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CCBD1u);

L_171CCBD1:
    edi = edi; /* 0x171CCBD1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CCBD3: push ebp */
    ebp = esp; /* 0x171CCBD4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171CCBD6: push ecx */
    PUSH32(esp, ecx); /* 0x171CCBD7: push ecx */
    PUSH32(esp, ebx); /* 0x171CCBD8: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171CCBD9: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + 0xD8); /* 0x171CCBDC: mov eax, dword ptr [ebx + 0xd8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14); /* 0x171CCBE2: add eax, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x171CCBE5: push edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x171CCBE6: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x171CCBE6: shl eax, 4 */
    PUSH32(esp, eax); /* 0x171CCBE9: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CCBEA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1E85); /* 0x171CCBED: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171CCBF2: mov edi, eax */
    /* test edi, edi */ /* 0x171CCBF4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edi; /* 0x171CCBF6: mov dword ptr [ebp - 8], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CCC0D; /* 0x171CCBF9: jne 0x171ccc0d */
L_171CCBFB:
    PUSH32(esp, 0x17026390u); /* 0x171CCBFB: push 0x17026390 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CCC00: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA889); /* 0x171CCC03: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    goto L_171CCCFD; /* 0x171CCC08: jmp 0x171cccfd */
L_171CCC0D:
    ecx = MEM32(ebx + 0xD8); /* 0x171CCC0D: mov ecx, dword ptr [ebx + 0xd8] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x171CCC13: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x171CCC13: shl ecx, 4 */
    eax = ecx; /* 0x171CCC16: mov eax, ecx */
    PUSH32(esp, esi); /* 0x171CCC18: push esi */
    esi = MEM32(ebx + 0xD4); /* 0x171CCC19: mov esi, dword ptr [ebx + 0xd4] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CCC1F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171CCC1F: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CCC22: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171CCC24: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171CCC26: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171CCC29: rep movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, MEM32(ebx + 0xD4)); /* 0x171CCC2B: push dword ptr [ebx + 0xd4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CCC31: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CCC34: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CCC39: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x171CCC3B: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0xD4) = eax; /* 0x171CCC3E: mov dword ptr [ebx + 0xd4], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x171CCC44: mov dword ptr [ebp - 4], eax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CCCDF; /* 0x171CCC47: jle 0x171cccdf */
L_171CCC4D:
    esi = MEM32(ebp + 0x10); /* 0x171CCC4D: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x10) = esi; /* 0x171CCC50: mov dword ptr [ebp + 0x10], esi */
    goto L_171CCC58; /* 0x171CCC53: jmp 0x171ccc58 */
L_171CCC55:
    esi = MEM32(ebp + 0x10); /* 0x171CCC55: mov esi, dword ptr [ebp + 0x10] */
L_171CCC58:
    ebx = MEM32(ebx + 0xD8); /* 0x171CCC58: mov ebx, dword ptr [ebx + 0xd8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x4)); /* 0x171CCC5E: add ebx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x171CCC61: mov eax, dword ptr [esi] */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x171CCC63: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x171CCC63: shl ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x8)); /* 0x171CCC66: add ebx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    edi = eax + 0x1; /* 0x171CCC69: lea edi, [eax + 1] */
L_171CCC6C:
    SET_LO8(ecx, MEM8(eax)); /* 0x171CCC6C: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CCC6E: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171CCC6F: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CCC6C; /* 0x171CCC71: jne 0x171ccc6c */
L_171CCC73:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171CCC73: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CCC75: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171CCC76: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CCC77: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1E85); /* 0x171CCC7A: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = eax; /* 0x171CCC7F: mov dword ptr [ebx], eax */
    ecx = MEM32(esi); /* 0x171CCC81: mov ecx, dword ptr [esi] */
L_171CCC83:
    SET_LO8(edx, MEM8(ecx)); /* 0x171CCC83: mov dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171CCC85: inc ecx */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x171CCC86: mov byte ptr [eax], dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CCC88: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x171CCC89: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CCC83; /* 0x171CCC8B: jne 0x171ccc83 */
L_171CCC8D:
    eax = MEM32(esi + 0xC); /* 0x171CCC8D: mov eax, dword ptr [esi + 0xc] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x171CCC90: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x171CCC90: shl eax, 4 */
    PUSH32(esp, eax); /* 0x171CCC93: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CCC94: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1E85); /* 0x171CCC97: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x8) = eax; /* 0x171CCC9C: mov dword ptr [ebx + 8], eax */
    ecx = MEM32(esi + 0xC); /* 0x171CCC9F: mov ecx, dword ptr [esi + 0xc] */
    esi = MEM32(esi + 0x8); /* 0x171CCCA2: mov esi, dword ptr [esi + 8] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x171CCCA5: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x171CCCA5: shl ecx, 4 */
    edi = eax; /* 0x171CCCA8: mov edi, eax */
    eax = ecx; /* 0x171CCCAA: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CCCAC: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171CCCAC: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CCCAF: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171CCCB1: mov ecx, eax */
    eax = MEM32(ebp + 0x10); /* 0x171CCCB3: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171CCCB6: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171CCCB9: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171CCCBC: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(eax + 0xC); /* 0x171CCCBE: mov ecx, dword ptr [eax + 0xc] */
    MEM32(ebx + 0xC) = ecx; /* 0x171CCCC1: mov dword ptr [ebx + 0xc], ecx */
    SET_LO8(ecx, MEM8(eax + 0x4)); /* 0x171CCCC4: mov cl, byte ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x171CCCC7: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x171CCCCA: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x171CCCCD: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x171CCCD0: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebx + 0x4) = (uint8_t)(LO8(ecx)); /* 0x171CCCD3: mov byte ptr [ebx + 4], cl */
    ebx = MEM32(ebp + 0xC); /* 0x171CCCD6: mov ebx, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CCC55; /* 0x171CCCD9: jl 0x171ccc55 */
L_171CCCDF:
    eax = MEM32(ebp + (-0x8)); /* 0x171CCCDF: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((MEM8(ebx + 0x9) | 0x20u)) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0x9) | 0x20u)) << 24;
    MEM8(ebx + 0x9) = (uint8_t)(MEM8(ebx + 0x9) | 0x20u); /* 0x171CCCE2: or byte ptr [ebx + 9], 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebx + 0xD4) = eax; /* 0x171CCCE6: mov dword ptr [ebx + 0xd4], eax */
    eax = MEM32(ebp + 0x14); /* 0x171CCCEC: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebx + 0xD8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0xD8) = MEM32(ebx + 0xD8) + eax; /* 0x171CCCEF: add dword ptr [ebx + 0xd8], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ebx + 0xB8) | 0x20u)); _flag_b = (uint32_t)((MEM32(ebx + 0xB8) | 0x20u));
    MEM32(ebx + 0xB8) = MEM32(ebx + 0xB8) | 0x20u; /* 0x171CCCF5: or dword ptr [ebx + 0xb8], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171CCCFC: pop esi */
L_171CCCFD:
    edi = POP32_VAL(esp); /* 0x171CCCFD: pop edi */
    ebx = POP32_VAL(esp); /* 0x171CCCFE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CCCFF: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171CCD00: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171CCD08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CCD08u);

L_171CCD08:
    edi = edi; /* 0x171CCD08: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CCD0A: push ebp */
    ebp = esp; /* 0x171CCD0B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171CCD0D: push ecx */
    PUSH32(esp, ecx); /* 0x171CCD0E: push ecx */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171CCD0F: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CCE50; /* 0x171CCD13: je 0x171cce50 */
L_171CCD19:
    PUSH32(esp, ebx); /* 0x171CCD19: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171CCD1A: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x171CCD1D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CCE4F; /* 0x171CCD1F: je 0x171cce4f */
L_171CCD25:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x171CCD25: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CCE4F; /* 0x171CCD29: je 0x171cce4f */
L_171CCD2F:
    eax = MEM32(ebx + 0xC0); /* 0x171CCD2F: mov eax, dword ptr [ebx + 0xc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14); /* 0x171CCD35: add eax, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x171CCD38: push edi */
    eax = eax + eax * 4; /* 0x171CCD39: lea eax, [eax + eax*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171CCD3C: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171CCD3C: shl eax, 2 */
    PUSH32(esp, eax); /* 0x171CCD3F: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CCD40: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1E85); /* 0x171CCD43: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171CCD48: mov edi, eax */
    /* test edi, edi */ /* 0x171CCD4A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x171CCD4C: mov dword ptr [ebp - 4], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CCD63; /* 0x171CCD4F: jne 0x171ccd63 */
L_171CCD51:
    PUSH32(esp, 0x170263D8u); /* 0x171CCD51: push 0x170263d8 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CCD56: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA889); /* 0x171CCD59: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    goto L_171CCE4E; /* 0x171CCD5E: jmp 0x171cce4e */
L_171CCD63:
    eax = MEM32(ebx + 0xC0); /* 0x171CCD63: mov eax, dword ptr [ebx + 0xc0] */
    ecx = eax + eax * 4; /* 0x171CCD69: lea ecx, [eax + eax*4] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x171CCD6C: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x171CCD6C: shl ecx, 2 */
    eax = ecx; /* 0x171CCD6F: mov eax, ecx */
    PUSH32(esp, esi); /* 0x171CCD71: push esi */
    esi = MEM32(ebx + 0xBC); /* 0x171CCD72: mov esi, dword ptr [ebx + 0xbc] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CCD78: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171CCD78: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CCD7B: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171CCD7D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171CCD7F: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171CCD82: rep movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, MEM32(ebx + 0xBC)); /* 0x171CCD84: push dword ptr [ebx + 0xbc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CCD8A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CCD8D: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CCD92: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x171CCD94: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0xBC) = eax; /* 0x171CCD97: mov dword ptr [ebx + 0xbc], eax */
    MEM32(ebp + 0xC) = eax; /* 0x171CCD9D: mov dword ptr [ebp + 0xc], eax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171CCE34; /* 0x171CCDA0: jle 0x171cce34 */
L_171CCDA6:
    esi = MEM32(ebp + 0x10); /* 0x171CCDA6: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x171CCDA9: add esi, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = esi; /* 0x171CCDAC: mov dword ptr [ebp + 0x10], esi */
L_171CCDAF:
    eax = MEM32(ebx + 0xC0); /* 0x171CCDAF: mov eax, dword ptr [ebx + 0xc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0xC); /* 0x171CCDB5: add eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x4)); /* 0x171CCDB8: mov ecx, dword ptr [ebp - 4] */
    eax = eax + eax * 4; /* 0x171CCDBB: lea eax, [eax + eax*4] */
    edi = ecx + eax * 4; /* 0x171CCDBE: lea edi, [ecx + eax*4] */
    PUSH32(esp, 5); /* 0x171CCDC1: push 5 */
    eax = esi + (-0xC); /* 0x171CCDC3: lea eax, [esi - 0xc] */
    PUSH32(esp, eax); /* 0x171CCDC6: push eax */
    PUSH32(esp, edi); /* 0x171CCDC7: push edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x171CCDC8: mov dword ptr [ebp - 8], edi */
    RECOMP_CALL(sub_1721B5D8); /* 0x171CCDCB: call 0x1721b5d8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171CCDD0: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi)); /* 0x171CCDD3: push dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CCDD5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171D1E85); /* 0x171CCDD8: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CCDDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x8) = eax; /* 0x171CCDDF: mov dword ptr [edi + 8], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CCDF3; /* 0x171CCDE2: jne 0x171ccdf3 */
L_171CCDE4:
    PUSH32(esp, 0x170263B0u); /* 0x171CCDE4: push 0x170263b0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171CCDE9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171CA889); /* 0x171CCDEC: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    goto L_171CCE1F; /* 0x171CCDF1: jmp 0x171cce1f */
L_171CCDF3:
    ecx = MEM32(esi); /* 0x171CCDF3: mov ecx, dword ptr [esi] */
    esi = MEM32(esi + (-0x4)); /* 0x171CCDF5: mov esi, dword ptr [esi - 4] */
    edi = eax; /* 0x171CCDF8: mov edi, eax */
    eax = ecx; /* 0x171CCDFA: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171CCDFC: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171CCDFC: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171CCDFF: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171CCE01: mov ecx, eax */
    eax = MEM32(ebp + 0x10); /* 0x171CCE03: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171CCE06: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171CCE09: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(eax); /* 0x171CCE0B: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + (-0x8)); /* 0x171CCE0D: mov eax, dword ptr [ebp - 8] */
    esi = MEM32(ebp + 0x10); /* 0x171CCE10: mov esi, dword ptr [ebp + 0x10] */
    MEM32(eax + 0xC) = ecx; /* 0x171CCE13: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171CCE16: mov ecx, dword ptr [ebp + 8] */
    SET_LO8(ecx, MEM8(ecx + 0x68)); /* 0x171CCE19: mov cl, byte ptr [ecx + 0x68] */
    MEM8(eax + 0x10) = (uint8_t)(LO8(ecx)); /* 0x171CCE1C: mov byte ptr [eax + 0x10], cl */
L_171CCE1F:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x171CCE1F: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0xC); /* 0x171CCE22: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x171CCE25: add esi, 0x14 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x171CCE28: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = esi; /* 0x171CCE2B: mov dword ptr [ebp + 0x10], esi */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171CCDAF; /* 0x171CCE2E: jl 0x171ccdaf */
L_171CCE34:
    eax = MEM32(ebp + (-0x4)); /* 0x171CCE34: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0xBC) = eax; /* 0x171CCE37: mov dword ptr [ebx + 0xbc], eax */
    eax = MEM32(ebp + 0x14); /* 0x171CCE3D: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC0)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0xC0) = MEM32(ebx + 0xC0) + eax; /* 0x171CCE40: add dword ptr [ebx + 0xc0], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM8(ebx + 0xB9) | 2)) << 24; _flag_b = (uint32_t)((MEM8(ebx + 0xB9) | 2)) << 24;
    MEM8(ebx + 0xB9) = (uint8_t)(MEM8(ebx + 0xB9) | 2); /* 0x171CCE46: or byte ptr [ebx + 0xb9], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x171CCE4D: pop esi */
L_171CCE4E:
    edi = POP32_VAL(esp); /* 0x171CCE4E: pop edi */
L_171CCE4F:
    ebx = POP32_VAL(esp); /* 0x171CCE4F: pop ebx */
L_171CCE50:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CCE50: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171CCE51: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171CCE59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CCE59u);

L_171CCE59:
    edi = edi; /* 0x171CCE59: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CCE5B: push ebp */
    ebp = esp; /* 0x171CCE5C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x171CCE5E: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171CCE61: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171CCE66: push ebx */
    PUSH32(esp, esi); /* 0x171CCE67: push esi */
    PUSH32(esp, edi); /* 0x171CCE68: push edi */
    PUSH32(esp, 1); /* 0x171CCE69: push 1 */
    MEM32(ebp + (-0x4)) = eax; /* 0x171CCE6B: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_171D1E19); /* 0x171CCE6E: call 0x171d1e19 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171CCE73: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171CCE75: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x58)) = eax; /* 0x171CCE77: mov dword ptr [ebp - 0x58], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CCEA2; /* 0x171CCE7A: je 0x171ccea2 */
L_171CCE7C:
    PUSH32(esp, ebx); /* 0x171CCE7C: push ebx */
    PUSH32(esp, eax); /* 0x171CCE7D: push eax */
    RECOMP_CALL(sub_1721B2D8); /* 0x171CCE7E: call 0x1721b2d8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CCE83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171CCE85: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171CCE86: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CCEA9; /* 0x171CCE87: je 0x171ccea9 */
L_171CCE89:
    edi = MEM32(ebp + (-0x58)); /* 0x171CCE89: mov edi, dword ptr [ebp - 0x58] */
    esi = edi + 0xAC; /* 0x171CCE8C: lea esi, [edi + 0xac] */
    PUSH32(esp, MEM32(esi)); /* 0x171CCE92: push dword ptr [esi] */
    PUSH32(esp, edi); /* 0x171CCE94: push edi */
    RECOMP_CALL(sub_171D1ECA); /* 0x171CCE95: call 0x171d1eca */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171CCE9A: push edi */
    MEM32(esi) = ebx; /* 0x171CCE9B: mov dword ptr [esi], ebx */
    RECOMP_CALL(sub_171D1E68); /* 0x171CCE9D: call 0x171d1e68 */
    RECOMP_FLAGS_IN();
L_171CCEA2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CCEA2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171CD006; /* 0x171CCEA4: jmp 0x171cd006 */
L_171CCEA9:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171CCEA9: push dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + (-0x58)); /* 0x171CCEAC: mov esi, dword ptr [ebp - 0x58] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171CCEAF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171CCEB2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171CCEB5: push esi */
    RECOMP_CALL(sub_171CA83E); /* 0x171CCEB6: call 0x171ca83e */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x171CCEBB: mov edi, dword ptr [ebp + 8] */
L_171CCEBE:
    PUSH32(esp, 0); /* 0x171CCEBE: push 0 */
    RECOMP_CALL(sub_171CAE9D); /* 0x171CCEC0: call 0x171cae9d */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(ebx + edi)); /* 0x171CCEC5: mov cl, byte ptr [ebx + edi] */
    /* cmp LO8(ecx), MEM8(eax + ebx) */ /* 0x171CCEC8: cmp cl, byte ptr [eax + ebx] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CCED1; /* 0x171CCECB: je 0x171cced1 */
L_171CCECD:
    _flag_a = (uint32_t)((MEM8(esi + 0x6E) | 2)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x6E) | 2)) << 24;
    MEM8(esi + 0x6E) = (uint8_t)(MEM8(esi + 0x6E) | 2); /* 0x171CCECD: or byte ptr [esi + 0x6e], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171CCED1:
    PUSH32(esp, 0); /* 0x171CCED1: push 0 */
    RECOMP_CALL(sub_171CAE9D); /* 0x171CCED3: call 0x171cae9d */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(eax + ebx)); /* 0x171CCED8: mov al, byte ptr [eax + ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171CCEDB: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x171CCEDC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CCEBE; /* 0x171CCEDE: jne 0x171ccebe */
L_171CCEE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171CCEE0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(esi + 0x6E), 2 */ /* 0x171CCEE2: test byte ptr [esi + 0x6e], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x6E)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CCF63; /* 0x171CCEE6: je 0x171ccf63 */
L_171CCEE8:
    /* cmp edi, ebx */ /* 0x171CCEE8: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CCF36; /* 0x171CCEEA: je 0x171ccf36 */
L_171CCEEC:
    PUSH32(esp, ebx); /* 0x171CCEEC: push ebx */
    RECOMP_CALL(sub_171CAE9D); /* 0x171CCEED: call 0x171cae9d */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(edi)); /* 0x171CCEF2: mov cl, byte ptr [edi] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x171CCEF4: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CCF16; /* 0x171CCEF6: jne 0x171ccf16 */
L_171CCEF8:
    /* cmp LO8(ecx), 0x31u */ /* 0x171CCEF8: cmp cl, 0x31 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x31u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CCF0B; /* 0x171CCEFB: jne 0x171ccf0b */
L_171CCEFD:
    PUSH32(esp, ebx); /* 0x171CCEFD: push ebx */
    RECOMP_CALL(sub_171CAE9D); /* 0x171CCEFE: call 0x171cae9d */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(edi + 0x2)); /* 0x171CCF03: mov cl, byte ptr [edi + 2] */
    /* cmp LO8(ecx), MEM8(eax + 0x2) */ /* 0x171CCF06: cmp cl, byte ptr [eax + 2] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CCF16; /* 0x171CCF09: jne 0x171ccf16 */
L_171CCF0B:
    /* cmp MEM8(edi), 0x30u */ /* 0x171CCF0B: cmp byte ptr [edi], 0x30 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CCF63; /* 0x171CCF0E: jne 0x171ccf63 */
L_171CCF10:
    /* cmp MEM8(edi + 0x2), 0x39u */ /* 0x171CCF10: cmp byte ptr [edi + 2], 0x39 */
    _flag_a = (uint32_t)(MEM8(edi + 0x2)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_GE(_flag_a, _flag_b)) goto L_171CCF63; /* 0x171CCF14: jge 0x171ccf63 */
L_171CCF16:
    /* cmp edi, ebx */ /* 0x171CCF16: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CCF36; /* 0x171CCF18: je 0x171ccf36 */
L_171CCF1A:
    PUSH32(esp, edi); /* 0x171CCF1A: push edi */
    eax = ebp + (-0x54); /* 0x171CCF1B: lea eax, [ebp - 0x54] */
    PUSH32(esp, 0x17025EC0u); /* 0x171CCF1E: push 0x17025ec0 */
    PUSH32(esp, eax); /* 0x171CCF23: push eax */
    RECOMP_CALL(sub_1721B5E4); /* 0x171CCF24: call 0x1721b5e4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171CCF29: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0x54); /* 0x171CCF2C: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x171CCF2F: push eax */
    PUSH32(esp, esi); /* 0x171CCF30: push esi */
    RECOMP_CALL(sub_171CA889); /* 0x171CCF31: call 0x171ca889 */
    RECOMP_FLAGS_IN();
L_171CCF36:
    PUSH32(esp, ebx); /* 0x171CCF36: push ebx */
    RECOMP_CALL(sub_171CAE9D); /* 0x171CCF37: call 0x171cae9d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x171CCF3C: push eax */
    eax = ebp + (-0x54); /* 0x171CCF3D: lea eax, [ebp - 0x54] */
    PUSH32(esp, 0x17025E88u); /* 0x171CCF40: push 0x17025e88 */
    PUSH32(esp, eax); /* 0x171CCF45: push eax */
    RECOMP_CALL(sub_1721B5E4); /* 0x171CCF46: call 0x1721b5e4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171CCF4B: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0x54); /* 0x171CCF4E: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x171CCF51: push eax */
    PUSH32(esp, esi); /* 0x171CCF52: push esi */
    RECOMP_CALL(sub_171CA889); /* 0x171CCF53: call 0x171ca889 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17025E50u); /* 0x171CCF58: push 0x17025e50 */
    PUSH32(esp, esi); /* 0x171CCF5D: push esi */
    RECOMP_CALL(sub_171CA861); /* 0x171CCF5E: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CCF63:
    eax = 0x2000u; /* 0x171CCF63: mov eax, 0x2000 */
    PUSH32(esp, eax); /* 0x171CCF68: push eax */
    PUSH32(esp, esi); /* 0x171CCF69: push esi */
    MEM32(esi + 0xB0) = eax; /* 0x171CCF6A: mov dword ptr [esi + 0xb0], eax */
    RECOMP_CALL(sub_171D1E85); /* 0x171CCF70: call 0x171d1e85 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xAC) = eax; /* 0x171CCF75: mov dword ptr [esi + 0xac], eax */
    PUSH32(esp, 0x38u); /* 0x171CCF7B: push 0x38 */
    MEM32(esi + 0x94) = 0x171CA9B6u; /* 0x171CCF7D: mov dword ptr [esi + 0x94], 0x171ca9b6 */
    PUSH32(esp, 0x17026444u); /* 0x171CCF87: push 0x17026444 */
    eax = esi + 0x74; /* 0x171CCF8C: lea eax, [esi + 0x74] */
    MEM32(esi + 0x98) = 0x171CAA41u; /* 0x171CCF8F: mov dword ptr [esi + 0x98], 0x171caa41 */
    PUSH32(esp, eax); /* 0x171CCF99: push eax */
    MEM32(esi + 0x9C) = esi; /* 0x171CCF9A: mov dword ptr [esi + 0x9c], esi */
    RECOMP_CALL(sub_17205ADF); /* 0x171CCFA0: call 0x17205adf */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFAu */ /* 0x171CCFA5: cmp eax, -6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CCFC6; /* 0x171CCFA8: je 0x171ccfc6 */
L_171CCFAA:
    /* cmp eax, 0xFFFFFFFCu */ /* 0x171CCFAA: cmp eax, -4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CCFBF; /* 0x171CCFAD: je 0x171ccfbf */
L_171CCFAF:
    /* cmp eax, 0xFFFFFFFEu */ /* 0x171CCFAF: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CCFBF; /* 0x171CCFB2: je 0x171ccfbf */
L_171CCFB4:
    /* cmp eax, ebx */ /* 0x171CCFB4: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CCFD1; /* 0x171CCFB6: je 0x171ccfd1 */
L_171CCFB8:
    PUSH32(esp, 0x17026430u); /* 0x171CCFB8: push 0x17026430 */
    goto L_171CCFCB; /* 0x171CCFBD: jmp 0x171ccfcb */
L_171CCFBF:
    PUSH32(esp, 0x1702641Cu); /* 0x171CCFBF: push 0x1702641c */
    goto L_171CCFCB; /* 0x171CCFC4: jmp 0x171ccfcb */
L_171CCFC6:
    PUSH32(esp, 0x17026408u); /* 0x171CCFC6: push 0x17026408 */
L_171CCFCB:
    PUSH32(esp, esi); /* 0x171CCFCB: push esi */
    RECOMP_CALL(sub_171CA861); /* 0x171CCFCC: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CCFD1:
    eax = MEM32(esi + 0xAC); /* 0x171CCFD1: mov eax, dword ptr [esi + 0xac] */
    PUSH32(esp, ebx); /* 0x171CCFD7: push ebx */
    MEM32(esi + 0x80) = eax; /* 0x171CCFD8: mov dword ptr [esi + 0x80], eax */
    eax = MEM32(esi + 0xB0); /* 0x171CCFDE: mov eax, dword ptr [esi + 0xb0] */
    PUSH32(esp, ebx); /* 0x171CCFE4: push ebx */
    PUSH32(esp, esi); /* 0x171CCFE5: push esi */
    MEM32(esi + 0x84) = eax; /* 0x171CCFE6: mov dword ptr [esi + 0x84], eax */
    RECOMP_CALL(sub_171D1DC6); /* 0x171CCFEC: call 0x171d1dc6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x171CCFF1: push ebx */
    PUSH32(esp, esi); /* 0x171CCFF2: push esi */
    RECOMP_CALL(sub_1721B2D8); /* 0x171CCFF3: call 0x1721b2d8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CCFF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171CCFFA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171CCFFB: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD003; /* 0x171CCFFC: je 0x171cd003 */
L_171CCFFE:
    RECOMP_CALL(sub_1721B5F0); /* 0x171CCFFE: call 0x1721b5f0 */
    RECOMP_FLAGS_IN();
L_171CD003:
    eax = MEM32(ebp + (-0x58)); /* 0x171CD003: mov eax, dword ptr [ebp - 0x58] */
L_171CD006:
    ecx = MEM32(ebp + (-0x4)); /* 0x171CD006: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B76C); /* 0x171CD009: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171CD00E: pop edi */
    esi = POP32_VAL(esp); /* 0x171CD00F: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CD010: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CD011: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171CD012: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171CD01A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CD01Au);

L_171CD01A:
    edi = edi; /* 0x171CD01A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CD01C: push ebp */
    ebp = esp; /* 0x171CD01D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xACu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xACu; /* 0x171CD01F: sub esp, 0xac */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171CD025: mov eax, dword ptr [0x1723c894] */
    ecx = MEM32(ebp + 0xC); /* 0x171CD02A: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171CD02D: push ebx */
    PUSH32(esp, esi); /* 0x171CD02E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CD02F: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171CD032: mov dword ptr [ebp - 4], eax */
    SET_LO8(eax, MEM8(esi + 0x12C)); /* 0x171CD035: mov al, byte ptr [esi + 0x12c] */
    /* cmp LO8(eax), 8 */ /* 0x171CD03B: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, edi); /* 0x171CD03D: push edi */
    MEM32(ebp + (-0xA8)) = ecx; /* 0x171CD03E: mov dword ptr [ebp - 0xa8], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171CD0AE; /* 0x171CD044: jae 0x171cd0ae */
L_171CD046:
    PUSH32(esp, 8); /* 0x171CD046: push 8 */
    ebx = (uint32_t)LO8(eax); /* 0x171CD048: movzx ebx, al */
    edi = POP32_VAL(esp); /* 0x171CD04B: pop edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x171CD04C: sub edi, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171CD04E: push edi */
    eax = ecx + ebx + 0x20; /* 0x171CD04F: lea eax, [ecx + ebx + 0x20] */
    PUSH32(esp, eax); /* 0x171CD053: push eax */
    PUSH32(esp, esi); /* 0x171CD054: push esi */
    RECOMP_CALL(sub_171D1D62); /* 0x171CD055: call 0x171d1d62 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xA8)); /* 0x171CD05A: mov eax, dword ptr [ebp - 0xa8] */
    PUSH32(esp, edi); /* 0x171CD060: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x171CD061: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x171CD064: push ebx */
    PUSH32(esp, eax); /* 0x171CD065: push eax */
    MEM8(esi + 0x12C) = (uint8_t)(8); /* 0x171CD066: mov byte ptr [esi + 0x12c], 8 */
    RECOMP_CALL(sub_171CA932); /* 0x171CD06D: call 0x171ca932 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CD072: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD0A5; /* 0x171CD074: je 0x171cd0a5 */
L_171CD076:
    /* cmp ebx, 4 */ /* 0x171CD076: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171CD09A; /* 0x171CD079: jae 0x171cd09a */
L_171CD07B:
    eax = MEM32(ebp + (-0xA8)); /* 0x171CD07B: mov eax, dword ptr [ebp - 0xa8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFCu; /* 0x171CD081: add edi, -4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x171CD084: push edi */
    PUSH32(esp, ebx); /* 0x171CD085: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x171CD086: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171CD089: push eax */
    RECOMP_CALL(sub_171CA932); /* 0x171CD08A: call 0x171ca932 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CD08F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD09A; /* 0x171CD091: je 0x171cd09a */
L_171CD093:
    PUSH32(esp, 0x170264ACu); /* 0x171CD093: push 0x170264ac */
    goto L_171CD09F; /* 0x171CD098: jmp 0x171cd09f */
L_171CD09A:
    PUSH32(esp, 0x17026484u); /* 0x171CD09A: push 0x17026484 */
L_171CD09F:
    PUSH32(esp, esi); /* 0x171CD09F: push esi */
    RECOMP_CALL(sub_171CA861); /* 0x171CD0A0: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CD0A5:
    /* cmp ebx, 3 */ /* 0x171CD0A5: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171CD0AE; /* 0x171CD0A8: jae 0x171cd0ae */
L_171CD0AA:
    _flag_a = (uint32_t)((MEM8(esi + 0x69) | 0x10u)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x69) | 0x10u)) << 24;
    MEM8(esi + 0x69) = (uint8_t)(MEM8(esi + 0x69) | 0x10u); /* 0x171CD0AA: or byte ptr [esi + 0x69], 0x10 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171CD0AE:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171CD0AE: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x2C)) = (uint8_t)(0x49u); /* 0x171CD0B0: mov byte ptr [ebp - 0x2c], 0x49 */
    MEM8(ebp + (-0x2B)) = (uint8_t)(0x48u); /* 0x171CD0B4: mov byte ptr [ebp - 0x2b], 0x48 */
    MEM8(ebp + (-0x2A)) = (uint8_t)(0x44u); /* 0x171CD0B8: mov byte ptr [ebp - 0x2a], 0x44 */
    MEM8(ebp + (-0x29)) = (uint8_t)(0x52u); /* 0x171CD0BC: mov byte ptr [ebp - 0x29], 0x52 */
    MEM8(ebp + (-0x28)) = (uint8_t)(LO8(eax)); /* 0x171CD0C0: mov byte ptr [ebp - 0x28], al */
    MEM8(ebp + (-0xC)) = (uint8_t)(0x49u); /* 0x171CD0C3: mov byte ptr [ebp - 0xc], 0x49 */
    MEM8(ebp + (-0xB)) = (uint8_t)(0x44u); /* 0x171CD0C7: mov byte ptr [ebp - 0xb], 0x44 */
    MEM8(ebp + (-0xA)) = (uint8_t)(0x41u); /* 0x171CD0CB: mov byte ptr [ebp - 0xa], 0x41 */
    MEM8(ebp + (-0x9)) = (uint8_t)(0x54u); /* 0x171CD0CF: mov byte ptr [ebp - 9], 0x54 */
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(eax)); /* 0x171CD0D3: mov byte ptr [ebp - 8], al */
    MEM8(ebp + (-0x8C)) = (uint8_t)(0x49u); /* 0x171CD0D6: mov byte ptr [ebp - 0x8c], 0x49 */
    MEM8(ebp + (-0x8B)) = (uint8_t)(0x45u); /* 0x171CD0DD: mov byte ptr [ebp - 0x8b], 0x45 */
    MEM8(ebp + (-0x8A)) = (uint8_t)(0x4Eu); /* 0x171CD0E4: mov byte ptr [ebp - 0x8a], 0x4e */
    MEM8(ebp + (-0x89)) = (uint8_t)(0x44u); /* 0x171CD0EB: mov byte ptr [ebp - 0x89], 0x44 */
    MEM8(ebp + (-0x88)) = (uint8_t)(LO8(eax)); /* 0x171CD0F2: mov byte ptr [ebp - 0x88], al */
    MEM8(ebp + (-0x14)) = (uint8_t)(0x50u); /* 0x171CD0F8: mov byte ptr [ebp - 0x14], 0x50 */
    MEM8(ebp + (-0x13)) = (uint8_t)(0x4Cu); /* 0x171CD0FC: mov byte ptr [ebp - 0x13], 0x4c */
    MEM8(ebp + (-0x12)) = (uint8_t)(0x54u); /* 0x171CD100: mov byte ptr [ebp - 0x12], 0x54 */
    MEM8(ebp + (-0x11)) = (uint8_t)(0x45u); /* 0x171CD104: mov byte ptr [ebp - 0x11], 0x45 */
    MEM8(ebp + (-0x10)) = (uint8_t)(LO8(eax)); /* 0x171CD108: mov byte ptr [ebp - 0x10], al */
    MEM8(ebp + (-0x44)) = (uint8_t)(0x62u); /* 0x171CD10B: mov byte ptr [ebp - 0x44], 0x62 */
    MEM8(ebp + (-0x43)) = (uint8_t)(0x4Bu); /* 0x171CD10F: mov byte ptr [ebp - 0x43], 0x4b */
    MEM8(ebp + (-0x42)) = (uint8_t)(0x47u); /* 0x171CD113: mov byte ptr [ebp - 0x42], 0x47 */
    MEM8(ebp + (-0x41)) = (uint8_t)(0x44u); /* 0x171CD117: mov byte ptr [ebp - 0x41], 0x44 */
    MEM8(ebp + (-0x40)) = (uint8_t)(LO8(eax)); /* 0x171CD11B: mov byte ptr [ebp - 0x40], al */
    MEM8(ebp + (-0x7C)) = (uint8_t)(0x63u); /* 0x171CD11E: mov byte ptr [ebp - 0x7c], 0x63 */
    MEM8(ebp + (-0x7B)) = (uint8_t)(0x48u); /* 0x171CD122: mov byte ptr [ebp - 0x7b], 0x48 */
    MEM8(ebp + (-0x7A)) = (uint8_t)(0x52u); /* 0x171CD126: mov byte ptr [ebp - 0x7a], 0x52 */
    MEM8(ebp + (-0x79)) = (uint8_t)(0x4Du); /* 0x171CD12A: mov byte ptr [ebp - 0x79], 0x4d */
    MEM8(ebp + (-0x78)) = (uint8_t)(LO8(eax)); /* 0x171CD12E: mov byte ptr [ebp - 0x78], al */
    MEM8(ebp + (-0x54)) = (uint8_t)(0x67u); /* 0x171CD131: mov byte ptr [ebp - 0x54], 0x67 */
    MEM8(ebp + (-0x53)) = (uint8_t)(0x41u); /* 0x171CD135: mov byte ptr [ebp - 0x53], 0x41 */
    MEM8(ebp + (-0x52)) = (uint8_t)(0x4Du); /* 0x171CD139: mov byte ptr [ebp - 0x52], 0x4d */
    MEM8(ebp + (-0x51)) = (uint8_t)(0x41u); /* 0x171CD13D: mov byte ptr [ebp - 0x51], 0x41 */
    MEM8(ebp + (-0x50)) = (uint8_t)(LO8(eax)); /* 0x171CD141: mov byte ptr [ebp - 0x50], al */
    MEM8(ebp + (-0x9C)) = (uint8_t)(0x68u); /* 0x171CD144: mov byte ptr [ebp - 0x9c], 0x68 */
    MEM8(ebp + (-0x9B)) = (uint8_t)(0x49u); /* 0x171CD14B: mov byte ptr [ebp - 0x9b], 0x49 */
    MEM8(ebp + (-0x9A)) = (uint8_t)(0x53u); /* 0x171CD152: mov byte ptr [ebp - 0x9a], 0x53 */
    MEM8(ebp + (-0x99)) = (uint8_t)(0x54u); /* 0x171CD159: mov byte ptr [ebp - 0x99], 0x54 */
    MEM8(ebp + (-0x98)) = (uint8_t)(LO8(eax)); /* 0x171CD160: mov byte ptr [ebp - 0x98], al */
    MEM8(ebp + (-0x74)) = (uint8_t)(0x69u); /* 0x171CD166: mov byte ptr [ebp - 0x74], 0x69 */
    MEM8(ebp + (-0x73)) = (uint8_t)(0x43u); /* 0x171CD16A: mov byte ptr [ebp - 0x73], 0x43 */
    MEM8(ebp + (-0x72)) = (uint8_t)(0x43u); /* 0x171CD16E: mov byte ptr [ebp - 0x72], 0x43 */
    MEM8(ebp + (-0x71)) = (uint8_t)(0x50u); /* 0x171CD172: mov byte ptr [ebp - 0x71], 0x50 */
    MEM8(ebp + (-0x70)) = (uint8_t)(LO8(eax)); /* 0x171CD176: mov byte ptr [ebp - 0x70], al */
    MEM8(ebp + (-0x1C)) = (uint8_t)(0x6Fu); /* 0x171CD179: mov byte ptr [ebp - 0x1c], 0x6f */
    MEM8(ebp + (-0x1B)) = (uint8_t)(0x46u); /* 0x171CD17D: mov byte ptr [ebp - 0x1b], 0x46 */
    MEM8(ebp + (-0x1A)) = (uint8_t)(0x46u); /* 0x171CD181: mov byte ptr [ebp - 0x1a], 0x46 */
    MEM8(ebp + (-0x19)) = (uint8_t)(0x73u); /* 0x171CD185: mov byte ptr [ebp - 0x19], 0x73 */
    MEM8(ebp + (-0x18)) = (uint8_t)(LO8(eax)); /* 0x171CD189: mov byte ptr [ebp - 0x18], al */
    MEM8(ebp + (-0x64)) = (uint8_t)(0x70u); /* 0x171CD18C: mov byte ptr [ebp - 0x64], 0x70 */
    MEM8(ebp + (-0x63)) = (uint8_t)(0x43u); /* 0x171CD190: mov byte ptr [ebp - 0x63], 0x43 */
    MEM8(ebp + (-0x62)) = (uint8_t)(0x41u); /* 0x171CD194: mov byte ptr [ebp - 0x62], 0x41 */
    MEM8(ebp + (-0x61)) = (uint8_t)(0x4Cu); /* 0x171CD198: mov byte ptr [ebp - 0x61], 0x4c */
    MEM8(ebp + (-0x60)) = (uint8_t)(LO8(eax)); /* 0x171CD19C: mov byte ptr [ebp - 0x60], al */
    MEM8(ebp + (-0x3C)) = (uint8_t)(0x70u); /* 0x171CD19F: mov byte ptr [ebp - 0x3c], 0x70 */
    MEM8(ebp + (-0x3B)) = (uint8_t)(0x48u); /* 0x171CD1A3: mov byte ptr [ebp - 0x3b], 0x48 */
    MEM8(ebp + (-0x3A)) = (uint8_t)(0x59u); /* 0x171CD1A7: mov byte ptr [ebp - 0x3a], 0x59 */
    MEM8(ebp + (-0x39)) = (uint8_t)(0x73u); /* 0x171CD1AB: mov byte ptr [ebp - 0x39], 0x73 */
    MEM8(ebp + (-0x38)) = (uint8_t)(LO8(eax)); /* 0x171CD1AF: mov byte ptr [ebp - 0x38], al */
    MEM8(ebp + (-0x4C)) = (uint8_t)(0x73u); /* 0x171CD1B2: mov byte ptr [ebp - 0x4c], 0x73 */
    MEM8(ebp + (-0x4B)) = (uint8_t)(0x42u); /* 0x171CD1B6: mov byte ptr [ebp - 0x4b], 0x42 */
    MEM8(ebp + (-0x4A)) = (uint8_t)(0x49u); /* 0x171CD1BA: mov byte ptr [ebp - 0x4a], 0x49 */
    MEM8(ebp + (-0x49)) = (uint8_t)(0x54u); /* 0x171CD1BE: mov byte ptr [ebp - 0x49], 0x54 */
    MEM8(ebp + (-0x48)) = (uint8_t)(LO8(eax)); /* 0x171CD1C2: mov byte ptr [ebp - 0x48], al */
    MEM8(ebp + (-0x24)) = (uint8_t)(0x73u); /* 0x171CD1C5: mov byte ptr [ebp - 0x24], 0x73 */
    MEM8(ebp + (-0x23)) = (uint8_t)(0x43u); /* 0x171CD1C9: mov byte ptr [ebp - 0x23], 0x43 */
    MEM8(ebp + (-0x22)) = (uint8_t)(0x41u); /* 0x171CD1CD: mov byte ptr [ebp - 0x22], 0x41 */
    MEM8(ebp + (-0x21)) = (uint8_t)(0x4Cu); /* 0x171CD1D1: mov byte ptr [ebp - 0x21], 0x4c */
    MEM8(ebp + (-0x20)) = (uint8_t)(LO8(eax)); /* 0x171CD1D5: mov byte ptr [ebp - 0x20], al */
    MEM8(ebp + (-0x84)) = (uint8_t)(0x73u); /* 0x171CD1D8: mov byte ptr [ebp - 0x84], 0x73 */
    MEM8(ebp + (-0x83)) = (uint8_t)(0x50u); /* 0x171CD1DF: mov byte ptr [ebp - 0x83], 0x50 */
    MEM8(ebp + (-0x82)) = (uint8_t)(0x4Cu); /* 0x171CD1E6: mov byte ptr [ebp - 0x82], 0x4c */
    MEM8(ebp + (-0x81)) = (uint8_t)(0x54u); /* 0x171CD1ED: mov byte ptr [ebp - 0x81], 0x54 */
    MEM8(ebp + (-0x80)) = (uint8_t)(LO8(eax)); /* 0x171CD1F4: mov byte ptr [ebp - 0x80], al */
    MEM8(ebp + (-0x5C)) = (uint8_t)(0x73u); /* 0x171CD1F7: mov byte ptr [ebp - 0x5c], 0x73 */
    MEM8(ebp + (-0x5B)) = (uint8_t)(0x52u); /* 0x171CD1FB: mov byte ptr [ebp - 0x5b], 0x52 */
    MEM8(ebp + (-0x5A)) = (uint8_t)(0x47u); /* 0x171CD1FF: mov byte ptr [ebp - 0x5a], 0x47 */
    MEM8(ebp + (-0x59)) = (uint8_t)(0x42u); /* 0x171CD203: mov byte ptr [ebp - 0x59], 0x42 */
    MEM8(ebp + (-0x58)) = (uint8_t)(LO8(eax)); /* 0x171CD207: mov byte ptr [ebp - 0x58], al */
    MEM8(ebp + (-0x94)) = (uint8_t)(0x74u); /* 0x171CD20A: mov byte ptr [ebp - 0x94], 0x74 */
    MEM8(ebp + (-0x93)) = (uint8_t)(0x45u); /* 0x171CD211: mov byte ptr [ebp - 0x93], 0x45 */
    MEM8(ebp + (-0x92)) = (uint8_t)(0x58u); /* 0x171CD218: mov byte ptr [ebp - 0x92], 0x58 */
    MEM8(ebp + (-0x91)) = (uint8_t)(0x74u); /* 0x171CD21F: mov byte ptr [ebp - 0x91], 0x74 */
    MEM8(ebp + (-0x90)) = (uint8_t)(LO8(eax)); /* 0x171CD226: mov byte ptr [ebp - 0x90], al */
    MEM8(ebp + (-0xA4)) = (uint8_t)(0x74u); /* 0x171CD22C: mov byte ptr [ebp - 0xa4], 0x74 */
    MEM8(ebp + (-0xA3)) = (uint8_t)(0x49u); /* 0x171CD233: mov byte ptr [ebp - 0xa3], 0x49 */
    MEM8(ebp + (-0xA2)) = (uint8_t)(0x4Du); /* 0x171CD23A: mov byte ptr [ebp - 0xa2], 0x4d */
    MEM8(ebp + (-0xA1)) = (uint8_t)(0x45u); /* 0x171CD241: mov byte ptr [ebp - 0xa1], 0x45 */
    MEM8(ebp + (-0xA0)) = (uint8_t)(LO8(eax)); /* 0x171CD248: mov byte ptr [ebp - 0xa0], al */
    MEM8(ebp + (-0x6C)) = (uint8_t)(0x74u); /* 0x171CD24E: mov byte ptr [ebp - 0x6c], 0x74 */
    MEM8(ebp + (-0x6B)) = (uint8_t)(0x52u); /* 0x171CD252: mov byte ptr [ebp - 0x6b], 0x52 */
    MEM8(ebp + (-0x6A)) = (uint8_t)(0x4Eu); /* 0x171CD256: mov byte ptr [ebp - 0x6a], 0x4e */
    MEM8(ebp + (-0x69)) = (uint8_t)(0x53u); /* 0x171CD25A: mov byte ptr [ebp - 0x69], 0x53 */
    MEM8(ebp + (-0x68)) = (uint8_t)(LO8(eax)); /* 0x171CD25E: mov byte ptr [ebp - 0x68], al */
    MEM8(ebp + (-0x34)) = (uint8_t)(0x7Au); /* 0x171CD261: mov byte ptr [ebp - 0x34], 0x7a */
    MEM8(ebp + (-0x33)) = (uint8_t)(0x54u); /* 0x171CD265: mov byte ptr [ebp - 0x33], 0x54 */
    MEM8(ebp + (-0x32)) = (uint8_t)(0x58u); /* 0x171CD269: mov byte ptr [ebp - 0x32], 0x58 */
    MEM8(ebp + (-0x31)) = (uint8_t)(0x74u); /* 0x171CD26D: mov byte ptr [ebp - 0x31], 0x74 */
    MEM8(ebp + (-0x30)) = (uint8_t)(LO8(eax)); /* 0x171CD271: mov byte ptr [ebp - 0x30], al */
    edi = esi + 0x11C; /* 0x171CD274: lea edi, [esi + 0x11c] */
L_171CD27A:
    PUSH32(esp, 4); /* 0x171CD27A: push 4 */
    eax = ebp + (-0xAC); /* 0x171CD27C: lea eax, [ebp - 0xac] */
    PUSH32(esp, eax); /* 0x171CD282: push eax */
    PUSH32(esp, esi); /* 0x171CD283: push esi */
    RECOMP_CALL(sub_171D1D62); /* 0x171CD284: call 0x171d1d62 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xAC); /* 0x171CD289: lea eax, [ebp - 0xac] */
    PUSH32(esp, eax); /* 0x171CD28F: push eax */
    PUSH32(esp, esi); /* 0x171CD290: push esi */
    RECOMP_CALL(sub_171D610A); /* 0x171CD291: call 0x171d610a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171CD296: push esi */
    ebx = eax; /* 0x171CD297: mov ebx, eax */
    RECOMP_CALL(sub_171CAA51); /* 0x171CD299: call 0x171caa51 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x171CD29E: push 4 */
    PUSH32(esp, edi); /* 0x171CD2A0: push edi */
    PUSH32(esp, esi); /* 0x171CD2A1: push esi */
    RECOMP_CALL(sub_171D51E4); /* 0x171CD2A2: call 0x171d51e4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x171CD2A7: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x2C); /* 0x171CD2A9: lea eax, [ebp - 0x2c] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD2AC: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD2BF; /* 0x171CD2AE: jne 0x171cd2bf */
L_171CD2B0:
    PUSH32(esp, ebx); /* 0x171CD2B0: push ebx */
    PUSH32(esp, MEM32(ebp + (-0xA8))); /* 0x171CD2B1: push dword ptr [ebp - 0xa8] */
    PUSH32(esp, esi); /* 0x171CD2B7: push esi */
    RECOMP_CALL(sub_171D61C9); /* 0x171CD2B8: call 0x171d61c9 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD2BD: jmp 0x171cd27a */
L_171CD2BF:
    ecx = MEM32(edi); /* 0x171CD2BF: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x8C); /* 0x171CD2C1: lea eax, [ebp - 0x8c] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD2C7: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD2DA; /* 0x171CD2C9: jne 0x171cd2da */
L_171CD2CB:
    PUSH32(esp, ebx); /* 0x171CD2CB: push ebx */
    PUSH32(esp, MEM32(ebp + (-0xA8))); /* 0x171CD2CC: push dword ptr [ebp - 0xa8] */
    PUSH32(esp, esi); /* 0x171CD2D2: push esi */
    RECOMP_CALL(sub_171D6449); /* 0x171CD2D3: call 0x171d6449 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD2D8: jmp 0x171cd27a */
L_171CD2DA:
    PUSH32(esp, edi); /* 0x171CD2DA: push edi */
    PUSH32(esp, esi); /* 0x171CD2DB: push esi */
    RECOMP_CALL(sub_171CAEAA); /* 0x171CD2DC: call 0x171caeaa */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CD2E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi); /* 0x171CD2E3: mov ecx, dword ptr [edi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD339; /* 0x171CD2E5: je 0x171cd339 */
L_171CD2E7:
    eax = ebp + (-0xC); /* 0x171CD2E7: lea eax, [ebp - 0xc] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD2EA: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD2F2; /* 0x171CD2EC: jne 0x171cd2f2 */
L_171CD2EE:
    _flag_a = (uint32_t)((MEM32(esi + 0x68) | 4)); _flag_b = (uint32_t)((MEM32(esi + 0x68) | 4));
    MEM32(esi + 0x68) = MEM32(esi + 0x68) | 4; /* 0x171CD2EE: or dword ptr [esi + 0x68], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171CD2F2:
    PUSH32(esp, ebx); /* 0x171CD2F2: push ebx */
    PUSH32(esp, MEM32(ebp + (-0xA8))); /* 0x171CD2F3: push dword ptr [ebp - 0xa8] */
    PUSH32(esp, esi); /* 0x171CD2F9: push esi */
    RECOMP_CALL(sub_171D7A20); /* 0x171CD2FA: call 0x171d7a20 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x171CD2FF: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x14); /* 0x171CD301: lea eax, [ebp - 0x14] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD304: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD311; /* 0x171CD306: jne 0x171cd311 */
L_171CD308:
    _flag_a = (uint32_t)((MEM32(esi + 0x68) | 2)); _flag_b = (uint32_t)((MEM32(esi + 0x68) | 2));
    MEM32(esi + 0x68) = MEM32(esi + 0x68) | 2; /* 0x171CD308: or dword ptr [esi + 0x68], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD30C: jmp 0x171cd27a */
L_171CD311:
    ecx = MEM32(edi); /* 0x171CD311: mov ecx, dword ptr [edi] */
    eax = ebp + (-0xC); /* 0x171CD313: lea eax, [ebp - 0xc] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD316: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD27A; /* 0x171CD318: jne 0x171cd27a */
L_171CD31E:
    eax = MEM32(esi + 0x68); /* 0x171CD31E: mov eax, dword ptr [esi + 0x68] */
    /* test LO8(eax), 1 */ /* 0x171CD321: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CD4AB; /* 0x171CD323: jne 0x171cd4ab */
L_171CD329:
    PUSH32(esp, 0x17026468u); /* 0x171CD329: push 0x17026468 */
L_171CD32E:
    PUSH32(esp, esi); /* 0x171CD32E: push esi */
    RECOMP_CALL(sub_171CA861); /* 0x171CD32F: call 0x171ca861 */
    RECOMP_FLAGS_IN();
    goto L_171CD4F2; /* 0x171CD334: jmp 0x171cd4f2 */
L_171CD339:
    eax = ebp + (-0x14); /* 0x171CD339: lea eax, [ebp - 0x14] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD33C: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD352; /* 0x171CD33E: jne 0x171cd352 */
L_171CD340:
    PUSH32(esp, ebx); /* 0x171CD340: push ebx */
    PUSH32(esp, MEM32(ebp + (-0xA8))); /* 0x171CD341: push dword ptr [ebp - 0xa8] */
    PUSH32(esp, esi); /* 0x171CD347: push esi */
    RECOMP_CALL(sub_171D6309); /* 0x171CD348: call 0x171d6309 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD34D: jmp 0x171cd27a */
L_171CD352:
    ecx = MEM32(edi); /* 0x171CD352: mov ecx, dword ptr [edi] */
    eax = ebp + (-0xC); /* 0x171CD354: lea eax, [ebp - 0xc] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD357: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CD4C2; /* 0x171CD359: je 0x171cd4c2 */
L_171CD35F:
    PUSH32(esp, ebx); /* 0x171CD35F: push ebx */
    PUSH32(esp, MEM32(ebp + (-0xA8))); /* 0x171CD360: push dword ptr [ebp - 0xa8] */
    eax = ebp + (-0x44); /* 0x171CD366: lea eax, [ebp - 0x44] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD369: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171CD36B: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD378; /* 0x171CD36C: jne 0x171cd378 */
L_171CD36E:
    RECOMP_CALL(sub_171D705D); /* 0x171CD36E: call 0x171d705d */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD373: jmp 0x171cd27a */
L_171CD378:
    ecx = MEM32(edi); /* 0x171CD378: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x7C); /* 0x171CD37A: lea eax, [ebp - 0x7c] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD37D: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD38B; /* 0x171CD37F: jne 0x171cd38b */
L_171CD381:
    RECOMP_CALL(sub_171D66AB); /* 0x171CD381: call 0x171d66ab */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD386: jmp 0x171cd27a */
L_171CD38B:
    ecx = MEM32(edi); /* 0x171CD38B: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x54); /* 0x171CD38D: lea eax, [ebp - 0x54] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD390: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD39E; /* 0x171CD392: jne 0x171cd39e */
L_171CD394:
    RECOMP_CALL(sub_171D6490); /* 0x171CD394: call 0x171d6490 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD399: jmp 0x171cd27a */
L_171CD39E:
    ecx = MEM32(edi); /* 0x171CD39E: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x9C); /* 0x171CD3A0: lea eax, [ebp - 0x9c] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD3A6: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD3B4; /* 0x171CD3A8: jne 0x171cd3b4 */
L_171CD3AA:
    RECOMP_CALL(sub_171D71E0); /* 0x171CD3AA: call 0x171d71e0 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD3AF: jmp 0x171cd27a */
L_171CD3B4:
    ecx = MEM32(edi); /* 0x171CD3B4: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x1C); /* 0x171CD3B6: lea eax, [ebp - 0x1c] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD3B9: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD3C7; /* 0x171CD3BB: jne 0x171cd3c7 */
L_171CD3BD:
    RECOMP_CALL(sub_171D7396); /* 0x171CD3BD: call 0x171d7396 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD3C2: jmp 0x171cd27a */
L_171CD3C7:
    ecx = MEM32(edi); /* 0x171CD3C7: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x64); /* 0x171CD3C9: lea eax, [ebp - 0x64] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD3CC: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD3DA; /* 0x171CD3CE: jne 0x171cd3da */
L_171CD3D0:
    RECOMP_CALL(sub_171D7443); /* 0x171CD3D0: call 0x171d7443 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD3D5: jmp 0x171cd27a */
L_171CD3DA:
    ecx = MEM32(edi); /* 0x171CD3DA: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x24); /* 0x171CD3DC: lea eax, [ebp - 0x24] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD3DF: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD3ED; /* 0x171CD3E1: jne 0x171cd3ed */
L_171CD3E3:
    RECOMP_CALL(sub_171D75F9); /* 0x171CD3E3: call 0x171d75f9 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD3E8: jmp 0x171cd27a */
L_171CD3ED:
    ecx = MEM32(edi); /* 0x171CD3ED: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x3C); /* 0x171CD3EF: lea eax, [ebp - 0x3c] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD3F2: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD400; /* 0x171CD3F4: jne 0x171cd400 */
L_171CD3F6:
    RECOMP_CALL(sub_171D72E9); /* 0x171CD3F6: call 0x171d72e9 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD3FB: jmp 0x171cd27a */
L_171CD400:
    ecx = MEM32(edi); /* 0x171CD400: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x4C); /* 0x171CD402: lea eax, [ebp - 0x4c] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD405: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD413; /* 0x171CD407: jne 0x171cd413 */
L_171CD409:
    RECOMP_CALL(sub_171D6597); /* 0x171CD409: call 0x171d6597 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD40E: jmp 0x171cd27a */
L_171CD413:
    ecx = MEM32(edi); /* 0x171CD413: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x5C); /* 0x171CD415: lea eax, [ebp - 0x5c] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD418: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD426; /* 0x171CD41A: jne 0x171cd426 */
L_171CD41C:
    RECOMP_CALL(sub_171D6A01); /* 0x171CD41C: call 0x171d6a01 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD421: jmp 0x171cd27a */
L_171CD426:
    ecx = MEM32(edi); /* 0x171CD426: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x74); /* 0x171CD428: lea eax, [ebp - 0x74] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD42B: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD439; /* 0x171CD42D: jne 0x171cd439 */
L_171CD42F:
    RECOMP_CALL(sub_171D6BAD); /* 0x171CD42F: call 0x171d6bad */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD434: jmp 0x171cd27a */
L_171CD439:
    ecx = MEM32(edi); /* 0x171CD439: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x84); /* 0x171CD43B: lea eax, [ebp - 0x84] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD441: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD44F; /* 0x171CD443: jne 0x171cd44f */
L_171CD445:
    RECOMP_CALL(sub_171D6D03); /* 0x171CD445: call 0x171d6d03 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD44A: jmp 0x171cd27a */
L_171CD44F:
    ecx = MEM32(edi); /* 0x171CD44F: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x94); /* 0x171CD451: lea eax, [ebp - 0x94] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD457: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD465; /* 0x171CD459: jne 0x171cd465 */
L_171CD45B:
    RECOMP_CALL(sub_171D77FF); /* 0x171CD45B: call 0x171d77ff */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD460: jmp 0x171cd27a */
L_171CD465:
    ecx = MEM32(edi); /* 0x171CD465: mov ecx, dword ptr [edi] */
    eax = ebp + (-0xA4); /* 0x171CD467: lea eax, [ebp - 0xa4] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD46D: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD47B; /* 0x171CD46F: jne 0x171cd47b */
L_171CD471:
    RECOMP_CALL(sub_171D773B); /* 0x171CD471: call 0x171d773b */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD476: jmp 0x171cd27a */
L_171CD47B:
    ecx = MEM32(edi); /* 0x171CD47B: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x6C); /* 0x171CD47D: lea eax, [ebp - 0x6c] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD480: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD48E; /* 0x171CD482: jne 0x171cd48e */
L_171CD484:
    RECOMP_CALL(sub_171D6EAF); /* 0x171CD484: call 0x171d6eaf */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD489: jmp 0x171cd27a */
L_171CD48E:
    ecx = MEM32(edi); /* 0x171CD48E: mov ecx, dword ptr [edi] */
    eax = ebp + (-0x34); /* 0x171CD490: lea eax, [ebp - 0x34] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD493: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD4A1; /* 0x171CD495: jne 0x171cd4a1 */
L_171CD497:
    RECOMP_CALL(sub_171D78F1); /* 0x171CD497: call 0x171d78f1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD49C: jmp 0x171cd27a */
L_171CD4A1:
    RECOMP_CALL(sub_171D7A20); /* 0x171CD4A1: call 0x171d7a20 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD27A; /* 0x171CD4A6: jmp 0x171cd27a */
L_171CD4AB:
    /* cmp MEM8(esi + 0x126), 3 */ /* 0x171CD4AB: cmp byte ptr [esi + 0x126], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x126)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD4F2; /* 0x171CD4B2: jne 0x171cd4f2 */
L_171CD4B4:
    /* test LO8(eax), 2 */ /* 0x171CD4B4: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CD4F2; /* 0x171CD4B6: jne 0x171cd4f2 */
L_171CD4B8:
    PUSH32(esp, 0x1702644Cu); /* 0x171CD4B8: push 0x1702644c */
    RECOMP_BACKEDGE();
    goto L_171CD32E; /* 0x171CD4BD: jmp 0x171cd32e */
L_171CD4C2:
    eax = MEM32(esi + 0x68); /* 0x171CD4C2: mov eax, dword ptr [esi + 0x68] */
    /* test LO8(eax), 1 */ /* 0x171CD4C5: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CD4D0; /* 0x171CD4C7: jne 0x171cd4d0 */
L_171CD4C9:
    PUSH32(esp, 0x17026468u); /* 0x171CD4C9: push 0x17026468 */
    goto L_171CD4E2; /* 0x171CD4CE: jmp 0x171cd4e2 */
L_171CD4D0:
    /* cmp MEM8(esi + 0x126), 3 */ /* 0x171CD4D0: cmp byte ptr [esi + 0x126], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x126)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD4E8; /* 0x171CD4D7: jne 0x171cd4e8 */
L_171CD4D9:
    /* test LO8(eax), 2 */ /* 0x171CD4D9: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CD4E8; /* 0x171CD4DB: jne 0x171cd4e8 */
L_171CD4DD:
    PUSH32(esp, 0x1702644Cu); /* 0x171CD4DD: push 0x1702644c */
L_171CD4E2:
    PUSH32(esp, esi); /* 0x171CD4E2: push esi */
    RECOMP_CALL(sub_171CA861); /* 0x171CD4E3: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CD4E8:
    _flag_a = (uint32_t)((MEM32(esi + 0x68) | 4)); _flag_b = (uint32_t)((MEM32(esi + 0x68) | 4));
    MEM32(esi + 0x68) = MEM32(esi + 0x68) | 4; /* 0x171CD4E8: or dword ptr [esi + 0x68], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x10C) = ebx; /* 0x171CD4EC: mov dword ptr [esi + 0x10c], ebx */
L_171CD4F2:
    ecx = MEM32(ebp + (-0x4)); /* 0x171CD4F2: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171CD4F5: pop edi */
    esi = POP32_VAL(esp); /* 0x171CD4F6: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CD4F7: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171CD4F8: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CD4FD: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CD4FE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CD506(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CD506u);

L_171CD506:
    edi = edi; /* 0x171CD506: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CD508: push ebp */
    ebp = esp; /* 0x171CD509: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171CD50B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CD50C: mov esi, dword ptr [ebp + 8] */
    /* test MEM8(esi + 0x6C), 0x40u */ /* 0x171CD50F: test byte ptr [esi + 0x6c], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0x6C)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CD51D; /* 0x171CD513: jne 0x171cd51d */
L_171CD515:
    PUSH32(esp, esi); /* 0x171CD515: push esi */
    RECOMP_CALL(sub_171D5E74); /* 0x171CD516: call 0x171d5e74 */
    RECOMP_FLAGS_IN();
    goto L_171CD528; /* 0x171CD51B: jmp 0x171cd528 */
L_171CD51D:
    PUSH32(esp, 0x170264C0u); /* 0x171CD51D: push 0x170264c0 */
    PUSH32(esp, esi); /* 0x171CD522: push esi */
    RECOMP_CALL(sub_171CA889); /* 0x171CD523: call 0x171ca889 */
    RECOMP_FLAGS_IN();
L_171CD528:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171CD528: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171CD52B: push esi */
    RECOMP_CALL(sub_171CE38B); /* 0x171CD52C: call 0x171ce38b */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171CD531: pop esi */
    ebp = POP32_VAL(esp); /* 0x171CD532: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CD533: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171CD53B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CD53Bu);

L_171CD53B:
    edi = edi; /* 0x171CD53B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CD53D: push ebp */
    ebp = esp; /* 0x171CD53E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x171CD540: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171CD543: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171CD548: push ebx */
    PUSH32(esp, esi); /* 0x171CD549: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CD54A: mov esi, dword ptr [ebp + 8] */
    /* test MEM8(esi + 0x6C), 0x40u */ /* 0x171CD54D: test byte ptr [esi + 0x6c], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0x6C)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x171CD551: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x171CD552: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x171CD555: mov eax, dword ptr [ebp + 0xc] */
    edi = 0xFFu; /* 0x171CD558: mov edi, 0xff */
    PUSH32(esp, 0x55u); /* 0x171CD55D: push 0x55 */
    MEM32(ebp + (-0x14)) = eax; /* 0x171CD55F: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + 0x10); /* 0x171CD562: mov eax, dword ptr [ebp + 0x10] */
    ebx = POP32_VAL(esp); /* 0x171CD565: pop ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x171CD566: mov dword ptr [ebp - 0x10], eax */
    MEM8(ebp + (-0xC)) = (uint8_t)(0x49u); /* 0x171CD569: mov byte ptr [ebp - 0xc], 0x49 */
    MEM8(ebp + (-0xB)) = (uint8_t)(0x44u); /* 0x171CD56D: mov byte ptr [ebp - 0xb], 0x44 */
    MEM8(ebp + (-0xA)) = (uint8_t)(0x41u); /* 0x171CD571: mov byte ptr [ebp - 0xa], 0x41 */
    MEM8(ebp + (-0x9)) = (uint8_t)(0x54u); /* 0x171CD575: mov byte ptr [ebp - 9], 0x54 */
    MEM8(ebp + (-0x8)) = (uint8_t)(0); /* 0x171CD579: mov byte ptr [ebp - 8], 0 */
    MEM32(ebp + (-0x34)) = edi; /* 0x171CD57D: mov dword ptr [ebp - 0x34], edi */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x171CD580: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x2C)) = edi; /* 0x171CD587: mov dword ptr [ebp - 0x2c], edi */
    MEM32(ebp + (-0x28)) = 0x33u; /* 0x171CD58A: mov dword ptr [ebp - 0x28], 0x33 */
    MEM32(ebp + (-0x24)) = edi; /* 0x171CD591: mov dword ptr [ebp - 0x24], edi */
    MEM32(ebp + (-0x20)) = ebx; /* 0x171CD594: mov dword ptr [ebp - 0x20], ebx */
    MEM32(ebp + (-0x1C)) = edi; /* 0x171CD597: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x50)) = 0x80u; /* 0x171CD59A: mov dword ptr [ebp - 0x50], 0x80 */
    MEM32(ebp + (-0x4C)) = 8; /* 0x171CD5A1: mov dword ptr [ebp - 0x4c], 8 */
    MEM32(ebp + (-0x48)) = 0x88u; /* 0x171CD5A8: mov dword ptr [ebp - 0x48], 0x88 */
    MEM32(ebp + (-0x44)) = 0x22u; /* 0x171CD5AF: mov dword ptr [ebp - 0x44], 0x22 */
    MEM32(ebp + (-0x40)) = 0xAAu; /* 0x171CD5B6: mov dword ptr [ebp - 0x40], 0xaa */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x171CD5BD: mov dword ptr [ebp - 0x3c], ebx */
    MEM32(ebp + (-0x38)) = edi; /* 0x171CD5C0: mov dword ptr [ebp - 0x38], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CD5CE; /* 0x171CD5C3: jne 0x171cd5ce */
L_171CD5C5:
    PUSH32(esp, esi); /* 0x171CD5C5: push esi */
    RECOMP_CALL(sub_171D5E74); /* 0x171CD5C6: call 0x171d5e74 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x171CD5CB: mov eax, dword ptr [ebp - 0x10] */
L_171CD5CE:
    /* cmp MEM8(esi + 0x123), 0 */ /* 0x171CD5CE: cmp byte ptr [esi + 0x123], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x123)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CD6CC; /* 0x171CD5D5: je 0x171cd6cc */
L_171CD5DB:
    /* test MEM8(esi + 0x70), 2 */ /* 0x171CD5DB: test byte ptr [esi + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD6CC; /* 0x171CD5DF: je 0x171cd6cc */
L_171CD5E5:
    ecx = (uint32_t)MEM8(esi + 0x124); /* 0x171CD5E5: movzx ecx, byte ptr [esi + 0x124] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x171CD5EC: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171CD6AE; /* 0x171CD5EF: je 0x171cd6ae */
L_171CD5F5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171CD5F5: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171CD690; /* 0x171CD5F6: je 0x171cd690 */
L_171CD5FC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171CD5FC: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171CD677; /* 0x171CD5FD: je 0x171cd677 */
L_171CD5FF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171CD5FF: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171CD65D; /* 0x171CD600: je 0x171cd65d */
L_171CD602:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171CD602: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171CD644; /* 0x171CD603: je 0x171cd644 */
L_171CD605:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171CD605: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171CD627; /* 0x171CD606: je 0x171cd627 */
L_171CD608:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171CD608: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171CD6CC; /* 0x171CD609: jne 0x171cd6cc */
L_171CD60F:
    /* test MEM8(esi + 0xE4), 1 */ /* 0x171CD60F: test byte ptr [esi + 0xe4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CD6CC; /* 0x171CD616: jne 0x171cd6cc */
L_171CD61C:
    PUSH32(esp, esi); /* 0x171CD61C: push esi */
    RECOMP_CALL(sub_171D7B48); /* 0x171CD61D: call 0x171d7b48 */
    RECOMP_FLAGS_IN();
    goto L_171CD92A; /* 0x171CD622: jmp 0x171cd92a */
L_171CD627:
    /* test MEM8(esi + 0xE4), 1 */ /* 0x171CD627: test byte ptr [esi + 0xe4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CD63D; /* 0x171CD62E: jne 0x171cd63d */
L_171CD630:
    /* cmp MEM32(esi + 0xC8), 2 */ /* 0x171CD630: cmp dword ptr [esi + 0xc8], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171CD6CC; /* 0x171CD637: jae 0x171cd6cc */
L_171CD63D:
    /* test eax, eax */ /* 0x171CD63D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD61C; /* 0x171CD63F: je 0x171cd61c */
L_171CD641:
    PUSH32(esp, ebx); /* 0x171CD641: push ebx */
    goto L_171CD6C0; /* 0x171CD642: jmp 0x171cd6c0 */
L_171CD644:
    ecx = MEM32(esi + 0xE4); /* 0x171CD644: mov ecx, dword ptr [esi + 0xe4] */
    edx = ecx; /* 0x171CD64A: mov edx, ecx */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(3) << 24;
    SET_LO8(edx, LO8(edx) & 3); /* 0x171CD64C: and dl, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(edx), 2 */ /* 0x171CD64F: cmp dl, 2 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CD6CC; /* 0x171CD652: je 0x171cd6cc */
L_171CD654:
    /* test eax, eax */ /* 0x171CD654: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD61C; /* 0x171CD656: je 0x171cd61c */
L_171CD658:
    /* test LO8(ecx), 2 */ /* 0x171CD658: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_171CD6B9; /* 0x171CD65B: jmp 0x171cd6b9 */
L_171CD65D:
    /* test MEM8(esi + 0xE4), 3 */ /* 0x171CD65D: test byte ptr [esi + 0xe4], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CD66F; /* 0x171CD664: jne 0x171cd66f */
L_171CD666:
    /* cmp MEM32(esi + 0xC8), 3 */ /* 0x171CD666: cmp dword ptr [esi + 0xc8], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC8)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171CD6CC; /* 0x171CD66D: jae 0x171cd6cc */
L_171CD66F:
    /* test eax, eax */ /* 0x171CD66F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD61C; /* 0x171CD671: je 0x171cd61c */
L_171CD673:
    PUSH32(esp, 0x33u); /* 0x171CD673: push 0x33 */
    goto L_171CD6C0; /* 0x171CD675: jmp 0x171cd6c0 */
L_171CD677:
    ecx = MEM32(esi + 0xE4); /* 0x171CD677: mov ecx, dword ptr [esi + 0xe4] */
    edx = ecx; /* 0x171CD67D: mov edx, ecx */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    SET_LO8(edx, LO8(edx) & 7); /* 0x171CD67F: and dl, 7 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(edx), 4 */ /* 0x171CD682: cmp dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CD6CC; /* 0x171CD685: je 0x171cd6cc */
L_171CD687:
    /* test eax, eax */ /* 0x171CD687: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD61C; /* 0x171CD689: je 0x171cd61c */
L_171CD68B:
    /* test LO8(ecx), 4 */ /* 0x171CD68B: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_171CD6B9; /* 0x171CD68E: jmp 0x171cd6b9 */
L_171CD690:
    /* test MEM8(esi + 0xE4), 7 */ /* 0x171CD690: test byte ptr [esi + 0xe4], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CD6A2; /* 0x171CD697: jne 0x171cd6a2 */
L_171CD699:
    /* cmp MEM32(esi + 0xC8), 5 */ /* 0x171CD699: cmp dword ptr [esi + 0xc8], 5 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC8)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171CD6CC; /* 0x171CD6A0: jae 0x171cd6cc */
L_171CD6A2:
    /* test eax, eax */ /* 0x171CD6A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD61C; /* 0x171CD6A4: je 0x171cd61c */
L_171CD6AA:
    PUSH32(esp, 0xFu); /* 0x171CD6AA: push 0xf */
    goto L_171CD6C0; /* 0x171CD6AC: jmp 0x171cd6c0 */
L_171CD6AE:
    /* test MEM8(esi + 0xE4), 7 */ /* 0x171CD6AE: test byte ptr [esi + 0xe4], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD6CC; /* 0x171CD6B5: je 0x171cd6cc */
L_171CD6B7:
    /* test eax, eax */ /* 0x171CD6B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_171CD6B9:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171CD61C; /* 0x171CD6B9: je 0x171cd61c */
L_171CD6BF:
    PUSH32(esp, edi); /* 0x171CD6BF: push edi */
L_171CD6C0:
    PUSH32(esp, eax); /* 0x171CD6C0: push eax */
    PUSH32(esp, esi); /* 0x171CD6C1: push esi */
    RECOMP_CALL(sub_171D565F); /* 0x171CD6C2: call 0x171d565f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171CD61C; /* 0x171CD6C7: jmp 0x171cd61c */
L_171CD6CC:
    /* test MEM8(esi + 0x68), 4 */ /* 0x171CD6CC: test byte ptr [esi + 0x68], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x68)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CD6DD; /* 0x171CD6D0: jne 0x171cd6dd */
L_171CD6D2:
    PUSH32(esp, 0x1702654Cu); /* 0x171CD6D2: push 0x1702654c */
    PUSH32(esp, esi); /* 0x171CD6D7: push esi */
    RECOMP_CALL(sub_171CA861); /* 0x171CD6D8: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CD6DD:
    eax = MEM32(esi + 0xEC); /* 0x171CD6DD: mov eax, dword ptr [esi + 0xec] */
    MEM32(esi + 0x80) = eax; /* 0x171CD6E3: mov dword ptr [esi + 0x80], eax */
    eax = MEM32(esi + 0xDC); /* 0x171CD6E9: mov eax, dword ptr [esi + 0xdc] */
    MEM32(esi + 0x84) = eax; /* 0x171CD6EF: mov dword ptr [esi + 0x84], eax */
    ebx = esi + 0x74; /* 0x171CD6F5: lea ebx, [esi + 0x74] */
L_171CD6F8:
    /* cmp MEM32(esi + 0x78), 0 */ /* 0x171CD6F8: cmp dword ptr [esi + 0x78], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x78)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD795; /* 0x171CD6FC: jne 0x171cd795 */
L_171CD702:
    /* cmp MEM32(esi + 0x10C), 0 */ /* 0x171CD702: cmp dword ptr [esi + 0x10c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD761; /* 0x171CD709: jne 0x171cd761 */
L_171CD70B:
    ebx = esi + 0x11C; /* 0x171CD70B: lea ebx, [esi + 0x11c] */
L_171CD711:
    PUSH32(esp, 0); /* 0x171CD711: push 0 */
    PUSH32(esp, esi); /* 0x171CD713: push esi */
    RECOMP_CALL(sub_171D613B); /* 0x171CD714: call 0x171d613b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x171CD719: push 4 */
    eax = ebp + (-0x18); /* 0x171CD71B: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171CD71E: push eax */
    PUSH32(esp, esi); /* 0x171CD71F: push esi */
    RECOMP_CALL(sub_171D1D62); /* 0x171CD720: call 0x171d1d62 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x171CD725: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171CD728: push eax */
    PUSH32(esp, esi); /* 0x171CD729: push esi */
    RECOMP_CALL(sub_171D610A); /* 0x171CD72A: call 0x171d610a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171CD72F: push esi */
    MEM32(esi + 0x10C) = eax; /* 0x171CD730: mov dword ptr [esi + 0x10c], eax */
    RECOMP_CALL(sub_171CAA51); /* 0x171CD736: call 0x171caa51 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x171CD73B: push 4 */
    PUSH32(esp, ebx); /* 0x171CD73D: push ebx */
    PUSH32(esp, esi); /* 0x171CD73E: push esi */
    RECOMP_CALL(sub_171D51E4); /* 0x171CD73F: call 0x171d51e4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x171CD744: mov ecx, dword ptr [ebx] */
    eax = ebp + (-0xC); /* 0x171CD746: lea eax, [ebp - 0xc] */
    /* cmp ecx, MEM32(eax) */ /* 0x171CD749: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CD758; /* 0x171CD74B: je 0x171cd758 */
L_171CD74D:
    PUSH32(esp, 0x17026534u); /* 0x171CD74D: push 0x17026534 */
    PUSH32(esp, esi); /* 0x171CD752: push esi */
    RECOMP_CALL(sub_171CA861); /* 0x171CD753: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CD758:
    /* cmp MEM32(esi + 0x10C), 0 */ /* 0x171CD758: cmp dword ptr [esi + 0x10c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CD711; /* 0x171CD75F: je 0x171cd711 */
L_171CD761:
    eax = MEM32(esi + 0xB0); /* 0x171CD761: mov eax, dword ptr [esi + 0xb0] */
    edx = MEM32(esi + 0x10C); /* 0x171CD767: mov edx, dword ptr [esi + 0x10c] */
    /* cmp eax, edx */ /* 0x171CD76D: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0xAC); /* 0x171CD76F: mov ecx, dword ptr [esi + 0xac] */
    ebx = esi + 0x74; /* 0x171CD775: lea ebx, [esi + 0x74] */
    MEM32(esi + 0x78) = eax; /* 0x171CD778: mov dword ptr [esi + 0x78], eax */
    MEM32(ebx) = ecx; /* 0x171CD77B: mov dword ptr [ebx], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171CD782; /* 0x171CD77D: jbe 0x171cd782 */
L_171CD77F:
    MEM32(esi + 0x78) = edx; /* 0x171CD77F: mov dword ptr [esi + 0x78], edx */
L_171CD782:
    PUSH32(esp, MEM32(esi + 0x78)); /* 0x171CD782: push dword ptr [esi + 0x78] */
    PUSH32(esp, ecx); /* 0x171CD785: push ecx */
    PUSH32(esp, esi); /* 0x171CD786: push esi */
    RECOMP_CALL(sub_171D51E4); /* 0x171CD787: call 0x171d51e4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x78); /* 0x171CD78C: mov eax, dword ptr [esi + 0x78] */
    _flag_a = (uint32_t)(MEM32(esi + 0x10C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esi + 0x10C) = MEM32(esi + 0x10C) - eax; /* 0x171CD78F: sub dword ptr [esi + 0x10c], eax */
    _flag_k = FK_CMP;
L_171CD795:
    PUSH32(esp, 1); /* 0x171CD795: push 1 */
    PUSH32(esp, ebx); /* 0x171CD797: push ebx */
    RECOMP_CALL(sub_17205AFD); /* 0x171CD798: call 0x17205afd */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x171CD79D: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CD7CB; /* 0x171CD7A0: je 0x171cd7cb */
L_171CD7A2:
    /* test eax, eax */ /* 0x171CD7A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD7BC; /* 0x171CD7A4: je 0x171cd7bc */
L_171CD7A6:
    eax = MEM32(esi + 0x8C); /* 0x171CD7A6: mov eax, dword ptr [esi + 0x8c] */
    /* test eax, eax */ /* 0x171CD7AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171CD7B5; /* 0x171CD7AE: jne 0x171cd7b5 */
L_171CD7B0:
    eax = 0x17026520u; /* 0x171CD7B0: mov eax, 0x17026520 */
L_171CD7B5:
    PUSH32(esp, eax); /* 0x171CD7B5: push eax */
    PUSH32(esp, esi); /* 0x171CD7B6: push esi */
    RECOMP_CALL(sub_171CA861); /* 0x171CD7B7: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CD7BC:
    /* cmp MEM32(esi + 0x84), 0 */ /* 0x171CD7BC: cmp dword ptr [esi + 0x84], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x84)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD6F8; /* 0x171CD7C3: jne 0x171cd6f8 */
L_171CD7C9:
    goto L_171CD7F5; /* 0x171CD7C9: jmp 0x171cd7f5 */
L_171CD7CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171CD7CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x84), eax */ /* 0x171CD7CD: cmp dword ptr [esi + 0x84], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x84)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD7E2; /* 0x171CD7D3: jne 0x171cd7e2 */
L_171CD7D5:
    /* cmp MEM32(esi + 0x78), eax */ /* 0x171CD7D5: cmp dword ptr [esi + 0x78], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x78)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD7E2; /* 0x171CD7D8: jne 0x171cd7e2 */
L_171CD7DA:
    /* cmp MEM32(esi + 0x10C), eax */ /* 0x171CD7DA: cmp dword ptr [esi + 0x10c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x10C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CD7ED; /* 0x171CD7E0: je 0x171cd7ed */
L_171CD7E2:
    PUSH32(esp, 0x17026508u); /* 0x171CD7E2: push 0x17026508 */
    PUSH32(esp, esi); /* 0x171CD7E7: push esi */
    RECOMP_CALL(sub_171CA861); /* 0x171CD7E8: call 0x171ca861 */
    RECOMP_FLAGS_IN();
L_171CD7ED:
    _flag_a = (uint32_t)((MEM32(esi + 0x68) | 8)); _flag_b = (uint32_t)((MEM32(esi + 0x68) | 8));
    MEM32(esi + 0x68) = MEM32(esi + 0x68) | 8; /* 0x171CD7ED: or dword ptr [esi + 0x68], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(esi + 0x6C) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi + 0x6C) | 0x20u));
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) | 0x20u; /* 0x171CD7F1: or dword ptr [esi + 0x6c], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171CD7F5:
    SET_LO8(eax, MEM8(esi + 0x126)); /* 0x171CD7F5: mov al, byte ptr [esi + 0x126] */
    ecx = MEM32(esi + 0xE0); /* 0x171CD7FB: mov ecx, dword ptr [esi + 0xe0] */
    MEM8(esi + 0x108) = (uint8_t)(LO8(eax)); /* 0x171CD801: mov byte ptr [esi + 0x108], al */
    SET_LO8(eax, MEM8(esi + 0x12A)); /* 0x171CD807: mov al, byte ptr [esi + 0x12a] */
    MEM8(esi + 0x10A) = (uint8_t)(LO8(eax)); /* 0x171CD80D: mov byte ptr [esi + 0x10a], al */
    SET_LO8(eax, MEM8(esi + 0x127)); /* 0x171CD813: mov al, byte ptr [esi + 0x127] */
    MEM8(esi + 0x109) = (uint8_t)(LO8(eax)); /* 0x171CD819: mov byte ptr [esi + 0x109], al */
    SET_LO8(eax, MEM8(esi + 0x129)); /* 0x171CD81F: mov al, byte ptr [esi + 0x129] */
    edx = esi + 0x100; /* 0x171CD825: lea edx, [esi + 0x100] */
    MEM8(esi + 0x10B) = (uint8_t)(LO8(eax)); /* 0x171CD82B: mov byte ptr [esi + 0x10b], al */
    /* cmp LO8(eax), 8 */ /* 0x171CD831: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(edx) = ecx; /* 0x171CD833: mov dword ptr [edx], ecx */
    eax = (uint32_t)LO8(eax); /* 0x171CD835: movzx eax, al */
    if (CMP_B(_flag_a, _flag_b)) goto L_171CD842; /* 0x171CD838: jb 0x171cd842 */
L_171CD83A:
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171CD83A: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x171CD83A: shr eax, 3 */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x171CD83D: imul eax, ecx */
    goto L_171CD84B; /* 0x171CD840: jmp 0x171cd84b */
L_171CD842:
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x171CD842: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x171CD845: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171CD848: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x171CD848: shr eax, 3 */
L_171CD84B:
    MEM32(esi + 0x104) = eax; /* 0x171CD84B: mov dword ptr [esi + 0x104], eax */
    eax = MEM32(esi + 0xEC); /* 0x171CD851: mov eax, dword ptr [esi + 0xec] */
    SET_LO8(ecx, MEM8(eax)); /* 0x171CD857: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x171CD859: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD872; /* 0x171CD85B: je 0x171cd872 */
L_171CD85D:
    ecx = (uint32_t)LO8(ecx); /* 0x171CD85D: movzx ecx, cl */
    PUSH32(esp, ecx); /* 0x171CD860: push ecx */
    ecx = MEM32(esi + 0xE8); /* 0x171CD861: mov ecx, dword ptr [esi + 0xe8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171CD867: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x171CD868: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CD869: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171CD86A: push eax */
    PUSH32(esp, edx); /* 0x171CD86B: push edx */
    PUSH32(esp, esi); /* 0x171CD86C: push esi */
    RECOMP_CALL(sub_171D5CF6); /* 0x171CD86D: call 0x171d5cf6 */
    RECOMP_FLAGS_IN();
L_171CD872:
    eax = MEM32(esi + 0xD8); /* 0x171CD872: mov eax, dword ptr [esi + 0xd8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171CD878: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171CD879: push eax */
    PUSH32(esp, MEM32(esi + 0xEC)); /* 0x171CD87A: push dword ptr [esi + 0xec] */
    PUSH32(esp, MEM32(esi + 0xE8)); /* 0x171CD880: push dword ptr [esi + 0xe8] */
    PUSH32(esp, esi); /* 0x171CD886: push esi */
    RECOMP_CALL(sub_171D1EED); /* 0x171CD887: call 0x171d1eed */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171CD88C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x70), ebx */ /* 0x171CD88E: cmp dword ptr [esi + 0x70], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x70)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171CD899; /* 0x171CD891: jne 0x171cd899 */
L_171CD893:
    /* test MEM8(esi + 0x6E), 0x40u */ /* 0x171CD893: test byte ptr [esi + 0x6e], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0x6E)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD89F; /* 0x171CD897: je 0x171cd89f */
L_171CD899:
    PUSH32(esp, esi); /* 0x171CD899: push esi */
    RECOMP_CALL(sub_171D1977); /* 0x171CD89A: call 0x171d1977 */
    RECOMP_FLAGS_IN();
L_171CD89F:
    /* cmp MEM8(esi + 0x123), 0 */ /* 0x171CD89F: cmp byte ptr [esi + 0x123], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x123)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CD8EB; /* 0x171CD8A6: je 0x171cd8eb */
L_171CD8A8:
    /* test MEM8(esi + 0x70), 2 */ /* 0x171CD8A8: test byte ptr [esi + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD8EB; /* 0x171CD8AC: je 0x171cd8eb */
L_171CD8AE:
    /* cmp MEM8(esi + 0x124), 6 */ /* 0x171CD8AE: cmp byte ptr [esi + 0x124], 6 */
    _flag_a = (uint32_t)(MEM8(esi + 0x124)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_171CD8BD; /* 0x171CD8B5: jae 0x171cd8bd */
L_171CD8B7:
    PUSH32(esp, esi); /* 0x171CD8B7: push esi */
    RECOMP_CALL(sub_171D591B); /* 0x171CD8B8: call 0x171d591b */
    RECOMP_FLAGS_IN();
L_171CD8BD:
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x171CD8BD: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CD8D6; /* 0x171CD8C0: je 0x171cd8d6 */
L_171CD8C2:
    eax = (uint32_t)MEM8(esi + 0x124); /* 0x171CD8C2: movzx eax, byte ptr [esi + 0x124] */
    PUSH32(esp, MEM32(ebp + eax * 4 + (-0x34))); /* 0x171CD8C9: push dword ptr [ebp + eax*4 - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x171CD8CD: push dword ptr [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x171CD8D0: push esi */
    RECOMP_CALL(sub_171D565F); /* 0x171CD8D1: call 0x171d565f */
    RECOMP_FLAGS_IN();
L_171CD8D6:
    /* cmp MEM32(ebp + (-0x14)), ebx */ /* 0x171CD8D6: cmp dword ptr [ebp - 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CD909; /* 0x171CD8D9: je 0x171cd909 */
L_171CD8DB:
    eax = (uint32_t)MEM8(esi + 0x124); /* 0x171CD8DB: movzx eax, byte ptr [esi + 0x124] */
    PUSH32(esp, MEM32(ebp + eax * 4 + (-0x50))); /* 0x171CD8E2: push dword ptr [ebp + eax*4 - 0x50] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x171CD8E6: push dword ptr [ebp - 0x14] */
    goto L_171CD903; /* 0x171CD8E9: jmp 0x171cd903 */
L_171CD8EB:
    /* cmp MEM32(ebp + (-0x14)), ebx */ /* 0x171CD8EB: cmp dword ptr [ebp - 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CD8FA; /* 0x171CD8EE: je 0x171cd8fa */
L_171CD8F0:
    PUSH32(esp, edi); /* 0x171CD8F0: push edi */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x171CD8F1: push dword ptr [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x171CD8F4: push esi */
    RECOMP_CALL(sub_171D565F); /* 0x171CD8F5: call 0x171d565f */
    RECOMP_FLAGS_IN();
L_171CD8FA:
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x171CD8FA: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CD909; /* 0x171CD8FD: je 0x171cd909 */
L_171CD8FF:
    PUSH32(esp, edi); /* 0x171CD8FF: push edi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x171CD900: push dword ptr [ebp - 0x10] */
L_171CD903:
    PUSH32(esp, esi); /* 0x171CD903: push esi */
    RECOMP_CALL(sub_171D565F); /* 0x171CD904: call 0x171d565f */
    RECOMP_FLAGS_IN();
L_171CD909:
    PUSH32(esp, esi); /* 0x171CD909: push esi */
    RECOMP_CALL(sub_171D7B48); /* 0x171CD90A: call 0x171d7b48 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x198); /* 0x171CD90F: mov eax, dword ptr [esi + 0x198] */
    /* cmp eax, ebx */ /* 0x171CD915: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171CD92A; /* 0x171CD917: je 0x171cd92a */
L_171CD919:
    ecx = (uint32_t)MEM8(esi + 0x124); /* 0x171CD919: movzx ecx, byte ptr [esi + 0x124] */
    PUSH32(esp, ecx); /* 0x171CD920: push ecx */
    PUSH32(esp, MEM32(esi + 0xE4)); /* 0x171CD921: push dword ptr [esi + 0xe4] */
    PUSH32(esp, esi); /* 0x171CD927: push esi */
    RECOMP_ICALL(eax); /* 0x171CD928: call eax */
    RECOMP_FLAGS_IN();
L_171CD92A:
    ecx = MEM32(ebp + (-0x4)); /* 0x171CD92A: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171CD92D: pop edi */
    esi = POP32_VAL(esp); /* 0x171CD92E: pop esi */
    ebx = POP32_VAL(esp); /* 0x171CD92F: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171CD930: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CD935: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171CD936: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171CD93E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171CD93Eu);

L_171CD93E:
    edi = edi; /* 0x171CD93E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171CD940: push ebp */
    ebp = esp; /* 0x171CD941: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171CD943: push ecx */
    PUSH32(esp, esi); /* 0x171CD944: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171CD945: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171CD948: push edi */
    PUSH32(esp, esi); /* 0x171CD949: push esi */
    RECOMP_CALL(sub_171CDF0D); /* 0x171CD94A: call 0x171cdf0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171CD94F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(esi + 0xCC); /* 0x171CD951: mov edi, dword ptr [esi + 0xcc] */
    MEM32(esi + 0xD0) = edi; /* 0x171CD957: mov dword ptr [esi + 0xd0], edi */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171CD985; /* 0x171CD95D: jle 0x171cd985 */
L_171CD95F:
    MEM32(ebp + (-0x4)) = eax; /* 0x171CD95F: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x171CD962: push ebx */
L_171CD963:
    /* test edi, edi */ /* 0x171CD963: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0xC); /* 0x171CD965: mov ebx, dword ptr [ebp + 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171CD97F; /* 0x171CD968: jbe 0x171cd97f */
L_171CD96A:
    MEM32(ebp + 0x8) = edi; /* 0x171CD96A: mov dword ptr [ebp + 8], edi */
L_171CD96D:
    PUSH32(esp, 0); /* 0x171CD96D: push 0 */
    PUSH32(esp, MEM32(ebx)); /* 0x171CD96F: push dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x171CD971: push esi */
    RECOMP_CALL(sub_171CD53B); /* 0x171CD972: call 0x171cd53b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x171CD977: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x171CD97A: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171CD96D; /* 0x171CD97D: jne 0x171cd96d */
L_171CD97F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x171CD97F: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171CD963; /* 0x171CD982: jne 0x171cd963 */
L_171CD984:
    ebx = POP32_VAL(esp); /* 0x171CD984: pop ebx */
L_171CD985:
    edi = POP32_VAL(esp); /* 0x171CD985: pop edi */
    esi = POP32_VAL(esp); /* 0x171CD986: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171CD987: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171CD988: ret 8 */
    RECOMP_REGS_OUT();
}
