#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_171A4503(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A4503u);

L_171A4503:
    edi = edi; /* 0x171A4503: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A4505: push ebp */
    ebp = esp; /* 0x171A4506: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171A4508: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x171A450B: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x171A450D: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A450E: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0xAu */ /* 0x171A450F: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171A4512: push esi */
    PUSH32(esp, edi); /* 0x171A4513: push edi */
    if (CMP_A(_flag_a, _flag_b)) goto L_171A4DDA; /* 0x171A4514: ja 0x171a4dda */
L_171A451A:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x171A4DE4)); goto _ljump; }
L_171A4521:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x171A4521: push dword ptr [ebp + 0x24] */
    esi = 0x17250DC8u; /* 0x171A4524: mov esi, 0x17250dc8 */
    PUSH32(esp, 6); /* 0x171A4529: push 6 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A452B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171A452E: push esi */
    RECOMP_CALL(sub_171A5129); /* 0x171A452F: call 0x171a5129 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(0x17250DC8)); /* 0x171A4534: mov cl, byte ptr [0x17250dc8] */
    PUSH32(esp, 0x5Au); /* 0x171A453A: push 0x5a */
    eax = (uint32_t)LO8(ecx); /* 0x171A453C: movzx eax, cl */
    /* cmp eax, 0x61u */ /* 0x171A453F: cmp eax, 0x61 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x171A4542: pop ebx */
    PUSH32(esp, 2); /* 0x171A4543: push 2 */
    MEM32(0x17250DC4) = eax; /* 0x171A4545: mov dword ptr [0x17250dc4], eax */
    MEM32(0x17250DC0) = ebx; /* 0x171A454A: mov dword ptr [0x17250dc0], ebx */
    edi = POP32_VAL(esp); /* 0x171A4550: pop edi */
    if (CMP_L(_flag_a, _flag_b)) goto L_171A458F; /* 0x171A4551: jl 0x171a458f */
L_171A4553:
    /* cmp eax, 0x7Au */ /* 0x171A4553: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171A458F; /* 0x171A4556: jg 0x171a458f */
L_171A4558:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x20u); /* 0x171A4558: sub al, 0x20 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, LO8(eax)); /* 0x171A455A: mov cl, al */
    MEM8(0x17250DC8) = (uint8_t)(LO8(ecx)); /* 0x171A455C: mov byte ptr [0x17250dc8], cl */
    edx = edi; /* 0x171A4562: mov edx, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171A4564: dec esi */
    _flag_k = FK_DEC;
L_171A4565:
    eax = (uint32_t)MEM8(esi + edx); /* 0x171A4565: movzx eax, byte ptr [esi + edx] */
    /* cmp eax, 0x61u */ /* 0x171A4569: cmp eax, 0x61 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x17250DC4) = eax; /* 0x171A456C: mov dword ptr [0x17250dc4], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_171A4583; /* 0x171A4571: jl 0x171a4583 */
L_171A4573:
    /* cmp eax, 0x7Au */ /* 0x171A4573: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171A4583; /* 0x171A4576: jg 0x171a4583 */
L_171A4578:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x20u); /* 0x171A4578: sub al, 0x20 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(esi + edx) = (uint8_t)(LO8(eax)); /* 0x171A457A: mov byte ptr [esi + edx], al */
    SET_LO8(ecx, MEM8(0x17250DC8)); /* 0x171A457D: mov cl, byte ptr [0x17250dc8] */
L_171A4583:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171A4583: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 6 */ /* 0x171A4584: cmp edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171A4565; /* 0x171A4587: jle 0x171a4565 */
L_171A4589:
    MEM32(0x17250DBC) = edx; /* 0x171A4589: mov dword ptr [0x17250dbc], edx */
L_171A458F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A458F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A4591: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171A4592: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(ecx), 0x53u */ /* 0x171A4594: cmp cl, 0x53 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x53u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(0x17250DB8) = (uint8_t)(LO8(ecx)); /* 0x171A4597: mov byte ptr [0x17250db8], cl */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A45AA; /* 0x171A459D: je 0x171a45aa */
L_171A459F:
    /* cmp LO8(ecx), 0x44u */ /* 0x171A459F: cmp cl, 0x44 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(0x17250DB4) = edx; /* 0x171A45A2: mov dword ptr [0x17250db4], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A45AF; /* 0x171A45A8: jne 0x171a45af */
L_171A45AA:
    MEM32(0x17250DB4) = eax; /* 0x171A45AA: mov dword ptr [0x17250db4], eax */
L_171A45AF:
    /* cmp LO8(ecx), 0x43u */ /* 0x171A45AF: cmp cl, 0x43 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A46BC; /* 0x171A45B2: je 0x171a46bc */
L_171A45B8:
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x171A45B8: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A46BC; /* 0x171A45BA: je 0x171a46bc */
L_171A45C0:
    /* cmp MEM32(0x17250DB4), edx */ /* 0x171A45C0: cmp dword ptr [0x17250db4], edx */
    _flag_a = (uint32_t)(MEM32(0x17250DB4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x17250DB0) = edx; /* 0x171A45C6: mov dword ptr [0x17250db0], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A4DDD; /* 0x171A45CC: je 0x171a4ddd */
L_171A45D2:
    PUSH32(esp, edi); /* 0x171A45D2: push edi */
    PUSH32(esp, edi); /* 0x171A45D3: push edi */
    PUSH32(esp, 0x17250DC9u); /* 0x171A45D4: push 0x17250dc9 */
    PUSH32(esp, 0x17250DACu); /* 0x171A45D9: push 0x17250dac */
    RECOMP_CALL(sub_171A5129); /* 0x171A45DE: call 0x171a5129 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x171A45E3: push 3 */
    PUSH32(esp, 3); /* 0x171A45E5: push 3 */
    PUSH32(esp, 0x17250DCBu); /* 0x171A45E7: push 0x17250dcb */
    ebx = 0x17250DA8u; /* 0x171A45EC: mov ebx, 0x17250da8 */
    PUSH32(esp, ebx); /* 0x171A45F1: push ebx */
    RECOMP_CALL(sub_171A5129); /* 0x171A45F2: call 0x171a5129 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171A45F7: push edi */
    PUSH32(esp, edi); /* 0x171A45F8: push edi */
    PUSH32(esp, 0x17250DA9u); /* 0x171A45F9: push 0x17250da9 */
    esi = 0x17250DA4u; /* 0x171A45FE: mov esi, 0x17250da4 */
    PUSH32(esp, esi); /* 0x171A4603: push esi */
    RECOMP_CALL(sub_171A5129); /* 0x171A4604: call 0x171a5129 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171A4609: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x171A460C: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A460E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A49FE; /* 0x171A460F: je 0x171a49fe */
L_171A4615:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A4615: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A4807; /* 0x171A4616: je 0x171a4807 */
L_171A461C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A461C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A49FE; /* 0x171A461D: jne 0x171a49fe */
L_171A4623:
    _flag_a = (uint32_t)(MEM32(0x17250DA0)); _flag_b = (uint32_t)(0);
    MEM32(0x17250DA0) = MEM32(0x17250DA0) & 0; /* 0x171A4623: and dword ptr [0x17250da0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171A462A: push edi */
    PUSH32(esp, edi); /* 0x171A462B: push edi */
    PUSH32(esp, 0x17023734u); /* 0x171A462C: push 0x17023734 */
    PUSH32(esp, 0x17250DACu); /* 0x171A4631: push 0x17250dac */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4636: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A463B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A46C6; /* 0x171A463D: jne 0x171a46c6 */
L_171A4643:
    PUSH32(esp, 3); /* 0x171A4643: push 3 */
    esi = POP32_VAL(esp); /* 0x171A4645: pop esi */
    PUSH32(esp, esi); /* 0x171A4646: push esi */
    PUSH32(esp, esi); /* 0x171A4647: push esi */
    PUSH32(esp, 0x17023730u); /* 0x171A4648: push 0x17023730 */
    PUSH32(esp, ebx); /* 0x171A464D: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A464E: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4653: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A47F3; /* 0x171A4655: je 0x171a47f3 */
L_171A465B:
    PUSH32(esp, esi); /* 0x171A465B: push esi */
    PUSH32(esp, esi); /* 0x171A465C: push esi */
    PUSH32(esp, 0x1702372Cu); /* 0x171A465D: push 0x1702372c */
    PUSH32(esp, ebx); /* 0x171A4662: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4663: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4668: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A47F3; /* 0x171A466A: je 0x171a47f3 */
L_171A4670:
    PUSH32(esp, esi); /* 0x171A4670: push esi */
    PUSH32(esp, esi); /* 0x171A4671: push esi */
    PUSH32(esp, 0x17023728u); /* 0x171A4672: push 0x17023728 */
    PUSH32(esp, ebx); /* 0x171A4677: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4678: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A467D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A47F3; /* 0x171A467F: je 0x171a47f3 */
L_171A4685:
    PUSH32(esp, esi); /* 0x171A4685: push esi */
    PUSH32(esp, esi); /* 0x171A4686: push esi */
    PUSH32(esp, 0x17023724u); /* 0x171A4687: push 0x17023724 */
    PUSH32(esp, ebx); /* 0x171A468C: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A468D: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4692: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A47F3; /* 0x171A4694: je 0x171a47f3 */
L_171A469A:
    PUSH32(esp, esi); /* 0x171A469A: push esi */
    PUSH32(esp, esi); /* 0x171A469B: push esi */
    PUSH32(esp, 0x17023720u); /* 0x171A469C: push 0x17023720 */
    PUSH32(esp, ebx); /* 0x171A46A1: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A46A2: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A46A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A47F3; /* 0x171A46A9: je 0x171a47f3 */
L_171A46AF:
    PUSH32(esp, esi); /* 0x171A46AF: push esi */
    PUSH32(esp, esi); /* 0x171A46B0: push esi */
    PUSH32(esp, 0x1702371Cu); /* 0x171A46B1: push 0x1702371c */
    PUSH32(esp, ebx); /* 0x171A46B6: push ebx */
    goto L_171A47EA; /* 0x171A46B7: jmp 0x171a47ea */
L_171A46BC:
    MEM32(0x17250DB0) = eax; /* 0x171A46BC: mov dword ptr [0x17250db0], eax */
    RECOMP_BACKEDGE();
    goto L_171A45D2; /* 0x171A46C1: jmp 0x171a45d2 */
L_171A46C6:
    PUSH32(esp, edi); /* 0x171A46C6: push edi */
    PUSH32(esp, edi); /* 0x171A46C7: push edi */
    PUSH32(esp, 0x17023718u); /* 0x171A46C8: push 0x17023718 */
    PUSH32(esp, 0x17250DACu); /* 0x171A46CD: push 0x17250dac */
    RECOMP_CALL(sub_171A50B2); /* 0x171A46D2: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A46D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A470D; /* 0x171A46D9: jne 0x171a470d */
L_171A46DB:
    /* cmp MEM32(0x17250DB4), eax */ /* 0x171A46DB: cmp dword ptr [0x17250db4], eax */
    _flag_a = (uint32_t)(MEM32(0x17250DB4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A47FD; /* 0x171A46E1: je 0x171a47fd */
L_171A46E7:
    PUSH32(esp, 3); /* 0x171A46E7: push 3 */
    PUSH32(esp, 3); /* 0x171A46E9: push 3 */
    PUSH32(esp, 0x17023714u); /* 0x171A46EB: push 0x17023714 */
    PUSH32(esp, ebx); /* 0x171A46F0: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A46F1: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A46F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A47FD; /* 0x171A46F8: jne 0x171a47fd */
L_171A46FE:
    MEM32(0x17250DA0) = 0x20u; /* 0x171A46FE: mov dword ptr [0x17250da0], 0x20 */
    goto L_171A47FD; /* 0x171A4708: jmp 0x171a47fd */
L_171A470D:
    /* cmp MEM32(0x17250DB0), 0 */ /* 0x171A470D: cmp dword ptr [0x17250db0], 0 */
    _flag_a = (uint32_t)(MEM32(0x17250DB0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A472B; /* 0x171A4714: je 0x171a472b */
L_171A4716:
    PUSH32(esp, edi); /* 0x171A4716: push edi */
    PUSH32(esp, edi); /* 0x171A4717: push edi */
    PUSH32(esp, 0x17023710u); /* 0x171A4718: push 0x17023710 */
    PUSH32(esp, 0x17250DACu); /* 0x171A471D: push 0x17250dac */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4722: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4727: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A46E7; /* 0x171A4729: je 0x171a46e7 */
L_171A472B:
    /* cmp MEM32(0x17250DB4), 0 */ /* 0x171A472B: cmp dword ptr [0x17250db4], 0 */
    _flag_a = (uint32_t)(MEM32(0x17250DB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A4749; /* 0x171A4732: je 0x171a4749 */
L_171A4734:
    PUSH32(esp, edi); /* 0x171A4734: push edi */
    PUSH32(esp, edi); /* 0x171A4735: push edi */
    PUSH32(esp, 0x1702370Cu); /* 0x171A4736: push 0x1702370c */
    PUSH32(esp, 0x17250DACu); /* 0x171A473B: push 0x17250dac */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4740: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4745: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A476F; /* 0x171A4747: je 0x171a476f */
L_171A4749:
    /* cmp MEM32(0x17250DB0), 0 */ /* 0x171A4749: cmp dword ptr [0x17250db0], 0 */
    _flag_a = (uint32_t)(MEM32(0x17250DB0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A47FD; /* 0x171A4750: je 0x171a47fd */
L_171A4756:
    PUSH32(esp, edi); /* 0x171A4756: push edi */
    PUSH32(esp, edi); /* 0x171A4757: push edi */
    PUSH32(esp, 0x17023708u); /* 0x171A4758: push 0x17023708 */
    PUSH32(esp, 0x17250DACu); /* 0x171A475D: push 0x17250dac */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4762: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4767: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A47FD; /* 0x171A4769: jne 0x171a47fd */
L_171A476F:
    /* cmp MEM8(0x17250DA8), 0x47u */ /* 0x171A476F: cmp byte ptr [0x17250da8], 0x47 */
    _flag_a = (uint32_t)(MEM8(0x17250DA8)) << 24; _flag_b = (uint32_t)(0x47u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A47FD; /* 0x171A4776: jne 0x171a47fd */
L_171A477C:
    PUSH32(esp, edi); /* 0x171A477C: push edi */
    PUSH32(esp, edi); /* 0x171A477D: push edi */
    PUSH32(esp, 0x17023704u); /* 0x171A477E: push 0x17023704 */
    PUSH32(esp, esi); /* 0x171A4783: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4784: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4789: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A47F3; /* 0x171A478B: je 0x171a47f3 */
L_171A478D:
    PUSH32(esp, edi); /* 0x171A478D: push edi */
    PUSH32(esp, edi); /* 0x171A478E: push edi */
    PUSH32(esp, 0x17023700u); /* 0x171A478F: push 0x17023700 */
    PUSH32(esp, esi); /* 0x171A4794: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4795: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A479A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A47F3; /* 0x171A479C: je 0x171a47f3 */
L_171A479E:
    PUSH32(esp, edi); /* 0x171A479E: push edi */
    PUSH32(esp, edi); /* 0x171A479F: push edi */
    PUSH32(esp, 0x170236FCu); /* 0x171A47A0: push 0x170236fc */
    PUSH32(esp, esi); /* 0x171A47A5: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A47A6: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A47AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A47F3; /* 0x171A47AD: je 0x171a47f3 */
L_171A47AF:
    PUSH32(esp, edi); /* 0x171A47AF: push edi */
    PUSH32(esp, edi); /* 0x171A47B0: push edi */
    PUSH32(esp, 0x170236F8u); /* 0x171A47B1: push 0x170236f8 */
    PUSH32(esp, esi); /* 0x171A47B6: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A47B7: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A47BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A47F3; /* 0x171A47BE: je 0x171a47f3 */
L_171A47C0:
    PUSH32(esp, edi); /* 0x171A47C0: push edi */
    PUSH32(esp, edi); /* 0x171A47C1: push edi */
    PUSH32(esp, 0x170236F4u); /* 0x171A47C2: push 0x170236f4 */
    PUSH32(esp, esi); /* 0x171A47C7: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A47C8: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A47CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A47F3; /* 0x171A47CF: je 0x171a47f3 */
L_171A47D1:
    PUSH32(esp, edi); /* 0x171A47D1: push edi */
    PUSH32(esp, edi); /* 0x171A47D2: push edi */
    PUSH32(esp, 0x170236F0u); /* 0x171A47D3: push 0x170236f0 */
    PUSH32(esp, esi); /* 0x171A47D8: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A47D9: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A47DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A47F3; /* 0x171A47E0: je 0x171a47f3 */
L_171A47E2:
    PUSH32(esp, edi); /* 0x171A47E2: push edi */
    PUSH32(esp, edi); /* 0x171A47E3: push edi */
    PUSH32(esp, 0x170236ECu); /* 0x171A47E4: push 0x170236ec */
    PUSH32(esp, esi); /* 0x171A47E9: push esi */
L_171A47EA:
    RECOMP_CALL(sub_171A50B2); /* 0x171A47EA: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A47EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A47FD; /* 0x171A47F1: jne 0x171a47fd */
L_171A47F3:
    MEM32(0x17250DA0) = 0x80u; /* 0x171A47F3: mov dword ptr [0x17250da0], 0x80 */
L_171A47FD:
    eax = MEM32(0x17250DA0); /* 0x171A47FD: mov eax, dword ptr [0x17250da0] */
    goto L_171A4DDD; /* 0x171A4802: jmp 0x171a4ddd */
L_171A4807:
    PUSH32(esp, edi); /* 0x171A4807: push edi */
    PUSH32(esp, edi); /* 0x171A4808: push edi */
    PUSH32(esp, 0x17023734u); /* 0x171A4809: push 0x17023734 */
    PUSH32(esp, 0x17250DACu); /* 0x171A480E: push 0x17250dac */
    MEM32(0x17250D9C) = edi; /* 0x171A4813: mov dword ptr [0x17250d9c], edi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4819: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A481E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A48B0; /* 0x171A4820: jne 0x171a48b0 */
L_171A4826:
    PUSH32(esp, 3); /* 0x171A4826: push 3 */
    esi = POP32_VAL(esp); /* 0x171A4828: pop esi */
    PUSH32(esp, esi); /* 0x171A4829: push esi */
    PUSH32(esp, esi); /* 0x171A482A: push esi */
    PUSH32(esp, 0x17023730u); /* 0x171A482B: push 0x17023730 */
    PUSH32(esp, ebx); /* 0x171A4830: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4831: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4836: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A49EE; /* 0x171A4838: je 0x171a49ee */
L_171A483E:
    PUSH32(esp, esi); /* 0x171A483E: push esi */
    PUSH32(esp, esi); /* 0x171A483F: push esi */
    PUSH32(esp, 0x1702372Cu); /* 0x171A4840: push 0x1702372c */
    PUSH32(esp, ebx); /* 0x171A4845: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4846: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A484B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A49EE; /* 0x171A484D: je 0x171a49ee */
L_171A4853:
    PUSH32(esp, esi); /* 0x171A4853: push esi */
    PUSH32(esp, esi); /* 0x171A4854: push esi */
    PUSH32(esp, 0x17023728u); /* 0x171A4855: push 0x17023728 */
    PUSH32(esp, ebx); /* 0x171A485A: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A485B: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4860: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A49EE; /* 0x171A4862: je 0x171a49ee */
L_171A4868:
    PUSH32(esp, esi); /* 0x171A4868: push esi */
    PUSH32(esp, esi); /* 0x171A4869: push esi */
    PUSH32(esp, 0x17023724u); /* 0x171A486A: push 0x17023724 */
    PUSH32(esp, ebx); /* 0x171A486F: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4870: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4875: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A49EE; /* 0x171A4877: je 0x171a49ee */
L_171A487D:
    PUSH32(esp, esi); /* 0x171A487D: push esi */
    PUSH32(esp, esi); /* 0x171A487E: push esi */
    PUSH32(esp, 0x17023720u); /* 0x171A487F: push 0x17023720 */
    PUSH32(esp, ebx); /* 0x171A4884: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4885: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A488A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A49EE; /* 0x171A488C: je 0x171a49ee */
L_171A4892:
    PUSH32(esp, esi); /* 0x171A4892: push esi */
    PUSH32(esp, esi); /* 0x171A4893: push esi */
    PUSH32(esp, 0x1702371Cu); /* 0x171A4894: push 0x1702371c */
    PUSH32(esp, ebx); /* 0x171A4899: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A489A: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A489F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A49EE; /* 0x171A48A1: je 0x171a49ee */
L_171A48A7:
    PUSH32(esp, esi); /* 0x171A48A7: push esi */
    PUSH32(esp, esi); /* 0x171A48A8: push esi */
    PUSH32(esp, 0x170236E8u); /* 0x171A48A9: push 0x170236e8 */
    goto L_171A4920; /* 0x171A48AE: jmp 0x171a4920 */
L_171A48B0:
    PUSH32(esp, edi); /* 0x171A48B0: push edi */
    PUSH32(esp, edi); /* 0x171A48B1: push edi */
    PUSH32(esp, 0x17023718u); /* 0x171A48B2: push 0x17023718 */
    PUSH32(esp, 0x17250DACu); /* 0x171A48B7: push 0x17250dac */
    RECOMP_CALL(sub_171A50B2); /* 0x171A48BC: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A48C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A48F9; /* 0x171A48C3: jne 0x171a48f9 */
L_171A48C5:
    PUSH32(esp, 3); /* 0x171A48C5: push 3 */
    esi = POP32_VAL(esp); /* 0x171A48C7: pop esi */
    PUSH32(esp, esi); /* 0x171A48C8: push esi */
    PUSH32(esp, esi); /* 0x171A48C9: push esi */
    PUSH32(esp, 0x170236E4u); /* 0x171A48CA: push 0x170236e4 */
    PUSH32(esp, ebx); /* 0x171A48CF: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A48D0: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A48D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A48E8; /* 0x171A48D7: jne 0x171a48e8 */
L_171A48D9:
    MEM32(0x17250D9C) = 8; /* 0x171A48D9: mov dword ptr [0x17250d9c], 8 */
    goto L_171A49F4; /* 0x171A48E3: jmp 0x171a49f4 */
L_171A48E8:
    /* cmp MEM32(0x17250DB4), 0 */ /* 0x171A48E8: cmp dword ptr [0x17250db4], 0 */
    _flag_a = (uint32_t)(MEM32(0x17250DB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A49F4; /* 0x171A48EF: je 0x171a49f4 */
L_171A48F5:
    PUSH32(esp, esi); /* 0x171A48F5: push esi */
    PUSH32(esp, esi); /* 0x171A48F6: push esi */
    goto L_171A491B; /* 0x171A48F7: jmp 0x171a491b */
L_171A48F9:
    /* cmp MEM32(0x17250DB0), 0 */ /* 0x171A48F9: cmp dword ptr [0x17250db0], 0 */
    _flag_a = (uint32_t)(MEM32(0x17250DB0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A4926; /* 0x171A4900: je 0x171a4926 */
L_171A4902:
    PUSH32(esp, edi); /* 0x171A4902: push edi */
    PUSH32(esp, edi); /* 0x171A4903: push edi */
    PUSH32(esp, 0x17023710u); /* 0x171A4904: push 0x17023710 */
    PUSH32(esp, 0x17250DACu); /* 0x171A4909: push 0x17250dac */
    RECOMP_CALL(sub_171A50B2); /* 0x171A490E: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4913: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4926; /* 0x171A4915: jne 0x171a4926 */
L_171A4917:
    PUSH32(esp, 3); /* 0x171A4917: push 3 */
    PUSH32(esp, 3); /* 0x171A4919: push 3 */
L_171A491B:
    PUSH32(esp, 0x17023714u); /* 0x171A491B: push 0x17023714 */
L_171A4920:
    PUSH32(esp, ebx); /* 0x171A4920: push ebx */
    goto L_171A49E5; /* 0x171A4921: jmp 0x171a49e5 */
L_171A4926:
    /* cmp MEM32(0x17250DB4), 0 */ /* 0x171A4926: cmp dword ptr [0x17250db4], 0 */
    _flag_a = (uint32_t)(MEM32(0x17250DB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A4944; /* 0x171A492D: je 0x171a4944 */
L_171A492F:
    PUSH32(esp, edi); /* 0x171A492F: push edi */
    PUSH32(esp, edi); /* 0x171A4930: push edi */
    PUSH32(esp, 0x1702370Cu); /* 0x171A4931: push 0x1702370c */
    PUSH32(esp, 0x17250DACu); /* 0x171A4936: push 0x17250dac */
    RECOMP_CALL(sub_171A50B2); /* 0x171A493B: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4940: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A496A; /* 0x171A4942: je 0x171a496a */
L_171A4944:
    /* cmp MEM32(0x17250DB0), 0 */ /* 0x171A4944: cmp dword ptr [0x17250db0], 0 */
    _flag_a = (uint32_t)(MEM32(0x17250DB0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A49F4; /* 0x171A494B: je 0x171a49f4 */
L_171A4951:
    PUSH32(esp, edi); /* 0x171A4951: push edi */
    PUSH32(esp, edi); /* 0x171A4952: push edi */
    PUSH32(esp, 0x17023708u); /* 0x171A4953: push 0x17023708 */
    PUSH32(esp, 0x17250DACu); /* 0x171A4958: push 0x17250dac */
    RECOMP_CALL(sub_171A50B2); /* 0x171A495D: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4962: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A49F4; /* 0x171A4964: jne 0x171a49f4 */
L_171A496A:
    SET_LO8(eax, MEM8(0x17250DA8)); /* 0x171A496A: mov al, byte ptr [0x17250da8] */
    /* cmp LO8(eax), 0x47u */ /* 0x171A496F: cmp al, 0x47 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x47u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A4977; /* 0x171A4971: je 0x171a4977 */
L_171A4973:
    /* cmp LO8(eax), 0x4Du */ /* 0x171A4973: cmp al, 0x4d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x4Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A49F4; /* 0x171A4975: jne 0x171a49f4 */
L_171A4977:
    PUSH32(esp, edi); /* 0x171A4977: push edi */
    PUSH32(esp, edi); /* 0x171A4978: push edi */
    PUSH32(esp, 0x17023704u); /* 0x171A4979: push 0x17023704 */
    PUSH32(esp, esi); /* 0x171A497E: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A497F: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4984: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A49EE; /* 0x171A4986: je 0x171a49ee */
L_171A4988:
    PUSH32(esp, edi); /* 0x171A4988: push edi */
    PUSH32(esp, edi); /* 0x171A4989: push edi */
    PUSH32(esp, 0x17023700u); /* 0x171A498A: push 0x17023700 */
    PUSH32(esp, esi); /* 0x171A498F: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4990: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4995: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A49EE; /* 0x171A4997: je 0x171a49ee */
L_171A4999:
    PUSH32(esp, edi); /* 0x171A4999: push edi */
    PUSH32(esp, edi); /* 0x171A499A: push edi */
    PUSH32(esp, 0x170236FCu); /* 0x171A499B: push 0x170236fc */
    PUSH32(esp, esi); /* 0x171A49A0: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A49A1: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A49A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A49EE; /* 0x171A49A8: je 0x171a49ee */
L_171A49AA:
    PUSH32(esp, edi); /* 0x171A49AA: push edi */
    PUSH32(esp, edi); /* 0x171A49AB: push edi */
    PUSH32(esp, 0x170236F8u); /* 0x171A49AC: push 0x170236f8 */
    PUSH32(esp, esi); /* 0x171A49B1: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A49B2: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A49B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A49EE; /* 0x171A49B9: je 0x171a49ee */
L_171A49BB:
    PUSH32(esp, edi); /* 0x171A49BB: push edi */
    PUSH32(esp, edi); /* 0x171A49BC: push edi */
    PUSH32(esp, 0x170236F4u); /* 0x171A49BD: push 0x170236f4 */
    PUSH32(esp, esi); /* 0x171A49C2: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A49C3: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A49C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A49EE; /* 0x171A49CA: je 0x171a49ee */
L_171A49CC:
    PUSH32(esp, edi); /* 0x171A49CC: push edi */
    PUSH32(esp, edi); /* 0x171A49CD: push edi */
    PUSH32(esp, 0x170236F0u); /* 0x171A49CE: push 0x170236f0 */
    PUSH32(esp, esi); /* 0x171A49D3: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A49D4: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A49D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A49EE; /* 0x171A49DB: je 0x171a49ee */
L_171A49DD:
    PUSH32(esp, edi); /* 0x171A49DD: push edi */
    PUSH32(esp, edi); /* 0x171A49DE: push edi */
    PUSH32(esp, 0x170236ECu); /* 0x171A49DF: push 0x170236ec */
    PUSH32(esp, esi); /* 0x171A49E4: push esi */
L_171A49E5:
    RECOMP_CALL(sub_171A50B2); /* 0x171A49E5: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A49EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A49F4; /* 0x171A49EC: jne 0x171a49f4 */
L_171A49EE:
    MEM32(0x17250D9C) = edi; /* 0x171A49EE: mov dword ptr [0x17250d9c], edi */
L_171A49F4:
    eax = MEM32(0x17250D9C); /* 0x171A49F4: mov eax, dword ptr [0x17250d9c] */
    goto L_171A4DDD; /* 0x171A49F9: jmp 0x171a4ddd */
L_171A49FE:
    PUSH32(esp, edi); /* 0x171A49FE: push edi */
    PUSH32(esp, edi); /* 0x171A49FF: push edi */
    PUSH32(esp, 0x17023734u); /* 0x171A4A00: push 0x17023734 */
    PUSH32(esp, 0x17250DACu); /* 0x171A4A05: push 0x17250dac */
    MEM32(0x17250D98) = 1; /* 0x171A4A0A: mov dword ptr [0x17250d98], 1 */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4A14: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4A19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4AC3; /* 0x171A4A1B: jne 0x171a4ac3 */
L_171A4A21:
    PUSH32(esp, 3); /* 0x171A4A21: push 3 */
    esi = POP32_VAL(esp); /* 0x171A4A23: pop esi */
    PUSH32(esp, esi); /* 0x171A4A24: push esi */
    PUSH32(esp, esi); /* 0x171A4A25: push esi */
    PUSH32(esp, 0x170236E4u); /* 0x171A4A26: push 0x170236e4 */
    PUSH32(esp, ebx); /* 0x171A4A2B: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4A2C: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4A31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4B7C; /* 0x171A4A33: je 0x171a4b7c */
L_171A4A39:
    PUSH32(esp, esi); /* 0x171A4A39: push esi */
    PUSH32(esp, esi); /* 0x171A4A3A: push esi */
    PUSH32(esp, 0x17023730u); /* 0x171A4A3B: push 0x17023730 */
    PUSH32(esp, ebx); /* 0x171A4A40: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4A41: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4A46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4C54; /* 0x171A4A48: je 0x171a4c54 */
L_171A4A4E:
    PUSH32(esp, esi); /* 0x171A4A4E: push esi */
    PUSH32(esp, esi); /* 0x171A4A4F: push esi */
    PUSH32(esp, 0x1702372Cu); /* 0x171A4A50: push 0x1702372c */
    PUSH32(esp, ebx); /* 0x171A4A55: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4A56: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4A5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4C54; /* 0x171A4A5D: je 0x171a4c54 */
L_171A4A63:
    PUSH32(esp, esi); /* 0x171A4A63: push esi */
    PUSH32(esp, esi); /* 0x171A4A64: push esi */
    PUSH32(esp, 0x17023728u); /* 0x171A4A65: push 0x17023728 */
    PUSH32(esp, ebx); /* 0x171A4A6A: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4A6B: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4A70: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4C54; /* 0x171A4A72: je 0x171a4c54 */
L_171A4A78:
    PUSH32(esp, esi); /* 0x171A4A78: push esi */
    PUSH32(esp, esi); /* 0x171A4A79: push esi */
    PUSH32(esp, 0x17023724u); /* 0x171A4A7A: push 0x17023724 */
    PUSH32(esp, ebx); /* 0x171A4A7F: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4A80: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4A85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4C54; /* 0x171A4A87: je 0x171a4c54 */
L_171A4A8D:
    PUSH32(esp, esi); /* 0x171A4A8D: push esi */
    PUSH32(esp, esi); /* 0x171A4A8E: push esi */
    PUSH32(esp, 0x17023720u); /* 0x171A4A8F: push 0x17023720 */
    PUSH32(esp, ebx); /* 0x171A4A94: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4A95: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4A9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4C54; /* 0x171A4A9C: je 0x171a4c54 */
L_171A4AA2:
    PUSH32(esp, esi); /* 0x171A4AA2: push esi */
    PUSH32(esp, esi); /* 0x171A4AA3: push esi */
    PUSH32(esp, 0x1702371Cu); /* 0x171A4AA4: push 0x1702371c */
    PUSH32(esp, ebx); /* 0x171A4AA9: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4AAA: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4AAF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4C54; /* 0x171A4AB1: je 0x171a4c54 */
L_171A4AB7:
    PUSH32(esp, esi); /* 0x171A4AB7: push esi */
    PUSH32(esp, esi); /* 0x171A4AB8: push esi */
L_171A4AB9:
    PUSH32(esp, 0x170236E8u); /* 0x171A4AB9: push 0x170236e8 */
    goto L_171A4D2C; /* 0x171A4ABE: jmp 0x171a4d2c */
L_171A4AC3:
    PUSH32(esp, edi); /* 0x171A4AC3: push edi */
    PUSH32(esp, edi); /* 0x171A4AC4: push edi */
    PUSH32(esp, 0x170236E0u); /* 0x171A4AC5: push 0x170236e0 */
    PUSH32(esp, 0x17250DACu); /* 0x171A4ACA: push 0x17250dac */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4ACF: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4AD4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4AE6; /* 0x171A4AD6: jne 0x171a4ae6 */
L_171A4AD8:
    PUSH32(esp, 3); /* 0x171A4AD8: push 3 */
    PUSH32(esp, 3); /* 0x171A4ADA: push 3 */
    PUSH32(esp, 0x170236E4u); /* 0x171A4ADC: push 0x170236e4 */
    goto L_171A4D2C; /* 0x171A4AE1: jmp 0x171a4d2c */
L_171A4AE6:
    PUSH32(esp, edi); /* 0x171A4AE6: push edi */
    PUSH32(esp, edi); /* 0x171A4AE7: push edi */
    PUSH32(esp, 0x17023718u); /* 0x171A4AE8: push 0x17023718 */
    PUSH32(esp, 0x17250DACu); /* 0x171A4AED: push 0x17250dac */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4AF2: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4AF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4B4A; /* 0x171A4AF9: jne 0x171a4b4a */
L_171A4AFB:
    PUSH32(esp, 3); /* 0x171A4AFB: push 3 */
    esi = POP32_VAL(esp); /* 0x171A4AFD: pop esi */
    PUSH32(esp, esi); /* 0x171A4AFE: push esi */
    PUSH32(esp, esi); /* 0x171A4AFF: push esi */
    PUSH32(esp, 0x170236E4u); /* 0x171A4B00: push 0x170236e4 */
    PUSH32(esp, ebx); /* 0x171A4B05: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4B06: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4B0B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4B7C; /* 0x171A4B0D: je 0x171a4b7c */
L_171A4B0F:
    /* cmp MEM32(0x17250DB4), 0 */ /* 0x171A4B0F: cmp dword ptr [0x17250db4], 0 */
    _flag_a = (uint32_t)(MEM32(0x17250DB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A4D72; /* 0x171A4B16: je 0x171a4d72 */
L_171A4B1C:
    PUSH32(esp, esi); /* 0x171A4B1C: push esi */
    PUSH32(esp, esi); /* 0x171A4B1D: push esi */
    PUSH32(esp, 0x17023714u); /* 0x171A4B1E: push 0x17023714 */
    PUSH32(esp, ebx); /* 0x171A4B23: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4B24: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4B29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4C54; /* 0x171A4B2B: je 0x171a4c54 */
L_171A4B31:
    /* cmp MEM32(0x17250DB4), 0 */ /* 0x171A4B31: cmp dword ptr [0x17250db4], 0 */
    _flag_a = (uint32_t)(MEM32(0x17250DB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A4D72; /* 0x171A4B38: je 0x171a4d72 */
L_171A4B3E:
    PUSH32(esp, esi); /* 0x171A4B3E: push esi */
    PUSH32(esp, esi); /* 0x171A4B3F: push esi */
    PUSH32(esp, 0x170236DCu); /* 0x171A4B40: push 0x170236dc */
    goto L_171A4D2C; /* 0x171A4B45: jmp 0x171a4d2c */
L_171A4B4A:
    /* cmp MEM32(0x17250DB0), 0 */ /* 0x171A4B4A: cmp dword ptr [0x17250db0], 0 */
    _flag_a = (uint32_t)(MEM32(0x17250DB0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A4BA2; /* 0x171A4B51: je 0x171a4ba2 */
L_171A4B53:
    PUSH32(esp, edi); /* 0x171A4B53: push edi */
    PUSH32(esp, edi); /* 0x171A4B54: push edi */
    PUSH32(esp, 0x17023710u); /* 0x171A4B55: push 0x17023710 */
    PUSH32(esp, 0x17250DACu); /* 0x171A4B5A: push 0x17250dac */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4B5F: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4B64: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4BA2; /* 0x171A4B66: jne 0x171a4ba2 */
L_171A4B68:
    PUSH32(esp, 3); /* 0x171A4B68: push 3 */
    esi = POP32_VAL(esp); /* 0x171A4B6A: pop esi */
    PUSH32(esp, esi); /* 0x171A4B6B: push esi */
    PUSH32(esp, esi); /* 0x171A4B6C: push esi */
    PUSH32(esp, 0x170236E4u); /* 0x171A4B6D: push 0x170236e4 */
    PUSH32(esp, ebx); /* 0x171A4B72: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4B73: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4B78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4B8B; /* 0x171A4B7A: jne 0x171a4b8b */
L_171A4B7C:
    MEM32(0x17250D98) = 0x40u; /* 0x171A4B7C: mov dword ptr [0x17250d98], 0x40 */
    goto L_171A4D72; /* 0x171A4B86: jmp 0x171a4d72 */
L_171A4B8B:
    PUSH32(esp, esi); /* 0x171A4B8B: push esi */
    PUSH32(esp, esi); /* 0x171A4B8C: push esi */
    PUSH32(esp, 0x17023714u); /* 0x171A4B8D: push 0x17023714 */
    PUSH32(esp, ebx); /* 0x171A4B92: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4B93: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4B98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4C54; /* 0x171A4B9A: je 0x171a4c54 */
L_171A4BA0:
    RECOMP_BACKEDGE();
    goto L_171A4B3E; /* 0x171A4BA0: jmp 0x171a4b3e */
L_171A4BA2:
    /* cmp MEM32(0x17250DB4), 0 */ /* 0x171A4BA2: cmp dword ptr [0x17250db4], 0 */
    _flag_a = (uint32_t)(MEM32(0x17250DB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A4C63; /* 0x171A4BA9: je 0x171a4c63 */
L_171A4BAF:
    PUSH32(esp, edi); /* 0x171A4BAF: push edi */
    PUSH32(esp, edi); /* 0x171A4BB0: push edi */
    PUSH32(esp, 0x1702370Cu); /* 0x171A4BB1: push 0x1702370c */
    PUSH32(esp, 0x17250DACu); /* 0x171A4BB6: push 0x17250dac */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4BBB: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4BC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4C63; /* 0x171A4BC2: jne 0x171a4c63 */
L_171A4BC8:
    SET_LO8(eax, MEM8(0x17250DA8)); /* 0x171A4BC8: mov al, byte ptr [0x17250da8] */
    /* cmp LO8(eax), 0x47u */ /* 0x171A4BCD: cmp al, 0x47 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x47u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A4BD9; /* 0x171A4BCF: je 0x171a4bd9 */
L_171A4BD1:
    /* cmp LO8(eax), 0x4Du */ /* 0x171A4BD1: cmp al, 0x4d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x4Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A4D72; /* 0x171A4BD3: jne 0x171a4d72 */
L_171A4BD9:
    PUSH32(esp, edi); /* 0x171A4BD9: push edi */
    PUSH32(esp, edi); /* 0x171A4BDA: push edi */
    PUSH32(esp, 0x17023704u); /* 0x171A4BDB: push 0x17023704 */
    PUSH32(esp, esi); /* 0x171A4BE0: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4BE1: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4BE6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4C54; /* 0x171A4BE8: je 0x171a4c54 */
L_171A4BEA:
    PUSH32(esp, edi); /* 0x171A4BEA: push edi */
    PUSH32(esp, edi); /* 0x171A4BEB: push edi */
    PUSH32(esp, 0x17023700u); /* 0x171A4BEC: push 0x17023700 */
    PUSH32(esp, esi); /* 0x171A4BF1: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4BF2: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4BF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4C54; /* 0x171A4BF9: je 0x171a4c54 */
L_171A4BFB:
    PUSH32(esp, edi); /* 0x171A4BFB: push edi */
    PUSH32(esp, edi); /* 0x171A4BFC: push edi */
    PUSH32(esp, 0x170236FCu); /* 0x171A4BFD: push 0x170236fc */
    PUSH32(esp, esi); /* 0x171A4C02: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4C03: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4C08: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4C54; /* 0x171A4C0A: je 0x171a4c54 */
L_171A4C0C:
    PUSH32(esp, edi); /* 0x171A4C0C: push edi */
    PUSH32(esp, edi); /* 0x171A4C0D: push edi */
    PUSH32(esp, 0x170236F8u); /* 0x171A4C0E: push 0x170236f8 */
    PUSH32(esp, esi); /* 0x171A4C13: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4C14: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4C19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4C54; /* 0x171A4C1B: je 0x171a4c54 */
L_171A4C1D:
    PUSH32(esp, edi); /* 0x171A4C1D: push edi */
    PUSH32(esp, edi); /* 0x171A4C1E: push edi */
    PUSH32(esp, 0x170236F4u); /* 0x171A4C1F: push 0x170236f4 */
    PUSH32(esp, esi); /* 0x171A4C24: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4C25: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4C2A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4C54; /* 0x171A4C2C: je 0x171a4c54 */
L_171A4C2E:
    PUSH32(esp, edi); /* 0x171A4C2E: push edi */
    PUSH32(esp, edi); /* 0x171A4C2F: push edi */
    PUSH32(esp, 0x170236F0u); /* 0x171A4C30: push 0x170236f0 */
    PUSH32(esp, esi); /* 0x171A4C35: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4C36: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4C3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4C54; /* 0x171A4C3D: je 0x171a4c54 */
L_171A4C3F:
    PUSH32(esp, edi); /* 0x171A4C3F: push edi */
    PUSH32(esp, edi); /* 0x171A4C40: push edi */
    PUSH32(esp, 0x170236ECu); /* 0x171A4C41: push 0x170236ec */
    PUSH32(esp, esi); /* 0x171A4C46: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4C47: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4C4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4D72; /* 0x171A4C4E: jne 0x171a4d72 */
L_171A4C54:
    MEM32(0x17250D98) = 0x20u; /* 0x171A4C54: mov dword ptr [0x17250d98], 0x20 */
    goto L_171A4D72; /* 0x171A4C5E: jmp 0x171a4d72 */
L_171A4C63:
    /* cmp MEM32(0x17250DB0), 0 */ /* 0x171A4C63: cmp dword ptr [0x17250db0], 0 */
    _flag_a = (uint32_t)(MEM32(0x17250DB0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A4C85; /* 0x171A4C6A: je 0x171a4c85 */
L_171A4C6C:
    PUSH32(esp, edi); /* 0x171A4C6C: push edi */
    PUSH32(esp, edi); /* 0x171A4C6D: push edi */
    PUSH32(esp, 0x17023708u); /* 0x171A4C6E: push 0x17023708 */
    PUSH32(esp, 0x17250DACu); /* 0x171A4C73: push 0x17250dac */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4C78: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4C7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4BC8; /* 0x171A4C7F: je 0x171a4bc8 */
L_171A4C85:
    PUSH32(esp, edi); /* 0x171A4C85: push edi */
    PUSH32(esp, edi); /* 0x171A4C86: push edi */
    PUSH32(esp, 0x170236D8u); /* 0x171A4C87: push 0x170236d8 */
    esi = 0x17250DACu; /* 0x171A4C8C: mov esi, 0x17250dac */
    PUSH32(esp, esi); /* 0x171A4C91: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4C92: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4C97: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4CB7; /* 0x171A4C99: jne 0x171a4cb7 */
L_171A4C9B:
    PUSH32(esp, 3); /* 0x171A4C9B: push 3 */
    PUSH32(esp, 3); /* 0x171A4C9D: push 3 */
    PUSH32(esp, 0x170236E4u); /* 0x171A4C9F: push 0x170236e4 */
    PUSH32(esp, ebx); /* 0x171A4CA4: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4CA5: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4CAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4D72; /* 0x171A4CAC: jne 0x171a4d72 */
L_171A4CB2:
    ecx = MEM32(ebp + 0x20); /* 0x171A4CB2: mov ecx, dword ptr [ebp + 0x20] */
    goto L_171A4CE2; /* 0x171A4CB5: jmp 0x171a4ce2 */
L_171A4CB7:
    PUSH32(esp, edi); /* 0x171A4CB7: push edi */
    PUSH32(esp, edi); /* 0x171A4CB8: push edi */
    PUSH32(esp, 0x170236D4u); /* 0x171A4CB9: push 0x170236d4 */
    PUSH32(esp, esi); /* 0x171A4CBE: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4CBF: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4CC4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4CF8; /* 0x171A4CC6: jne 0x171a4cf8 */
L_171A4CC8:
    PUSH32(esp, 3); /* 0x171A4CC8: push 3 */
    PUSH32(esp, 3); /* 0x171A4CCA: push 3 */
    PUSH32(esp, 0x170236E4u); /* 0x171A4CCC: push 0x170236e4 */
    PUSH32(esp, ebx); /* 0x171A4CD1: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4CD2: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4CD7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4D72; /* 0x171A4CD9: jne 0x171a4d72 */
L_171A4CDF:
    ecx = MEM32(ebp + 0x18); /* 0x171A4CDF: mov ecx, dword ptr [ebp + 0x18] */
L_171A4CE2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A4CE2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), 0x40u */ /* 0x171A4CE4: cmp dword ptr [ecx], 0x40 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_G(_flag_a, _flag_b)) ? 1 : 0); /* 0x171A4CE7: setg al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A4CEA: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE1u);
    eax = eax & 0xFFFFFFE1u; /* 0x171A4CEB: and eax, 0xffffffe1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x171A4CEE: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(0x17250D98) = eax; /* 0x171A4CF1: mov dword ptr [0x17250d98], eax */
    goto L_171A4D72; /* 0x171A4CF6: jmp 0x171a4d72 */
L_171A4CF8:
    PUSH32(esp, edi); /* 0x171A4CF8: push edi */
    PUSH32(esp, edi); /* 0x171A4CF9: push edi */
    PUSH32(esp, 0x170236F0u); /* 0x171A4CFA: push 0x170236f0 */
    PUSH32(esp, esi); /* 0x171A4CFF: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4D00: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4D05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4D12; /* 0x171A4D07: jne 0x171a4d12 */
L_171A4D09:
    PUSH32(esp, 3); /* 0x171A4D09: push 3 */
    PUSH32(esp, 3); /* 0x171A4D0B: push 3 */
    RECOMP_BACKEDGE();
    goto L_171A4AB9; /* 0x171A4D0D: jmp 0x171a4ab9 */
L_171A4D12:
    PUSH32(esp, edi); /* 0x171A4D12: push edi */
    PUSH32(esp, edi); /* 0x171A4D13: push edi */
    PUSH32(esp, 0x170236D0u); /* 0x171A4D14: push 0x170236d0 */
    PUSH32(esp, esi); /* 0x171A4D19: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4D1A: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4D1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4D3B; /* 0x171A4D21: jne 0x171a4d3b */
L_171A4D23:
    PUSH32(esp, 3); /* 0x171A4D23: push 3 */
    PUSH32(esp, 3); /* 0x171A4D25: push 3 */
    PUSH32(esp, 0x170236CCu); /* 0x171A4D27: push 0x170236cc */
L_171A4D2C:
    PUSH32(esp, ebx); /* 0x171A4D2C: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4D2D: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4D32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4D72; /* 0x171A4D34: jne 0x171a4d72 */
L_171A4D36:
    RECOMP_BACKEDGE();
    goto L_171A4B7C; /* 0x171A4D36: jmp 0x171a4b7c */
L_171A4D3B:
    /* cmp MEM32(0x17250DB4), 0 */ /* 0x171A4D3B: cmp dword ptr [0x17250db4], 0 */
    _flag_a = (uint32_t)(MEM32(0x17250DB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A4D72; /* 0x171A4D42: je 0x171a4d72 */
L_171A4D44:
    PUSH32(esp, edi); /* 0x171A4D44: push edi */
    PUSH32(esp, edi); /* 0x171A4D45: push edi */
    PUSH32(esp, 0x170236C8u); /* 0x171A4D46: push 0x170236c8 */
    PUSH32(esp, esi); /* 0x171A4D4B: push esi */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4D4C: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4D51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4D72; /* 0x171A4D53: jne 0x171a4d72 */
L_171A4D55:
    PUSH32(esp, 3); /* 0x171A4D55: push 3 */
    PUSH32(esp, 3); /* 0x171A4D57: push 3 */
    PUSH32(esp, 0x170236C4u); /* 0x171A4D59: push 0x170236c4 */
    PUSH32(esp, ebx); /* 0x171A4D5E: push ebx */
    RECOMP_CALL(sub_171A50B2); /* 0x171A4D5F: call 0x171a50b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A4D64: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A4D72; /* 0x171A4D66: jne 0x171a4d72 */
L_171A4D68:
    MEM32(0x17250D98) = 1; /* 0x171A4D68: mov dword ptr [0x17250d98], 1 */
L_171A4D72:
    eax = MEM32(0x17250D98); /* 0x171A4D72: mov eax, dword ptr [0x17250d98] */
    goto L_171A4DDD; /* 0x171A4D77: jmp 0x171a4ddd */
L_171A4D79:
    PUSH32(esp, 6); /* 0x171A4D79: push 6 */
    goto L_171A4DB0; /* 0x171A4D7B: jmp 0x171a4db0 */
L_171A4D7D:
    PUSH32(esp, 2); /* 0x171A4D7D: push 2 */
    goto L_171A4DB0; /* 0x171A4D7F: jmp 0x171a4db0 */
L_171A4D81:
    ecx = MEM32(ebp + 0x18); /* 0x171A4D81: mov ecx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x14); /* 0x171A4D84: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(eax); /* 0x171A4D87: mov eax, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x171A4D89: mov ecx, dword ptr [ecx] */
    /* cmp eax, ecx */ /* 0x171A4D8B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x18) = eax; /* 0x171A4D8D: mov dword ptr [ebp + 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_171A4D95; /* 0x171A4D90: jl 0x171a4d95 */
L_171A4D92:
    MEM32(ebp + 0x18) = ecx; /* 0x171A4D92: mov dword ptr [ebp + 0x18], ecx */
L_171A4D95:
    fp_push((double)(int32_t)MEM32(ebp + 0x18)); /* 0x171A4D95: fild dword ptr [ebp + 0x18] */
    _st[0] *= (double)*(float*)ADDR(0x170236C0); /* 0x171A4D98: fmul dword ptr [0x170236c0] */
    RECOMP_CALL(sub_1721B050); /* 0x171A4D9E: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    goto L_171A4DDD; /* 0x171A4DA3: jmp 0x171a4ddd */
L_171A4DA5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A4DA5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A4DA7: inc eax */
    _flag_k = FK_INC;
    goto L_171A4DDD; /* 0x171A4DA8: jmp 0x171a4ddd */
L_171A4DAA:
    PUSH32(esp, 0x32u); /* 0x171A4DAA: push 0x32 */
    goto L_171A4DB0; /* 0x171A4DAC: jmp 0x171a4db0 */
L_171A4DAE:
    PUSH32(esp, 0x19u); /* 0x171A4DAE: push 0x19 */
L_171A4DB0:
    eax = POP32_VAL(esp); /* 0x171A4DB0: pop eax */
    goto L_171A4DDD; /* 0x171A4DB1: jmp 0x171a4ddd */
L_171A4DB3:
    PUSH32(esp, 0x17237E18u); /* 0x171A4DB3: push 0x17237e18 */
    PUSH32(esp, 0x17250D94u); /* 0x171A4DB8: push 0x17250d94 */
    PUSH32(esp, 0x17250D90u); /* 0x171A4DBD: push 0x17250d90 */
    goto L_171A4DD3; /* 0x171A4DC2: jmp 0x171a4dd3 */
L_171A4DC4:
    PUSH32(esp, 0x17237E18u); /* 0x171A4DC4: push 0x17237e18 */
    PUSH32(esp, 0x17250D94u); /* 0x171A4DC9: push 0x17250d94 */
    PUSH32(esp, 0x17237E14u); /* 0x171A4DCE: push 0x17237e14 */
L_171A4DD3:
    RECOMP_CALL(sub_171A4E15); /* 0x171A4DD3: call 0x171a4e15 */
    RECOMP_FLAGS_IN();
    goto L_171A4DDD; /* 0x171A4DD8: jmp 0x171a4ddd */
L_171A4DDA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171A4DDA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A4DDD:
    edi = POP32_VAL(esp); /* 0x171A4DDD: pop edi */
    esi = POP32_VAL(esp); /* 0x171A4DDE: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A4DDF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A4DE0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x171A4DE1: ret 0x24 */
  _ljump:
    switch (_itail_tgt) {
      case 0x171A4521u: goto L_171A4521;
      case 0x171A4D79u: goto L_171A4D79;
      case 0x171A4D7Du: goto L_171A4D7D;
      case 0x171A4D81u: goto L_171A4D81;
      case 0x171A4DA5u: goto L_171A4DA5;
      case 0x171A4DAAu: goto L_171A4DAA;
      case 0x171A4DAEu: goto L_171A4DAE;
      case 0x171A4DB3u: goto L_171A4DB3;
      case 0x171A4DC4u: goto L_171A4DC4;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_171A4E15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A4E15u);

L_171A4E15:
    edi = edi; /* 0x171A4E15: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A4E17: push ebp */
    ebp = esp; /* 0x171A4E18: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x171A4E1A: mov ecx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x171A4E1D: fld dword ptr [ecx] */
    edx = MEM32(ebp + 0xC); /* 0x171A4E1F: mov edx, dword ptr [ebp + 0xc] */
    _st[0] /= (double)*(float*)ADDR(edx); /* 0x171A4E22: fdiv dword ptr [edx] */
    fp_push(_st[0]); /* 0x171A4E24: fld st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(0x17250DF4) = _v; } /* 0x171A4E26: fst dword ptr [0x17250df4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx)); /* 0x171A4E2C: fcomp dword ptr [ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A4E2E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171A4E30: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171A4E3C; /* 0x171A4E33: jp 0x171a4e3c */
L_171A4E35:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171A4E35: fstp st(0) */
    goto L_171A4FBD; /* 0x171A4E37: jmp 0x171a4fbd */
L_171A4E3C:
    _st[0] = -_st[0]; /* 0x171A4E3C: fchs  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edx)); /* 0x171A4E3E: fcom dword ptr [edx] */
    { float _v = (float)_st[0]; *(float*)ADDR(0x17250DF0) = _v; } /* 0x171A4E40: fst dword ptr [0x17250df0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A4E46: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171A4E48: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4E35; /* 0x171A4E4B: je 0x171a4e35 */
L_171A4E4D:
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x171A4E4D: fadd dword ptr [ecx] */
    _st[0] = (double)*(float*)ADDR(ecx) / _st[0]; /* 0x171A4E4F: fdivr dword ptr [ecx] */
    { float _v = (float)_st[0]; *(float*)ADDR(0x17250DEC) = _v; } /* 0x171A4E51: fst dword ptr [0x17250dec] */
    fp_push(*(float*)&MEM32(edx)); /* 0x171A4E57: fld dword ptr [edx] */
    fp_push(_st[1]); /* 0x171A4E59: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171A4E5B: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A4E5D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171A4E5F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171A4E35; /* 0x171A4E62: jp 0x171a4e35 */
L_171A4E64:
    fp_push(*(float*)&MEM32(ecx)); /* 0x171A4E64: fld dword ptr [ecx] */
    _st[0] /= _st[1]; /* 0x171A4E66: fdiv st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(0x17250DF0) = _v; } /* 0x171A4E68: fst dword ptr [0x17250df0] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edx)); /* 0x171A4E6E: fcomp dword ptr [edx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A4E70: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171A4E72: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4E35; /* 0x171A4E75: je 0x171a4e35 */
L_171A4E77:
    fp_push(_st[0]); /* 0x171A4E77: fld st(0) */
    _st[0] += (double)*(float*)ADDR(edx); /* 0x171A4E79: fadd dword ptr [edx] */
    { float _v = (float)_st[0]; *(float*)ADDR(0x17250DE8) = _v; } /* 0x171A4E7B: fst dword ptr [0x17250de8] */
    fp_push(*(float*)&MEM32(edx)); /* 0x171A4E81: fld dword ptr [edx] */
    fp_push(_st[1]); /* 0x171A4E83: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171A4E85: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A4E87: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171A4E89: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171A4ECF; /* 0x171A4E8C: jp 0x171a4ecf */
L_171A4E8E:
    fp_push(*(float*)&MEM32(ecx)); /* 0x171A4E8E: fld dword ptr [ecx] */
    _st[0] /= _st[1]; /* 0x171A4E90: fdiv st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(0x17250DF4) = _v; } /* 0x171A4E92: fst dword ptr [0x17250df4] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171A4E98: fstp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx)); /* 0x171A4E9A: fcom dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A4E9C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171A4E9E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171A4ECF; /* 0x171A4EA1: jnp 0x171a4ecf */
L_171A4EA3:
    fp_push(*(float*)&MEM32(0x17250DF0)); /* 0x171A4EA3: fld dword ptr [0x17250df0] */
    _st[0] *= _st[1]; /* 0x171A4EA9: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(0x17250DF0) = _v; } /* 0x171A4EAB: fst dword ptr [0x17250df0] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edx)); /* 0x171A4EB1: fcomp dword ptr [edx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A4EB3: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171A4EB5: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4ECF; /* 0x171A4EB8: je 0x171a4ecf */
L_171A4EBA:
    fp_push(_st[0]); /* 0x171A4EBA: fld st(0) */
    _st[0] *= _st[1]; /* 0x171A4EBC: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(0x17250DF4) = _v; } /* 0x171A4EBE: fst dword ptr [0x17250df4] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171A4EC4: fstp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx)); /* 0x171A4EC6: fcom dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A4EC8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171A4ECA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171A4ED6; /* 0x171A4ECD: jp 0x171a4ed6 */
L_171A4ECF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171A4ECF: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_171A4E35; /* 0x171A4ED1: jmp 0x171a4e35 */
L_171A4ED6:
    eax = MEM32(ebp + 0x8); /* 0x171A4ED6: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax), 0 */ /* 0x171A4ED9: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A4EE9; /* 0x171A4EDC: jne 0x171a4ee9 */
L_171A4EDE:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171A4EDE: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171A4EE0: fstp st(0) */
L_171A4EE2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A4EE2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A4EE4: inc eax */
    _flag_k = FK_INC;
L_171A4EE5:
    ebp = POP32_VAL(esp); /* 0x171A4EE5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A4EE6: ret 0xc */
L_171A4EE9:
    fp_push(*(float*)&MEM32(0x17250DF0)); /* 0x171A4EE9: fld dword ptr [0x17250df0] */
    fp_push(_st[0]); /* 0x171A4EEF: fld st(0) */
    _st[0] += _st[2]; /* 0x171A4EF1: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x17250DE4) = _v; } /* 0x171A4EF3: fstp dword ptr [0x17250de4] */
    fp_push(_st[1]); /* 0x171A4EF9: fld st(1) */
    _st[0] /= _st[1]; /* 0x171A4EFB: fdiv st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x17250DE0) = _v; } /* 0x171A4EFD: fstp dword ptr [0x17250de0] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171A4F03: fstp st(0) */
    fp_push(_st[0]); /* 0x171A4F05: fld st(0) */
    _st[0] /= _st[1]; /* 0x171A4F07: fdiv st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x17250DDC) = _v; } /* 0x171A4F09: fstp dword ptr [0x17250ddc] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x171A4F0F: fmul dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x17250DD8) = _v; } /* 0x171A4F11: fstp dword ptr [0x17250dd8] */
    _st[0] *= (double)*(float*)ADDR(0x17250DF0); /* 0x171A4F17: fmul dword ptr [0x17250df0] */
    { float _v = (float)_st[0]; *(float*)ADDR(0x17250DD4) = _v; } /* 0x171A4F1D: fst dword ptr [0x17250dd4] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x171A4F23: fld dword ptr [0x17001430] */
    _st[0] *= _st[1]; /* 0x171A4F29: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x17250DD0) = _v; } /* 0x171A4F2B: fstp dword ptr [0x17250dd0] */
    fp_push(*(float*)&MEM32(0x17250DE4)); /* 0x171A4F31: fld dword ptr [0x17250de4] */
    fp_push(*(float*)&MEM32(0x17250DE4)); /* 0x171A4F37: fld dword ptr [0x17250de4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171A4F3D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A4F3F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171A4F41: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171A4E35; /* 0x171A4F44: jnp 0x171a4e35 */
L_171A4F4A:
    fp_push(*(float*)&MEM32(0x17250DE0)); /* 0x171A4F4A: fld dword ptr [0x17250de0] */
    fp_push(*(float*)&MEM32(0x17250DE0)); /* 0x171A4F50: fld dword ptr [0x17250de0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171A4F56: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A4F58: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171A4F5A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171A4E35; /* 0x171A4F5D: jnp 0x171a4e35 */
L_171A4F63:
    fp_push(*(float*)&MEM32(0x17250DDC)); /* 0x171A4F63: fld dword ptr [0x17250ddc] */
    fp_push(*(float*)&MEM32(0x17250DDC)); /* 0x171A4F69: fld dword ptr [0x17250ddc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171A4F6F: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A4F71: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171A4F73: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171A4E35; /* 0x171A4F76: jnp 0x171a4e35 */
L_171A4F7C:
    fp_push(*(float*)&MEM32(0x17250DD8)); /* 0x171A4F7C: fld dword ptr [0x17250dd8] */
    fp_push(*(float*)&MEM32(0x17250DD8)); /* 0x171A4F82: fld dword ptr [0x17250dd8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171A4F88: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A4F8A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171A4F8C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171A4E35; /* 0x171A4F8F: jnp 0x171a4e35 */
L_171A4F95:
    fp_push(_st[0]); /* 0x171A4F95: fld st(0) */
    fp_push(_st[1]); /* 0x171A4F97: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171A4F99: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A4F9B: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171A4F9D: fstp st(0) */
    /* test HI8(eax), 0x44u */ /* 0x171A4F9F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171A4FBD; /* 0x171A4FA2: jnp 0x171a4fbd */
L_171A4FA4:
    fp_push(*(float*)&MEM32(0x17250DD0)); /* 0x171A4FA4: fld dword ptr [0x17250dd0] */
    fp_push(*(float*)&MEM32(0x17250DD0)); /* 0x171A4FAA: fld dword ptr [0x17250dd0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171A4FB0: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A4FB2: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171A4FB4: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171A4EE2; /* 0x171A4FB7: jp 0x171a4ee2 */
L_171A4FBD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A4FBD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171A4EE5; /* 0x171A4FBF: jmp 0x171a4ee5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A4FC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A4FC9u);

L_171A4FC9:
    edi = edi; /* 0x171A4FC9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A4FCB: push ebp */
    ebp = esp; /* 0x171A4FCC: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171A4FCE: mov eax, dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x171A4FD1: fld1  */
    fp_push(*(double*)ADDR(eax)); /* 0x171A4FD3: fld qword ptr [eax] */
    eax = MEM32(ebp + 0xC); /* 0x171A4FD5: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x171A4FD8: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x171A4FDA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4FF8; /* 0x171A4FDC: je 0x171a4ff8 */
L_171A4FDE:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171A4FE6; /* 0x171A4FDE: jge 0x171a4fe6 */
L_171A4FE0:
    fp_push(1.0); /* 0x171A4FE0: fld1  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171A4FE2: neg eax */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x171A4FE4: fdivrp st(1) */
L_171A4FE6:
    /* test LO8(eax), 1 */ /* 0x171A4FE6: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A4FEE; /* 0x171A4FE8: je 0x171a4fee */
L_171A4FEA:
    fp_push(_st[0]); /* 0x171A4FEA: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x171A4FEC: fmulp st(2) */
L_171A4FEE:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x171A4FEE: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x171A4FEE: shr eax, 1 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171A4FF8; /* 0x171A4FF0: je 0x171a4ff8 */
L_171A4FF2:
    fp_push(_st[0]); /* 0x171A4FF2: fld st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171A4FF4: fmulp st(1) */
    RECOMP_BACKEDGE();
    goto L_171A4FE6; /* 0x171A4FF6: jmp 0x171a4fe6 */
L_171A4FF8:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171A4FF8: fstp st(0) */
    ebp = POP32_VAL(esp); /* 0x171A4FFA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A4FFB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171A5003(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5003u);

L_171A5003:
    edi = edi; /* 0x171A5003: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5005: push ebp */
    ebp = esp; /* 0x171A5006: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171A5008: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ecx)); /* 0x171A500B: fld qword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171A500D: fcomp qword ptr [0x17001d90] */
    fp_pop();
    fp_push(*(double*)ADDR(ecx)); /* 0x171A5013: fld qword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A5015: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171A5017: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A501E; /* 0x171A501A: je 0x171a501e */
L_171A501C:
    _st[0] = -_st[0]; /* 0x171A501C: fchs  */
L_171A501E:
    eax = MEM32(ebp + 0xC); /* 0x171A501E: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(eax)); /* 0x171A5021: fld qword ptr [eax] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171A5023: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171A5029: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171A502B: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5032; /* 0x171A502E: je 0x171a5032 */
L_171A5030:
    _st[0] = -_st[0]; /* 0x171A5030: fchs  */
L_171A5032:
    ebp = POP32_VAL(esp); /* 0x171A5032: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A5033: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171A503B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A503Bu);

L_171A503B:
    edi = edi; /* 0x171A503B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A503D: push ebp */
    ebp = esp; /* 0x171A503E: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x171A5040: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(eax); /* 0x171A5043: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x171A5045: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171A5047: push edi */
    edi = MEM32(ebp + 0x18); /* 0x171A5048: mov edi, dword ptr [ebp + 0x18] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A508A; /* 0x171A504B: jle 0x171a508a */
L_171A504D:
    eax = MEM32(ebp + 0x10); /* 0x171A504D: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x171A5050: push ebx */
    PUSH32(esp, esi); /* 0x171A5051: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171A5052: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x171A5055: sub esi, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = ecx; /* 0x171A5057: mov dword ptr [ebp + 0x14], ecx */
L_171A505A:
    ecx = MEM32(eax); /* 0x171A505A: mov ecx, dword ptr [eax] */
    /* cmp ecx, edi */ /* 0x171A505C: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = edi; /* 0x171A505E: mov edx, edi */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171A5064; /* 0x171A5060: jge 0x171a5064 */
L_171A5062:
    edx = ecx; /* 0x171A5062: mov edx, ecx */
L_171A5064:
    ecx = MEM32(esi + eax); /* 0x171A5064: mov ecx, dword ptr [esi + eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x171A5067: sub edi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171A5069: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_171A5080; /* 0x171A506A: js 0x171a5080 */
L_171A506C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171A506C: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x18) = edx; /* 0x171A506D: mov dword ptr [ebp + 0x18], edx */
L_171A5070:
    ebx = MEM32(ebp + 0x8); /* 0x171A5070: mov ebx, dword ptr [ebp + 8] */
    SET_LO8(edx, MEM8(ecx)); /* 0x171A5073: mov dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x171A5075: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171A5078: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1; /* 0x171A5079: dec dword ptr [ebp + 0x18] */
    _flag_k = FK_DEC;
    MEM8(ebx) = (uint8_t)(LO8(edx)); /* 0x171A507C: mov byte ptr [ebx], dl */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A5070; /* 0x171A507E: jne 0x171a5070 */
L_171A5080:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171A5080: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x171A5083: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A505A; /* 0x171A5086: jne 0x171a505a */
L_171A5088:
    esi = POP32_VAL(esp); /* 0x171A5088: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A5089: pop ebx */
L_171A508A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171A508A: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_171A50A6; /* 0x171A508B: js 0x171a50a6 */
L_171A508D:
    ecx = edi + 0x1; /* 0x171A508D: lea ecx, [edi + 1] */
    edi = MEM32(ebp + 0x8); /* 0x171A5090: mov edi, dword ptr [ebp + 8] */
    edx = ecx; /* 0x171A5093: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171A5095: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171A5095: shr ecx, 2 */
    eax = 0x20202020u; /* 0x171A5098: mov eax, 0x20202020 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171A509D: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x171A509F: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171A50A1: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x171A50A4: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
L_171A50A6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A50A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x171A50A8: pop edi */
    ebp = POP32_VAL(esp); /* 0x171A50A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171A50AA: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171A50B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A50B2u);

L_171A50B2:
    edi = edi; /* 0x171A50B2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A50B4: push ebp */
    ebp = esp; /* 0x171A50B5: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171A50B7: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x171A50BA: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x171A50BD: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171A50C0: push ebx */
    PUSH32(esp, esi); /* 0x171A50C1: push esi */
    esi = MEM32(ebp + 0x14); /* 0x171A50C2: mov esi, dword ptr [ebp + 0x14] */
    /* cmp edx, esi */ /* 0x171A50C5: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171A50C7: push edi */
    edi = eax + edx; /* 0x171A50C8: lea edi, [eax + edx] */
    ebx = ecx + esi; /* 0x171A50CB: lea ebx, [ecx + esi] */
    if (CMP_G(_flag_a, _flag_b)) goto L_171A5100; /* 0x171A50CE: jg 0x171a5100 */
L_171A50D0:
    goto L_171A50DA; /* 0x171A50D0: jmp 0x171a50da */
L_171A50D2:
    SET_LO8(edx, MEM8(eax)); /* 0x171A50D2: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x171A50D4: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5106; /* 0x171A50D6: jne 0x171a5106 */
L_171A50D8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A50D8: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171A50D9: inc ecx */
    _flag_k = FK_INC;
L_171A50DA:
    /* cmp eax, edi */ /* 0x171A50DA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A50D2; /* 0x171A50DC: jb 0x171a50d2 */
L_171A50DE:
    goto L_171A50E6; /* 0x171A50DE: jmp 0x171a50e6 */
L_171A50E0:
    /* cmp MEM8(ecx), 0x20u */ /* 0x171A50E0: cmp byte ptr [ecx], 0x20 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A50F3; /* 0x171A50E3: jne 0x171a50f3 */
L_171A50E5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171A50E5: inc ecx */
    _flag_k = FK_INC;
L_171A50E6:
    /* cmp ecx, ebx */ /* 0x171A50E6: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A50E0; /* 0x171A50E8: jb 0x171a50e0 */
L_171A50EA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A50EA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A50EC:
    edi = POP32_VAL(esp); /* 0x171A50EC: pop edi */
    esi = POP32_VAL(esp); /* 0x171A50ED: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A50EE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A50EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A50F0: ret 0x10 */
L_171A50F3:
    PUSH32(esp, 0x20u); /* 0x171A50F3: push 0x20 */
    eax = POP32_VAL(esp); /* 0x171A50F5: pop eax */
    goto L_171A5109; /* 0x171A50F6: jmp 0x171a5109 */
L_171A50F8:
    SET_LO8(edx, MEM8(eax)); /* 0x171A50F8: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x171A50FA: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5106; /* 0x171A50FC: jne 0x171a5106 */
L_171A50FE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A50FE: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171A50FF: inc ecx */
    _flag_k = FK_INC;
L_171A5100:
    /* cmp ecx, ebx */ /* 0x171A5100: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A50F8; /* 0x171A5102: jb 0x171a50f8 */
L_171A5104:
    goto L_171A5116; /* 0x171A5104: jmp 0x171a5116 */
L_171A5106:
    eax = (uint32_t)MEM8(eax); /* 0x171A5106: movzx eax, byte ptr [eax] */
L_171A5109:
    ecx = (uint32_t)MEM8(ecx); /* 0x171A5109: movzx ecx, byte ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171A510C: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_171A50EC; /* 0x171A510E: jmp 0x171a50ec */
L_171A5110:
    /* cmp MEM8(eax), 0x20u */ /* 0x171A5110: cmp byte ptr [eax], 0x20 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A511C; /* 0x171A5113: jne 0x171a511c */
L_171A5115:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A5115: inc eax */
    _flag_k = FK_INC;
L_171A5116:
    /* cmp eax, edi */ /* 0x171A5116: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A5110; /* 0x171A5118: jb 0x171a5110 */
L_171A511A:
    RECOMP_BACKEDGE();
    goto L_171A50EA; /* 0x171A511A: jmp 0x171a50ea */
L_171A511C:
    eax = (uint32_t)MEM8(eax); /* 0x171A511C: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x20u; /* 0x171A511F: sub eax, 0x20 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_171A50EC; /* 0x171A5122: jmp 0x171a50ec */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A5129(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5129u);

L_171A5129:
    edi = edi; /* 0x171A5129: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A512B: push ebp */
    ebp = esp; /* 0x171A512C: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x171A512E: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x14); /* 0x171A5131: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp eax, ecx */ /* 0x171A5134: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171A5136: push esi */
    PUSH32(esp, edi); /* 0x171A5137: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171A5138: mov edi, dword ptr [ebp + 8] */
    esi = edi + eax; /* 0x171A513B: lea esi, [edi + eax] */
    if (CMP_G(_flag_a, _flag_b)) goto L_171A5153; /* 0x171A513E: jg 0x171a5153 */
L_171A5140:
    /* cmp edi, esi */ /* 0x171A5140: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171A5180; /* 0x171A5142: jae 0x171a5180 */
L_171A5144:
    eax = MEM32(ebp + 0xC); /* 0x171A5144: mov eax, dword ptr [ebp + 0xc] */
L_171A5147:
    SET_LO8(ecx, MEM8(eax)); /* 0x171A5147: mov cl, byte ptr [eax] */
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x171A5149: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A514B: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A514C: inc eax */
    _flag_k = FK_INC;
    /* cmp edi, esi */ /* 0x171A514D: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A5147; /* 0x171A514F: jb 0x171a5147 */
L_171A5151:
    goto L_171A5180; /* 0x171A5151: jmp 0x171a5180 */
L_171A5153:
    eax = MEM32(ebp + 0xC); /* 0x171A5153: mov eax, dword ptr [ebp + 0xc] */
    edx = eax + ecx; /* 0x171A5156: lea edx, [eax + ecx] */
    goto L_171A5161; /* 0x171A5159: jmp 0x171a5161 */
L_171A515B:
    SET_LO8(ecx, MEM8(eax)); /* 0x171A515B: mov cl, byte ptr [eax] */
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x171A515D: mov byte ptr [edi], cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A515F: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A5160: inc eax */
    _flag_k = FK_INC;
L_171A5161:
    /* cmp eax, edx */ /* 0x171A5161: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A515B; /* 0x171A5163: jb 0x171a515b */
L_171A5165:
    /* cmp edi, esi */ /* 0x171A5165: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171A5180; /* 0x171A5167: jae 0x171a5180 */
L_171A5169:
    ecx = esi; /* 0x171A5169: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x171A516B: sub ecx, edi */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x171A516D: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171A516F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171A516F: shr ecx, 2 */
    eax = 0x20202020u; /* 0x171A5172: mov eax, 0x20202020 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171A5177: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x171A5179: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171A517B: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x171A517E: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
L_171A5180:
    edi = POP32_VAL(esp); /* 0x171A5180: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5181: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171A5183: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A5184: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A5185: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171A518D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A518Du);

L_171A518D:
    /* cmp MEM8(0x17250DF8), 0 */ /* 0x171A518D: cmp byte ptr [0x17250df8], 0 */
    _flag_a = (uint32_t)(MEM8(0x17250DF8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A51BC; /* 0x171A5194: jne 0x171a51bc */
L_171A5196:
    PUSH32(esp, edi); /* 0x171A5196: push edi */
    PUSH32(esp, 0x41u); /* 0x171A5197: push 0x41 */
    ecx = POP32_VAL(esp); /* 0x171A5199: pop ecx */
    eax = 0x20202020u; /* 0x171A519A: mov eax, 0x20202020 */
    edi = 0x17250DF8u; /* 0x171A519F: mov edi, 0x17250df8 */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171A51A4: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    MEM8(0x17250DF8) = (uint8_t)(0xDu); /* 0x171A51A6: mov byte ptr [0x17250df8], 0xd */
    MEM8(0x17250DF9) = (uint8_t)(0xAu); /* 0x171A51AD: mov byte ptr [0x17250df9], 0xa */
    MEM8(0x17250EFB) = (uint8_t)(0); /* 0x171A51B4: mov byte ptr [0x17250efb], 0 */
    edi = POP32_VAL(esp); /* 0x171A51BB: pop edi */
L_171A51BC:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A51BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A51C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A51C2u);

L_171A51C2:
    edi = edi; /* 0x171A51C2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A51C4: push ebp */
    ebp = esp; /* 0x171A51C5: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171A51C7: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x171A51CA: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x171A51CD: push esi */
    esi = MEM32(ecx + 0x4); /* 0x171A51CE: mov esi, dword ptr [ecx + 4] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A51DA; /* 0x171A51D1: jne 0x171a51da */
L_171A51D3:
    eax = MEM32(ecx); /* 0x171A51D3: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x171A51D5: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x171A51D7: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
L_171A51DA:
    eax = esi; /* 0x171A51DA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A51DC: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A51DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A51DE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A51E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A51E6u);

L_171A51E6:
    edi = edi; /* 0x171A51E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A51E8: push ebp */
    ebp = esp; /* 0x171A51E9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A51EB: push ecx */
    PUSH32(esp, ecx); /* 0x171A51EC: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171A51ED: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x171A51F0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5236; /* 0x171A51F2: je 0x171a5236 */
L_171A51F4:
    eax = MEM32(ebp + 0x10); /* 0x171A51F4: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171A51F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5236; /* 0x171A51F9: je 0x171a5236 */
L_171A51FB:
    PUSH32(esp, esi); /* 0x171A51FB: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171A51FC: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171A51FF: push edi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171A5200: mov dword ptr [ebp - 8], ecx */
    ecx = ebp + 0xC; /* 0x171A5203: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x171A5206: push ecx */
    PUSH32(esp, 3); /* 0x171A5207: push 3 */
    ecx = ebp + (-0x8); /* 0x171A5209: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x171A520C: push ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A520D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi); /* 0x171A5210: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171A5212: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171A5213: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A5216: mov edi, eax */
    /* test edi, edi */ /* 0x171A5218: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A5230; /* 0x171A521A: jl 0x171a5230 */
L_171A521C:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A521C: push dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x171A521F: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171A5221: push esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x171A5222: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A5225: mov edi, eax */
    eax = MEM32(ebp + 0xC); /* 0x171A5227: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171A522A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171A522C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171A522D: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_171A5230:
    eax = edi; /* 0x171A5230: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x171A5232: pop edi */
    esi = POP32_VAL(esp); /* 0x171A5233: pop esi */
    goto L_171A523B; /* 0x171A5234: jmp 0x171a523b */
L_171A5236:
    eax = 0x88760385u; /* 0x171A5236: mov eax, 0x88760385 */
L_171A523B:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A523B: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A523C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A5244(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5244u);

L_171A5244:
    edi = edi; /* 0x171A5244: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5246: push ebp */
    ebp = esp; /* 0x171A5247: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171A5249: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x171A524C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A52A0; /* 0x171A524E: je 0x171a52a0 */
L_171A5250:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x171A5250: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171A5253: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171A5254: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171A5257: push edi */
    PUSH32(esp, 4); /* 0x171A5258: push 4 */
    ecx = POP32_VAL(esp); /* 0x171A525A: pop ecx */
    edi = 0x1702AA2Cu; /* 0x171A525B: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5260: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171A5262: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171A528F; /* 0x171A5264: je 0x171a528f */
L_171A5266:
    esi = MEM32(ebp + 0xC); /* 0x171A5266: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x171A5269: push 4 */
    ecx = POP32_VAL(esp); /* 0x171A526B: pop ecx */
    edi = 0x17001C10u; /* 0x171A526C: mov edi, 0x17001c10 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5271: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171A5273: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171A528F; /* 0x171A5275: je 0x171a528f */
L_171A5277:
    esi = MEM32(ebp + 0xC); /* 0x171A5277: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x171A527A: push 4 */
    ecx = POP32_VAL(esp); /* 0x171A527C: pop ecx */
    edi = 0x17001BF0u; /* 0x171A527D: mov edi, 0x17001bf0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5282: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171A5284: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171A528F; /* 0x171A5286: je 0x171a528f */
L_171A5288:
    eax = 0x80004002u; /* 0x171A5288: mov eax, 0x80004002 */
    goto L_171A529C; /* 0x171A528D: jmp 0x171a529c */
L_171A528F:
    eax = MEM32(ebp + 0x8); /* 0x171A528F: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x171A5292: mov dword ptr [edx], eax */
    ecx = MEM32(eax); /* 0x171A5294: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171A5296: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171A5297: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A529A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A529C:
    edi = POP32_VAL(esp); /* 0x171A529C: pop edi */
    esi = POP32_VAL(esp); /* 0x171A529D: pop esi */
    goto L_171A52A5; /* 0x171A529E: jmp 0x171a52a5 */
L_171A52A0:
    eax = 0x80004003u; /* 0x171A52A0: mov eax, 0x80004003 */
L_171A52A5:
    ebp = POP32_VAL(esp); /* 0x171A52A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A52A6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A52AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A52AEu);

L_171A52AE:
    edi = edi; /* 0x171A52AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A52B0: push ebp */
    ebp = esp; /* 0x171A52B1: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171A52B3: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x171A52B6: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x171A52B9: push esi */
    esi = MEM32(ecx + 0x4); /* 0x171A52BA: mov esi, dword ptr [ecx + 4] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A52C6; /* 0x171A52BD: jne 0x171a52c6 */
L_171A52BF:
    eax = MEM32(ecx); /* 0x171A52BF: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x171A52C1: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x171A52C3: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
L_171A52C6:
    eax = esi; /* 0x171A52C6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A52C8: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A52C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A52CA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A52D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A52D2u);

L_171A52D2:
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) - 1; /* 0x171A52D2: dec dword ptr [ecx + 0x18] */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x171A52D5: push esi */
    esi = MEM32(ecx + 0x18); /* 0x171A52D6: mov esi, dword ptr [ecx + 0x18] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A52E1; /* 0x171A52D9: jne 0x171a52e1 */
L_171A52DB:
    eax = MEM32(ecx); /* 0x171A52DB: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x171A52DD: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171A52DF: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171A52E1:
    eax = esi; /* 0x171A52E1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A52E3: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A52E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A52EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A52EAu);

L_171A52EA:
    edi = edi; /* 0x171A52EA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A52EC: push ebp */
    ebp = esp; /* 0x171A52ED: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A52EF: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A52F0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x171A52F2: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A531F; /* 0x171A52F5: je 0x171a531f */
L_171A52F7:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171A52F7: push -1 */
    PUSH32(esp, MEM32(esi * 8 + 0x17023740)); /* 0x171A52F9: push dword ptr [esi*8 + 0x17023740] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171A5300: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A5302: push dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x171A5305: push 1 */
    PUSH32(esp, 0x409u); /* 0x171A5307: push 0x409 */
    RECOMP_ICALL(MEM32(0x170010A8)); /* 0x171A530C: call dword ptr [0x170010a8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x171A5312: push 2 */
    ecx = POP32_VAL(esp); /* 0x171A5314: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171A5315: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A5326; /* 0x171A5317: je 0x171a5326 */
L_171A5319:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171A5319: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 0xBu */ /* 0x171A531A: cmp esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171A52F7; /* 0x171A531D: jl 0x171a52f7 */
L_171A531F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A531F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A5321:
    esi = POP32_VAL(esp); /* 0x171A5321: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A5322: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A5323: ret 4 */
L_171A5326:
    eax = MEM32(esi * 8 + 0x17023744); /* 0x171A5326: mov eax, dword ptr [esi*8 + 0x17023744] */
    RECOMP_BACKEDGE();
    goto L_171A5321; /* 0x171A532D: jmp 0x171a5321 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A5334(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5334u);

L_171A5334:
    edi = edi; /* 0x171A5334: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5336: push ebp */
    ebp = esp; /* 0x171A5337: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171A5339: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171A533C: push esi */
    esi = eax + 0x1; /* 0x171A533D: lea esi, [eax + 1] */
L_171A5340:
    SET_LO8(edx, MEM8(eax)); /* 0x171A5340: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A5342: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x171A5343: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A5340; /* 0x171A5345: jne 0x171a5340 */
L_171A5347:
    edx = ebp + 0x8; /* 0x171A5347: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x171A534A: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171A534B: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x171A534D: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A534E: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x171A5351: add ecx, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171A8D23); /* 0x171A5354: call 0x171a8d23 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171A5359: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x171A535C: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A535D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A535E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A5366(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5366u);

L_171A5366:
    edi = edi; /* 0x171A5366: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5368: push ebp */
    ebp = esp; /* 0x171A5369: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A536B: push ecx */
    eax = ebp + (-0x4); /* 0x171A536C: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171A536F: push eax */
    PUSH32(esp, 1); /* 0x171A5370: push 1 */
    eax = ebp + 0x8; /* 0x171A5372: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A5375: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x171A5376: add ecx, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171A8D23); /* 0x171A5379: call 0x171a8d23 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x171A537E: mov eax, dword ptr [ebp - 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A5381: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A5382: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A538A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A538Au);

L_171A538A:
    edi = edi; /* 0x171A538A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A538C: push ebp */
    ebp = esp; /* 0x171A538D: mov ebp, esp */
    eax = ebp + 0x8; /* 0x171A538F: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A5392: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A5393: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x171A5396: add ecx, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A5399: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_171A8D23); /* 0x171A539C: call 0x171a8d23 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171A53A1: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x171A53A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A53A5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171A53AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A53ADu);

L_171A53AD:
    edi = edi; /* 0x171A53AD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A53AF: push ebp */
    ebp = esp; /* 0x171A53B0: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A53B2: push ecx */
    eax = ebp + (-0x4); /* 0x171A53B3: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171A53B6: push eax */
    PUSH32(esp, 2); /* 0x171A53B7: push 2 */
    eax = ebp + 0x8; /* 0x171A53B9: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A53BC: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x171A53BD: add ecx, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171A8D23); /* 0x171A53C0: call 0x171a8d23 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x171A53C5: mov eax, dword ptr [ebp - 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A53C8: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A53C9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A53D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A53D1u);

L_171A53D1:
    edi = edi; /* 0x171A53D1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A53D3: push ebp */
    ebp = esp; /* 0x171A53D4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x171A53D6: sub esp, 0x24 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A53D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x171A53DB: push eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x171A53DC: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x171A53DF: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x171A53E2: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x171A53E5: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A53E8: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x4); /* 0x171A53EB: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171A53EE: push eax */
    PUSH32(esp, 0x20u); /* 0x171A53EF: push 0x20 */
    eax = ebp + (-0x24); /* 0x171A53F1: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x171A53F4: push eax */
    PUSH32(esp, MEM32(ecx + 0x30)); /* 0x171A53F5: push dword ptr [ecx + 0x30] */
    MEM32(ebp + (-0x24)) = 0x20666F78u; /* 0x171A53F8: mov dword ptr [ebp - 0x24], 0x20666f78 */
    MEM32(ebp + (-0x20)) = 0x34303330u; /* 0x171A53FF: mov dword ptr [ebp - 0x20], 0x34303330 */
    MEM32(ebp + (-0x1C)) = 0x206E6962u; /* 0x171A5406: mov dword ptr [ebp - 0x1c], 0x206e6962 */
    MEM32(ebp + (-0x18)) = 0x32333030u; /* 0x171A540D: mov dword ptr [ebp - 0x18], 0x32333030 */
    RECOMP_ICALL(MEM32(0x170010E4)); /* 0x171A5414: call dword ptr [0x170010e4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171A541A: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171A541C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF8FFF2u);
    eax = eax & 0x7FF8FFF2u; /* 0x171A541E: and eax, 0x7ff8fff2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007000Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x8007000Eu; /* 0x171A5423: add eax, 0x8007000e */
    _flag_k = FK_ADD;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A5428: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A5429: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A542F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A542Fu);

L_171A542F:
    edi = edi; /* 0x171A542F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5431: push ebp */
    ebp = esp; /* 0x171A5432: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171A5434: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x171A5437: mov ecx, dword ptr [eax] */
    edx = MEM32(ebp + 0xC); /* 0x171A5439: mov edx, dword ptr [ebp + 0xc] */
    /* cmp ecx, edx */ /* 0x171A543C: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171A543E: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171A543F: mov esi, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171A5465; /* 0x171A5442: jae 0x171a5465 */
L_171A5444:
    MEM32(esi) = ecx; /* 0x171A5444: mov dword ptr [esi], ecx */
    /* cmp MEM32(eax), edx */ /* 0x171A5446: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171A5465; /* 0x171A5448: jae 0x171a5465 */
L_171A544A:
    ecx = MEM32(eax); /* 0x171A544A: mov ecx, dword ptr [eax] */
    /* cmp MEM8(ecx), 0 */ /* 0x171A544C: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5458; /* 0x171A544F: je 0x171a5458 */
L_171A5451:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171A5451: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x171A5452: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(eax) = ecx; /* 0x171A5454: mov dword ptr [eax], ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A544A; /* 0x171A5456: jb 0x171a544a */
L_171A5458:
    ecx = MEM32(eax); /* 0x171A5458: mov ecx, dword ptr [eax] */
    /* cmp ecx, edx */ /* 0x171A545A: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171A5465; /* 0x171A545C: jae 0x171a5465 */
L_171A545E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171A545E: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171A545F: mov dword ptr [eax], ecx */
    SET_LO8(eax, 1); /* 0x171A5461: mov al, 1 */
    goto L_171A546A; /* 0x171A5463: jmp 0x171a546a */
L_171A5465:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x171A5465: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171A5468: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171A546A:
    esi = POP32_VAL(esp); /* 0x171A546A: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A546B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A546C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A5474(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5474u);

L_171A5474:
    edi = edi; /* 0x171A5474: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5476: push ebp */
    ebp = esp; /* 0x171A5477: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A5479: push esi */
    esi = ecx; /* 0x171A547A: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x171A547C: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x171A547F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A548A; /* 0x171A5481: je 0x171a548a */
L_171A5483:
    PUSH32(esp, eax); /* 0x171A5483: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171A5484: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A5489: pop ecx */
L_171A548A:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A548A: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5497; /* 0x171A548E: je 0x171a5497 */
L_171A5490:
    PUSH32(esp, esi); /* 0x171A5490: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A5491: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A5496: pop ecx */
L_171A5497:
    eax = esi; /* 0x171A5497: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A5499: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A549A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A549B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A54A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A54A3u);

L_171A54A3:
    edi = edi; /* 0x171A54A3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A54A5: push ebp */
    ebp = esp; /* 0x171A54A6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A54A8: push esi */
    esi = ecx; /* 0x171A54A9: mov esi, ecx */
    RECOMP_CALL(sub_171A99CF); /* 0x171A54AB: call 0x171a99cf */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A54B0: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A54BD; /* 0x171A54B4: je 0x171a54bd */
L_171A54B6:
    PUSH32(esp, esi); /* 0x171A54B6: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A54B7: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A54BC: pop ecx */
L_171A54BD:
    eax = esi; /* 0x171A54BD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A54BF: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A54C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A54C1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A54C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A54C9u);

L_171A54C9:
    edi = edi; /* 0x171A54C9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A54CB: push ebp */
    ebp = esp; /* 0x171A54CC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A54CE: push esi */
    esi = ecx; /* 0x171A54CF: mov esi, ecx */
    eax = MEM32(esi); /* 0x171A54D1: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x171A54D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A54DE; /* 0x171A54D5: je 0x171a54de */
L_171A54D7:
    PUSH32(esp, eax); /* 0x171A54D7: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171A54D8: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A54DD: pop ecx */
L_171A54DE:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A54DE: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A54EB; /* 0x171A54E2: je 0x171a54eb */
L_171A54E4:
    PUSH32(esp, esi); /* 0x171A54E4: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A54E5: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A54EA: pop ecx */
L_171A54EB:
    eax = esi; /* 0x171A54EB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A54ED: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A54EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A54EF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A54F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A54F7u);

L_171A54F7:
    edi = edi; /* 0x171A54F7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A54F9: push ebp */
    ebp = esp; /* 0x171A54FA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A54FC: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A54FD: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x171A5500: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A5502: push dword ptr [ebp + 8] */
    ecx = esi + 0x34; /* 0x171A5505: lea ecx, [esi + 0x34] */
    RECOMP_CALL(sub_171A9246); /* 0x171A5508: call 0x171a9246 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A550D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5516; /* 0x171A550F: je 0x171a5516 */
L_171A5511:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5511: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A5513: inc eax */
    _flag_k = FK_INC;
    goto L_171A5527; /* 0x171A5514: jmp 0x171a5527 */
L_171A5516:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A5516: push dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x8); /* 0x171A5519: mov ecx, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A551C: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x171A551F: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171A9246); /* 0x171A5522: call 0x171a9246 */
    RECOMP_FLAGS_IN();
L_171A5527:
    esi = POP32_VAL(esp); /* 0x171A5527: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A5528: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A5529: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171A5531(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5531u);

L_171A5531:
    edi = edi; /* 0x171A5531: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5533: push ebp */
    ebp = esp; /* 0x171A5534: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A5536: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A5537: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x171A553A: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A553C: push dword ptr [ebp + 8] */
    ecx = esi + 0x34; /* 0x171A553F: lea ecx, [esi + 0x34] */
    RECOMP_CALL(sub_171A92A0); /* 0x171A5542: call 0x171a92a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A5547: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5550; /* 0x171A5549: je 0x171a5550 */
L_171A554B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A554B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A554D: inc eax */
    _flag_k = FK_INC;
    goto L_171A5561; /* 0x171A554E: jmp 0x171a5561 */
L_171A5550:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A5550: push dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x8); /* 0x171A5553: mov ecx, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A5556: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x171A5559: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171A92A0); /* 0x171A555C: call 0x171a92a0 */
    RECOMP_FLAGS_IN();
L_171A5561:
    esi = POP32_VAL(esp); /* 0x171A5561: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A5562: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A5563: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171A556B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A556Bu);

L_171A556B:
    edi = edi; /* 0x171A556B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A556D: push ebp */
    ebp = esp; /* 0x171A556E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171A5570: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x171A5573: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171A5576: push esi */
    esi = MEM32(eax); /* 0x171A5577: mov esi, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x171A5579: sub ecx, esi */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x10u */ /* 0x171A557B: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171A5584; /* 0x171A557E: jae 0x171a5584 */
L_171A5580:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171A5580: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_171A5592; /* 0x171A5582: jmp 0x171a5592 */
L_171A5584:
    PUSH32(esp, edi); /* 0x171A5584: push edi */
    edi = MEM32(ebp + 0x10); /* 0x171A5585: mov edi, dword ptr [ebp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A5588: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A5589: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A558A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A558B: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 0x10u; /* 0x171A558C: add dword ptr [eax], 0x10 */
    _flag_k = FK_ADD;
    SET_LO8(eax, 1); /* 0x171A558F: mov al, 1 */
    edi = POP32_VAL(esp); /* 0x171A5591: pop edi */
L_171A5592:
    esi = POP32_VAL(esp); /* 0x171A5592: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A5593: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A5594: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A559C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A559Cu);

L_171A559C:
    edi = edi; /* 0x171A559C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A559E: push ebp */
    ebp = esp; /* 0x171A559F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171A55A1: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x171A55A4: mov ecx, dword ptr [eax] */
    edx = MEM32(ebp + 0xC); /* 0x171A55A6: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x171A55A9: sub edx, ecx */
    _flag_k = FK_CMP;
    /* cmp edx, 1 */ /* 0x171A55AB: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171A55B4; /* 0x171A55AE: jae 0x171a55b4 */
L_171A55B0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171A55B0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_171A55BF; /* 0x171A55B2: jmp 0x171a55bf */
L_171A55B4:
    SET_LO8(ecx, MEM8(ecx)); /* 0x171A55B4: mov cl, byte ptr [ecx] */
    edx = MEM32(ebp + 0x10); /* 0x171A55B6: mov edx, dword ptr [ebp + 0x10] */
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x171A55B9: mov byte ptr [edx], cl */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x171A55BB: inc dword ptr [eax] */
    _flag_k = FK_INC;
    SET_LO8(eax, 1); /* 0x171A55BD: mov al, 1 */
L_171A55BF:
    ebp = POP32_VAL(esp); /* 0x171A55BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A55C0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A55C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A55C8u);

L_171A55C8:
    edi = edi; /* 0x171A55C8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A55CA: push ebp */
    ebp = esp; /* 0x171A55CB: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171A55CD: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x171A55D0: mov ecx, dword ptr [eax] */
    edx = MEM32(ebp + 0xC); /* 0x171A55D2: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x171A55D5: sub edx, ecx */
    _flag_k = FK_CMP;
    /* cmp edx, 4 */ /* 0x171A55D7: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171A55E0; /* 0x171A55DA: jae 0x171a55e0 */
L_171A55DC:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171A55DC: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_171A55EC; /* 0x171A55DE: jmp 0x171a55ec */
L_171A55E0:
    ecx = MEM32(ecx); /* 0x171A55E0: mov ecx, dword ptr [ecx] */
    edx = MEM32(ebp + 0x10); /* 0x171A55E2: mov edx, dword ptr [ebp + 0x10] */
    MEM32(edx) = ecx; /* 0x171A55E5: mov dword ptr [edx], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 4; /* 0x171A55E7: add dword ptr [eax], 4 */
    _flag_k = FK_ADD;
    SET_LO8(eax, 1); /* 0x171A55EA: mov al, 1 */
L_171A55EC:
    ebp = POP32_VAL(esp); /* 0x171A55EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A55ED: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A55F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A55F5u);

L_171A55F5:
    edi = edi; /* 0x171A55F5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A55F7: push ebp */
    ebp = esp; /* 0x171A55F8: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171A55FA: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x171A55FD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5640; /* 0x171A55FF: je 0x171a5640 */
L_171A5601:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x171A5601: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171A5604: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171A5605: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171A5608: push edi */
    PUSH32(esp, 4); /* 0x171A5609: push 4 */
    ecx = POP32_VAL(esp); /* 0x171A560B: pop ecx */
    edi = 0x1702AA2Cu; /* 0x171A560C: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5611: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171A5613: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171A562F; /* 0x171A5615: je 0x171a562f */
L_171A5617:
    esi = MEM32(ebp + 0xC); /* 0x171A5617: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x171A561A: push 4 */
    ecx = POP32_VAL(esp); /* 0x171A561C: pop ecx */
    edi = 0x17001C40u; /* 0x171A561D: mov edi, 0x17001c40 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5622: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171A5624: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171A562F; /* 0x171A5626: je 0x171a562f */
L_171A5628:
    eax = 0x80004002u; /* 0x171A5628: mov eax, 0x80004002 */
    goto L_171A563C; /* 0x171A562D: jmp 0x171a563c */
L_171A562F:
    eax = MEM32(ebp + 0x8); /* 0x171A562F: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x171A5632: mov dword ptr [edx], eax */
    ecx = MEM32(eax); /* 0x171A5634: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171A5636: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171A5637: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A563A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A563C:
    edi = POP32_VAL(esp); /* 0x171A563C: pop edi */
    esi = POP32_VAL(esp); /* 0x171A563D: pop esi */
    goto L_171A5645; /* 0x171A563E: jmp 0x171a5645 */
L_171A5640:
    eax = 0x80004003u; /* 0x171A5640: mov eax, 0x80004003 */
L_171A5645:
    ebp = POP32_VAL(esp); /* 0x171A5645: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A5646: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A564E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A564Eu);

L_171A564E:
    edi = edi; /* 0x171A564E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5650: push ebp */
    ebp = esp; /* 0x171A5651: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x171A5653: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x171A5656: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5670; /* 0x171A5658: je 0x171a5670 */
L_171A565A:
    eax = MEM32(ebp + 0x8); /* 0x171A565A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x2C); /* 0x171A565D: mov eax, dword ptr [eax + 0x2c] */
    /* test eax, eax */ /* 0x171A5660: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5668; /* 0x171A5662: je 0x171a5668 */
L_171A5664:
    eax = MEM32(eax); /* 0x171A5664: mov eax, dword ptr [eax] */
    goto L_171A566A; /* 0x171A5666: jmp 0x171a566a */
L_171A5668:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5668: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A566A:
    MEM32(ecx) = eax; /* 0x171A566A: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A566C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A5675; /* 0x171A566E: jmp 0x171a5675 */
L_171A5670:
    eax = 0x88760385u; /* 0x171A5670: mov eax, 0x88760385 */
L_171A5675:
    ebp = POP32_VAL(esp); /* 0x171A5675: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A5676: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171A567E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A567Eu);

L_171A567E:
    edi = edi; /* 0x171A567E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5680: push ebp */
    ebp = esp; /* 0x171A5681: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171A5683: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A56B8; /* 0x171A5687: je 0x171a56b8 */
L_171A5689:
    eax = MEM32(ebp + 0x8); /* 0x171A5689: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x2C); /* 0x171A568C: mov eax, dword ptr [eax + 0x2c] */
    /* test eax, eax */ /* 0x171A568F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A56B1; /* 0x171A5691: je 0x171a56b1 */
L_171A5693:
    ecx = MEM32(ebp + 0xC); /* 0x171A5693: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, MEM32(eax) */ /* 0x171A5696: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171A56B1; /* 0x171A5698: jae 0x171a56b1 */
L_171A569A:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A569A: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0xC); /* 0x171A569D: mov eax, dword ptr [eax + 0xc] */
    eax = MEM32(eax + ecx * 4); /* 0x171A56A0: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(eax); /* 0x171A56A3: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x17001C00u); /* 0x171A56A5: push 0x17001c00 */
    PUSH32(esp, eax); /* 0x171A56AA: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171A56AB: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A56AD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A56BD; /* 0x171A56AF: jmp 0x171a56bd */
L_171A56B1:
    eax = 0x88760393u; /* 0x171A56B1: mov eax, 0x88760393 */
    goto L_171A56BD; /* 0x171A56B6: jmp 0x171a56bd */
L_171A56B8:
    eax = 0x88760385u; /* 0x171A56B8: mov eax, 0x88760385 */
L_171A56BD:
    ebp = POP32_VAL(esp); /* 0x171A56BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A56BE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A56C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A56C6u);

L_171A56C6:
    edi = edi; /* 0x171A56C6: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A56C8: push esi */
    PUSH32(esp, edi); /* 0x171A56C9: push edi */
    esi = ecx; /* 0x171A56CA: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A56CC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xC), edi */ /* 0x171A56CE: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A56E7; /* 0x171A56D1: je 0x171a56e7 */
L_171A56D3:
    /* cmp MEM32(esi), edi */ /* 0x171A56D3: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A56E7; /* 0x171A56D5: jbe 0x171a56e7 */
L_171A56D7:
    eax = MEM32(esi + 0xC); /* 0x171A56D7: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171A56DA: mov ecx, dword ptr [eax + edi*4] */
    RECOMP_CALL(sub_171A52D2); /* 0x171A56DD: call 0x171a52d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A56E2: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A56E3: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A56D7; /* 0x171A56E5: jb 0x171a56d7 */
L_171A56E7:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A56E7: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A56EA: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A56EF: pop ecx */
    edi = POP32_VAL(esp); /* 0x171A56F0: pop edi */
    esi = POP32_VAL(esp); /* 0x171A56F1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A56F2: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A56F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A56F8u);

L_171A56F8:
    edi = edi; /* 0x171A56F8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A56FA: push ebp */
    ebp = esp; /* 0x171A56FB: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171A56FD: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171A5700: push esi */
    esi = ecx; /* 0x171A5701: mov esi, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171A5703: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(esi + 0xC) = ecx; /* 0x171A5706: mov dword ptr [esi + 0xc], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171A5709: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x1702383Cu; /* 0x171A570B: mov dword ptr [esi], 0x1702383c */
    MEM32(esi + 0x4) = 1; /* 0x171A5711: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = eax; /* 0x171A5718: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0x10) = ecx; /* 0x171A571B: mov dword ptr [esi + 0x10], ecx */
    MEM32(esi + 0x14) = ecx; /* 0x171A571E: mov dword ptr [esi + 0x14], ecx */
    MEM32(esi + 0x18) = 0x64u; /* 0x171A5721: mov dword ptr [esi + 0x18], 0x64 */
    MEM32(esi + 0x1C) = ecx; /* 0x171A5728: mov dword ptr [esi + 0x1c], ecx */
    MEM32(esi + 0x2C) = ecx; /* 0x171A572B: mov dword ptr [esi + 0x2c], ecx */
    ecx = MEM32(eax); /* 0x171A572E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171A5730: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171A5731: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A5734: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A5736: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A5737: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A5738: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171A5740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5740u);

L_171A5740:
    edi = edi; /* 0x171A5740: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5742: push ebp */
    ebp = esp; /* 0x171A5743: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x171A5745: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171A5748: push ebx */
    PUSH32(esp, esi); /* 0x171A5749: push esi */
    esi = ecx; /* 0x171A574A: mov esi, ecx */
    ecx = MEM32(esi + 0xC); /* 0x171A574C: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x171A574F: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x171A5751: push edi */
    edx = ebp + (-0xC); /* 0x171A5752: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x171A5755: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171A5756: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A5759: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A585A; /* 0x171A575B: je 0x171a585a */
L_171A5761:
    /* cmp MEM32(ebp + (-0xC)), 0x20666F78u */ /* 0x171A5761: cmp dword ptr [ebp - 0xc], 0x20666f78 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0x20666F78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A585A; /* 0x171A5768: jne 0x171a585a */
L_171A576E:
    ecx = MEM32(esi + 0xC); /* 0x171A576E: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x171A5771: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x171A5773: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x171A5776: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171A5777: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A577A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5853; /* 0x171A577C: je 0x171a5853 */
L_171A5782:
    /* cmp MEM32(ebp + (-0x4)), 0x33303330u */ /* 0x171A5782: cmp dword ptr [ebp - 4], 0x33303330 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x33303330u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5798; /* 0x171A5789: je 0x171a5798 */
L_171A578B:
    /* cmp MEM32(ebp + (-0x4)), 0x32303330u */ /* 0x171A578B: cmp dword ptr [ebp - 4], 0x32303330 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x32303330u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5853; /* 0x171A5792: jne 0x171a5853 */
L_171A5798:
    ecx = MEM32(esi + 0xC); /* 0x171A5798: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x171A579B: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x10); /* 0x171A579D: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x171A57A0: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171A57A1: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A57A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A585A; /* 0x171A57A6: je 0x171a585a */
L_171A57AC:
    eax = MEM32(ebp + (-0x10)); /* 0x171A57AC: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A57AF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A57B1: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, 0x20747874u */ /* 0x171A57B2: cmp eax, 0x20747874 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20747874u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A57C0; /* 0x171A57B7: jne 0x171a57c0 */
L_171A57B9:
    MEM32(esi + 0x20) = edi; /* 0x171A57B9: mov dword ptr [esi + 0x20], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A57BC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A57E7; /* 0x171A57BE: jmp 0x171a57e7 */
L_171A57C0:
    /* cmp eax, 0x206E6962u */ /* 0x171A57C0: cmp eax, 0x206e6962 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x206E6962u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A57CE; /* 0x171A57C5: jne 0x171a57ce */
L_171A57C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A57C7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x20) = ebx; /* 0x171A57C9: mov dword ptr [esi + 0x20], ebx */
    goto L_171A57E7; /* 0x171A57CC: jmp 0x171a57e7 */
L_171A57CE:
    /* cmp eax, 0x70697A74u */ /* 0x171A57CE: cmp eax, 0x70697a74 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70697A74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A57DA; /* 0x171A57D3: jne 0x171a57da */
L_171A57D5:
    MEM32(esi + 0x20) = edi; /* 0x171A57D5: mov dword ptr [esi + 0x20], edi */
    goto L_171A57E5; /* 0x171A57D8: jmp 0x171a57e5 */
L_171A57DA:
    /* cmp eax, 0x70697A62u */ /* 0x171A57DA: cmp eax, 0x70697a62 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70697A62u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A585A; /* 0x171A57DF: jne 0x171a585a */
L_171A57E1:
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0; /* 0x171A57E1: and dword ptr [esi + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A57E5:
    ebx = edi; /* 0x171A57E5: mov ebx, edi */
L_171A57E7:
    ecx = MEM32(esi + 0xC); /* 0x171A57E7: mov ecx, dword ptr [esi + 0xc] */
    eax = MEM32(ecx); /* 0x171A57EA: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x8); /* 0x171A57EC: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x171A57EF: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171A57F0: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A57F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A585A; /* 0x171A57F5: je 0x171a585a */
L_171A57F7:
    /* cmp MEM32(ebp + (-0x8)), 0x32333030u */ /* 0x171A57F7: cmp dword ptr [ebp - 8], 0x32333030 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x32333030u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5809; /* 0x171A57FE: jne 0x171a5809 */
L_171A5800:
    MEM32(esi + 0x24) = 4; /* 0x171A5800: mov dword ptr [esi + 0x24], 4 */
    goto L_171A5819; /* 0x171A5807: jmp 0x171a5819 */
L_171A5809:
    /* cmp MEM32(ebp + (-0x8)), 0x34363030u */ /* 0x171A5809: cmp dword ptr [ebp - 8], 0x34363030 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x34363030u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A584C; /* 0x171A5810: jne 0x171a584c */
L_171A5812:
    MEM32(esi + 0x24) = 8; /* 0x171A5812: mov dword ptr [esi + 0x24], 8 */
L_171A5819:
    /* cmp ebx, edi */ /* 0x171A5819: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5848; /* 0x171A581B: jne 0x171a5848 */
L_171A581D:
    eax = ebp + (-0x14); /* 0x171A581D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x171A5820: push eax */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A5821: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_171AA4B2); /* 0x171A5824: call 0x171aa4b2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A5829: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A585F; /* 0x171A582B: jl 0x171a585f */
L_171A582D:
    ecx = MEM32(esi + 0xC); /* 0x171A582D: mov ecx, dword ptr [esi + 0xc] */
    /* test ecx, ecx */ /* 0x171A5830: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5839; /* 0x171A5832: je 0x171a5839 */
L_171A5834:
    eax = MEM32(ecx); /* 0x171A5834: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x171A5836: push edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171A5837: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171A5839:
    eax = MEM32(ebp + (-0x14)); /* 0x171A5839: mov eax, dword ptr [ebp - 0x14] */
    ecx = esi; /* 0x171A583C: mov ecx, esi */
    MEM32(esi + 0xC) = eax; /* 0x171A583E: mov dword ptr [esi + 0xc], eax */
    RECOMP_CALL(sub_171A5740); /* 0x171A5841: call 0x171a5740 */
    RECOMP_FLAGS_IN();
    goto L_171A585F; /* 0x171A5846: jmp 0x171a585f */
L_171A5848:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5848: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A585F; /* 0x171A584A: jmp 0x171a585f */
L_171A584C:
    eax = 0x8876038Eu; /* 0x171A584C: mov eax, 0x8876038e */
    goto L_171A585F; /* 0x171A5851: jmp 0x171a585f */
L_171A5853:
    eax = 0x8876038Du; /* 0x171A5853: mov eax, 0x8876038d */
    goto L_171A585F; /* 0x171A5858: jmp 0x171a585f */
L_171A585A:
    eax = 0x8876038Cu; /* 0x171A585A: mov eax, 0x8876038c */
L_171A585F:
    edi = POP32_VAL(esp); /* 0x171A585F: pop edi */
    esi = POP32_VAL(esp); /* 0x171A5860: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A5861: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A5862: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A5863: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A5869(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5869u);

L_171A5869:
    edi = edi; /* 0x171A5869: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A586B: push ebp */
    ebp = esp; /* 0x171A586C: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171A586E: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171A5872: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A58D7; /* 0x171A5873: je 0x171a58d7 */
L_171A5875:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171A5875: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A58D7; /* 0x171A5879: je 0x171a58d7 */
L_171A587B:
    PUSH32(esp, 0x18u); /* 0x171A587B: push 0x18 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A587D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A5882: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A5884: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A589A; /* 0x171A5885: je 0x171a589a */
L_171A5887:
    PUSH32(esp, 0); /* 0x171A5887: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A5889: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x171A588C: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A588E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171AA6B8); /* 0x171A5891: call 0x171aa6b8 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A5896: mov esi, eax */
    goto L_171A589C; /* 0x171A5898: jmp 0x171a589c */
L_171A589A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A589A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A589C:
    /* test esi, esi */ /* 0x171A589C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A58CC; /* 0x171A589E: je 0x171a58cc */
L_171A58A0:
    PUSH32(esp, 0x30u); /* 0x171A58A0: push 0x30 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A58A2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A58A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A58A9: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A58B9; /* 0x171A58AA: je 0x171a58b9 */
L_171A58AC:
    PUSH32(esp, esi); /* 0x171A58AC: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A58AD: push dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x171A58B0: mov ecx, eax */
    RECOMP_CALL(sub_171A56F8); /* 0x171A58B2: call 0x171a56f8 */
    RECOMP_FLAGS_IN();
    goto L_171A58BB; /* 0x171A58B7: jmp 0x171a58bb */
L_171A58B9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A58B9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A58BB:
    /* test eax, eax */ /* 0x171A58BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14); /* 0x171A58BD: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ecx) = eax; /* 0x171A58C0: mov dword ptr [ecx], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A58D3; /* 0x171A58C2: jne 0x171a58d3 */
L_171A58C4:
    eax = MEM32(esi); /* 0x171A58C4: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171A58C6: push 1 */
    ecx = esi; /* 0x171A58C8: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171A58CA: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171A58CC:
    eax = 0x8007000Eu; /* 0x171A58CC: mov eax, 0x8007000e */
    goto L_171A58DC; /* 0x171A58D1: jmp 0x171a58dc */
L_171A58D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A58D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A58DC; /* 0x171A58D5: jmp 0x171a58dc */
L_171A58D7:
    eax = 0x88760385u; /* 0x171A58D7: mov eax, 0x88760385 */
L_171A58DC:
    esi = POP32_VAL(esp); /* 0x171A58DC: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A58DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A58DE: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171A58E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A58E6u);

L_171A58E6:
    edi = edi; /* 0x171A58E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A58E8: push ebp */
    ebp = esp; /* 0x171A58E9: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171A58EB: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A58EC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A58EF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A58F2: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17001094)); /* 0x171A58F5: call dword ptr [0x17001094] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A58FB: mov ebx, eax */
    /* test ebx, ebx */ /* 0x171A58FD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ebx; /* 0x171A58FF: mov dword ptr [ebp + 0x10], ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A590E; /* 0x171A5902: jne 0x171a590e */
L_171A5904:
    eax = 0x8876038Au; /* 0x171A5904: mov eax, 0x8876038a */
    goto L_171A59B7; /* 0x171A5909: jmp 0x171a59b7 */
L_171A590E:
    PUSH32(esp, esi); /* 0x171A590E: push esi */
    PUSH32(esp, ebx); /* 0x171A590F: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A5910: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17001098)); /* 0x171A5913: call dword ptr [0x17001098] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A5919: mov esi, eax */
    /* test esi, esi */ /* 0x171A591B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A5929; /* 0x171A591D: jne 0x171a5929 */
L_171A591F:
    eax = 0x8876038Bu; /* 0x171A591F: mov eax, 0x8876038b */
    goto L_171A59B6; /* 0x171A5924: jmp 0x171a59b6 */
L_171A5929:
    PUSH32(esp, edi); /* 0x171A5929: push edi */
    PUSH32(esp, esi); /* 0x171A592A: push esi */
    RECOMP_ICALL(MEM32(0x1700109C)); /* 0x171A592B: call dword ptr [0x1700109c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x171A5931: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A5932: push dword ptr [ebp + 8] */
    edi = eax; /* 0x171A5935: mov edi, eax */
    RECOMP_ICALL(MEM32(0x170010A0)); /* 0x171A5937: call dword ptr [0x170010a0] */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x171A593D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x171A593F: mov ebx, eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A59A5; /* 0x171A5941: je 0x171a59a5 */
L_171A5943:
    /* test ebx, ebx */ /* 0x171A5943: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A59A5; /* 0x171A5945: je 0x171a59a5 */
L_171A5947:
    PUSH32(esp, 0x1Cu); /* 0x171A5947: push 0x1c */
    RECOMP_CALL(sub_1721B01C); /* 0x171A5949: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A594E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A5950: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5961; /* 0x171A5951: je 0x171a5961 */
L_171A5953:
    PUSH32(esp, ebx); /* 0x171A5953: push ebx */
    PUSH32(esp, edi); /* 0x171A5954: push edi */
    PUSH32(esp, esi); /* 0x171A5955: push esi */
    ecx = eax; /* 0x171A5956: mov ecx, eax */
    RECOMP_CALL(sub_171AA71A); /* 0x171A5958: call 0x171aa71a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A595D: mov esi, eax */
    goto L_171A5963; /* 0x171A595F: jmp 0x171a5963 */
L_171A5961:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A5961: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A5963:
    /* test esi, esi */ /* 0x171A5963: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A596E; /* 0x171A5965: jne 0x171a596e */
L_171A5967:
    esi = 0x8007000Eu; /* 0x171A5967: mov esi, 0x8007000e */
    goto L_171A59AA; /* 0x171A596C: jmp 0x171a59aa */
L_171A596E:
    PUSH32(esp, 0x30u); /* 0x171A596E: push 0x30 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A5970: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A5975: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A5977: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5987; /* 0x171A5978: je 0x171a5987 */
L_171A597A:
    PUSH32(esp, esi); /* 0x171A597A: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171A597B: push dword ptr [ebp + 0x14] */
    ecx = eax; /* 0x171A597E: mov ecx, eax */
    RECOMP_CALL(sub_171A56F8); /* 0x171A5980: call 0x171a56f8 */
    RECOMP_FLAGS_IN();
    goto L_171A5989; /* 0x171A5985: jmp 0x171a5989 */
L_171A5987:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5987: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A5989:
    /* test eax, eax */ /* 0x171A5989: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x18); /* 0x171A598B: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(ecx) = eax; /* 0x171A598E: mov dword ptr [ecx], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A59A1; /* 0x171A5990: jne 0x171a59a1 */
L_171A5992:
    eax = MEM32(esi); /* 0x171A5992: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171A5994: push 1 */
    ecx = esi; /* 0x171A5996: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171A5998: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = 0x8007000Eu; /* 0x171A599A: mov eax, 0x8007000e */
    goto L_171A59B5; /* 0x171A599F: jmp 0x171a59b5 */
L_171A59A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A59A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A59B5; /* 0x171A59A3: jmp 0x171a59b5 */
L_171A59A5:
    esi = 0x8876038Bu; /* 0x171A59A5: mov esi, 0x8876038b */
L_171A59AA:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A59AA: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(0x170010A4)); /* 0x171A59AD: call dword ptr [0x170010a4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A59B3: mov eax, esi */
L_171A59B5:
    edi = POP32_VAL(esp); /* 0x171A59B5: pop edi */
L_171A59B6:
    esi = POP32_VAL(esp); /* 0x171A59B6: pop esi */
L_171A59B7:
    ebx = POP32_VAL(esp); /* 0x171A59B7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A59B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171A59B9: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171A59C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A59C1u);

L_171A59C1:
    edi = edi; /* 0x171A59C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A59C3: push ebp */
    ebp = esp; /* 0x171A59C4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A59C6: push ecx */
    PUSH32(esp, ebx); /* 0x171A59C7: push ebx */
    PUSH32(esp, esi); /* 0x171A59C8: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A59C9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171A59CB: push esi */
    PUSH32(esp, esi); /* 0x171A59CC: push esi */
    PUSH32(esp, 3); /* 0x171A59CD: push 3 */
    PUSH32(esp, esi); /* 0x171A59CF: push esi */
    PUSH32(esp, 1); /* 0x171A59D0: push 1 */
    PUSH32(esp, 0x80000000u); /* 0x171A59D2: push 0x80000000 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A59D7: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010F0)); /* 0x171A59DA: call dword ptr [0x170010f0] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A59E0: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x171A59E2: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171A59E5: mov dword ptr [ebp - 4], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A59F4; /* 0x171A59E8: jne 0x171a59f4 */
L_171A59EA:
    eax = 0x88760389u; /* 0x171A59EA: mov eax, 0x88760389 */
    goto L_171A5AB6; /* 0x171A59EF: jmp 0x171a5ab6 */
L_171A59F4:
    PUSH32(esp, edi); /* 0x171A59F4: push edi */
    PUSH32(esp, esi); /* 0x171A59F5: push esi */
    PUSH32(esp, ebx); /* 0x171A59F6: push ebx */
    RECOMP_ICALL(MEM32(0x17001084)); /* 0x171A59F7: call dword ptr [0x17001084] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A59FD: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x171A59FF: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5A0B; /* 0x171A5A02: jne 0x171a5a0b */
L_171A5A04:
    esi = 0x8876038Fu; /* 0x171A5A04: mov esi, 0x8876038f */
    goto L_171A5A73; /* 0x171A5A09: jmp 0x171a5a73 */
L_171A5A0B:
    PUSH32(esp, esi); /* 0x171A5A0B: push esi */
    PUSH32(esp, esi); /* 0x171A5A0C: push esi */
    PUSH32(esp, esi); /* 0x171A5A0D: push esi */
    PUSH32(esp, 2); /* 0x171A5A0E: push 2 */
    PUSH32(esp, esi); /* 0x171A5A10: push esi */
    PUSH32(esp, ebx); /* 0x171A5A11: push ebx */
    RECOMP_ICALL(MEM32(0x17001088)); /* 0x171A5A12: call dword ptr [0x17001088] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A5A18: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x171A5A1A: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5A04; /* 0x171A5A1D: je 0x171a5a04 */
L_171A5A1F:
    PUSH32(esp, esi); /* 0x171A5A1F: push esi */
    PUSH32(esp, esi); /* 0x171A5A20: push esi */
    PUSH32(esp, esi); /* 0x171A5A21: push esi */
    PUSH32(esp, 4); /* 0x171A5A22: push 4 */
    PUSH32(esp, ebx); /* 0x171A5A24: push ebx */
    RECOMP_ICALL(MEM32(0x1700108C)); /* 0x171A5A25: call dword ptr [0x1700108c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x171A5A2B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x171A5A2D: mov dword ptr [ebp + 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5A39; /* 0x171A5A30: jne 0x171a5a39 */
L_171A5A32:
    esi = 0x8876038Fu; /* 0x171A5A32: mov esi, 0x8876038f */
    goto L_171A5A6C; /* 0x171A5A37: jmp 0x171a5a6c */
L_171A5A39:
    PUSH32(esp, 0x24u); /* 0x171A5A39: push 0x24 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A5A3B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x171A5A40: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A5A42: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5A58; /* 0x171A5A43: je 0x171a5a58 */
L_171A5A45:
    PUSH32(esp, edi); /* 0x171A5A45: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A5A46: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x171A5A49: mov ecx, eax */
    PUSH32(esp, ebx); /* 0x171A5A4B: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171A5A4C: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_171AA768); /* 0x171A5A4F: call 0x171aa768 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A5A54: mov edi, eax */
    goto L_171A5A5A; /* 0x171A5A56: jmp 0x171a5a5a */
L_171A5A58:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A5A58: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A5A5A:
    /* cmp edi, esi */ /* 0x171A5A5A: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5A80; /* 0x171A5A5C: jne 0x171a5a80 */
L_171A5A5E:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A5A5E: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17001090)); /* 0x171A5A61: call dword ptr [0x17001090] */
    RECOMP_FLAGS_IN();
    esi = 0x8007000Eu; /* 0x171A5A67: mov esi, 0x8007000e */
L_171A5A6C:
    PUSH32(esp, ebx); /* 0x171A5A6C: push ebx */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A5A6D: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
L_171A5A73:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171A5A73: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A5A76: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A5A7C: mov eax, esi */
    goto L_171A5AB5; /* 0x171A5A7E: jmp 0x171a5ab5 */
L_171A5A80:
    PUSH32(esp, 0x30u); /* 0x171A5A80: push 0x30 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A5A82: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x171A5A87: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A5A89: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5A99; /* 0x171A5A8A: je 0x171a5a99 */
L_171A5A8C:
    PUSH32(esp, edi); /* 0x171A5A8C: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A5A8D: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x171A5A90: mov ecx, eax */
    RECOMP_CALL(sub_171A56F8); /* 0x171A5A92: call 0x171a56f8 */
    RECOMP_FLAGS_IN();
    goto L_171A5A9B; /* 0x171A5A97: jmp 0x171a5a9b */
L_171A5A99:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5A99: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A5A9B:
    /* cmp eax, esi */ /* 0x171A5A9B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x171A5A9D: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x171A5AA0: mov dword ptr [ecx], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5AB3; /* 0x171A5AA2: jne 0x171a5ab3 */
L_171A5AA4:
    eax = MEM32(edi); /* 0x171A5AA4: mov eax, dword ptr [edi] */
    PUSH32(esp, 1); /* 0x171A5AA6: push 1 */
    ecx = edi; /* 0x171A5AA8: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171A5AAA: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = 0x8007000Eu; /* 0x171A5AAC: mov eax, 0x8007000e */
    goto L_171A5AB5; /* 0x171A5AB1: jmp 0x171a5ab5 */
L_171A5AB3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5AB3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A5AB5:
    edi = POP32_VAL(esp); /* 0x171A5AB5: pop edi */
L_171A5AB6:
    esi = POP32_VAL(esp); /* 0x171A5AB6: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A5AB7: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A5AB8: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A5AB9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A5AC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5AC1u);

L_171A5AC1:
    edi = edi; /* 0x171A5AC1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5AC3: push ebp */
    ebp = esp; /* 0x171A5AC4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x118u; /* 0x171A5AC6: sub esp, 0x118 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171A5ACC: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171A5AD1: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x171A5AD2: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x171A5AD5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171A5AD6: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171A5AD9: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171A5ADA: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A5ADD: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x114)) = esi; /* 0x171A5AE0: mov dword ptr [ebp - 0x114], esi */
    MEM32(ebp + (-0x118)) = ebx; /* 0x171A5AE6: mov dword ptr [ebp - 0x118], ebx */
    RECOMP_CALL(sub_1702B1FB); /* 0x171A5AEC: call 0x1702b1fb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A5AF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A5B21; /* 0x171A5AF3: jne 0x171a5b21 */
L_171A5AF5:
    PUSH32(esp, 0x104u); /* 0x171A5AF5: push 0x104 */
    eax = ebp + (-0x108); /* 0x171A5AFA: lea eax, [ebp - 0x108] */
    PUSH32(esp, edi); /* 0x171A5B00: push edi */
    PUSH32(esp, eax); /* 0x171A5B01: push eax */
    RECOMP_CALL(sub_1721B550); /* 0x171A5B02: call 0x1721b550 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171A5B07: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x171A5B0A: push ebx */
    PUSH32(esp, esi); /* 0x171A5B0B: push esi */
    eax = ebp + (-0x108); /* 0x171A5B0C: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171A5B12: push eax */
    MEM8(ebp + (-0x5)) = (uint8_t)(0); /* 0x171A5B13: mov byte ptr [ebp - 5], 0 */
    RECOMP_CALL(sub_171A59C1); /* 0x171A5B17: call 0x171a59c1 */
    RECOMP_FLAGS_IN();
    goto L_171A5C20; /* 0x171A5B1C: jmp 0x171a5c20 */
L_171A5B21:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A5B21: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171A5B23: push esi */
    PUSH32(esp, esi); /* 0x171A5B24: push esi */
    PUSH32(esp, 3); /* 0x171A5B25: push 3 */
    PUSH32(esp, esi); /* 0x171A5B27: push esi */
    PUSH32(esp, 1); /* 0x171A5B28: push 1 */
    PUSH32(esp, 0x80000000u); /* 0x171A5B2A: push 0x80000000 */
    PUSH32(esp, edi); /* 0x171A5B2F: push edi */
    RECOMP_ICALL(MEM32(0x170010AC)); /* 0x171A5B30: call dword ptr [0x170010ac] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A5B36: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x171A5B38: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5B47; /* 0x171A5B3B: jne 0x171a5b47 */
L_171A5B3D:
    eax = 0x88760389u; /* 0x171A5B3D: mov eax, 0x88760389 */
    goto L_171A5C20; /* 0x171A5B42: jmp 0x171a5c20 */
L_171A5B47:
    PUSH32(esp, esi); /* 0x171A5B47: push esi */
    PUSH32(esp, ebx); /* 0x171A5B48: push ebx */
    RECOMP_ICALL(MEM32(0x17001084)); /* 0x171A5B49: call dword ptr [0x17001084] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A5B4F: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x171A5B51: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5B5D; /* 0x171A5B54: jne 0x171a5b5d */
L_171A5B56:
    esi = 0x8876038Fu; /* 0x171A5B56: mov esi, 0x8876038f */
    goto L_171A5BDA; /* 0x171A5B5B: jmp 0x171a5bda */
L_171A5B5D:
    PUSH32(esp, esi); /* 0x171A5B5D: push esi */
    PUSH32(esp, esi); /* 0x171A5B5E: push esi */
    PUSH32(esp, esi); /* 0x171A5B5F: push esi */
    PUSH32(esp, 2); /* 0x171A5B60: push 2 */
    PUSH32(esp, esi); /* 0x171A5B62: push esi */
    PUSH32(esp, ebx); /* 0x171A5B63: push ebx */
    RECOMP_ICALL(MEM32(0x17001088)); /* 0x171A5B64: call dword ptr [0x17001088] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A5B6A: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10C)) = eax; /* 0x171A5B6D: mov dword ptr [ebp - 0x10c], eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5B56; /* 0x171A5B73: je 0x171a5b56 */
L_171A5B75:
    PUSH32(esp, esi); /* 0x171A5B75: push esi */
    PUSH32(esp, esi); /* 0x171A5B76: push esi */
    PUSH32(esp, esi); /* 0x171A5B77: push esi */
    PUSH32(esp, 4); /* 0x171A5B78: push 4 */
    PUSH32(esp, eax); /* 0x171A5B7A: push eax */
    RECOMP_ICALL(MEM32(0x1700108C)); /* 0x171A5B7B: call dword ptr [0x1700108c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x171A5B81: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x110)) = eax; /* 0x171A5B83: mov dword ptr [ebp - 0x110], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5B92; /* 0x171A5B89: jne 0x171a5b92 */
L_171A5B8B:
    esi = 0x8876038Fu; /* 0x171A5B8B: mov esi, 0x8876038f */
    goto L_171A5BCE; /* 0x171A5B90: jmp 0x171a5bce */
L_171A5B92:
    PUSH32(esp, 0x24u); /* 0x171A5B92: push 0x24 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A5B94: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x171A5B99: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A5B9B: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5BB7; /* 0x171A5B9C: je 0x171a5bb7 */
L_171A5B9E:
    PUSH32(esp, edi); /* 0x171A5B9E: push edi */
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x171A5B9F: push dword ptr [ebp - 0x110] */
    ecx = eax; /* 0x171A5BA5: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x171A5BA7: push dword ptr [ebp - 0x10c] */
    PUSH32(esp, ebx); /* 0x171A5BAD: push ebx */
    RECOMP_CALL(sub_171AA768); /* 0x171A5BAE: call 0x171aa768 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A5BB3: mov edi, eax */
    goto L_171A5BB9; /* 0x171A5BB5: jmp 0x171a5bb9 */
L_171A5BB7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A5BB7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A5BB9:
    /* cmp edi, esi */ /* 0x171A5BB9: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5BE5; /* 0x171A5BBB: jne 0x171a5be5 */
L_171A5BBD:
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x171A5BBD: push dword ptr [ebp - 0x110] */
    RECOMP_ICALL(MEM32(0x17001090)); /* 0x171A5BC3: call dword ptr [0x17001090] */
    RECOMP_FLAGS_IN();
    esi = 0x8007000Eu; /* 0x171A5BC9: mov esi, 0x8007000e */
L_171A5BCE:
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x171A5BCE: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A5BD4: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
L_171A5BDA:
    PUSH32(esp, ebx); /* 0x171A5BDA: push ebx */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A5BDB: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A5BE1: mov eax, esi */
    goto L_171A5C20; /* 0x171A5BE3: jmp 0x171a5c20 */
L_171A5BE5:
    PUSH32(esp, 0x30u); /* 0x171A5BE5: push 0x30 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A5BE7: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x171A5BEC: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A5BEE: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5C01; /* 0x171A5BEF: je 0x171a5c01 */
L_171A5BF1:
    PUSH32(esp, edi); /* 0x171A5BF1: push edi */
    PUSH32(esp, MEM32(ebp + (-0x114))); /* 0x171A5BF2: push dword ptr [ebp - 0x114] */
    ecx = eax; /* 0x171A5BF8: mov ecx, eax */
    RECOMP_CALL(sub_171A56F8); /* 0x171A5BFA: call 0x171a56f8 */
    RECOMP_FLAGS_IN();
    goto L_171A5C03; /* 0x171A5BFF: jmp 0x171a5c03 */
L_171A5C01:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5C01: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A5C03:
    /* cmp eax, esi */ /* 0x171A5C03: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x118)); /* 0x171A5C05: mov ecx, dword ptr [ebp - 0x118] */
    MEM32(ecx) = eax; /* 0x171A5C0B: mov dword ptr [ecx], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5C1E; /* 0x171A5C0D: jne 0x171a5c1e */
L_171A5C0F:
    eax = MEM32(edi); /* 0x171A5C0F: mov eax, dword ptr [edi] */
    PUSH32(esp, 1); /* 0x171A5C11: push 1 */
    ecx = edi; /* 0x171A5C13: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171A5C15: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = 0x8007000Eu; /* 0x171A5C17: mov eax, 0x8007000e */
    goto L_171A5C20; /* 0x171A5C1C: jmp 0x171a5c20 */
L_171A5C1E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5C1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A5C20:
    ecx = MEM32(ebp + (-0x4)); /* 0x171A5C20: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171A5C23: pop edi */
    esi = POP32_VAL(esp); /* 0x171A5C24: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A5C25: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171A5C26: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A5C2B: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A5C2C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A5C34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5C34u);

L_171A5C34:
    edi = edi; /* 0x171A5C34: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5C36: push ebp */
    ebp = esp; /* 0x171A5C37: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A5C39: push esi */
    PUSH32(esp, edi); /* 0x171A5C3A: push edi */
    esi = ecx; /* 0x171A5C3B: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A5C3D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x10), edi */ /* 0x171A5C3F: cmp dword ptr [esi + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A5C5C; /* 0x171A5C42: jbe 0x171a5c5c */
L_171A5C44:
    eax = MEM32(esi + 0x1C); /* 0x171A5C44: mov eax, dword ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x171A5C47: push dword ptr [eax + edi*4] */
    ecx = MEM32(ebp + 0x8); /* 0x171A5C4A: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A96E9); /* 0x171A5C4D: call 0x171a96e9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A5C52: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5C64; /* 0x171A5C54: je 0x171a5c64 */
L_171A5C56:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A5C56: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x10) */ /* 0x171A5C57: cmp edi, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A5C44; /* 0x171A5C5A: jb 0x171a5c44 */
L_171A5C5C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5C5C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A5C5E:
    edi = POP32_VAL(esp); /* 0x171A5C5E: pop edi */
    esi = POP32_VAL(esp); /* 0x171A5C5F: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A5C60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A5C61: ret 4 */
L_171A5C64:
    eax = 0x8007000Eu; /* 0x171A5C64: mov eax, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_171A5C5E; /* 0x171A5C69: jmp 0x171a5c5e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A5C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5C70u);

L_171A5C70:
    edi = edi; /* 0x171A5C70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5C72: push ebp */
    ebp = esp; /* 0x171A5C73: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171A5C75: push ebx */
    PUSH32(esp, esi); /* 0x171A5C76: push esi */
    PUSH32(esp, edi); /* 0x171A5C77: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171A5C78: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A5C7B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ecx; /* 0x171A5C7D: mov ebx, ecx */
    MEM32(edi) = esi; /* 0x171A5C7F: mov dword ptr [edi], esi */
    eax = MEM32(ebx + 0x2C); /* 0x171A5C81: mov eax, dword ptr [ebx + 0x2c] */
    /* cmp eax, esi */ /* 0x171A5C84: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5CAB; /* 0x171A5C86: je 0x171a5cab */
L_171A5C88:
    /* cmp MEM32(eax), esi */ /* 0x171A5C88: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A5CAB; /* 0x171A5C8A: jbe 0x171a5cab */
L_171A5C8C:
    eax = MEM32(eax + 0xC); /* 0x171A5C8C: mov eax, dword ptr [eax + 0xc] */
    eax = MEM32(eax + esi * 4); /* 0x171A5C8F: mov eax, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A5C92: push dword ptr [ebp + 8] */
    ecx = eax + 0x4; /* 0x171A5C95: lea ecx, [eax + 4] */
    eax = MEM32(ecx); /* 0x171A5C98: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x171A5C9A: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A5C9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x171A5C9F: mov dword ptr [edi], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A5CB7; /* 0x171A5CA1: jne 0x171a5cb7 */
L_171A5CA3:
    eax = MEM32(ebx + 0x2C); /* 0x171A5CA3: mov eax, dword ptr [ebx + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171A5CA6: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(eax) */ /* 0x171A5CA7: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A5C8C; /* 0x171A5CA9: jb 0x171a5c8c */
L_171A5CAB:
    eax = 0x88760387u; /* 0x171A5CAB: mov eax, 0x88760387 */
L_171A5CB0:
    edi = POP32_VAL(esp); /* 0x171A5CB0: pop edi */
    esi = POP32_VAL(esp); /* 0x171A5CB1: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A5CB2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A5CB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A5CB4: ret 8 */
L_171A5CB7:
    ecx = MEM32(eax); /* 0x171A5CB7: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171A5CB9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171A5CBA: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5CBD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171A5CB0; /* 0x171A5CBF: jmp 0x171a5cb0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A5CC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5CC6u);

L_171A5CC6:
    edi = edi; /* 0x171A5CC6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5CC8: push ebp */
    ebp = esp; /* 0x171A5CC9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171A5CCB: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171A5CCE: push ebx */
    PUSH32(esp, esi); /* 0x171A5CCF: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A5CD0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x171A5CD2: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171A5CD4: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171A5CD5: mov edi, dword ptr [ebp + 0xc] */
    ebx = ecx; /* 0x171A5CD8: mov ebx, ecx */
    MEM32(edi) = esi; /* 0x171A5CDA: mov dword ptr [edi], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5D1E; /* 0x171A5CDC: je 0x171a5d1e */
L_171A5CDE:
    /* cmp MEM8(eax), 0 */ /* 0x171A5CDE: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5D1E; /* 0x171A5CE1: je 0x171a5d1e */
L_171A5CE3:
    eax = MEM32(ebx + 0x2C); /* 0x171A5CE3: mov eax, dword ptr [ebx + 0x2c] */
    /* cmp eax, esi */ /* 0x171A5CE6: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5D0D; /* 0x171A5CE8: je 0x171a5d0d */
L_171A5CEA:
    /* cmp MEM32(eax), esi */ /* 0x171A5CEA: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A5D0D; /* 0x171A5CEC: jbe 0x171a5d0d */
L_171A5CEE:
    eax = MEM32(eax + 0xC); /* 0x171A5CEE: mov eax, dword ptr [eax + 0xc] */
    eax = MEM32(eax + esi * 4); /* 0x171A5CF1: mov eax, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A5CF4: push dword ptr [ebp + 8] */
    ecx = eax + 0x4; /* 0x171A5CF7: lea ecx, [eax + 4] */
    eax = MEM32(ecx); /* 0x171A5CFA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x171A5CFC: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A5CFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x171A5D01: mov dword ptr [edi], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A5D14; /* 0x171A5D03: jne 0x171a5d14 */
L_171A5D05:
    eax = MEM32(ebx + 0x2C); /* 0x171A5D05: mov eax, dword ptr [ebx + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171A5D08: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(eax) */ /* 0x171A5D09: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A5CEE; /* 0x171A5D0B: jb 0x171a5cee */
L_171A5D0D:
    eax = 0x88760387u; /* 0x171A5D0D: mov eax, 0x88760387 */
    goto L_171A5D23; /* 0x171A5D12: jmp 0x171a5d23 */
L_171A5D14:
    ecx = MEM32(eax); /* 0x171A5D14: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171A5D16: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171A5D17: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5D1A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A5D23; /* 0x171A5D1C: jmp 0x171a5d23 */
L_171A5D1E:
    eax = 0x88760385u; /* 0x171A5D1E: mov eax, 0x88760385 */
L_171A5D23:
    edi = POP32_VAL(esp); /* 0x171A5D23: pop edi */
    esi = POP32_VAL(esp); /* 0x171A5D24: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A5D25: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A5D26: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A5D27: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171A5D2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5D2Fu);

L_171A5D2F:
    edi = edi; /* 0x171A5D2F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5D31: push ebp */
    ebp = esp; /* 0x171A5D32: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A5D34: push esi */
    PUSH32(esp, 3); /* 0x171A5D35: push 3 */
    esi = ecx; /* 0x171A5D37: mov esi, ecx */
    RECOMP_CALL(sub_171A53AD); /* 0x171A5D39: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A5D3E: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x171A5D41: mov ecx, esi */
    RECOMP_CALL(sub_171A911A); /* 0x171A5D43: call 0x171a911a */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171A5D48: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A5D49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A5D4A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A5D52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5D52u);

L_171A5D52:
    edi = edi; /* 0x171A5D52: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5D54: push ebp */
    ebp = esp; /* 0x171A5D55: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171A5D57: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171A5D5B: push edi */
    edi = ecx; /* 0x171A5D5C: mov edi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5D8F; /* 0x171A5D5E: je 0x171a5d8f */
L_171A5D60:
    eax = MEM32(ebp + 0x8); /* 0x171A5D60: mov eax, dword ptr [ebp + 8] */
    edx = eax + 0x1; /* 0x171A5D63: lea edx, [eax + 1] */
L_171A5D66:
    SET_LO8(ecx, MEM8(eax)); /* 0x171A5D66: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A5D68: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171A5D69: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A5D66; /* 0x171A5D6B: jne 0x171a5d66 */
L_171A5D6D:
    PUSH32(esp, esi); /* 0x171A5D6D: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171A5D6E: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x171A5D70: push 1 */
    ecx = edi; /* 0x171A5D72: mov ecx, edi */
    esi = eax; /* 0x171A5D74: mov esi, eax */
    RECOMP_CALL(sub_171A53AD); /* 0x171A5D76: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171A5D7B: push esi */
    ecx = edi; /* 0x171A5D7C: mov ecx, edi */
    RECOMP_CALL(sub_171A911A); /* 0x171A5D7E: call 0x171a911a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A5D83: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x171A5D86: mov ecx, edi */
    PUSH32(esp, esi); /* 0x171A5D88: push esi */
    RECOMP_CALL(sub_171A538A); /* 0x171A5D89: call 0x171a538a */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171A5D8E: pop esi */
L_171A5D8F:
    edi = POP32_VAL(esp); /* 0x171A5D8F: pop edi */
    ebp = POP32_VAL(esp); /* 0x171A5D90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A5D91: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A5D99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5D99u);

L_171A5D99:
    edi = edi; /* 0x171A5D99: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5D9B: push ebp */
    ebp = esp; /* 0x171A5D9C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A5D9E: push esi */
    PUSH32(esp, edi); /* 0x171A5D9F: push edi */
    PUSH32(esp, 5); /* 0x171A5DA0: push 5 */
    edi = ecx; /* 0x171A5DA2: mov edi, ecx */
    RECOMP_CALL(sub_171A53AD); /* 0x171A5DA4: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x171A5DA9: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi)); /* 0x171A5DAC: push dword ptr [esi] */
    ecx = edi; /* 0x171A5DAE: mov ecx, edi */
    RECOMP_CALL(sub_171A911A); /* 0x171A5DB0: call 0x171a911a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x171A5DB5: movzx eax, word ptr [esi + 4] */
    PUSH32(esp, eax); /* 0x171A5DB9: push eax */
    ecx = edi; /* 0x171A5DBA: mov ecx, edi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A5DBC: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x171A5DC1: movzx eax, word ptr [esi + 6] */
    PUSH32(esp, eax); /* 0x171A5DC5: push eax */
    ecx = edi; /* 0x171A5DC6: mov ecx, edi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A5DC8: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x171A5DCD: add esi, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x171A5DD0: push esi */
    PUSH32(esp, 8); /* 0x171A5DD1: push 8 */
    ecx = edi; /* 0x171A5DD3: mov ecx, edi */
    RECOMP_CALL(sub_171A538A); /* 0x171A5DD5: call 0x171a538a */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171A5DDA: pop edi */
    esi = POP32_VAL(esp); /* 0x171A5DDB: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A5DDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A5DDD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A5DE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5DE5u);

L_171A5DE5:
    edi = edi; /* 0x171A5DE5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5DE7: push ebp */
    ebp = esp; /* 0x171A5DE8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x408u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x408u; /* 0x171A5DEA: sub esp, 0x408 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171A5DF0: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A5DF5: mov dword ptr [ebp - 4], eax */
    eax = ebp + 0x10; /* 0x171A5DF8: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x171A5DFB: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A5DFC: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x404); /* 0x171A5DFF: lea eax, [ebp - 0x404] */
    PUSH32(esp, 0x400u); /* 0x171A5E05: push 0x400 */
    PUSH32(esp, eax); /* 0x171A5E0A: push eax */
    RECOMP_CALL(sub_1704BE39); /* 0x171A5E0B: call 0x1704be39 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x404); /* 0x171A5E10: lea eax, [ebp - 0x404] */
    edx = eax + 0x1; /* 0x171A5E16: lea edx, [eax + 1] */
L_171A5E19:
    SET_LO8(ecx, MEM8(eax)); /* 0x171A5E19: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A5E1B: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171A5E1C: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A5E19; /* 0x171A5E1E: jne 0x171a5e19 */
L_171A5E20:
    ecx = ebp + (-0x408); /* 0x171A5E20: lea ecx, [ebp - 0x408] */
    PUSH32(esp, ecx); /* 0x171A5E26: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171A5E27: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171A5E2A: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x171A5E2C: push eax */
    eax = ebp + (-0x404); /* 0x171A5E2D: lea eax, [ebp - 0x404] */
    PUSH32(esp, eax); /* 0x171A5E33: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x171A5E34: add ecx, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171A8D23); /* 0x171A5E37: call 0x171a8d23 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x171A5E3C: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x408)); /* 0x171A5E3F: mov eax, dword ptr [ebp - 0x408] */
    RECOMP_CALL(sub_1721B76C); /* 0x171A5E45: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A5E4A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A5E4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A5E51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5E51u);

L_171A5E51:
    edi = edi; /* 0x171A5E51: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5E53: push ebp */
    ebp = esp; /* 0x171A5E54: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171A5E56: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x171A5E59: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171A5E5D: push ebx */
    edx = ecx; /* 0x171A5E5E: mov edx, ecx */
    /* cmp MEM32(edx + 0xC), 0 */ /* 0x171A5E60: cmp dword ptr [edx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171A5E64: push esi */
    PUSH32(esp, edi); /* 0x171A5E65: push edi */
    MEM32(ebp + (-0xC)) = edx; /* 0x171A5E66: mov dword ptr [ebp - 0xc], edx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A5E94; /* 0x171A5E69: jbe 0x171a5e94 */
L_171A5E6B:
    eax = MEM32(edx + 0x18); /* 0x171A5E6B: mov eax, dword ptr [edx + 0x18] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A5E6E: mov dword ptr [ebp - 4], eax */
L_171A5E71:
    eax = MEM32(ebp + (-0x4)); /* 0x171A5E71: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax); /* 0x171A5E74: mov eax, dword ptr [eax] */
    esi = MEM32(ebp + 0x8); /* 0x171A5E76: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x171A5E79: push 4 */
    ecx = POP32_VAL(esp); /* 0x171A5E7B: pop ecx */
    edi = eax + 0x8; /* 0x171A5E7C: lea edi, [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A5E7F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171A5E81: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171A5EE1; /* 0x171A5E83: je 0x171a5ee1 */
L_171A5E85:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x171A5E85: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x171A5E88: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x171A5E8B: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edx + 0xC) */ /* 0x171A5E8F: cmp eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A5E71; /* 0x171A5E92: jb 0x171a5e71 */
L_171A5E94:
    ebx = MEM32(edx + 0x8); /* 0x171A5E94: mov ebx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171A5E97: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x171A5E9B: add ebx, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx), 0 */ /* 0x171A5E9E: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A5ED5; /* 0x171A5EA1: jbe 0x171a5ed5 */
L_171A5EA3:
    ecx = MEM32(ebp + (-0x4)); /* 0x171A5EA3: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebx + 0xC); /* 0x171A5EA6: mov eax, dword ptr [ebx + 0xc] */
    eax = MEM32(eax + ecx * 4); /* 0x171A5EA9: mov eax, dword ptr [eax + ecx*4] */
    esi = MEM32(ebp + 0x8); /* 0x171A5EAC: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x171A5EAF: push 4 */
    ecx = POP32_VAL(esp); /* 0x171A5EB1: pop ecx */
    edi = eax + 0x8; /* 0x171A5EB2: lea edi, [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171A5EB5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171A5EB7: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171A5EB9: mov dword ptr [ebp - 8], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171A5ECB; /* 0x171A5EBC: jne 0x171a5ecb */
L_171A5EBE:
    ecx = MEM32(ebp + (-0xC)); /* 0x171A5EBE: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x171A5EC1: push eax */
    RECOMP_CALL(sub_171A6903); /* 0x171A5EC2: call 0x171a6903 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A5EC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171A5EE8; /* 0x171A5EC9: jge 0x171a5ee8 */
L_171A5ECB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171A5ECB: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x171A5ECE: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebx) */ /* 0x171A5ED1: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A5EA3; /* 0x171A5ED3: jb 0x171a5ea3 */
L_171A5ED5:
    eax = 0x88760386u; /* 0x171A5ED5: mov eax, 0x88760386 */
L_171A5EDA:
    edi = POP32_VAL(esp); /* 0x171A5EDA: pop edi */
    esi = POP32_VAL(esp); /* 0x171A5EDB: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A5EDC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A5EDD: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A5EDE: ret 8 */
L_171A5EE1:
    ecx = MEM32(ebp + 0xC); /* 0x171A5EE1: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x171A5EE4: mov dword ptr [ecx], eax */
    goto L_171A5EF0; /* 0x171A5EE6: jmp 0x171a5ef0 */
L_171A5EE8:
    eax = MEM32(ebp + 0xC); /* 0x171A5EE8: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x8)); /* 0x171A5EEB: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = ecx; /* 0x171A5EEE: mov dword ptr [eax], ecx */
L_171A5EF0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5EF0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171A5EDA; /* 0x171A5EF2: jmp 0x171a5eda */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A5EF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5EF9u);

L_171A5EF9:
    edi = edi; /* 0x171A5EF9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5EFB: push ebp */
    ebp = esp; /* 0x171A5EFC: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A5EFE: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x171A5F02: push esi */
    esi = ecx; /* 0x171A5F03: mov esi, ecx */
    MEM32(esi) = 0x170237F8u; /* 0x171A5F05: mov dword ptr [esi], 0x170237f8 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5F14; /* 0x171A5F0B: je 0x171a5f14 */
L_171A5F0D:
    PUSH32(esp, esi); /* 0x171A5F0D: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A5F0E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A5F13: pop ecx */
L_171A5F14:
    eax = esi; /* 0x171A5F14: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A5F16: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A5F17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A5F18: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A5F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A5F20u);

L_171A5F20:
    edi = edi; /* 0x171A5F20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A5F22: push ebp */
    ebp = esp; /* 0x171A5F23: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x171A5F25: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171A5F28: mov eax, dword ptr [0x1723c894] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x171A5F2D: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ecx; /* 0x171A5F31: mov dword ptr [ebp - 0x18], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171A5F34: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x171A5F37: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171A5F38: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x28)) = ecx; /* 0x171A5F3B: mov dword ptr [ebp - 0x28], ecx */
    ecx = ebp + (-0x1C); /* 0x171A5F3E: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A5F41: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x171A5F44: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x171A5F47: push ecx */
    PUSH32(esp, eax); /* 0x171A5F48: push eax */
    PUSH32(esp, ebx); /* 0x171A5F49: push ebx */
    MEM32(ebp + (-0x24)) = eax; /* 0x171A5F4A: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_171A542F); /* 0x171A5F4D: call 0x171a542f */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A5F52: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5FEE; /* 0x171A5F54: je 0x171a5fee */
L_171A5F5A:
    eax = MEM32(ebp + (-0x1C)); /* 0x171A5F5A: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp MEM8(eax), 0 */ /* 0x171A5F5D: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A5F66; /* 0x171A5F60: jne 0x171a5f66 */
L_171A5F62:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x171A5F62: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A5F66:
    /* cmp MEM8(ebp + 0x14), 0 */ /* 0x171A5F66: cmp byte ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x171A5F6A: push esi */
    PUSH32(esp, edi); /* 0x171A5F6B: push edi */
    esi = 0x1700B4A4u; /* 0x171A5F6C: mov esi, 0x1700b4a4 */
    edi = ebp + (-0x14); /* 0x171A5F71: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A5F74: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A5F75: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A5F76: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A5F77: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x171A5F78: pop edi */
    esi = POP32_VAL(esp); /* 0x171A5F79: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5F8D; /* 0x171A5F7A: je 0x171a5f8d */
L_171A5F7C:
    eax = ebp + (-0x14); /* 0x171A5F7C: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x171A5F7F: push eax */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x171A5F80: push dword ptr [ebp - 0x24] */
    PUSH32(esp, ebx); /* 0x171A5F83: push ebx */
    RECOMP_CALL(sub_171A556B); /* 0x171A5F84: call 0x171a556b */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A5F89: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5FEE; /* 0x171A5F8B: je 0x171a5fee */
L_171A5F8D:
    /* cmp MEM32(ebp + (-0x1C)), 0 */ /* 0x171A5F8D: cmp dword ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A5FA6; /* 0x171A5F91: je 0x171a5fa6 */
L_171A5F93:
    ecx = MEM32(ebp + (-0x18)); /* 0x171A5F93: mov ecx, dword ptr [ebp - 0x18] */
    eax = ebp + (-0x20); /* 0x171A5F96: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x171A5F99: push eax */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x171A5F9A: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_171A54F7); /* 0x171A5F9D: call 0x171a54f7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A5FA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A5FBA; /* 0x171A5FA4: jne 0x171a5fba */
L_171A5FA6:
    ecx = MEM32(ebp + (-0x18)); /* 0x171A5FA6: mov ecx, dword ptr [ebp - 0x18] */
    eax = ebp + (-0x20); /* 0x171A5FA9: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x171A5FAC: push eax */
    eax = ebp + (-0x14); /* 0x171A5FAD: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x171A5FB0: push eax */
    RECOMP_CALL(sub_171A5531); /* 0x171A5FB1: call 0x171a5531 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A5FB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5FEE; /* 0x171A5FB8: je 0x171a5fee */
L_171A5FBA:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x171A5FBA: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_171A918C); /* 0x171A5FBD: call 0x171a918c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A5FC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x171A5FC4: mov dword ptr [ebp - 0x18], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A5FE3; /* 0x171A5FC7: je 0x171a5fe3 */
L_171A5FC9:
    ecx = MEM32(ebp + (-0x28)); /* 0x171A5FC9: mov ecx, dword ptr [ebp - 0x28] */
    eax = ebp + (-0x18); /* 0x171A5FCC: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171A5FCF: push eax */
    RECOMP_CALL(sub_171A902A); /* 0x171A5FD0: call 0x171a902a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A5FD5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A5FEA; /* 0x171A5FD7: jne 0x171a5fea */
L_171A5FD9:
    ecx = MEM32(ebp + (-0x18)); /* 0x171A5FD9: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, 1); /* 0x171A5FDC: push 1 */
    RECOMP_CALL(sub_171A54C9); /* 0x171A5FDE: call 0x171a54c9 */
    RECOMP_FLAGS_IN();
L_171A5FE3:
    eax = 0x8007000Eu; /* 0x171A5FE3: mov eax, 0x8007000e */
    goto L_171A5FF3; /* 0x171A5FE8: jmp 0x171a5ff3 */
L_171A5FEA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A5FEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A5FF3; /* 0x171A5FEC: jmp 0x171a5ff3 */
L_171A5FEE:
    eax = 0x8876038Fu; /* 0x171A5FEE: mov eax, 0x8876038f */
L_171A5FF3:
    ecx = MEM32(ebp + (-0x4)); /* 0x171A5FF3: mov ecx, dword ptr [ebp - 4] */
    ebx = POP32_VAL(esp); /* 0x171A5FF6: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171A5FF7: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A5FFC: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A5FFD: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171A6005(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6005u);

L_171A6005:
    edi = edi; /* 0x171A6005: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6007: push ebp */
    ebp = esp; /* 0x171A6008: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A600A: push esi */
    PUSH32(esp, edi); /* 0x171A600B: push edi */
    esi = ecx; /* 0x171A600C: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A600E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x44), edi */ /* 0x171A6010: cmp dword ptr [esi + 0x44], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A6030; /* 0x171A6013: jbe 0x171a6030 */
L_171A6015:
    eax = MEM32(esi + 0x50); /* 0x171A6015: mov eax, dword ptr [esi + 0x50] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A6018: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171A601B: mov ecx, dword ptr [eax + edi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A601E: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171A6021: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x171A6023: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A6026: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A6038; /* 0x171A6028: jne 0x171a6038 */
L_171A602A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A602A: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x44) */ /* 0x171A602B: cmp edi, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A6015; /* 0x171A602E: jb 0x171a6015 */
L_171A6030:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171A6030: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171A6032:
    edi = POP32_VAL(esp); /* 0x171A6032: pop edi */
    esi = POP32_VAL(esp); /* 0x171A6033: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A6034: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A6035: ret 8 */
L_171A6038:
    SET_LO8(eax, 1); /* 0x171A6038: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_171A6032; /* 0x171A603A: jmp 0x171a6032 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A6041(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6041u);

L_171A6041:
    edi = edi; /* 0x171A6041: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6043: push ebp */
    ebp = esp; /* 0x171A6044: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A6046: push esi */
    PUSH32(esp, edi); /* 0x171A6047: push edi */
    esi = ecx; /* 0x171A6048: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A604A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x34), edi */ /* 0x171A604C: cmp dword ptr [esi + 0x34], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A6069; /* 0x171A604F: jbe 0x171a6069 */
L_171A6051:
    eax = MEM32(esi + 0x40); /* 0x171A6051: mov eax, dword ptr [esi + 0x40] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x171A6054: push dword ptr [eax + edi*4] */
    ecx = MEM32(ebp + 0x8); /* 0x171A6057: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A96E9); /* 0x171A605A: call 0x171a96e9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A605F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6071; /* 0x171A6061: je 0x171a6071 */
L_171A6063:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A6063: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x34) */ /* 0x171A6064: cmp edi, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A6051; /* 0x171A6067: jb 0x171a6051 */
L_171A6069:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A6069: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A606B:
    edi = POP32_VAL(esp); /* 0x171A606B: pop edi */
    esi = POP32_VAL(esp); /* 0x171A606C: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A606D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A606E: ret 4 */
L_171A6071:
    eax = 0x8007000Eu; /* 0x171A6071: mov eax, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_171A606B; /* 0x171A6076: jmp 0x171a606b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A607D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A607Du);

L_171A607D:
    edi = edi; /* 0x171A607D: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A607F: push esi */
    esi = ecx; /* 0x171A6080: mov esi, ecx */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x171A6082: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A60AD; /* 0x171A6086: je 0x171a60ad */
L_171A6088:
    PUSH32(esp, edi); /* 0x171A6088: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A6089: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edi */ /* 0x171A608B: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A60AC; /* 0x171A608D: jbe 0x171a60ac */
L_171A608F:
    eax = MEM32(esi + 0xC); /* 0x171A608F: mov eax, dword ptr [esi + 0xc] */
    /* cmp MEM32(eax + edi * 4), 0 */ /* 0x171A6092: cmp dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A60A7; /* 0x171A6096: je 0x171a60a7 */
L_171A6098:
    eax = MEM32(eax + edi * 4); /* 0x171A6098: mov eax, dword ptr [eax + edi*4] */
    ecx = MEM32(eax); /* 0x171A609B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171A609D: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171A609E: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x171A60A0: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + edi * 4) = MEM32(eax + edi * 4) & 0; /* 0x171A60A3: and dword ptr [eax + edi*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A60A7:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A60A7: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A60A8: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A608F; /* 0x171A60AA: jb 0x171a608f */
L_171A60AC:
    edi = POP32_VAL(esp); /* 0x171A60AC: pop edi */
L_171A60AD:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A60AD: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A60B0: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A60B5: pop ecx */
    esi = POP32_VAL(esp); /* 0x171A60B6: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A60B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A60BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A60BDu);

L_171A60BD:
    edi = edi; /* 0x171A60BD: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A60BF: push esi */
    esi = ecx; /* 0x171A60C0: mov esi, ecx */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x171A60C2: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A60E5; /* 0x171A60C6: je 0x171a60e5 */
L_171A60C8:
    PUSH32(esp, edi); /* 0x171A60C8: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A60C9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edi */ /* 0x171A60CB: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A60E4; /* 0x171A60CD: jbe 0x171a60e4 */
L_171A60CF:
    eax = MEM32(esi + 0xC); /* 0x171A60CF: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171A60D2: mov ecx, dword ptr [eax + edi*4] */
    /* test ecx, ecx */ /* 0x171A60D5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A60DF; /* 0x171A60D7: je 0x171a60df */
L_171A60D9:
    eax = MEM32(ecx); /* 0x171A60D9: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x171A60DB: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171A60DD: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171A60DF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A60DF: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A60E0: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A60CF; /* 0x171A60E2: jb 0x171a60cf */
L_171A60E4:
    edi = POP32_VAL(esp); /* 0x171A60E4: pop edi */
L_171A60E5:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A60E5: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A60E8: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A60ED: pop ecx */
    esi = POP32_VAL(esp); /* 0x171A60EE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A60EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A60F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A60F5u);

L_171A60F5:
    edi = edi; /* 0x171A60F5: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A60F7: push esi */
    esi = ecx; /* 0x171A60F8: mov esi, ecx */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x171A60FA: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A611E; /* 0x171A60FE: je 0x171a611e */
L_171A6100:
    PUSH32(esp, edi); /* 0x171A6100: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A6101: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edi */ /* 0x171A6103: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A611D; /* 0x171A6105: jbe 0x171a611d */
L_171A6107:
    eax = MEM32(esi + 0xC); /* 0x171A6107: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171A610A: mov ecx, dword ptr [eax + edi*4] */
    /* test ecx, ecx */ /* 0x171A610D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6118; /* 0x171A610F: je 0x171a6118 */
L_171A6111:
    eax = MEM32(ecx); /* 0x171A6111: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x171A6113: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x171A6115: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
L_171A6118:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A6118: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A6119: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A6107; /* 0x171A611B: jb 0x171a6107 */
L_171A611D:
    edi = POP32_VAL(esp); /* 0x171A611D: pop edi */
L_171A611E:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A611E: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A6121: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A6126: pop ecx */
    esi = POP32_VAL(esp); /* 0x171A6127: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A6128: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A612E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A612Eu);

L_171A612E:
    edi = edi; /* 0x171A612E: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A6130: push esi */
    esi = ecx; /* 0x171A6131: mov esi, ecx */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x171A6133: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A6157; /* 0x171A6137: je 0x171a6157 */
L_171A6139:
    PUSH32(esp, edi); /* 0x171A6139: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A613A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edi */ /* 0x171A613C: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A6156; /* 0x171A613E: jbe 0x171a6156 */
L_171A6140:
    eax = MEM32(esi + 0xC); /* 0x171A6140: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171A6143: mov ecx, dword ptr [eax + edi*4] */
    /* test ecx, ecx */ /* 0x171A6146: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6151; /* 0x171A6148: je 0x171a6151 */
L_171A614A:
    PUSH32(esp, 1); /* 0x171A614A: push 1 */
    RECOMP_CALL(sub_171A54C9); /* 0x171A614C: call 0x171a54c9 */
    RECOMP_FLAGS_IN();
L_171A6151:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A6151: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A6152: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A6140; /* 0x171A6154: jb 0x171a6140 */
L_171A6156:
    edi = POP32_VAL(esp); /* 0x171A6156: pop edi */
L_171A6157:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A6157: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A615A: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A615F: pop ecx */
    esi = POP32_VAL(esp); /* 0x171A6160: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A6161: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A6167(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6167u);

L_171A6167:
    edi = edi; /* 0x171A6167: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A6169: push esi */
    esi = ecx; /* 0x171A616A: mov esi, ecx */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x171A616C: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A6190; /* 0x171A6170: je 0x171a6190 */
L_171A6172:
    PUSH32(esp, edi); /* 0x171A6172: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A6173: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edi */ /* 0x171A6175: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A618F; /* 0x171A6177: jbe 0x171a618f */
L_171A6179:
    eax = MEM32(esi + 0xC); /* 0x171A6179: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171A617C: mov ecx, dword ptr [eax + edi*4] */
    /* test ecx, ecx */ /* 0x171A617F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A618A; /* 0x171A6181: je 0x171a618a */
L_171A6183:
    PUSH32(esp, 1); /* 0x171A6183: push 1 */
    RECOMP_CALL(sub_171A54A3); /* 0x171A6185: call 0x171a54a3 */
    RECOMP_FLAGS_IN();
L_171A618A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A618A: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A618B: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A6179; /* 0x171A618D: jb 0x171a6179 */
L_171A618F:
    edi = POP32_VAL(esp); /* 0x171A618F: pop edi */
L_171A6190:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A6190: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A6193: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A6198: pop ecx */
    esi = POP32_VAL(esp); /* 0x171A6199: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A619A: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A61A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A61A0u);

L_171A61A0:
    edi = edi; /* 0x171A61A0: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A61A2: push esi */
    esi = ecx; /* 0x171A61A3: mov esi, ecx */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x171A61A5: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A61C9; /* 0x171A61A9: je 0x171a61c9 */
L_171A61AB:
    PUSH32(esp, edi); /* 0x171A61AB: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A61AC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edi */ /* 0x171A61AE: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A61C8; /* 0x171A61B0: jbe 0x171a61c8 */
L_171A61B2:
    eax = MEM32(esi + 0xC); /* 0x171A61B2: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171A61B5: mov ecx, dword ptr [eax + edi*4] */
    /* test ecx, ecx */ /* 0x171A61B8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A61C3; /* 0x171A61BA: je 0x171a61c3 */
L_171A61BC:
    PUSH32(esp, 1); /* 0x171A61BC: push 1 */
    RECOMP_CALL(sub_171A5474); /* 0x171A61BE: call 0x171a5474 */
    RECOMP_FLAGS_IN();
L_171A61C3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A61C3: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A61C4: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A61B2; /* 0x171A61C6: jb 0x171a61b2 */
L_171A61C8:
    edi = POP32_VAL(esp); /* 0x171A61C8: pop edi */
L_171A61C9:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A61C9: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A61CC: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A61D1: pop ecx */
    esi = POP32_VAL(esp); /* 0x171A61D2: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A61D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A61D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A61D9u);

L_171A61D9:
    edi = edi; /* 0x171A61D9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A61DB: push ebp */
    ebp = esp; /* 0x171A61DC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A61DE: push ecx */
    PUSH32(esp, esi); /* 0x171A61DF: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171A61E0: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x171A61E3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6247; /* 0x171A61E5: je 0x171a6247 */
L_171A61E7:
    eax = MEM32(esi); /* 0x171A61E7: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x171A61E9: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171A61ED: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + 0xC; /* 0x171A61F1: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x171A61F4: push ecx */
    PUSH32(esp, 0x17001BF0u); /* 0x171A61F5: push 0x17001bf0 */
    PUSH32(esp, esi); /* 0x171A61FA: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171A61FB: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A61FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A6217; /* 0x171A61FF: jl 0x171a6217 */
L_171A6201:
    eax = MEM32(ebp + 0x8); /* 0x171A6201: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x171A6204: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171A6207: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171A620A: push eax */
    RECOMP_CALL(sub_171A5C34); /* 0x171A620B: call 0x171a5c34 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A6210: mov esi, eax */
    eax = MEM32(ebp + 0xC); /* 0x171A6212: mov eax, dword ptr [ebp + 0xc] */
    goto L_171A623D; /* 0x171A6215: jmp 0x171a623d */
L_171A6217:
    eax = MEM32(esi); /* 0x171A6217: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x4); /* 0x171A6219: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x171A621C: push ecx */
    PUSH32(esp, 0x17001BE0u); /* 0x171A621D: push 0x17001be0 */
    PUSH32(esp, esi); /* 0x171A6222: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171A6223: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A6225: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A6247; /* 0x171A6227: jl 0x171a6247 */
L_171A6229:
    eax = MEM32(ebp + 0x8); /* 0x171A6229: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171A622C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171A622F: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171A6232: push eax */
    RECOMP_CALL(sub_171A6041); /* 0x171A6233: call 0x171a6041 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A6238: mov esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x171A623A: mov eax, dword ptr [ebp - 4] */
L_171A623D:
    ecx = MEM32(eax); /* 0x171A623D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171A623F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171A6240: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A6243: mov eax, esi */
    goto L_171A624C; /* 0x171A6245: jmp 0x171a624c */
L_171A6247:
    eax = 0x88760385u; /* 0x171A6247: mov eax, 0x88760385 */
L_171A624C:
    esi = POP32_VAL(esp); /* 0x171A624C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A624D: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A624E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171A6256(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6256u);

L_171A6256:
    edi = edi; /* 0x171A6256: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6258: push ebp */
    ebp = esp; /* 0x171A6259: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A625B: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171A625C: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x171A625F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6280; /* 0x171A6261: je 0x171a6280 */
L_171A6263:
    ecx = MEM32(ebp + 0x8); /* 0x171A6263: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x171A6266: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x10; /* 0x171A6269: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x171A626C: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A626D: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_171A5C70); /* 0x171A6270: call 0x171a5c70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A6275: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A6285; /* 0x171A6277: jl 0x171a6285 */
L_171A6279:
    ecx = MEM32(ebp + 0x10); /* 0x171A6279: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(esi) = ecx; /* 0x171A627C: mov dword ptr [esi], ecx */
    goto L_171A6285; /* 0x171A627E: jmp 0x171a6285 */
L_171A6280:
    eax = 0x88760385u; /* 0x171A6280: mov eax, 0x88760385 */
L_171A6285:
    esi = POP32_VAL(esp); /* 0x171A6285: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A6286: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A6287: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A628F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A628Fu);

L_171A628F:
    edi = edi; /* 0x171A628F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6291: push ebp */
    ebp = esp; /* 0x171A6292: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A6294: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171A6295: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x171A6298: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A62B9; /* 0x171A629A: je 0x171a62b9 */
L_171A629C:
    ecx = MEM32(ebp + 0x8); /* 0x171A629C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x171A629F: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x10; /* 0x171A62A2: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x171A62A5: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A62A6: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_171A5CC6); /* 0x171A62A9: call 0x171a5cc6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A62AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A62BE; /* 0x171A62B0: jl 0x171a62be */
L_171A62B2:
    ecx = MEM32(ebp + 0x10); /* 0x171A62B2: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(esi) = ecx; /* 0x171A62B5: mov dword ptr [esi], ecx */
    goto L_171A62BE; /* 0x171A62B7: jmp 0x171a62be */
L_171A62B9:
    eax = 0x88760385u; /* 0x171A62B9: mov eax, 0x88760385 */
L_171A62BE:
    esi = POP32_VAL(esp); /* 0x171A62BE: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A62BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A62C0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A62C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A62C8u);

L_171A62C8:
    edi = edi; /* 0x171A62C8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A62CA: push ebp */
    ebp = esp; /* 0x171A62CB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A62CD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171A62CE: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM8(esi + 0x5D), 0 */ /* 0x171A62D1: cmp byte ptr [esi + 0x5d], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x5D)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A62E1; /* 0x171A62D5: je 0x171a62e1 */
L_171A62D7:
    eax = 0x88760384u; /* 0x171A62D7: mov eax, 0x88760384 */
    goto L_171A6365; /* 0x171A62DC: jmp 0x171a6365 */
L_171A62E1:
    PUSH32(esp, edi); /* 0x171A62E1: push edi */
    edi = MEM32(ebp + 0x20); /* 0x171A62E2: mov edi, dword ptr [ebp + 0x20] */
    /* test edi, edi */ /* 0x171A62E5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A635F; /* 0x171A62E7: je 0x171a635f */
L_171A62E9:
    eax = ebp + 0x20; /* 0x171A62E9: lea eax, [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x171A62EC: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A62ED: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x171A62F0: mov ecx, esi */
    RECOMP_CALL(sub_171A5E51); /* 0x171A62F2: call 0x171a5e51 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A62F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A6364; /* 0x171A62F9: jl 0x171a6364 */
L_171A62FB:
    eax = MEM32(ebp + 0x14); /* 0x171A62FB: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x171A62FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A6307; /* 0x171A6300: jne 0x171a6307 */
L_171A6302:
    eax = 0x1700B4A4u; /* 0x171A6302: mov eax, 0x1700b4a4 */
L_171A6307:
    ecx = ebp + 0x8; /* 0x171A6307: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x171A630A: push ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x171A630B: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171A630E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x171A6311: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A6312: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x171A6315: push esi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x171A6316: push dword ptr [ebp + 0x20] */
    RECOMP_CALL(sub_171AB72F); /* 0x171A6319: call 0x171ab72f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A631E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A6364; /* 0x171A6320: jl 0x171a6364 */
L_171A6322:
    eax = MEM32(ebp + 0x8); /* 0x171A6322: mov eax, dword ptr [ebp + 8] */
    ecx = eax; /* 0x171A6325: mov ecx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171A6327: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x171A632A: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171A632C: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x171A632E: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x20; /* 0x171A6330: lea eax, [ebp + 0x20] */
    MEM32(ebp + 0x20) = ecx; /* 0x171A6333: mov dword ptr [ebp + 0x20], ecx */
    PUSH32(esp, eax); /* 0x171A6336: push eax */
    ecx = esi + 0x1C; /* 0x171A6337: lea ecx, [esi + 0x1c] */
    RECOMP_CALL(sub_171A902A); /* 0x171A633A: call 0x171a902a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A633F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x171A6341: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x171A6344: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171A6346: push eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6355; /* 0x171A6347: je 0x171a6355 */
L_171A6349:
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171A6349: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171A634C: mov eax, dword ptr [ebp + 8] */
    MEM32(edi) = eax; /* 0x171A634F: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A6351: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A6364; /* 0x171A6353: jmp 0x171a6364 */
L_171A6355:
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171A6355: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = 0x8007000Eu; /* 0x171A6358: mov eax, 0x8007000e */
    goto L_171A6364; /* 0x171A635D: jmp 0x171a6364 */
L_171A635F:
    eax = 0x88760385u; /* 0x171A635F: mov eax, 0x88760385 */
L_171A6364:
    edi = POP32_VAL(esp); /* 0x171A6364: pop edi */
L_171A6365:
    esi = POP32_VAL(esp); /* 0x171A6365: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A6366: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x171A6367: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_171A636F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A636Fu);

L_171A636F:
    eax = ecx; /* 0x171A636F: mov eax, ecx */
    MEM32(eax) = 0x170238A4u; /* 0x171A6371: mov dword ptr [eax], 0x170238a4 */
    MEM32(eax + 0x4) = 1; /* 0x171A6377: mov dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171A637E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x171A6380: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x171A6383: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = 0x64u; /* 0x171A6386: mov dword ptr [eax + 0x10], 0x64 */
    MEM32(eax + 0x14) = ecx; /* 0x171A638D: mov dword ptr [eax + 0x14], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A6390: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A6396(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6396u);

L_171A6396:
    edi = edi; /* 0x171A6396: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6398: push ebp */
    ebp = esp; /* 0x171A6399: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A639B: push esi */
    esi = ecx; /* 0x171A639C: mov esi, ecx */
    ecx = esi + 0x8; /* 0x171A639E: lea ecx, [esi + 8] */
    MEM32(esi) = 0x170238A4u; /* 0x171A63A1: mov dword ptr [esi], 0x170238a4 */
    RECOMP_CALL(sub_171A56C6); /* 0x171A63A7: call 0x171a56c6 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A63AC: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A63B9; /* 0x171A63B0: je 0x171a63b9 */
L_171A63B2:
    PUSH32(esp, esi); /* 0x171A63B2: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A63B3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A63B8: pop ecx */
L_171A63B9:
    eax = esi; /* 0x171A63B9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A63BB: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A63BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A63BD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A63C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A63C5u);

L_171A63C5:
    edi = edi; /* 0x171A63C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A63C7: push ebp */
    ebp = esp; /* 0x171A63C8: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171A63CA: push ebx */
    PUSH32(esp, esi); /* 0x171A63CB: push esi */
    esi = ecx; /* 0x171A63CC: mov esi, ecx */
    MEM32(esi) = 0x170238C4u; /* 0x171A63CE: mov dword ptr [esi], 0x170238c4 */
    MEM32(esi + 0x4) = 1; /* 0x171A63D4: mov dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A63DB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171A63DD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171A63DE: mov edi, dword ptr [ebp + 8] */
    MEM32(esi + 0x8) = edi; /* 0x171A63E1: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = ebx; /* 0x171A63E4: mov dword ptr [esi + 0xc], ebx */
    MEM32(esi + 0x10) = ebx; /* 0x171A63E7: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x14) = 0x64u; /* 0x171A63EA: mov dword ptr [esi + 0x14], 0x64 */
    MEM32(esi + 0x18) = ebx; /* 0x171A63F1: mov dword ptr [esi + 0x18], ebx */
    ecx = esi + 0x30; /* 0x171A63F4: lea ecx, [esi + 0x30] */
    MEM32(esi + 0x1C) = ebx; /* 0x171A63F7: mov dword ptr [esi + 0x1c], ebx */
    MEM32(esi + 0x20) = ebx; /* 0x171A63FA: mov dword ptr [esi + 0x20], ebx */
    MEM32(esi + 0x24) = 0xAu; /* 0x171A63FD: mov dword ptr [esi + 0x24], 0xa */
    MEM32(esi + 0x28) = ebx; /* 0x171A6404: mov dword ptr [esi + 0x28], ebx */
    RECOMP_CALL(sub_171A8C91); /* 0x171A6407: call 0x171a8c91 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x171A640C: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x3C) = eax; /* 0x171A640F: mov dword ptr [esi + 0x3c], eax */
    eax = MEM32(ebp + 0x14); /* 0x171A6412: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x40) = eax; /* 0x171A6415: mov dword ptr [esi + 0x40], eax */
    eax = MEM32(ebp + 0x18); /* 0x171A6418: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esi + 0x44) = eax; /* 0x171A641B: mov dword ptr [esi + 0x44], eax */
    MEM32(esi + 0x48) = ebx; /* 0x171A641E: mov dword ptr [esi + 0x48], ebx */
    MEM32(esi + 0x4C) = ebx; /* 0x171A6421: mov dword ptr [esi + 0x4c], ebx */
    MEM32(esi + 0x50) = ebx; /* 0x171A6424: mov dword ptr [esi + 0x50], ebx */
    MEM32(esi + 0x54) = ebx; /* 0x171A6427: mov dword ptr [esi + 0x54], ebx */
    MEM32(esi + 0x58) = ebx; /* 0x171A642A: mov dword ptr [esi + 0x58], ebx */
    MEM8(esi + 0x5C) = (uint8_t)(LO8(ebx)); /* 0x171A642D: mov byte ptr [esi + 0x5c], bl */
    MEM8(esi + 0x5D) = (uint8_t)(LO8(ebx)); /* 0x171A6430: mov byte ptr [esi + 0x5d], bl */
    RECOMP_CALL(sub_171A518D); /* 0x171A6433: call 0x171a518d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x171A6438: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x2C) = eax; /* 0x171A643B: mov dword ptr [esi + 0x2c], eax */
    eax = MEM32(edi); /* 0x171A643E: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171A6440: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171A6441: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A6444: push dword ptr [ebp + 0x10] */
    ecx = esi + 0x30; /* 0x171A6447: lea ecx, [esi + 0x30] */
    RECOMP_CALL(sub_171A8CA0); /* 0x171A644A: call 0x171a8ca0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171A644F: pop edi */
    eax = esi; /* 0x171A6450: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A6452: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A6453: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A6454: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171A6455: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171A645D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A645Du);

L_171A645D:
    edi = edi; /* 0x171A645D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A645F: push ebp */
    ebp = esp; /* 0x171A6460: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171A6462: push ebx */
    PUSH32(esp, esi); /* 0x171A6463: push esi */
    esi = ecx; /* 0x171A6464: mov esi, ecx */
    MEM32(esi) = 0x170238C4u; /* 0x171A6466: mov dword ptr [esi], 0x170238c4 */
    MEM32(esi + 0x4) = 1; /* 0x171A646C: mov dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A6473: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171A6475: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171A6476: mov edi, dword ptr [ebp + 8] */
    MEM32(esi + 0x8) = edi; /* 0x171A6479: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = ebx; /* 0x171A647C: mov dword ptr [esi + 0xc], ebx */
    MEM32(esi + 0x10) = ebx; /* 0x171A647F: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x14) = 0x64u; /* 0x171A6482: mov dword ptr [esi + 0x14], 0x64 */
    MEM32(esi + 0x18) = ebx; /* 0x171A6489: mov dword ptr [esi + 0x18], ebx */
    ecx = esi + 0x30; /* 0x171A648C: lea ecx, [esi + 0x30] */
    MEM32(esi + 0x1C) = ebx; /* 0x171A648F: mov dword ptr [esi + 0x1c], ebx */
    MEM32(esi + 0x20) = ebx; /* 0x171A6492: mov dword ptr [esi + 0x20], ebx */
    MEM32(esi + 0x24) = 0xAu; /* 0x171A6495: mov dword ptr [esi + 0x24], 0xa */
    MEM32(esi + 0x28) = ebx; /* 0x171A649C: mov dword ptr [esi + 0x28], ebx */
    RECOMP_CALL(sub_171A8C91); /* 0x171A649F: call 0x171a8c91 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x171A64A4: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x3C) = eax; /* 0x171A64A7: mov dword ptr [esi + 0x3c], eax */
    eax = MEM32(ebp + 0x14); /* 0x171A64AA: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x40) = eax; /* 0x171A64AD: mov dword ptr [esi + 0x40], eax */
    eax = MEM32(ebp + 0x18); /* 0x171A64B0: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esi + 0x44) = eax; /* 0x171A64B3: mov dword ptr [esi + 0x44], eax */
    MEM32(esi + 0x48) = ebx; /* 0x171A64B6: mov dword ptr [esi + 0x48], ebx */
    MEM32(esi + 0x4C) = ebx; /* 0x171A64B9: mov dword ptr [esi + 0x4c], ebx */
    MEM32(esi + 0x50) = ebx; /* 0x171A64BC: mov dword ptr [esi + 0x50], ebx */
    MEM32(esi + 0x54) = ebx; /* 0x171A64BF: mov dword ptr [esi + 0x54], ebx */
    MEM32(esi + 0x58) = ebx; /* 0x171A64C2: mov dword ptr [esi + 0x58], ebx */
    MEM8(esi + 0x5C) = (uint8_t)(1); /* 0x171A64C5: mov byte ptr [esi + 0x5c], 1 */
    MEM8(esi + 0x5D) = (uint8_t)(LO8(ebx)); /* 0x171A64C9: mov byte ptr [esi + 0x5d], bl */
    RECOMP_CALL(sub_171A518D); /* 0x171A64CC: call 0x171a518d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x171A64D1: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x2C) = eax; /* 0x171A64D4: mov dword ptr [esi + 0x2c], eax */
    eax = MEM32(edi); /* 0x171A64D7: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171A64D9: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171A64DA: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A64DD: push dword ptr [ebp + 0x10] */
    ecx = esi + 0x30; /* 0x171A64E0: lea ecx, [esi + 0x30] */
    RECOMP_CALL(sub_171A8CA0); /* 0x171A64E3: call 0x171a8ca0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171A64E8: pop edi */
    eax = esi; /* 0x171A64E9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A64EB: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A64EC: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A64ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171A64EE: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171A64F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A64F6u);

L_171A64F6:
    edi = edi; /* 0x171A64F6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A64F8: push ebp */
    ebp = esp; /* 0x171A64F9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A64FB: push esi */
    PUSH32(esp, edi); /* 0x171A64FC: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171A64FD: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0x101u */ /* 0x171A6500: cmp edi, 0x101 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x101u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = ecx; /* 0x171A6506: mov esi, ecx */
    if (CMP_A(_flag_a, _flag_b)) goto L_171A6521; /* 0x171A6508: ja 0x171a6521 */
L_171A650A:
    eax = ebp + 0x8; /* 0x171A650A: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A650D: push eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x171A650E: add edi, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x171A6511: push edi */
    PUSH32(esp, 0x17250DF8u); /* 0x171A6512: push 0x17250df8 */
    ecx = esi + 0x30; /* 0x171A6517: lea ecx, [esi + 0x30] */
    RECOMP_CALL(sub_171A8D23); /* 0x171A651A: call 0x171a8d23 */
    RECOMP_FLAGS_IN();
    goto L_171A654A; /* 0x171A651F: jmp 0x171a654a */
L_171A6521:
    PUSH32(esp, 0x170238E0u); /* 0x171A6521: push 0x170238e0 */
    PUSH32(esp, esi); /* 0x171A6526: push esi */
    RECOMP_CALL(sub_171A5DE5); /* 0x171A6527: call 0x171a5de5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x171A652C: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x171A6530: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A6532: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A6533: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A654A; /* 0x171A6534: jbe 0x171a654a */
L_171A6536:
    PUSH32(esp, 0x17007854u); /* 0x171A6536: push 0x17007854 */
    ecx = esi; /* 0x171A653B: mov ecx, esi */
    RECOMP_CALL(sub_171A5334); /* 0x171A653D: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x171A6542: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x171A6545: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A6536; /* 0x171A6548: jb 0x171a6536 */
L_171A654A:
    edi = POP32_VAL(esp); /* 0x171A654A: pop edi */
    esi = POP32_VAL(esp); /* 0x171A654B: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A654C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A654D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A6555(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6555u);

L_171A6555:
    edi = edi; /* 0x171A6555: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6557: push ebp */
    ebp = esp; /* 0x171A6558: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171A655A: mov eax, dword ptr [ebp + 8] */
    edx = (uint32_t)MEM8(eax + 0xF); /* 0x171A655D: movzx edx, byte ptr [eax + 0xf] */
    PUSH32(esp, edx); /* 0x171A6561: push edx */
    edx = (uint32_t)MEM8(eax + 0xE); /* 0x171A6562: movzx edx, byte ptr [eax + 0xe] */
    PUSH32(esp, edx); /* 0x171A6566: push edx */
    edx = (uint32_t)MEM8(eax + 0xD); /* 0x171A6567: movzx edx, byte ptr [eax + 0xd] */
    PUSH32(esp, edx); /* 0x171A656B: push edx */
    edx = (uint32_t)MEM8(eax + 0xC); /* 0x171A656C: movzx edx, byte ptr [eax + 0xc] */
    PUSH32(esp, edx); /* 0x171A6570: push edx */
    edx = (uint32_t)MEM8(eax + 0xB); /* 0x171A6571: movzx edx, byte ptr [eax + 0xb] */
    PUSH32(esp, edx); /* 0x171A6575: push edx */
    edx = (uint32_t)MEM8(eax + 0xA); /* 0x171A6576: movzx edx, byte ptr [eax + 0xa] */
    PUSH32(esp, edx); /* 0x171A657A: push edx */
    edx = (uint32_t)MEM8(eax + 0x9); /* 0x171A657B: movzx edx, byte ptr [eax + 9] */
    PUSH32(esp, edx); /* 0x171A657F: push edx */
    edx = (uint32_t)MEM8(eax + 0x8); /* 0x171A6580: movzx edx, byte ptr [eax + 8] */
    PUSH32(esp, edx); /* 0x171A6584: push edx */
    edx = (uint32_t)MEM16(eax + 0x6); /* 0x171A6585: movzx edx, word ptr [eax + 6] */
    PUSH32(esp, edx); /* 0x171A6589: push edx */
    edx = (uint32_t)MEM16(eax + 0x4); /* 0x171A658A: movzx edx, word ptr [eax + 4] */
    PUSH32(esp, edx); /* 0x171A658E: push edx */
    PUSH32(esp, MEM32(eax)); /* 0x171A658F: push dword ptr [eax] */
    PUSH32(esp, 0x170238E4u); /* 0x171A6591: push 0x170238e4 */
    PUSH32(esp, ecx); /* 0x171A6596: push ecx */
    RECOMP_CALL(sub_171A5DE5); /* 0x171A6597: call 0x171a5de5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x171A659C: add esp, 0x34 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x171A659F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A65A0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A65A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A65A8u);

L_171A65A8:
    edi = edi; /* 0x171A65A8: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A65AA: push esi */
    esi = ecx; /* 0x171A65AB: mov esi, ecx */
    eax = MEM32(esi + 0x40); /* 0x171A65AD: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171A65B0: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A65D9; /* 0x171A65B3: je 0x171a65d9 */
L_171A65B5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A65B5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A6609; /* 0x171A65B6: jne 0x171a6609 */
L_171A65B8:
    PUSH32(esp, 0x1702392Cu); /* 0x171A65B8: push 0x1702392c */
    PUSH32(esp, 0x17023920u); /* 0x171A65BD: push 0x17023920 */
    PUSH32(esp, esi); /* 0x171A65C2: push esi */
    RECOMP_CALL(sub_171A5DE5); /* 0x171A65C3: call 0x171a5de5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171A65C8: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x17023918u); /* 0x171A65CB: push 0x17023918 */
    ecx = esi; /* 0x171A65D0: mov ecx, esi */
    RECOMP_CALL(sub_171A5334); /* 0x171A65D2: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    goto L_171A6609; /* 0x171A65D7: jmp 0x171a6609 */
L_171A65D9:
    PUSH32(esp, 0x20666F78u); /* 0x171A65D9: push 0x20666f78 */
    ecx = esi; /* 0x171A65DE: mov ecx, esi */
    RECOMP_CALL(sub_171A911A); /* 0x171A65E0: call 0x171a911a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x33303330u); /* 0x171A65E5: push 0x33303330 */
    ecx = esi; /* 0x171A65EA: mov ecx, esi */
    RECOMP_CALL(sub_171A911A); /* 0x171A65EC: call 0x171a911a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x206E6962u); /* 0x171A65F1: push 0x206e6962 */
    ecx = esi; /* 0x171A65F6: mov ecx, esi */
    RECOMP_CALL(sub_171A911A); /* 0x171A65F8: call 0x171a911a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x32333030u); /* 0x171A65FD: push 0x32333030 */
    ecx = esi; /* 0x171A6602: mov ecx, esi */
    RECOMP_CALL(sub_171A911A); /* 0x171A6604: call 0x171a911a */
    RECOMP_FLAGS_IN();
L_171A6609:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A6609: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171A660B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A660C: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A6612(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6612u);

L_171A6612:
    edi = edi; /* 0x171A6612: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6614: push ebp */
    ebp = esp; /* 0x171A6615: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A6617: push esi */
    esi = ecx; /* 0x171A6618: mov esi, ecx */
    eax = MEM32(esi + 0x40); /* 0x171A661A: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171A661D: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A6651; /* 0x171A6620: je 0x171a6651 */
L_171A6622:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A6622: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A6677; /* 0x171A6623: jne 0x171a6677 */
L_171A6625:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A6625: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x17023934u); /* 0x171A6628: push 0x17023934 */
    PUSH32(esp, esi); /* 0x171A662D: push esi */
    RECOMP_CALL(sub_171A5DE5); /* 0x171A662E: call 0x171a5de5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x58); /* 0x171A6633: mov eax, dword ptr [esi + 0x58] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171A6636: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A6639: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171A663A: push eax */
    ecx = esi; /* 0x171A663B: mov ecx, esi */
    RECOMP_CALL(sub_171A64F6); /* 0x171A663D: call 0x171a64f6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A6642: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x171A6645: mov ecx, esi */
    RECOMP_CALL(sub_171A6555); /* 0x171A6647: call 0x171a6555 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x58) = MEM32(esi + 0x58) + 1; /* 0x171A664C: inc dword ptr [esi + 0x58] */
    _flag_k = FK_INC;
    goto L_171A6677; /* 0x171A664F: jmp 0x171a6677 */
L_171A6651:
    PUSH32(esp, 0x1Fu); /* 0x171A6651: push 0x1f */
    ecx = esi; /* 0x171A6653: mov ecx, esi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A6655: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A665A: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x171A665D: mov ecx, esi */
    RECOMP_CALL(sub_171A5D52); /* 0x171A665F: call 0x171a5d52 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x171A6664: push 0xa */
    ecx = esi; /* 0x171A6666: mov ecx, esi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A6668: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A666D: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x171A6670: mov ecx, esi */
    RECOMP_CALL(sub_171A5D99); /* 0x171A6672: call 0x171a5d99 */
    RECOMP_FLAGS_IN();
L_171A6677:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A6677: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171A6679: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A667A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A667B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171A6683(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6683u);

L_171A6683:
    edi = edi; /* 0x171A6683: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A6685: push esi */
    esi = ecx; /* 0x171A6686: mov esi, ecx */
    eax = MEM32(esi + 0x40); /* 0x171A6688: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171A668B: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A66BB; /* 0x171A668E: je 0x171a66bb */
L_171A6690:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A6690: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A66C4; /* 0x171A6691: jne 0x171a66c4 */
L_171A6693:
    eax = MEM32(esi + 0x58); /* 0x171A6693: mov eax, dword ptr [esi + 0x58] */
    /* test eax, eax */ /* 0x171A6696: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A66A1; /* 0x171A6698: jne 0x171a66a1 */
L_171A669A:
    eax = 0x8876038Fu; /* 0x171A669A: mov eax, 0x8876038f */
    esi = POP32_VAL(esp); /* 0x171A669F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A66A0: ret  */
L_171A66A1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A66A1: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x171A66A2: push eax */
    ecx = esi; /* 0x171A66A3: mov ecx, esi */
    MEM32(esi + 0x58) = eax; /* 0x171A66A5: mov dword ptr [esi + 0x58], eax */
    RECOMP_CALL(sub_171A64F6); /* 0x171A66A8: call 0x171a64f6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17008030u); /* 0x171A66AD: push 0x17008030 */
    ecx = esi; /* 0x171A66B2: mov ecx, esi */
    RECOMP_CALL(sub_171A5334); /* 0x171A66B4: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    goto L_171A66C4; /* 0x171A66B9: jmp 0x171a66c4 */
L_171A66BB:
    PUSH32(esp, 0xBu); /* 0x171A66BB: push 0xb */
    ecx = esi; /* 0x171A66BD: mov ecx, esi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A66BF: call 0x171a53ad */
    RECOMP_FLAGS_IN();
L_171A66C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A66C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171A66C6: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A66C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A66CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A66CDu);

L_171A66CD:
    edi = edi; /* 0x171A66CD: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A66CF: push esi */
    esi = ecx; /* 0x171A66D0: mov esi, ecx */
    eax = MEM32(esi + 0x40); /* 0x171A66D2: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171A66D5: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A671A; /* 0x171A66D8: je 0x171a671a */
L_171A66DA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A66DA: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A6750; /* 0x171A66DB: jne 0x171a6750 */
L_171A66DD:
    eax = MEM32(esi + 0x58); /* 0x171A66DD: mov eax, dword ptr [esi + 0x58] */
    /* test eax, eax */ /* 0x171A66E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A66EB; /* 0x171A66E2: jne 0x171a66eb */
L_171A66E4:
    eax = 0x8876038Fu; /* 0x171A66E4: mov eax, 0x8876038f */
    esi = POP32_VAL(esp); /* 0x171A66E9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A66EA: ret  */
L_171A66EB:
    PUSH32(esp, eax); /* 0x171A66EB: push eax */
    ecx = esi; /* 0x171A66EC: mov ecx, esi */
    RECOMP_CALL(sub_171A64F6); /* 0x171A66EE: call 0x171a64f6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17023944u); /* 0x171A66F3: push 0x17023944 */
    ecx = esi; /* 0x171A66F8: mov ecx, esi */
    RECOMP_CALL(sub_171A5334); /* 0x171A66FA: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x58) = MEM32(esi + 0x58) - 1; /* 0x171A66FF: dec dword ptr [esi + 0x58] */
    _flag_k = FK_DEC;
    PUSH32(esp, MEM32(esi + 0x58)); /* 0x171A6702: push dword ptr [esi + 0x58] */
    ecx = esi; /* 0x171A6705: mov ecx, esi */
    RECOMP_CALL(sub_171A64F6); /* 0x171A6707: call 0x171a64f6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17008030u); /* 0x171A670C: push 0x17008030 */
    ecx = esi; /* 0x171A6711: mov ecx, esi */
    RECOMP_CALL(sub_171A5334); /* 0x171A6713: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    goto L_171A6750; /* 0x171A6718: jmp 0x171a6750 */
L_171A671A:
    PUSH32(esp, 0xEu); /* 0x171A671A: push 0xe */
    ecx = esi; /* 0x171A671C: mov ecx, esi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A671E: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12u); /* 0x171A6723: push 0x12 */
    ecx = esi; /* 0x171A6725: mov ecx, esi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A6727: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12u); /* 0x171A672C: push 0x12 */
    ecx = esi; /* 0x171A672E: mov ecx, esi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A6730: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12u); /* 0x171A6735: push 0x12 */
    ecx = esi; /* 0x171A6737: mov ecx, esi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A6739: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFu); /* 0x171A673E: push 0xf */
    ecx = esi; /* 0x171A6740: mov ecx, esi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A6742: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xBu); /* 0x171A6747: push 0xb */
    ecx = esi; /* 0x171A6749: mov ecx, esi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A674B: call 0x171a53ad */
    RECOMP_FLAGS_IN();
L_171A6750:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A6750: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171A6752: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A6753: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A6759(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6759u);

L_171A6759:
    edi = edi; /* 0x171A6759: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A675B: push ebp */
    ebp = esp; /* 0x171A675C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A675E: push ecx */
    PUSH32(esp, ebx); /* 0x171A675F: push ebx */
    PUSH32(esp, esi); /* 0x171A6760: push esi */
    ebx = ecx; /* 0x171A6761: mov ebx, ecx */
    eax = MEM32(ebx + 0x40); /* 0x171A6763: mov eax, dword ptr [ebx + 0x40] */
    PUSH32(esp, edi); /* 0x171A6766: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A6767: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171A6769: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A6842; /* 0x171A676B: je 0x171a6842 */
L_171A6771:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A6771: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A68C0; /* 0x171A6772: jne 0x171a68c0 */
L_171A6778:
    eax = MEM32(ebx + 0x58); /* 0x171A6778: mov eax, dword ptr [ebx + 0x58] */
    /* cmp eax, edi */ /* 0x171A677B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A6789; /* 0x171A677D: jne 0x171a6789 */
L_171A677F:
    eax = 0x8876038Fu; /* 0x171A677F: mov eax, 0x8876038f */
    goto L_171A68C2; /* 0x171A6784: jmp 0x171a68c2 */
L_171A6789:
    PUSH32(esp, eax); /* 0x171A6789: push eax */
    ecx = ebx; /* 0x171A678A: mov ecx, ebx */
    RECOMP_CALL(sub_171A64F6); /* 0x171A678C: call 0x171a64f6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17007F6Cu); /* 0x171A6791: push 0x17007f6c */
    ecx = ebx; /* 0x171A6796: mov ecx, ebx */
    RECOMP_CALL(sub_171A5334); /* 0x171A6798: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x171A679D: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi), 0 */ /* 0x171A67A0: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x171A67A3: mov dword ptr [ebp - 4], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A681B; /* 0x171A67A6: jbe 0x171a681b */
L_171A67A8:
    goto L_171A67AD; /* 0x171A67A8: jmp 0x171a67ad */
L_171A67AA:
    esi = MEM32(ebp + 0x8); /* 0x171A67AA: mov esi, dword ptr [ebp + 8] */
L_171A67AD:
    /* test edi, edi */ /* 0x171A67AD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A67BD; /* 0x171A67AF: je 0x171a67bd */
L_171A67B1:
    PUSH32(esp, 0x17008460u); /* 0x171A67B1: push 0x17008460 */
    ecx = ebx; /* 0x171A67B6: mov ecx, ebx */
    RECOMP_CALL(sub_171A5334); /* 0x171A67B8: call 0x171a5334 */
    RECOMP_FLAGS_IN();
L_171A67BD:
    eax = MEM32(esi + 0xC); /* 0x171A67BD: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171A67C0: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(eax + ecx * 4); /* 0x171A67C3: mov eax, dword ptr [eax + ecx*4] */
    PUSH32(esp, MEM32(eax)); /* 0x171A67C6: push dword ptr [eax] */
    ecx = ebx; /* 0x171A67C8: mov ecx, ebx */
    RECOMP_CALL(sub_171A5334); /* 0x171A67CA: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x171A67CF: mov eax, dword ptr [esi + 0xc] */
    edx = MEM32(ebp + (-0x4)); /* 0x171A67D2: mov edx, dword ptr [ebp - 4] */
    esi = MEM32(eax + edx * 4); /* 0x171A67D5: mov esi, dword ptr [eax + edx*4] */
    PUSH32(esp, 4); /* 0x171A67D8: push 4 */
    ecx = POP32_VAL(esp); /* 0x171A67DA: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x171A67DB: add esi, ecx */
    _flag_k = FK_ADD;
    edi = 0x1700B4A4u; /* 0x171A67DD: mov edi, 0x1700b4a4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A67E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171A67E4: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171A680B; /* 0x171A67E6: je 0x171a680b */
L_171A67E8:
    PUSH32(esp, 0x17007854u); /* 0x171A67E8: push 0x17007854 */
    ecx = ebx; /* 0x171A67ED: mov ecx, ebx */
    RECOMP_CALL(sub_171A5334); /* 0x171A67EF: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171A67F4: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x171A67F7: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171A67FA: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(eax + ecx * 4); /* 0x171A67FD: mov eax, dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171A6800: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171A6803: push eax */
    ecx = ebx; /* 0x171A6804: mov ecx, ebx */
    RECOMP_CALL(sub_171A6555); /* 0x171A6806: call 0x171a6555 */
    RECOMP_FLAGS_IN();
L_171A680B:
    eax = MEM32(ebp + 0x8); /* 0x171A680B: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A680E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A6810: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171A6811: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0x4)); /* 0x171A6814: mov ecx, dword ptr [ebp - 4] */
    /* cmp ecx, MEM32(eax) */ /* 0x171A6817: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A67AA; /* 0x171A6819: jb 0x171a67aa */
L_171A681B:
    PUSH32(esp, 0x17007F68u); /* 0x171A681B: push 0x17007f68 */
    ecx = ebx; /* 0x171A6820: mov ecx, ebx */
    RECOMP_CALL(sub_171A5334); /* 0x171A6822: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x58) = MEM32(ebx + 0x58) - 1; /* 0x171A6827: dec dword ptr [ebx + 0x58] */
    _flag_k = FK_DEC;
    PUSH32(esp, MEM32(ebx + 0x58)); /* 0x171A682A: push dword ptr [ebx + 0x58] */
    ecx = ebx; /* 0x171A682D: mov ecx, ebx */
    RECOMP_CALL(sub_171A64F6); /* 0x171A682F: call 0x171a64f6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x17008030u); /* 0x171A6834: push 0x17008030 */
    ecx = ebx; /* 0x171A6839: mov ecx, ebx */
    RECOMP_CALL(sub_171A5334); /* 0x171A683B: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    goto L_171A68C0; /* 0x171A6840: jmp 0x171a68c0 */
L_171A6842:
    PUSH32(esp, 0xEu); /* 0x171A6842: push 0xe */
    ecx = ebx; /* 0x171A6844: mov ecx, ebx */
    RECOMP_CALL(sub_171A53AD); /* 0x171A6846: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x171A684B: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi), 0 */ /* 0x171A684E: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x171A6851: mov dword ptr [ebp - 4], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A68AE; /* 0x171A6854: jbe 0x171a68ae */
L_171A6856:
    goto L_171A685B; /* 0x171A6856: jmp 0x171a685b */
L_171A6858:
    esi = MEM32(ebp + 0x8); /* 0x171A6858: mov esi, dword ptr [ebp + 8] */
L_171A685B:
    /* test edi, edi */ /* 0x171A685B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6868; /* 0x171A685D: je 0x171a6868 */
L_171A685F:
    PUSH32(esp, 0x13u); /* 0x171A685F: push 0x13 */
    ecx = ebx; /* 0x171A6861: mov ecx, ebx */
    RECOMP_CALL(sub_171A53AD); /* 0x171A6863: call 0x171a53ad */
    RECOMP_FLAGS_IN();
L_171A6868:
    edi = MEM32(ebp + (-0x4)); /* 0x171A6868: mov edi, dword ptr [ebp - 4] */
    eax = MEM32(esi + 0xC); /* 0x171A686B: mov eax, dword ptr [esi + 0xc] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x171A686E: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x171A686E: shl edi, 2 */
    eax = MEM32(edi + eax); /* 0x171A6871: mov eax, dword ptr [edi + eax] */
    PUSH32(esp, MEM32(eax)); /* 0x171A6874: push dword ptr [eax] */
    ecx = ebx; /* 0x171A6876: mov ecx, ebx */
    RECOMP_CALL(sub_171A5D52); /* 0x171A6878: call 0x171a5d52 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x171A687D: mov eax, dword ptr [esi + 0xc] */
    eax = MEM32(eax + edi); /* 0x171A6880: mov eax, dword ptr [eax + edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171A6883: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 4); /* 0x171A6886: push 4 */
    ecx = POP32_VAL(esp); /* 0x171A6888: pop ecx */
    edi = 0x1700B4A4u; /* 0x171A6889: mov edi, 0x1700b4a4 */
    esi = eax; /* 0x171A688E: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171A6890: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171A6892: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171A689E; /* 0x171A6894: je 0x171a689e */
L_171A6896:
    PUSH32(esp, eax); /* 0x171A6896: push eax */
    ecx = ebx; /* 0x171A6897: mov ecx, ebx */
    RECOMP_CALL(sub_171A5D99); /* 0x171A6899: call 0x171a5d99 */
    RECOMP_FLAGS_IN();
L_171A689E:
    eax = MEM32(ebp + 0x8); /* 0x171A689E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A68A1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A68A3: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171A68A4: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0x4)); /* 0x171A68A7: mov ecx, dword ptr [ebp - 4] */
    /* cmp ecx, MEM32(eax) */ /* 0x171A68AA: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A6858; /* 0x171A68AC: jb 0x171a6858 */
L_171A68AE:
    PUSH32(esp, 0xFu); /* 0x171A68AE: push 0xf */
    ecx = ebx; /* 0x171A68B0: mov ecx, ebx */
    RECOMP_CALL(sub_171A53AD); /* 0x171A68B2: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xBu); /* 0x171A68B7: push 0xb */
    ecx = ebx; /* 0x171A68B9: mov ecx, ebx */
    RECOMP_CALL(sub_171A53AD); /* 0x171A68BB: call 0x171a53ad */
    RECOMP_FLAGS_IN();
L_171A68C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A68C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A68C2:
    edi = POP32_VAL(esp); /* 0x171A68C2: pop edi */
    esi = POP32_VAL(esp); /* 0x171A68C3: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A68C4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A68C5: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A68C6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A68CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A68CEu);

L_171A68CE:
    edi = edi; /* 0x171A68CE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A68D0: push ebp */
    ebp = esp; /* 0x171A68D1: mov ebp, esp */
    eax = MEM32(ecx + 0x40); /* 0x171A68D3: mov eax, dword ptr [ecx + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A68D6: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A68F8; /* 0x171A68D7: jne 0x171a68f8 */
L_171A68D9:
    eax = MEM32(ebp + 0x8); /* 0x171A68D9: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 2 */ /* 0x171A68DC: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A68EB; /* 0x171A68DF: jne 0x171a68eb */
L_171A68E1:
    PUSH32(esp, MEM32(ecx + 0x58)); /* 0x171A68E1: push dword ptr [ecx + 0x58] */
    RECOMP_CALL(sub_171A64F6); /* 0x171A68E4: call 0x171a64f6 */
    RECOMP_FLAGS_IN();
    goto L_171A68F8; /* 0x171A68E9: jmp 0x171a68f8 */
L_171A68EB:
    eax = (int32_t)(int8_t)MEM8(eax + 0x17023738); /* 0x171A68EB: movsx eax, byte ptr [eax + 0x17023738] */
    PUSH32(esp, eax); /* 0x171A68F2: push eax */
    RECOMP_CALL(sub_171A5366); /* 0x171A68F3: call 0x171a5366 */
    RECOMP_FLAGS_IN();
L_171A68F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A68F8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x171A68FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A68FB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A6903(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6903u);

L_171A6903:
    edi = edi; /* 0x171A6903: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6905: push ebp */
    ebp = esp; /* 0x171A6906: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171A6908: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171A690B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171A690C: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171A690F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x30), edx */ /* 0x171A6911: cmp dword ptr [ebx + 0x30], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x30)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171A6914: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x171A6917: mov dword ptr [ebp - 4], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A6923; /* 0x171A691A: je 0x171a6923 */
L_171A691C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A691C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A69EE; /* 0x171A691E: jmp 0x171a69ee */
L_171A6923:
    eax = ecx + 0xC; /* 0x171A6923: lea eax, [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x171A6926: push esi */
    MEM32(ebx + 0x30) = 1; /* 0x171A6927: mov dword ptr [ebx + 0x30], 1 */
    /* cmp MEM32(eax), edx */ /* 0x171A692E: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171A6930: push edi */
    MEM32(ebp + 0x8) = edx; /* 0x171A6931: mov dword ptr [ebp + 8], edx */
    MEM32(ebp + (-0xC)) = eax; /* 0x171A6934: mov dword ptr [ebp - 0xc], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A6961; /* 0x171A6937: jbe 0x171a6961 */
L_171A6939:
    eax = MEM32(ecx + 0x18); /* 0x171A6939: mov eax, dword ptr [ecx + 0x18] */
L_171A693C:
    edi = MEM32(eax); /* 0x171A693C: mov edi, dword ptr [eax] */
    PUSH32(esp, 4); /* 0x171A693E: push 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x171A6940: add edi, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x171A6943: pop ecx */
    esi = ebx + 0x8; /* 0x171A6944: lea esi, [ebx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171A6947: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171A6949: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171A69F3; /* 0x171A694B: je 0x171a69f3 */
L_171A6951:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x171A6951: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0xC)); /* 0x171A6954: mov ecx, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x171A6957: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171A695A: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ecx) */ /* 0x171A695D: cmp edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A693C; /* 0x171A695F: jb 0x171a693c */
L_171A6961:
    esi = MEM32(ebx + 0x1C); /* 0x171A6961: mov esi, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A6964: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x171A6966: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A6990; /* 0x171A6968: je 0x171a6990 */
L_171A696A:
    /* cmp MEM32(esi), edi */ /* 0x171A696A: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A6990; /* 0x171A696C: jbe 0x171a6990 */
L_171A696E:
    eax = MEM32(esi + 0xC); /* 0x171A696E: mov eax, dword ptr [esi + 0xc] */
    eax = MEM32(eax + edi * 4); /* 0x171A6971: mov eax, dword ptr [eax + edi*4] */
    eax = MEM32(eax + 0x8); /* 0x171A6974: mov eax, dword ptr [eax + 8] */
    /* test eax, eax */ /* 0x171A6977: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A698B; /* 0x171A6979: je 0x171a698b */
L_171A697B:
    ecx = MEM32(ebp + (-0x8)); /* 0x171A697B: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x171A697E: push eax */
    RECOMP_CALL(sub_171A6903); /* 0x171A697F: call 0x171a6903 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A6984: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x171A6986: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A69E5; /* 0x171A6989: jl 0x171a69e5 */
L_171A698B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A698B: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A698C: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A696E; /* 0x171A698E: jb 0x171a696e */
L_171A6990:
    esi = MEM32(ebx + 0x20); /* 0x171A6990: mov esi, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A6993: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x171A6995: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A69D1; /* 0x171A6997: je 0x171a69d1 */
L_171A6999:
    /* cmp MEM32(esi), edi */ /* 0x171A6999: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A69D1; /* 0x171A699B: jbe 0x171a69d1 */
L_171A699D:
    eax = MEM32(esi + 0xC); /* 0x171A699D: mov eax, dword ptr [esi + 0xc] */
    eax = MEM32(eax + edi * 4); /* 0x171A69A0: mov eax, dword ptr [eax + edi*4] */
    ecx = ebp + 0x8; /* 0x171A69A3: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x171A69A6: push ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x171A69A7: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171A69AA: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171A69AD: push eax */
    RECOMP_CALL(sub_171A5E51); /* 0x171A69AE: call 0x171a5e51 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A69B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x171A69B5: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A69E5; /* 0x171A69B8: jl 0x171a69e5 */
L_171A69BA:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A69BA: push dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x8)); /* 0x171A69BD: mov ecx, dword ptr [ebp - 8] */
    RECOMP_CALL(sub_171A6903); /* 0x171A69C0: call 0x171a6903 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A69C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x171A69C7: mov dword ptr [ebp - 4], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A69E5; /* 0x171A69CA: jl 0x171a69e5 */
L_171A69CC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A69CC: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A69CD: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A699D; /* 0x171A69CF: jb 0x171a699d */
L_171A69D1:
    ecx = MEM32(ebp + (-0xC)); /* 0x171A69D1: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, ebx); /* 0x171A69D4: push ebx */
    RECOMP_CALL(sub_171A96E9); /* 0x171A69D5: call 0x171a96e9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A69DA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A69E5; /* 0x171A69DC: jne 0x171a69e5 */
L_171A69DE:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x171A69DE: mov dword ptr [ebp - 4], 0x8007000e */
L_171A69E5:
    _flag_a = (uint32_t)(MEM32(ebx + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) & 0; /* 0x171A69E5: and dword ptr [ebx + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x4)); /* 0x171A69E9: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171A69EC: pop edi */
    esi = POP32_VAL(esp); /* 0x171A69ED: pop esi */
L_171A69EE:
    ebx = POP32_VAL(esp); /* 0x171A69EE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A69EF: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A69F0: ret 4 */
L_171A69F3:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171A69F3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171A69E5; /* 0x171A69F7: jmp 0x171a69e5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A69FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A69FEu);

L_171A69FE:
    edi = edi; /* 0x171A69FE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6A00: push ebp */
    ebp = esp; /* 0x171A6A01: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171A6A03: push ebx */
    PUSH32(esp, esi); /* 0x171A6A04: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171A6A05: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171A6A08: push edi */
    edi = ecx; /* 0x171A6A09: mov edi, ecx */
    ecx = esi; /* 0x171A6A0B: mov ecx, esi */
    RECOMP_CALL(sub_171A93F2); /* 0x171A6A0D: call 0x171a93f2 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A6A12: mov ebx, eax */
    /* test ebx, ebx */ /* 0x171A6A14: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x171A6A16: mov eax, dword ptr [esi] */
    esi = MEM32(esi + 0xC); /* 0x171A6A18: mov esi, dword ptr [esi + 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x171A6A1B: mov dword ptr [ebp + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6B8B; /* 0x171A6A1E: je 0x171a6b8b */
L_171A6A24:
    eax = MEM32(edi + 0x40); /* 0x171A6A24: mov eax, dword ptr [edi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171A6A27: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A6ADB; /* 0x171A6A2A: je 0x171a6adb */
L_171A6A30:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A6A30: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A6B0E; /* 0x171A6A31: jne 0x171a6b0e */
L_171A6A37:
    PUSH32(esp, MEM32(edi + 0x58)); /* 0x171A6A37: push dword ptr [edi + 0x58] */
    ecx = edi; /* 0x171A6A3A: mov ecx, edi */
    RECOMP_CALL(sub_171A64F6); /* 0x171A6A3C: call 0x171a64f6 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x171A6A41: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A6A68; /* 0x171A6A43: jne 0x171a6a68 */
L_171A6A45:
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x171A6A45: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A6A5E; /* 0x171A6A48: je 0x171a6a5e */
L_171A6A4A:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A6A4A: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171A6A4D: push ebx */
    PUSH32(esp, 0x17023958u); /* 0x171A6A4E: push 0x17023958 */
    PUSH32(esp, edi); /* 0x171A6A53: push edi */
    RECOMP_CALL(sub_171A5DE5); /* 0x171A6A54: call 0x171a5de5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x171A6A59: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_171A6ACD; /* 0x171A6A5C: jmp 0x171a6acd */
L_171A6A5E:
    PUSH32(esp, ebx); /* 0x171A6A5E: push ebx */
    ecx = edi; /* 0x171A6A5F: mov ecx, edi */
    RECOMP_CALL(sub_171A5334); /* 0x171A6A61: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    goto L_171A6ACD; /* 0x171A6A66: jmp 0x171a6acd */
L_171A6A68:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A6A68: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171A6A6B: push ebx */
    PUSH32(esp, 0x1702394Cu); /* 0x171A6A6C: push 0x1702394c */
    PUSH32(esp, edi); /* 0x171A6A71: push edi */
    RECOMP_CALL(sub_171A5DE5); /* 0x171A6A72: call 0x171a5de5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A6A77: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x171A6A79: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), ebx */ /* 0x171A6A7C: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A6ACD; /* 0x171A6A7E: jbe 0x171a6acd */
L_171A6A80:
    PUSH32(esp, 0x17007F6Cu); /* 0x171A6A80: push 0x17007f6c */
    ecx = edi; /* 0x171A6A85: mov ecx, edi */
    RECOMP_CALL(sub_171A5334); /* 0x171A6A87: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x171A6A8C: mov eax, dword ptr [esi + 0xc] */
    eax = MEM32(eax + ebx * 4); /* 0x171A6A8F: mov eax, dword ptr [eax + ebx*4] */
    ecx = MEM32(eax); /* 0x171A6A92: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x171A6A94: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6AA9; /* 0x171A6A96: je 0x171a6aa9 */
L_171A6A98:
    PUSH32(esp, ecx); /* 0x171A6A98: push ecx */
    PUSH32(esp, 0x17008454u); /* 0x171A6A99: push 0x17008454 */
    PUSH32(esp, edi); /* 0x171A6A9E: push edi */
    RECOMP_CALL(sub_171A5DE5); /* 0x171A6A9F: call 0x171a5de5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171A6AA4: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_171A6ABC; /* 0x171A6AA7: jmp 0x171a6abc */
L_171A6AA9:
    eax = MEM32(eax + 0x4); /* 0x171A6AA9: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x171A6AAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6B8B; /* 0x171A6AAE: je 0x171a6b8b */
L_171A6AB4:
    PUSH32(esp, eax); /* 0x171A6AB4: push eax */
    ecx = edi; /* 0x171A6AB5: mov ecx, edi */
    RECOMP_CALL(sub_171A5334); /* 0x171A6AB7: call 0x171a5334 */
    RECOMP_FLAGS_IN();
L_171A6ABC:
    PUSH32(esp, 0x17007F68u); /* 0x171A6ABC: push 0x17007f68 */
    ecx = edi; /* 0x171A6AC1: mov ecx, edi */
    RECOMP_CALL(sub_171A5334); /* 0x171A6AC3: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171A6AC8: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(esi) */ /* 0x171A6AC9: cmp ebx, dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A6A80; /* 0x171A6ACB: jb 0x171a6a80 */
L_171A6ACD:
    PUSH32(esp, 0x1702188Cu); /* 0x171A6ACD: push 0x1702188c */
    ecx = edi; /* 0x171A6AD2: mov ecx, edi */
    RECOMP_CALL(sub_171A5334); /* 0x171A6AD4: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    goto L_171A6B0E; /* 0x171A6AD9: jmp 0x171a6b0e */
L_171A6ADB:
    /* test esi, esi */ /* 0x171A6ADB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x171A6ADD: mov ecx, edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A6B17; /* 0x171A6ADF: jne 0x171a6b17 */
L_171A6AE1:
    PUSH32(esp, ebx); /* 0x171A6AE1: push ebx */
    RECOMP_CALL(sub_171A52EA); /* 0x171A6AE2: call 0x171a52ea */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A6AE7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x171A6AE9: mov ecx, edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6AF5; /* 0x171A6AEB: je 0x171a6af5 */
L_171A6AED:
    PUSH32(esp, eax); /* 0x171A6AED: push eax */
    RECOMP_CALL(sub_171A53AD); /* 0x171A6AEE: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    goto L_171A6AFB; /* 0x171A6AF3: jmp 0x171a6afb */
L_171A6AF5:
    PUSH32(esp, ebx); /* 0x171A6AF5: push ebx */
    RECOMP_CALL(sub_171A5D52); /* 0x171A6AF6: call 0x171a5d52 */
    RECOMP_FLAGS_IN();
L_171A6AFB:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A6AFB: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x171A6AFE: mov ecx, edi */
    RECOMP_CALL(sub_171A5D52); /* 0x171A6B00: call 0x171a5d52 */
    RECOMP_FLAGS_IN();
L_171A6B05:
    PUSH32(esp, 0x14u); /* 0x171A6B05: push 0x14 */
    ecx = edi; /* 0x171A6B07: mov ecx, edi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A6B09: call 0x171a53ad */
    RECOMP_FLAGS_IN();
L_171A6B0E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A6B0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A6B10:
    edi = POP32_VAL(esp); /* 0x171A6B10: pop edi */
    esi = POP32_VAL(esp); /* 0x171A6B11: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A6B12: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A6B13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A6B14: ret 4 */
L_171A6B17:
    PUSH32(esp, 0x34u); /* 0x171A6B17: push 0x34 */
    RECOMP_CALL(sub_171A53AD); /* 0x171A6B19: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x171A6B1E: push ebx */
    ecx = edi; /* 0x171A6B1F: mov ecx, edi */
    RECOMP_CALL(sub_171A52EA); /* 0x171A6B21: call 0x171a52ea */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A6B26: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x171A6B28: mov ecx, edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6B34; /* 0x171A6B2A: je 0x171a6b34 */
L_171A6B2C:
    PUSH32(esp, eax); /* 0x171A6B2C: push eax */
    RECOMP_CALL(sub_171A53AD); /* 0x171A6B2D: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    goto L_171A6B3A; /* 0x171A6B32: jmp 0x171a6b3a */
L_171A6B34:
    PUSH32(esp, ebx); /* 0x171A6B34: push ebx */
    RECOMP_CALL(sub_171A5D52); /* 0x171A6B35: call 0x171a5d52 */
    RECOMP_FLAGS_IN();
L_171A6B3A:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A6B3A: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x171A6B3D: mov ecx, edi */
    RECOMP_CALL(sub_171A5D52); /* 0x171A6B3F: call 0x171a5d52 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A6B44: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), ebx */ /* 0x171A6B46: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A6B05; /* 0x171A6B48: jbe 0x171a6b05 */
L_171A6B4A:
    PUSH32(esp, 0xEu); /* 0x171A6B4A: push 0xe */
    ecx = edi; /* 0x171A6B4C: mov ecx, edi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A6B4E: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x171A6B53: mov eax, dword ptr [esi + 0xc] */
    eax = MEM32(eax + ebx * 4); /* 0x171A6B56: mov eax, dword ptr [eax + ebx*4] */
    ecx = MEM32(eax); /* 0x171A6B59: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x171A6B5B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6B69; /* 0x171A6B5D: je 0x171a6b69 */
L_171A6B5F:
    PUSH32(esp, ecx); /* 0x171A6B5F: push ecx */
    ecx = edi; /* 0x171A6B60: mov ecx, edi */
    RECOMP_CALL(sub_171A5D2F); /* 0x171A6B62: call 0x171a5d2f */
    RECOMP_FLAGS_IN();
    goto L_171A6B78; /* 0x171A6B67: jmp 0x171a6b78 */
L_171A6B69:
    eax = MEM32(eax + 0x4); /* 0x171A6B69: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x171A6B6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6B8B; /* 0x171A6B6E: je 0x171a6b8b */
L_171A6B70:
    PUSH32(esp, eax); /* 0x171A6B70: push eax */
    ecx = edi; /* 0x171A6B71: mov ecx, edi */
    RECOMP_CALL(sub_171A5D52); /* 0x171A6B73: call 0x171a5d52 */
    RECOMP_FLAGS_IN();
L_171A6B78:
    PUSH32(esp, 0xFu); /* 0x171A6B78: push 0xf */
    ecx = edi; /* 0x171A6B7A: mov ecx, edi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A6B7C: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171A6B81: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(esi) */ /* 0x171A6B82: cmp ebx, dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A6B4A; /* 0x171A6B84: jb 0x171a6b4a */
L_171A6B86:
    RECOMP_BACKEDGE();
    goto L_171A6B05; /* 0x171A6B86: jmp 0x171a6b05 */
L_171A6B8B:
    eax = 0x88760385u; /* 0x171A6B8B: mov eax, 0x88760385 */
    RECOMP_BACKEDGE();
    goto L_171A6B10; /* 0x171A6B90: jmp 0x171a6b10 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A6B9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6B9Au);

L_171A6B9A:
    edi = edi; /* 0x171A6B9A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6B9C: push ebp */
    ebp = esp; /* 0x171A6B9D: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171A6B9F: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A6BA2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171A6BA4: push esi */
    esi = ecx; /* 0x171A6BA5: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171A6BA7: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi) = 0x17023960u; /* 0x171A6BAA: mov dword ptr [esi], 0x17023960 */
    MEM32(esi + 0x4) = 1; /* 0x171A6BB0: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = ecx; /* 0x171A6BB7: mov dword ptr [esi + 8], ecx */
    MEM32(esi + 0x10) = eax; /* 0x171A6BBA: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x14) = eax; /* 0x171A6BBD: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x1C) = eax; /* 0x171A6BC0: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x18) = 0x64u; /* 0x171A6BC3: mov dword ptr [esi + 0x18], 0x64 */
    MEM32(esi + 0x20) = eax; /* 0x171A6BCA: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x24) = eax; /* 0x171A6BCD: mov dword ptr [esi + 0x24], eax */
    MEM32(esi + 0x2C) = eax; /* 0x171A6BD0: mov dword ptr [esi + 0x2c], eax */
    MEM32(esi + 0x28) = 0xAu; /* 0x171A6BD3: mov dword ptr [esi + 0x28], 0xa */
    _flag_a = (uint32_t)((MEM32(esi + 0x38) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x38) | 0xFFFFFFFFu));
    MEM32(esi + 0x38) = MEM32(esi + 0x38) | 0xFFFFFFFFu; /* 0x171A6BDA: or dword ptr [esi + 0x38], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x40) = eax; /* 0x171A6BDE: mov dword ptr [esi + 0x40], eax */
    MEM32(esi + 0x44) = eax; /* 0x171A6BE1: mov dword ptr [esi + 0x44], eax */
    SET_LO8(eax, MEM8(ebp + 0x18)); /* 0x171A6BE4: mov al, byte ptr [ebp + 0x18] */
    MEM32(esi + 0x30) = edx; /* 0x171A6BE7: mov dword ptr [esi + 0x30], edx */
    edx = MEM32(ebp + 0x14); /* 0x171A6BEA: mov edx, dword ptr [ebp + 0x14] */
    MEM8(esi + 0x48) = (uint8_t)(LO8(eax)); /* 0x171A6BED: mov byte ptr [esi + 0x48], al */
    eax = MEM32(ebp + 0xC); /* 0x171A6BF0: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x34) = edx; /* 0x171A6BF3: mov dword ptr [esi + 0x34], edx */
    MEM32(esi + 0xC) = eax; /* 0x171A6BF6: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ecx); /* 0x171A6BF9: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171A6BFB: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171A6BFC: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A6BFF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A6C01: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A6C02: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171A6C03: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171A6C0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6C0Bu);

L_171A6C0B:
    edi = edi; /* 0x171A6C0B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6C0D: push ebp */
    ebp = esp; /* 0x171A6C0E: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171A6C10: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A6C13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171A6C15: push esi */
    esi = ecx; /* 0x171A6C16: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171A6C18: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi) = 0x17023960u; /* 0x171A6C1B: mov dword ptr [esi], 0x17023960 */
    MEM32(esi + 0x4) = 1; /* 0x171A6C21: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = ecx; /* 0x171A6C28: mov dword ptr [esi + 8], ecx */
    MEM32(esi + 0x10) = eax; /* 0x171A6C2B: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x14) = eax; /* 0x171A6C2E: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x1C) = eax; /* 0x171A6C31: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x18) = 0x64u; /* 0x171A6C34: mov dword ptr [esi + 0x18], 0x64 */
    MEM32(esi + 0x20) = eax; /* 0x171A6C3B: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x24) = eax; /* 0x171A6C3E: mov dword ptr [esi + 0x24], eax */
    MEM32(esi + 0x2C) = eax; /* 0x171A6C41: mov dword ptr [esi + 0x2c], eax */
    MEM32(esi + 0x28) = 0xAu; /* 0x171A6C44: mov dword ptr [esi + 0x28], 0xa */
    _flag_a = (uint32_t)((MEM32(esi + 0x38) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x38) | 0xFFFFFFFFu));
    MEM32(esi + 0x38) = MEM32(esi + 0x38) | 0xFFFFFFFFu; /* 0x171A6C4B: or dword ptr [esi + 0x38], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x40) = eax; /* 0x171A6C4F: mov dword ptr [esi + 0x40], eax */
    MEM32(esi + 0x44) = eax; /* 0x171A6C52: mov dword ptr [esi + 0x44], eax */
    SET_LO8(eax, MEM8(ebp + 0x18)); /* 0x171A6C55: mov al, byte ptr [ebp + 0x18] */
    _flag_a = (uint32_t)((LO8(eax) | 0x40u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x40u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x40u); /* 0x171A6C58: or al, 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x30) = edx; /* 0x171A6C5A: mov dword ptr [esi + 0x30], edx */
    edx = MEM32(ebp + 0x14); /* 0x171A6C5D: mov edx, dword ptr [ebp + 0x14] */
    MEM8(esi + 0x48) = (uint8_t)(LO8(eax)); /* 0x171A6C60: mov byte ptr [esi + 0x48], al */
    eax = MEM32(ebp + 0xC); /* 0x171A6C63: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x34) = edx; /* 0x171A6C66: mov dword ptr [esi + 0x34], edx */
    MEM32(esi + 0xC) = eax; /* 0x171A6C69: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ecx); /* 0x171A6C6C: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171A6C6E: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171A6C6F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A6C72: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A6C74: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A6C75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171A6C76: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171A6C7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6C7Eu);

L_171A6C7E:
    edi = edi; /* 0x171A6C7E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6C80: push ebp */
    ebp = esp; /* 0x171A6C81: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171A6C83: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A6C86: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171A6C88: push esi */
    esi = ecx; /* 0x171A6C89: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171A6C8B: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi) = 0x17023960u; /* 0x171A6C8E: mov dword ptr [esi], 0x17023960 */
    MEM32(esi + 0x4) = 1; /* 0x171A6C94: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = ecx; /* 0x171A6C9B: mov dword ptr [esi + 8], ecx */
    MEM32(esi + 0x10) = eax; /* 0x171A6C9E: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x14) = eax; /* 0x171A6CA1: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x1C) = eax; /* 0x171A6CA4: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x18) = 0x64u; /* 0x171A6CA7: mov dword ptr [esi + 0x18], 0x64 */
    MEM32(esi + 0x20) = eax; /* 0x171A6CAE: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x24) = eax; /* 0x171A6CB1: mov dword ptr [esi + 0x24], eax */
    MEM32(esi + 0x2C) = eax; /* 0x171A6CB4: mov dword ptr [esi + 0x2c], eax */
    MEM32(esi + 0x28) = 0xAu; /* 0x171A6CB7: mov dword ptr [esi + 0x28], 0xa */
    MEM32(esi + 0x30) = edx; /* 0x171A6CBE: mov dword ptr [esi + 0x30], edx */
    edx = MEM32(ebp + 0x14); /* 0x171A6CC1: mov edx, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x40) = eax; /* 0x171A6CC4: mov dword ptr [esi + 0x40], eax */
    MEM32(esi + 0x44) = eax; /* 0x171A6CC7: mov dword ptr [esi + 0x44], eax */
    SET_LO8(eax, MEM8(ebp + 0x1C)); /* 0x171A6CCA: mov al, byte ptr [ebp + 0x1c] */
    MEM32(esi + 0x34) = edx; /* 0x171A6CCD: mov dword ptr [esi + 0x34], edx */
    edx = MEM32(ebp + 0x18); /* 0x171A6CD0: mov edx, dword ptr [ebp + 0x18] */
    MEM8(esi + 0x48) = (uint8_t)(LO8(eax)); /* 0x171A6CD3: mov byte ptr [esi + 0x48], al */
    eax = MEM32(ebp + 0xC); /* 0x171A6CD6: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x38) = edx; /* 0x171A6CD9: mov dword ptr [esi + 0x38], edx */
    MEM32(esi + 0xC) = eax; /* 0x171A6CDC: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ecx); /* 0x171A6CDF: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171A6CE1: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171A6CE2: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A6CE5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A6CE7: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A6CE8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x171A6CE9: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_171A6CF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6CF1u);

L_171A6CF1:
    edi = edi; /* 0x171A6CF1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6CF3: push ebp */
    ebp = esp; /* 0x171A6CF4: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171A6CF6: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A6CF9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171A6CFB: push esi */
    esi = ecx; /* 0x171A6CFC: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171A6CFE: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi) = 0x17023960u; /* 0x171A6D01: mov dword ptr [esi], 0x17023960 */
    MEM32(esi + 0x4) = 1; /* 0x171A6D07: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = ecx; /* 0x171A6D0E: mov dword ptr [esi + 8], ecx */
    MEM32(esi + 0x10) = eax; /* 0x171A6D11: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x14) = eax; /* 0x171A6D14: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x1C) = eax; /* 0x171A6D17: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x18) = 0x64u; /* 0x171A6D1A: mov dword ptr [esi + 0x18], 0x64 */
    MEM32(esi + 0x20) = eax; /* 0x171A6D21: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x24) = eax; /* 0x171A6D24: mov dword ptr [esi + 0x24], eax */
    MEM32(esi + 0x2C) = eax; /* 0x171A6D27: mov dword ptr [esi + 0x2c], eax */
    MEM32(esi + 0x28) = 0xAu; /* 0x171A6D2A: mov dword ptr [esi + 0x28], 0xa */
    MEM32(esi + 0x40) = eax; /* 0x171A6D31: mov dword ptr [esi + 0x40], eax */
    MEM32(esi + 0x44) = eax; /* 0x171A6D34: mov dword ptr [esi + 0x44], eax */
    SET_LO8(eax, MEM8(ebp + 0x1C)); /* 0x171A6D37: mov al, byte ptr [ebp + 0x1c] */
    MEM32(esi + 0x30) = edx; /* 0x171A6D3A: mov dword ptr [esi + 0x30], edx */
    edx = MEM32(ebp + 0x14); /* 0x171A6D3D: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((LO8(eax) | 0x40u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x40u)) << 24;
    SET_LO8(eax, LO8(eax) | 0x40u); /* 0x171A6D40: or al, 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x34) = edx; /* 0x171A6D42: mov dword ptr [esi + 0x34], edx */
    edx = MEM32(ebp + 0x18); /* 0x171A6D45: mov edx, dword ptr [ebp + 0x18] */
    MEM8(esi + 0x48) = (uint8_t)(LO8(eax)); /* 0x171A6D48: mov byte ptr [esi + 0x48], al */
    eax = MEM32(ebp + 0xC); /* 0x171A6D4B: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x38) = edx; /* 0x171A6D4E: mov dword ptr [esi + 0x38], edx */
    MEM32(esi + 0xC) = eax; /* 0x171A6D51: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ecx); /* 0x171A6D54: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171A6D56: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171A6D57: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A6D5A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A6D5C: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A6D5D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x171A6D5E: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_171A6D66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6D66u);

L_171A6D66:
    edi = edi; /* 0x171A6D66: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6D68: push ebp */
    ebp = esp; /* 0x171A6D69: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x218u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x218u; /* 0x171A6D6B: sub esp, 0x218 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171A6D71: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A6D76: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x171A6D79: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171A6D7C: push ebx */
    MEM32(ebp + (-0x214)) = eax; /* 0x171A6D7D: mov dword ptr [ebp - 0x214], eax */
    eax = MEM32(ebp + 0x14); /* 0x171A6D83: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x171A6D86: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171A6D87: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x218)) = eax; /* 0x171A6D8A: mov dword ptr [ebp - 0x218], eax */
    eax = esi; /* 0x171A6D90: mov eax, esi */
    PUSH32(esp, edi); /* 0x171A6D92: push edi */
    MEM32(ebp + (-0x210)) = esi; /* 0x171A6D93: mov dword ptr [ebp - 0x210], esi */
    edi = eax + 0x1; /* 0x171A6D99: lea edi, [eax + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A6D9C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A6D9E:
    SET_LO8(ecx, MEM8(eax)); /* 0x171A6D9E: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A6DA0: inc eax */
    _flag_k = FK_INC;
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x171A6DA1: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A6D9E; /* 0x171A6DA3: jne 0x171a6d9e */
L_171A6DA5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171A6DA5: sub eax, edi */
    _flag_k = FK_CMP;
    edi = eax + 0x1; /* 0x171A6DA7: lea edi, [eax + 1] */
    PUSH32(esp, edi); /* 0x171A6DAA: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x171A6DAB: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171A6DB0: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A6DB2: pop ecx */
    MEM32(ebp + (-0x20C)) = eax; /* 0x171A6DB3: mov dword ptr [ebp - 0x20c], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A6DC5; /* 0x171A6DB9: jne 0x171a6dc5 */
L_171A6DBB:
    eax = 0x8007000Eu; /* 0x171A6DBB: mov eax, 0x8007000e */
    goto L_171A6EC7; /* 0x171A6DC0: jmp 0x171a6ec7 */
L_171A6DC5:
    ecx = edi; /* 0x171A6DC5: mov ecx, edi */
    edi = eax; /* 0x171A6DC7: mov edi, eax */
    eax = ecx; /* 0x171A6DC9: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171A6DCB: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171A6DCB: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171A6DCE: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x171A6DD0: push ebx */
    PUSH32(esp, 0x08000080u); /* 0x171A6DD1: push 0x8000080 */
    PUSH32(esp, 2); /* 0x171A6DD6: push 2 */
    PUSH32(esp, ebx); /* 0x171A6DD8: push ebx */
    PUSH32(esp, ebx); /* 0x171A6DD9: push ebx */
    ecx = eax; /* 0x171A6DDA: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171A6DDC: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x40000000u); /* 0x171A6DDF: push 0x40000000 */
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x171A6DE4: push dword ptr [ebp - 0x210] */
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171A6DEA: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(0x170010F0); /* 0x171A6DEC: mov esi, dword ptr [0x170010f0] */
    RECOMP_ICALL(esi); /* 0x171A6DF2: call esi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A6DF4: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x208)) = eax; /* 0x171A6DF7: mov dword ptr [ebp - 0x208], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A6E09; /* 0x171A6DFD: jne 0x171a6e09 */
L_171A6DFF:
    esi = 0x8876038Fu; /* 0x171A6DFF: mov esi, 0x8876038f */
    goto L_171A6EB9; /* 0x171A6E04: jmp 0x171a6eb9 */
L_171A6E09:
    eax = ebp + (-0x200); /* 0x171A6E09: lea eax, [ebp - 0x200] */
    PUSH32(esp, eax); /* 0x171A6E0F: push eax */
    PUSH32(esp, 0xF6u); /* 0x171A6E10: push 0xf6 */
    RECOMP_ICALL(MEM32(0x170010E8)); /* 0x171A6E15: call dword ptr [0x170010e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A6E1B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6E9C; /* 0x171A6E1D: je 0x171a6e9c */
L_171A6E1F:
    eax = ebp + (-0x108); /* 0x171A6E1F: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171A6E25: push eax */
    PUSH32(esp, ebx); /* 0x171A6E26: push ebx */
    PUSH32(esp, 0x1702397Cu); /* 0x171A6E27: push 0x1702397c */
    eax = ebp + (-0x200); /* 0x171A6E2C: lea eax, [ebp - 0x200] */
    PUSH32(esp, eax); /* 0x171A6E32: push eax */
    RECOMP_ICALL(MEM32(0x170010EC)); /* 0x171A6E33: call dword ptr [0x170010ec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A6E39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6E9C; /* 0x171A6E3B: je 0x171a6e9c */
L_171A6E3D:
    PUSH32(esp, ebx); /* 0x171A6E3D: push ebx */
    PUSH32(esp, 0x0C000100u); /* 0x171A6E3E: push 0xc000100 */
    PUSH32(esp, 2); /* 0x171A6E43: push 2 */
    PUSH32(esp, ebx); /* 0x171A6E45: push ebx */
    PUSH32(esp, ebx); /* 0x171A6E46: push ebx */
    edi = 0xC0000000u; /* 0x171A6E47: mov edi, 0xc0000000 */
    PUSH32(esp, edi); /* 0x171A6E4C: push edi */
    eax = ebp + (-0x108); /* 0x171A6E4D: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171A6E53: push eax */
    RECOMP_ICALL(esi); /* 0x171A6E54: call esi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A6E56: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x204)) = eax; /* 0x171A6E59: mov dword ptr [ebp - 0x204], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A6E68; /* 0x171A6E5F: jne 0x171a6e68 */
L_171A6E61:
    esi = 0x88760395u; /* 0x171A6E61: mov esi, 0x88760395 */
    goto L_171A6EA1; /* 0x171A6E66: jmp 0x171a6ea1 */
L_171A6E68:
    /* test MEM8(ebp + 0x10), 2 */ /* 0x171A6E68: test byte ptr [ebp + 0x10], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A6F5E; /* 0x171A6E6C: je 0x171a6f5e */
L_171A6E72:
    eax = ebp + (-0x108); /* 0x171A6E72: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171A6E78: push eax */
    PUSH32(esp, ebx); /* 0x171A6E79: push ebx */
    PUSH32(esp, 0x1702397Cu); /* 0x171A6E7A: push 0x1702397c */
    eax = ebp + (-0x200); /* 0x171A6E7F: lea eax, [ebp - 0x200] */
    PUSH32(esp, eax); /* 0x171A6E85: push eax */
    RECOMP_ICALL(MEM32(0x170010EC)); /* 0x171A6E86: call dword ptr [0x170010ec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A6E8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A6ED6; /* 0x171A6E8E: jne 0x171a6ed6 */
L_171A6E90:
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x171A6E90: push dword ptr [ebp - 0x204] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A6E96: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
L_171A6E9C:
    esi = 0x80004005u; /* 0x171A6E9C: mov esi, 0x80004005 */
L_171A6EA1:
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x171A6EA1: push dword ptr [ebp - 0x208] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A6EA7: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
L_171A6EAD:
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x171A6EAD: push dword ptr [ebp - 0x210] */
    RECOMP_ICALL(MEM32(0x170010FC)); /* 0x171A6EB3: call dword ptr [0x170010fc] */
    RECOMP_FLAGS_IN();
L_171A6EB9:
    PUSH32(esp, MEM32(ebp + (-0x20C))); /* 0x171A6EB9: push dword ptr [ebp - 0x20c] */
    RECOMP_CALL(sub_1721B010); /* 0x171A6EBF: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A6EC4: pop ecx */
    eax = esi; /* 0x171A6EC5: mov eax, esi */
L_171A6EC7:
    ecx = MEM32(ebp + (-0x4)); /* 0x171A6EC7: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171A6ECA: pop edi */
    esi = POP32_VAL(esp); /* 0x171A6ECB: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A6ECC: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171A6ECD: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A6ED2: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A6ED3: ret 0x10 */
L_171A6ED6:
    PUSH32(esp, ebx); /* 0x171A6ED6: push ebx */
    PUSH32(esp, 0x0C000100u); /* 0x171A6ED7: push 0xc000100 */
    PUSH32(esp, 2); /* 0x171A6EDC: push 2 */
    PUSH32(esp, ebx); /* 0x171A6EDE: push ebx */
    PUSH32(esp, ebx); /* 0x171A6EDF: push ebx */
    PUSH32(esp, edi); /* 0x171A6EE0: push edi */
    eax = ebp + (-0x108); /* 0x171A6EE1: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171A6EE7: push eax */
    RECOMP_ICALL(esi); /* 0x171A6EE8: call esi */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A6EEA: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x171A6EEC: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A6F02; /* 0x171A6EEF: jne 0x171a6f02 */
L_171A6EF1:
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x171A6EF1: push dword ptr [ebp - 0x204] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A6EF7: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171A6E61; /* 0x171A6EFD: jmp 0x171a6e61 */
L_171A6F02:
    PUSH32(esp, 0x50u); /* 0x171A6F02: push 0x50 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A6F04: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171A6F09: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A6F0B: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A6F35; /* 0x171A6F0C: je 0x171a6f35 */
L_171A6F0E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A6F0E: push dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x171A6F11: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x171A6F13: push dword ptr [ebp - 0x208] */
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x171A6F19: push dword ptr [ebp - 0x204] */
    PUSH32(esp, edi); /* 0x171A6F1F: push edi */
    PUSH32(esp, MEM32(ebp + (-0x20C))); /* 0x171A6F20: push dword ptr [ebp - 0x20c] */
    PUSH32(esp, MEM32(ebp + (-0x214))); /* 0x171A6F26: push dword ptr [ebp - 0x214] */
    RECOMP_CALL(sub_171A6C7E); /* 0x171A6F2C: call 0x171a6c7e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A6F31: mov esi, eax */
    goto L_171A6F37; /* 0x171A6F33: jmp 0x171a6f37 */
L_171A6F35:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A6F35: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A6F37:
    /* cmp esi, ebx */ /* 0x171A6F37: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A6F9E; /* 0x171A6F39: jne 0x171a6f9e */
L_171A6F3B:
    esi = MEM32(0x170010F8); /* 0x171A6F3B: mov esi, dword ptr [0x170010f8] */
    PUSH32(esp, edi); /* 0x171A6F41: push edi */
    RECOMP_ICALL(esi); /* 0x171A6F42: call esi */
    RECOMP_FLAGS_IN();
L_171A6F44:
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x171A6F44: push dword ptr [ebp - 0x208] */
    RECOMP_ICALL(esi); /* 0x171A6F4A: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x171A6F4C: push dword ptr [ebp - 0x204] */
    RECOMP_ICALL(esi); /* 0x171A6F52: call esi */
    RECOMP_FLAGS_IN();
    esi = 0x8007000Eu; /* 0x171A6F54: mov esi, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_171A6EAD; /* 0x171A6F59: jmp 0x171a6ead */
L_171A6F5E:
    PUSH32(esp, 0x50u); /* 0x171A6F5E: push 0x50 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A6F60: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171A6F65: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A6F67: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A6F90; /* 0x171A6F68: je 0x171a6f90 */
L_171A6F6A:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A6F6A: push dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x171A6F6D: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x171A6F6F: push dword ptr [ebp - 0x204] */
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x171A6F75: push dword ptr [ebp - 0x208] */
    PUSH32(esp, MEM32(ebp + (-0x20C))); /* 0x171A6F7B: push dword ptr [ebp - 0x20c] */
    PUSH32(esp, MEM32(ebp + (-0x214))); /* 0x171A6F81: push dword ptr [ebp - 0x214] */
    RECOMP_CALL(sub_171A6B9A); /* 0x171A6F87: call 0x171a6b9a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A6F8C: mov esi, eax */
    goto L_171A6F92; /* 0x171A6F8E: jmp 0x171a6f92 */
L_171A6F90:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A6F90: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A6F92:
    /* cmp esi, ebx */ /* 0x171A6F92: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A6F9E; /* 0x171A6F94: jne 0x171a6f9e */
L_171A6F96:
    esi = MEM32(0x170010F8); /* 0x171A6F96: mov esi, dword ptr [0x170010f8] */
    RECOMP_BACKEDGE();
    goto L_171A6F44; /* 0x171A6F9C: jmp 0x171a6f44 */
L_171A6F9E:
    ecx = esi; /* 0x171A6F9E: mov ecx, esi */
    RECOMP_CALL(sub_171A53D1); /* 0x171A6FA0: call 0x171a53d1 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A6FA5: mov edi, eax */
    /* cmp edi, ebx */ /* 0x171A6FA7: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171A6FCB; /* 0x171A6FA9: jge 0x171a6fcb */
L_171A6FAB:
    /* cmp esi, ebx */ /* 0x171A6FAB: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A6FB8; /* 0x171A6FAD: je 0x171a6fb8 */
L_171A6FAF:
    eax = MEM32(esi); /* 0x171A6FAF: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171A6FB1: push 1 */
    ecx = esi; /* 0x171A6FB3: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x171A6FB5: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
L_171A6FB8:
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x171A6FB8: push dword ptr [ebp - 0x210] */
    RECOMP_ICALL(MEM32(0x170010FC)); /* 0x171A6FBE: call dword ptr [0x170010fc] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x171A6FC4: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_171A6EC7; /* 0x171A6FC6: jmp 0x171a6ec7 */
L_171A6FCB:
    eax = MEM32(ebp + (-0x218)); /* 0x171A6FCB: mov eax, dword ptr [ebp - 0x218] */
    MEM32(eax) = esi; /* 0x171A6FD1: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A6FD3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171A6EC7; /* 0x171A6FD5: jmp 0x171a6ec7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A6FDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A6FDFu);

L_171A6FDF:
    edi = edi; /* 0x171A6FDF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A6FE1: push ebp */
    ebp = esp; /* 0x171A6FE2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x218u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x218u; /* 0x171A6FE4: sub esp, 0x218 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171A6FEA: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171A6FEF: push ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A6FF0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x171A6FF3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171A6FF6: push esi */
    PUSH32(esp, edi); /* 0x171A6FF7: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171A6FF8: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x214)) = eax; /* 0x171A6FFB: mov dword ptr [ebp - 0x214], eax */
    eax = MEM32(ebp + 0x14); /* 0x171A7001: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x171A7004: push edi */
    MEM32(ebp + (-0x210)) = edi; /* 0x171A7005: mov dword ptr [ebp - 0x210], edi */
    MEM32(ebp + (-0x218)) = eax; /* 0x171A700B: mov dword ptr [ebp - 0x218], eax */
    RECOMP_CALL(sub_1721B278); /* 0x171A7011: call 0x1721b278 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A7016: inc eax */
    _flag_k = FK_INC;
    esi = eax + eax; /* 0x171A7017: lea esi, [eax + eax] */
    PUSH32(esp, esi); /* 0x171A701A: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x171A701B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A7020: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171A7022: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A7024: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A7025: pop ecx */
    MEM32(ebp + (-0x20C)) = eax; /* 0x171A7026: mov dword ptr [ebp - 0x20c], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7038; /* 0x171A702C: jne 0x171a7038 */
L_171A702E:
    eax = 0x8007000Eu; /* 0x171A702E: mov eax, 0x8007000e */
    goto L_171A7148; /* 0x171A7033: jmp 0x171a7148 */
L_171A7038:
    ecx = esi; /* 0x171A7038: mov ecx, esi */
    esi = edi; /* 0x171A703A: mov esi, edi */
    edi = eax; /* 0x171A703C: mov edi, eax */
    eax = ecx; /* 0x171A703E: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171A7040: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171A7040: shr ecx, 2 */
    PUSH32(esp, ebx); /* 0x171A7043: push ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171A7044: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 0x08000080u); /* 0x171A7046: push 0x8000080 */
    PUSH32(esp, 2); /* 0x171A704B: push 2 */
    PUSH32(esp, ebx); /* 0x171A704D: push ebx */
    PUSH32(esp, ebx); /* 0x171A704E: push ebx */
    ecx = eax; /* 0x171A704F: mov ecx, eax */
    PUSH32(esp, 0x40000000u); /* 0x171A7051: push 0x40000000 */
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x171A7056: push dword ptr [ebp - 0x210] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171A705C: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171A705F: rep movsb byte ptr es:[edi], byte ptr [esi] */
    RECOMP_ICALL(MEM32(0x170010AC)); /* 0x171A7061: call dword ptr [0x170010ac] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A7067: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x208)) = eax; /* 0x171A706A: mov dword ptr [ebp - 0x208], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A707C; /* 0x171A7070: jne 0x171a707c */
L_171A7072:
    esi = 0x8876038Fu; /* 0x171A7072: mov esi, 0x8876038f */
    goto L_171A713A; /* 0x171A7077: jmp 0x171a713a */
L_171A707C:
    eax = ebp + (-0x200); /* 0x171A707C: lea eax, [ebp - 0x200] */
    PUSH32(esp, eax); /* 0x171A7082: push eax */
    PUSH32(esp, 0xF6u); /* 0x171A7083: push 0xf6 */
    RECOMP_ICALL(MEM32(0x170010E8)); /* 0x171A7088: call dword ptr [0x170010e8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A708E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A711D; /* 0x171A7090: je 0x171a711d */
L_171A7096:
    eax = ebp + (-0x108); /* 0x171A7096: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171A709C: push eax */
    PUSH32(esp, ebx); /* 0x171A709D: push ebx */
    PUSH32(esp, 0x1702397Cu); /* 0x171A709E: push 0x1702397c */
    eax = ebp + (-0x200); /* 0x171A70A3: lea eax, [ebp - 0x200] */
    PUSH32(esp, eax); /* 0x171A70A9: push eax */
    RECOMP_ICALL(MEM32(0x170010EC)); /* 0x171A70AA: call dword ptr [0x170010ec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A70B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A711D; /* 0x171A70B2: je 0x171a711d */
L_171A70B4:
    esi = MEM32(0x170010F0); /* 0x171A70B4: mov esi, dword ptr [0x170010f0] */
    PUSH32(esp, ebx); /* 0x171A70BA: push ebx */
    ebx = 0x0C000100u; /* 0x171A70BB: mov ebx, 0xc000100 */
    PUSH32(esp, ebx); /* 0x171A70C0: push ebx */
    PUSH32(esp, 2); /* 0x171A70C1: push 2 */
    PUSH32(esp, 0); /* 0x171A70C3: push 0 */
    PUSH32(esp, 0); /* 0x171A70C5: push 0 */
    edi = 0xC0000000u; /* 0x171A70C7: mov edi, 0xc0000000 */
    PUSH32(esp, edi); /* 0x171A70CC: push edi */
    eax = ebp + (-0x108); /* 0x171A70CD: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171A70D3: push eax */
    RECOMP_ICALL(esi); /* 0x171A70D4: call esi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A70D6: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x204)) = eax; /* 0x171A70D9: mov dword ptr [ebp - 0x204], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A70E8; /* 0x171A70DF: jne 0x171a70e8 */
L_171A70E1:
    esi = 0x88760395u; /* 0x171A70E1: mov esi, 0x88760395 */
    goto L_171A7122; /* 0x171A70E6: jmp 0x171a7122 */
L_171A70E8:
    /* test MEM8(ebp + 0x10), 2 */ /* 0x171A70E8: test byte ptr [ebp + 0x10], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A71DD; /* 0x171A70EC: je 0x171a71dd */
L_171A70F2:
    eax = ebp + (-0x108); /* 0x171A70F2: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171A70F8: push eax */
    PUSH32(esp, 0); /* 0x171A70F9: push 0 */
    PUSH32(esp, 0x1702397Cu); /* 0x171A70FB: push 0x1702397c */
    eax = ebp + (-0x200); /* 0x171A7100: lea eax, [ebp - 0x200] */
    PUSH32(esp, eax); /* 0x171A7106: push eax */
    RECOMP_ICALL(MEM32(0x170010EC)); /* 0x171A7107: call dword ptr [0x170010ec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A710D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A7157; /* 0x171A710F: jne 0x171a7157 */
L_171A7111:
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x171A7111: push dword ptr [ebp - 0x204] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A7117: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
L_171A711D:
    esi = 0x80004005u; /* 0x171A711D: mov esi, 0x80004005 */
L_171A7122:
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x171A7122: push dword ptr [ebp - 0x208] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A7128: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
L_171A712E:
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x171A712E: push dword ptr [ebp - 0x210] */
    RECOMP_ICALL(MEM32(0x17001080)); /* 0x171A7134: call dword ptr [0x17001080] */
    RECOMP_FLAGS_IN();
L_171A713A:
    PUSH32(esp, MEM32(ebp + (-0x20C))); /* 0x171A713A: push dword ptr [ebp - 0x20c] */
    RECOMP_CALL(sub_1721B010); /* 0x171A7140: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A7145: pop ecx */
    eax = esi; /* 0x171A7146: mov eax, esi */
L_171A7148:
    ecx = MEM32(ebp + (-0x4)); /* 0x171A7148: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171A714B: pop edi */
    esi = POP32_VAL(esp); /* 0x171A714C: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A714D: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171A714E: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A7153: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A7154: ret 0x10 */
L_171A7157:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A7157: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x171A7159: push eax */
    PUSH32(esp, ebx); /* 0x171A715A: push ebx */
    PUSH32(esp, 2); /* 0x171A715B: push 2 */
    PUSH32(esp, eax); /* 0x171A715D: push eax */
    PUSH32(esp, eax); /* 0x171A715E: push eax */
    PUSH32(esp, edi); /* 0x171A715F: push edi */
    eax = ebp + (-0x108); /* 0x171A7160: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171A7166: push eax */
    RECOMP_ICALL(esi); /* 0x171A7167: call esi */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A7169: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x171A716B: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7181; /* 0x171A716E: jne 0x171a7181 */
L_171A7170:
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x171A7170: push dword ptr [ebp - 0x204] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A7176: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171A70E1; /* 0x171A717C: jmp 0x171a70e1 */
L_171A7181:
    PUSH32(esp, 0x50u); /* 0x171A7181: push 0x50 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A7183: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A7188: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A718A: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A71B4; /* 0x171A718B: je 0x171a71b4 */
L_171A718D:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A718D: push dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x171A7190: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x171A7192: push dword ptr [ebp - 0x208] */
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x171A7198: push dword ptr [ebp - 0x204] */
    PUSH32(esp, edi); /* 0x171A719E: push edi */
    PUSH32(esp, MEM32(ebp + (-0x20C))); /* 0x171A719F: push dword ptr [ebp - 0x20c] */
    PUSH32(esp, MEM32(ebp + (-0x214))); /* 0x171A71A5: push dword ptr [ebp - 0x214] */
    RECOMP_CALL(sub_171A6CF1); /* 0x171A71AB: call 0x171a6cf1 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A71B0: mov esi, eax */
    goto L_171A71B6; /* 0x171A71B2: jmp 0x171a71b6 */
L_171A71B4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A71B4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A71B6:
    /* test esi, esi */ /* 0x171A71B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A721D; /* 0x171A71B8: jne 0x171a721d */
L_171A71BA:
    esi = MEM32(0x170010F8); /* 0x171A71BA: mov esi, dword ptr [0x170010f8] */
    PUSH32(esp, edi); /* 0x171A71C0: push edi */
    RECOMP_ICALL(esi); /* 0x171A71C1: call esi */
    RECOMP_FLAGS_IN();
L_171A71C3:
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x171A71C3: push dword ptr [ebp - 0x208] */
    RECOMP_ICALL(esi); /* 0x171A71C9: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x171A71CB: push dword ptr [ebp - 0x204] */
    RECOMP_ICALL(esi); /* 0x171A71D1: call esi */
    RECOMP_FLAGS_IN();
    esi = 0x8007000Eu; /* 0x171A71D3: mov esi, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_171A712E; /* 0x171A71D8: jmp 0x171a712e */
L_171A71DD:
    PUSH32(esp, 0x50u); /* 0x171A71DD: push 0x50 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A71DF: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A71E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A71E6: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A720F; /* 0x171A71E7: je 0x171a720f */
L_171A71E9:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A71E9: push dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x171A71EC: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0x204))); /* 0x171A71EE: push dword ptr [ebp - 0x204] */
    PUSH32(esp, MEM32(ebp + (-0x208))); /* 0x171A71F4: push dword ptr [ebp - 0x208] */
    PUSH32(esp, MEM32(ebp + (-0x20C))); /* 0x171A71FA: push dword ptr [ebp - 0x20c] */
    PUSH32(esp, MEM32(ebp + (-0x214))); /* 0x171A7200: push dword ptr [ebp - 0x214] */
    RECOMP_CALL(sub_171A6C0B); /* 0x171A7206: call 0x171a6c0b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A720B: mov esi, eax */
    goto L_171A7211; /* 0x171A720D: jmp 0x171a7211 */
L_171A720F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A720F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A7211:
    /* test esi, esi */ /* 0x171A7211: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A721D; /* 0x171A7213: jne 0x171a721d */
L_171A7215:
    esi = MEM32(0x170010F8); /* 0x171A7215: mov esi, dword ptr [0x170010f8] */
    RECOMP_BACKEDGE();
    goto L_171A71C3; /* 0x171A721B: jmp 0x171a71c3 */
L_171A721D:
    ecx = esi; /* 0x171A721D: mov ecx, esi */
    RECOMP_CALL(sub_171A53D1); /* 0x171A721F: call 0x171a53d1 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A7224: mov edi, eax */
    /* test edi, edi */ /* 0x171A7226: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171A724A; /* 0x171A7228: jge 0x171a724a */
L_171A722A:
    /* test esi, esi */ /* 0x171A722A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7237; /* 0x171A722C: je 0x171a7237 */
L_171A722E:
    eax = MEM32(esi); /* 0x171A722E: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171A7230: push 1 */
    ecx = esi; /* 0x171A7232: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x171A7234: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
L_171A7237:
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x171A7237: push dword ptr [ebp - 0x210] */
    RECOMP_ICALL(MEM32(0x17001080)); /* 0x171A723D: call dword ptr [0x17001080] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x171A7243: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_171A7148; /* 0x171A7245: jmp 0x171a7148 */
L_171A724A:
    eax = MEM32(ebp + (-0x218)); /* 0x171A724A: mov eax, dword ptr [ebp - 0x218] */
    MEM32(eax) = esi; /* 0x171A7250: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A7252: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171A7148; /* 0x171A7254: jmp 0x171a7148 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A725E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A725Eu);

L_171A725E:
    edi = edi; /* 0x171A725E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7260: push ebp */
    ebp = esp; /* 0x171A7261: mov ebp, esp */
    eax = ecx; /* 0x171A7263: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171A7265: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x171A7268: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171A726B: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x8) = ecx; /* 0x171A726E: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171A7271: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0xC) = ecx; /* 0x171A7274: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x171A7277: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x10) = ecx; /* 0x171A727A: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax) = 0x17023980u; /* 0x171A727D: mov dword ptr [eax], 0x17023980 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171A7283: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x14) = ecx; /* 0x171A7285: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x171A7288: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = 0xAu; /* 0x171A728B: mov dword ptr [eax + 0x1c], 0xa */
    MEM32(eax + 0x20) = ecx; /* 0x171A7292: mov dword ptr [eax + 0x20], ecx */
    ebp = POP32_VAL(esp); /* 0x171A7295: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A7296: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171A729E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A729Eu);

L_171A729E:
    edi = edi; /* 0x171A729E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A72A0: push ebp */
    ebp = esp; /* 0x171A72A1: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171A72A3: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x14); /* 0x171A72A6: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x171A72A9: push esi */
    esi = ecx; /* 0x171A72AA: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171A72AC: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0xC) = eax; /* 0x171A72AF: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + 0x10); /* 0x171A72B2: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x171A72B5: mov dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A72B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x18) = edx; /* 0x171A72BA: mov dword ptr [esi + 0x18], edx */
    edx = MEM32(ebp + 0x18); /* 0x171A72BD: mov edx, dword ptr [ebp + 0x18] */
    MEM32(esi) = 0x170239C4u; /* 0x171A72C0: mov dword ptr [esi], 0x170239c4 */
    MEM32(esi + 0x4) = 1; /* 0x171A72C6: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = ecx; /* 0x171A72CD: mov dword ptr [esi + 8], ecx */
    MEM32(esi + 0x14) = eax; /* 0x171A72D0: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x1C) = eax; /* 0x171A72D3: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x20) = eax; /* 0x171A72D6: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x24) = edx; /* 0x171A72D9: mov dword ptr [esi + 0x24], edx */
    MEM32(esi + 0x28) = eax; /* 0x171A72DC: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = eax; /* 0x171A72DF: mov dword ptr [esi + 0x2c], eax */
    MEM8(esi + 0x30) = (uint8_t)(LO8(eax)); /* 0x171A72E2: mov byte ptr [esi + 0x30], al */
    MEM32(esi + 0x34) = eax; /* 0x171A72E5: mov dword ptr [esi + 0x34], eax */
    MEM32(esi + 0x38) = eax; /* 0x171A72E8: mov dword ptr [esi + 0x38], eax */
    MEM32(esi + 0x3C) = 0x64u; /* 0x171A72EB: mov dword ptr [esi + 0x3c], 0x64 */
    MEM32(esi + 0x40) = eax; /* 0x171A72F2: mov dword ptr [esi + 0x40], eax */
    MEM32(esi + 0x44) = eax; /* 0x171A72F5: mov dword ptr [esi + 0x44], eax */
    MEM32(esi + 0x48) = eax; /* 0x171A72F8: mov dword ptr [esi + 0x48], eax */
    MEM32(esi + 0x4C) = 0xAu; /* 0x171A72FB: mov dword ptr [esi + 0x4c], 0xa */
    MEM32(esi + 0x50) = eax; /* 0x171A7302: mov dword ptr [esi + 0x50], eax */
    eax = MEM32(ecx); /* 0x171A7305: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171A7307: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171A7308: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A730B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A730D: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A730E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171A730F: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171A7317(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7317u);

L_171A7317:
    edi = edi; /* 0x171A7317: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7319: push ebp */
    ebp = esp; /* 0x171A731A: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171A731C: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x14); /* 0x171A731F: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x171A7322: push esi */
    esi = ecx; /* 0x171A7323: mov esi, ecx */
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0xFFFFFFFFu));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0xFFFFFFFFu; /* 0x171A7325: or dword ptr [esi + 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(esi + 0x10) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x10) | 0xFFFFFFFFu));
    MEM32(esi + 0x10) = MEM32(esi + 0x10) | 0xFFFFFFFFu; /* 0x171A7329: or dword ptr [esi + 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x171A732D: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0x14) = eax; /* 0x171A7330: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(ebp + 0x10); /* 0x171A7333: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x18) = eax; /* 0x171A7336: mov dword ptr [esi + 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A7339: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x170239C4u; /* 0x171A733B: mov dword ptr [esi], 0x170239c4 */
    MEM32(esi + 0x4) = 1; /* 0x171A7341: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = ecx; /* 0x171A7348: mov dword ptr [esi + 8], ecx */
    MEM32(esi + 0x1C) = eax; /* 0x171A734B: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x20) = eax; /* 0x171A734E: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x24) = edx; /* 0x171A7351: mov dword ptr [esi + 0x24], edx */
    MEM32(esi + 0x28) = eax; /* 0x171A7354: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = eax; /* 0x171A7357: mov dword ptr [esi + 0x2c], eax */
    MEM8(esi + 0x30) = (uint8_t)(LO8(eax)); /* 0x171A735A: mov byte ptr [esi + 0x30], al */
    MEM32(esi + 0x34) = eax; /* 0x171A735D: mov dword ptr [esi + 0x34], eax */
    MEM32(esi + 0x38) = eax; /* 0x171A7360: mov dword ptr [esi + 0x38], eax */
    MEM32(esi + 0x3C) = 0x64u; /* 0x171A7363: mov dword ptr [esi + 0x3c], 0x64 */
    MEM32(esi + 0x40) = eax; /* 0x171A736A: mov dword ptr [esi + 0x40], eax */
    MEM32(esi + 0x44) = eax; /* 0x171A736D: mov dword ptr [esi + 0x44], eax */
    MEM32(esi + 0x48) = eax; /* 0x171A7370: mov dword ptr [esi + 0x48], eax */
    MEM32(esi + 0x4C) = 0xAu; /* 0x171A7373: mov dword ptr [esi + 0x4c], 0xa */
    MEM32(esi + 0x50) = eax; /* 0x171A737A: mov dword ptr [esi + 0x50], eax */
    eax = MEM32(ecx); /* 0x171A737D: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171A737F: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171A7380: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A7383: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A7385: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A7386: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A7387: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171A738F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A738Fu);

L_171A738F:
    edi = edi; /* 0x171A738F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7391: push ebp */
    ebp = esp; /* 0x171A7392: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x171A7394: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A7397: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171A7399: push esi */
    esi = ecx; /* 0x171A739A: mov esi, ecx */
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0xFFFFFFFFu));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0xFFFFFFFFu; /* 0x171A739C: or dword ptr [esi + 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(esi + 0x10) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x10) | 0xFFFFFFFFu));
    MEM32(esi + 0x10) = MEM32(esi + 0x10) | 0xFFFFFFFFu; /* 0x171A73A0: or dword ptr [esi + 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x171A73A4: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0x18) = edx; /* 0x171A73A7: mov dword ptr [esi + 0x18], edx */
    edx = MEM32(ebp + 0x10); /* 0x171A73AA: mov edx, dword ptr [ebp + 0x10] */
    MEM32(esi) = 0x170239C4u; /* 0x171A73AD: mov dword ptr [esi], 0x170239c4 */
    MEM32(esi + 0x4) = 1; /* 0x171A73B3: mov dword ptr [esi + 4], 1 */
    MEM32(esi + 0x8) = ecx; /* 0x171A73BA: mov dword ptr [esi + 8], ecx */
    MEM32(esi + 0x14) = eax; /* 0x171A73BD: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x1C) = eax; /* 0x171A73C0: mov dword ptr [esi + 0x1c], eax */
    MEM32(esi + 0x20) = eax; /* 0x171A73C3: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x24) = edx; /* 0x171A73C6: mov dword ptr [esi + 0x24], edx */
    MEM32(esi + 0x28) = eax; /* 0x171A73C9: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = eax; /* 0x171A73CC: mov dword ptr [esi + 0x2c], eax */
    MEM8(esi + 0x30) = (uint8_t)(LO8(eax)); /* 0x171A73CF: mov byte ptr [esi + 0x30], al */
    MEM32(esi + 0x34) = eax; /* 0x171A73D2: mov dword ptr [esi + 0x34], eax */
    MEM32(esi + 0x38) = eax; /* 0x171A73D5: mov dword ptr [esi + 0x38], eax */
    MEM32(esi + 0x3C) = 0x64u; /* 0x171A73D8: mov dword ptr [esi + 0x3c], 0x64 */
    MEM32(esi + 0x40) = eax; /* 0x171A73DF: mov dword ptr [esi + 0x40], eax */
    MEM32(esi + 0x44) = eax; /* 0x171A73E2: mov dword ptr [esi + 0x44], eax */
    MEM32(esi + 0x48) = eax; /* 0x171A73E5: mov dword ptr [esi + 0x48], eax */
    MEM32(esi + 0x4C) = 0xAu; /* 0x171A73E8: mov dword ptr [esi + 0x4c], 0xa */
    MEM32(esi + 0x50) = eax; /* 0x171A73EF: mov dword ptr [esi + 0x50], eax */
    eax = MEM32(ecx); /* 0x171A73F2: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171A73F4: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171A73F5: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A73F8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A73FA: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A73FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A73FC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A7404(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7404u);

L_171A7404:
    edi = edi; /* 0x171A7404: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7406: push ebp */
    ebp = esp; /* 0x171A7407: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x171A7409: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171A740C: push ebx */
    PUSH32(esp, esi); /* 0x171A740D: push esi */
    PUSH32(esp, edi); /* 0x171A740E: push edi */
    edi = ecx; /* 0x171A740F: mov edi, ecx */
    esi = MEM32(edi + 0x18); /* 0x171A7411: mov esi, dword ptr [edi + 0x18] */
    /* cmp MEM32(esi), 0x20666F78u */ /* 0x171A7414: cmp dword ptr [esi], 0x20666f78 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x20666F78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A75A5; /* 0x171A741A: jne 0x171a75a5 */
L_171A7420:
    eax = MEM32(esi + 0x4); /* 0x171A7420: mov eax, dword ptr [esi + 4] */
    ebx = 0x34303330u; /* 0x171A7423: mov ebx, 0x34303330 */
    /* cmp eax, ebx */ /* 0x171A7428: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A75A5; /* 0x171A742A: jne 0x171a75a5 */
L_171A7430:
    /* cmp MEM32(esi + 0x8), 0x206E6962u */ /* 0x171A7430: cmp dword ptr [esi + 8], 0x206e6962 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x206E6962u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7446; /* 0x171A7437: jne 0x171a7446 */
L_171A7439:
    /* cmp MEM32(esi + 0xC), 0x32333030u */ /* 0x171A7439: cmp dword ptr [esi + 0xc], 0x32333030 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x32333030u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7511; /* 0x171A7440: je 0x171a7511 */
L_171A7446:
    /* cmp eax, ebx */ /* 0x171A7446: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A75A5; /* 0x171A7448: jne 0x171a75a5 */
L_171A744E:
    /* cmp MEM32(esi + 0x8), 0x70697A62u */ /* 0x171A744E: cmp dword ptr [esi + 8], 0x70697a62 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x70697A62u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A75A5; /* 0x171A7455: jne 0x171a75a5 */
L_171A745B:
    /* cmp MEM32(esi + 0xC), 0x32333030u */ /* 0x171A745B: cmp dword ptr [esi + 0xc], 0x32333030 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x32333030u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A75A5; /* 0x171A7462: jne 0x171a75a5 */
L_171A7468:
    ecx = ebp + (-0x10); /* 0x171A7468: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_171AA344); /* 0x171A746B: call 0x171aa344 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x171A7470: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_171AA37E); /* 0x171A7473: call 0x171aa37e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A7478: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A7486; /* 0x171A747A: jne 0x171a7486 */
L_171A747C:
    esi = 0x8007000Eu; /* 0x171A747C: mov esi, 0x8007000e */
    goto L_171A7599; /* 0x171A7481: jmp 0x171a7599 */
L_171A7486:
    eax = MEM32(edi + 0x24); /* 0x171A7486: mov eax, dword ptr [edi + 0x24] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A7489: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_171A747C; /* 0x171A748C: ja 0x171a747c */
L_171A748E:
    ecx = ebp + (-0x4); /* 0x171A748E: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x171A7491: push ecx */
    ecx = ebp + (-0x8); /* 0x171A7492: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x171A7495: push ecx */
    PUSH32(esp, eax); /* 0x171A7496: push eax */
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x171A7497: push dword ptr [edi + 0x18] */
    ecx = ebp + (-0x10); /* 0x171A749A: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_171AA3B3); /* 0x171A749D: call 0x171aa3b3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A74A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171A74AD; /* 0x171A74A4: jge 0x171a74ad */
L_171A74A6:
    esi = eax; /* 0x171A74A6: mov esi, eax */
    goto L_171A7599; /* 0x171A74A8: jmp 0x171a7599 */
L_171A74AD:
    esi = MEM32(edi + 0x8); /* 0x171A74AD: mov esi, dword ptr [edi + 8] */
    eax = MEM32(esi); /* 0x171A74B0: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171A74B2: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171A74B3: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x171A74B6: mov eax, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x171A74B8: push 0 */
    ecx = edi; /* 0x171A74BA: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x171A74BC: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171A74BF: push dword ptr [ebp - 4] */
    ecx = edi; /* 0x171A74C2: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171A74C4: push dword ptr [ebp - 8] */
    PUSH32(esp, esi); /* 0x171A74C7: push esi */
    RECOMP_CALL(sub_171A738F); /* 0x171A74C8: call 0x171a738f */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x171A74CD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171A74CF: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171A74D0: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi + 0x18); /* 0x171A74D3: mov esi, dword ptr [edi + 0x18] */
    MEM8(edi + 0x30) = (uint8_t)(1); /* 0x171A74D6: mov byte ptr [edi + 0x30], 1 */
    /* cmp MEM32(esi), 0x20666F78u */ /* 0x171A74DA: cmp dword ptr [esi], 0x20666f78 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x20666F78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7594; /* 0x171A74E0: jne 0x171a7594 */
L_171A74E6:
    /* cmp MEM32(esi + 0x4), ebx */ /* 0x171A74E6: cmp dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7594; /* 0x171A74E9: jne 0x171a7594 */
L_171A74EF:
    /* cmp MEM32(esi + 0x8), 0x206E6962u */ /* 0x171A74EF: cmp dword ptr [esi + 8], 0x206e6962 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x206E6962u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7594; /* 0x171A74F6: jne 0x171a7594 */
L_171A74FC:
    /* cmp MEM32(esi + 0xC), 0x32333030u */ /* 0x171A74FC: cmp dword ptr [esi + 0xc], 0x32333030 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0x32333030u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7594; /* 0x171A7503: jne 0x171a7594 */
L_171A7509:
    ecx = ebp + (-0x10); /* 0x171A7509: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_171AA353); /* 0x171A750C: call 0x171aa353 */
    RECOMP_FLAGS_IN();
L_171A7511:
    edx = MEM32(esi + 0x14); /* 0x171A7511: mov edx, dword ptr [esi + 0x14] */
    /* test edx, edx */ /* 0x171A7514: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x10); /* 0x171A7516: mov eax, dword ptr [esi + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A75A5; /* 0x171A7519: jl 0x171a75a5 */
L_171A751F:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171A7526; /* 0x171A751F: jg 0x171a7526 */
L_171A7521:
    /* cmp eax, 0x20u */ /* 0x171A7521: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171A75A5; /* 0x171A7524: jb 0x171a75a5 */
L_171A7526:
    eax = MEM32(esi + 0x1C); /* 0x171A7526: mov eax, dword ptr [esi + 0x1c] */
    /* test eax, eax */ /* 0x171A7529: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x18); /* 0x171A752B: mov ecx, dword ptr [esi + 0x18] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x171A752E: mov dword ptr [ebp - 0x1c], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A75A5; /* 0x171A7531: jl 0x171a75a5 */
L_171A7533:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171A7539; /* 0x171A7533: jg 0x171a7539 */
L_171A7535:
    /* test ecx, ecx */ /* 0x171A7535: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_171A75A5; /* 0x171A7537: jb 0x171a75a5 */
L_171A7539:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x171A7539: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(ebp + (-0x14)) */ /* 0x171A753D: cmp edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edi + 0x24); /* 0x171A7540: mov eax, dword ptr [edi + 0x24] */
    if (CMP_G(_flag_a, _flag_b)) goto L_171A75A5; /* 0x171A7543: jg 0x171a75a5 */
L_171A7545:
    if (CMP_L(_flag_a, _flag_b)) goto L_171A754C; /* 0x171A7545: jl 0x171a754c */
L_171A7547:
    /* cmp MEM32(esi + 0x10), eax */ /* 0x171A7547: cmp dword ptr [esi + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A75A5; /* 0x171A754A: ja 0x171a75a5 */
L_171A754C:
    edx = MEM32(ebp + (-0x1C)); /* 0x171A754C: mov edx, dword ptr [ebp - 0x1c] */
    /* cmp edx, MEM32(ebp + (-0x14)) */ /* 0x171A754F: cmp edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171A75A5; /* 0x171A7552: jg 0x171a75a5 */
L_171A7554:
    if (CMP_L(_flag_a, _flag_b)) goto L_171A755A; /* 0x171A7554: jl 0x171a755a */
L_171A7556:
    /* cmp ecx, eax */ /* 0x171A7556: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A75A5; /* 0x171A7558: ja 0x171a75a5 */
L_171A755A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x10); /* 0x171A755A: add ecx, dword ptr [esi + 0x10] */
    _flag_k = FK_ADD;
    { uint32_t _aa = edx, _ab = MEM32(esi + 0x14), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171A755D: adc edx, dword ptr [esi + 0x14] */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp edx, MEM32(ebp + (-0x14)) */ /* 0x171A7560: cmp edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171A75A5; /* 0x171A7563: jg 0x171a75a5 */
L_171A7565:
    if (CMP_L(_flag_a, _flag_b)) goto L_171A756B; /* 0x171A7565: jl 0x171a756b */
L_171A7567:
    /* cmp ecx, eax */ /* 0x171A7567: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A75A5; /* 0x171A7569: ja 0x171a75a5 */
L_171A756B:
    edx = MEM32(esi + 0x18); /* 0x171A756B: mov edx, dword ptr [esi + 0x18] */
    ecx = MEM32(edi + 0x18); /* 0x171A756E: mov ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x171A7571: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(esi + 0x10); /* 0x171A7573: add edx, dword ptr [esi + 0x10] */
    _flag_k = FK_ADD;
    MEM32(edi + 0x20) = edx; /* 0x171A7576: mov dword ptr [edi + 0x20], edx */
    edx = MEM32(esi + 0x10); /* 0x171A7579: mov edx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x171A757C: add edx, ecx */
    _flag_k = FK_ADD;
    MEM32(edi + 0x1C) = edx; /* 0x171A757E: mov dword ptr [edi + 0x1c], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x18); /* 0x171A7581: sub eax, dword ptr [esi + 0x18] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x10); /* 0x171A7584: sub eax, dword ptr [esi + 0x10] */
    _flag_k = FK_CMP;
    MEM32(edi + 0x2C) = eax; /* 0x171A7587: mov dword ptr [edi + 0x2c], eax */
    eax = MEM32(esi + 0x18); /* 0x171A758A: mov eax, dword ptr [esi + 0x18] */
    MEM32(edi + 0x28) = eax; /* 0x171A758D: mov dword ptr [edi + 0x28], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A7590: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A75AA; /* 0x171A7592: jmp 0x171a75aa */
L_171A7594:
    esi = 0x8876038Fu; /* 0x171A7594: mov esi, 0x8876038f */
L_171A7599:
    ecx = ebp + (-0x10); /* 0x171A7599: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_171AA353); /* 0x171A759C: call 0x171aa353 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A75A1: mov eax, esi */
    goto L_171A75AA; /* 0x171A75A3: jmp 0x171a75aa */
L_171A75A5:
    eax = 0x8876038Fu; /* 0x171A75A5: mov eax, 0x8876038f */
L_171A75AA:
    edi = POP32_VAL(esp); /* 0x171A75AA: pop edi */
    esi = POP32_VAL(esp); /* 0x171A75AB: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A75AC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A75AD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A75AE: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A75B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A75B4u);

L_171A75B4:
    edi = edi; /* 0x171A75B4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A75B6: push ebp */
    ebp = esp; /* 0x171A75B7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A75B9: push esi */
    esi = ecx; /* 0x171A75BA: mov esi, ecx */
    RECOMP_CALL(sub_171A6167); /* 0x171A75BC: call 0x171a6167 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A75C1: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A75CE; /* 0x171A75C5: je 0x171a75ce */
L_171A75C7:
    PUSH32(esp, esi); /* 0x171A75C7: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A75C8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A75CD: pop ecx */
L_171A75CE:
    eax = esi; /* 0x171A75CE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A75D0: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A75D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A75D2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A75DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A75DAu);

L_171A75DA:
    edi = edi; /* 0x171A75DA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A75DC: push ebp */
    ebp = esp; /* 0x171A75DD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A75DF: push esi */
    esi = ecx; /* 0x171A75E0: mov esi, ecx */
    RECOMP_CALL(sub_171A612E); /* 0x171A75E2: call 0x171a612e */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A75E7: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A75F4; /* 0x171A75EB: je 0x171a75f4 */
L_171A75ED:
    PUSH32(esp, esi); /* 0x171A75ED: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A75EE: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A75F3: pop ecx */
L_171A75F4:
    eax = esi; /* 0x171A75F4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A75F6: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A75F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A75F8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A7600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7600u);

L_171A7600:
    edi = edi; /* 0x171A7600: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7602: push ebp */
    ebp = esp; /* 0x171A7603: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A7605: push esi */
    esi = ecx; /* 0x171A7606: mov esi, ecx */
    RECOMP_CALL(sub_171A61A0); /* 0x171A7608: call 0x171a61a0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A760D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A761A; /* 0x171A7611: je 0x171a761a */
L_171A7613:
    PUSH32(esp, esi); /* 0x171A7613: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A7614: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A7619: pop ecx */
L_171A761A:
    eax = esi; /* 0x171A761A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A761C: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A761D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A761E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A7626(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7626u);

L_171A7626:
    edi = edi; /* 0x171A7626: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7628: push ebp */
    ebp = esp; /* 0x171A7629: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x171A762B: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171A762E: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171A7633: push ebx */
    PUSH32(esp, edi); /* 0x171A7634: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171A7635: mov edi, dword ptr [ebp + 8] */
    ebx = MEM32(edi); /* 0x171A7638: mov ebx, dword ptr [edi] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x171A763A: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171A763D: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x24)) = ecx; /* 0x171A7640: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A7643: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x171A7646: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171A7649: sub ecx, ebx */
    _flag_k = FK_CMP;
    /* cmp ecx, 8 */ /* 0x171A764B: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = edi; /* 0x171A764E: mov dword ptr [ebp - 0x28], edi */
    MEM32(ebp + (-0x18)) = eax; /* 0x171A7651: mov dword ptr [ebp - 0x18], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171A7660; /* 0x171A7654: jae 0x171a7660 */
L_171A7656:
    eax = 0x8876038Fu; /* 0x171A7656: mov eax, 0x8876038f */
    goto L_171A7818; /* 0x171A765B: jmp 0x171a7818 */
L_171A7660:
    PUSH32(esp, esi); /* 0x171A7660: push esi */
    goto L_171A77DA; /* 0x171A7661: jmp 0x171a77da */
L_171A7666:
    /* test eax, eax */ /* 0x171A7666: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A775E; /* 0x171A7668: jl 0x171a775e */
L_171A766E:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171A7678; /* 0x171A766E: jg 0x171a7678 */
L_171A7670:
    /* test esi, esi */ /* 0x171A7670: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_171A775E; /* 0x171A7672: jb 0x171a775e */
L_171A7678:
    /* cmp ecx, 0x38u */ /* 0x171A7678: cmp ecx, 0x38 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171A7826; /* 0x171A767B: jb 0x171a7826 */
L_171A7681:
    edi = MEM32(ebp + (-0x1C)); /* 0x171A7681: mov edi, dword ptr [ebp - 0x1c] */
    edi = MEM32(edi + 0x2C); /* 0x171A7684: mov edi, dword ptr [edi + 0x2c] */
    ecx = MEM32(ebx + 0xC); /* 0x171A7687: mov ecx, dword ptr [ebx + 0xc] */
    edx = MEM32(ebx + 0x8); /* 0x171A768A: mov edx, dword ptr [ebx + 8] */
    MEM32(ebp + (-0x34)) = edi; /* 0x171A768D: mov dword ptr [ebp - 0x34], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A7690: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edi */ /* 0x171A7692: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A7826; /* 0x171A7694: ja 0x171a7826 */
L_171A769A:
    if (CMP_B(_flag_a, _flag_b)) goto L_171A76A5; /* 0x171A769A: jb 0x171a76a5 */
L_171A769C:
    /* cmp edx, MEM32(ebp + (-0x34)) */ /* 0x171A769C: cmp edx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A7826; /* 0x171A769F: ja 0x171a7826 */
L_171A76A5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A76A5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x171A76A7: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A7826; /* 0x171A76A9: ja 0x171a7826 */
L_171A76AF:
    if (CMP_B(_flag_a, _flag_b)) goto L_171A76C0; /* 0x171A76AF: jb 0x171a76c0 */
L_171A76B1:
    esi = MEM32(ebp + (-0x34)); /* 0x171A76B1: mov esi, dword ptr [ebp - 0x34] */
    /* cmp MEM32(ebp + (-0x3C)), esi */ /* 0x171A76B4: cmp dword ptr [ebp - 0x3c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A7826; /* 0x171A76B7: ja 0x171a7826 */
L_171A76BD:
    esi = MEM32(ebp + (-0x3C)); /* 0x171A76BD: mov esi, dword ptr [ebp - 0x3c] */
L_171A76C0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x171A76C0: add edx, esi */
    _flag_k = FK_ADD;
    { uint32_t _aa = ecx, _ab = eax, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171A76C2: adc ecx, eax */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp ecx, edi */ /* 0x171A76C4: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A7826; /* 0x171A76C6: ja 0x171a7826 */
L_171A76CC:
    if (CMP_B(_flag_a, _flag_b)) goto L_171A76D7; /* 0x171A76CC: jb 0x171a76d7 */
L_171A76CE:
    /* cmp edx, MEM32(ebp + (-0x34)) */ /* 0x171A76CE: cmp edx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A7826; /* 0x171A76D1: ja 0x171a7826 */
L_171A76D7:
    ecx = MEM32(ebp + (-0x1C)); /* 0x171A76D7: mov ecx, dword ptr [ebp - 0x1c] */
    esi = ebx + 0x10; /* 0x171A76DA: lea esi, [ebx + 0x10] */
    edi = ebp + (-0x14); /* 0x171A76DD: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A76E0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A76E1: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x44); /* 0x171A76E2: lea eax, [ebp - 0x44] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A76E5: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, eax); /* 0x171A76E6: push eax */
    eax = ebp + (-0x14); /* 0x171A76E7: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x171A76EA: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A76EB: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_171A5531); /* 0x171A76EC: call 0x171a5531 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A76F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7826; /* 0x171A76F3: je 0x171a7826 */
L_171A76F9:
    esi = MEM32(ebp + (-0x28)); /* 0x171A76F9: mov esi, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 0x38u; /* 0x171A76FC: add dword ptr [esi], 0x38 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x2C); /* 0x171A76FF: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x171A7702: push eax */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x171A7703: push dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x171A7706: push esi */
    RECOMP_CALL(sub_171A542F); /* 0x171A7707: call 0x171a542f */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A770C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7826; /* 0x171A770E: je 0x171a7826 */
L_171A7714:
    esi = MEM32(esi); /* 0x171A7714: mov esi, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x2C)); /* 0x171A7716: sub esi, dword ptr [ebp - 0x2c] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x24u); /* 0x171A7719: push 0x24 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A771B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A7720: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A7722: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7738; /* 0x171A7723: je 0x171a7738 */
L_171A7725:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x171A7725: push dword ptr [ebp - 0x44] */
    ecx = eax; /* 0x171A7728: mov ecx, eax */
    PUSH32(esp, esi); /* 0x171A772A: push esi */
    PUSH32(esp, ebx); /* 0x171A772B: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x171A772C: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_171A725E); /* 0x171A772F: call 0x171a725e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A7734: mov esi, eax */
    goto L_171A773A; /* 0x171A7736: jmp 0x171a773a */
L_171A7738:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A7738: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A773A:
    /* test esi, esi */ /* 0x171A773A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7836; /* 0x171A773C: je 0x171a7836 */
L_171A7742:
    ecx = MEM32(ebp + (-0x18)); /* 0x171A7742: mov ecx, dword ptr [ebp - 0x18] */
    eax = ebp + (-0x40); /* 0x171A7745: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x171A7748: push eax */
    MEM32(ebp + (-0x40)) = esi; /* 0x171A7749: mov dword ptr [ebp - 0x40], esi */
    RECOMP_CALL(sub_171A902A); /* 0x171A774C: call 0x171a902a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A7751: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A782D; /* 0x171A7753: je 0x171a782d */
L_171A7759:
    edi = MEM32(ebp + (-0x28)); /* 0x171A7759: mov edi, dword ptr [ebp - 0x28] */
    goto L_171A77CE; /* 0x171A775C: jmp 0x171a77ce */
L_171A775E:
    ecx = esi; /* 0x171A775E: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x171A7760: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171A7762: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171A7765: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171A7767: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x171A7769: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A7826; /* 0x171A776B: ja 0x171a7826 */
L_171A7771:
    if (CMP_B(_flag_a, _flag_b)) goto L_171A777F; /* 0x171A7771: jb 0x171a777f */
L_171A7773:
    eax = MEM32(ebp + (-0x1C)); /* 0x171A7773: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp ecx, MEM32(eax + 0x28) */ /* 0x171A7776: cmp ecx, dword ptr [eax + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A7826; /* 0x171A7779: ja 0x171a7826 */
L_171A777F:
    ecx = MEM32(ebp + (-0x1C)); /* 0x171A777F: mov ecx, dword ptr [ebp - 0x1c] */
    eax = ebp + (-0x20); /* 0x171A7782: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x171A7785: push eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171A7786: add ebx, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x171A7788: push ebx */
    RECOMP_CALL(sub_171A6005); /* 0x171A7789: call 0x171a6005 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A778E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7826; /* 0x171A7790: je 0x171a7826 */
L_171A7796:
    PUSH32(esp, 8); /* 0x171A7796: push 8 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A7798: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A779D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A779F: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A77B2; /* 0x171A77A0: je 0x171a77b2 */
L_171A77A2:
    ecx = MEM32(ebp + (-0x20)); /* 0x171A77A2: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(eax) = 0x17023860u; /* 0x171A77A5: mov dword ptr [eax], 0x17023860 */
    MEM32(eax + 0x4) = ecx; /* 0x171A77AB: mov dword ptr [eax + 4], ecx */
    esi = eax; /* 0x171A77AE: mov esi, eax */
    goto L_171A77B4; /* 0x171A77B0: jmp 0x171a77b4 */
L_171A77B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A77B2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A77B4:
    /* test esi, esi */ /* 0x171A77B4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7836; /* 0x171A77B6: je 0x171a7836 */
L_171A77B8:
    ecx = MEM32(ebp + (-0x18)); /* 0x171A77B8: mov ecx, dword ptr [ebp - 0x18] */
    eax = ebp + (-0x20); /* 0x171A77BB: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x171A77BE: push eax */
    MEM32(ebp + (-0x20)) = esi; /* 0x171A77BF: mov dword ptr [ebp - 0x20], esi */
    RECOMP_CALL(sub_171A902A); /* 0x171A77C2: call 0x171a902a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A77C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A782D; /* 0x171A77C9: je 0x171a782d */
L_171A77CB:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 8; /* 0x171A77CB: add dword ptr [edi], 8 */
    _flag_k = FK_ADD;
L_171A77CE:
    ebx = MEM32(edi); /* 0x171A77CE: mov ebx, dword ptr [edi] */
    ecx = MEM32(ebp + (-0x24)); /* 0x171A77D0: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171A77D3: sub ecx, ebx */
    _flag_k = FK_CMP;
    /* cmp ecx, 8 */ /* 0x171A77D5: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171A7826; /* 0x171A77D8: jb 0x171a7826 */
L_171A77DA:
    esi = MEM32(ebx); /* 0x171A77DA: mov esi, dword ptr [ebx] */
    eax = MEM32(ebx + 0x4); /* 0x171A77DC: mov eax, dword ptr [ebx + 4] */
    edx = esi; /* 0x171A77DF: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x171A77E1: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0xFFFFFFFFu */ /* 0x171A77E3: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C)) = esi; /* 0x171A77E6: mov dword ptr [ebp - 0x3c], esi */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7666; /* 0x171A77E9: jne 0x171a7666 */
L_171A77EF:
    eax = MEM32(ebp + (-0x18)); /* 0x171A77EF: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A77F2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), esi */ /* 0x171A77F4: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A7815; /* 0x171A77F6: jbe 0x171a7815 */
L_171A77F8:
    eax = MEM32(ebp + (-0x18)); /* 0x171A77F8: mov eax, dword ptr [ebp - 0x18] */
    eax = MEM32(eax + 0xC); /* 0x171A77FB: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x171A77FE: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x171A7801: push dword ptr [ebp - 0x24] */
    eax = MEM32(ecx); /* 0x171A7804: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x171A7806: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A7809: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A7817; /* 0x171A780B: jl 0x171a7817 */
L_171A780D:
    eax = MEM32(ebp + (-0x18)); /* 0x171A780D: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171A7810: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(eax) */ /* 0x171A7811: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A77F8; /* 0x171A7813: jb 0x171a77f8 */
L_171A7815:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A7815: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A7817:
    esi = POP32_VAL(esp); /* 0x171A7817: pop esi */
L_171A7818:
    ecx = MEM32(ebp + (-0x4)); /* 0x171A7818: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171A781B: pop edi */
    ebx = POP32_VAL(esp); /* 0x171A781C: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171A781D: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A7822: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A7823: ret 0xc */
L_171A7826:
    eax = 0x8876038Fu; /* 0x171A7826: mov eax, 0x8876038f */
    RECOMP_BACKEDGE();
    goto L_171A7817; /* 0x171A782B: jmp 0x171a7817 */
L_171A782D:
    eax = MEM32(esi); /* 0x171A782D: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171A782F: push 1 */
    ecx = esi; /* 0x171A7831: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x171A7833: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
L_171A7836:
    eax = 0x8007000Eu; /* 0x171A7836: mov eax, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_171A7817; /* 0x171A783B: jmp 0x171a7817 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A7842(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7842u);

L_171A7842:
    edi = edi; /* 0x171A7842: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7844: push ebp */
    ebp = esp; /* 0x171A7845: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A7847: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171A7848: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x171A784B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A787F; /* 0x171A784D: je 0x171a787f */
L_171A784F:
    PUSH32(esp, 0x18u); /* 0x171A784F: push 0x18 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A7851: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A7856: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A7858: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7864; /* 0x171A7859: je 0x171a7864 */
L_171A785B:
    ecx = eax; /* 0x171A785B: mov ecx, eax */
    RECOMP_CALL(sub_171A636F); /* 0x171A785D: call 0x171a636f */
    RECOMP_FLAGS_IN();
    goto L_171A7866; /* 0x171A7862: jmp 0x171a7866 */
L_171A7864:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A7864: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A7866:
    MEM32(esi) = eax; /* 0x171A7866: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_171AD5D7); /* 0x171A7868: call 0x171ad5d7 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x171A786D: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171A786F: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171A7871: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF8FFF2u);
    eax = eax & 0x7FF8FFF2u; /* 0x171A7873: and eax, 0x7ff8fff2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007000Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x8007000Eu; /* 0x171A7878: add eax, 0x8007000e */
    _flag_k = FK_ADD;
    goto L_171A7884; /* 0x171A787D: jmp 0x171a7884 */
L_171A787F:
    eax = 0x80004003u; /* 0x171A787F: mov eax, 0x80004003 */
L_171A7884:
    esi = POP32_VAL(esp); /* 0x171A7884: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A7885: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A7886: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A788E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A788Eu);

L_171A788E:
    edi = edi; /* 0x171A788E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7890: push ebp */
    ebp = esp; /* 0x171A7891: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171A7893: mov eax, dword ptr [ebp + 0xc] */
    edx = eax + 0x1; /* 0x171A7896: lea edx, [eax + 1] */
L_171A7899:
    SET_LO8(ecx, MEM8(eax)); /* 0x171A7899: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A789B: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171A789C: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A7899; /* 0x171A789E: jne 0x171a7899 */
L_171A78A0:
    PUSH32(esp, ebx); /* 0x171A78A0: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171A78A1: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171A78A3: push esi */
    esi = eax + 0x1; /* 0x171A78A4: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171A78A7: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x171A78A8: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A78AD: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A78AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, eax */ /* 0x171A78B1: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A78B3: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A78C0; /* 0x171A78B4: jne 0x171a78c0 */
L_171A78B6:
    eax = 0x8007000Eu; /* 0x171A78B6: mov eax, 0x8007000e */
    goto L_171A7979; /* 0x171A78BB: jmp 0x171a7979 */
L_171A78C0:
    PUSH32(esp, edi); /* 0x171A78C0: push edi */
    ecx = esi; /* 0x171A78C1: mov ecx, esi */
    esi = MEM32(ebp + 0xC); /* 0x171A78C3: mov esi, dword ptr [ebp + 0xc] */
    edx = ecx; /* 0x171A78C6: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171A78C8: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171A78C8: shr ecx, 2 */
    PUSH32(esp, eax); /* 0x171A78CB: push eax */
    PUSH32(esp, 0x08000080u); /* 0x171A78CC: push 0x8000080 */
    edi = ebx; /* 0x171A78D1: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171A78D3: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 2); /* 0x171A78D5: push 2 */
    PUSH32(esp, eax); /* 0x171A78D7: push eax */
    PUSH32(esp, eax); /* 0x171A78D8: push eax */
    ecx = edx; /* 0x171A78D9: mov ecx, edx */
    PUSH32(esp, 0x40000000u); /* 0x171A78DB: push 0x40000000 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A78E0: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171A78E3: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171A78E6: rep movsb byte ptr es:[edi], byte ptr [esi] */
    RECOMP_ICALL(MEM32(0x170010F0)); /* 0x171A78E8: call dword ptr [0x170010f0] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A78EE: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x171A78F0: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A78FC; /* 0x171A78F3: jne 0x171a78fc */
L_171A78F5:
    esi = 0x8876038Fu; /* 0x171A78F5: mov esi, 0x8876038f */
    goto L_171A7942; /* 0x171A78FA: jmp 0x171a7942 */
L_171A78FC:
    PUSH32(esp, 0x60u); /* 0x171A78FC: push 0x60 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A78FE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A7903: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A7905: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7927; /* 0x171A7906: je 0x171a7927 */
L_171A7908:
    edx = MEM32(ebp + 0x10); /* 0x171A7908: mov edx, dword ptr [ebp + 0x10] */
    ecx = edx; /* 0x171A790B: mov ecx, edx */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x171A790D: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x171A790D: shr ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x171A790F: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x171A7912: push ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x171A7913: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x171A7916: push edx */
    PUSH32(esp, edi); /* 0x171A7917: push edi */
    PUSH32(esp, ebx); /* 0x171A7918: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A7919: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x171A791C: mov ecx, eax */
    RECOMP_CALL(sub_171A63C5); /* 0x171A791E: call 0x171a63c5 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A7923: mov esi, eax */
    goto L_171A7929; /* 0x171A7925: jmp 0x171a7929 */
L_171A7927:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A7927: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A7929:
    /* test esi, esi */ /* 0x171A7929: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A794D; /* 0x171A792B: jne 0x171a794d */
L_171A792D:
    PUSH32(esp, edi); /* 0x171A792D: push edi */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A792E: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A7934: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x170010FC)); /* 0x171A7937: call dword ptr [0x170010fc] */
    RECOMP_FLAGS_IN();
    esi = 0x8007000Eu; /* 0x171A793D: mov esi, 0x8007000e */
L_171A7942:
    PUSH32(esp, ebx); /* 0x171A7942: push ebx */
    RECOMP_CALL(sub_1721B010); /* 0x171A7943: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A7948: pop ecx */
    eax = esi; /* 0x171A7949: mov eax, esi */
    goto L_171A7978; /* 0x171A794B: jmp 0x171a7978 */
L_171A794D:
    ecx = esi; /* 0x171A794D: mov ecx, esi */
    RECOMP_CALL(sub_171A65A8); /* 0x171A794F: call 0x171a65a8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A7954: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7971; /* 0x171A7956: je 0x171a7971 */
L_171A7958:
    eax = MEM32(esi); /* 0x171A7958: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171A795A: push 1 */
    ecx = esi; /* 0x171A795C: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x171A795E: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A7961: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x170010FC)); /* 0x171A7964: call dword ptr [0x170010fc] */
    RECOMP_FLAGS_IN();
    eax = 0x8876038Fu; /* 0x171A796A: mov eax, 0x8876038f */
    goto L_171A7978; /* 0x171A796F: jmp 0x171a7978 */
L_171A7971:
    eax = MEM32(ebp + 0x14); /* 0x171A7971: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = esi; /* 0x171A7974: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A7976: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A7978:
    edi = POP32_VAL(esp); /* 0x171A7978: pop edi */
L_171A7979:
    esi = POP32_VAL(esp); /* 0x171A7979: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A797A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A797B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A797C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171A7984(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7984u);

L_171A7984:
    edi = edi; /* 0x171A7984: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7986: push ebp */
    ebp = esp; /* 0x171A7987: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x114u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x114u; /* 0x171A7989: sub esp, 0x114 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171A798F: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171A7994: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171A7995: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171A7998: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171A7999: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171A799C: push edi */
    edi = MEM32(ebp + 0x14); /* 0x171A799D: mov edi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A79A0: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x110)) = esi; /* 0x171A79A3: mov dword ptr [ebp - 0x110], esi */
    MEM32(ebp + (-0x114)) = edi; /* 0x171A79A9: mov dword ptr [ebp - 0x114], edi */
    RECOMP_CALL(sub_1702B1FB); /* 0x171A79AF: call 0x1702b1fb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A79B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A79E7; /* 0x171A79B6: jne 0x171a79e7 */
L_171A79B8:
    PUSH32(esp, 0x104u); /* 0x171A79B8: push 0x104 */
    eax = ebp + (-0x108); /* 0x171A79BD: lea eax, [ebp - 0x108] */
    PUSH32(esp, ebx); /* 0x171A79C3: push ebx */
    PUSH32(esp, eax); /* 0x171A79C4: push eax */
    RECOMP_CALL(sub_1721B550); /* 0x171A79C5: call 0x1721b550 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171A79CA: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x171A79CD: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A79CE: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x108); /* 0x171A79D1: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171A79D7: push eax */
    PUSH32(esp, esi); /* 0x171A79D8: push esi */
    MEM8(ebp + (-0x5)) = (uint8_t)(0); /* 0x171A79D9: mov byte ptr [ebp - 5], 0 */
    RECOMP_CALL(sub_171A788E); /* 0x171A79DD: call 0x171a788e */
    RECOMP_FLAGS_IN();
    goto L_171A7ACF; /* 0x171A79E2: jmp 0x171a7acf */
L_171A79E7:
    PUSH32(esp, ebx); /* 0x171A79E7: push ebx */
    RECOMP_CALL(sub_1721B278); /* 0x171A79E8: call 0x1721b278 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A79ED: inc eax */
    _flag_k = FK_INC;
    esi = eax + eax; /* 0x171A79EE: lea esi, [eax + eax] */
    PUSH32(esp, esi); /* 0x171A79F1: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x171A79F2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A79F7: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A79F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, eax */ /* 0x171A79FB: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A79FD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A79FE: pop ecx */
    MEM32(ebp + (-0x10C)) = edi; /* 0x171A79FF: mov dword ptr [ebp - 0x10c], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7A11; /* 0x171A7A05: jne 0x171a7a11 */
L_171A7A07:
    eax = 0x8007000Eu; /* 0x171A7A07: mov eax, 0x8007000e */
    goto L_171A7ACF; /* 0x171A7A0C: jmp 0x171a7acf */
L_171A7A11:
    ecx = esi; /* 0x171A7A11: mov ecx, esi */
    edx = ecx; /* 0x171A7A13: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171A7A15: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171A7A15: shr ecx, 2 */
    PUSH32(esp, eax); /* 0x171A7A18: push eax */
    esi = ebx; /* 0x171A7A19: mov esi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171A7A1B: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 0x08000080u); /* 0x171A7A1D: push 0x8000080 */
    PUSH32(esp, 2); /* 0x171A7A22: push 2 */
    PUSH32(esp, eax); /* 0x171A7A24: push eax */
    PUSH32(esp, eax); /* 0x171A7A25: push eax */
    ecx = edx; /* 0x171A7A26: mov ecx, edx */
    PUSH32(esp, 0x40000000u); /* 0x171A7A28: push 0x40000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171A7A2D: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171A7A30: push ebx */
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171A7A31: rep movsb byte ptr es:[edi], byte ptr [esi] */
    RECOMP_ICALL(MEM32(0x170010AC)); /* 0x171A7A33: call dword ptr [0x170010ac] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A7A39: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x171A7A3B: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7A47; /* 0x171A7A3E: jne 0x171a7a47 */
L_171A7A40:
    esi = 0x8876038Fu; /* 0x171A7A40: mov esi, 0x8876038f */
    goto L_171A7A93; /* 0x171A7A45: jmp 0x171a7a93 */
L_171A7A47:
    PUSH32(esp, 0x60u); /* 0x171A7A47: push 0x60 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A7A49: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A7A4E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A7A50: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7A7A; /* 0x171A7A51: je 0x171a7a7a */
L_171A7A53:
    edx = MEM32(ebp + 0x10); /* 0x171A7A53: mov edx, dword ptr [ebp + 0x10] */
    ecx = edx; /* 0x171A7A56: mov ecx, edx */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x171A7A58: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x171A7A58: shr ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x171A7A5A: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x171A7A5D: push ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x171A7A5E: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x171A7A61: push edx */
    PUSH32(esp, edi); /* 0x171A7A62: push edi */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x171A7A63: push dword ptr [ebp - 0x10c] */
    ecx = eax; /* 0x171A7A69: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x171A7A6B: push dword ptr [ebp - 0x110] */
    RECOMP_CALL(sub_171A645D); /* 0x171A7A71: call 0x171a645d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A7A76: mov esi, eax */
    goto L_171A7A7C; /* 0x171A7A78: jmp 0x171a7a7c */
L_171A7A7A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A7A7A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A7A7C:
    /* test esi, esi */ /* 0x171A7A7C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A7AA3; /* 0x171A7A7E: jne 0x171a7aa3 */
L_171A7A80:
    PUSH32(esp, edi); /* 0x171A7A80: push edi */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A7A81: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x171A7A87: push ebx */
    RECOMP_ICALL(MEM32(0x17001080)); /* 0x171A7A88: call dword ptr [0x17001080] */
    RECOMP_FLAGS_IN();
    esi = 0x8007000Eu; /* 0x171A7A8E: mov esi, 0x8007000e */
L_171A7A93:
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x171A7A93: push dword ptr [ebp - 0x10c] */
    RECOMP_CALL(sub_1721B010); /* 0x171A7A99: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A7A9E: pop ecx */
    eax = esi; /* 0x171A7A9F: mov eax, esi */
    goto L_171A7ACF; /* 0x171A7AA1: jmp 0x171a7acf */
L_171A7AA3:
    ecx = esi; /* 0x171A7AA3: mov ecx, esi */
    RECOMP_CALL(sub_171A65A8); /* 0x171A7AA5: call 0x171a65a8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A7AAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7AC5; /* 0x171A7AAC: je 0x171a7ac5 */
L_171A7AAE:
    eax = MEM32(esi); /* 0x171A7AAE: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171A7AB0: push 1 */
    ecx = esi; /* 0x171A7AB2: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x171A7AB4: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x171A7AB7: push ebx */
    RECOMP_ICALL(MEM32(0x17001080)); /* 0x171A7AB8: call dword ptr [0x17001080] */
    RECOMP_FLAGS_IN();
    eax = 0x8876038Fu; /* 0x171A7ABE: mov eax, 0x8876038f */
    goto L_171A7ACF; /* 0x171A7AC3: jmp 0x171a7acf */
L_171A7AC5:
    eax = MEM32(ebp + (-0x114)); /* 0x171A7AC5: mov eax, dword ptr [ebp - 0x114] */
    MEM32(eax) = esi; /* 0x171A7ACB: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A7ACD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A7ACF:
    ecx = MEM32(ebp + (-0x4)); /* 0x171A7ACF: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171A7AD2: pop edi */
    esi = POP32_VAL(esp); /* 0x171A7AD3: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A7AD4: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171A7AD5: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A7ADA: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A7ADB: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171A7AE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7AE3u);

L_171A7AE3:
    edi = edi; /* 0x171A7AE3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7AE5: push ebp */
    ebp = esp; /* 0x171A7AE6: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A7AE8: push ecx */
    PUSH32(esp, ebx); /* 0x171A7AE9: push ebx */
    PUSH32(esp, esi); /* 0x171A7AEA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171A7AEB: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171A7AEE: mov eax, dword ptr [esi + 4] */
    edx = esi + 0x8; /* 0x171A7AF1: lea edx, [esi + 8] */
    PUSH32(esp, edx); /* 0x171A7AF4: push edx */
    PUSH32(esp, eax); /* 0x171A7AF5: push eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171A7AF6: mov dword ptr [ebp - 4], ecx */
    RECOMP_CALL(sub_171A6612); /* 0x171A7AF9: call 0x171a6612 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A7AFE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171A7B00: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7B5A; /* 0x171A7B02: jne 0x171a7b5a */
L_171A7B04:
    PUSH32(esp, edi); /* 0x171A7B04: push edi */
    edi = MEM32(esi + 0x1C); /* 0x171A7B05: mov edi, dword ptr [esi + 0x1c] */
    /* cmp edi, ebx */ /* 0x171A7B08: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7B27; /* 0x171A7B0A: je 0x171a7b27 */
L_171A7B0C:
    /* cmp MEM32(edi), ebx */ /* 0x171A7B0C: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A7B27; /* 0x171A7B0E: jbe 0x171a7b27 */
L_171A7B10:
    eax = MEM32(edi + 0xC); /* 0x171A7B10: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, MEM32(eax + ebx * 4)); /* 0x171A7B13: push dword ptr [eax + ebx*4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171A7B16: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_171A69FE); /* 0x171A7B19: call 0x171a69fe */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A7B1E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A7B59; /* 0x171A7B20: jne 0x171a7b59 */
L_171A7B22:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171A7B22: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi) */ /* 0x171A7B23: cmp ebx, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A7B10; /* 0x171A7B25: jb 0x171a7b10 */
L_171A7B27:
    /* cmp MEM32(esi + 0x24), 0 */ /* 0x171A7B27: cmp dword ptr [esi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x4)); /* 0x171A7B2B: mov ecx, dword ptr [ebp - 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7B37; /* 0x171A7B2E: jne 0x171a7b37 */
L_171A7B30:
    RECOMP_CALL(sub_171A66CD); /* 0x171A7B30: call 0x171a66cd */
    RECOMP_FLAGS_IN();
    goto L_171A7B4B; /* 0x171A7B35: jmp 0x171a7b4b */
L_171A7B37:
    esi = MEM32(esi + 0x20); /* 0x171A7B37: mov esi, dword ptr [esi + 0x20] */
    /* test esi, esi */ /* 0x171A7B3A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7B46; /* 0x171A7B3C: je 0x171a7b46 */
L_171A7B3E:
    PUSH32(esp, esi); /* 0x171A7B3E: push esi */
    RECOMP_CALL(sub_171A6759); /* 0x171A7B3F: call 0x171a6759 */
    RECOMP_FLAGS_IN();
    goto L_171A7B4B; /* 0x171A7B44: jmp 0x171a7b4b */
L_171A7B46:
    RECOMP_CALL(sub_171A6683); /* 0x171A7B46: call 0x171a6683 */
    RECOMP_FLAGS_IN();
L_171A7B4B:
    /* test eax, eax */ /* 0x171A7B4B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A7B59; /* 0x171A7B4D: jne 0x171a7b59 */
L_171A7B4F:
    ecx = MEM32(ebp + (-0x4)); /* 0x171A7B4F: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, 2); /* 0x171A7B52: push 2 */
    RECOMP_CALL(sub_171A68CE); /* 0x171A7B54: call 0x171a68ce */
    RECOMP_FLAGS_IN();
L_171A7B59:
    edi = POP32_VAL(esp); /* 0x171A7B59: pop edi */
L_171A7B5A:
    esi = POP32_VAL(esp); /* 0x171A7B5A: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A7B5B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A7B5C: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A7B5D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A7B65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7B65u);

L_171A7B65:
    edi = edi; /* 0x171A7B65: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7B67: push ebp */
    ebp = esp; /* 0x171A7B68: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A7B6A: push esi */
    esi = ecx; /* 0x171A7B6B: mov esi, ecx */
    RECOMP_CALL(sub_171A7B8B); /* 0x171A7B6D: call 0x171a7b8b */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A7B72: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7B7F; /* 0x171A7B76: je 0x171a7b7f */
L_171A7B78:
    PUSH32(esp, esi); /* 0x171A7B78: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A7B79: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A7B7E: pop ecx */
L_171A7B7F:
    eax = esi; /* 0x171A7B7F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A7B81: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A7B82: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A7B83: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A7B8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7B8Bu);

    goto L_171A7B8B;
L_171A56C6:
    edi = edi; /* 0x171A56C6: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A56C8: push esi */
    PUSH32(esp, edi); /* 0x171A56C9: push edi */
    esi = ecx; /* 0x171A56CA: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A56CC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xC), edi */ /* 0x171A56CE: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A56E7; /* 0x171A56D1: je 0x171a56e7 */
L_171A56D3:
    /* cmp MEM32(esi), edi */ /* 0x171A56D3: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A56E7; /* 0x171A56D5: jbe 0x171a56e7 */
L_171A56D7:
    eax = MEM32(esi + 0xC); /* 0x171A56D7: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171A56DA: mov ecx, dword ptr [eax + edi*4] */
    RECOMP_CALL(sub_171A52D2); /* 0x171A56DD: call 0x171a52d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A56E2: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A56E3: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A56D7; /* 0x171A56E5: jb 0x171a56d7 */
L_171A56E7:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A56E7: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A56EA: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A56EF: pop ecx */
    edi = POP32_VAL(esp); /* 0x171A56F0: pop edi */
    esi = POP32_VAL(esp); /* 0x171A56F1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A56F2: ret  */
L_171A7B8B:
    edi = edi; /* 0x171A7B8B: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A7B8D: push esi */
    PUSH32(esp, edi); /* 0x171A7B8E: push edi */
    edi = MEM32(0x170010F8); /* 0x171A7B8F: mov edi, dword ptr [0x170010f8] */
    esi = ecx; /* 0x171A7B95: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171A7B97: push dword ptr [esi + 0x30] */
    MEM32(esi) = 0x17023960u; /* 0x171A7B9A: mov dword ptr [esi], 0x17023960 */
    RECOMP_ICALL(edi); /* 0x171A7BA0: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x171A7BA2: push dword ptr [esi + 0x34] */
    RECOMP_ICALL(edi); /* 0x171A7BA5: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x38); /* 0x171A7BA7: mov eax, dword ptr [esi + 0x38] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A7BAA: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7BB2; /* 0x171A7BAD: je 0x171a7bb2 */
L_171A7BAF:
    PUSH32(esp, eax); /* 0x171A7BAF: push eax */
    RECOMP_ICALL(edi); /* 0x171A7BB0: call edi */
    RECOMP_FLAGS_IN();
L_171A7BB2:
    SET_LO8(eax, MEM8(esi + 0x48)); /* 0x171A7BB2: mov al, byte ptr [esi + 0x48] */
    /* test LO8(eax), 0x40u */ /* 0x171A7BB5: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7BC8; /* 0x171A7BB7: je 0x171a7bc8 */
L_171A7BB9:
    /* test LO8(eax), LO8(eax) */ /* 0x171A7BB9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A7BD5; /* 0x171A7BBB: js 0x171a7bd5 */
L_171A7BBD:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A7BBD: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(MEM32(0x17001080)); /* 0x171A7BC0: call dword ptr [0x17001080] */
    RECOMP_FLAGS_IN();
    goto L_171A7BD5; /* 0x171A7BC6: jmp 0x171a7bd5 */
L_171A7BC8:
    /* test LO8(eax), LO8(eax) */ /* 0x171A7BC8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A7BD5; /* 0x171A7BCA: js 0x171a7bd5 */
L_171A7BCC:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A7BCC: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(MEM32(0x170010FC)); /* 0x171A7BCF: call dword ptr [0x170010fc] */
    RECOMP_FLAGS_IN();
L_171A7BD5:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A7BD5: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x171A7BD8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x171A7BDD: mov eax, dword ptr [esi + 8] */
    ecx = POP32_VAL(esp); /* 0x171A7BE0: pop ecx */
    ecx = MEM32(eax); /* 0x171A7BE1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171A7BE3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171A7BE4: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x20; /* 0x171A7BE7: lea ecx, [esi + 0x20] */
    RECOMP_CALL(sub_171A60BD); /* 0x171A7BEA: call 0x171a60bd */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171A7BEF: pop edi */
    ecx = esi + 0x10; /* 0x171A7BF0: lea ecx, [esi + 0x10] */
    esi = POP32_VAL(esp); /* 0x171A7BF3: pop esi */
    RECOMP_BACKEDGE();
    goto L_171A56C6; /* 0x171A7BF4: jmp 0x171a56c6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A7BFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7BFEu);

L_171A7BFE:
    edi = edi; /* 0x171A7BFE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7C00: push ebp */
    ebp = esp; /* 0x171A7C01: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A7C03: push esi */
    esi = ecx; /* 0x171A7C04: mov esi, ecx */
    ecx = esi + 0x14; /* 0x171A7C06: lea ecx, [esi + 0x14] */
    MEM32(esi) = 0x17023980u; /* 0x171A7C09: mov dword ptr [esi], 0x17023980 */
    RECOMP_CALL(sub_171A60F5); /* 0x171A7C0F: call 0x171a60f5 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A7C14: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x170237F8u; /* 0x171A7C18: mov dword ptr [esi], 0x170237f8 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7C27; /* 0x171A7C1E: je 0x171a7c27 */
L_171A7C20:
    PUSH32(esp, esi); /* 0x171A7C20: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A7C21: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A7C26: pop ecx */
L_171A7C27:
    eax = esi; /* 0x171A7C27: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A7C29: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A7C2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A7C2B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A7C33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7C33u);

L_171A7C33:
    edi = edi; /* 0x171A7C33: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7C35: push ebp */
    ebp = esp; /* 0x171A7C36: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A7C38: push esi */
    esi = ecx; /* 0x171A7C39: mov esi, ecx */
    RECOMP_CALL(sub_171A7C59); /* 0x171A7C3B: call 0x171a7c59 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A7C40: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7C4D; /* 0x171A7C44: je 0x171a7c4d */
L_171A7C46:
    PUSH32(esp, esi); /* 0x171A7C46: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A7C47: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A7C4C: pop ecx */
L_171A7C4D:
    eax = esi; /* 0x171A7C4D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A7C4F: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A7C50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A7C51: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A7C59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7C59u);

    goto L_171A7C59;
L_171A56C6:
    edi = edi; /* 0x171A56C6: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A56C8: push esi */
    PUSH32(esp, edi); /* 0x171A56C9: push edi */
    esi = ecx; /* 0x171A56CA: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A56CC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xC), edi */ /* 0x171A56CE: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A56E7; /* 0x171A56D1: je 0x171a56e7 */
L_171A56D3:
    /* cmp MEM32(esi), edi */ /* 0x171A56D3: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A56E7; /* 0x171A56D5: jbe 0x171a56e7 */
L_171A56D7:
    eax = MEM32(esi + 0xC); /* 0x171A56D7: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171A56DA: mov ecx, dword ptr [eax + edi*4] */
    RECOMP_CALL(sub_171A52D2); /* 0x171A56DD: call 0x171a52d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A56E2: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A56E3: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A56D7; /* 0x171A56E5: jb 0x171a56d7 */
L_171A56E7:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A56E7: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A56EA: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A56EF: pop ecx */
    edi = POP32_VAL(esp); /* 0x171A56F0: pop edi */
    esi = POP32_VAL(esp); /* 0x171A56F1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A56F2: ret  */
L_171A7C59:
    edi = edi; /* 0x171A7C59: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A7C5B: push esi */
    esi = ecx; /* 0x171A7C5C: mov esi, ecx */
    eax = MEM32(esi + 0x14); /* 0x171A7C5E: mov eax, dword ptr [esi + 0x14] */
    /* test eax, eax */ /* 0x171A7C61: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x170239C4u; /* 0x171A7C63: mov dword ptr [esi], 0x170239c4 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7C72; /* 0x171A7C69: je 0x171a7c72 */
L_171A7C6B:
    PUSH32(esp, eax); /* 0x171A7C6B: push eax */
    RECOMP_ICALL(MEM32(0x170010A4)); /* 0x171A7C6C: call dword ptr [0x170010a4] */
    RECOMP_FLAGS_IN();
L_171A7C72:
    /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu */ /* 0x171A7C72: cmp dword ptr [esi + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171A7C76: push edi */
    edi = MEM32(0x170010F8); /* 0x171A7C77: mov edi, dword ptr [0x170010f8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7C8D; /* 0x171A7C7D: je 0x171a7c8d */
L_171A7C7F:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x171A7C7F: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(MEM32(0x17001090)); /* 0x171A7C82: call dword ptr [0x17001090] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x171A7C88: push dword ptr [esi + 0x10] */
    RECOMP_ICALL(edi); /* 0x171A7C8B: call edi */
    RECOMP_FLAGS_IN();
L_171A7C8D:
    eax = MEM32(esi + 0xC); /* 0x171A7C8D: mov eax, dword ptr [esi + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A7C90: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7C98; /* 0x171A7C93: je 0x171a7c98 */
L_171A7C95:
    PUSH32(esp, eax); /* 0x171A7C95: push eax */
    RECOMP_ICALL(edi); /* 0x171A7C96: call edi */
    RECOMP_FLAGS_IN();
L_171A7C98:
    /* test MEM8(esi + 0x30), 1 */ /* 0x171A7C98: test byte ptr [esi + 0x30], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x30)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x171A7C9C: pop edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7CA8; /* 0x171A7C9D: je 0x171a7ca8 */
L_171A7C9F:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x171A7C9F: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_1721B224); /* 0x171A7CA2: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A7CA7: pop ecx */
L_171A7CA8:
    eax = MEM32(esi + 0x8); /* 0x171A7CA8: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x171A7CAB: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171A7CAD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171A7CAE: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x44; /* 0x171A7CB1: lea ecx, [esi + 0x44] */
    RECOMP_CALL(sub_171A60F5); /* 0x171A7CB4: call 0x171a60f5 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x34; /* 0x171A7CB9: lea ecx, [esi + 0x34] */
    esi = POP32_VAL(esp); /* 0x171A7CBC: pop esi */
    RECOMP_BACKEDGE();
    goto L_171A56C6; /* 0x171A7CBD: jmp 0x171a56c6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A7CC7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7CC7u);

L_171A7CC7:
    edi = edi; /* 0x171A7CC7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7CC9: push ebp */
    ebp = esp; /* 0x171A7CCA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x171A7CCC: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171A7CCF: push esi */
    eax = ebp + (-0x18); /* 0x171A7CD0: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171A7CD3: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A7CD4: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x171A7CD7: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A7CD9: push dword ptr [ebp + 8] */
    MEM32(ebp + (-0x20)) = esi; /* 0x171A7CDC: mov dword ptr [ebp - 0x20], esi */
    RECOMP_CALL(sub_171A542F); /* 0x171A7CDF: call 0x171a542f */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A7CE4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7CFB; /* 0x171A7CE6: je 0x171a7cfb */
L_171A7CE8:
    eax = ebp + (-0x10); /* 0x171A7CE8: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x171A7CEB: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A7CEC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A7CEF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A542F); /* 0x171A7CF2: call 0x171a542f */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A7CF7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A7D05; /* 0x171A7CF9: jne 0x171a7d05 */
L_171A7CFB:
    eax = 0x8876038Fu; /* 0x171A7CFB: mov eax, 0x8876038f */
    goto L_171A7F0C; /* 0x171A7D00: jmp 0x171a7f0c */
L_171A7D05:
    eax = MEM32(ebp + (-0x10)); /* 0x171A7D05: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x171A7D08: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A7D09: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(eax), 0 */ /* 0x171A7D0B: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7D13; /* 0x171A7D0E: jne 0x171a7d13 */
L_171A7D10:
    MEM32(ebp + (-0x10)) = edi; /* 0x171A7D10: mov dword ptr [ebp - 0x10], edi */
L_171A7D13:
    eax = ebp + (-0x1); /* 0x171A7D13: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x171A7D16: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A7D17: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A7D1A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A559C); /* 0x171A7D1D: call 0x171a559c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A7D22: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A7D30; /* 0x171A7D24: jne 0x171a7d30 */
L_171A7D26:
    eax = 0x8876038Fu; /* 0x171A7D26: mov eax, 0x8876038f */
    goto L_171A7F0B; /* 0x171A7D2B: jmp 0x171a7f0b */
L_171A7D30:
    /* cmp MEM8(ebp + (-0x1)), 2 */ /* 0x171A7D30: cmp byte ptr [ebp - 1], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x171A7D34: push ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7EC7; /* 0x171A7D35: je 0x171a7ec7 */
L_171A7D3B:
    PUSH32(esp, 0x10u); /* 0x171A7D3B: push 0x10 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A7D3D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171A7D42: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A7D44: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7D5B; /* 0x171A7D45: je 0x171a7d5b */
L_171A7D47:
    MEM32(eax) = edi; /* 0x171A7D47: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = edi; /* 0x171A7D49: mov dword ptr [eax + 4], edi */
    MEM32(eax + 0x8) = 2; /* 0x171A7D4C: mov dword ptr [eax + 8], 2 */
    MEM32(eax + 0xC) = edi; /* 0x171A7D53: mov dword ptr [eax + 0xc], edi */
    MEM32(ebp + (-0x8)) = eax; /* 0x171A7D56: mov dword ptr [ebp - 8], eax */
    goto L_171A7D5E; /* 0x171A7D59: jmp 0x171a7d5e */
L_171A7D5B:
    MEM32(ebp + (-0x8)) = edi; /* 0x171A7D5B: mov dword ptr [ebp - 8], edi */
L_171A7D5E:
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x171A7D5E: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7D6D; /* 0x171A7D61: jne 0x171a7d6d */
L_171A7D63:
    eax = 0x8007000Eu; /* 0x171A7D63: mov eax, 0x8007000e */
    goto L_171A7F0A; /* 0x171A7D68: jmp 0x171a7f0a */
L_171A7D6D:
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x171A7D6D: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7DB7; /* 0x171A7D71: jne 0x171a7db7 */
L_171A7D73:
    eax = ebp + (-0x1C); /* 0x171A7D73: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x171A7D76: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A7D77: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A7D7A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A55C8); /* 0x171A7D7D: call 0x171a55c8 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A7D82: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7E99; /* 0x171A7D84: je 0x171a7e99 */
L_171A7D8A:
    PUSH32(esp, 8); /* 0x171A7D8A: push 8 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A7D8C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171A7D91: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A7D93: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7DA3; /* 0x171A7D94: je 0x171a7da3 */
L_171A7D96:
    ecx = MEM32(ebp + (-0x1C)); /* 0x171A7D96: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(eax) = ecx; /* 0x171A7D99: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edi; /* 0x171A7D9B: mov dword ptr [eax + 4], edi */
    MEM32(ebp + (-0xC)) = eax; /* 0x171A7D9E: mov dword ptr [ebp - 0xc], eax */
    goto L_171A7DA6; /* 0x171A7DA1: jmp 0x171a7da6 */
L_171A7DA3:
    MEM32(ebp + (-0xC)) = edi; /* 0x171A7DA3: mov dword ptr [ebp - 0xc], edi */
L_171A7DA6:
    /* cmp MEM32(ebp + (-0xC)), edi */ /* 0x171A7DA6: cmp dword ptr [ebp - 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7E86; /* 0x171A7DA9: je 0x171a7e86 */
L_171A7DAF:
    ecx = MEM32(ebp + (-0x8)); /* 0x171A7DAF: mov ecx, dword ptr [ebp - 8] */
    goto L_171A7E3C; /* 0x171A7DB2: jmp 0x171a7e3c */
L_171A7DB7:
    /* cmp MEM8(ebp + (-0x1)), 1 */ /* 0x171A7DB7: cmp byte ptr [ebp - 1], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7E99; /* 0x171A7DBB: jne 0x171a7e99 */
L_171A7DC1:
    eax = ebp + (-0x14); /* 0x171A7DC1: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x171A7DC4: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A7DC5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A7DC8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A542F); /* 0x171A7DCB: call 0x171a542f */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A7DD0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7E99; /* 0x171A7DD2: je 0x171a7e99 */
L_171A7DD8:
    eax = MEM32(ebp + (-0x14)); /* 0x171A7DD8: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A7DDB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x171A7DDD: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7E1B; /* 0x171A7DDF: je 0x171a7e1b */
L_171A7DE1:
    edx = eax + 0x1; /* 0x171A7DE1: lea edx, [eax + 1] */
L_171A7DE4:
    SET_LO8(ecx, MEM8(eax)); /* 0x171A7DE4: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A7DE6: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171A7DE7: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A7DE4; /* 0x171A7DE9: jne 0x171a7de4 */
L_171A7DEB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171A7DEB: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x171A7DED: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171A7DF0: push esi */
    RECOMP_CALL(sub_1721B254); /* 0x171A7DF1: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A7DF6: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x171A7DF8: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A7DFA: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7E86; /* 0x171A7DFB: je 0x171a7e86 */
L_171A7E01:
    ecx = esi; /* 0x171A7E01: mov ecx, esi */
    esi = MEM32(ebp + (-0x14)); /* 0x171A7E03: mov esi, dword ptr [ebp - 0x14] */
    eax = ecx; /* 0x171A7E06: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171A7E08: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171A7E08: shr ecx, 2 */
    edi = ebx; /* 0x171A7E0B: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171A7E0D: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171A7E0F: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171A7E11: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171A7E14: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + (-0x20)); /* 0x171A7E16: mov esi, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A7E19: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A7E1B:
    PUSH32(esp, 8); /* 0x171A7E1B: push 8 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A7E1D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171A7E22: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A7E24: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7E31; /* 0x171A7E25: je 0x171a7e31 */
L_171A7E27:
    MEM32(eax) = edi; /* 0x171A7E27: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = ebx; /* 0x171A7E29: mov dword ptr [eax + 4], ebx */
    MEM32(ebp + (-0xC)) = eax; /* 0x171A7E2C: mov dword ptr [ebp - 0xc], eax */
    goto L_171A7E34; /* 0x171A7E2F: jmp 0x171a7e34 */
L_171A7E31:
    MEM32(ebp + (-0xC)) = edi; /* 0x171A7E31: mov dword ptr [ebp - 0xc], edi */
L_171A7E34:
    /* cmp MEM32(ebp + (-0xC)), edi */ /* 0x171A7E34: cmp dword ptr [ebp - 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x8)); /* 0x171A7E37: mov ecx, dword ptr [ebp - 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7EA0; /* 0x171A7E3A: je 0x171a7ea0 */
L_171A7E3C:
    eax = ebp + (-0xC); /* 0x171A7E3C: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x171A7E3F: push eax */
    RECOMP_CALL(sub_171A902A); /* 0x171A7E40: call 0x171a902a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A7E45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7EBB; /* 0x171A7E47: je 0x171a7ebb */
L_171A7E49:
    eax = ebp + (-0x1); /* 0x171A7E49: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x171A7E4C: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A7E4D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A7E50: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A559C); /* 0x171A7E53: call 0x171a559c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A7E58: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7E99; /* 0x171A7E5A: je 0x171a7e99 */
L_171A7E5C:
    /* cmp MEM8(ebp + (-0x1)), 2 */ /* 0x171A7E5C: cmp byte ptr [ebp - 1], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7D6D; /* 0x171A7E60: jne 0x171a7d6d */
L_171A7E66:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171A7E66: push dword ptr [ebp - 8] */
    eax = MEM32(esi + 0x8); /* 0x171A7E69: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171A7E6C: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171A7E6F: push eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x34u; /* 0x171A7E70: add esi, 0x34 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x171A7E73: push esi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x171A7E74: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x171A7E77: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_171A92FB); /* 0x171A7E7A: call 0x171a92fb */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171A7E7F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x171A7E81: mov dword ptr [ebp + 0xc], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7EE9; /* 0x171A7E84: jne 0x171a7ee9 */
L_171A7E86:
    esi = 0x8007000Eu; /* 0x171A7E86: mov esi, 0x8007000e */
L_171A7E8B:
    ecx = MEM32(ebp + (-0x8)); /* 0x171A7E8B: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, 1); /* 0x171A7E8E: push 1 */
    RECOMP_CALL(sub_171A7600); /* 0x171A7E90: call 0x171a7600 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A7E95: mov eax, esi */
    goto L_171A7F0A; /* 0x171A7E97: jmp 0x171a7f0a */
L_171A7E99:
    esi = 0x8876038Fu; /* 0x171A7E99: mov esi, 0x8876038f */
    RECOMP_BACKEDGE();
    goto L_171A7E8B; /* 0x171A7E9E: jmp 0x171a7e8b */
L_171A7EA0:
    PUSH32(esp, 1); /* 0x171A7EA0: push 1 */
    RECOMP_CALL(sub_171A7600); /* 0x171A7EA2: call 0x171a7600 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, edi */ /* 0x171A7EA7: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7D63; /* 0x171A7EA9: je 0x171a7d63 */
L_171A7EAF:
    PUSH32(esp, ebx); /* 0x171A7EAF: push ebx */
    RECOMP_CALL(sub_1721B224); /* 0x171A7EB0: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A7EB5: pop ecx */
    RECOMP_BACKEDGE();
    goto L_171A7D63; /* 0x171A7EB6: jmp 0x171a7d63 */
L_171A7EBB:
    ecx = MEM32(ebp + (-0xC)); /* 0x171A7EBB: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, 1); /* 0x171A7EBE: push 1 */
    RECOMP_CALL(sub_171A5474); /* 0x171A7EC0: call 0x171a5474 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171A7E86; /* 0x171A7EC5: jmp 0x171a7e86 */
L_171A7EC7:
    eax = MEM32(esi + 0x8); /* 0x171A7EC7: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x171A7ECA: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171A7ECB: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171A7ECE: push eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x34u; /* 0x171A7ECF: add esi, 0x34 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x171A7ED2: push esi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x171A7ED3: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x171A7ED6: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_171A92FB); /* 0x171A7ED9: call 0x171a92fb */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171A7EDE: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x171A7EE0: mov dword ptr [ebp + 0xc], eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7D63; /* 0x171A7EE3: je 0x171a7d63 */
L_171A7EE9:
    ecx = MEM32(ebp + 0x10); /* 0x171A7EE9: mov ecx, dword ptr [ebp + 0x10] */
    eax = ebp + 0xC; /* 0x171A7EEC: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171A7EEF: push eax */
    RECOMP_CALL(sub_171A902A); /* 0x171A7EF0: call 0x171a902a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A7EF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A7F08; /* 0x171A7EF7: jne 0x171a7f08 */
L_171A7EF9:
    ecx = MEM32(ebp + 0xC); /* 0x171A7EF9: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x171A7EFC: push 1 */
    RECOMP_CALL(sub_171A54A3); /* 0x171A7EFE: call 0x171a54a3 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171A7D63; /* 0x171A7F03: jmp 0x171a7d63 */
L_171A7F08:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A7F08: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A7F0A:
    ebx = POP32_VAL(esp); /* 0x171A7F0A: pop ebx */
L_171A7F0B:
    edi = POP32_VAL(esp); /* 0x171A7F0B: pop edi */
L_171A7F0C:
    esi = POP32_VAL(esp); /* 0x171A7F0C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A7F0D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A7F0E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A7F16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7F16u);

L_171A7F16:
    edi = edi; /* 0x171A7F16: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7F18: push ebp */
    ebp = esp; /* 0x171A7F19: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A7F1B: push ecx */
    edx = MEM32(ecx + 0x1C); /* 0x171A7F1C: mov edx, dword ptr [ecx + 0x1c] */
    eax = MEM32(ecx + 0x28); /* 0x171A7F1F: mov eax, dword ptr [ecx + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171A7F22: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edx; /* 0x171A7F24: mov dword ptr [ebp - 4], edx */
    edx = ecx + 0x44; /* 0x171A7F27: lea edx, [ecx + 0x44] */
    PUSH32(esp, edx); /* 0x171A7F2A: push edx */
    PUSH32(esp, eax); /* 0x171A7F2B: push eax */
    eax = ebp + (-0x4); /* 0x171A7F2C: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171A7F2F: push eax */
    RECOMP_CALL(sub_171A7626); /* 0x171A7F30: call 0x171a7626 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A7F35: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A7F36: ret  */
    RECOMP_REGS_OUT();
}
