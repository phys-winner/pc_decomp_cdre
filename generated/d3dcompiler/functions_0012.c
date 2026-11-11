#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_140E34E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E34E0u);

L_140E34E0:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x140E34E0: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E34F8; /* 0x140E34E3: je 0x140e34f8 */
L_140E34E5:
    eax = MEM32(ecx + 0x50); /* 0x140E34E5: mov eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x140E34E8: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x140E34EB: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E34FB; /* 0x140E34EE: je 0x140e34fb */
L_140E34F0:
    ecx = MEM32(ecx + 0x78); /* 0x140E34F0: mov ecx, dword ptr [ecx + 0x78] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x140E34F3: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E34E5; /* 0x140E34F6: jne 0x140e34e5 */
L_140E34F8:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E34F8: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E34FA: ret  */
L_140E34FB:
    SET_LO8(eax, 1); /* 0x140E34FB: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E34FD: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E3510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E3510u);

L_140E3510:
    eax = MEM32(ecx + 0x50); /* 0x140E3510: mov eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00200000u);
    eax = eax & 0x00200000u; /* 0x140E3513: and eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x140E3518: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E353E; /* 0x140E351B: je 0x140e353e */
L_140E351D:
    fp_push(0.0); /* 0x140E351D: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0xD8)); /* 0x140E351F: fcomp qword ptr [ecx + 0xd8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x140E3525: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x140E3527: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_140E353E; /* 0x140E352A: jp 0x140e353e */
L_140E352C:
    fp_push(1.0); /* 0x140E352C: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0xE0)); /* 0x140E352E: fcomp qword ptr [ecx + 0xe0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x140E3534: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x140E3536: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E353E; /* 0x140E3539: jne 0x140e353e */
L_140E353B:
    SET_LO8(eax, 1); /* 0x140E353B: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E353D: ret  */
L_140E353E:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E353E: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E3540: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E3550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E3550u);

L_140E3550:
    edi = edi; /* 0x140E3550: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E3552: push ebp */
    ebp = esp; /* 0x140E3553: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x140E3555: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x11u); /* 0x140E3558: push 0x11 */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x140E355A: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, 0); /* 0x140E355D: push 0 */
    PUSH32(esp, 0); /* 0x140E355F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x140E3561: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x140E3564: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x140E3567: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140E356A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140E356D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_14102BF0); /* 0x140E3570: call 0x14102bf0 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140E3575: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3577: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x140E3578: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_140E3580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E3580u);

L_140E3580:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140E3580: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x140E3582: push edi */
    edi = ecx; /* 0x140E3583: mov edi, ecx */
    /* test ecx, ecx */ /* 0x140E3585: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E359E; /* 0x140E3587: je 0x140e359e */
L_140E3589:
    esp = esp; /* 0x140E3589: lea esp, [esp] */
L_140E3590:
    /* cmp MEM8(eax), LO8(edx) */ /* 0x140E3590: cmp byte ptr [eax], dl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E359A; /* 0x140E3592: je 0x140e359a */
L_140E3594:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140E3594: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x140E3595: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E3590; /* 0x140E3596: jne 0x140e3590 */
L_140E3598:
    goto L_140E359E; /* 0x140E3598: jmp 0x140e359e */
L_140E359A:
    /* test ecx, ecx */ /* 0x140E359A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E35A3; /* 0x140E359C: jne 0x140e35a3 */
L_140E359E:
    edx = 0x80070057u; /* 0x140E359E: mov edx, 0x80070057 */
L_140E35A3:
    eax = edx; /* 0x140E35A3: mov eax, edx */
    /* test esi, esi */ /* 0x140E35A5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E35B9; /* 0x140E35A7: je 0x140e35b9 */
L_140E35A9:
    /* test edx, edx */ /* 0x140E35A9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E35B3; /* 0x140E35AB: js 0x140e35b3 */
L_140E35AD:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x140E35AD: sub edi, ecx */
    _flag_k = FK_CMP;
    MEM32(esi) = edi; /* 0x140E35AF: mov dword ptr [esi], edi */
    edi = POP32_VAL(esp); /* 0x140E35B1: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E35B2: ret  */
L_140E35B3:
    MEM32(esi) = 0; /* 0x140E35B3: mov dword ptr [esi], 0 */
L_140E35B9:
    edi = POP32_VAL(esp); /* 0x140E35B9: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E35BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E35C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E35C0u);

L_140E35C0:
    edi = edi; /* 0x140E35C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E35C2: push ebp */
    ebp = esp; /* 0x140E35C3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x140E35C5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x140E35C8: push esi */
    esi = MEM32(ebp + 0x10); /* 0x140E35C9: mov esi, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x140E35CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E35E9; /* 0x140E35CE: je 0x140e35e9 */
L_140E35D0:
    ecx = MEM32(ebp + 0xC); /* 0x140E35D0: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 0x7FFFFFFFu */ /* 0x140E35D3: cmp ecx, 0x7fffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E35E9; /* 0x140E35D9: ja 0x140e35e9 */
L_140E35DB:
    RECOMP_CALL(sub_140E3580); /* 0x140E35DB: call 0x140e3580 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E35E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E35EE; /* 0x140E35E2: js 0x140e35ee */
L_140E35E4:
    esi = POP32_VAL(esp); /* 0x140E35E4: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E35E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E35E6: ret 0xc */
L_140E35E9:
    eax = 0x80070057u; /* 0x140E35E9: mov eax, 0x80070057 */
L_140E35EE:
    /* test esi, esi */ /* 0x140E35EE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E35F8; /* 0x140E35F0: je 0x140e35f8 */
L_140E35F2:
    MEM32(esi) = 0; /* 0x140E35F2: mov dword ptr [esi], 0 */
L_140E35F8:
    esi = POP32_VAL(esp); /* 0x140E35F8: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E35F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E35FA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140E3610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E3610u);

L_140E3610:
    /* test eax, eax */ /* 0x140E3610: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E3618; /* 0x140E3612: je 0x140e3618 */
L_140E3614:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x140E3614: add eax, 0x1c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E3617: ret  */
L_140E3618:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E3618: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E361A: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E3660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E3660u);

L_140E3660:
    edi = edi; /* 0x140E3660: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E3662: push ebp */
    ebp = esp; /* 0x140E3663: mov ebp, esp */
    PUSH32(esp, edi); /* 0x140E3665: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140E3666: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x140E3668: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140E36D2; /* 0x140E366B: jbe 0x140e36d2 */
L_140E366D:
    PUSH32(esp, ebx); /* 0x140E366D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x140E366E: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x140E3671: push esi */
L_140E3672:
    eax = MEM32(ebp + 0x10); /* 0x140E3672: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebx + 0x18); /* 0x140E3675: mov ecx, dword ptr [ebx + 0x18] */
    eax = MEM32(eax + edi * 4); /* 0x140E3678: mov eax, dword ptr [eax + edi*4] */
    MEM32(ecx + edx * 4) = eax; /* 0x140E367B: mov dword ptr [ecx + edx*4], eax */
    esi = MEM32(ebx + 0x2C0); /* 0x140E367E: mov esi, dword ptr [ebx + 0x2c0] */
    /* test esi, esi */ /* 0x140E3684: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E36C9; /* 0x140E3686: je 0x140e36c9 */
L_140E3688:
    eax = MEM32(esi + 0x4); /* 0x140E3688: mov eax, dword ptr [esi + 4] */
    ecx = edx; /* 0x140E368B: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x140E368D: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 1; /* 0x140E3690: mov ebx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x140E3695: shl ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << ((LO8(ecx)) & 31); /* 0x140E3695: shl ebx, cl */
    ecx = edx; /* 0x140E3697: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x140E3699: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x140E3699: shr ecx, 5 */
    ecx = eax + ecx * 4; /* 0x140E369C: lea ecx, [eax + ecx*4] */
    /* test MEM32(ecx), ebx */ /* 0x140E369F: test dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E36C6; /* 0x140E36A1: jne 0x140e36c6 */
L_140E36A3:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x140E36A3: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(ecx) | ebx)); _flag_b = (uint32_t)((MEM32(ecx) | ebx));
    MEM32(ecx) = MEM32(ecx) | ebx; /* 0x140E36A6: or dword ptr [ecx], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x10); /* 0x140E36A8: mov eax, dword ptr [esi + 0x10] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x140E36AB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E36B4; /* 0x140E36AE: je 0x140e36b4 */
L_140E36B0:
    /* cmp edx, eax */ /* 0x140E36B0: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E36B7; /* 0x140E36B2: jae 0x140e36b7 */
L_140E36B4:
    MEM32(esi + 0x10) = edx; /* 0x140E36B4: mov dword ptr [esi + 0x10], edx */
L_140E36B7:
    eax = MEM32(esi + 0x14); /* 0x140E36B7: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x140E36BA: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E36C3; /* 0x140E36BD: je 0x140e36c3 */
L_140E36BF:
    /* cmp edx, eax */ /* 0x140E36BF: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140E36C6; /* 0x140E36C1: jbe 0x140e36c6 */
L_140E36C3:
    MEM32(esi + 0x14) = edx; /* 0x140E36C3: mov dword ptr [esi + 0x14], edx */
L_140E36C6:
    ebx = MEM32(ebp + 0x8); /* 0x140E36C6: mov ebx, dword ptr [ebp + 8] */
L_140E36C9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x140E36C9: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x140E36CA: inc edx */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x140E36CB: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140E3672; /* 0x140E36CE: jb 0x140e3672 */
L_140E36D0:
    esi = POP32_VAL(esp); /* 0x140E36D0: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E36D1: pop ebx */
L_140E36D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E36D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140E36D4: pop edi */
    ebp = POP32_VAL(esp); /* 0x140E36D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E36D6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140E36E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E36E0u);

L_140E36E0:
    /* test eax, eax */ /* 0x140E36E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E36F6; /* 0x140E36E2: je 0x140e36f6 */
L_140E36E4:
    /* cmp eax, 1 */ /* 0x140E36E4: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E36F6; /* 0x140E36E7: je 0x140e36f6 */
L_140E36E9:
    /* cmp eax, 4 */ /* 0x140E36E9: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E36F6; /* 0x140E36EC: je 0x140e36f6 */
L_140E36EE:
    /* cmp eax, 5 */ /* 0x140E36EE: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E36F6; /* 0x140E36F1: je 0x140e36f6 */
L_140E36F3:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E36F3: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E36F5: ret  */
L_140E36F6:
    SET_LO8(eax, 1); /* 0x140E36F6: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E36F8: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E3700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E3700u);

L_140E3700:
    edi = edi; /* 0x140E3700: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E3702: push ebp */
    ebp = esp; /* 0x140E3703: mov ebp, esp */
    PUSH32(esp, 0x11u); /* 0x140E3705: push 0x11 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x140E3707: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0); /* 0x140E370A: push 0 */
    PUSH32(esp, 0); /* 0x140E370C: push 0 */
    PUSH32(esp, 0); /* 0x140E370E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x140E3710: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x140E3713: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140E3716: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140E3719: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_14102BF0); /* 0x140E371C: call 0x14102bf0 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x140E3721: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x140E3722: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_140E3750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E3750u);

L_140E3750:
    eax = MEM32(esi + 0x4); /* 0x140E3750: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x140E3753: push edi */
    ecx = edx; /* 0x140E3754: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x140E3756: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 1; /* 0x140E3759: mov edi, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x140E375E: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x140E375E: shl edi, cl */
    ecx = edx; /* 0x140E3760: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x140E3762: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x140E3762: shr ecx, 5 */
    ecx = eax + ecx * 4; /* 0x140E3765: lea ecx, [eax + ecx*4] */
    /* test MEM32(ecx), edi */ /* 0x140E3768: test dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E378F; /* 0x140E376A: jne 0x140e378f */
L_140E376C:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x140E376C: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(ecx) | edi)); _flag_b = (uint32_t)((MEM32(ecx) | edi));
    MEM32(ecx) = MEM32(ecx) | edi; /* 0x140E376F: or dword ptr [ecx], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x10); /* 0x140E3771: mov eax, dword ptr [esi + 0x10] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x140E3774: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E377D; /* 0x140E3777: je 0x140e377d */
L_140E3779:
    /* cmp edx, eax */ /* 0x140E3779: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E3780; /* 0x140E377B: jae 0x140e3780 */
L_140E377D:
    MEM32(esi + 0x10) = edx; /* 0x140E377D: mov dword ptr [esi + 0x10], edx */
L_140E3780:
    eax = MEM32(esi + 0x14); /* 0x140E3780: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x140E3783: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E378C; /* 0x140E3786: je 0x140e378c */
L_140E3788:
    /* cmp edx, eax */ /* 0x140E3788: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140E378F; /* 0x140E378A: jbe 0x140e378f */
L_140E378C:
    MEM32(esi + 0x14) = edx; /* 0x140E378C: mov dword ptr [esi + 0x14], edx */
L_140E378F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E378F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140E3791: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E3792: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E37A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E37A0u);

L_140E37A0:
    ecx = MEM32(edx + 0x18); /* 0x140E37A0: mov ecx, dword ptr [edx + 0x18] */
    MEM32(ecx + esi * 4) = eax; /* 0x140E37A3: mov dword ptr [ecx + esi*4], eax */
    edx = MEM32(edx + 0x2C0); /* 0x140E37A6: mov edx, dword ptr [edx + 0x2c0] */
    /* test edx, edx */ /* 0x140E37AC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E37F0; /* 0x140E37AE: je 0x140e37f0 */
L_140E37B0:
    eax = MEM32(edx + 0x4); /* 0x140E37B0: mov eax, dword ptr [edx + 4] */
    PUSH32(esp, edi); /* 0x140E37B3: push edi */
    ecx = esi; /* 0x140E37B4: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x140E37B6: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 1; /* 0x140E37B9: mov edi, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x140E37BE: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x140E37BE: shl edi, cl */
    ecx = esi; /* 0x140E37C0: mov ecx, esi */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x140E37C2: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x140E37C2: shr ecx, 5 */
    ecx = eax + ecx * 4; /* 0x140E37C5: lea ecx, [eax + ecx*4] */
    /* test MEM32(ecx), edi */ /* 0x140E37C8: test dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E37EF; /* 0x140E37CA: jne 0x140e37ef */
L_140E37CC:
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0xC) = MEM32(edx + 0xC) + 1; /* 0x140E37CC: inc dword ptr [edx + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(ecx) | edi)); _flag_b = (uint32_t)((MEM32(ecx) | edi));
    MEM32(ecx) = MEM32(ecx) | edi; /* 0x140E37CF: or dword ptr [ecx], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0x10); /* 0x140E37D1: mov eax, dword ptr [edx + 0x10] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x140E37D4: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E37DD; /* 0x140E37D7: je 0x140e37dd */
L_140E37D9:
    /* cmp esi, eax */ /* 0x140E37D9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E37E0; /* 0x140E37DB: jae 0x140e37e0 */
L_140E37DD:
    MEM32(edx + 0x10) = esi; /* 0x140E37DD: mov dword ptr [edx + 0x10], esi */
L_140E37E0:
    eax = MEM32(edx + 0x14); /* 0x140E37E0: mov eax, dword ptr [edx + 0x14] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x140E37E3: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E37EC; /* 0x140E37E6: je 0x140e37ec */
L_140E37E8:
    /* cmp esi, eax */ /* 0x140E37E8: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140E37EF; /* 0x140E37EA: jbe 0x140e37ef */
L_140E37EC:
    MEM32(edx + 0x14) = esi; /* 0x140E37EC: mov dword ptr [edx + 0x14], esi */
L_140E37EF:
    edi = POP32_VAL(esp); /* 0x140E37EF: pop edi */
L_140E37F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E37F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E37F2: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E3800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E3800u);

L_140E3800:
    MEM32(ecx + 0xC) = 4; /* 0x140E3800: mov dword ptr [ecx + 0xc], 4 */
    MEM32(ecx + 0x10) = 0; /* 0x140E3807: mov dword ptr [ecx + 0x10], 0 */
    MEM16(ecx + 0x14) = (uint16_t)(0x100u); /* 0x140E380E: mov word ptr [ecx + 0x14], 0x100 */
    eax = ecx + 0x18; /* 0x140E3814: lea eax, [ecx + 0x18] */
    MEM32(ecx + 0x8) = eax; /* 0x140E3817: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0x1F4) = 4; /* 0x140E381A: mov dword ptr [ecx + 0x1f4], 4 */
    MEM32(ecx + 0x1F8) = 0; /* 0x140E3824: mov dword ptr [ecx + 0x1f8], 0 */
    MEM16(ecx + 0x1FC) = (uint16_t)(0x100u); /* 0x140E382E: mov word ptr [ecx + 0x1fc], 0x100 */
    eax = ecx + 0x200; /* 0x140E3837: lea eax, [ecx + 0x200] */
    MEM32(ecx + 0x1F0) = eax; /* 0x140E383D: mov dword ptr [ecx + 0x1f0], eax */
    MEM32(ecx + 0x54) = 0; /* 0x140E3843: mov dword ptr [ecx + 0x54], 0 */
    MEM8(ecx + 0x24C) = (uint8_t)(0); /* 0x140E384A: mov byte ptr [ecx + 0x24c], 0 */
    MEM16(ecx + 0x24E) = (uint16_t)(0); /* 0x140E3851: mov word ptr [ecx + 0x24e], 0 */
    MEM32(ecx + 0x58) = 0; /* 0x140E385A: mov dword ptr [ecx + 0x58], 0 */
    MEM32(ecx + 0x5C) = 0; /* 0x140E3861: mov dword ptr [ecx + 0x5c], 0 */
    MEM32(ecx + 0x60) = 0; /* 0x140E3868: mov dword ptr [ecx + 0x60], 0 */
    MEM32(ecx + 0x274) = 0; /* 0x140E386F: mov dword ptr [ecx + 0x274], 0 */
    MEM32(ecx + 0x278) = 0; /* 0x140E3879: mov dword ptr [ecx + 0x278], 0 */
    MEM32(ecx + 0x27C) = 0; /* 0x140E3883: mov dword ptr [ecx + 0x27c], 0 */
    MEM32(ecx + 0x1EC) = 0; /* 0x140E388D: mov dword ptr [ecx + 0x1ec], 0 */
    eax = ecx; /* 0x140E3897: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E3899: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E38A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E38A0u);

L_140E38A0:
    edi = edi; /* 0x140E38A0: mov edi, edi */
    PUSH32(esp, edi); /* 0x140E38A2: push edi */
    PUSH32(esp, MEM32(esi + 0x60)); /* 0x140E38A3: push dword ptr [esi + 0x60] */
    edi = MEM32(0x1400115C); /* 0x140E38A6: mov edi, dword ptr [0x1400115c] */
    RECOMP_ICALL(edi); /* 0x140E38AC: call edi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1EC); /* 0x140E38AE: mov ecx, dword ptr [esi + 0x1ec] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140E38B4: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x60) = 0; /* 0x140E38B7: mov dword ptr [esi + 0x60], 0 */
    /* test ecx, ecx */ /* 0x140E38BE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E38CD; /* 0x140E38C0: je 0x140e38cd */
L_140E38C2:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1; /* 0x140E38C2: dec dword ptr [ecx + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E38CD; /* 0x140E38C5: jne 0x140e38cd */
L_140E38C7:
    eax = MEM32(ecx); /* 0x140E38C7: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x140E38C9: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x140E38CB: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_140E38CD:
    /* cmp MEM8(esi + 0x1FC), 0 */ /* 0x140E38CD: cmp byte ptr [esi + 0x1fc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1FC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(esi + 0x1F8) = 0; /* 0x140E38D4: mov dword ptr [esi + 0x1f8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E38F2; /* 0x140E38DE: je 0x140e38f2 */
L_140E38E0:
    PUSH32(esp, MEM32(esi + 0x1F0)); /* 0x140E38E0: push dword ptr [esi + 0x1f0] */
    RECOMP_ICALL(edi); /* 0x140E38E6: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140E38E8: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esi + 0x1FC) = (uint8_t)(0); /* 0x140E38EB: mov byte ptr [esi + 0x1fc], 0 */
L_140E38F2:
    MEM32(esi + 0x1F0) = 0; /* 0x140E38F2: mov dword ptr [esi + 0x1f0], 0 */
    MEM32(esi + 0x1F4) = 0; /* 0x140E38FC: mov dword ptr [esi + 0x1f4], 0 */
    /* cmp MEM8(esi + 0x14), 0 */ /* 0x140E3906: cmp byte ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(esi + 0x10) = 0; /* 0x140E390A: mov dword ptr [esi + 0x10], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E391F; /* 0x140E3911: je 0x140e391f */
L_140E3913:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x140E3913: push dword ptr [esi + 8] */
    RECOMP_ICALL(edi); /* 0x140E3916: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140E3918: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esi + 0x14) = (uint8_t)(0); /* 0x140E391B: mov byte ptr [esi + 0x14], 0 */
L_140E391F:
    MEM32(esi + 0xC) = 0; /* 0x140E391F: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x8) = 0; /* 0x140E3926: mov dword ptr [esi + 8], 0 */
    edi = POP32_VAL(esp); /* 0x140E392D: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E392E: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E3940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E3940u);

L_140E3940:
    edi = edi; /* 0x140E3940: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E3942: push ebp */
    ebp = esp; /* 0x140E3943: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140E3945: push ecx */
    PUSH32(esp, ebx); /* 0x140E3946: push ebx */
    ebx = MEM32(0x14001110); /* 0x140E3947: mov ebx, dword ptr [0x14001110] */
    PUSH32(esp, edi); /* 0x140E394D: push edi */
    PUSH32(esp, 0); /* 0x140E394E: push 0 */
    PUSH32(esp, 0); /* 0x140E3950: push 0 */
    edi = eax; /* 0x140E3952: mov edi, eax */
    RECOMP_ICALL(ebx); /* 0x140E3954: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0008001Fu); /* 0x140E3956: push 0x8001f */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x140E395B: push -1 */
    MEM32(ebp + (-0x4)) = eax; /* 0x140E395D: mov dword ptr [ebp - 4], eax */
    RECOMP_ICALL(ebx); /* 0x140E3960: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00030000u); /* 0x140E3962: push 0x30000 */
    PUSH32(esp, 0); /* 0x140E3967: push 0 */
    RECOMP_ICALL(ebx); /* 0x140E3969: call ebx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x141F3DEC); /* 0x140E396B: mov ecx, dword ptr [0x141f3dec] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x140E3971: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x140E3974: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140E397C; /* 0x140E3976: jns 0x140e397c */
L_140E3978:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E3978: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E3983; /* 0x140E397A: jmp 0x140e3983 */
L_140E397C:
    PUSH32(esp, ecx); /* 0x140E397C: push ecx */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x140E397D: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_140E3983:
    MEM32(eax + 0x4) = edi; /* 0x140E3983: mov dword ptr [eax + 4], edi */
    PUSH32(esp, MEM32(esi + 0x60)); /* 0x140E3986: push dword ptr [esi + 0x60] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x140E3989: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x140E398F: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140E3992: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x50) = eax; /* 0x140E3995: mov dword ptr [esi + 0x50], eax */
    eax = MEM32(ebp + 0x8); /* 0x140E3998: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x3Cu); /* 0x140E399B: push 0x3c */
    MEM32(esi + 0x54) = eax; /* 0x140E399D: mov dword ptr [esi + 0x54], eax */
    eax = esi + 0x68; /* 0x140E39A0: lea eax, [esi + 0x68] */
    PUSH32(esp, 0); /* 0x140E39A3: push 0 */
    PUSH32(esp, eax); /* 0x140E39A5: push eax */
    MEM32(esi + 0x60) = 0; /* 0x140E39A6: mov dword ptr [esi + 0x60], 0 */
    MEM32(esi + 0x248) = 0; /* 0x140E39AD: mov dword ptr [esi + 0x248], 0 */
    MEM16(esi + 0x24C) = (uint16_t)(0x100u); /* 0x140E39B7: mov word ptr [esi + 0x24c], 0x100 */
    MEM32(esi + 0x250) = 0; /* 0x140E39C0: mov dword ptr [esi + 0x250], 0 */
    MEM32(esi + 0x254) = 0; /* 0x140E39CA: mov dword ptr [esi + 0x254], 0 */
    MEM32(esi + 0x258) = 0; /* 0x140E39D4: mov dword ptr [esi + 0x258], 0 */
    MEM32(esi + 0x25C) = 0; /* 0x140E39DE: mov dword ptr [esi + 0x25c], 0 */
    MEM32(esi + 0x260) = 0; /* 0x140E39E8: mov dword ptr [esi + 0x260], 0 */
    MEM32(esi + 0x264) = 0; /* 0x140E39F2: mov dword ptr [esi + 0x264], 0 */
    MEM32(esi + 0x268) = 0; /* 0x140E39FC: mov dword ptr [esi + 0x268], 0 */
    MEM32(esi + 0x26C) = 0; /* 0x140E3A06: mov dword ptr [esi + 0x26c], 0 */
    MEM32(esi + 0x270) = 0; /* 0x140E3A10: mov dword ptr [esi + 0x270], 0 */
    MEM32(esi + 0x274) = 0; /* 0x140E3A1A: mov dword ptr [esi + 0x274], 0 */
    MEM32(esi + 0x278) = 0; /* 0x140E3A24: mov dword ptr [esi + 0x278], 0 */
    MEM32(esi + 0x27C) = 0; /* 0x140E3A2E: mov dword ptr [esi + 0x27c], 0 */
    RECOMP_CALL(sub_141EC9B0); /* 0x140E3A38: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140E3A3D: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x120u); /* 0x140E3A40: push 0x120 */
    eax = esi + 0xA4; /* 0x140E3A45: lea eax, [esi + 0xa4] */
    PUSH32(esp, 0); /* 0x140E3A4B: push 0 */
    PUSH32(esp, eax); /* 0x140E3A4D: push eax */
    RECOMP_CALL(sub_141EC9B0); /* 0x140E3A4E: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1C4) = 0; /* 0x140E3A53: mov dword ptr [esi + 0x1c4], 0 */
    MEM32(esi + 0x1C8) = 0; /* 0x140E3A5D: mov dword ptr [esi + 0x1c8], 0 */
    MEM32(esi + 0x1CC) = 0; /* 0x140E3A67: mov dword ptr [esi + 0x1cc], 0 */
    MEM32(esi + 0x1D4) = 0; /* 0x140E3A71: mov dword ptr [esi + 0x1d4], 0 */
    MEM32(esi + 0x1D8) = 0; /* 0x140E3A7B: mov dword ptr [esi + 0x1d8], 0 */
    MEM32(esi + 0x1DC) = 0; /* 0x140E3A85: mov dword ptr [esi + 0x1dc], 0 */
    MEM32(esi + 0x1E0) = 0; /* 0x140E3A8F: mov dword ptr [esi + 0x1e0], 0 */
    MEM32(esi + 0x1EC) = 0; /* 0x140E3A99: mov dword ptr [esi + 0x1ec], 0 */
    MEM32(esi + 0x1E8) = 0; /* 0x140E3AA3: mov dword ptr [esi + 0x1e8], 0 */
    MEM32(esi) = 0; /* 0x140E3AAD: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x140E3AB3: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x10) = 0; /* 0x140E3ABA: mov dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140E3AC1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test MEM8(esi + 0x50), 1 */ /* 0x140E3AC4: test byte ptr [esi + 0x50], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x50)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x38) = 0; /* 0x140E3AC8: mov dword ptr [esi + 0x38], 0 */
    MEM32(esi + 0x40) = 0; /* 0x140E3ACF: mov dword ptr [esi + 0x40], 0 */
    MEM32(esi + 0x44) = 0; /* 0x140E3AD6: mov dword ptr [esi + 0x44], 0 */
    MEM32(esi + 0x48) = 0; /* 0x140E3ADD: mov dword ptr [esi + 0x48], 0 */
    MEM32(esi + 0x4C) = 0; /* 0x140E3AE4: mov dword ptr [esi + 0x4c], 0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E3AF4; /* 0x140E3AEB: je 0x140e3af4 */
L_140E3AED:
    MEM8(esi + 0x24C) = (uint8_t)(1); /* 0x140E3AED: mov byte ptr [esi + 0x24c], 1 */
L_140E3AF4:
    edi = MEM32(esi + 0x54); /* 0x140E3AF4: mov edi, dword ptr [esi + 0x54] */
    ebx = 1; /* 0x140E3AF7: mov ebx, 1 */
    RECOMP_CALL(sub_141C0B90); /* 0x140E3AFC: call 0x141c0b90 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140E3B01: mov edi, eax */
    /* test edi, edi */ /* 0x140E3B03: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E3BF5; /* 0x140E3B05: js 0x140e3bf5 */
L_140E3B0B:
    PUSH32(esp, esi); /* 0x140E3B0B: push esi */
    RECOMP_CALL(sub_140EAA30); /* 0x140E3B0C: call 0x140eaa30 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140E3B11: mov edi, eax */
    /* test edi, edi */ /* 0x140E3B13: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E3BF5; /* 0x140E3B15: js 0x140e3bf5 */
L_140E3B1B:
    ecx = esi; /* 0x140E3B1B: mov ecx, esi */
    RECOMP_ICALL(0x14132B60u); /* 0x140E3B1D: call 0x14132b60 */ /* not lifted */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E3B22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E3B2C; /* 0x140E3B24: je 0x140e3b2c */
L_140E3B26:
    MEM8(esi + 0x249) = (uint8_t)(LO8(ebx)); /* 0x140E3B26: mov byte ptr [esi + 0x249], bl */
L_140E3B2C:
    PUSH32(esp, MEM32(esi + 0x54)); /* 0x140E3B2C: push dword ptr [esi + 0x54] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140E3B2F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141C13F0); /* 0x140E3B31: call 0x141c13f0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140E3B36: mov edi, eax */
    /* test edi, edi */ /* 0x140E3B38: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E3BF5; /* 0x140E3B3A: js 0x140e3bf5 */
L_140E3B40:
    /* cmp MEM8(esi + 0x249), LO8(ebx) */ /* 0x140E3B40: cmp byte ptr [esi + 0x249], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x249)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E3BF5; /* 0x140E3B46: jne 0x140e3bf5 */
L_140E3B4C:
    eax = MEM32(esi); /* 0x140E3B4C: mov eax, dword ptr [esi] */
    ebx = MEM32(ebp + 0x10); /* 0x140E3B4E: mov ebx, dword ptr [ebp + 0x10] */
    MEM32(ebx) = eax; /* 0x140E3B51: mov dword ptr [ebx], eax */
    eax = MEM32(esi + 0x274); /* 0x140E3B53: mov eax, dword ptr [esi + 0x274] */
    ecx = MEM32(esi + 0x54); /* 0x140E3B59: mov ecx, dword ptr [esi + 0x54] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x140E3B5C: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x140E3B5E: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 8); /* 0x140E3B60: push 8 */
    PUSH32(esp, eax); /* 0x140E3B62: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x140E3B63: add ecx, 0x34 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_141E6491); /* 0x140E3B66: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140E3B6B: mov ecx, eax */
    MEM32(ebx + 0x4) = ecx; /* 0x140E3B6D: mov dword ptr [ebx + 4], ecx */
    /* test ecx, ecx */ /* 0x140E3B70: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E3B7B; /* 0x140E3B72: jne 0x140e3b7b */
L_140E3B74:
    edi = 0x8007000Eu; /* 0x140E3B74: mov edi, 0x8007000e */
    goto L_140E3BF5; /* 0x140E3B79: jmp 0x140e3bf5 */
L_140E3B7B:
    eax = MEM32(esi + 0x274); /* 0x140E3B7B: mov eax, dword ptr [esi + 0x274] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x140E3B81: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x140E3B83: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x140E3B85: push eax */
    PUSH32(esp, MEM32(esi + 0x60)); /* 0x140E3B86: push dword ptr [esi + 0x60] */
    PUSH32(esp, ecx); /* 0x140E3B89: push ecx */
    RECOMP_CALL(sub_141EC9A4); /* 0x140E3B8A: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x254); /* 0x140E3B8F: mov eax, dword ptr [esi + 0x254] */
    MEM32(ebx + 0x8) = eax; /* 0x140E3B95: mov dword ptr [ebx + 8], eax */
    eax = MEM32(esi + 0x258); /* 0x140E3B98: mov eax, dword ptr [esi + 0x258] */
    MEM32(ebx + 0xC) = eax; /* 0x140E3B9E: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(esi + 0x25C); /* 0x140E3BA1: mov eax, dword ptr [esi + 0x25c] */
    MEM32(ebx + 0x10) = eax; /* 0x140E3BA7: mov dword ptr [ebx + 0x10], eax */
    eax = MEM32(esi + 0x260); /* 0x140E3BAA: mov eax, dword ptr [esi + 0x260] */
    MEM32(ebx + 0x14) = eax; /* 0x140E3BB0: mov dword ptr [ebx + 0x14], eax */
    eax = MEM32(esi + 0x264); /* 0x140E3BB3: mov eax, dword ptr [esi + 0x264] */
    MEM32(ebx + 0x18) = eax; /* 0x140E3BB9: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(esi + 0x268); /* 0x140E3BBC: mov eax, dword ptr [esi + 0x268] */
    MEM32(ebx + 0x1C) = eax; /* 0x140E3BC2: mov dword ptr [ebx + 0x1c], eax */
    eax = MEM32(esi + 0x270); /* 0x140E3BC5: mov eax, dword ptr [esi + 0x270] */
    MEM32(ebx + 0x20) = eax; /* 0x140E3BCB: mov dword ptr [ebx + 0x20], eax */
    eax = MEM32(esi + 0x26C); /* 0x140E3BCE: mov eax, dword ptr [esi + 0x26c] */
    MEM32(ebx + 0x24) = eax; /* 0x140E3BD4: mov dword ptr [ebx + 0x24], eax */
    eax = MEM32(esi + 0x250); /* 0x140E3BD7: mov eax, dword ptr [esi + 0x250] */
    MEM32(ebx + 0x28) = eax; /* 0x140E3BDD: mov dword ptr [ebx + 0x28], eax */
    eax = MEM32(esi + 0x274); /* 0x140E3BE0: mov eax, dword ptr [esi + 0x274] */
    MEM32(ebx + 0x2C) = eax; /* 0x140E3BE6: mov dword ptr [ebx + 0x2c], eax */
    eax = MEM32(esi + 0x27C); /* 0x140E3BE9: mov eax, dword ptr [esi + 0x27c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140E3BEF: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x30) = eax; /* 0x140E3BF2: mov dword ptr [ebx + 0x30], eax */
L_140E3BF5:
    RECOMP_ICALL(MEM32(0x1400110C)); /* 0x140E3BF5: call dword ptr [0x1400110c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x000B001Fu); /* 0x140E3BFB: push 0xb001f */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x140E3C00: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x14001110)); /* 0x140E3C03: call dword ptr [0x14001110] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E3C09: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x140E3C0C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140E3C1A; /* 0x140E3C0E: jns 0x140e3c1a */
L_140E3C10:
    eax = edi; /* 0x140E3C10: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x140E3C12: pop edi */
    ebx = POP32_VAL(esp); /* 0x140E3C13: pop ebx */
    esp = ebp; /* 0x140E3C14: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3C16: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3C17: ret 0xc */
L_140E3C1A:
    eax = (uint32_t)MEM8(esi + 0x249); /* 0x140E3C1A: movzx eax, byte ptr [esi + 0x249] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x140E3C21: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140E3C23: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = POP32_VAL(esp); /* 0x140E3C25: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80004005u);
    eax = eax & 0x80004005u; /* 0x140E3C26: and eax, 0x80004005 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140E3C2B: pop ebx */
    esp = ebp; /* 0x140E3C2C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3C2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3C2F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140E6A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E6A30u);

L_140E6A30:
    edi = edi; /* 0x140E6A30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E6A32: push ebp */
    ebp = esp; /* 0x140E6A33: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x104u; /* 0x140E6A35: sub esp, 0x104 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x140E6A3B: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x140E6A40: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x140E6A42: mov dword ptr [ebp - 4], eax */
    ecx = 0x14033878u; /* 0x140E6A45: mov ecx, 0x14033878 */
    eax = edi; /* 0x140E6A4A: mov eax, edi */
    esp = esp; /* 0x140E6A4C: lea esp, [esp] */
L_140E6A50:
    SET_LO8(edx, MEM8(eax)); /* 0x140E6A50: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x140E6A52: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6A70; /* 0x140E6A54: jne 0x140e6a70 */
L_140E6A56:
    /* test LO8(edx), LO8(edx) */ /* 0x140E6A56: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6A6C; /* 0x140E6A58: je 0x140e6a6c */
L_140E6A5A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x140E6A5A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x140E6A5D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6A70; /* 0x140E6A60: jne 0x140e6a70 */
L_140E6A62:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6A62: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E6A65: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E6A68: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6A50; /* 0x140E6A6A: jne 0x140e6a50 */
L_140E6A6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E6A6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6A75; /* 0x140E6A6E: jmp 0x140e6a75 */
L_140E6A70:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6A70: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6A72: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6A75:
    /* test eax, eax */ /* 0x140E6A75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6A86; /* 0x140E6A77: je 0x140e6a86 */
L_140E6A79:
    PUSH32(esp, edi); /* 0x140E6A79: push edi */
    PUSH32(esp, 0x140338E4u); /* 0x140E6A7A: push 0x140338e4 */
    PUSH32(esp, 0); /* 0x140E6A7F: push 0 */
    goto L_140E6B2A; /* 0x140E6A81: jmp 0x140e6b2a */
L_140E6A86:
    /* cmp MEM8(esi + 0x249), 0 */ /* 0x140E6A86: cmp byte ptr [esi + 0x249], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x249)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6B37; /* 0x140E6A8D: jne 0x140e6b37 */
L_140E6A93:
    eax = MEM32(esi + 0x220); /* 0x140E6A93: mov eax, dword ptr [esi + 0x220] */
    /* cmp eax, 0x11u */ /* 0x140E6A99: cmp eax, 0x11 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E6B00; /* 0x140E6A9C: ja 0x140e6b00 */
L_140E6A9E:
    eax = (uint32_t)MEM8(eax + 0x140E6B70); /* 0x140E6A9E: movzx eax, byte ptr [eax + 0x140e6b70] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140E6B4C)); goto _ljump; }
L_140E6AAC:
    PUSH32(esp, 0x1403F8E0u); /* 0x140E6AAC: push 0x1403f8e0 */
    goto L_140E6B05; /* 0x140E6AB1: jmp 0x140e6b05 */
L_140E6AB3:
    eax = esi + 0x228; /* 0x140E6AB3: lea eax, [esi + 0x228] */
    PUSH32(esp, eax); /* 0x140E6AB9: push eax */
L_140E6ABA:
    PUSH32(esp, 0x1403F8F0u); /* 0x140E6ABA: push 0x1403f8f0 */
    eax = ebp + (-0x104); /* 0x140E6ABF: lea eax, [ebp - 0x104] */
    PUSH32(esp, 0x100u); /* 0x140E6AC5: push 0x100 */
    PUSH32(esp, eax); /* 0x140E6ACA: push eax */
    RECOMP_CALL(sub_140683B0); /* 0x140E6ACB: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x140E6AD0: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_140E6B19; /* 0x140E6AD3: jmp 0x140e6b19 */
L_140E6AD5:
    PUSH32(esp, 0x1403F8FCu); /* 0x140E6AD5: push 0x1403f8fc */
    goto L_140E6B05; /* 0x140E6ADA: jmp 0x140e6b05 */
L_140E6ADC:
    PUSH32(esp, 0x1403F910u); /* 0x140E6ADC: push 0x1403f910 */
    goto L_140E6B05; /* 0x140E6AE1: jmp 0x140e6b05 */
L_140E6AE3:
    PUSH32(esp, MEM32(esi + 0x228)); /* 0x140E6AE3: push dword ptr [esi + 0x228] */
    RECOMP_BACKEDGE();
    goto L_140E6ABA; /* 0x140E6AE9: jmp 0x140e6aba */
L_140E6AEB:
    PUSH32(esp, 0x1403F920u); /* 0x140E6AEB: push 0x1403f920 */
    goto L_140E6B05; /* 0x140E6AF0: jmp 0x140e6b05 */
L_140E6AF2:
    PUSH32(esp, 0x1403F930u); /* 0x140E6AF2: push 0x1403f930 */
    goto L_140E6B05; /* 0x140E6AF7: jmp 0x140e6b05 */
L_140E6AF9:
    PUSH32(esp, 0x1403F93Cu); /* 0x140E6AF9: push 0x1403f93c */
    goto L_140E6B05; /* 0x140E6AFE: jmp 0x140e6b05 */
L_140E6B00:
    PUSH32(esp, 0x1403F948u); /* 0x140E6B00: push 0x1403f948 */
L_140E6B05:
    eax = ebp + (-0x104); /* 0x140E6B05: lea eax, [ebp - 0x104] */
    PUSH32(esp, 0x100u); /* 0x140E6B0B: push 0x100 */
    PUSH32(esp, eax); /* 0x140E6B10: push eax */
    RECOMP_CALL(sub_140683B0); /* 0x140E6B11: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140E6B16: add esp, 0xc */
    _flag_k = FK_ADD;
L_140E6B19:
    eax = ebp + (-0x104); /* 0x140E6B19: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x140E6B1F: push eax */
    PUSH32(esp, 0x1403F950u); /* 0x140E6B20: push 0x1403f950 */
    PUSH32(esp, 0xBB8u); /* 0x140E6B25: push 0xbb8 */
L_140E6B2A:
    PUSH32(esp, MEM32(esi + 0x54)); /* 0x140E6B2A: push dword ptr [esi + 0x54] */
    edx = ebx; /* 0x140E6B2D: mov edx, ebx */
    RECOMP_CALL(sub_141C5C90); /* 0x140E6B2F: call 0x141c5c90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x140E6B34: add esp, 0x10 */
    _flag_k = FK_ADD;
L_140E6B37:
    ecx = MEM32(ebp + (-0x4)); /* 0x140E6B37: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140E6B3A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x249) = (uint8_t)(1); /* 0x140E6B3C: mov byte ptr [esi + 0x249], 1 */
    RECOMP_CALL(sub_141EC0B6); /* 0x140E6B43: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140E6B48: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6B4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E6B4B: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x140E6AACu: goto L_140E6AAC;
      case 0x140E6AB3u: goto L_140E6AB3;
      case 0x140E6AD5u: goto L_140E6AD5;
      case 0x140E6ADCu: goto L_140E6ADC;
      case 0x140E6AE3u: goto L_140E6AE3;
      case 0x140E6AEBu: goto L_140E6AEB;
      case 0x140E6AF2u: goto L_140E6AF2;
      case 0x140E6AF9u: goto L_140E6AF9;
      case 0x140E6B00u: goto L_140E6B00;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140E6B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E6B90u);

L_140E6B90:
    edi = edi; /* 0x140E6B90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E6B92: push ebp */
    ebp = esp; /* 0x140E6B93: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x140E6B95: mov ecx, dword ptr [ebp + 0xc] */
    eax = ebp + 0x10; /* 0x140E6B98: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x140E6B9B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140E6B9C: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x54)); /* 0x140E6B9F: push dword ptr [esi + 0x54] */
    RECOMP_CALL(sub_141C5BE0); /* 0x140E6BA2: call 0x141c5be0 */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0x249) = (uint8_t)(1); /* 0x140E6BA7: mov byte ptr [esi + 0x249], 1 */
    ebp = POP32_VAL(esp); /* 0x140E6BAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E6BAF: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E6BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E6BC0u);

L_140E6BC0:
    edi = edi; /* 0x140E6BC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E6BC2: push ebp */
    ebp = esp; /* 0x140E6BC3: mov ebp, esp */
    ecx = MEM32(ecx + 0x54); /* 0x140E6BC5: mov ecx, dword ptr [ecx + 0x54] */
    eax = ebp + 0x10; /* 0x140E6BC8: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x140E6BCB: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140E6BCC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140E6BCF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141C5D70); /* 0x140E6BD2: call 0x141c5d70 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x140E6BD7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E6BD8: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E6BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E6BE0u);

L_140E6BE0:
    edi = edi; /* 0x140E6BE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E6BE2: push ebp */
    ebp = esp; /* 0x140E6BE3: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x140E6BE5: mov ecx, dword ptr [ebp + 0xc] */
    eax = ebp + 0x10; /* 0x140E6BE8: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x140E6BEB: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140E6BEC: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x54)); /* 0x140E6BEF: push dword ptr [esi + 0x54] */
    RECOMP_CALL(sub_141C5BE0); /* 0x140E6BF2: call 0x141c5be0 */
    RECOMP_FLAGS_IN();
    MEM16(esi + 0x249) = (uint16_t)(0x101u); /* 0x140E6BF7: mov word ptr [esi + 0x249], 0x101 */
    ebp = POP32_VAL(esp); /* 0x140E6C00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E6C01: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E6C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E6C10u);

L_140E6C10:
    edi = edi; /* 0x140E6C10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E6C12: push ebp */
    ebp = esp; /* 0x140E6C13: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x224u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x224u; /* 0x140E6C15: sub esp, 0x224 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x140E6C1B: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x140E6C20: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x140E6C22: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0x8); /* 0x140E6C25: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x218)) = eax; /* 0x140E6C28: mov dword ptr [ebp - 0x218], eax */
    eax = MEM32(ebp + 0xC); /* 0x140E6C2E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x21C)) = eax; /* 0x140E6C31: mov dword ptr [ebp - 0x21c], eax */
    eax = MEM32(ebp + 0x10); /* 0x140E6C37: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x140E6C3A: push ebx */
    ebx = ecx; /* 0x140E6C3B: mov ebx, ecx */
    MEM32(ebp + (-0x220)) = eax; /* 0x140E6C3D: mov dword ptr [ebp - 0x220], eax */
    SET_LO8(eax, LO8(ebx)); /* 0x140E6C43: mov al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x140E6C45: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x140E6C47: push esi */
    esi = edx; /* 0x140E6C48: mov esi, edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6C6B; /* 0x140E6C4A: jne 0x140e6c6b */
L_140E6C4C:
    /* test esi, esi */ /* 0x140E6C4C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6C64; /* 0x140E6C4E: je 0x140e6c64 */
L_140E6C50:
    /* test edi, edi */ /* 0x140E6C50: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6C64; /* 0x140E6C52: je 0x140e6c64 */
L_140E6C54:
    PUSH32(esp, 0); /* 0x140E6C54: push 0 */
    PUSH32(esp, 1); /* 0x140E6C56: push 1 */
    PUSH32(esp, esi); /* 0x140E6C58: push esi */
    ecx = edi; /* 0x140E6C59: mov ecx, edi */
    RECOMP_CALL(sub_140F1B70); /* 0x140E6C5B: call 0x140f1b70 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140E6C60: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6C6B; /* 0x140E6C62: jne 0x140e6c6b */
L_140E6C64:
    eax = 0x1403F96Cu; /* 0x140E6C64: mov eax, 0x1403f96c */
    goto L_140E6C70; /* 0x140E6C69: jmp 0x140e6c70 */
L_140E6C6B:
    eax = 0x14033E93u; /* 0x140E6C6B: mov eax, 0x14033e93 */
L_140E6C70:
    /* test LO8(ebx), 2 */ /* 0x140E6C70: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x210)) = eax; /* 0x140E6C73: mov dword ptr [ebp - 0x210], eax */
    ebx = 0x1403F978u; /* 0x140E6C79: mov ebx, 0x1403f978 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6C85; /* 0x140E6C7E: jne 0x140e6c85 */
L_140E6C80:
    ebx = 0x14033E93u; /* 0x140E6C80: mov ebx, 0x14033e93 */
L_140E6C85:
    ecx = ebp + (-0x10C); /* 0x140E6C85: lea ecx, [ebp - 0x10c] */
    /* test esi, esi */ /* 0x140E6C8B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6CC6; /* 0x140E6C8D: jne 0x140e6cc6 */
L_140E6C8F:
    esi = 0x140414B4u; /* 0x140E6C8F: mov esi, 0x140414b4 */
    eax = ecx; /* 0x140E6C94: mov eax, ecx */
    edx = 0x100u; /* 0x140E6C96: mov edx, 0x100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x140E6C9B: sub esi, eax */
    _flag_k = FK_CMP;
    ecx = ecx; /* 0x140E6C9D: lea ecx, [ecx] */
L_140E6CA0:
    eax = edx + 0x7FFFFEFE; /* 0x140E6CA0: lea eax, [edx + 0x7ffffefe] */
    /* test eax, eax */ /* 0x140E6CA6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6CBC; /* 0x140E6CA8: je 0x140e6cbc */
L_140E6CAA:
    SET_LO8(eax, MEM8(esi + ecx)); /* 0x140E6CAA: mov al, byte ptr [esi + ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x140E6CAD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6CBC; /* 0x140E6CAF: je 0x140e6cbc */
L_140E6CB1:
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x140E6CB1: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x140E6CB3: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x140E6CB4: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E6CA0; /* 0x140E6CB5: jne 0x140e6ca0 */
L_140E6CB7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x140E6CB7: dec ecx */
    _flag_k = FK_DEC;
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x140E6CB8: mov byte ptr [ecx], dl */
    goto L_140E6CD3; /* 0x140E6CBA: jmp 0x140e6cd3 */
L_140E6CBC:
    /* test edx, edx */ /* 0x140E6CBC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6CC1; /* 0x140E6CBE: jne 0x140e6cc1 */
L_140E6CC0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x140E6CC0: dec ecx */
    _flag_k = FK_DEC;
L_140E6CC1:
    MEM8(ecx) = (uint8_t)(0); /* 0x140E6CC1: mov byte ptr [ecx], 0 */
    goto L_140E6CD3; /* 0x140E6CC4: jmp 0x140e6cd3 */
L_140E6CC6:
    eax = MEM32(esi); /* 0x140E6CC6: mov eax, dword ptr [esi] */
    PUSH32(esp, 0x100u); /* 0x140E6CC8: push 0x100 */
    PUSH32(esp, ecx); /* 0x140E6CCD: push ecx */
    ecx = esi; /* 0x140E6CCE: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x140E6CD0: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
L_140E6CD3:
    ecx = ebp + (-0x20C); /* 0x140E6CD3: lea ecx, [ebp - 0x20c] */
    /* test edi, edi */ /* 0x140E6CD9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6D16; /* 0x140E6CDB: jne 0x140e6d16 */
L_140E6CDD:
    esi = 0x140414B4u; /* 0x140E6CDD: mov esi, 0x140414b4 */
    eax = ecx; /* 0x140E6CE2: mov eax, ecx */
    edx = 0x100u; /* 0x140E6CE4: mov edx, 0x100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x140E6CE9: sub esi, eax */
    _flag_k = FK_CMP;
    goto L_140E6CF0; /* 0x140E6CEB: jmp 0x140e6cf0 */
L_140E6CF0:
    eax = edx + 0x7FFFFEFE; /* 0x140E6CF0: lea eax, [edx + 0x7ffffefe] */
    /* test eax, eax */ /* 0x140E6CF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6D0C; /* 0x140E6CF8: je 0x140e6d0c */
L_140E6CFA:
    SET_LO8(eax, MEM8(esi + ecx)); /* 0x140E6CFA: mov al, byte ptr [esi + ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x140E6CFD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6D0C; /* 0x140E6CFF: je 0x140e6d0c */
L_140E6D01:
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x140E6D01: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x140E6D03: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x140E6D04: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E6CF0; /* 0x140E6D05: jne 0x140e6cf0 */
L_140E6D07:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x140E6D07: dec ecx */
    _flag_k = FK_DEC;
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x140E6D08: mov byte ptr [ecx], dl */
    goto L_140E6D23; /* 0x140E6D0A: jmp 0x140e6d23 */
L_140E6D0C:
    /* test edx, edx */ /* 0x140E6D0C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6D11; /* 0x140E6D0E: jne 0x140e6d11 */
L_140E6D10:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x140E6D10: dec ecx */
    _flag_k = FK_DEC;
L_140E6D11:
    MEM8(ecx) = (uint8_t)(0); /* 0x140E6D11: mov byte ptr [ecx], 0 */
    goto L_140E6D23; /* 0x140E6D14: jmp 0x140e6d23 */
L_140E6D16:
    eax = MEM32(edi); /* 0x140E6D16: mov eax, dword ptr [edi] */
    PUSH32(esp, 0x100u); /* 0x140E6D18: push 0x100 */
    PUSH32(esp, ecx); /* 0x140E6D1D: push ecx */
    ecx = edi; /* 0x140E6D1E: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x140E6D20: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
L_140E6D23:
    eax = MEM32(ebp + (-0x220)); /* 0x140E6D23: mov eax, dword ptr [ebp - 0x220] */
    edx = MEM32(ebp + (-0x21C)); /* 0x140E6D29: mov edx, dword ptr [ebp - 0x21c] */
    esi = MEM32(ebp + (-0x218)); /* 0x140E6D2F: mov esi, dword ptr [ebp - 0x218] */
    /* test eax, eax */ /* 0x140E6D35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6D72; /* 0x140E6D37: jne 0x140e6d72 */
L_140E6D39:
    eax = ebp + (-0x10C); /* 0x140E6D39: lea eax, [ebp - 0x10c] */
    PUSH32(esp, eax); /* 0x140E6D3F: push eax */
    eax = ebp + (-0x20C); /* 0x140E6D40: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x140E6D46: push eax */
    PUSH32(esp, ebx); /* 0x140E6D47: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x140E6D48: push dword ptr [ebp - 0x210] */
    PUSH32(esp, 0x1403F98Cu); /* 0x140E6D4E: push 0x1403f98c */
    PUSH32(esp, 0xBC9u); /* 0x140E6D53: push 0xbc9 */
    RECOMP_CALL(sub_140E6B90); /* 0x140E6D58: call 0x140e6b90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x140E6D5D: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x140E6D60: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E6D61: pop ebx */
    ecx = MEM32(ebp + (-0x8)); /* 0x140E6D62: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140E6D65: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x140E6D67: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140E6D6C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6D6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6D6F: ret 0xc */
L_140E6D72:
    ecx = ebp + (-0x10C); /* 0x140E6D72: lea ecx, [ebp - 0x10c] */
    PUSH32(esp, ecx); /* 0x140E6D78: push ecx */
    ecx = ebp + (-0x20C); /* 0x140E6D79: lea ecx, [ebp - 0x20c] */
    PUSH32(esp, ecx); /* 0x140E6D7F: push ecx */
    PUSH32(esp, ebx); /* 0x140E6D80: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x140E6D81: push dword ptr [ebp - 0x210] */
    PUSH32(esp, eax); /* 0x140E6D87: push eax */
    PUSH32(esp, 0x1403F9B4u); /* 0x140E6D88: push 0x1403f9b4 */
    PUSH32(esp, 0xBC9u); /* 0x140E6D8D: push 0xbc9 */
    RECOMP_CALL(sub_140E6B90); /* 0x140E6D92: call 0x140e6b90 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x140E6D97: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x140E6D9A: add esp, 0x1c */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x140E6D9D: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140E6D9E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140E6DA0: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x140E6DA1: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140E6DA6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6DA8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6DA9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140E6DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E6DC0u);

L_140E6DC0:
    edi = edi; /* 0x140E6DC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E6DC2: push ebp */
    ebp = esp; /* 0x140E6DC3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140E6DC5: push ecx */
    ecx = MEM32(ebp + 0x10); /* 0x140E6DC6: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x140E6DC9: mov eax, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0xC); /* 0x140E6DCC: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x140E6DCF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x140E6DD0: mov edi, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x140E6DD3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6E79; /* 0x140E6DD5: je 0x140e6e79 */
L_140E6DDB:
    edi = ebp + (-0x4); /* 0x140E6DDB: lea edi, [ebp - 4] */
    PUSH32(esp, edi); /* 0x140E6DDE: push edi */
    PUSH32(esp, eax); /* 0x140E6DDF: push eax */
    PUSH32(esp, edx); /* 0x140E6DE0: push edx */
    RECOMP_CALL(sub_140F1B70); /* 0x140E6DE1: call 0x140f1b70 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x140E6DE6: mov edi, dword ptr [ebp + 8] */
    /* test LO8(eax), LO8(eax) */ /* 0x140E6DE9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6E73; /* 0x140E6DEB: je 0x140e6e73 */
L_140E6DF1:
    /* test MEM8(ebp + 0x14), 1 */ /* 0x140E6DF1: test byte ptr [ebp + 0x14], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6E6A; /* 0x140E6DF5: jne 0x140e6e6a */
L_140E6DF7:
    eax = MEM32(ebp + (-0x4)); /* 0x140E6DF7: mov eax, dword ptr [ebp - 4] */
    /* test LO8(eax), 1 */ /* 0x140E6DFA: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6E30; /* 0x140E6DFC: je 0x140e6e30 */
L_140E6DFE:
    edx = edi; /* 0x140E6DFE: mov edx, edi */
    ecx = ebx; /* 0x140E6E00: mov ecx, ebx */
    /* test esi, esi */ /* 0x140E6E02: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6E1B; /* 0x140E6E04: je 0x140e6e1b */
L_140E6E06:
    PUSH32(esp, esi); /* 0x140E6E06: push esi */
    PUSH32(esp, 0x1403F9E0u); /* 0x140E6E07: push 0x1403f9e0 */
    PUSH32(esp, 0xC85u); /* 0x140E6E0C: push 0xc85 */
    RECOMP_CALL(sub_140E6BC0); /* 0x140E6E11: call 0x140e6bc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140E6E16: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_140E6E2D; /* 0x140E6E19: jmp 0x140e6e2d */
L_140E6E1B:
    PUSH32(esp, 0x1403FA24u); /* 0x140E6E1B: push 0x1403fa24 */
    PUSH32(esp, 0xC85u); /* 0x140E6E20: push 0xc85 */
    RECOMP_CALL(sub_140E6BC0); /* 0x140E6E25: call 0x140e6bc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E6E2A: add esp, 8 */
    _flag_k = FK_ADD;
L_140E6E2D:
    eax = MEM32(ebp + (-0x4)); /* 0x140E6E2D: mov eax, dword ptr [ebp - 4] */
L_140E6E30:
    /* test LO8(eax), 8 */ /* 0x140E6E30: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6E6A; /* 0x140E6E32: je 0x140e6e6a */
L_140E6E34:
    edx = edi; /* 0x140E6E34: mov edx, edi */
    ecx = ebx; /* 0x140E6E36: mov ecx, ebx */
    /* test esi, esi */ /* 0x140E6E38: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6E58; /* 0x140E6E3A: je 0x140e6e58 */
L_140E6E3C:
    PUSH32(esp, esi); /* 0x140E6E3C: push esi */
    PUSH32(esp, 0x1403FA64u); /* 0x140E6E3D: push 0x1403fa64 */
    PUSH32(esp, 0xC86u); /* 0x140E6E42: push 0xc86 */
    RECOMP_CALL(sub_140E6BC0); /* 0x140E6E47: call 0x140e6bc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140E6E4C: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E6E4F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140E6E51: pop edi */
    esp = ebp; /* 0x140E6E52: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6E54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x140E6E55: ret 0x10 */
L_140E6E58:
    PUSH32(esp, 0x1403FA90u); /* 0x140E6E58: push 0x1403fa90 */
    PUSH32(esp, 0xC86u); /* 0x140E6E5D: push 0xc86 */
    RECOMP_CALL(sub_140E6BC0); /* 0x140E6E62: call 0x140e6bc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E6E67: add esp, 8 */
    _flag_k = FK_ADD;
L_140E6E6A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E6E6A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140E6E6C: pop edi */
    esp = ebp; /* 0x140E6E6D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6E6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x140E6E70: ret 0x10 */
L_140E6E73:
    eax = MEM32(ebp + 0x14); /* 0x140E6E73: mov eax, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0xC); /* 0x140E6E76: mov edx, dword ptr [ebp + 0xc] */
L_140E6E79:
    PUSH32(esp, esi); /* 0x140E6E79: push esi */
    PUSH32(esp, edi); /* 0x140E6E7A: push edi */
    edi = MEM32(ebp + 0x10); /* 0x140E6E7B: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x140E6E7E: push ebx */
    ecx = eax; /* 0x140E6E7F: mov ecx, eax */
    RECOMP_CALL(sub_140E6C10); /* 0x140E6E81: call 0x140e6c10 */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x140E6E86: mov eax, 0x80004005 */
    edi = POP32_VAL(esp); /* 0x140E6E8B: pop edi */
    esp = ebp; /* 0x140E6E8C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6E8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x140E6E8F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_140E6EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E6EA0u);

L_140E6EA0:
    edi = edi; /* 0x140E6EA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E6EA2: push ebp */
    ebp = esp; /* 0x140E6EA3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x140E6EA5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x140E6EA8: push ebx */
    PUSH32(esp, esi); /* 0x140E6EA9: push esi */
    esi = eax; /* 0x140E6EAA: mov esi, eax */
    SET_LO8(eax, MEM8(esi + 0x13)); /* 0x140E6EAC: mov al, byte ptr [esi + 0x13] */
    PUSH32(esp, edi); /* 0x140E6EAF: push edi */
    /* test LO8(eax), LO8(eax) */ /* 0x140E6EB0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6EC2; /* 0x140E6EB2: je 0x140e6ec2 */
L_140E6EB4:
    eax = (uint32_t)LO8(eax); /* 0x140E6EB4: movzx eax, al */
    eax = MEM32(eax * 4 + 0x141F0F88); /* 0x140E6EB7: mov eax, dword ptr [eax*4 + 0x141f0f88] */
    ecx = MEM32(eax); /* 0x140E6EBE: mov ecx, dword ptr [eax] */
    goto L_140E6EC7; /* 0x140E6EC0: jmp 0x140e6ec7 */
L_140E6EC2:
    ecx = 0x11u; /* 0x140E6EC2: mov ecx, 0x11 */
L_140E6EC7:
    SET_LO8(eax, MEM8(esi + 0x11)); /* 0x140E6EC7: mov al, byte ptr [esi + 0x11] */
    /* test LO8(eax), LO8(eax) */ /* 0x140E6ECA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6EDF; /* 0x140E6ECC: je 0x140e6edf */
L_140E6ECE:
    eax = (uint32_t)LO8(eax); /* 0x140E6ECE: movzx eax, al */
    eax = MEM32(eax * 4 + 0x141F0F70); /* 0x140E6ED1: mov eax, dword ptr [eax*4 + 0x141f0f70] */
    eax = MEM32(eax); /* 0x140E6ED8: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x8)) = eax; /* 0x140E6EDA: mov dword ptr [ebp - 8], eax */
    goto L_140E6EE6; /* 0x140E6EDD: jmp 0x140e6ee6 */
L_140E6EDF:
    MEM32(ebp + (-0x8)) = 1; /* 0x140E6EDF: mov dword ptr [ebp - 8], 1 */
L_140E6EE6:
    /* cmp ecx, 0x48u */ /* 0x140E6EE6: cmp ecx, 0x48 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E6EF4; /* 0x140E6EE9: jae 0x140e6ef4 */
L_140E6EEB:
    eax = MEM32(ecx * 4 + 0x141F0E50); /* 0x140E6EEB: mov eax, dword ptr [ecx*4 + 0x141f0e50] */
    goto L_140E6EF9; /* 0x140E6EF2: jmp 0x140e6ef9 */
L_140E6EF4:
    eax = 0x140414CCu; /* 0x140E6EF4: mov eax, 0x140414cc */
L_140E6EF9:
    SET_LO8(ecx, MEM8(esi + 0x15)); /* 0x140E6EF9: mov cl, byte ptr [esi + 0x15] */
    MEM32(ebp + (-0x4)) = eax; /* 0x140E6EFC: mov dword ptr [ebp - 4], eax */
    /* cmp LO8(ecx), 0xAu */ /* 0x140E6EFF: cmp cl, 0xa */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E6F09; /* 0x140E6F02: jae 0x140e6f09 */
L_140E6F04:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x30u); /* 0x140E6F04: add cl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_140E6F1B; /* 0x140E6F07: jmp 0x140e6f1b */
L_140E6F09:
    /* cmp LO8(ecx), 0xF0u */ /* 0x140E6F09: cmp cl, 0xf0 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xF0u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_140E6F19; /* 0x140E6F0C: jb 0x140e6f19 */
L_140E6F0E:
    eax = (uint32_t)LO8(ecx); /* 0x140E6F0E: movzx eax, cl */
    SET_LO8(ecx, MEM8(eax + 0x1403F9C4)); /* 0x140E6F11: mov cl, byte ptr [eax + 0x1403f9c4] */
    goto L_140E6F1B; /* 0x140E6F17: jmp 0x140e6f1b */
L_140E6F19:
    SET_LO8(ecx, 0x4Au); /* 0x140E6F19: mov cl, 0x4a */
L_140E6F1B:
    SET_LO8(edx, MEM8(esi + 0x14)); /* 0x140E6F1B: mov dl, byte ptr [esi + 0x14] */
    /* cmp LO8(edx), 0xAu */ /* 0x140E6F1E: cmp dl, 0xa */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E6F28; /* 0x140E6F21: jae 0x140e6f28 */
L_140E6F23:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x30u); /* 0x140E6F23: add dl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_140E6F3A; /* 0x140E6F26: jmp 0x140e6f3a */
L_140E6F28:
    /* cmp LO8(edx), 0xF0u */ /* 0x140E6F28: cmp dl, 0xf0 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xF0u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_140E6F38; /* 0x140E6F2B: jb 0x140e6f38 */
L_140E6F2D:
    eax = (uint32_t)LO8(edx); /* 0x140E6F2D: movzx eax, dl */
    SET_LO8(edx, MEM8(eax + 0x1403F9C4)); /* 0x140E6F30: mov dl, byte ptr [eax + 0x1403f9c4] */
    goto L_140E6F3A; /* 0x140E6F36: jmp 0x140e6f3a */
L_140E6F38:
    SET_LO8(edx, 0x49u); /* 0x140E6F38: mov dl, 0x49 */
L_140E6F3A:
    edi = MEM32(esi + 0x8); /* 0x140E6F3A: mov edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    edi = edi & 0x20u; /* 0x140E6F3D: and edi, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x140E6F40: mov eax, edi */
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x140E6F42: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 0x1403FABCu; /* 0x140E6F45: mov ebx, 0x1403fabc */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6F51; /* 0x140E6F4A: jne 0x140e6f51 */
L_140E6F4C:
    ebx = 0x14033E93u; /* 0x140E6F4C: mov ebx, 0x14033e93 */
L_140E6F51:
    eax = edi; /* 0x140E6F51: mov eax, edi */
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x140E6F53: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6F5C; /* 0x140E6F56: je 0x140e6f5c */
L_140E6F58:
    esi = MEM32(esi); /* 0x140E6F58: mov esi, dword ptr [esi] */
    goto L_140E6F61; /* 0x140E6F5A: jmp 0x140e6f61 */
L_140E6F5C:
    esi = 0x14033E93u; /* 0x140E6F5C: mov esi, 0x14033e93 */
L_140E6F61:
    _flag_a = (uint32_t)((edi | 0)); _flag_b = (uint32_t)((edi | 0));
    edi = edi | 0; /* 0x140E6F61: or edi, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x14034EFCu; /* 0x140E6F64: mov eax, 0x14034efc */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6F70; /* 0x140E6F69: jne 0x140e6f70 */
L_140E6F6B:
    eax = 0x14033E93u; /* 0x140E6F6B: mov eax, 0x14033e93 */
L_140E6F70:
    edi = MEM32(ebp + (-0x8)); /* 0x140E6F70: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 8; /* 0x140E6F73: sub edi, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x140E6F76: push esi */
    PUSH32(esp, eax); /* 0x140E6F77: push eax */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_140E6FCD; /* 0x140E6F78: je 0x140e6fcd */
L_140E6F7A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x140E6F7A: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_140E6FA3; /* 0x140E6F7B: je 0x140e6fa3 */
L_140E6F7D:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x140E6F7D: push dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0xC); /* 0x140E6F80: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x140E6F83: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x140E6F84: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1403FAE0u); /* 0x140E6F87: push 0x1403fae0 */
    PUSH32(esp, ebx); /* 0x140E6F8C: push ebx */
    PUSH32(esp, eax); /* 0x140E6F8D: push eax */
    RECOMP_CALL(sub_140683B0); /* 0x140E6F8E: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x140E6F93: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140E6F96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140E6FF2; /* 0x140E6F98: jns 0x140e6ff2 */
L_140E6F9A:
    edi = POP32_VAL(esp); /* 0x140E6F9A: pop edi */
    esi = POP32_VAL(esp); /* 0x140E6F9B: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E6F9C: pop ebx */
    esp = ebp; /* 0x140E6F9D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6F9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6FA0: ret 0xc */
L_140E6FA3:
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x140E6FA3: movsx eax, cl */
    PUSH32(esp, eax); /* 0x140E6FA6: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x140E6FA7: push dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0xC); /* 0x140E6FAA: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x140E6FAD: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x140E6FAE: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1403FAC4u); /* 0x140E6FB1: push 0x1403fac4 */
    PUSH32(esp, ebx); /* 0x140E6FB6: push ebx */
    PUSH32(esp, eax); /* 0x140E6FB7: push eax */
    RECOMP_CALL(sub_140683B0); /* 0x140E6FB8: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x140E6FBD: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140E6FC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140E6FF2; /* 0x140E6FC2: jns 0x140e6ff2 */
L_140E6FC4:
    edi = POP32_VAL(esp); /* 0x140E6FC4: pop edi */
    esi = POP32_VAL(esp); /* 0x140E6FC5: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E6FC6: pop ebx */
    esp = ebp; /* 0x140E6FC7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6FC9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6FCA: ret 0xc */
L_140E6FCD:
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x140E6FCD: movsx eax, cl */
    PUSH32(esp, eax); /* 0x140E6FD0: push eax */
    eax = (int32_t)(int8_t)LO8(edx); /* 0x140E6FD1: movsx eax, dl */
    PUSH32(esp, eax); /* 0x140E6FD4: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x140E6FD5: push dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0xC); /* 0x140E6FD8: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x140E6FDB: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x140E6FDC: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1403FAD0u); /* 0x140E6FDF: push 0x1403fad0 */
    PUSH32(esp, ebx); /* 0x140E6FE4: push ebx */
    PUSH32(esp, eax); /* 0x140E6FE5: push eax */
    RECOMP_CALL(sub_140683B0); /* 0x140E6FE6: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x140E6FEB: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140E6FEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E7024; /* 0x140E6FF0: js 0x140e7024 */
L_140E6FF2:
    eax = MEM32(ebp + 0xC); /* 0x140E6FF2: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x140E6FF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7014; /* 0x140E6FF7: je 0x140e7014 */
L_140E6FF9:
    /* cmp ebx, 0x7FFFFFFFu */ /* 0x140E6FF9: cmp ebx, 0x7fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E7014; /* 0x140E6FFF: ja 0x140e7014 */
L_140E7001:
    esi = ebp + 0xC; /* 0x140E7001: lea esi, [ebp + 0xc] */
    ecx = ebx; /* 0x140E7004: mov ecx, ebx */
    RECOMP_CALL(sub_140E3580); /* 0x140E7006: call 0x140e3580 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E700B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E7019; /* 0x140E700D: js 0x140e7019 */
L_140E700F:
    ecx = MEM32(ebp + 0xC); /* 0x140E700F: mov ecx, dword ptr [ebp + 0xc] */
    goto L_140E701B; /* 0x140E7012: jmp 0x140e701b */
L_140E7014:
    eax = 0x80070057u; /* 0x140E7014: mov eax, 0x80070057 */
L_140E7019:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x140E7019: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E701B:
    /* test eax, eax */ /* 0x140E701B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E7024; /* 0x140E701D: js 0x140e7024 */
L_140E701F:
    edx = MEM32(ebp + 0x10); /* 0x140E701F: mov edx, dword ptr [ebp + 0x10] */
    MEM32(edx) = ecx; /* 0x140E7022: mov dword ptr [edx], ecx */
L_140E7024:
    edi = POP32_VAL(esp); /* 0x140E7024: pop edi */
    esi = POP32_VAL(esp); /* 0x140E7025: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E7026: pop ebx */
    esp = ebp; /* 0x140E7027: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E7029: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E702A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140E7040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E7040u);

L_140E7040:
    edi = edi; /* 0x140E7040: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E7042: push ebp */
    ebp = esp; /* 0x140E7043: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x140E7045: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E7048: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x140E704A: push esi */
    PUSH32(esp, edi); /* 0x140E704B: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x140E704C: mov dword ptr [ebp - 4], eax */
    /* test ecx, ecx */ /* 0x140E704F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E70A8; /* 0x140E7051: je 0x140e70a8 */
L_140E7053:
    eax = MEM32(ecx); /* 0x140E7053: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x200u); /* 0x140E7055: push 0x200 */
    PUSH32(esp, ebx); /* 0x140E705A: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x140E705B: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140E705E: mov edi, eax */
    /* test edi, edi */ /* 0x140E7060: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E71B7; /* 0x140E7062: js 0x140e71b7 */
L_140E7068:
    /* test ebx, ebx */ /* 0x140E7068: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7086; /* 0x140E706A: je 0x140e7086 */
L_140E706C:
    esi = ebp + (-0x8); /* 0x140E706C: lea esi, [ebp - 8] */
    ecx = 0x200u; /* 0x140E706F: mov ecx, 0x200 */
    eax = ebx; /* 0x140E7074: mov eax, ebx */
    RECOMP_CALL(sub_140E3580); /* 0x140E7076: call 0x140e3580 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140E707B: mov edi, eax */
    /* test edi, edi */ /* 0x140E707D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E708B; /* 0x140E707F: js 0x140e708b */
L_140E7081:
    eax = MEM32(ebp + (-0x8)); /* 0x140E7081: mov eax, dword ptr [ebp - 8] */
    goto L_140E708D; /* 0x140E7084: jmp 0x140e708d */
L_140E7086:
    edi = 0x80070057u; /* 0x140E7086: mov edi, 0x80070057 */
L_140E708B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E708B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E708D:
    /* test edi, edi */ /* 0x140E708D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E71B7; /* 0x140E708F: js 0x140e71b7 */
L_140E7095:
    /* cmp eax, 0x200u */ /* 0x140E7095: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E71A4; /* 0x140E709A: jae 0x140e71a4 */
L_140E70A0:
    MEM8(eax + ebx) = (uint8_t)(0x2Eu); /* 0x140E70A0: mov byte ptr [eax + ebx], 0x2e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140E70A4: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x140E70A5: mov dword ptr [ebp - 4], eax */
L_140E70A8:
    ecx = 0x200u; /* 0x140E70A8: mov ecx, 0x200 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x140E70AD: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x140E70AF: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x140E70B2: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x140E70B5: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0xC)) = eax; /* 0x140E70B7: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x140E70BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E70D9; /* 0x140E70BC: je 0x140e70d9 */
L_140E70BE:
    /* cmp ecx, 0x7FFFFFFFu */ /* 0x140E70BE: cmp ecx, 0x7fffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E70D9; /* 0x140E70C4: ja 0x140e70d9 */
L_140E70C6:
    esi = ebp + (-0x8); /* 0x140E70C6: lea esi, [ebp - 8] */
    RECOMP_CALL(sub_140E3580); /* 0x140E70C9: call 0x140e3580 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140E70CE: mov edi, eax */
    /* test edi, edi */ /* 0x140E70D0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E70DE; /* 0x140E70D2: js 0x140e70de */
L_140E70D4:
    edx = MEM32(ebp + (-0x8)); /* 0x140E70D4: mov edx, dword ptr [ebp - 8] */
    goto L_140E70E0; /* 0x140E70D7: jmp 0x140e70e0 */
L_140E70D9:
    edi = 0x80070057u; /* 0x140E70D9: mov edi, 0x80070057 */
L_140E70DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140E70DE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E70E0:
    /* test edi, edi */ /* 0x140E70E0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E71B7; /* 0x140E70E2: js 0x140e71b7 */
L_140E70E8:
    ecx = MEM32(ebp + (-0x4)); /* 0x140E70E8: mov ecx, dword ptr [ebp - 4] */
    esi = edx + ecx; /* 0x140E70EB: lea esi, [edx + ecx] */
    eax = esi + 0x1; /* 0x140E70EE: lea eax, [esi + 1] */
    /* cmp eax, 0x200u */ /* 0x140E70F1: cmp eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E71A4; /* 0x140E70F6: jae 0x140e71a4 */
L_140E70FC:
    PUSH32(esp, edx); /* 0x140E70FC: push edx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x140E70FD: push dword ptr [ebp - 0xc] */
    eax = ecx + ebx; /* 0x140E7100: lea eax, [ecx + ebx] */
    PUSH32(esp, eax); /* 0x140E7103: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x140E7104: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140E7109: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, 0x200u */ /* 0x140E710C: cmp esi, 0x200 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E71A4; /* 0x140E7112: jae 0x140e71a4 */
L_140E7118:
    edx = MEM32(ebp + 0x8); /* 0x140E7118: mov edx, dword ptr [ebp + 8] */
    MEM8(esi + ebx) = (uint8_t)(0x28u); /* 0x140E711B: mov byte ptr [esi + ebx], 0x28 */
    eax = 1; /* 0x140E711F: mov eax, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x140E7124: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x140E7125: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(edx + 0x4), eax */ /* 0x140E7128: cmp dword ptr [edx + 4], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140E718F; /* 0x140E712B: jbe 0x140e718f */
L_140E712D:
    ecx = 0x18u; /* 0x140E712D: mov ecx, 0x18 */
    MEM32(ebp + (-0x8)) = ecx; /* 0x140E7132: mov dword ptr [ebp - 8], ecx */
L_140E7135:
    /* cmp eax, 1 */ /* 0x140E7135: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140E7154; /* 0x140E7138: jbe 0x140e7154 */
L_140E713A:
    /* cmp esi, 0x200u */ /* 0x140E713A: cmp esi, 0x200 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E71A4; /* 0x140E7140: jae 0x140e71a4 */
L_140E7142:
    MEM8(esi + ebx) = (uint8_t)(0x2Cu); /* 0x140E7142: mov byte ptr [esi + ebx], 0x2c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x140E7146: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 0x200u */ /* 0x140E7147: cmp esi, 0x200 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E71A4; /* 0x140E714D: jae 0x140e71a4 */
L_140E714F:
    MEM8(esi + ebx) = (uint8_t)(0x20u); /* 0x140E714F: mov byte ptr [esi + ebx], 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x140E7153: inc esi */
    _flag_k = FK_INC;
L_140E7154:
    eax = ebp + (-0xC); /* 0x140E7154: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x140E7157: push eax */
    eax = esi + ebx; /* 0x140E7158: lea eax, [esi + ebx] */
    PUSH32(esp, eax); /* 0x140E715B: push eax */
    eax = 0x200u; /* 0x140E715C: mov eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x140E7161: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x140E7163: push eax */
    eax = MEM32(edx + 0x8); /* 0x140E7164: mov eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x140E7167: add eax, ecx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_140E6EA0); /* 0x140E7169: call 0x140e6ea0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140E716E: mov edi, eax */
    /* test edi, edi */ /* 0x140E7170: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E71B7; /* 0x140E7172: js 0x140e71b7 */
L_140E7174:
    eax = MEM32(ebp + (-0x4)); /* 0x140E7174: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x140E7177: mov ecx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + 0x8); /* 0x140E717A: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0xC)); /* 0x140E717D: add esi, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140E7180: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x140E7181: add ecx, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x140E7184: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x140E7187: mov dword ptr [ebp - 8], ecx */
    /* cmp eax, MEM32(edx + 0x4) */ /* 0x140E718A: cmp eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140E7135; /* 0x140E718D: jb 0x140e7135 */
L_140E718F:
    /* cmp esi, 0x200u */ /* 0x140E718F: cmp esi, 0x200 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E71A4; /* 0x140E7195: jae 0x140e71a4 */
L_140E7197:
    MEM8(esi + ebx) = (uint8_t)(0x29u); /* 0x140E7197: mov byte ptr [esi + ebx], 0x29 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x140E719B: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 0x200u */ /* 0x140E719C: cmp esi, 0x200 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140E71B3; /* 0x140E71A2: jb 0x140e71b3 */
L_140E71A4:
    edi = 0x80004005u; /* 0x140E71A4: mov edi, 0x80004005 */
    eax = edi; /* 0x140E71A9: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x140E71AB: pop edi */
    esi = POP32_VAL(esp); /* 0x140E71AC: pop esi */
    esp = ebp; /* 0x140E71AD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E71AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E71B0: ret 4 */
L_140E71B3:
    MEM8(esi + ebx) = (uint8_t)(0); /* 0x140E71B3: mov byte ptr [esi + ebx], 0 */
L_140E71B7:
    eax = edi; /* 0x140E71B7: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x140E71B9: pop edi */
    esi = POP32_VAL(esp); /* 0x140E71BA: pop esi */
    esp = ebp; /* 0x140E71BB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E71BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E71BE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E71D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E71D0u);

L_140E71D0:
    eax = MEM32(eax + 0x20); /* 0x140E71D0: mov eax, dword ptr [eax + 0x20] */
    /* test eax, eax */ /* 0x140E71D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E71EC; /* 0x140E71D5: je 0x140e71ec */
L_140E71D7:
    /* cmp MEM32(eax + 0x4), 2 */ /* 0x140E71D7: cmp dword ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E71EC; /* 0x140E71DB: jne 0x140e71ec */
L_140E71DD:
    eax = MEM32(eax + 0x8C); /* 0x140E71DD: mov eax, dword ptr [eax + 0x8c] */
    /* test eax, eax */ /* 0x140E71E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E71EC; /* 0x140E71E5: je 0x140e71ec */
L_140E71E7:
    MEM32(ecx) = eax; /* 0x140E71E7: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E71E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E71EB: ret  */
L_140E71EC:
    eax = 0x80004005u; /* 0x140E71EC: mov eax, 0x80004005 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E71F1: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E7200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E7200u);

L_140E7200:
    edi = edi; /* 0x140E7200: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E7202: push ebp */
    ebp = esp; /* 0x140E7203: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140E7205: push esi */
    esi = MEM32(ebp + 0x8); /* 0x140E7206: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x140E7209: push edi */
    edi = ecx; /* 0x140E720A: mov edi, ecx */
    esp = esp; /* 0x140E720C: lea esp, [esp] */
L_140E7210:
    /* test esi, esi */ /* 0x140E7210: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7278; /* 0x140E7212: je 0x140e7278 */
L_140E7214:
    eax = MEM32(esi + 0x4); /* 0x140E7214: mov eax, dword ptr [esi + 4] */
    /* cmp eax, 1 */ /* 0x140E7217: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E722F; /* 0x140E721A: jne 0x140e722f */
L_140E721C:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x140E721C: push dword ptr [esi + 8] */
    ecx = edi; /* 0x140E721F: mov ecx, edi */
    RECOMP_CALL(sub_140E7200); /* 0x140E7221: call 0x140e7200 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140E7226: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E7270; /* 0x140E7228: jne 0x140e7270 */
L_140E722A:
    esi = MEM32(esi + 0xC); /* 0x140E722A: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    goto L_140E7210; /* 0x140E722D: jmp 0x140e7210 */
L_140E722F:
    /* cmp eax, 6 */ /* 0x140E722F: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E7254; /* 0x140E7232: je 0x140e7254 */
L_140E7234:
    /* cmp eax, 5 */ /* 0x140E7234: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7278; /* 0x140E7237: jne 0x140e7278 */
L_140E7239:
    eax = MEM32(esi + 0x20); /* 0x140E7239: mov eax, dword ptr [esi + 0x20] */
    /* cmp eax, 0x31u */ /* 0x140E723C: cmp eax, 0x31 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x31u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E7270; /* 0x140E723F: ja 0x140e7270 */
L_140E7241:
    eax = (uint32_t)MEM8(eax + 0x140E728C); /* 0x140E7241: movzx eax, byte ptr [eax + 0x140e728c] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140E7280)); goto _ljump; }
L_140E724F:
    esi = MEM32(esi + 0x24); /* 0x140E724F: mov esi, dword ptr [esi + 0x24] */
    RECOMP_BACKEDGE();
    goto L_140E7210; /* 0x140E7252: jmp 0x140e7210 */
L_140E7254:
    /* cmp MEM32(esi + 0x18), 5 */ /* 0x140E7254: cmp dword ptr [esi + 0x18], 5 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7270; /* 0x140E7258: jne 0x140e7270 */
L_140E725A:
    eax = MEM32(esi + 0x20); /* 0x140E725A: mov eax, dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x140E725D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7278; /* 0x140E725F: je 0x140e7278 */
L_140E7261:
    /* cmp MEM32(eax + 0x4), 2 */ /* 0x140E7261: cmp dword ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7278; /* 0x140E7265: jne 0x140e7278 */
L_140E7267:
    /* cmp MEM32(eax + 0x8C), 0 */ /* 0x140E7267: cmp dword ptr [eax + 0x8c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E7278; /* 0x140E726E: je 0x140e7278 */
L_140E7270:
    edi = POP32_VAL(esp); /* 0x140E7270: pop edi */
    SET_LO8(eax, 1); /* 0x140E7271: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x140E7273: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E7274: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E7275: ret 4 */
L_140E7278:
    edi = POP32_VAL(esp); /* 0x140E7278: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E7279: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x140E727B: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E727C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E727D: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x140E724Fu: goto L_140E724F;
      case 0x140E7270u: goto L_140E7270;
      case 0x140E7278u: goto L_140E7278;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140E72D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E72D0u);

L_140E72D0:
    edi = edi; /* 0x140E72D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E72D2: push ebp */
    ebp = esp; /* 0x140E72D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x140E72D5: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x140E72D8: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x140E72D9: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x140E72DC: push esi */
    PUSH32(esp, edi); /* 0x140E72DD: push edi */
    edi = ecx; /* 0x140E72DE: mov edi, ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x140E72E0: mov dword ptr [ebp - 4], edi */
L_140E72E3:
    ecx = MEM32(ebp + 0xC); /* 0x140E72E3: mov ecx, dword ptr [ebp + 0xc] */
L_140E72E6:
    /* test ebx, ebx */ /* 0x140E72E6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E742D; /* 0x140E72E8: je 0x140e742d */
L_140E72EE:
    eax = MEM32(ebx + 0x4); /* 0x140E72EE: mov eax, dword ptr [ebx + 4] */
    /* cmp eax, 1 */ /* 0x140E72F1: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E730A; /* 0x140E72F4: jne 0x140e730a */
L_140E72F6:
    PUSH32(esp, ecx); /* 0x140E72F6: push ecx */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x140E72F7: push dword ptr [ebx + 8] */
    ecx = edi; /* 0x140E72FA: mov ecx, edi */
    RECOMP_CALL(sub_140E72D0); /* 0x140E72FC: call 0x140e72d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140E7301: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7377; /* 0x140E7303: je 0x140e7377 */
L_140E7305:
    ebx = MEM32(ebx + 0xC); /* 0x140E7305: mov ebx, dword ptr [ebx + 0xc] */
    RECOMP_BACKEDGE();
    goto L_140E72E3; /* 0x140E7308: jmp 0x140e72e3 */
L_140E730A:
    /* cmp eax, 6 */ /* 0x140E730A: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E73F4; /* 0x140E730D: je 0x140e73f4 */
L_140E7313:
    /* cmp eax, 5 */ /* 0x140E7313: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E742D; /* 0x140E7316: jne 0x140e742d */
L_140E731C:
    eax = MEM32(ebx + 0x20); /* 0x140E731C: mov eax, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE5u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFE5u; /* 0x140E731F: add eax, -0x1b */
    _flag_k = FK_ADD;
    /* cmp eax, 0x15u */ /* 0x140E7322: cmp eax, 0x15 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x15u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E73C5; /* 0x140E7325: ja 0x140e73c5 */
L_140E732B:
    eax = (uint32_t)MEM8(eax + 0x140E7448); /* 0x140E732B: movzx eax, byte ptr [eax + 0x140e7448] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140E7438)); goto _ljump; }
L_140E7339:
    ebx = MEM32(ebx + 0x28); /* 0x140E7339: mov ebx, dword ptr [ebx + 0x28] */
    /* test ebx, ebx */ /* 0x140E733C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7377; /* 0x140E733E: je 0x140e7377 */
L_140E7340:
    /* cmp MEM32(ebx + 0x4), 5 */ /* 0x140E7340: cmp dword ptr [ebx + 4], 5 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7377; /* 0x140E7344: jne 0x140e7377 */
L_140E7346:
    ebx = MEM32(ebx + 0x28); /* 0x140E7346: mov ebx, dword ptr [ebx + 0x28] */
    RECOMP_BACKEDGE();
    goto L_140E72E6; /* 0x140E7349: jmp 0x140e72e6 */
L_140E734B:
    edx = ebp + (-0x8); /* 0x140E734B: lea edx, [ebp - 8] */
    esi = ebp + 0x8; /* 0x140E734E: lea esi, [ebp + 8] */
    edi = ebp + (-0xC); /* 0x140E7351: lea edi, [ebp - 0xc] */
    ecx = ebx; /* 0x140E7354: mov ecx, ebx */
    RECOMP_CALL(sub_140EA240); /* 0x140E7356: call 0x140ea240 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E735B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E7377; /* 0x140E735D: jne 0x140e7377 */
L_140E735F:
    eax = MEM32(ebp + 0x8); /* 0x140E735F: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0xB5u */ /* 0x140E7362: cmp eax, 0xb5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xB5u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E7382; /* 0x140E7367: ja 0x140e7382 */
L_140E7369:
    eax = (uint32_t)MEM8(eax + 0x140E7468); /* 0x140E7369: movzx eax, byte ptr [eax + 0x140e7468] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140E7460)); goto _ljump; }
L_140E7377:
    edi = POP32_VAL(esp); /* 0x140E7377: pop edi */
    esi = POP32_VAL(esp); /* 0x140E7378: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E7379: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x140E737B: pop ebx */
    esp = ebp; /* 0x140E737C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E737E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140E737F: ret 8 */
L_140E7382:
    esi = MEM32(ebp + 0xC); /* 0x140E7382: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(ebx + 0x28); /* 0x140E7385: mov eax, dword ptr [ebx + 0x28] */
    edi = MEM32(ebp + (-0x4)); /* 0x140E7388: mov edi, dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x140E738B: push esi */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x140E738C: push dword ptr [eax + 8] */
    ecx = edi; /* 0x140E738F: mov ecx, edi */
    RECOMP_CALL(sub_140E72D0); /* 0x140E7391: call 0x140e72d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140E7396: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E73BA; /* 0x140E7398: je 0x140e73ba */
L_140E739A:
    eax = MEM32(ebx + 0x28); /* 0x140E739A: mov eax, dword ptr [ebx + 0x28] */
    PUSH32(esp, esi); /* 0x140E739D: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x140E739E: push dword ptr [eax + 0xc] */
    ecx = edi; /* 0x140E73A1: mov ecx, edi */
    RECOMP_CALL(sub_140E72D0); /* 0x140E73A3: call 0x140e72d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140E73A8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E73BA; /* 0x140E73AA: je 0x140e73ba */
L_140E73AC:
    edi = POP32_VAL(esp); /* 0x140E73AC: pop edi */
    esi = POP32_VAL(esp); /* 0x140E73AD: pop esi */
    eax = 1; /* 0x140E73AE: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x140E73B3: pop ebx */
    esp = ebp; /* 0x140E73B4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E73B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140E73B7: ret 8 */
L_140E73BA:
    edi = POP32_VAL(esp); /* 0x140E73BA: pop edi */
    esi = POP32_VAL(esp); /* 0x140E73BB: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E73BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140E73BE: pop ebx */
    esp = ebp; /* 0x140E73BF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E73C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140E73C2: ret 8 */
L_140E73C5:
    PUSH32(esp, ecx); /* 0x140E73C5: push ecx */
    PUSH32(esp, MEM32(ebx + 0x24)); /* 0x140E73C6: push dword ptr [ebx + 0x24] */
    ecx = edi; /* 0x140E73C9: mov ecx, edi */
    RECOMP_CALL(sub_140E72D0); /* 0x140E73CB: call 0x140e72d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140E73D0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E73BA; /* 0x140E73D2: je 0x140e73ba */
L_140E73D4:
    esi = MEM32(ebp + 0xC); /* 0x140E73D4: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x140E73D7: push esi */
    PUSH32(esp, MEM32(ebx + 0x28)); /* 0x140E73D8: push dword ptr [ebx + 0x28] */
    ecx = edi; /* 0x140E73DB: mov ecx, edi */
    RECOMP_CALL(sub_140E72D0); /* 0x140E73DD: call 0x140e72d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140E73E2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E73BA; /* 0x140E73E4: je 0x140e73ba */
L_140E73E6:
    edi = POP32_VAL(esp); /* 0x140E73E6: pop edi */
    esi = POP32_VAL(esp); /* 0x140E73E7: pop esi */
    eax = 1; /* 0x140E73E8: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x140E73ED: pop ebx */
    esp = ebp; /* 0x140E73EE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E73F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140E73F1: ret 8 */
L_140E73F4:
    eax = MEM32(ebx + 0x18); /* 0x140E73F4: mov eax, dword ptr [ebx + 0x18] */
    /* cmp eax, 7 */ /* 0x140E73F7: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E7377; /* 0x140E73FA: je 0x140e7377 */
L_140E7400:
    /* test LO8(ecx), LO8(ecx) */ /* 0x140E7400: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E7416; /* 0x140E7402: jne 0x140e7416 */
L_140E7404:
    /* cmp eax, 4 */ /* 0x140E7404: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E7377; /* 0x140E7407: je 0x140e7377 */
L_140E740D:
    /* cmp eax, 6 */ /* 0x140E740D: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E7377; /* 0x140E7410: je 0x140e7377 */
L_140E7416:
    /* cmp eax, 5 */ /* 0x140E7416: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E742D; /* 0x140E7419: jne 0x140e742d */
L_140E741B:
    ecx = ebp + 0xC; /* 0x140E741B: lea ecx, [ebp + 0xc] */
    eax = ebx; /* 0x140E741E: mov eax, ebx */
    RECOMP_CALL(sub_140E71D0); /* 0x140E7420: call 0x140e71d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E7425: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E7377; /* 0x140E7427: jne 0x140e7377 */
L_140E742D:
    edi = POP32_VAL(esp); /* 0x140E742D: pop edi */
    esi = POP32_VAL(esp); /* 0x140E742E: pop esi */
    SET_LO8(eax, 1); /* 0x140E742F: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x140E7431: pop ebx */
    esp = ebp; /* 0x140E7432: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E7434: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140E7435: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x140E7339u: goto L_140E7339;
      case 0x140E734Bu: goto L_140E734B;
      case 0x140E7377u: goto L_140E7377;
      case 0x140E7382u: goto L_140E7382;
      case 0x140E73C5u: goto L_140E73C5;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140E7530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E7530u);

L_140E7530:
    edi = edi; /* 0x140E7530: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E7532: push ebp */
    ebp = esp; /* 0x140E7533: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140E7535: push esi */
    esi = MEM32(ebp + 0x8); /* 0x140E7536: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x140E7539: push edi */
    edi = ecx; /* 0x140E753A: mov edi, ecx */
    esp = esp; /* 0x140E753C: lea esp, [esp] */
L_140E7540:
    /* test esi, esi */ /* 0x140E7540: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E75D9; /* 0x140E7542: je 0x140e75d9 */
L_140E7548:
    eax = MEM32(esi + 0x4); /* 0x140E7548: mov eax, dword ptr [esi + 4] */
    /* cmp eax, 1 */ /* 0x140E754B: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7563; /* 0x140E754E: jne 0x140e7563 */
L_140E7550:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x140E7550: push dword ptr [esi + 8] */
    ecx = edi; /* 0x140E7553: mov ecx, edi */
    RECOMP_CALL(sub_140E7530); /* 0x140E7555: call 0x140e7530 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140E755A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7578; /* 0x140E755C: je 0x140e7578 */
L_140E755E:
    esi = MEM32(esi + 0xC); /* 0x140E755E: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    goto L_140E7540; /* 0x140E7561: jmp 0x140e7540 */
L_140E7563:
    /* cmp eax, 6 */ /* 0x140E7563: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E75B3; /* 0x140E7566: je 0x140e75b3 */
L_140E7568:
    /* cmp eax, 5 */ /* 0x140E7568: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E75D9; /* 0x140E756B: jne 0x140e75d9 */
L_140E756D:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x140E756D: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7580; /* 0x140E7571: jne 0x140e7580 */
L_140E7573:
    esi = MEM32(esi + 0x24); /* 0x140E7573: mov esi, dword ptr [esi + 0x24] */
    RECOMP_BACKEDGE();
    goto L_140E7540; /* 0x140E7576: jmp 0x140e7540 */
L_140E7578:
    edi = POP32_VAL(esp); /* 0x140E7578: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E7579: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x140E757B: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E757C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E757D: ret 4 */
L_140E7580:
    PUSH32(esp, 0); /* 0x140E7580: push 0 */
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x140E7582: push dword ptr [esi + 0x24] */
    ecx = edi; /* 0x140E7585: mov ecx, edi */
    RECOMP_CALL(sub_140E72D0); /* 0x140E7587: call 0x140e72d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140E758C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E75AB; /* 0x140E758E: je 0x140e75ab */
L_140E7590:
    PUSH32(esp, 0); /* 0x140E7590: push 0 */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x140E7592: push dword ptr [esi + 0x28] */
    ecx = edi; /* 0x140E7595: mov ecx, edi */
    RECOMP_CALL(sub_140E72D0); /* 0x140E7597: call 0x140e72d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140E759C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E75AB; /* 0x140E759E: je 0x140e75ab */
L_140E75A0:
    edi = POP32_VAL(esp); /* 0x140E75A0: pop edi */
    eax = 1; /* 0x140E75A1: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x140E75A6: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E75A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E75A8: ret 4 */
L_140E75AB:
    edi = POP32_VAL(esp); /* 0x140E75AB: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E75AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140E75AE: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E75AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E75B0: ret 4 */
L_140E75B3:
    ecx = MEM32(esi + 0x18); /* 0x140E75B3: mov ecx, dword ptr [esi + 0x18] */
    /* cmp ecx, 4 */ /* 0x140E75B6: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E7578; /* 0x140E75B9: je 0x140e7578 */
L_140E75BB:
    /* cmp ecx, 6 */ /* 0x140E75BB: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E75C6; /* 0x140E75BE: jne 0x140e75c6 */
L_140E75C0:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x140E75C0: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7578; /* 0x140E75C4: jne 0x140e7578 */
L_140E75C6:
    /* cmp ecx, 5 */ /* 0x140E75C6: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E75D9; /* 0x140E75C9: jne 0x140e75d9 */
L_140E75CB:
    ecx = ebp + 0x8; /* 0x140E75CB: lea ecx, [ebp + 8] */
    eax = esi; /* 0x140E75CE: mov eax, esi */
    RECOMP_CALL(sub_140E71D0); /* 0x140E75D0: call 0x140e71d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E75D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E7578; /* 0x140E75D7: jne 0x140e7578 */
L_140E75D9:
    edi = POP32_VAL(esp); /* 0x140E75D9: pop edi */
    SET_LO8(eax, 1); /* 0x140E75DA: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x140E75DC: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E75DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E75DE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E75F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E75F0u);

L_140E75F0:
    edi = edi; /* 0x140E75F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E75F2: push ebp */
    ebp = esp; /* 0x140E75F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x140E75F5: sub esp, 8 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ecx), 0xCu */ /* 0x140E75F8: cmp dword ptr [ecx], 0xc */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0xCu; /* 0x140E75FB: mov dword ptr [esi], 0xc */
    MEM32(esi + 0x8) = 0x1403FAECu; /* 0x140E7601: mov dword ptr [esi + 8], 0x1403faec */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E7615; /* 0x140E7608: je 0x140e7615 */
L_140E760A:
    eax = 0x80070057u; /* 0x140E760A: mov eax, 0x80070057 */
    esp = ebp; /* 0x140E760F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E7611: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E7612: ret 4 */
L_140E7615:
    /* cmp MEM32(eax), 0xCu */ /* 0x140E7615: cmp dword ptr [eax], 0xc */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E760A; /* 0x140E7618: jne 0x140e760a */
L_140E761A:
    ecx = MEM32(ecx + 0x8); /* 0x140E761A: mov ecx, dword ptr [ecx + 8] */
    edx = MEM32(eax + 0x8); /* 0x140E761D: mov edx, dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x140E7620: push edi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x140E7621: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x140E7624: mov dword ptr [ebp - 4], edx */
    edi = ecx + 0x1; /* 0x140E7627: lea edi, [ecx + 1] */
    ebx = ebx; /* 0x140E762A: lea ebx, [ebx] */
L_140E7630:
    SET_LO8(eax, MEM8(ecx)); /* 0x140E7630: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x140E7632: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x140E7633: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E7630; /* 0x140E7635: jne 0x140e7630 */
L_140E7637:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x140E7637: sub ecx, edi */
    _flag_k = FK_CMP;
    edi = edx + 0x1; /* 0x140E7639: lea edi, [edx + 1] */
    esp = esp; /* 0x140E763C: lea esp, [esp] */
L_140E7640:
    SET_LO8(eax, MEM8(edx)); /* 0x140E7640: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x140E7642: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x140E7643: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E7640; /* 0x140E7645: jne 0x140e7640 */
L_140E7647:
    PUSH32(esp, ebx); /* 0x140E7647: push ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x140E7648: sub edx, edi */
    _flag_k = FK_CMP;
    ebx = edx + ecx + 0x1; /* 0x140E764A: lea ebx, [edx + ecx + 1] */
    ecx = MEM32(ebp + 0x8); /* 0x140E764E: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x54); /* 0x140E7651: mov ecx, dword ptr [ecx + 0x54] */
    PUSH32(esp, 1); /* 0x140E7654: push 1 */
    PUSH32(esp, ebx); /* 0x140E7656: push ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x140E7657: add ecx, 0x34 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_141E6491); /* 0x140E765A: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140E765F: mov edi, eax */
    /* test edi, edi */ /* 0x140E7661: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E767C; /* 0x140E7663: jne 0x140e767c */
L_140E7665:
    eax = MEM32(ebp + 0x8); /* 0x140E7665: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x140E7668: pop ebx */
    MEM8(eax + 0x248) = (uint8_t)(1); /* 0x140E7669: mov byte ptr [eax + 0x248], 1 */
    eax = 0x8007000Eu; /* 0x140E7670: mov eax, 0x8007000e */
    edi = POP32_VAL(esp); /* 0x140E7675: pop edi */
    esp = ebp; /* 0x140E7676: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E7678: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E7679: ret 4 */
L_140E767C:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x140E767C: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x140E767F: push dword ptr [ebp - 8] */
    PUSH32(esp, 0x14034C98u); /* 0x140E7682: push 0x14034c98 */
    PUSH32(esp, ebx); /* 0x140E7687: push ebx */
    PUSH32(esp, edi); /* 0x140E7688: push edi */
    RECOMP_CALL(sub_140683B0); /* 0x140E7689: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x140E768E: add esp, 0x14 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x140E7691: pop ebx */
    MEM32(esi + 0x8) = edi; /* 0x140E7692: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E7695: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140E7697: pop edi */
    esp = ebp; /* 0x140E7698: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E769A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E769B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E76B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E76B0u);

L_140E76B0:
    edi = edi; /* 0x140E76B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E76B2: push ebp */
    ebp = esp; /* 0x140E76B3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140E76B5: push esi */
    PUSH32(esp, edi); /* 0x140E76B6: push edi */
    edi = eax; /* 0x140E76B7: mov edi, eax */
    eax = MEM32(0x141F3DEC); /* 0x140E76B9: mov eax, dword ptr [0x141f3dec] */
    esi = ecx; /* 0x140E76BE: mov esi, ecx */
    /* test eax, eax */ /* 0x140E76C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140E76C8; /* 0x140E76C2: jns 0x140e76c8 */
L_140E76C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E76C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E76CF; /* 0x140E76C6: jmp 0x140e76cf */
L_140E76C8:
    PUSH32(esp, eax); /* 0x140E76C8: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x140E76C9: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_140E76CF:
    ecx = MEM32(eax + 0x4); /* 0x140E76CF: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x140E76D2: push 0x10 */
    PUSH32(esp, 0x3Cu); /* 0x140E76D4: push 0x3c */
    RECOMP_CALL(sub_141E6491); /* 0x140E76D6: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E76DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E772F; /* 0x140E76DD: je 0x140e772f */
L_140E76DF:
    esi = MEM32(ebp + 0x8); /* 0x140E76DF: mov esi, dword ptr [ebp + 8] */
    MEM32(eax + 0x20) = edi; /* 0x140E76E2: mov dword ptr [eax + 0x20], edi */
    MEM32(eax + 0x38) = 0; /* 0x140E76E5: mov dword ptr [eax + 0x38], 0 */
    MEM32(eax + 0x24) = 0; /* 0x140E76EC: mov dword ptr [eax + 0x24], 0 */
    MEM32(eax + 0x28) = 0; /* 0x140E76F3: mov dword ptr [eax + 0x28], 0 */
    MEM32(eax + 0x2C) = 0; /* 0x140E76FA: mov dword ptr [eax + 0x2c], 0 */
    MEM32(eax + 0x30) = 0xFFFFFFFFu; /* 0x140E7701: mov dword ptr [eax + 0x30], 0xffffffff */
    MEM32(eax + 0x34) = 0; /* 0x140E7708: mov dword ptr [eax + 0x34], 0 */
    ecx = 8; /* 0x140E770F: mov ecx, 8 */
    edi = eax; /* 0x140E7714: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x140E7716: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x140E7718: pop edi */
    MEM32(eax + 0x28) = 0; /* 0x140E7719: mov dword ptr [eax + 0x28], 0 */
    MEM32(eax + 0x2C) = 0; /* 0x140E7720: mov dword ptr [eax + 0x2c], 0 */
    MEM32(eax + 0x24) = ebx; /* 0x140E7727: mov dword ptr [eax + 0x24], ebx */
    esi = POP32_VAL(esp); /* 0x140E772A: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E772B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E772C: ret 4 */
L_140E772F:
    edi = POP32_VAL(esp); /* 0x140E772F: pop edi */
    MEM8(esi + 0x248) = (uint8_t)(1); /* 0x140E7730: mov byte ptr [esi + 0x248], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E7737: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140E7739: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E773A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E773B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E7750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E7750u);

L_140E7750:
    edi = edi; /* 0x140E7750: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E7752: push ebp */
    ebp = esp; /* 0x140E7753: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x140E7755: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x140E7758: push esi */
    PUSH32(esp, edi); /* 0x140E7759: push edi */
    /* test ebx, ebx */ /* 0x140E775A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E7768; /* 0x140E775C: jne 0x140e7768 */
L_140E775E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E775E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140E7760: pop edi */
    esi = POP32_VAL(esp); /* 0x140E7761: pop esi */
    esp = ebp; /* 0x140E7762: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E7764: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E7765: ret 0xc */
L_140E7768:
    esi = MEM32(ebp + 0x10); /* 0x140E7768: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x140E776B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E77CB; /* 0x140E776D: je 0x140e77cb */
L_140E776F:
    eax = ebp + (-0x1C); /* 0x140E776F: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x140E7772: push eax */
    PUSH32(esp, 0); /* 0x140E7773: push 0 */
    PUSH32(esp, 0); /* 0x140E7775: push 0 */
    PUSH32(esp, esi); /* 0x140E7777: push esi */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x140E7778: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141E9682); /* 0x140E777B: call 0x141e9682 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E7780: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E77B0; /* 0x140E7782: je 0x140e77b0 */
L_140E7784:
    edx = MEM32(ebp + 0xC); /* 0x140E7784: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x140E7787: push esi */
    esi = MEM32(ebp + 0x8); /* 0x140E7788: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1403FB2Cu); /* 0x140E778B: push 0x1403fb2c */
    PUSH32(esp, 0xC11u); /* 0x140E7790: push 0xc11 */
    RECOMP_CALL(sub_140E6B90); /* 0x140E7795: call 0x140e6b90 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x10); /* 0x140E779A: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140E779D: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x30) = edi; /* 0x140E77A0: mov dword ptr [ebx + 0x30], edi */
    MEM32(ebx + 0x28) = esi; /* 0x140E77A3: mov dword ptr [ebx + 0x28], esi */
    eax = ebx; /* 0x140E77A6: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x140E77A8: pop edi */
    esi = POP32_VAL(esp); /* 0x140E77A9: pop esi */
    esp = ebp; /* 0x140E77AA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E77AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E77AD: ret 0xc */
L_140E77B0:
    /* test MEM8(ebp + (-0xC)), 0x20u */ /* 0x140E77B0: test byte ptr [ebp - 0xc], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = MEM32(ebp + (-0x18)); /* 0x140E77B4: mov edi, dword ptr [ebp - 0x18] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E77C5; /* 0x140E77B7: je 0x140e77c5 */
L_140E77B9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFF0400u);
    edi = edi & 0xFFFF0400u; /* 0x140E77B9: and edi, 0xffff0400 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | 0x400u)); _flag_b = (uint32_t)((edi | 0x400u));
    edi = edi | 0x400u; /* 0x140E77BF: or edi, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E77C5:
    MEM32(ebx + 0x30) = edi; /* 0x140E77C5: mov dword ptr [ebx + 0x30], edi */
    MEM32(ebx + 0x28) = esi; /* 0x140E77C8: mov dword ptr [ebx + 0x28], esi */
L_140E77CB:
    edi = POP32_VAL(esp); /* 0x140E77CB: pop edi */
    eax = ebx; /* 0x140E77CC: mov eax, ebx */
    esi = POP32_VAL(esp); /* 0x140E77CE: pop esi */
    esp = ebp; /* 0x140E77CF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E77D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E77D2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140E77E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E77E0u);

L_140E77E0:
    edi = edi; /* 0x140E77E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E77E2: push ebp */
    ebp = esp; /* 0x140E77E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x140E77E5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x140E77E8: push esi */
    esi = eax; /* 0x140E77E9: mov esi, eax */
    /* test esi, esi */ /* 0x140E77EB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7821; /* 0x140E77ED: je 0x140e7821 */
L_140E77EF:
    eax = ebp + (-0x4); /* 0x140E77EF: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x140E77F2: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x140E77F3: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = 0; /* 0x140E77F6: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140E77FD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_14139A10); /* 0x140E7800: call 0x14139a10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E7805: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140E782A; /* 0x140E7807: jns 0x140e782a */
L_140E7809:
    edx = MEM32(ebp + 0xC); /* 0x140E7809: mov edx, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x140E780C: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1403FB50u); /* 0x140E780F: push 0x1403fb50 */
    PUSH32(esp, 0xBF2u); /* 0x140E7814: push 0xbf2 */
    RECOMP_CALL(sub_140E6B90); /* 0x140E7819: call 0x140e6b90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E781E: add esp, 8 */
    _flag_k = FK_ADD;
L_140E7821:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E7821: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140E7823: pop esi */
    esp = ebp; /* 0x140E7824: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E7826: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E7827: ret 0xc */
L_140E782A:
    ecx = MEM32(ebp + (-0x4)); /* 0x140E782A: mov ecx, dword ptr [ebp - 4] */
    MEM32(esi + 0x34) = ecx; /* 0x140E782D: mov dword ptr [esi + 0x34], ecx */
    eax = esi; /* 0x140E7830: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x140E7832: pop esi */
    esp = ebp; /* 0x140E7833: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E7835: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E7836: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140E7840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E7840u);

L_140E7840:
    edi = edi; /* 0x140E7840: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E7842: push ebp */
    ebp = esp; /* 0x140E7843: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x94u; /* 0x140E7845: sub esp, 0x94 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x140E784B: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140E784C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x140E784E: push esi */
    PUSH32(esp, edi); /* 0x140E784F: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140E7850: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x140E7852: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x90)) = ebx; /* 0x140E7855: mov dword ptr [ebp - 0x90], ebx */
    MEM32(ebp + (-0x8C)) = ebx; /* 0x140E785B: mov dword ptr [ebp - 0x8c], ebx */
    MEM32(ebp + (-0x88)) = ebx; /* 0x140E7861: mov dword ptr [ebp - 0x88], ebx */
    MEM32(ebp + (-0x54)) = ebx; /* 0x140E7867: mov dword ptr [ebp - 0x54], ebx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x140E786A: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x140E786D: mov dword ptr [ebp - 0x2c], ebx */
    MEM32(ebp + (-0x28)) = ebx; /* 0x140E7870: mov dword ptr [ebp - 0x28], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x140E7873: mov dword ptr [ebp - 0x10], ebx */
    /* cmp MEM8(ebp + 0xC), LO8(ebx) */ /* 0x140E7876: cmp byte ptr [ebp + 0xc], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E78CF; /* 0x140E7879: je 0x140e78cf */
L_140E787B:
    PUSH32(esp, 8); /* 0x140E787B: push 8 */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x140E787D: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x140E7883: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140E7885: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x140E7888: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7899; /* 0x140E788A: je 0x140e7899 */
L_140E788C:
    edx = MEM32(ebp + 0x8); /* 0x140E788C: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edx + 0x4); /* 0x140E788F: mov ecx, dword ptr [edx + 4] */
    MEM32(ebx) = edx; /* 0x140E7892: mov dword ptr [ebx], edx */
    MEM32(ebx + 0x4) = ecx; /* 0x140E7894: mov dword ptr [ebx + 4], ecx */
    goto L_140E78D2; /* 0x140E7897: jmp 0x140e78d2 */
L_140E7899:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140E7899: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E789B:
    esi = ebp + (-0x90); /* 0x140E789B: lea esi, [ebp - 0x90] */
    RECOMP_CALL(sub_1406A7D0); /* 0x140E78A1: call 0x1406a7d0 */
    RECOMP_FLAGS_IN();
L_140E78A6:
    ecx = MEM32(ebp + 0x8); /* 0x140E78A6: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x140E78A9: push ebx */
    MEM8(ecx + 0x249) = (uint8_t)(1); /* 0x140E78AA: mov byte ptr [ecx + 0x249], 1 */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x140E78B1: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140E78B7: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x140E78BA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E78C4; /* 0x140E78BC: je 0x140e78c4 */
L_140E78BE:
    eax = MEM32(edi); /* 0x140E78BE: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x140E78C0: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140E78C1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_140E78C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E78C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140E78C6: pop edi */
    esi = POP32_VAL(esp); /* 0x140E78C7: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E78C8: pop ebx */
    esp = ebp; /* 0x140E78C9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E78CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140E78CC: ret 8 */
L_140E78CF:
    edx = MEM32(ebp + 0x8); /* 0x140E78CF: mov edx, dword ptr [ebp + 8] */
L_140E78D2:
    eax = ebp + (-0x4); /* 0x140E78D2: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x140E78D5: push eax */
    eax = MEM32(edx + 0x50); /* 0x140E78D6: mov eax, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xC3u);
    eax = eax & 0xC3u; /* 0x140E78D9: and eax, 0xc3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x140E78DE: push ebx */
    PUSH32(esp, eax); /* 0x140E78DF: push eax */
    eax = ebp + (-0x90); /* 0x140E78E0: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x140E78E6: push eax */
    eax = MEM32(edx + 0x54); /* 0x140E78E7: mov eax, dword ptr [edx + 0x54] */
    RECOMP_CALL(sub_1406A860); /* 0x140E78EA: call 0x1406a860 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E78EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140E7903; /* 0x140E78F1: jns 0x140e7903 */
L_140E78F3:
    esi = ebp + (-0x90); /* 0x140E78F3: lea esi, [ebp - 0x90] */
    RECOMP_CALL(sub_1406A7D0); /* 0x140E78F9: call 0x1406a7d0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x4)); /* 0x140E78FE: mov edi, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_140E78A6; /* 0x140E7901: jmp 0x140e78a6 */
L_140E7903:
    edi = MEM32(ebp + (-0x4)); /* 0x140E7903: mov edi, dword ptr [ebp - 4] */
    eax = MEM32(edi); /* 0x140E7906: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x140E7908: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x140E7909: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x140E790C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E789B; /* 0x140E790F: jae 0x140e789b */
L_140E7911:
    eax = MEM32(edi); /* 0x140E7911: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x140E7913: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x140E7914: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x141F3DEC); /* 0x140E7917: mov ecx, dword ptr [0x141f3dec] */
    esi = eax; /* 0x140E791D: mov esi, eax */
    MEM32(ebp + 0xC) = esi; /* 0x140E791F: mov dword ptr [ebp + 0xc], esi */
    /* test ecx, ecx */ /* 0x140E7922: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E789B; /* 0x140E7924: js 0x140e789b */
L_140E792A:
    PUSH32(esp, ecx); /* 0x140E792A: push ecx */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x140E792B: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E7931: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E789B; /* 0x140E7933: je 0x140e789b */
L_140E7939:
    ecx = MEM32(eax + 0x20); /* 0x140E7939: mov ecx, dword ptr [eax + 0x20] */
    PUSH32(esp, 1); /* 0x140E793C: push 1 */
    PUSH32(esp, esi); /* 0x140E793E: push esi */
    RECOMP_CALL(sub_141E6491); /* 0x140E793F: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x140E7944: mov esi, eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x140E7946: mov dword ptr [ebp - 4], esi */
    /* test esi, esi */ /* 0x140E7949: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E789B; /* 0x140E794B: je 0x140e789b */
L_140E7951:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140E7951: push dword ptr [ebp + 0xc] */
    ecx = MEM32(edi); /* 0x140E7954: mov ecx, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x140E7956: push edi */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x140E7957: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x140E795A: push eax */
    PUSH32(esp, esi); /* 0x140E795B: push esi */
    RECOMP_CALL(sub_141EC9A4); /* 0x140E795C: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x140E7961: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140E7963: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x140E7966: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140E7967: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140E796A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi + 0x48; /* 0x140E796C: lea esi, [edi + 0x48] */
    RECOMP_CALL(sub_1406E5A0); /* 0x140E796F: call 0x1406e5a0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x140E7974: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x140E7977: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E789B; /* 0x140E7979: je 0x140e789b */
L_140E797F:
    esi = MEM32(ebp + 0x8); /* 0x140E797F: mov esi, dword ptr [ebp + 8] */
    MEM32(eax + 0x8) = edi; /* 0x140E7982: mov dword ptr [eax + 8], edi */
    MEM32(eax + 0xC) = edi; /* 0x140E7985: mov dword ptr [eax + 0xc], edi */
    edi = eax + 0x18; /* 0x140E7988: lea edi, [eax + 0x18] */
    MEM32(eax + 0x4) = 7; /* 0x140E798B: mov dword ptr [eax + 4], 7 */
    MEM32(eax + 0x10) = 1; /* 0x140E7992: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x1403FE8Cu; /* 0x140E7999: mov dword ptr [eax], 0x1403fe8c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x220u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x220u; /* 0x140E799F: add esi, 0x220 */
    _flag_k = FK_ADD;
    ecx = 0xAu; /* 0x140E79A5: mov ecx, 0xa */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x140E79AA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x140E79AC: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x40) = ecx; /* 0x140E79AF: mov dword ptr [eax + 0x40], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x140E79B2: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x140E79B5: push ebx */
    MEM32(eax + 0x44) = ecx; /* 0x140E79B6: mov dword ptr [eax + 0x44], ecx */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x140E79B9: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140E79BF: add esp, 4 */
    _flag_k = FK_ADD;
    esi = ebp + (-0x90); /* 0x140E79C2: lea esi, [ebp - 0x90] */
    RECOMP_CALL(sub_1406A7D0); /* 0x140E79C8: call 0x1406a7d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x140E79CD: mov eax, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x140E79D0: pop edi */
    esi = POP32_VAL(esp); /* 0x140E79D1: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E79D2: pop ebx */
    esp = ebp; /* 0x140E79D3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E79D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140E79D6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140E79E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E79E0u);

L_140E79E0:
    edi = edi; /* 0x140E79E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E79E2: push ebp */
    ebp = esp; /* 0x140E79E3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140E79E5: push ecx */
    PUSH32(esp, ebx); /* 0x140E79E6: push ebx */
    ebx = eax; /* 0x140E79E7: mov ebx, eax */
    PUSH32(esp, esi); /* 0x140E79E9: push esi */
    PUSH32(esp, edi); /* 0x140E79EA: push edi */
    /* test ebx, ebx */ /* 0x140E79EB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7B55; /* 0x140E79ED: je 0x140e7b55 */
L_140E79F3:
    /* cmp MEM32(ebx + 0x4), 7 */ /* 0x140E79F3: cmp dword ptr [ebx + 4], 7 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7B55; /* 0x140E79F7: jne 0x140e7b55 */
L_140E79FD:
    eax = MEM32(ebx + 0x40); /* 0x140E79FD: mov eax, dword ptr [ebx + 0x40] */
    /* test eax, eax */ /* 0x140E7A00: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7B55; /* 0x140E7A02: je 0x140e7b55 */
L_140E7A08:
    /* cmp MEM32(ebx + 0x44), 4 */ /* 0x140E7A08: cmp dword ptr [ebx + 0x44], 4 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x44)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140E7B55; /* 0x140E7A0C: jb 0x140e7b55 */
L_140E7A12:
    eax = MEM32(eax); /* 0x140E7A12: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x140E7A14: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFE0000u */ /* 0x140E7A19: cmp eax, 0xfffe0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFE0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E7A4F; /* 0x140E7A1E: ja 0x140e7a4f */
L_140E7A20:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E7A46; /* 0x140E7A20: je 0x140e7a46 */
L_140E7A22:
    /* cmp eax, 0x7FFE0000u */ /* 0x140E7A22: cmp eax, 0x7ffe0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFE0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E7A3D; /* 0x140E7A27: je 0x140e7a3d */
L_140E7A29:
    /* cmp eax, 0x7FFF0000u */ /* 0x140E7A29: cmp eax, 0x7fff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7B55; /* 0x140E7A2E: jne 0x140e7b55 */
L_140E7A34:
    MEM32(ebp + (-0x4)) = 0x2Fu; /* 0x140E7A34: mov dword ptr [ebp - 4], 0x2f */
    goto L_140E7A61; /* 0x140E7A3B: jmp 0x140e7a61 */
L_140E7A3D:
    MEM32(ebp + (-0x4)) = 0x30u; /* 0x140E7A3D: mov dword ptr [ebp - 4], 0x30 */
    goto L_140E7A61; /* 0x140E7A44: jmp 0x140e7a61 */
L_140E7A46:
    MEM32(ebp + (-0x4)) = 0x2Eu; /* 0x140E7A46: mov dword ptr [ebp - 4], 0x2e */
    goto L_140E7A61; /* 0x140E7A4D: jmp 0x140e7a61 */
L_140E7A4F:
    /* cmp eax, 0xFFFF0000u */ /* 0x140E7A4F: cmp eax, 0xffff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7B55; /* 0x140E7A54: jne 0x140e7b55 */
L_140E7A5A:
    MEM32(ebp + (-0x4)) = 0x2Du; /* 0x140E7A5A: mov dword ptr [ebp - 4], 0x2d */
L_140E7A61:
    esi = 0x5Cu; /* 0x140E7A61: mov esi, 0x5c */
    RECOMP_CALL(sub_1406E5A0); /* 0x140E7A66: call 0x1406e5a0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x140E7A6B: mov edx, eax */
    /* test edx, edx */ /* 0x140E7A6D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7B2B; /* 0x140E7A6F: je 0x140e7b2b */
L_140E7A75:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140E7A75: push dword ptr [ebp + 0xc] */
    SET_LO8(ecx, 1); /* 0x140E7A78: mov cl, 1 */
    PUSH32(esp, 0); /* 0x140E7A7A: push 0 */
    PUSH32(esp, 0); /* 0x140E7A7C: push 0 */
    PUSH32(esp, 0); /* 0x140E7A7E: push 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E7A80: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_140E9FA0); /* 0x140E7A82: call 0x140e9fa0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140E7A87: mov edi, eax */
    /* test edi, edi */ /* 0x140E7A89: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7B2D; /* 0x140E7A8B: je 0x140e7b2d */
L_140E7A91:
    ecx = MEM32(ebp + (-0x4)); /* 0x140E7A91: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x8); /* 0x140E7A94: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + ecx * 4 + 0xA4); /* 0x140E7A97: mov ecx, dword ptr [eax + ecx*4 + 0xa4] */
    MEM32(edi + 0x14) = ecx; /* 0x140E7A9E: mov dword ptr [edi + 0x14], ecx */
    /* test ecx, ecx */ /* 0x140E7AA1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7B2D; /* 0x140E7AA3: je 0x140e7b2d */
L_140E7AA9:
    esi = 0x50u; /* 0x140E7AA9: mov esi, 0x50 */
    RECOMP_CALL(sub_1406E5A0); /* 0x140E7AAE: call 0x1406e5a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E7AB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7B05; /* 0x140E7AB5: je 0x140e7b05 */
L_140E7AB7:
    esi = MEM32(ebp + 0x8); /* 0x140E7AB7: mov esi, dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x27C); /* 0x140E7ABA: mov edx, dword ptr [esi + 0x27c] */
    ecx = edx + 0x1; /* 0x140E7AC0: lea ecx, [edx + 1] */
    MEM32(esi + 0x27C) = ecx; /* 0x140E7AC3: mov dword ptr [esi + 0x27c], ecx */
    ecx = MEM32(ebx + 0x40); /* 0x140E7AC9: mov ecx, dword ptr [ebx + 0x40] */
    PUSH32(esp, edx); /* 0x140E7ACC: push edx */
    PUSH32(esp, MEM32(ebx + 0x44)); /* 0x140E7ACD: push dword ptr [ebx + 0x44] */
    RECOMP_CALL(sub_140EA4E0); /* 0x140E7AD0: call 0x140ea4e0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x140E7AD5: mov ebx, eax */
    /* test ebx, ebx */ /* 0x140E7AD7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7B07; /* 0x140E7AD9: je 0x140e7b07 */
L_140E7ADB:
    PUSH32(esp, ebx); /* 0x140E7ADB: push ebx */
    PUSH32(esp, 0); /* 0x140E7ADC: push 0 */
    PUSH32(esp, 0x200u); /* 0x140E7ADE: push 0x200 */
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x140E7AE3: push dword ptr [edi + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140E7AE6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x140E7AE9: push esi */
    RECOMP_CALL(sub_14139B80); /* 0x140E7AEA: call 0x14139b80 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140E7AEF: mov edi, eax */
    esi = edi; /* 0x140E7AF1: mov esi, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x140E7AF3: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140E7AF5: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FF8FFF2u);
    esi = esi & 0x7FF8FFF2u; /* 0x140E7AF7: and esi, 0x7ff8fff2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x8007000Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x8007000Eu; /* 0x140E7AFD: add esi, 0x8007000e */
    _flag_k = FK_ADD;
    goto L_140E7B0C; /* 0x140E7B03: jmp 0x140e7b0c */
L_140E7B05:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140E7B05: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E7B07:
    esi = 0x8007000Eu; /* 0x140E7B07: mov esi, 0x8007000e */
L_140E7B0C:
    /* test ebx, ebx */ /* 0x140E7B0C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7B1D; /* 0x140E7B0E: je 0x140e7b1d */
L_140E7B10:
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) - 1; /* 0x140E7B10: dec dword ptr [ebx + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E7B1D; /* 0x140E7B13: jne 0x140e7b1d */
L_140E7B15:
    eax = MEM32(ebx); /* 0x140E7B15: mov eax, dword ptr [ebx] */
    PUSH32(esp, 1); /* 0x140E7B17: push 1 */
    ecx = ebx; /* 0x140E7B19: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x140E7B1B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_140E7B1D:
    /* test esi, esi */ /* 0x140E7B1D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7B4A; /* 0x140E7B1F: je 0x140e7b4a */
L_140E7B21:
    /* cmp esi, 0x8007000Eu */ /* 0x140E7B21: cmp esi, 0x8007000e */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x8007000Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7B37; /* 0x140E7B27: jne 0x140e7b37 */
L_140E7B29:
    goto L_140E7B2D; /* 0x140E7B29: jmp 0x140e7b2d */
L_140E7B2B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140E7B2B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E7B2D:
    ecx = MEM32(ebp + 0x8); /* 0x140E7B2D: mov ecx, dword ptr [ebp + 8] */
    MEM8(ecx + 0x248) = (uint8_t)(1); /* 0x140E7B30: mov byte ptr [ecx + 0x248], 1 */
L_140E7B37:
    /* test edi, edi */ /* 0x140E7B37: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7B48; /* 0x140E7B39: je 0x140e7b48 */
L_140E7B3B:
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x10) = MEM32(edi + 0x10) - 1; /* 0x140E7B3B: dec dword ptr [edi + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E7B48; /* 0x140E7B3E: jne 0x140e7b48 */
L_140E7B40:
    eax = MEM32(edi); /* 0x140E7B40: mov eax, dword ptr [edi] */
    PUSH32(esp, 1); /* 0x140E7B42: push 1 */
    ecx = edi; /* 0x140E7B44: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x140E7B46: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_140E7B48:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140E7B48: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E7B4A:
    eax = edi; /* 0x140E7B4A: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x140E7B4C: pop edi */
    esi = POP32_VAL(esp); /* 0x140E7B4D: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E7B4E: pop ebx */
    esp = ebp; /* 0x140E7B4F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E7B51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140E7B52: ret 8 */
L_140E7B55:
    edi = POP32_VAL(esp); /* 0x140E7B55: pop edi */
    esi = POP32_VAL(esp); /* 0x140E7B56: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E7B57: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140E7B59: pop ebx */
    esp = ebp; /* 0x140E7B5A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E7B5C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140E7B5D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140E7B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E7B70u);

L_140E7B70:
    edi = edi; /* 0x140E7B70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E7B72: push ebp */
    ebp = esp; /* 0x140E7B73: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x140E7B75: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x140E7B78: push ebx */
    PUSH32(esp, esi); /* 0x140E7B79: push esi */
    esi = MEM32(ebp + 0x8); /* 0x140E7B7A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x140E7B7D: push edi */
    edi = MEM32(esi + 0x54); /* 0x140E7B7E: mov edi, dword ptr [esi + 0x54] */
    ebx = 1; /* 0x140E7B81: mov ebx, 1 */
    RECOMP_CALL(sub_141C0B90); /* 0x140E7B86: call 0x141c0b90 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E7B8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E7C99; /* 0x140E7B8D: js 0x140e7c99 */
L_140E7B93:
    PUSH32(esp, MEM32(esi + 0x54)); /* 0x140E7B93: push dword ptr [esi + 0x54] */
    ebx = ebp + (-0x8); /* 0x140E7B96: lea ebx, [ebp - 8] */
    RECOMP_CALL(sub_141C13F0); /* 0x140E7B99: call 0x141c13f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E7B9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E7C99; /* 0x140E7BA0: js 0x140e7c99 */
L_140E7BA6:
    esi = 0x40u; /* 0x140E7BA6: mov esi, 0x40 */
    RECOMP_CALL(sub_1406E5A0); /* 0x140E7BAB: call 0x1406e5a0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x140E7BB0: mov ebx, eax */
    /* test ebx, ebx */ /* 0x140E7BB2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7C94; /* 0x140E7BB4: je 0x140e7c94 */
L_140E7BBA:
    edx = MEM32(ebp + 0x8); /* 0x140E7BBA: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x140E7BBD: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140E7BBF: push dword ptr [ebp + 0xc] */
    esi = edx + 0x220; /* 0x140E7BC2: lea esi, [edx + 0x220] */
    MEM32(ebx + 0x4) = 2; /* 0x140E7BC8: mov dword ptr [ebx + 4], 2 */
    MEM32(ebx + 0x8) = 0; /* 0x140E7BCF: mov dword ptr [ebx + 8], 0 */
    MEM32(ebx + 0xC) = 0; /* 0x140E7BD6: mov dword ptr [ebx + 0xc], 0 */
    MEM32(ebx + 0x10) = 1; /* 0x140E7BDD: mov dword ptr [ebx + 0x10], 1 */
    MEM32(ebx) = 0x1403FD90u; /* 0x140E7BE4: mov dword ptr [ebx], 0x1403fd90 */
    ecx = 0xAu; /* 0x140E7BEA: mov ecx, 0xa */
    edi = ebx + 0x18; /* 0x140E7BEF: lea edi, [ebx + 0x18] */
    MEM32(ebp + (-0x4)) = esi; /* 0x140E7BF2: mov dword ptr [ebp - 4], esi */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x140E7BF5: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, edx); /* 0x140E7BF7: push edx */
    MEM32(ebx + 0x18) = 0xEu; /* 0x140E7BF8: mov dword ptr [ebx + 0x18], 0xe */
    RECOMP_CALL(sub_140EF1B0); /* 0x140E7BFF: call 0x140ef1b0 */
    RECOMP_FLAGS_IN();
    esi = 0x40u; /* 0x140E7C04: mov esi, 0x40 */
    MEM32(ebx + 0x20) = eax; /* 0x140E7C09: mov dword ptr [ebx + 0x20], eax */
    RECOMP_CALL(sub_1406E5A0); /* 0x140E7C0C: call 0x1406e5a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E7C11: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7C94; /* 0x140E7C13: je 0x140e7c94 */
L_140E7C15:
    esi = MEM32(ebp + (-0x4)); /* 0x140E7C15: mov esi, dword ptr [ebp - 4] */
    edi = eax + 0x18; /* 0x140E7C18: lea edi, [eax + 0x18] */
    MEM32(eax + 0x4) = 2; /* 0x140E7C1B: mov dword ptr [eax + 4], 2 */
    MEM32(eax + 0x8) = 0; /* 0x140E7C22: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140E7C29: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 1; /* 0x140E7C30: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x1403FD90u; /* 0x140E7C37: mov dword ptr [eax], 0x1403fd90 */
    ecx = 0xAu; /* 0x140E7C3D: mov ecx, 0xa */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x140E7C42: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x140E7C44: push ebx */
    ecx = eax; /* 0x140E7C45: mov ecx, eax */
    RECOMP_CALL(sub_140E8DD0); /* 0x140E7C47: call 0x140e8dd0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x140E7C4C: mov ecx, dword ptr [ebp - 8] */
    edx = eax; /* 0x140E7C4F: mov edx, eax */
    PUSH32(esp, edx); /* 0x140E7C51: push edx */
    RECOMP_CALL(sub_140E8DD0); /* 0x140E7C52: call 0x140e8dd0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x140E7C57: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebx + 0x1EC)); /* 0x140E7C5A: push dword ptr [ebx + 0x1ec] */
    ecx = eax; /* 0x140E7C60: mov ecx, eax */
    RECOMP_CALL(sub_140E8DD0); /* 0x140E7C62: call 0x140e8dd0 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x1EC) = eax; /* 0x140E7C67: mov dword ptr [ebx + 0x1ec], eax */
    MEM32(ebx + 0x220) = 0xEu; /* 0x140E7C6D: mov dword ptr [ebx + 0x220], 0xe */
    eax = MEM32(edx + 0x20); /* 0x140E7C77: mov eax, dword ptr [edx + 0x20] */
    MEM32(ebx + 0x228) = eax; /* 0x140E7C7A: mov dword ptr [ebx + 0x228], eax */
    eax = MEM32(ebp + 0x10); /* 0x140E7C80: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = 0x160u; /* 0x140E7C83: mov dword ptr [eax], 0x160 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E7C89: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140E7C8B: pop edi */
    esi = POP32_VAL(esp); /* 0x140E7C8C: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E7C8D: pop ebx */
    esp = ebp; /* 0x140E7C8E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E7C90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E7C91: ret 0xc */
L_140E7C94:
    eax = 0x8007000Eu; /* 0x140E7C94: mov eax, 0x8007000e */
L_140E7C99:
    edi = POP32_VAL(esp); /* 0x140E7C99: pop edi */
    esi = POP32_VAL(esp); /* 0x140E7C9A: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E7C9B: pop ebx */
    esp = ebp; /* 0x140E7C9C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E7C9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E7C9F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140E7CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E7CB0u);

L_140E7CB0:
    edi = edi; /* 0x140E7CB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E7CB2: push ebp */
    ebp = esp; /* 0x140E7CB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x140E7CB5: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x140E7CB8: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x140E7CB9: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx + 0x1EC), 0 */ /* 0x140E7CBC: cmp dword ptr [ebx + 0x1ec], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1EC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x140E7CC3: push esi */
    PUSH32(esp, edi); /* 0x140E7CC4: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7D22; /* 0x140E7CC5: jne 0x140e7d22 */
L_140E7CC7:
    /* cmp MEM32(ebx + 0x1F8), 0 */ /* 0x140E7CC7: cmp dword ptr [ebx + 0x1f8], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1F8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140E7D17; /* 0x140E7CCE: jbe 0x140e7d17 */
L_140E7CD0:
    ecx = MEM32(ebx + 0x1F8); /* 0x140E7CD0: mov ecx, dword ptr [ebx + 0x1f8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1F0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x1F0u; /* 0x140E7CD6: add ebx, 0x1f0 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x140E7CDC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7CF0; /* 0x140E7CDE: je 0x140e7cf0 */
L_140E7CE0:
    eax = ecx; /* 0x140E7CE0: mov eax, ecx */
    edx = eax + (-0x1); /* 0x140E7CE2: lea edx, [eax - 1] */
    /* cmp edx, eax */ /* 0x140E7CE5: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E7CF0; /* 0x140E7CE7: jae 0x140e7cf0 */
L_140E7CE9:
    eax = MEM32(ebx); /* 0x140E7CE9: mov eax, dword ptr [ebx] */
    eax = eax + edx * 8; /* 0x140E7CEB: lea eax, [eax + edx*8] */
    goto L_140E7CF2; /* 0x140E7CEE: jmp 0x140e7cf2 */
L_140E7CF0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E7CF0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E7CF2:
    edx = MEM32(ebp + 0xC); /* 0x140E7CF2: mov edx, dword ptr [ebp + 0xc] */
    esi = MEM32(eax + 0x4); /* 0x140E7CF5: mov esi, dword ptr [eax + 4] */
    /* cmp MEM32(eax), edx */ /* 0x140E7CF8: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7D17; /* 0x140E7CFA: jne 0x140e7d17 */
L_140E7CFC:
    /* cmp ecx, 1 */ /* 0x140E7CFC: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140E7D17; /* 0x140E7CFF: jb 0x140e7d17 */
L_140E7D01:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x140E7D01: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_140EFA90); /* 0x140E7D02: call 0x140efa90 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E7D07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E7D17; /* 0x140E7D09: js 0x140e7d17 */
L_140E7D0B:
    eax = MEM32(ebp + 0x8); /* 0x140E7D0B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x54); /* 0x140E7D0E: mov eax, dword ptr [eax + 0x54] */
    MEM32(eax + 0x688) = esi; /* 0x140E7D11: mov dword ptr [eax + 0x688], esi */
L_140E7D17:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E7D17: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x140E7D19: pop edi */
    esi = POP32_VAL(esp); /* 0x140E7D1A: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E7D1B: pop ebx */
    esp = ebp; /* 0x140E7D1C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E7D1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140E7D1F: ret 8 */
L_140E7D22:
    esi = 0x40u; /* 0x140E7D22: mov esi, 0x40 */
    RECOMP_CALL(sub_1406E5A0); /* 0x140E7D27: call 0x1406e5a0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x140E7D2C: mov edx, eax */
    MEM32(ebp + 0x8) = edx; /* 0x140E7D2E: mov dword ptr [ebp + 8], edx */
    /* test edx, edx */ /* 0x140E7D31: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7D17; /* 0x140E7D33: je 0x140e7d17 */
L_140E7D35:
    eax = MEM32(ebp + 0xC); /* 0x140E7D35: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edx + 0x4) = 2; /* 0x140E7D38: mov dword ptr [edx + 4], 2 */
    MEM32(edx + 0x8) = 0; /* 0x140E7D3F: mov dword ptr [edx + 8], 0 */
    MEM32(edx + 0xC) = 0; /* 0x140E7D46: mov dword ptr [edx + 0xc], 0 */
    MEM32(edx + 0x10) = 1; /* 0x140E7D4D: mov dword ptr [edx + 0x10], 1 */
    MEM32(edx) = 0x1403FD90u; /* 0x140E7D54: mov dword ptr [edx], 0x1403fd90 */
    esi = ebx + 0x220; /* 0x140E7D5A: lea esi, [ebx + 0x220] */
    edi = edx + 0x18; /* 0x140E7D60: lea edi, [edx + 0x18] */
    ecx = 0xAu; /* 0x140E7D63: mov ecx, 0xa */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x140E7D68: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x8)) = eax; /* 0x140E7D6A: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebx + 0x54); /* 0x140E7D6D: mov eax, dword ptr [ebx + 0x54] */
    eax = MEM32(eax + 0x688); /* 0x140E7D70: mov eax, dword ptr [eax + 0x688] */
    MEM32(ebp + (-0x4)) = eax; /* 0x140E7D76: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x140E7D79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7D93; /* 0x140E7D7B: je 0x140e7d93 */
L_140E7D7D:
    ecx = ebp + (-0x8); /* 0x140E7D7D: lea ecx, [ebp - 8] */
    eax = ebx + 0x1F0; /* 0x140E7D80: lea eax, [ebx + 0x1f0] */
    PUSH32(esp, ecx); /* 0x140E7D86: push ecx */
    RECOMP_CALL(sub_140E7DE0); /* 0x140E7D87: call 0x140e7de0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E7D8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E7D17; /* 0x140E7D8E: js 0x140e7d17 */
L_140E7D90:
    edx = MEM32(ebp + 0x8); /* 0x140E7D90: mov edx, dword ptr [ebp + 8] */
L_140E7D93:
    eax = MEM32(ebx + 0x1EC); /* 0x140E7D93: mov eax, dword ptr [ebx + 0x1ec] */
    MEM32(ebp + 0x8) = eax; /* 0x140E7D99: mov dword ptr [ebp + 8], eax */
    /* test eax, eax */ /* 0x140E7D9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7DB2; /* 0x140E7D9E: je 0x140e7db2 */
L_140E7DA0:
    eax = ebp + 0x8; /* 0x140E7DA0: lea eax, [ebp + 8] */
L_140E7DA3:
    eax = MEM32(eax); /* 0x140E7DA3: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x140E7DA5: add eax, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), 0 */ /* 0x140E7DA8: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7DA3; /* 0x140E7DAB: jne 0x140e7da3 */
L_140E7DAD:
    MEM32(eax) = edx; /* 0x140E7DAD: mov dword ptr [eax], edx */
    edx = MEM32(ebp + 0x8); /* 0x140E7DAF: mov edx, dword ptr [ebp + 8] */
L_140E7DB2:
    eax = MEM32(ebx + 0x54); /* 0x140E7DB2: mov eax, dword ptr [ebx + 0x54] */
    edi = POP32_VAL(esp); /* 0x140E7DB5: pop edi */
    MEM32(eax + 0x688) = edx; /* 0x140E7DB6: mov dword ptr [eax + 0x688], edx */
    esi = POP32_VAL(esp); /* 0x140E7DBC: pop esi */
    MEM32(ebx + 0x1EC) = 0; /* 0x140E7DBD: mov dword ptr [ebx + 0x1ec], 0 */
    SET_LO8(eax, 1); /* 0x140E7DC7: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x140E7DC9: pop ebx */
    esp = ebp; /* 0x140E7DCA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E7DCC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140E7DCD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140E7DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E7DE0u);

L_140E7DE0:
    edi = edi; /* 0x140E7DE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E7DE2: push ebp */
    ebp = esp; /* 0x140E7DE3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x140E7DE5: push ebx */
    PUSH32(esp, edi); /* 0x140E7DE6: push edi */
    edi = eax; /* 0x140E7DE7: mov edi, eax */
    ebx = MEM32(edi + 0x8); /* 0x140E7DE9: mov ebx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x140E7DEC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x140E7DEF: sub eax, ebx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x140E7DF1: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E7E01; /* 0x140E7DF4: jae 0x140e7e01 */
L_140E7DF6:
    edi = POP32_VAL(esp); /* 0x140E7DF6: pop edi */
    eax = 0x80070216u; /* 0x140E7DF7: mov eax, 0x80070216 */
    ebx = POP32_VAL(esp); /* 0x140E7DFC: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E7DFD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E7DFE: ret 4 */
L_140E7E01:
    PUSH32(esp, esi); /* 0x140E7E01: push esi */
    esi = ebx + 0x1; /* 0x140E7E02: lea esi, [ebx + 1] */
    /* cmp esi, MEM32(edi + 0x4) */ /* 0x140E7E05: cmp esi, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140E7E22; /* 0x140E7E08: jbe 0x140e7e22 */
L_140E7E0A:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x140E7E0A: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E7E17; /* 0x140E7E0E: jne 0x140e7e17 */
L_140E7E10:
    eax = 0x8007000Eu; /* 0x140E7E10: mov eax, 0x8007000e */
    goto L_140E7E27; /* 0x140E7E15: jmp 0x140e7e27 */
L_140E7E17:
    eax = esi; /* 0x140E7E17: mov eax, esi */
    RECOMP_CALL(sub_140EFB50); /* 0x140E7E19: call 0x140efb50 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E7E1E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E7E27; /* 0x140E7E20: jne 0x140e7e27 */
L_140E7E22:
    MEM32(edi + 0x8) = esi; /* 0x140E7E22: mov dword ptr [edi + 8], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E7E25: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E7E27:
    esi = POP32_VAL(esp); /* 0x140E7E27: pop esi */
    /* test eax, eax */ /* 0x140E7E28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E7E3F; /* 0x140E7E2A: jne 0x140e7e3f */
L_140E7E2C:
    edx = MEM32(ebp + 0x8); /* 0x140E7E2C: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x140E7E2F: mov eax, dword ptr [edx] */
    ecx = MEM32(edi); /* 0x140E7E31: mov ecx, dword ptr [edi] */
    MEM32(ecx + ebx * 8) = eax; /* 0x140E7E33: mov dword ptr [ecx + ebx*8], eax */
    eax = MEM32(edx + 0x4); /* 0x140E7E36: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + ebx * 8 + 0x4) = eax; /* 0x140E7E39: mov dword ptr [ecx + ebx*8 + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E7E3D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E7E3F:
    edi = POP32_VAL(esp); /* 0x140E7E3F: pop edi */
    ebx = POP32_VAL(esp); /* 0x140E7E40: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E7E41: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E7E42: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E7E50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E7E50u);

L_140E7E50:
    edi = edi; /* 0x140E7E50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E7E52: push ebp */
    ebp = esp; /* 0x140E7E53: mov ebp, esp */
    eax = MEM32(0x141F3DEC); /* 0x140E7E55: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x140E7E5A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140E7E71; /* 0x140E7E5C: jns 0x140e7e71 */
L_140E7E5E:
    PUSH32(esp, 0x10u); /* 0x140E7E5E: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140E7E60: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E7E63: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x4); /* 0x140E7E65: mov ecx, dword ptr [eax + 4] */
    RECOMP_CALL(sub_141E6491); /* 0x140E7E68: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x140E7E6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E7E6E: ret 4 */
L_140E7E71:
    PUSH32(esp, eax); /* 0x140E7E71: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x140E7E72: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x4); /* 0x140E7E78: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x140E7E7B: push 0x10 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140E7E7D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141E6491); /* 0x140E7E80: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x140E7E85: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E7E86: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E7E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E7E90u);

L_140E7E90:
    MEM32(eax) = 0x1403FD24u; /* 0x140E7E90: mov dword ptr [eax], 0x1403fd24 */
    MEM32(eax + 0x4) = 0; /* 0x140E7E96: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0x14033E93u; /* 0x140E7E9D: mov dword ptr [eax + 8], 0x14033e93 */
    MEM32(eax + 0xC) = 0x14033E93u; /* 0x140E7EA4: mov dword ptr [eax + 0xc], 0x14033e93 */
    MEM32(eax + 0x48) = 0; /* 0x140E7EAB: mov dword ptr [eax + 0x48], 0 */
    MEM32(eax + 0x4C) = 0; /* 0x140E7EB2: mov dword ptr [eax + 0x4c], 0 */
    MEM32(eax + 0x50) = 0; /* 0x140E7EB9: mov dword ptr [eax + 0x50], 0 */
    MEM32(eax + 0x54) = 0; /* 0x140E7EC0: mov dword ptr [eax + 0x54], 0 */
    MEM32(eax + 0x58) = 0; /* 0x140E7EC7: mov dword ptr [eax + 0x58], 0 */
    MEM32(eax + 0x60) = 0; /* 0x140E7ECE: mov dword ptr [eax + 0x60], 0 */
    MEM32(eax + 0x10) = 0; /* 0x140E7ED5: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0xFFFFFFFFu; /* 0x140E7EDC: mov dword ptr [eax + 0x14], 0xffffffff */
    MEM32(eax + 0x18) = 0xFFFFFFFFu; /* 0x140E7EE3: mov dword ptr [eax + 0x18], 0xffffffff */
    MEM32(eax + 0x1C) = 0xFFFFFFFFu; /* 0x140E7EEA: mov dword ptr [eax + 0x1c], 0xffffffff */
    MEM32(eax + 0x20) = 0xFFFFFFFFu; /* 0x140E7EF1: mov dword ptr [eax + 0x20], 0xffffffff */
    MEM32(eax + 0x24) = 0xFFFFFFFFu; /* 0x140E7EF8: mov dword ptr [eax + 0x24], 0xffffffff */
    MEM32(eax + 0x28) = 0; /* 0x140E7EFF: mov dword ptr [eax + 0x28], 0 */
    MEM32(eax + 0x2C) = 0; /* 0x140E7F06: mov dword ptr [eax + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x64)) << 24; _flag_b = (uint32_t)(0xE0u) << 24;
    MEM8(eax + 0x64) = (uint8_t)(MEM8(eax + 0x64) & 0xE0u); /* 0x140E7F0D: and byte ptr [eax + 0x64], 0xe0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax + 0x30) = 0xFFFFFFFFu; /* 0x140E7F11: mov dword ptr [eax + 0x30], 0xffffffff */
    MEM32(eax + 0x38) = 0xFFFFFFFFu; /* 0x140E7F18: mov dword ptr [eax + 0x38], 0xffffffff */
    MEM32(eax + 0x3C) = 0xFFFFFFFFu; /* 0x140E7F1F: mov dword ptr [eax + 0x3c], 0xffffffff */
    MEM32(eax + 0x40) = 0xFFFFFFFFu; /* 0x140E7F26: mov dword ptr [eax + 0x40], 0xffffffff */
    MEM32(eax + 0x44) = 0xFFFFFFFFu; /* 0x140E7F2D: mov dword ptr [eax + 0x44], 0xffffffff */
    MEM32(eax + 0x34) = 0; /* 0x140E7F34: mov dword ptr [eax + 0x34], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E7F3B: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E7F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E7F50u);

L_140E7F50:
    eax = 0xFu; /* 0x140E7F50: mov eax, 0xf */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E7F55: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E7F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E7F60u);

L_140E7F60:
    MEM32(eax + 0x4C) = ecx; /* 0x140E7F60: mov dword ptr [eax + 0x4c], ecx */
    MEM32(eax + 0x58) = 0; /* 0x140E7F63: mov dword ptr [eax + 0x58], 0 */
    edx = MEM32(ecx + 0x54); /* 0x140E7F6A: mov edx, dword ptr [ecx + 0x54] */
    /* test edx, edx */ /* 0x140E7F6D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7F78; /* 0x140E7F6F: je 0x140e7f78 */
L_140E7F71:
    MEM32(edx + 0x58) = eax; /* 0x140E7F71: mov dword ptr [edx + 0x58], eax */
    MEM32(ecx + 0x54) = eax; /* 0x140E7F74: mov dword ptr [ecx + 0x54], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E7F77: ret  */
L_140E7F78:
    MEM32(ecx + 0x50) = eax; /* 0x140E7F78: mov dword ptr [ecx + 0x50], eax */
    MEM32(ecx + 0x54) = eax; /* 0x140E7F7B: mov dword ptr [ecx + 0x54], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E7F7E: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E7F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E7F90u);

L_140E7F90:
    edi = edi; /* 0x140E7F90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E7F92: push ebp */
    ebp = esp; /* 0x140E7F93: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140E7F95: push ecx */
    /* test MEM8(ebx + 0x64), 8 */ /* 0x140E7F96: test byte ptr [ebx + 0x64], 8 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x64)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x140E7F9A: push esi */
    esi = ebx; /* 0x140E7F9B: mov esi, ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7FAF; /* 0x140E7F9D: je 0x140e7faf */
L_140E7F9F:
    /* nop */ /* 0x140E7F9F: nop  */
L_140E7FA0:
    eax = MEM32(esi + 0x4C); /* 0x140E7FA0: mov eax, dword ptr [esi + 0x4c] */
    /* test eax, eax */ /* 0x140E7FA3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7FAF; /* 0x140E7FA5: je 0x140e7faf */
L_140E7FA7:
    esi = eax; /* 0x140E7FA7: mov esi, eax */
    /* test MEM8(esi + 0x64), 8 */ /* 0x140E7FA9: test byte ptr [esi + 0x64], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E7FA0; /* 0x140E7FAD: jne 0x140e7fa0 */
L_140E7FAF:
    eax = MEM32(edi + 0x8); /* 0x140E7FAF: mov eax, dword ptr [edi + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x140E7FB2: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x140E7FB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8006; /* 0x140E7FB7: je 0x140e8006 */
L_140E7FB9:
    PUSH32(esp, 0x3Au); /* 0x140E7FB9: push 0x3a */
    PUSH32(esp, eax); /* 0x140E7FBB: push eax */
    RECOMP_ICALL(MEM32(0x14001108)); /* 0x140E7FBC: call dword ptr [0x14001108] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E7FC2: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140E7FC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7FDF; /* 0x140E7FC7: je 0x140e7fdf */
L_140E7FC9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140E7FC9: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_140E7FDF; /* 0x140E7FCA: je 0x140e7fdf */
L_140E7FCC:
    edx = MEM32(ebp + (-0x4)); /* 0x140E7FCC: mov edx, dword ptr [ebp - 4] */
    PUSH32(esp, 0); /* 0x140E7FCF: push 0 */
    PUSH32(esp, 0); /* 0x140E7FD1: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140E7FD3: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x140E7FD6: mov ecx, esi */
    RECOMP_CALL(sub_140E80E0); /* 0x140E7FD8: call 0x140e80e0 */
    RECOMP_FLAGS_IN();
    goto L_140E7FED; /* 0x140E7FDD: jmp 0x140e7fed */
L_140E7FDF:
    PUSH32(esp, 0); /* 0x140E7FDF: push 0 */
    PUSH32(esp, 0); /* 0x140E7FE1: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x140E7FE3: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x140E7FE6: mov ecx, esi */
    RECOMP_CALL(sub_140E82B0); /* 0x140E7FE8: call 0x140e82b0 */
    RECOMP_FLAGS_IN();
L_140E7FED:
    /* test eax, eax */ /* 0x140E7FED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8006; /* 0x140E7FEF: je 0x140e8006 */
L_140E7FF1:
    ecx = MEM32(ebp + 0xC); /* 0x140E7FF1: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x140E7FF4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E7FFA; /* 0x140E7FF6: je 0x140e7ffa */
L_140E7FF8:
    MEM32(ecx) = eax; /* 0x140E7FF8: mov dword ptr [ecx], eax */
L_140E7FFA:
    eax = 0x80070057u; /* 0x140E7FFA: mov eax, 0x80070057 */
    esi = POP32_VAL(esp); /* 0x140E7FFF: pop esi */
    esp = ebp; /* 0x140E8000: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E8002: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140E8003: ret 8 */
L_140E8006:
    MEM32(edi + 0x4C) = ebx; /* 0x140E8006: mov dword ptr [edi + 0x4c], ebx */
    MEM32(edi + 0x58) = 0; /* 0x140E8009: mov dword ptr [edi + 0x58], 0 */
    eax = MEM32(ebx + 0x54); /* 0x140E8010: mov eax, dword ptr [ebx + 0x54] */
    /* test eax, eax */ /* 0x140E8013: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8026; /* 0x140E8015: je 0x140e8026 */
L_140E8017:
    MEM32(eax + 0x58) = edi; /* 0x140E8017: mov dword ptr [eax + 0x58], edi */
    MEM32(ebx + 0x54) = edi; /* 0x140E801A: mov dword ptr [ebx + 0x54], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E801D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140E801F: pop esi */
    esp = ebp; /* 0x140E8020: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E8022: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140E8023: ret 8 */
L_140E8026:
    MEM32(ebx + 0x50) = edi; /* 0x140E8026: mov dword ptr [ebx + 0x50], edi */
    MEM32(ebx + 0x54) = edi; /* 0x140E8029: mov dword ptr [ebx + 0x54], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E802C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140E802E: pop esi */
    esp = ebp; /* 0x140E802F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E8031: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140E8032: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140E8040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8040u);

L_140E8040:
    ecx = MEM32(edi + 0x50); /* 0x140E8040: mov ecx, dword ptr [edi + 0x50] */
    PUSH32(esp, esi); /* 0x140E8043: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x140E8044: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x140E8046: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8084; /* 0x140E8048: je 0x140e8084 */
L_140E804A:
    ebx = ebx; /* 0x140E804A: lea ebx, [ebx] */
L_140E8050:
    /* cmp ecx, edx */ /* 0x140E8050: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E805F; /* 0x140E8052: je 0x140e805f */
L_140E8054:
    esi = ecx; /* 0x140E8054: mov esi, ecx */
    ecx = MEM32(ecx + 0x58); /* 0x140E8056: mov ecx, dword ptr [ecx + 0x58] */
    /* test ecx, ecx */ /* 0x140E8059: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8050; /* 0x140E805B: jne 0x140e8050 */
L_140E805D:
    esi = POP32_VAL(esp); /* 0x140E805D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E805E: ret  */
L_140E805F:
    eax = MEM32(ecx + 0x58); /* 0x140E805F: mov eax, dword ptr [ecx + 0x58] */
    /* test esi, esi */ /* 0x140E8062: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E806B; /* 0x140E8064: je 0x140e806b */
L_140E8066:
    MEM32(esi + 0x58) = eax; /* 0x140E8066: mov dword ptr [esi + 0x58], eax */
    goto L_140E806E; /* 0x140E8069: jmp 0x140e806e */
L_140E806B:
    MEM32(edi + 0x50) = eax; /* 0x140E806B: mov dword ptr [edi + 0x50], eax */
L_140E806E:
    /* cmp ecx, MEM32(edi + 0x54) */ /* 0x140E806E: cmp ecx, dword ptr [edi + 0x54] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x54));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8076; /* 0x140E8071: jne 0x140e8076 */
L_140E8073:
    MEM32(edi + 0x54) = esi; /* 0x140E8073: mov dword ptr [edi + 0x54], esi */
L_140E8076:
    MEM32(edx + 0x4C) = 0; /* 0x140E8076: mov dword ptr [edx + 0x4c], 0 */
    MEM32(edx + 0x58) = 0; /* 0x140E807D: mov dword ptr [edx + 0x58], 0 */
L_140E8084:
    esi = POP32_VAL(esp); /* 0x140E8084: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8085: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8090u);

L_140E8090:
    edi = edi; /* 0x140E8090: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E8092: push ebp */
    ebp = esp; /* 0x140E8093: mov ebp, esp */
    PUSH32(esp, 0x3Au); /* 0x140E8095: push 0x3a */
    PUSH32(esp, esi); /* 0x140E8097: push esi */
    RECOMP_ICALL(MEM32(0x14001108)); /* 0x140E8098: call dword ptr [0x14001108] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E809E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140E80A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E80BF; /* 0x140E80A3: je 0x140e80bf */
L_140E80A5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140E80A5: inc eax */
    _flag_k = FK_INC;
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_140E80BF; /* 0x140E80A6: je 0x140e80bf */
L_140E80A8:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x140E80A8: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x140E80AB: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x140E80AE: push dword ptr [ebp + 0x10] */
    edx = esi; /* 0x140E80B1: mov edx, esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140E80B3: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_140E80E0); /* 0x140E80B6: call 0x140e80e0 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x140E80BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x140E80BC: ret 0x10 */
L_140E80BF:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x140E80BF: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x140E80C2: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x140E80C5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x140E80C8: push esi */
    RECOMP_CALL(sub_140E82B0); /* 0x140E80C9: call 0x140e82b0 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x140E80CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x140E80CF: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_140E80E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E80E0u);

L_140E80E0:
    edi = edi; /* 0x140E80E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E80E2: push ebp */
    ebp = esp; /* 0x140E80E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x118u; /* 0x140E80E5: sub esp, 0x118 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x140E80EB: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x140E80F0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x140E80F2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x140E80F5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x140E80F8: push ebx */
    MEM32(ebp + (-0x118)) = eax; /* 0x140E80F9: mov dword ptr [ebp - 0x118], eax */
    eax = MEM32(ebp + 0x10); /* 0x140E80FF: mov eax, dword ptr [ebp + 0x10] */
    ebx = ecx; /* 0x140E8102: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x140E8104: push edi */
    MEM32(ebp + (-0x110)) = ebx; /* 0x140E8105: mov dword ptr [ebp - 0x110], ebx */
    edi = edx; /* 0x140E810B: mov edi, edx */
    /* test eax, eax */ /* 0x140E810D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E812F; /* 0x140E810F: je 0x140e812f */
L_140E8111:
    PUSH32(esp, eax); /* 0x140E8111: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140E8112: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x140E8115: push dword ptr [eax + 8] */
    RECOMP_CALL(sub_140E82B0); /* 0x140E8118: call 0x140e82b0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x140E811D: pop edi */
    ebx = POP32_VAL(esp); /* 0x140E811E: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x140E811F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140E8122: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x140E8124: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140E8129: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E812B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E812C: ret 0xc */
L_140E812F:
    /* cmp MEM8(edi), 0x3Au */ /* 0x140E812F: cmp byte ptr [edi], 0x3a */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x105)) = (uint8_t)(0); /* 0x140E8132: mov byte ptr [ebp - 0x105], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E816F; /* 0x140E8139: jne 0x140e816f */
L_140E813B:
    /* cmp MEM8(edi + 0x1), 0x3Au */ /* 0x140E813B: cmp byte ptr [edi + 1], 0x3a */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E816F; /* 0x140E813F: jne 0x140e816f */
L_140E8141:
    eax = MEM32(ebx + 0x4C); /* 0x140E8141: mov eax, dword ptr [ebx + 0x4c] */
    /* test eax, eax */ /* 0x140E8144: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8161; /* 0x140E8146: je 0x140e8161 */
L_140E8148:
    goto L_140E8150; /* 0x140E8148: jmp 0x140e8150 */
L_140E8150:
    edi = eax; /* 0x140E8150: mov edi, eax */
    eax = MEM32(edi + 0x4C); /* 0x140E8152: mov eax, dword ptr [edi + 0x4c] */
    MEM32(ebp + (-0x110)) = edi; /* 0x140E8155: mov dword ptr [ebp - 0x110], edi */
    /* test eax, eax */ /* 0x140E815B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8150; /* 0x140E815D: jne 0x140e8150 */
L_140E815F:
    edi = edx; /* 0x140E815F: mov edi, edx */
L_140E8161:
    MEM8(ebp + (-0x105)) = (uint8_t)(1); /* 0x140E8161: mov byte ptr [ebp - 0x105], 1 */
    MEM8(ebp + 0xC) = (uint8_t)(0); /* 0x140E8168: mov byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x140E816C: add edi, 2 */
    _flag_k = FK_ADD;
L_140E816F:
    PUSH32(esp, esi); /* 0x140E816F: push esi */
L_140E8170:
    PUSH32(esp, 0x3Au); /* 0x140E8170: push 0x3a */
    PUSH32(esp, edi); /* 0x140E8172: push edi */
    RECOMP_ICALL(MEM32(0x14001160)); /* 0x140E8173: call dword ptr [0x14001160] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E8179: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140E817C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8196; /* 0x140E817E: je 0x140e8196 */
L_140E8180:
    /* cmp MEM8(eax + 0x1), 0x3Au */ /* 0x140E8180: cmp byte ptr [eax + 1], 0x3a */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8196; /* 0x140E8184: jne 0x140e8196 */
L_140E8186:
    ecx = eax; /* 0x140E8186: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x140E8188: sub ecx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E818A: add eax, 2 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x105)) = (uint8_t)(1); /* 0x140E818D: mov byte ptr [ebp - 0x105], 1 */
    goto L_140E81AC; /* 0x140E8194: jmp 0x140e81ac */
L_140E8196:
    ecx = edi; /* 0x140E8196: mov ecx, edi */
    edx = ecx + 0x1; /* 0x140E8198: lea edx, [ecx + 1] */
    goto L_140E81A0; /* 0x140E819B: jmp 0x140e81a0 */
L_140E81A0:
    SET_LO8(eax, MEM8(ecx)); /* 0x140E81A0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x140E81A2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x140E81A3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E81A0; /* 0x140E81A5: jne 0x140e81a0 */
L_140E81A7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x140E81A7: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + edi; /* 0x140E81A9: lea eax, [ecx + edi] */
L_140E81AC:
    MEM32(ebp + (-0x10C)) = eax; /* 0x140E81AC: mov dword ptr [ebp - 0x10c], eax */
    /* cmp ecx, 0x7FFFFFFEu */ /* 0x140E81B2: cmp ecx, 0x7ffffffe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E8289; /* 0x140E81B8: ja 0x140e8289 */
L_140E81BE:
    edx = ebp + (-0x104); /* 0x140E81BE: lea edx, [ebp - 0x104] */
    eax = edx; /* 0x140E81C4: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140E81C6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x100u; /* 0x140E81C8: mov esi, 0x100 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x140E81CD: sub edi, eax */
    _flag_k = FK_CMP;
    /* nop */ /* 0x140E81CF: nop  */
L_140E81D0:
    eax = ecx + esi + (-0x100); /* 0x140E81D0: lea eax, [ecx + esi - 0x100] */
    /* test eax, eax */ /* 0x140E81D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E81EA; /* 0x140E81D9: je 0x140e81ea */
L_140E81DB:
    SET_LO8(eax, MEM8(edi + edx)); /* 0x140E81DB: mov al, byte ptr [edi + edx] */
    /* test LO8(eax), LO8(eax) */ /* 0x140E81DE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E81EA; /* 0x140E81E0: je 0x140e81ea */
L_140E81E2:
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x140E81E2: mov byte ptr [edx], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x140E81E4: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x140E81E5: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E81D0; /* 0x140E81E6: jne 0x140e81d0 */
L_140E81E8:
    goto L_140E81EE; /* 0x140E81E8: jmp 0x140e81ee */
L_140E81EA:
    /* test esi, esi */ /* 0x140E81EA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E81F4; /* 0x140E81EC: jne 0x140e81f4 */
L_140E81EE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x140E81EE: dec edx */
    _flag_k = FK_DEC;
    ebx = 0x8007007Au; /* 0x140E81EF: mov ebx, 0x8007007a */
L_140E81F4:
    MEM8(edx) = (uint8_t)(0); /* 0x140E81F4: mov byte ptr [edx], 0 */
    /* test ebx, ebx */ /* 0x140E81F7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8289; /* 0x140E81F9: jne 0x140e8289 */
L_140E81FF:
    esi = MEM32(ebp + (-0x10C)); /* 0x140E81FF: mov esi, dword ptr [ebp - 0x10c] */
    ebx = ebp + (-0x104); /* 0x140E8205: lea ebx, [ebp - 0x104] */
    edi = esi; /* 0x140E820B: mov edi, esi */
    ecx = ebx + 0x1; /* 0x140E820D: lea ecx, [ebx + 1] */
L_140E8210:
    SET_LO8(eax, MEM8(ebx)); /* 0x140E8210: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x140E8212: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x140E8213: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8210; /* 0x140E8215: jne 0x140e8210 */
L_140E8217:
    eax = ebp + (-0x114); /* 0x140E8217: lea eax, [ebp - 0x114] */
    PUSH32(esp, eax); /* 0x140E821D: push eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x140E821E: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x118)); /* 0x140E8220: mov ecx, dword ptr [ebp - 0x118] */
    eax = ebp + (-0x104); /* 0x140E8226: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x140E822C: push eax */
    eax = ecx + 0x34; /* 0x140E822D: lea eax, [ecx + 0x34] */
    PUSH32(esp, eax); /* 0x140E8230: push eax */
    eax = ecx + 0x4C; /* 0x140E8231: lea eax, [ecx + 0x4c] */
    RECOMP_CALL(sub_141C61F0); /* 0x140E8234: call 0x141c61f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E8239: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8289; /* 0x140E823B: jne 0x140e8289 */
L_140E823D:
    ecx = MEM32(ebp + (-0x110)); /* 0x140E823D: mov ecx, dword ptr [ebp - 0x110] */
    PUSH32(esp, eax); /* 0x140E8243: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140E8244: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x114))); /* 0x140E8247: push dword ptr [ebp - 0x114] */
    RECOMP_CALL(sub_140E82B0); /* 0x140E824D: call 0x140e82b0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x105)), 0 */ /* 0x140E8252: cmp byte ptr [ebp - 0x105], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x105))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = eax; /* 0x140E8259: mov ebx, eax */
    MEM32(ebp + (-0x110)) = ebx; /* 0x140E825B: mov dword ptr [ebp - 0x110], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E8267; /* 0x140E8261: je 0x140e8267 */
L_140E8263:
    MEM8(ebp + 0xC) = (uint8_t)(0); /* 0x140E8263: mov byte ptr [ebp + 0xc], 0 */
L_140E8267:
    /* cmp MEM8(esi), 0 */ /* 0x140E8267: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E8274; /* 0x140E826A: je 0x140e8274 */
L_140E826C:
    /* test ebx, ebx */ /* 0x140E826C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8170; /* 0x140E826E: jne 0x140e8170 */
L_140E8274:
    esi = POP32_VAL(esp); /* 0x140E8274: pop esi */
    edi = POP32_VAL(esp); /* 0x140E8275: pop edi */
    eax = ebx; /* 0x140E8276: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x140E8278: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x140E8279: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140E827C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x140E827E: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140E8283: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E8285: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E8286: ret 0xc */
L_140E8289:
    ecx = MEM32(ebp + (-0x4)); /* 0x140E8289: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x140E828C: pop esi */
    edi = POP32_VAL(esp); /* 0x140E828D: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140E828E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E8290: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140E8292: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x140E8293: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140E8298: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E829A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E829B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140E82B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E82B0u);

L_140E82B0:
    edi = edi; /* 0x140E82B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E82B2: push ebp */
    ebp = esp; /* 0x140E82B3: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x140E82B5: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x140E82B8: push ebx */
    PUSH32(esp, esi); /* 0x140E82B9: push esi */
    PUSH32(esp, edi); /* 0x140E82BA: push edi */
    edi = ecx; /* 0x140E82BB: mov edi, ecx */
    esi = MEM32(edi + 0x50); /* 0x140E82BD: mov esi, dword ptr [edi + 0x50] */
    /* test eax, eax */ /* 0x140E82C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E82CA; /* 0x140E82C2: je 0x140e82ca */
L_140E82C4:
    edi = MEM32(eax + 0x4C); /* 0x140E82C4: mov edi, dword ptr [eax + 0x4c] */
    esi = MEM32(eax + 0x58); /* 0x140E82C7: mov esi, dword ptr [eax + 0x58] */
L_140E82CA:
    ebx = MEM32(ebp + 0x8); /* 0x140E82CA: mov ebx, dword ptr [ebp + 8] */
    ecx = ecx; /* 0x140E82CD: lea ecx, [ecx] */
L_140E82D0:
    /* test esi, esi */ /* 0x140E82D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E82E4; /* 0x140E82D2: jne 0x140e82e4 */
L_140E82D4:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x140E82D4: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E8325; /* 0x140E82D8: je 0x140e8325 */
L_140E82DA:
    edi = MEM32(edi + 0x4C); /* 0x140E82DA: mov edi, dword ptr [edi + 0x4c] */
    /* test edi, edi */ /* 0x140E82DD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8325; /* 0x140E82DF: je 0x140e8325 */
L_140E82E1:
    esi = MEM32(edi + 0x50); /* 0x140E82E1: mov esi, dword ptr [edi + 0x50] */
L_140E82E4:
    /* test MEM8(esi + 0x64), 8 */ /* 0x140E82E4: test byte ptr [esi + 0x64], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8305; /* 0x140E82E8: je 0x140e8305 */
L_140E82EA:
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x140E82EA: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E8320; /* 0x140E82EE: je 0x140e8320 */
L_140E82F0:
    PUSH32(esp, 0); /* 0x140E82F0: push 0 */
    PUSH32(esp, 0); /* 0x140E82F2: push 0 */
    PUSH32(esp, ebx); /* 0x140E82F4: push ebx */
    ecx = esi; /* 0x140E82F5: mov ecx, esi */
    RECOMP_CALL(sub_140E82B0); /* 0x140E82F7: call 0x140e82b0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E82FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8330; /* 0x140E82FE: jne 0x140e8330 */
L_140E8300:
    esi = MEM32(esi + 0x58); /* 0x140E8300: mov esi, dword ptr [esi + 0x58] */
    RECOMP_BACKEDGE();
    goto L_140E82D0; /* 0x140E8303: jmp 0x140e82d0 */
L_140E8305:
    /* cmp MEM8(ebx), 0 */ /* 0x140E8305: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi + 0x8); /* 0x140E8308: mov eax, dword ptr [esi + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8312; /* 0x140E830B: jne 0x140e8312 */
L_140E830D:
    /* cmp MEM8(eax), 0 */ /* 0x140E830D: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_140E8319; /* 0x140E8310: jmp 0x140e8319 */
L_140E8312:
    /* cmp MEM8(eax), 0 */ /* 0x140E8312: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E8320; /* 0x140E8315: je 0x140e8320 */
L_140E8317:
    /* cmp ebx, eax */ /* 0x140E8317: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_140E8319:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) ? 1 : 0); /* 0x140E8319: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x140E831C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E832E; /* 0x140E831E: jne 0x140e832e */
L_140E8320:
    esi = MEM32(esi + 0x58); /* 0x140E8320: mov esi, dword ptr [esi + 0x58] */
    RECOMP_BACKEDGE();
    goto L_140E82D0; /* 0x140E8323: jmp 0x140e82d0 */
L_140E8325:
    edi = POP32_VAL(esp); /* 0x140E8325: pop edi */
    esi = POP32_VAL(esp); /* 0x140E8326: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E8327: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140E8329: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E832A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E832B: ret 0xc */
L_140E832E:
    eax = esi; /* 0x140E832E: mov eax, esi */
L_140E8330:
    edi = POP32_VAL(esp); /* 0x140E8330: pop edi */
    esi = POP32_VAL(esp); /* 0x140E8331: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E8332: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E8333: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E8334: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140E8340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8340u);

L_140E8340:
    edi = edi; /* 0x140E8340: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E8342: push ebp */
    ebp = esp; /* 0x140E8343: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x140E8345: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x140E8348: push ebx */
    PUSH32(esp, esi); /* 0x140E8349: push esi */
    PUSH32(esp, edi); /* 0x140E834A: push edi */
    edi = eax; /* 0x140E834B: mov edi, eax */
    eax = ecx; /* 0x140E834D: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x140E834F: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140E8351: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFBFFBu);
    eax = eax & 0x7FFFBFFBu; /* 0x140E8353: and eax, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x80004005u; /* 0x140E8358: add eax, 0x80004005 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_140E84C9; /* 0x140E835D: js 0x140e84c9 */
L_140E8363:
    /* cmp MEM8(ecx), 0 */ /* 0x140E8363: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E837A; /* 0x140E8366: jne 0x140e837a */
L_140E8368:
    edx = MEM32(ebp + 0x8); /* 0x140E8368: mov edx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x140E836B: pop edi */
    esi = POP32_VAL(esp); /* 0x140E836C: pop esi */
    MEM32(edx + 0x8) = ecx; /* 0x140E836D: mov dword ptr [edx + 8], ecx */
    MEM32(edx + 0xC) = ecx; /* 0x140E8370: mov dword ptr [edx + 0xc], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E8373: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140E8375: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E8376: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x140E8377: ret 0x10 */
L_140E837A:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x140E837A: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E83B2; /* 0x140E837E: jne 0x140e83b2 */
L_140E8380:
    ebx = ecx; /* 0x140E8380: mov ebx, ecx */
    edx = ebx + 0x1; /* 0x140E8382: lea edx, [ebx + 1] */
L_140E8385:
    SET_LO8(eax, MEM8(ebx)); /* 0x140E8385: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x140E8387: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x140E8388: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8385; /* 0x140E838A: jne 0x140e8385 */
L_140E838C:
    esi = MEM32(ebp + 0x8); /* 0x140E838C: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x140E838F: add esi, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x140E8392: push esi */
    PUSH32(esp, ecx); /* 0x140E8393: push ecx */
    ecx = MEM32(ebp + 0x14); /* 0x140E8394: mov ecx, dword ptr [ebp + 0x14] */
    eax = ecx + 0x34; /* 0x140E8397: lea eax, [ecx + 0x34] */
    PUSH32(esp, eax); /* 0x140E839A: push eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x140E839B: sub ebx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x4C; /* 0x140E839D: lea eax, [ecx + 0x4c] */
    RECOMP_CALL(sub_141C61F0); /* 0x140E83A0: call 0x141c61f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E83A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E84C9; /* 0x140E83A7: js 0x140e84c9 */
L_140E83AD:
    ebx = MEM32(ebp + 0x8); /* 0x140E83AD: mov ebx, dword ptr [ebp + 8] */
    goto L_140E83BA; /* 0x140E83B0: jmp 0x140e83ba */
L_140E83B2:
    ebx = MEM32(ebp + 0x8); /* 0x140E83B2: mov ebx, dword ptr [ebp + 8] */
    esi = ebx + 0x8; /* 0x140E83B5: lea esi, [ebx + 8] */
    MEM32(esi) = ecx; /* 0x140E83B8: mov dword ptr [esi], ecx */
L_140E83BA:
    eax = MEM32(esi); /* 0x140E83BA: mov eax, dword ptr [esi] */
    MEM32(ebx + 0xC) = eax; /* 0x140E83BC: mov dword ptr [ebx + 0xc], eax */
    /* test edi, edi */ /* 0x140E83BF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E84C7; /* 0x140E83C1: je 0x140e84c7 */
L_140E83C7:
    eax = MEM32(edi); /* 0x140E83C7: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x140E83C9: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x140E83CB: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140E83CE: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0xCu */ /* 0x140E83CF: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E84C7; /* 0x140E83D2: ja 0x140e84c7 */
L_140E83D8:
    eax = (uint32_t)MEM8(eax + 0x140E84DC); /* 0x140E83D8: movzx eax, byte ptr [eax + 0x140e84dc] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140E84D0)); goto _ljump; }
L_140E83E6:
    /* cmp MEM32(ebx + 0x4), 2 */ /* 0x140E83E6: cmp dword ptr [ebx + 4], 2 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E83FB; /* 0x140E83EA: jne 0x140e83fb */
L_140E83EC:
    ecx = ebx; /* 0x140E83EC: mov ecx, ebx */
    RECOMP_CALL(sub_140E8CA0); /* 0x140E83EE: call 0x140e8ca0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140E83F3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E84C7; /* 0x140E83F5: jne 0x140e84c7 */
L_140E83FB:
    ebx = MEM32(ebp + 0xC); /* 0x140E83FB: mov ebx, dword ptr [ebp + 0xc] */
    ecx = ebx + 0x1; /* 0x140E83FE: lea ecx, [ebx + 1] */
L_140E8401:
    SET_LO8(eax, MEM8(ebx)); /* 0x140E8401: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x140E8403: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x140E8404: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8401; /* 0x140E8406: jne 0x140e8401 */
L_140E8408:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x140E8408: sub ebx, ecx */
    _flag_k = FK_CMP;
    esi = ebx + 0x1; /* 0x140E840A: lea esi, [ebx + 1] */
    MEM32(ebp + 0x10) = esi; /* 0x140E840D: mov dword ptr [ebp + 0x10], esi */
    edx = edi; /* 0x140E8410: mov edx, edi */
L_140E8412:
    /* test MEM8(edx + 0x64), 8 */ /* 0x140E8412: test byte ptr [edx + 0x64], 8 */
    _flag_a = (uint32_t)(MEM8(edx + 0x64)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(edx + 0x8); /* 0x140E8416: mov ecx, dword ptr [edx + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E843A; /* 0x140E8419: jne 0x140e843a */
L_140E841B:
    /* test ecx, ecx */ /* 0x140E841B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E843A; /* 0x140E841D: je 0x140e843a */
L_140E841F:
    /* cmp MEM8(ecx), 0 */ /* 0x140E841F: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E843A; /* 0x140E8422: je 0x140e843a */
L_140E8424:
    esi = ecx + 0x1; /* 0x140E8424: lea esi, [ecx + 1] */
L_140E8427:
    SET_LO8(eax, MEM8(ecx)); /* 0x140E8427: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x140E8429: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x140E842A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8427; /* 0x140E842C: jne 0x140e8427 */
L_140E842E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x140E842E: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x10); /* 0x140E8430: mov esi, dword ptr [ebp + 0x10] */
    esi = esi + ecx + 0x2; /* 0x140E8433: lea esi, [esi + ecx + 2] */
    MEM32(ebp + 0x10) = esi; /* 0x140E8437: mov dword ptr [ebp + 0x10], esi */
L_140E843A:
    edx = MEM32(edx + 0x4C); /* 0x140E843A: mov edx, dword ptr [edx + 0x4c] */
    /* test edx, edx */ /* 0x140E843D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8412; /* 0x140E843F: jne 0x140e8412 */
L_140E8441:
    ecx = MEM32(ebp + 0x14); /* 0x140E8441: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, 1); /* 0x140E8444: push 1 */
    PUSH32(esp, esi); /* 0x140E8446: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x140E8447: add ecx, 0x34 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_141E6491); /* 0x140E844A: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x10) = eax; /* 0x140E844F: mov dword ptr [ebp + 0x10], eax */
    /* test eax, eax */ /* 0x140E8452: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8462; /* 0x140E8454: jne 0x140e8462 */
L_140E8456:
    edi = POP32_VAL(esp); /* 0x140E8456: pop edi */
    esi = POP32_VAL(esp); /* 0x140E8457: pop esi */
    eax = 0x8007000Eu; /* 0x140E8458: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x140E845D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E845E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x140E845F: ret 0x10 */
L_140E8462:
    esi = eax + esi + (-0x1); /* 0x140E8462: lea esi, [eax + esi - 1] */
    PUSH32(esp, ebx); /* 0x140E8466: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140E8467: push dword ptr [ebp + 0xc] */
    MEM8(esi) = (uint8_t)(0); /* 0x140E846A: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x140E846D: sub esi, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x140E846F: push esi */
    RECOMP_CALL(sub_141EC9A4); /* 0x140E8470: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140E8475: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_140E8480; /* 0x140E8478: jmp 0x140e8480 */
L_140E8480:
    /* test MEM8(edi + 0x64), 8 */ /* 0x140E8480: test byte ptr [edi + 0x64], 8 */
    _flag_a = (uint32_t)(MEM8(edi + 0x64)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edx = MEM32(edi + 0x8); /* 0x140E8484: mov edx, dword ptr [edi + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E84B7; /* 0x140E8487: jne 0x140e84b7 */
L_140E8489:
    /* test edx, edx */ /* 0x140E8489: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E84B7; /* 0x140E848B: je 0x140e84b7 */
L_140E848D:
    /* cmp MEM8(edx), 0 */ /* 0x140E848D: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E84B7; /* 0x140E8490: je 0x140e84b7 */
L_140E8492:
    ecx = edx; /* 0x140E8492: mov ecx, edx */
    ebx = ecx + 0x1; /* 0x140E8494: lea ebx, [ecx + 1] */
L_140E8497:
    SET_LO8(eax, MEM8(ecx)); /* 0x140E8497: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x140E8499: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x140E849A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8497; /* 0x140E849C: jne 0x140e8497 */
L_140E849E:
    MEM8(esi + (-0x1)) = (uint8_t)(0x3Au); /* 0x140E849E: mov byte ptr [esi - 1], 0x3a */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x140E84A2: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x140E84A4: sub esi, 2 */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x140E84A7: push ecx */
    MEM8(esi) = (uint8_t)(0x3Au); /* 0x140E84A8: mov byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x140E84AB: sub esi, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x140E84AD: push edx */
    PUSH32(esp, esi); /* 0x140E84AE: push esi */
    RECOMP_CALL(sub_141EC9A4); /* 0x140E84AF: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140E84B4: add esp, 0xc */
    _flag_k = FK_ADD;
L_140E84B7:
    edi = MEM32(edi + 0x4C); /* 0x140E84B7: mov edi, dword ptr [edi + 0x4c] */
    /* test edi, edi */ /* 0x140E84BA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8480; /* 0x140E84BC: jne 0x140e8480 */
L_140E84BE:
    eax = MEM32(ebp + 0x10); /* 0x140E84BE: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x8); /* 0x140E84C1: mov edx, dword ptr [ebp + 8] */
    MEM32(edx + 0xC) = eax; /* 0x140E84C4: mov dword ptr [edx + 0xc], eax */
L_140E84C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E84C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E84C9:
    edi = POP32_VAL(esp); /* 0x140E84C9: pop edi */
    esi = POP32_VAL(esp); /* 0x140E84CA: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E84CB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E84CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x140E84CD: ret 0x10 */
  _ljump:
    switch (_itail_tgt) {
      case 0x140E83E6u: goto L_140E83E6;
      case 0x140E83FBu: goto L_140E83FB;
      case 0x140E84C7u: goto L_140E84C7;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140E84F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E84F0u);

L_140E84F0:
    ecx = MEM32(esi + 0x48); /* 0x140E84F0: mov ecx, dword ptr [esi + 0x48] */
    MEM32(esi + 0x34) = 0; /* 0x140E84F3: mov dword ptr [esi + 0x34], 0 */
    /* test ecx, ecx */ /* 0x140E84FA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8506; /* 0x140E84FC: je 0x140e8506 */
L_140E84FE:
    eax = MEM32(ecx); /* 0x140E84FE: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140E8500: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x34) = eax; /* 0x140E8503: mov dword ptr [esi + 0x34], eax */
L_140E8506:
    eax = MEM32(esi + 0x34); /* 0x140E8506: mov eax, dword ptr [esi + 0x34] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8509: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8510u);

L_140E8510:
    edi = edi; /* 0x140E8510: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E8512: push ebp */
    ebp = esp; /* 0x140E8513: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140E8515: push ecx */
    ecx = MEM32(eax + 0x48); /* 0x140E8516: mov ecx, dword ptr [eax + 0x48] */
    /* test ecx, ecx */ /* 0x140E8519: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8531; /* 0x140E851B: je 0x140e8531 */
L_140E851D:
    eax = MEM32(ecx); /* 0x140E851D: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x140E851F: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x140E8522: push edx */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x140E8523: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 2 */ /* 0x140E8526: test byte ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8531; /* 0x140E8529: je 0x140e8531 */
L_140E852B:
    SET_LO8(eax, 1); /* 0x140E852B: mov al, 1 */
    esp = ebp; /* 0x140E852D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E852F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8530: ret  */
L_140E8531:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E8531: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esp = ebp; /* 0x140E8533: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E8535: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8536: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8540u);

L_140E8540:
    /* test eax, eax */ /* 0x140E8540: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E855A; /* 0x140E8542: je 0x140e855a */
L_140E8544:
    /* cmp MEM32(eax + 0x4), 3 */ /* 0x140E8544: cmp dword ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E855A; /* 0x140E8548: jne 0x140e855a */
L_140E854A:
    eax = MEM32(eax + 0x48); /* 0x140E854A: mov eax, dword ptr [eax + 0x48] */
    /* test eax, eax */ /* 0x140E854D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E855A; /* 0x140E854F: je 0x140e855a */
L_140E8551:
    /* cmp MEM32(eax + 0x4), 4 */ /* 0x140E8551: cmp dword ptr [eax + 4], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E855A; /* 0x140E8555: jne 0x140e855a */
L_140E8557:
    SET_LO8(eax, 1); /* 0x140E8557: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8559: ret  */
L_140E855A:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E855A: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E855C: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8570u);

L_140E8570:
    /* test eax, eax */ /* 0x140E8570: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E858B; /* 0x140E8572: je 0x140e858b */
L_140E8574:
    /* cmp MEM32(eax + 0x4), 3 */ /* 0x140E8574: cmp dword ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E858B; /* 0x140E8578: jne 0x140e858b */
L_140E857A:
    eax = MEM32(eax + 0x48); /* 0x140E857A: mov eax, dword ptr [eax + 0x48] */
    eax = MEM32(eax + 0x4); /* 0x140E857D: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFDu; /* 0x140E8580: add eax, -3 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x140E8583: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E858B; /* 0x140E8586: ja 0x140e858b */
L_140E8588:
    SET_LO8(eax, 1); /* 0x140E8588: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E858A: ret  */
L_140E858B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E858B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E858D: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E85A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E85A0u);

L_140E85A0:
    /* cmp eax, 0xEu */ /* 0x140E85A0: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E85AD; /* 0x140E85A3: jae 0x140e85ad */
L_140E85A5:
    eax = MEM32(eax * 4 + 0x141F0FD8); /* 0x140E85A5: mov eax, dword ptr [eax*4 + 0x141f0fd8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E85AC: ret  */
L_140E85AD:
    eax = 0x1403FCECu; /* 0x140E85AD: mov eax, 0x1403fcec */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E85B2: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E85C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E85C0u);

L_140E85C0:
    /* cmp eax, 0xEu */ /* 0x140E85C0: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E85CD; /* 0x140E85C3: jae 0x140e85cd */
L_140E85C5:
    eax = MEM32(eax * 4 + 0x141F1010); /* 0x140E85C5: mov eax, dword ptr [eax*4 + 0x141f1010] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E85CC: ret  */
L_140E85CD:
    eax = 0x1403FD08u; /* 0x140E85CD: mov eax, 0x1403fd08 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E85D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E85E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E85E0u);

L_140E85E0:
    edi = edi; /* 0x140E85E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E85E2: push ebp */
    ebp = esp; /* 0x140E85E3: mov ebp, esp */
    SET_LO8(edx, MEM8(ecx)); /* 0x140E85E5: mov dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x64u; /* 0x140E85E7: sub esp, 0x64 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x140E85EA: push ebx */
    ebx = eax; /* 0x140E85EB: mov ebx, eax */
    eax = (int32_t)(int8_t)LO8(edx); /* 0x140E85ED: movsx eax, dl */
    /* cmp eax, 0x7Au */ /* 0x140E85F0: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E8654; /* 0x140E85F3: ja 0x140e8654 */
L_140E85F5:
    eax = (uint32_t)MEM8(eax + 0x140E8670); /* 0x140E85F5: movzx eax, byte ptr [eax + 0x140e8670] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140E865C)); goto _ljump; }
L_140E8603:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x140E8603: inc ebx */
    _flag_k = FK_INC;
    goto L_140E860E; /* 0x140E8604: jmp 0x140e860e */
L_140E8606:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x140E8606: add ebx, 2 */
    _flag_k = FK_ADD;
    goto L_140E860E; /* 0x140E8609: jmp 0x140e860e */
L_140E860B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 3; /* 0x140E860B: add ebx, 3 */
    _flag_k = FK_ADD;
L_140E860E:
    /* test LO8(edx), LO8(edx) */ /* 0x140E860E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8618; /* 0x140E8610: je 0x140e8618 */
L_140E8612:
    /* cmp MEM8(ecx + 0x1), 0 */ /* 0x140E8612: cmp byte ptr [ecx + 1], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8654; /* 0x140E8616: jne 0x140e8654 */
L_140E8618:
    /* test LO8(ebx), 3 */ /* 0x140E8618: test bl, 3 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E864D; /* 0x140E861B: je 0x140e864d */
L_140E861D:
    eax = MEM32(esi); /* 0x140E861D: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x60); /* 0x140E861F: lea ecx, [ebp - 0x60] */
    PUSH32(esp, ecx); /* 0x140E8622: push ecx */
    PUSH32(esp, 0); /* 0x140E8623: push 0 */
    ecx = esi; /* 0x140E8625: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x140E8627: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140E862A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8654; /* 0x140E862C: je 0x140e8654 */
L_140E862E:
    eax = MEM32(ebp + (-0x60)); /* 0x140E862E: mov eax, dword ptr [ebp - 0x60] */
    /* cmp eax, 2 */ /* 0x140E8631: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E863B; /* 0x140E8634: je 0x140e863b */
L_140E8636:
    /* cmp eax, 9 */ /* 0x140E8636: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8654; /* 0x140E8639: jne 0x140e8654 */
L_140E863B:
    ecx = MEM32(ebp + (-0x2C)); /* 0x140E863B: mov ecx, dword ptr [ebp - 0x2c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x30))); /* 0x140E863E: imul ecx, dword ptr [ebp - 0x30] */
    eax = ebx; /* 0x140E8642: mov eax, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x140E8644: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x140E8646: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x140E8649: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E8654; /* 0x140E864B: ja 0x140e8654 */
L_140E864D:
    eax = ebx; /* 0x140E864D: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x140E864F: pop ebx */
    esp = ebp; /* 0x140E8650: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E8652: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8653: ret  */
L_140E8654:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x140E8654: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140E8657: pop ebx */
    esp = ebp; /* 0x140E8658: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E865A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E865B: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x140E8603u: goto L_140E8603;
      case 0x140E8606u: goto L_140E8606;
      case 0x140E860Bu: goto L_140E860B;
      case 0x140E860Eu: goto L_140E860E;
      case 0x140E8654u: goto L_140E8654;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140E86F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E86F0u);

L_140E86F0:
    edi = edi; /* 0x140E86F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E86F2: push ebp */
    ebp = esp; /* 0x140E86F3: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x140E86F5: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x140E86F8: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x140E86F9: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x140E86FC: push esi */
    PUSH32(esp, edi); /* 0x140E86FD: push edi */
    /* test eax, eax */ /* 0x140E86FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E870E; /* 0x140E8700: jne 0x140e870e */
L_140E8702:
    esi = MEM32(ebp + 0x8); /* 0x140E8702: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x140E8705: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E872D; /* 0x140E8707: je 0x140e872d */
L_140E8709:
    esi = MEM32(esi + 0x50); /* 0x140E8709: mov esi, dword ptr [esi + 0x50] */
    goto L_140E8739; /* 0x140E870C: jmp 0x140e8739 */
L_140E870E:
    esi = MEM32(eax + 0x58); /* 0x140E870E: mov esi, dword ptr [eax + 0x58] */
    /* test esi, esi */ /* 0x140E8711: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8740; /* 0x140E8713: jne 0x140e8740 */
L_140E8715:
    /* test ebx, ebx */ /* 0x140E8715: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E872D; /* 0x140E8717: js 0x140e872d */
L_140E8719:
    esi = MEM32(eax + 0x4C); /* 0x140E8719: mov esi, dword ptr [eax + 0x4c] */
    /* test esi, esi */ /* 0x140E871C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E872D; /* 0x140E871E: je 0x140e872d */
L_140E8720:
    /* cmp MEM32(esi + 0x58), 0 */ /* 0x140E8720: cmp dword ptr [esi + 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8736; /* 0x140E8724: jne 0x140e8736 */
L_140E8726:
    esi = MEM32(esi + 0x4C); /* 0x140E8726: mov esi, dword ptr [esi + 0x4c] */
    /* test esi, esi */ /* 0x140E8729: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8720; /* 0x140E872B: jne 0x140e8720 */
L_140E872D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E872D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E872F:
    edi = POP32_VAL(esp); /* 0x140E872F: pop edi */
    esi = POP32_VAL(esp); /* 0x140E8730: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E8731: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E8732: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E8733: ret 0xc */
L_140E8736:
    esi = MEM32(esi + 0x58); /* 0x140E8736: mov esi, dword ptr [esi + 0x58] */
L_140E8739:
    /* test esi, esi */ /* 0x140E8739: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E872D; /* 0x140E873B: je 0x140e872d */
L_140E873D:
    ecx = ecx; /* 0x140E873D: lea ecx, [ecx] */
L_140E8740:
    ecx = MEM32(esi + 0x4); /* 0x140E8740: mov ecx, dword ptr [esi + 4] */
    eax = 1; /* 0x140E8743: mov eax, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x140E8748: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x140E8748: shl eax, cl */
    /* test ebx, eax */ /* 0x140E874A: test ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E87A9; /* 0x140E874C: jne 0x140e87a9 */
L_140E874E:
    edi = ebx; /* 0x140E874E: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80000000u);
    edi = edi & 0x80000000u; /* 0x140E8750: and edi, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E876F; /* 0x140E8756: jne 0x140e876f */
L_140E8758:
    /* test MEM8(esi + 0x64), 8 */ /* 0x140E8758: test byte ptr [esi + 0x64], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E876F; /* 0x140E875C: je 0x140e876f */
L_140E875E:
    /* cmp MEM32(esi + 0x50), edi */ /* 0x140E875E: cmp dword ptr [esi + 0x50], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E876F; /* 0x140E8761: je 0x140e876f */
L_140E8763:
    PUSH32(esp, edi); /* 0x140E8763: push edi */
    PUSH32(esp, ebx); /* 0x140E8764: push ebx */
    PUSH32(esp, esi); /* 0x140E8765: push esi */
    RECOMP_CALL(sub_140E86F0); /* 0x140E8766: call 0x140e86f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E876B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E872F; /* 0x140E876D: jne 0x140e872f */
L_140E876F:
    eax = MEM32(esi + 0x58); /* 0x140E876F: mov eax, dword ptr [esi + 0x58] */
    /* test eax, eax */ /* 0x140E8772: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E877A; /* 0x140E8774: je 0x140e877a */
L_140E8776:
    esi = eax; /* 0x140E8776: mov esi, eax */
    goto L_140E879C; /* 0x140E8778: jmp 0x140e879c */
L_140E877A:
    /* test edi, edi */ /* 0x140E877A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E872D; /* 0x140E877C: jne 0x140e872d */
L_140E877E:
    eax = MEM32(esi + 0x4C); /* 0x140E877E: mov eax, dword ptr [esi + 0x4c] */
    /* test eax, eax */ /* 0x140E8781: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E872D; /* 0x140E8783: je 0x140e872d */
L_140E8785:
    /* cmp MEM32(eax + 0x58), 0 */ /* 0x140E8785: cmp dword ptr [eax + 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x58)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8799; /* 0x140E8789: jne 0x140e8799 */
L_140E878B:
    eax = MEM32(eax + 0x4C); /* 0x140E878B: mov eax, dword ptr [eax + 0x4c] */
    /* test eax, eax */ /* 0x140E878E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8785; /* 0x140E8790: jne 0x140e8785 */
L_140E8792:
    edi = POP32_VAL(esp); /* 0x140E8792: pop edi */
    esi = POP32_VAL(esp); /* 0x140E8793: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E8794: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E8795: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E8796: ret 0xc */
L_140E8799:
    esi = MEM32(eax + 0x58); /* 0x140E8799: mov esi, dword ptr [eax + 0x58] */
L_140E879C:
    /* test esi, esi */ /* 0x140E879C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8740; /* 0x140E879E: jne 0x140e8740 */
L_140E87A0:
    edi = POP32_VAL(esp); /* 0x140E87A0: pop edi */
    esi = POP32_VAL(esp); /* 0x140E87A1: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E87A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140E87A4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E87A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E87A6: ret 0xc */
L_140E87A9:
    edi = POP32_VAL(esp); /* 0x140E87A9: pop edi */
    eax = esi; /* 0x140E87AA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x140E87AC: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E87AD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E87AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E87AF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140E87C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E87C0u);

L_140E87C0:
    eax = MEM32(ecx + 0x68); /* 0x140E87C0: mov eax, dword ptr [ecx + 0x68] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E87C3: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E87D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E87D0u);

L_140E87D0:
    eax = edx; /* 0x140E87D0: mov eax, edx */
    RECOMP_CALL(sub_140E7E90); /* 0x140E87D2: call 0x140e7e90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM8(edx + 0x64) | 2)) << 24; _flag_b = (uint32_t)((MEM8(edx + 0x64) | 2)) << 24;
    MEM8(edx + 0x64) = (uint8_t)(MEM8(edx + 0x64) | 2); /* 0x140E87D7: or byte ptr [edx + 0x64], 2 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0xA0)) << 24; _flag_b = (uint32_t)(0xF8u) << 24;
    MEM8(edx + 0xA0) = (uint8_t)(MEM8(edx + 0xA0) & 0xF8u); /* 0x140E87DB: and byte ptr [edx + 0xa0], 0xf8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(edx) = 0x1403FD24u; /* 0x140E87E2: mov dword ptr [edx], 0x1403fd24 */
    MEM32(edx + 0x4) = 2; /* 0x140E87E8: mov dword ptr [edx + 4], 2 */
    MEM32(edx + 0x34) = 0xFFFFFFFFu; /* 0x140E87EF: mov dword ptr [edx + 0x34], 0xffffffff */
    MEM32(edx + 0x68) = 0; /* 0x140E87F6: mov dword ptr [edx + 0x68], 0 */
    MEM32(edx + 0x6C) = 0; /* 0x140E87FD: mov dword ptr [edx + 0x6c], 0 */
    MEM32(edx + 0x70) = 0; /* 0x140E8804: mov dword ptr [edx + 0x70], 0 */
    MEM32(edx + 0x74) = 0; /* 0x140E880B: mov dword ptr [edx + 0x74], 0 */
    MEM32(edx + 0x78) = 0; /* 0x140E8812: mov dword ptr [edx + 0x78], 0 */
    MEM32(edx + 0x7C) = 0; /* 0x140E8819: mov dword ptr [edx + 0x7c], 0 */
    MEM32(edx + 0x80) = 0; /* 0x140E8820: mov dword ptr [edx + 0x80], 0 */
    MEM32(edx + 0x84) = 0; /* 0x140E882A: mov dword ptr [edx + 0x84], 0 */
    MEM32(edx + 0x88) = 0; /* 0x140E8834: mov dword ptr [edx + 0x88], 0 */
    MEM32(edx + 0x8C) = 0; /* 0x140E883E: mov dword ptr [edx + 0x8c], 0 */
    MEM32(edx + 0x90) = 0; /* 0x140E8848: mov dword ptr [edx + 0x90], 0 */
    MEM32(edx + 0x94) = 0; /* 0x140E8852: mov dword ptr [edx + 0x94], 0 */
    MEM32(edx + 0x98) = 0; /* 0x140E885C: mov dword ptr [edx + 0x98], 0 */
    MEM32(edx + 0x9C) = 0; /* 0x140E8866: mov dword ptr [edx + 0x9c], 0 */
    MEM32(edx + 0xA4) = 0; /* 0x140E8870: mov dword ptr [edx + 0xa4], 0 */
    MEM32(edx + 0xA8) = 0; /* 0x140E887A: mov dword ptr [edx + 0xa8], 0 */
    MEM32(edx + 0xAC) = 0; /* 0x140E8884: mov dword ptr [edx + 0xac], 0 */
    MEM32(edx + 0xB0) = 0; /* 0x140E888E: mov dword ptr [edx + 0xb0], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8898: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E88A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E88A0u);

L_140E88A0:
    MEM32(ecx) = 0x1403FD24u; /* 0x140E88A0: mov dword ptr [ecx], 0x1403fd24 */
    eax = ecx; /* 0x140E88A6: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E88A8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E88B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E88B0u);

L_140E88B0:
    ecx = MEM32(edi + 0x7C); /* 0x140E88B0: mov ecx, dword ptr [edi + 0x7c] */
    /* test ecx, ecx */ /* 0x140E88B3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E88C2; /* 0x140E88B5: je 0x140e88c2 */
L_140E88B7:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1; /* 0x140E88B7: dec dword ptr [ecx + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E88C2; /* 0x140E88BA: jne 0x140e88c2 */
L_140E88BC:
    eax = MEM32(ecx); /* 0x140E88BC: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x140E88BE: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x140E88C0: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_140E88C2:
    eax = MEM32(esi + 0x7C); /* 0x140E88C2: mov eax, dword ptr [esi + 0x7c] */
    MEM32(edi + 0x7C) = eax; /* 0x140E88C5: mov dword ptr [edi + 0x7c], eax */
    MEM32(esi + 0x7C) = 0; /* 0x140E88C8: mov dword ptr [esi + 0x7c], 0 */
    ecx = MEM32(edi + 0x80); /* 0x140E88CF: mov ecx, dword ptr [edi + 0x80] */
    /* test ecx, ecx */ /* 0x140E88D5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E88E4; /* 0x140E88D7: je 0x140e88e4 */
L_140E88D9:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1; /* 0x140E88D9: dec dword ptr [ecx + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E88E4; /* 0x140E88DC: jne 0x140e88e4 */
L_140E88DE:
    eax = MEM32(ecx); /* 0x140E88DE: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x140E88E0: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x140E88E2: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_140E88E4:
    eax = MEM32(esi + 0x80); /* 0x140E88E4: mov eax, dword ptr [esi + 0x80] */
    MEM32(edi + 0x80) = eax; /* 0x140E88EA: mov dword ptr [edi + 0x80], eax */
    MEM32(esi + 0x80) = 0; /* 0x140E88F0: mov dword ptr [esi + 0x80], 0 */
    ecx = MEM32(edi + 0x88); /* 0x140E88FA: mov ecx, dword ptr [edi + 0x88] */
    /* test ecx, ecx */ /* 0x140E8900: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E890F; /* 0x140E8902: je 0x140e890f */
L_140E8904:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1; /* 0x140E8904: dec dword ptr [ecx + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E890F; /* 0x140E8907: jne 0x140e890f */
L_140E8909:
    eax = MEM32(ecx); /* 0x140E8909: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x140E890B: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x140E890D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_140E890F:
    eax = MEM32(esi + 0x88); /* 0x140E890F: mov eax, dword ptr [esi + 0x88] */
    MEM32(edi + 0x88) = eax; /* 0x140E8915: mov dword ptr [edi + 0x88], eax */
    MEM32(esi + 0x88) = 0; /* 0x140E891B: mov dword ptr [esi + 0x88], 0 */
    ecx = MEM32(edi + 0x8C); /* 0x140E8925: mov ecx, dword ptr [edi + 0x8c] */
    /* test ecx, ecx */ /* 0x140E892B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E893A; /* 0x140E892D: je 0x140e893a */
L_140E892F:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1; /* 0x140E892F: dec dword ptr [ecx + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E893A; /* 0x140E8932: jne 0x140e893a */
L_140E8934:
    eax = MEM32(ecx); /* 0x140E8934: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x140E8936: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x140E8938: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_140E893A:
    eax = MEM32(esi + 0x8C); /* 0x140E893A: mov eax, dword ptr [esi + 0x8c] */
    MEM32(edi + 0x8C) = eax; /* 0x140E8940: mov dword ptr [edi + 0x8c], eax */
    MEM32(esi + 0x8C) = 0; /* 0x140E8946: mov dword ptr [esi + 0x8c], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8950: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8960u);

L_140E8960:
    eax = MEM32(ecx + 0x48); /* 0x140E8960: mov eax, dword ptr [ecx + 0x48] */
    /* test eax, eax */ /* 0x140E8963: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E897E; /* 0x140E8965: je 0x140e897e */
L_140E8967:
    eax = MEM32(eax + 0x4); /* 0x140E8967: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x140E896A: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_140E8978; /* 0x140E896D: je 0x140e8978 */
L_140E896F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140E896F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E897E; /* 0x140E8970: jne 0x140e897e */
L_140E8972:
    eax = 0xDu; /* 0x140E8972: mov eax, 0xd */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8977: ret  */
L_140E8978:
    eax = 0xCu; /* 0x140E8978: mov eax, 0xc */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E897D: ret  */
L_140E897E:
    eax = 0xFu; /* 0x140E897E: mov eax, 0xf */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8983: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8990u);

L_140E8990:
    RECOMP_CALL(sub_140E7E90); /* 0x140E8990: call 0x140e7e90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(eax + 0xB4)) << 24; _flag_b = (uint32_t)(0xF0u) << 24;
    MEM8(eax + 0xB4) = (uint8_t)(MEM8(eax + 0xB4) & 0xF0u); /* 0x140E8995: and byte ptr [eax + 0xb4], 0xf0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x1403FD4Cu; /* 0x140E899C: mov dword ptr [eax], 0x1403fd4c */
    MEM32(eax + 0x4) = 4; /* 0x140E89A2: mov dword ptr [eax + 4], 4 */
    MEM32(eax + 0x34) = 0xFFFFFFFFu; /* 0x140E89A9: mov dword ptr [eax + 0x34], 0xffffffff */
    MEM32(eax + 0x68) = 0xFFFFFFFFu; /* 0x140E89B0: mov dword ptr [eax + 0x68], 0xffffffff */
    MEM32(eax + 0x6C) = 0; /* 0x140E89B7: mov dword ptr [eax + 0x6c], 0 */
    MEM32(eax + 0x70) = 0xFFFFFFFFu; /* 0x140E89BE: mov dword ptr [eax + 0x70], 0xffffffff */
    MEM32(eax + 0x78) = 0; /* 0x140E89C5: mov dword ptr [eax + 0x78], 0 */
    MEM32(eax + 0x7C) = 0; /* 0x140E89CC: mov dword ptr [eax + 0x7c], 0 */
    MEM32(eax + 0x80) = 0; /* 0x140E89D3: mov dword ptr [eax + 0x80], 0 */
    MEM32(eax + 0x84) = 0; /* 0x140E89DD: mov dword ptr [eax + 0x84], 0 */
    MEM32(eax + 0x88) = 0; /* 0x140E89E7: mov dword ptr [eax + 0x88], 0 */
    MEM32(eax + 0x8C) = 0; /* 0x140E89F1: mov dword ptr [eax + 0x8c], 0 */
    MEM32(eax + 0x90) = 0; /* 0x140E89FB: mov dword ptr [eax + 0x90], 0 */
    MEM32(eax + 0x94) = 0; /* 0x140E8A05: mov dword ptr [eax + 0x94], 0 */
    MEM32(eax + 0x98) = 0; /* 0x140E8A0F: mov dword ptr [eax + 0x98], 0 */
    MEM32(eax + 0xA8) = 0; /* 0x140E8A19: mov dword ptr [eax + 0xa8], 0 */
    MEM32(eax + 0xAC) = 0; /* 0x140E8A23: mov dword ptr [eax + 0xac], 0 */
    MEM32(eax + 0xB0) = 0; /* 0x140E8A2D: mov dword ptr [eax + 0xb0], 0 */
    MEM8(eax + 0xB5) = (uint8_t)(0); /* 0x140E8A37: mov byte ptr [eax + 0xb5], 0 */
    MEM32(eax + 0xA4) = 0; /* 0x140E8A3E: mov dword ptr [eax + 0xa4], 0 */
    MEM32(eax + 0x9C) = eax; /* 0x140E8A48: mov dword ptr [eax + 0x9c], eax */
    MEM32(eax + 0xA0) = 0; /* 0x140E8A4E: mov dword ptr [eax + 0xa0], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8A58: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8A60u);

L_140E8A60:
    edi = edi; /* 0x140E8A60: mov edi, edi */
    PUSH32(esp, esi); /* 0x140E8A62: push esi */
    esi = MEM32(edi + 0x50); /* 0x140E8A63: mov esi, dword ptr [edi + 0x50] */
    /* test esi, esi */ /* 0x140E8A66: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8A8D; /* 0x140E8A68: je 0x140e8a8d */
L_140E8A6A:
    ebx = ebx; /* 0x140E8A6A: lea ebx, [ebx] */
L_140E8A70:
    ecx = MEM32(esi + 0x48); /* 0x140E8A70: mov ecx, dword ptr [esi + 0x48] */
    MEM32(esi + 0x34) = 0; /* 0x140E8A73: mov dword ptr [esi + 0x34], 0 */
    /* test ecx, ecx */ /* 0x140E8A7A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8A86; /* 0x140E8A7C: je 0x140e8a86 */
L_140E8A7E:
    eax = MEM32(ecx); /* 0x140E8A7E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140E8A80: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x34) = eax; /* 0x140E8A83: mov dword ptr [esi + 0x34], eax */
L_140E8A86:
    esi = MEM32(esi + 0x58); /* 0x140E8A86: mov esi, dword ptr [esi + 0x58] */
    /* test esi, esi */ /* 0x140E8A89: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8A70; /* 0x140E8A8B: jne 0x140e8a70 */
L_140E8A8D:
    esi = MEM32(edi + 0xA4); /* 0x140E8A8D: mov esi, dword ptr [edi + 0xa4] */
    /* test esi, esi */ /* 0x140E8A93: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8AAD; /* 0x140E8A95: je 0x140e8aad */
L_140E8A97:
    ecx = MEM32(esi + 0x48); /* 0x140E8A97: mov ecx, dword ptr [esi + 0x48] */
    MEM32(esi + 0x34) = 0; /* 0x140E8A9A: mov dword ptr [esi + 0x34], 0 */
    /* test ecx, ecx */ /* 0x140E8AA1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8AAD; /* 0x140E8AA3: je 0x140e8aad */
L_140E8AA5:
    eax = MEM32(ecx); /* 0x140E8AA5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140E8AA7: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x34) = eax; /* 0x140E8AAA: mov dword ptr [esi + 0x34], eax */
L_140E8AAD:
    esi = MEM32(edi + 0x80); /* 0x140E8AAD: mov esi, dword ptr [edi + 0x80] */
    /* test esi, esi */ /* 0x140E8AB3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8ACD; /* 0x140E8AB5: je 0x140e8acd */
L_140E8AB7:
    ecx = MEM32(esi + 0x48); /* 0x140E8AB7: mov ecx, dword ptr [esi + 0x48] */
    MEM32(esi + 0x34) = 0; /* 0x140E8ABA: mov dword ptr [esi + 0x34], 0 */
    /* test ecx, ecx */ /* 0x140E8AC1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8ACD; /* 0x140E8AC3: je 0x140e8acd */
L_140E8AC5:
    eax = MEM32(ecx); /* 0x140E8AC5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140E8AC7: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x34) = eax; /* 0x140E8ACA: mov dword ptr [esi + 0x34], eax */
L_140E8ACD:
    ecx = MEM32(edi + 0x84); /* 0x140E8ACD: mov ecx, dword ptr [edi + 0x84] */
    esi = POP32_VAL(esp); /* 0x140E8AD3: pop esi */
    /* test ecx, ecx */ /* 0x140E8AD4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8ADD; /* 0x140E8AD6: je 0x140e8add */
L_140E8AD8:
    eax = MEM32(ecx); /* 0x140E8AD8: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x140E8ADA: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_140E8ADD:
    ecx = MEM32(edi + 0x8C); /* 0x140E8ADD: mov ecx, dword ptr [edi + 0x8c] */
    /* test ecx, ecx */ /* 0x140E8AE3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8AEC; /* 0x140E8AE5: je 0x140e8aec */
L_140E8AE7:
    eax = MEM32(ecx); /* 0x140E8AE7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x140E8AE9: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_140E8AEC:
    ecx = MEM32(edi + 0x48); /* 0x140E8AEC: mov ecx, dword ptr [edi + 0x48] */
    MEM32(edi + 0x34) = 0; /* 0x140E8AEF: mov dword ptr [edi + 0x34], 0 */
    /* test ecx, ecx */ /* 0x140E8AF6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8B02; /* 0x140E8AF8: je 0x140e8b02 */
L_140E8AFA:
    eax = MEM32(ecx); /* 0x140E8AFA: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140E8AFC: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x34) = eax; /* 0x140E8AFF: mov dword ptr [edi + 0x34], eax */
L_140E8B02:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8B02: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8B10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8B10u);

L_140E8B10:
    eax = 0xEu; /* 0x140E8B10: mov eax, 0xe */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8B15: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8B20u);

L_140E8B20:
    /* cmp MEM32(eax + 0x4), 4 */ /* 0x140E8B20: cmp dword ptr [eax + 4], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E8B29; /* 0x140E8B24: je 0x140e8b29 */
L_140E8B26:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E8B26: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8B28: ret  */
L_140E8B29:
    PUSH32(esp, esi); /* 0x140E8B29: push esi */
    esi = MEM32(ecx + 0x50); /* 0x140E8B2A: mov esi, dword ptr [ecx + 0x50] */
    ecx = MEM32(ecx + 0xA4); /* 0x140E8B2D: mov ecx, dword ptr [ecx + 0xa4] */
    PUSH32(esp, edi); /* 0x140E8B33: push edi */
    edi = MEM32(eax + 0x50); /* 0x140E8B34: mov edi, dword ptr [eax + 0x50] */
    /* test ecx, ecx */ /* 0x140E8B37: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8B42; /* 0x140E8B39: je 0x140e8b42 */
L_140E8B3B:
    /* cmp esi, ecx */ /* 0x140E8B3B: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8B42; /* 0x140E8B3D: jne 0x140e8b42 */
L_140E8B3F:
    esi = MEM32(esi + 0x58); /* 0x140E8B3F: mov esi, dword ptr [esi + 0x58] */
L_140E8B42:
    eax = MEM32(eax + 0xA4); /* 0x140E8B42: mov eax, dword ptr [eax + 0xa4] */
    /* test eax, eax */ /* 0x140E8B48: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8B53; /* 0x140E8B4A: je 0x140e8b53 */
L_140E8B4C:
    /* cmp edi, eax */ /* 0x140E8B4C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8B53; /* 0x140E8B4E: jne 0x140e8b53 */
L_140E8B50:
    edi = MEM32(edi + 0x58); /* 0x140E8B50: mov edi, dword ptr [edi + 0x58] */
L_140E8B53:
    /* test esi, esi */ /* 0x140E8B53: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8B99; /* 0x140E8B55: je 0x140e8b99 */
L_140E8B57:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x140E8B57: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E8B8A; /* 0x140E8B5B: je 0x140e8b8a */
L_140E8B5D:
    /* test edi, edi */ /* 0x140E8B5D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8B85; /* 0x140E8B5F: je 0x140e8b85 */
L_140E8B61:
    eax = MEM32(esi + 0x68); /* 0x140E8B61: mov eax, dword ptr [esi + 0x68] */
    /* cmp eax, MEM32(edi + 0x68) */ /* 0x140E8B64: cmp eax, dword ptr [edi + 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8B85; /* 0x140E8B67: jne 0x140e8b85 */
L_140E8B69:
    eax = MEM32(esi + 0x6C); /* 0x140E8B69: mov eax, dword ptr [esi + 0x6c] */
    /* cmp eax, MEM32(edi + 0x6C) */ /* 0x140E8B6C: cmp eax, dword ptr [edi + 0x6c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x6C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8B85; /* 0x140E8B6F: jne 0x140e8b85 */
L_140E8B71:
    ecx = MEM32(esi + 0x48); /* 0x140E8B71: mov ecx, dword ptr [esi + 0x48] */
    PUSH32(esp, MEM32(edi + 0x48)); /* 0x140E8B74: push dword ptr [edi + 0x48] */
    eax = MEM32(ecx); /* 0x140E8B77: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x140E8B79: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140E8B7C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8B85; /* 0x140E8B7E: je 0x140e8b85 */
L_140E8B80:
    esi = MEM32(esi + 0x58); /* 0x140E8B80: mov esi, dword ptr [esi + 0x58] */
    RECOMP_BACKEDGE();
    goto L_140E8B50; /* 0x140E8B83: jmp 0x140e8b50 */
L_140E8B85:
    edi = POP32_VAL(esp); /* 0x140E8B85: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E8B86: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x140E8B88: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8B89: ret  */
L_140E8B8A:
    /* test edi, edi */ /* 0x140E8B8A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8BA2; /* 0x140E8B8C: je 0x140e8ba2 */
L_140E8B8E:
    /* cmp MEM32(edi + 0x4), 1 */ /* 0x140E8B8E: cmp dword ptr [edi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E8BA2; /* 0x140E8B92: je 0x140e8ba2 */
L_140E8B94:
    edi = POP32_VAL(esp); /* 0x140E8B94: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E8B95: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140E8B97: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8B98: ret  */
L_140E8B99:
    /* test edi, edi */ /* 0x140E8B99: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8B8E; /* 0x140E8B9B: jne 0x140e8b8e */
L_140E8B9D:
    edi = POP32_VAL(esp); /* 0x140E8B9D: pop edi */
    SET_LO8(eax, 1); /* 0x140E8B9E: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x140E8BA0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8BA1: ret  */
L_140E8BA2:
    edi = POP32_VAL(esp); /* 0x140E8BA2: pop edi */
    eax = 1; /* 0x140E8BA3: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x140E8BA8: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8BA9: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8BB0u);

L_140E8BB0:
    eax = MEM32(esi + 0x9C); /* 0x140E8BB0: mov eax, dword ptr [esi + 0x9c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x140E8BB6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x140E8BB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8BE8; /* 0x140E8BBA: je 0x140e8be8 */
L_140E8BBC:
    esp = esp; /* 0x140E8BBC: lea esp, [esp] */
L_140E8BC0:
    /* cmp eax, edx */ /* 0x140E8BC0: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E8BD1; /* 0x140E8BC2: je 0x140e8bd1 */
L_140E8BC4:
    ecx = eax; /* 0x140E8BC4: mov ecx, eax */
    eax = MEM32(eax + 0xA0); /* 0x140E8BC6: mov eax, dword ptr [eax + 0xa0] */
    /* test eax, eax */ /* 0x140E8BCC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8BC0; /* 0x140E8BCE: jne 0x140e8bc0 */
L_140E8BD0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8BD0: ret  */
L_140E8BD1:
    eax = MEM32(eax + 0xA0); /* 0x140E8BD1: mov eax, dword ptr [eax + 0xa0] */
    /* test ecx, ecx */ /* 0x140E8BD7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8BE2; /* 0x140E8BD9: jne 0x140e8be2 */
L_140E8BDB:
    MEM32(esi + 0x9C) = eax; /* 0x140E8BDB: mov dword ptr [esi + 0x9c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8BE1: ret  */
L_140E8BE2:
    MEM32(ecx + 0xA0) = eax; /* 0x140E8BE2: mov dword ptr [ecx + 0xa0], eax */
L_140E8BE8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8BE8: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8BF0u);

L_140E8BF0:
    RECOMP_CALL(sub_140E7E90); /* 0x140E8BF0: call 0x140e7e90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM8(eax + 0x64) | 8)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x64) | 8)) << 24;
    MEM8(eax + 0x64) = (uint8_t)(MEM8(eax + 0x64) | 8); /* 0x140E8BF5: or byte ptr [eax + 0x64], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax + 0x68) = 0; /* 0x140E8BF9: mov dword ptr [eax + 0x68], 0 */
    MEM32(eax) = 0x1403FD60u; /* 0x140E8C00: mov dword ptr [eax], 0x1403fd60 */
    MEM32(eax + 0x4) = 5; /* 0x140E8C06: mov dword ptr [eax + 4], 5 */
    MEM32(eax + 0x70) = 0; /* 0x140E8C0D: mov dword ptr [eax + 0x70], 0 */
    MEM32(eax + 0x74) = 0; /* 0x140E8C14: mov dword ptr [eax + 0x74], 0 */
    MEM32(eax + 0x78) = 0; /* 0x140E8C1B: mov dword ptr [eax + 0x78], 0 */
    MEM32(eax + 0x7C) = 0; /* 0x140E8C22: mov dword ptr [eax + 0x7c], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8C29: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8C30u);

L_140E8C30:
    RECOMP_CALL(sub_140E7E90); /* 0x140E8C30: call 0x140e7e90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM8(eax + 0x64) | 8)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x64) | 8)) << 24;
    MEM8(eax + 0x64) = (uint8_t)(MEM8(eax + 0x64) | 8); /* 0x140E8C35: or byte ptr [eax + 0x64], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax + 0x68) = 0; /* 0x140E8C39: mov dword ptr [eax + 0x68], 0 */
    MEM32(eax + 0x70) = 0; /* 0x140E8C40: mov dword ptr [eax + 0x70], 0 */
    MEM32(eax + 0x74) = 0; /* 0x140E8C47: mov dword ptr [eax + 0x74], 0 */
    MEM32(eax + 0x78) = 0; /* 0x140E8C4E: mov dword ptr [eax + 0x78], 0 */
    MEM32(eax + 0x7C) = 0; /* 0x140E8C55: mov dword ptr [eax + 0x7c], 0 */
    MEM32(eax) = 0x1403FD60u; /* 0x140E8C5C: mov dword ptr [eax], 0x1403fd60 */
    MEM32(eax + 0x4) = 6; /* 0x140E8C62: mov dword ptr [eax + 4], 6 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8C69: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8C70u);

L_140E8C70:
    eax = MEM32(eax + 0x4C); /* 0x140E8C70: mov eax, dword ptr [eax + 0x4c] */
    /* test eax, eax */ /* 0x140E8C73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8C89; /* 0x140E8C75: je 0x140e8c89 */
L_140E8C77:
    /* cmp MEM32(eax + 0x4), 3 */ /* 0x140E8C77: cmp dword ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8C89; /* 0x140E8C7B: jne 0x140e8c89 */
L_140E8C7D:
    eax = MEM32(eax + 0x48); /* 0x140E8C7D: mov eax, dword ptr [eax + 0x48] */
    /* cmp MEM32(eax + 0x4), 3 */ /* 0x140E8C80: cmp dword ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8C89; /* 0x140E8C84: jne 0x140e8c89 */
L_140E8C86:
    SET_LO8(eax, 1); /* 0x140E8C86: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8C88: ret  */
L_140E8C89:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E8C89: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8C8B: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8CA0u);

L_140E8CA0:
    eax = MEM32(ecx + 0x68); /* 0x140E8CA0: mov eax, dword ptr [ecx + 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x140E8CA3: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0)); _flag_b = (uint32_t)((eax | 0));
    eax = eax | 0; /* 0x140E8CA6: or eax, 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8CC4; /* 0x140E8CA9: jne 0x140e8cc4 */
L_140E8CAB:
    eax = MEM32(ecx + 0x4C); /* 0x140E8CAB: mov eax, dword ptr [ecx + 0x4c] */
    /* test eax, eax */ /* 0x140E8CAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8CC4; /* 0x140E8CB0: je 0x140e8cc4 */
L_140E8CB2:
    /* cmp MEM32(eax + 0x4), 3 */ /* 0x140E8CB2: cmp dword ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8CC4; /* 0x140E8CB6: jne 0x140e8cc4 */
L_140E8CB8:
    eax = MEM32(eax + 0x48); /* 0x140E8CB8: mov eax, dword ptr [eax + 0x48] */
    /* cmp MEM32(eax + 0x4), 3 */ /* 0x140E8CBB: cmp dword ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8CC4; /* 0x140E8CBF: jne 0x140e8cc4 */
L_140E8CC1:
    SET_LO8(eax, 1); /* 0x140E8CC1: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8CC3: ret  */
L_140E8CC4:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E8CC4: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8CC6: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8CD0u);

L_140E8CD0:
    edi = edi; /* 0x140E8CD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E8CD2: push ebp */
    ebp = esp; /* 0x140E8CD3: mov ebp, esp */
    PUSH32(esp, 0x3Au); /* 0x140E8CD5: push 0x3a */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140E8CD7: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x14001108)); /* 0x140E8CDA: call dword ptr [0x14001108] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E8CE0: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140E8CE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8CEC; /* 0x140E8CE5: je 0x140e8cec */
L_140E8CE7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140E8CE7: inc eax */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x140E8CE8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E8CE9: ret 4 */
L_140E8CEC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E8CEC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x140E8CEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E8CEF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E8D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8D00u);

L_140E8D00:
    edi = edi; /* 0x140E8D00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E8D02: push ebp */
    ebp = esp; /* 0x140E8D03: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x140E8D05: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x140E8D09: push esi */
    esi = ecx; /* 0x140E8D0A: mov esi, ecx */
    MEM32(esi) = 0x1403FD74u; /* 0x140E8D0C: mov dword ptr [esi], 0x1403fd74 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8D19; /* 0x140E8D12: je 0x140e8d19 */
L_140E8D14:
    RECOMP_CALL(sub_1406F290); /* 0x140E8D14: call 0x1406f290 */
    RECOMP_FLAGS_IN();
L_140E8D19:
    eax = esi; /* 0x140E8D19: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x140E8D1B: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E8D1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E8D1D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E8D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8D30u);

L_140E8D30:
    edi = edi; /* 0x140E8D30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E8D32: push ebp */
    ebp = esp; /* 0x140E8D33: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x140E8D35: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x140E8D38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8D42; /* 0x140E8D3A: jne 0x140e8d42 */
L_140E8D3C:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E8D3C: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x140E8D3E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E8D3F: ret 4 */
L_140E8D42:
    eax = MEM32(eax + 0x4); /* 0x140E8D42: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x140E8D45: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140E8D48: sete al */
    ebp = POP32_VAL(esp); /* 0x140E8D4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E8D4C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E8D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8D60u);

L_140E8D60:
    edi = edi; /* 0x140E8D60: mov edi, edi */
    PUSH32(esp, esi); /* 0x140E8D62: push esi */
    PUSH32(esp, edi); /* 0x140E8D63: push edi */
    esi = 0x14u; /* 0x140E8D64: mov esi, 0x14 */
    edi = ecx; /* 0x140E8D69: mov edi, ecx */
    RECOMP_CALL(sub_1406E5A0); /* 0x140E8D6B: call 0x1406e5a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E8D70: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8D9A; /* 0x140E8D72: je 0x140e8d9a */
L_140E8D74:
    ecx = MEM32(edi + 0x4); /* 0x140E8D74: mov ecx, dword ptr [edi + 4] */
    edi = POP32_VAL(esp); /* 0x140E8D77: pop edi */
    MEM32(eax) = 0x1403FD74u; /* 0x140E8D78: mov dword ptr [eax], 0x1403fd74 */
    MEM32(eax + 0x4) = ecx; /* 0x140E8D7E: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = 0; /* 0x140E8D81: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140E8D88: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 1; /* 0x140E8D8F: mov dword ptr [eax + 0x10], 1 */
    esi = POP32_VAL(esp); /* 0x140E8D96: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E8D97: ret 4 */
L_140E8D9A:
    edi = POP32_VAL(esp); /* 0x140E8D9A: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E8D9B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140E8D9D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E8D9E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E8DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8DB0u);

L_140E8DB0:
    /* test ecx, ecx */ /* 0x140E8DB0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8DBE; /* 0x140E8DB2: je 0x140e8dbe */
L_140E8DB4:
    eax = MEM32(ecx); /* 0x140E8DB4: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x140E8DB6: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140E8DB7: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x140E8DBA: movzx eax, al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8DBD: ret  */
L_140E8DBE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E8DBE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x140E8DC0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x140E8DC2: sete al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8DC5: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8DD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8DD0u);

L_140E8DD0:
    edi = edi; /* 0x140E8DD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E8DD2: push ebp */
    ebp = esp; /* 0x140E8DD3: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x140E8DD5: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8DE1; /* 0x140E8DD9: jne 0x140e8de1 */
L_140E8DDB:
    eax = ecx; /* 0x140E8DDB: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x140E8DDD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E8DDE: ret 4 */
L_140E8DE1:
    eax = ebp + 0x8; /* 0x140E8DE1: lea eax, [ebp + 8] */
L_140E8DE4:
    eax = MEM32(eax); /* 0x140E8DE4: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x140E8DE6: add eax, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), 0 */ /* 0x140E8DE9: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8DE4; /* 0x140E8DEC: jne 0x140e8de4 */
L_140E8DEE:
    MEM32(eax) = ecx; /* 0x140E8DEE: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + 0x8); /* 0x140E8DF0: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x140E8DF3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E8DF4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E8E00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8E00u);

    goto L_140E8E00;
L_14068390:
    /* test eax, eax */ /* 0x14068390: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14068395; /* 0x14068392: jne 0x14068395 */
L_14068394:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14068394: ret  */
L_14068395:
    ecx = MEM32(eax + 0x58); /* 0x14068395: mov ecx, dword ptr [eax + 0x58] */
    /* test ecx, ecx */ /* 0x14068398: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1406839F; /* 0x1406839A: jne 0x1406839f */
L_1406839C:
    ecx = eax + 0x38; /* 0x1406839C: lea ecx, [eax + 0x38] */
L_1406839F:
    eax = ecx; /* 0x1406839F: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140683A1: ret  */
L_140E8E00:
    edi = edi; /* 0x140E8E00: mov edi, edi */
    PUSH32(esp, esi); /* 0x140E8E02: push esi */
    PUSH32(esp, edi); /* 0x140E8E03: push edi */
    edi = ecx; /* 0x140E8E04: mov edi, ecx */
    /* test edi, edi */ /* 0x140E8E06: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8E4B; /* 0x140E8E08: je 0x140e8e4b */
L_140E8E0A:
    ebx = ebx; /* 0x140E8E0A: lea ebx, [ebx] */
L_140E8E10:
    eax = MEM32(edi + 0x4); /* 0x140E8E10: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140E8E13: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 9 */ /* 0x140E8E14: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E8E4B; /* 0x140E8E17: ja 0x140e8e4b */
L_140E8E19:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140E8EB4)); goto _ljump; }
L_140E8E20:
    esi = edi; /* 0x140E8E20: mov esi, edi */
L_140E8E22:
    /* test esi, esi */ /* 0x140E8E22: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8E41; /* 0x140E8E24: je 0x140e8e41 */
L_140E8E26:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x140E8E26: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8E41; /* 0x140E8E2A: jne 0x140e8e41 */
L_140E8E2C:
    ecx = MEM32(esi + 0x8); /* 0x140E8E2C: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x140E8E2F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8E3C; /* 0x140E8E31: je 0x140e8e3c */
L_140E8E33:
    RECOMP_CALL(sub_140E8E00); /* 0x140E8E33: call 0x140e8e00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E8E38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8E4D; /* 0x140E8E3A: jne 0x140e8e4d */
L_140E8E3C:
    esi = MEM32(esi + 0xC); /* 0x140E8E3C: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    goto L_140E8E22; /* 0x140E8E3F: jmp 0x140e8e22 */
L_140E8E41:
    /* cmp esi, edi */ /* 0x140E8E41: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E8E4B; /* 0x140E8E43: je 0x140e8e4b */
L_140E8E45:
    edi = esi; /* 0x140E8E45: mov edi, esi */
    /* test esi, esi */ /* 0x140E8E47: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8E10; /* 0x140E8E49: jne 0x140e8e10 */
L_140E8E4B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E8E4B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E8E4D:
    edi = POP32_VAL(esp); /* 0x140E8E4D: pop edi */
    esi = POP32_VAL(esp); /* 0x140E8E4E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8E4F: ret  */
L_140E8E50:
    eax = edi + 0x34; /* 0x140E8E50: lea eax, [edi + 0x34] */
    /* test eax, eax */ /* 0x140E8E53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8E5D; /* 0x140E8E55: je 0x140e8e5d */
L_140E8E57:
    /* cmp MEM32(eax + 0x8), 0xFFFFFFFFu */ /* 0x140E8E57: cmp dword ptr [eax + 8], -1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8E4D; /* 0x140E8E5B: jne 0x140e8e4d */
L_140E8E5D:
    ecx = MEM32(edi + 0x18); /* 0x140E8E5D: mov ecx, dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_140E8E00); /* 0x140E8E60: call 0x140e8e00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E8E65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8E4D; /* 0x140E8E67: jne 0x140e8e4d */
L_140E8E69:
    ecx = MEM32(edi + 0x1C); /* 0x140E8E69: mov ecx, dword ptr [edi + 0x1c] */
    RECOMP_CALL(sub_140E8E00); /* 0x140E8E6C: call 0x140e8e00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E8E71: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8E4D; /* 0x140E8E73: jne 0x140e8e4d */
L_140E8E75:
    ecx = MEM32(edi + 0x20); /* 0x140E8E75: mov ecx, dword ptr [edi + 0x20] */
    RECOMP_CALL(sub_140E8E00); /* 0x140E8E78: call 0x140e8e00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E8E7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8E4D; /* 0x140E8E7F: jne 0x140e8e4d */
L_140E8E81:
    ecx = MEM32(edi + 0x24); /* 0x140E8E81: mov ecx, dword ptr [edi + 0x24] */
    RECOMP_CALL(sub_140E8E00); /* 0x140E8E84: call 0x140e8e00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E8E89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8E4B; /* 0x140E8E8B: je 0x140e8e4b */
L_140E8E8D:
    edi = POP32_VAL(esp); /* 0x140E8E8D: pop edi */
    esi = POP32_VAL(esp); /* 0x140E8E8E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8E8F: ret  */
L_140E8E90:
    eax = edi; /* 0x140E8E90: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x140E8E92: pop edi */
    esi = POP32_VAL(esp); /* 0x140E8E93: pop esi */
    RECOMP_BACKEDGE();
    goto L_14068390; /* 0x140E8E94: jmp 0x14068390 */
L_140E8E99:
    eax = edi + 0x30; /* 0x140E8E99: lea eax, [edi + 0x30] */
    edi = POP32_VAL(esp); /* 0x140E8E9C: pop edi */
    esi = POP32_VAL(esp); /* 0x140E8E9D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8E9E: ret  */
L_140E8E9F:
    eax = edi + 0x1C; /* 0x140E8E9F: lea eax, [edi + 0x1c] */
    edi = POP32_VAL(esp); /* 0x140E8EA2: pop edi */
    esi = POP32_VAL(esp); /* 0x140E8EA3: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8EA4: ret  */
L_140E8EA5:
    eax = edi + 0x18; /* 0x140E8EA5: lea eax, [edi + 0x18] */
    edi = POP32_VAL(esp); /* 0x140E8EA8: pop edi */
    esi = POP32_VAL(esp); /* 0x140E8EA9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8EAA: ret  */
L_140E8EAB:
    eax = edi + 0x2C; /* 0x140E8EAB: lea eax, [edi + 0x2c] */
    edi = POP32_VAL(esp); /* 0x140E8EAE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E8EAF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8EB0: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x140E8E20u: goto L_140E8E20;
      case 0x140E8E4Bu: goto L_140E8E4B;
      case 0x140E8E50u: goto L_140E8E50;
      case 0x140E8E90u: goto L_140E8E90;
      case 0x140E8E99u: goto L_140E8E99;
      case 0x140E8E9Fu: goto L_140E8E9F;
      case 0x140E8EA5u: goto L_140E8EA5;
      case 0x140E8EABu: goto L_140E8EAB;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140E8EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8EF0u);

L_140E8EF0:
    edi = edi; /* 0x140E8EF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E8EF2: push ebp */
    ebp = esp; /* 0x140E8EF3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140E8EF5: push esi */
    esi = ecx; /* 0x140E8EF6: mov esi, ecx */
    RECOMP_CALL(sub_140E8F20); /* 0x140E8EF8: call 0x140e8f20 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x140E8EFD: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8F08; /* 0x140E8F01: je 0x140e8f08 */
L_140E8F03:
    RECOMP_CALL(sub_1406F290); /* 0x140E8F03: call 0x1406f290 */
    RECOMP_FLAGS_IN();
L_140E8F08:
    eax = esi; /* 0x140E8F08: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x140E8F0A: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E8F0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E8F0C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E8F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8F20u);

L_140E8F20:
    edi = edi; /* 0x140E8F20: mov edi, edi */
    PUSH32(esp, ebx); /* 0x140E8F22: push ebx */
    PUSH32(esp, esi); /* 0x140E8F23: push esi */
    ebx = ecx; /* 0x140E8F24: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x140E8F26: push edi */
    MEM32(ebx) = 0x1403FDACu; /* 0x140E8F27: mov dword ptr [ebx], 0x1403fdac */
    esi = ebx; /* 0x140E8F2D: mov esi, ebx */
    /* nop */ /* 0x140E8F2F: nop  */
L_140E8F30:
    ecx = MEM32(esi + 0x8); /* 0x140E8F30: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x140E8F33: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8F42; /* 0x140E8F35: je 0x140e8f42 */
L_140E8F37:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1; /* 0x140E8F37: dec dword ptr [ecx + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E8F42; /* 0x140E8F3A: jne 0x140e8f42 */
L_140E8F3C:
    eax = MEM32(ecx); /* 0x140E8F3C: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x140E8F3E: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x140E8F40: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_140E8F42:
    edi = MEM32(esi + 0xC); /* 0x140E8F42: mov edi, dword ptr [esi + 0xc] */
    /* cmp esi, ebx */ /* 0x140E8F45: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E8F64; /* 0x140E8F47: je 0x140e8f64 */
L_140E8F49:
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) - 1; /* 0x140E8F49: dec dword ptr [esi + 0x10] */
    _flag_k = FK_DEC;
    MEM32(esi + 0x8) = 0; /* 0x140E8F4C: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x140E8F53: mov dword ptr [esi + 0xc], 0 */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E8F64; /* 0x140E8F5A: jne 0x140e8f64 */
L_140E8F5C:
    eax = MEM32(esi); /* 0x140E8F5C: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x140E8F5E: push 1 */
    ecx = esi; /* 0x140E8F60: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x140E8F62: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_140E8F64:
    /* test edi, edi */ /* 0x140E8F64: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8F7F; /* 0x140E8F66: je 0x140e8f7f */
L_140E8F68:
    /* cmp MEM32(edi + 0x4), 1 */ /* 0x140E8F68: cmp dword ptr [edi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8F72; /* 0x140E8F6C: jne 0x140e8f72 */
L_140E8F6E:
    esi = edi; /* 0x140E8F6E: mov esi, edi */
    RECOMP_BACKEDGE();
    goto L_140E8F30; /* 0x140E8F70: jmp 0x140e8f30 */
L_140E8F72:
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x10) = MEM32(edi + 0x10) - 1; /* 0x140E8F72: dec dword ptr [edi + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E8F7F; /* 0x140E8F75: jne 0x140e8f7f */
L_140E8F77:
    eax = MEM32(edi); /* 0x140E8F77: mov eax, dword ptr [edi] */
    PUSH32(esp, 1); /* 0x140E8F79: push 1 */
    ecx = edi; /* 0x140E8F7B: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x140E8F7D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_140E8F7F:
    edi = POP32_VAL(esp); /* 0x140E8F7F: pop edi */
    esi = POP32_VAL(esp); /* 0x140E8F80: pop esi */
    MEM32(ebx) = 0x1403FD74u; /* 0x140E8F81: mov dword ptr [ebx], 0x1403fd74 */
    ebx = POP32_VAL(esp); /* 0x140E8F87: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E8F88: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E8F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E8F90u);

L_140E8F90:
    edi = edi; /* 0x140E8F90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E8F92: push ebp */
    ebp = esp; /* 0x140E8F93: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140E8F95: push esi */
    esi = MEM32(ebp + 0x8); /* 0x140E8F96: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x140E8F99: push edi */
    edi = ecx; /* 0x140E8F9A: mov edi, ecx */
    /* test esi, esi */ /* 0x140E8F9C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E9001; /* 0x140E8F9E: je 0x140e9001 */
L_140E8FA0:
    eax = MEM32(esi + 0x4); /* 0x140E8FA0: mov eax, dword ptr [esi + 4] */
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x140E8FA3: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E9001; /* 0x140E8FA6: jne 0x140e9001 */
L_140E8FA8:
    /* cmp MEM32(edi + 0x4), 1 */ /* 0x140E8FA8: cmp dword ptr [edi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E8FEA; /* 0x140E8FAC: jne 0x140e8fea */
L_140E8FAE:
    /* test esi, esi */ /* 0x140E8FAE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E9001; /* 0x140E8FB0: je 0x140e9001 */
L_140E8FB2:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x140E8FB2: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E9001; /* 0x140E8FB6: jne 0x140e9001 */
L_140E8FB8:
    ecx = MEM32(edi + 0x8); /* 0x140E8FB8: mov ecx, dword ptr [edi + 8] */
    edx = MEM32(esi + 0x8); /* 0x140E8FBB: mov edx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x140E8FBE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E8FCD; /* 0x140E8FC0: je 0x140e8fcd */
L_140E8FC2:
    eax = MEM32(ecx); /* 0x140E8FC2: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x140E8FC4: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140E8FC5: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x140E8FC8: movzx eax, al */
    goto L_140E8FD4; /* 0x140E8FCB: jmp 0x140e8fd4 */
L_140E8FCD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E8FCD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x140E8FCF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x140E8FD1: sete al */
L_140E8FD4:
    /* test LO8(eax), LO8(eax) */ /* 0x140E8FD4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E9001; /* 0x140E8FD6: je 0x140e9001 */
L_140E8FD8:
    edi = MEM32(edi + 0xC); /* 0x140E8FD8: mov edi, dword ptr [edi + 0xc] */
    esi = MEM32(esi + 0xC); /* 0x140E8FDB: mov esi, dword ptr [esi + 0xc] */
    /* test edi, edi */ /* 0x140E8FDE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E8FA8; /* 0x140E8FE0: jne 0x140e8fa8 */
L_140E8FE2:
    edi = POP32_VAL(esp); /* 0x140E8FE2: pop edi */
    SET_LO8(eax, 1); /* 0x140E8FE3: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x140E8FE5: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E8FE6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E8FE7: ret 4 */
L_140E8FEA:
    eax = MEM32(edi); /* 0x140E8FEA: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x140E8FEC: push esi */
    ecx = edi; /* 0x140E8FED: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140E8FEF: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x140E8FF2: movzx eax, al */
    /* test LO8(eax), LO8(eax) */ /* 0x140E8FF5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E9001; /* 0x140E8FF7: je 0x140e9001 */
L_140E8FF9:
    edi = POP32_VAL(esp); /* 0x140E8FF9: pop edi */
    SET_LO8(eax, 1); /* 0x140E8FFA: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x140E8FFC: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E8FFD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E8FFE: ret 4 */
L_140E9001:
    edi = POP32_VAL(esp); /* 0x140E9001: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E9002: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x140E9004: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E9005: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E9006: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E9010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E9010u);

L_140E9010:
    edi = edi; /* 0x140E9010: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E9012: push ebp */
    ebp = esp; /* 0x140E9013: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140E9015: push ecx */
    PUSH32(esp, ebx); /* 0x140E9016: push ebx */
    PUSH32(esp, esi); /* 0x140E9017: push esi */
    PUSH32(esp, edi); /* 0x140E9018: push edi */
    edi = ecx; /* 0x140E9019: mov edi, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x140E901B: mov dword ptr [ebp - 4], 0 */
    ebx = ebp + (-0x4); /* 0x140E9022: lea ebx, [ebp - 4] */
    /* test edi, edi */ /* 0x140E9025: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E90D3; /* 0x140E9027: je 0x140e90d3 */
L_140E902D:
    ecx = ecx; /* 0x140E902D: lea ecx, [ecx] */
L_140E9030:
    /* cmp MEM32(edi + 0x4), 1 */ /* 0x140E9030: cmp dword ptr [edi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E90C7; /* 0x140E9034: jne 0x140e90c7 */
L_140E903A:
    esi = 0x18u; /* 0x140E903A: mov esi, 0x18 */
    RECOMP_CALL(sub_1406E5A0); /* 0x140E903F: call 0x1406e5a0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140E9044: mov ecx, eax */
    /* test ecx, ecx */ /* 0x140E9046: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E9075; /* 0x140E9048: je 0x140e9075 */
L_140E904A:
    MEM32(ecx + 0x4) = 1; /* 0x140E904A: mov dword ptr [ecx + 4], 1 */
    MEM32(ecx + 0x8) = 0; /* 0x140E9051: mov dword ptr [ecx + 8], 0 */
    MEM32(ecx + 0xC) = 0; /* 0x140E9058: mov dword ptr [ecx + 0xc], 0 */
    MEM32(ecx + 0x10) = 1; /* 0x140E905F: mov dword ptr [ecx + 0x10], 1 */
    MEM32(ecx) = 0x1403FDACu; /* 0x140E9066: mov dword ptr [ecx], 0x1403fdac */
    MEM32(ecx + 0x14) = 0; /* 0x140E906C: mov dword ptr [ecx + 0x14], 0 */
    goto L_140E9077; /* 0x140E9073: jmp 0x140e9077 */
L_140E9075:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x140E9075: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_140E9077:
    MEM32(ebx) = ecx; /* 0x140E9077: mov dword ptr [ebx], ecx */
    /* test ecx, ecx */ /* 0x140E9079: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E90D3; /* 0x140E907B: je 0x140e90d3 */
L_140E907D:
    eax = MEM32(edi + 0x14); /* 0x140E907D: mov eax, dword ptr [edi + 0x14] */
    MEM32(ecx + 0x14) = eax; /* 0x140E9080: mov dword ptr [ecx + 0x14], eax */
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x140E9083: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E909D; /* 0x140E9087: je 0x140e909d */
L_140E9089:
    ecx = MEM32(edi + 0x8); /* 0x140E9089: mov ecx, dword ptr [edi + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140E908C: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x140E908F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140E9091: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x140E9094: mov ecx, dword ptr [ebx] */
    MEM32(ecx + 0x8) = eax; /* 0x140E9096: mov dword ptr [ecx + 8], eax */
    /* test eax, eax */ /* 0x140E9099: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E90B5; /* 0x140E909B: je 0x140e90b5 */
L_140E909D:
    ebx = MEM32(ebx); /* 0x140E909D: mov ebx, dword ptr [ebx] */
    edi = MEM32(edi + 0xC); /* 0x140E909F: mov edi, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x140E90A2: add ebx, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x140E90A5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E9030; /* 0x140E90A7: jne 0x140e9030 */
L_140E90A9:
    eax = MEM32(ebp + (-0x4)); /* 0x140E90A9: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x140E90AC: pop edi */
    esi = POP32_VAL(esp); /* 0x140E90AD: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E90AE: pop ebx */
    esp = ebp; /* 0x140E90AF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E90B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E90B2: ret 4 */
L_140E90B5:
    edi = POP32_VAL(esp); /* 0x140E90B5: pop edi */
    MEM32(ebx) = 0; /* 0x140E90B6: mov dword ptr [ebx], 0 */
    eax = MEM32(ebp + (-0x4)); /* 0x140E90BC: mov eax, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x140E90BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E90C0: pop ebx */
    esp = ebp; /* 0x140E90C1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E90C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E90C4: ret 4 */
L_140E90C7:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140E90C7: push dword ptr [ebp + 8] */
    eax = MEM32(edi); /* 0x140E90CA: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x140E90CC: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140E90CE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = eax; /* 0x140E90D1: mov dword ptr [ebx], eax */
L_140E90D3:
    eax = MEM32(ebp + (-0x4)); /* 0x140E90D3: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x140E90D6: pop edi */
    esi = POP32_VAL(esp); /* 0x140E90D7: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E90D8: pop ebx */
    esp = ebp; /* 0x140E90D9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E90DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E90DC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E90F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E90F0u);

L_140E90F0:
    edi = edi; /* 0x140E90F0: mov edi, edi */
    PUSH32(esp, esi); /* 0x140E90F2: push esi */
    esi = ecx; /* 0x140E90F3: mov esi, ecx */
    /* test esi, esi */ /* 0x140E90F5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E911F; /* 0x140E90F7: je 0x140e911f */
L_140E90F9:
    esp = esp; /* 0x140E90F9: lea esp, [esp] */
L_140E9100:
    ecx = MEM32(esi + 0x8); /* 0x140E9100: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x140E9103: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E910C; /* 0x140E9105: je 0x140e910c */
L_140E9107:
    eax = MEM32(ecx); /* 0x140E9107: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x140E9109: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_140E910C:
    eax = MEM32(esi + 0xC); /* 0x140E910C: mov eax, dword ptr [esi + 0xc] */
    /* test eax, eax */ /* 0x140E910F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E911F; /* 0x140E9111: je 0x140e911f */
L_140E9113:
    /* cmp MEM32(eax + 0x4), 1 */ /* 0x140E9113: cmp dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E9121; /* 0x140E9117: jne 0x140e9121 */
L_140E9119:
    esi = eax; /* 0x140E9119: mov esi, eax */
    /* test esi, esi */ /* 0x140E911B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E9100; /* 0x140E911D: jne 0x140e9100 */
L_140E911F:
    esi = POP32_VAL(esp); /* 0x140E911F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E9120: ret  */
L_140E9121:
    ecx = eax; /* 0x140E9121: mov ecx, eax */
    /* test ecx, ecx */ /* 0x140E9123: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E911F; /* 0x140E9125: je 0x140e911f */
L_140E9127:
    eax = MEM32(ecx); /* 0x140E9127: mov eax, dword ptr [ecx] */
    esi = POP32_VAL(esp); /* 0x140E9129: pop esi */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0xC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140E9140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E9140u);

L_140E9140:
    edi = edi; /* 0x140E9140: mov edi, edi */
    PUSH32(esp, esi); /* 0x140E9142: push esi */
    esi = ecx; /* 0x140E9143: mov esi, ecx */
    /* test esi, esi */ /* 0x140E9145: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E916F; /* 0x140E9147: je 0x140e916f */
L_140E9149:
    esp = esp; /* 0x140E9149: lea esp, [esp] */
L_140E9150:
    ecx = MEM32(esi + 0x8); /* 0x140E9150: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x140E9153: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E915C; /* 0x140E9155: je 0x140e915c */
L_140E9157:
    eax = MEM32(ecx); /* 0x140E9157: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x140E9159: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_140E915C:
    eax = MEM32(esi + 0xC); /* 0x140E915C: mov eax, dword ptr [esi + 0xc] */
    /* test eax, eax */ /* 0x140E915F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E916F; /* 0x140E9161: je 0x140e916f */
L_140E9163:
    /* cmp MEM32(eax + 0x4), 1 */ /* 0x140E9163: cmp dword ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E9171; /* 0x140E9167: jne 0x140e9171 */
L_140E9169:
    esi = eax; /* 0x140E9169: mov esi, eax */
    /* test esi, esi */ /* 0x140E916B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E9150; /* 0x140E916D: jne 0x140e9150 */
L_140E916F:
    esi = POP32_VAL(esp); /* 0x140E916F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E9170: ret  */
L_140E9171:
    ecx = eax; /* 0x140E9171: mov ecx, eax */
    /* test ecx, ecx */ /* 0x140E9173: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E916F; /* 0x140E9175: je 0x140e916f */
L_140E9177:
    eax = MEM32(ecx); /* 0x140E9177: mov eax, dword ptr [ecx] */
    esi = POP32_VAL(esp); /* 0x140E9179: pop esi */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x10)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140E9190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E9190u);

L_140E9190:
    eax = MEM32(edx); /* 0x140E9190: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(ecx) */ /* 0x140E9192: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E91B2; /* 0x140E9194: jne 0x140e91b2 */
L_140E9196:
    /* cmp eax, 0xCu */ /* 0x140E9196: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E9260; /* 0x140E9199: ja 0x140e9260 */
L_140E919F:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140E9268)); goto _ljump; }
L_140E91A6:
    eax = MEM32(edx + 0x8); /* 0x140E91A6: mov eax, dword ptr [edx + 8] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x140E91A9: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E9260; /* 0x140E91AC: je 0x140e9260 */
L_140E91B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E91B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E91B4: ret  */
L_140E91B5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x140E91B5: add ecx, 8 */
    _flag_k = FK_ADD;
    eax = edx + 0x8; /* 0x140E91B8: lea eax, [edx + 8] */
    goto L_140E91C0; /* 0x140E91BB: jmp 0x140e91c0 */
L_140E91C0:
    SET_LO8(edx, MEM8(eax)); /* 0x140E91C0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x140E91C2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E91E0; /* 0x140E91C4: jne 0x140e91e0 */
L_140E91C6:
    /* test LO8(edx), LO8(edx) */ /* 0x140E91C6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E91DC; /* 0x140E91C8: je 0x140e91dc */
L_140E91CA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x140E91CA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x140E91CD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E91E0; /* 0x140E91D0: jne 0x140e91e0 */
L_140E91D2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E91D2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E91D5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E91D8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E91C0; /* 0x140E91DA: jne 0x140e91c0 */
L_140E91DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E91DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E91E5; /* 0x140E91DE: jmp 0x140e91e5 */
L_140E91E0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E91E0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E91E2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E91E5:
    /* test eax, eax */ /* 0x140E91E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E9260; /* 0x140E91E7: je 0x140e9260 */
L_140E91E9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E91E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E91EB: ret  */
L_140E91EC:
    eax = MEM32(edx + 0x8); /* 0x140E91EC: mov eax, dword ptr [edx + 8] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x140E91EF: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E91FC; /* 0x140E91F2: jne 0x140e91fc */
L_140E91F4:
    eax = MEM32(edx + 0xC); /* 0x140E91F4: mov eax, dword ptr [edx + 0xc] */
    /* cmp eax, MEM32(ecx + 0xC) */ /* 0x140E91F7: cmp eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E9260; /* 0x140E91FA: je 0x140e9260 */
L_140E91FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E91FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E91FE: ret  */
L_140E91FF:
    fp_push(*(double*)ADDR(edx + 0x8)); /* 0x140E91FF: fld qword ptr [edx + 8] */
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x140E9202: fld qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x140E9205: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x140E9207: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x140E9209: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_140E9260; /* 0x140E920C: jnp 0x140e9260 */
L_140E920E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E920E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E9210: ret  */
L_140E9211:
    ecx = MEM32(ecx + 0x8); /* 0x140E9211: mov ecx, dword ptr [ecx + 8] */
    eax = MEM32(edx + 0x8); /* 0x140E9214: mov eax, dword ptr [edx + 8] */
L_140E9217:
    SET_LO8(edx, MEM8(eax)); /* 0x140E9217: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x140E9219: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E91E0; /* 0x140E921B: jne 0x140e91e0 */
L_140E921D:
    /* test LO8(edx), LO8(edx) */ /* 0x140E921D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E9233; /* 0x140E921F: je 0x140e9233 */
L_140E9221:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x140E9221: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x140E9224: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E91E0; /* 0x140E9227: jne 0x140e91e0 */
L_140E9229:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E9229: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E922C: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E922F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E9217; /* 0x140E9231: jne 0x140e9217 */
L_140E9233:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E9233: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_140E91E5; /* 0x140E9235: jmp 0x140e91e5 */
L_140E9237:
    ecx = MEM32(ecx + 0x8); /* 0x140E9237: mov ecx, dword ptr [ecx + 8] */
    eax = MEM32(edx + 0x8); /* 0x140E923A: mov eax, dword ptr [edx + 8] */
    ecx = ecx; /* 0x140E923D: lea ecx, [ecx] */
L_140E9240:
    SET_LO8(edx, MEM8(eax)); /* 0x140E9240: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x140E9242: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E91E0; /* 0x140E9244: jne 0x140e91e0 */
L_140E9246:
    /* test LO8(edx), LO8(edx) */ /* 0x140E9246: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E925C; /* 0x140E9248: je 0x140e925c */
L_140E924A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x140E924A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x140E924D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E91E0; /* 0x140E9250: jne 0x140e91e0 */
L_140E9252:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E9252: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E9255: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E9258: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E9240; /* 0x140E925A: jne 0x140e9240 */
L_140E925C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E925C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_140E91E5; /* 0x140E925E: jmp 0x140e91e5 */
L_140E9260:
    eax = 1; /* 0x140E9260: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E9265: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x140E91A6u: goto L_140E91A6;
      case 0x140E91B5u: goto L_140E91B5;
      case 0x140E91ECu: goto L_140E91EC;
      case 0x140E91FFu: goto L_140E91FF;
      case 0x140E9211u: goto L_140E9211;
      case 0x140E9237u: goto L_140E9237;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140E92B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E92B0u);

L_140E92B0:
    edi = edi; /* 0x140E92B0: mov edi, edi */
    PUSH32(esp, esi); /* 0x140E92B2: push esi */
    PUSH32(esp, edi); /* 0x140E92B3: push edi */
    edi = eax + 0x18; /* 0x140E92B4: lea edi, [eax + 0x18] */
    ecx = 0xAu; /* 0x140E92B7: mov ecx, 0xa */
    esi = edx; /* 0x140E92BC: mov esi, edx */
    MEM32(eax + 0x4) = 2; /* 0x140E92BE: mov dword ptr [eax + 4], 2 */
    MEM32(eax + 0x8) = 0; /* 0x140E92C5: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140E92CC: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 1; /* 0x140E92D3: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x1403FD90u; /* 0x140E92DA: mov dword ptr [eax], 0x1403fd90 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x140E92E0: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x140E92E2: pop edi */
    esi = POP32_VAL(esp); /* 0x140E92E3: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E92E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E92F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E92F0u);

L_140E92F0:
    MEM32(eax + 0x4) = 2; /* 0x140E92F0: mov dword ptr [eax + 4], 2 */
    MEM32(eax + 0x8) = 0; /* 0x140E92F7: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140E92FE: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 1; /* 0x140E9305: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x1403FD90u; /* 0x140E930C: mov dword ptr [eax], 0x1403fd90 */
    MEM32(eax + 0x18) = 0; /* 0x140E9312: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0x1C) = 0; /* 0x140E9319: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x20) = 0; /* 0x140E9320: mov dword ptr [eax + 0x20], 0 */
    MEM32(eax + 0x24) = 0; /* 0x140E9327: mov dword ptr [eax + 0x24], 0 */
    MEM32(eax + 0x28) = 0; /* 0x140E932E: mov dword ptr [eax + 0x28], 0 */
    MEM32(eax + 0x2C) = 0; /* 0x140E9335: mov dword ptr [eax + 0x2c], 0 */
    MEM32(eax + 0x30) = 0; /* 0x140E933C: mov dword ptr [eax + 0x30], 0 */
    MEM32(eax + 0x34) = 0; /* 0x140E9343: mov dword ptr [eax + 0x34], 0 */
    MEM32(eax + 0x38) = 0; /* 0x140E934A: mov dword ptr [eax + 0x38], 0 */
    MEM32(eax + 0x3C) = 0; /* 0x140E9351: mov dword ptr [eax + 0x3c], 0 */
    ecx = MEM32(edx); /* 0x140E9358: mov ecx, dword ptr [edx] */
    MEM32(eax + 0x18) = ecx; /* 0x140E935A: mov dword ptr [eax + 0x18], ecx */
    ecx = MEM32(edx + 0x8); /* 0x140E935D: mov ecx, dword ptr [edx + 8] */
    MEM32(eax + 0x20) = ecx; /* 0x140E9360: mov dword ptr [eax + 0x20], ecx */
    ecx = MEM32(edx + 0xC); /* 0x140E9363: mov ecx, dword ptr [edx + 0xc] */
    MEM32(eax + 0x24) = ecx; /* 0x140E9366: mov dword ptr [eax + 0x24], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E9369: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E9370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E9370u);

L_140E9370:
    edi = edi; /* 0x140E9370: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E9372: push ebp */
    ebp = esp; /* 0x140E9373: mov ebp, esp */
    edx = ecx; /* 0x140E9375: mov edx, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x140E9377: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x140E937A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E939A; /* 0x140E937C: je 0x140e939a */
L_140E937E:
    eax = MEM32(ecx + 0x4); /* 0x140E937E: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(edx + 0x4) */ /* 0x140E9381: cmp eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E939A; /* 0x140E9384: jne 0x140e939a */
L_140E9386:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x140E9386: add ecx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x18u; /* 0x140E9389: add edx, 0x18 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_140E9190); /* 0x140E938C: call 0x140e9190 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E9391: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140E9393: setne al */
    ebp = POP32_VAL(esp); /* 0x140E9396: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E9397: ret 4 */
L_140E939A:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E939A: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x140E939C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E939D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E93B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E93B0u);

L_140E93B0:
    edi = edi; /* 0x140E93B0: mov edi, edi */
    PUSH32(esp, esi); /* 0x140E93B2: push esi */
    PUSH32(esp, edi); /* 0x140E93B3: push edi */
    esi = 0x40u; /* 0x140E93B4: mov esi, 0x40 */
    edi = ecx; /* 0x140E93B9: mov edi, ecx */
    RECOMP_CALL(sub_1406E5A0); /* 0x140E93BB: call 0x1406e5a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E93C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E93F8; /* 0x140E93C2: je 0x140e93f8 */
L_140E93C4:
    esi = edi + 0x18; /* 0x140E93C4: lea esi, [edi + 0x18] */
    edi = eax + 0x18; /* 0x140E93C7: lea edi, [eax + 0x18] */
    ecx = 0xAu; /* 0x140E93CA: mov ecx, 0xa */
    MEM32(eax + 0x4) = 2; /* 0x140E93CF: mov dword ptr [eax + 4], 2 */
    MEM32(eax + 0x8) = 0; /* 0x140E93D6: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140E93DD: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 1; /* 0x140E93E4: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x1403FD90u; /* 0x140E93EB: mov dword ptr [eax], 0x1403fd90 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x140E93F1: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x140E93F3: pop edi */
    esi = POP32_VAL(esp); /* 0x140E93F4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E93F5: ret 4 */
L_140E93F8:
    edi = POP32_VAL(esp); /* 0x140E93F8: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E93F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140E93FB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E93FC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E9410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E9410u);

L_140E9410:
    MEM32(eax + 0x4) = 9; /* 0x140E9410: mov dword ptr [eax + 4], 9 */
    MEM32(eax + 0x8) = 0; /* 0x140E9417: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140E941E: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 1; /* 0x140E9425: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x1403FDC8u; /* 0x140E942C: mov dword ptr [eax], 0x1403fdc8 */
    MEM32(eax + 0x1C) = 0; /* 0x140E9432: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x20) = 0xFFFFFFFFu; /* 0x140E9439: mov dword ptr [eax + 0x20], 0xffffffff */
    MEM32(eax + 0x24) = 0xFFFFFFFFu; /* 0x140E9440: mov dword ptr [eax + 0x24], 0xffffffff */
    MEM32(eax + 0x28) = 0xFFFFFFFFu; /* 0x140E9447: mov dword ptr [eax + 0x28], 0xffffffff */
    MEM32(eax + 0x2C) = 0xFFFFFFFFu; /* 0x140E944E: mov dword ptr [eax + 0x2c], 0xffffffff */
    MEM32(eax + 0x30) = 0xFFFFFFFFu; /* 0x140E9455: mov dword ptr [eax + 0x30], 0xffffffff */
    MEM32(eax + 0x34) = 0; /* 0x140E945C: mov dword ptr [eax + 0x34], 0 */
    MEM32(eax + 0x38) = 0; /* 0x140E9463: mov dword ptr [eax + 0x38], 0 */
    MEM32(eax + 0x14) = 0; /* 0x140E946A: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 0; /* 0x140E9471: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0x3C) = 0; /* 0x140E9478: mov dword ptr [eax + 0x3c], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E947F: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E9490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E9490u);

L_140E9490:
    edi = edi; /* 0x140E9490: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E9492: push ebp */
    ebp = esp; /* 0x140E9493: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140E9495: push esi */
    esi = ecx; /* 0x140E9496: mov esi, ecx */
    ecx = MEM32(esi + 0x18); /* 0x140E9498: mov ecx, dword ptr [esi + 0x18] */
    MEM32(esi) = 0x1403FDC8u; /* 0x140E949B: mov dword ptr [esi], 0x1403fdc8 */
    /* test ecx, ecx */ /* 0x140E94A1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E94B0; /* 0x140E94A3: je 0x140e94b0 */
L_140E94A5:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1; /* 0x140E94A5: dec dword ptr [ecx + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E94B0; /* 0x140E94A8: jne 0x140e94b0 */
L_140E94AA:
    eax = MEM32(ecx); /* 0x140E94AA: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x140E94AC: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x140E94AE: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_140E94B0:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x140E94B0: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x1403FD74u; /* 0x140E94B4: mov dword ptr [esi], 0x1403fd74 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E94C1; /* 0x140E94BA: je 0x140e94c1 */
L_140E94BC:
    RECOMP_CALL(sub_1406F290); /* 0x140E94BC: call 0x1406f290 */
    RECOMP_FLAGS_IN();
L_140E94C1:
    eax = esi; /* 0x140E94C1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x140E94C3: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E94C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E94C5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E94D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E94D0u);

L_140E94D0:
    edi = edi; /* 0x140E94D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E94D2: push ebp */
    ebp = esp; /* 0x140E94D3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140E94D5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x140E94D6: mov esi, dword ptr [ebp + 8] */
    MEM32(eax + 0x4) = 9; /* 0x140E94D9: mov dword ptr [eax + 4], 9 */
    MEM32(eax + 0x8) = 0; /* 0x140E94E0: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140E94E7: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 1; /* 0x140E94EE: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x1403FDC8u; /* 0x140E94F5: mov dword ptr [eax], 0x1403fdc8 */
    /* test esi, esi */ /* 0x140E94FB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E9516; /* 0x140E94FD: je 0x140e9516 */
L_140E94FF:
    PUSH32(esp, edi); /* 0x140E94FF: push edi */
    edi = eax + 0x1C; /* 0x140E9500: lea edi, [eax + 0x1c] */
    ecx = 8; /* 0x140E9503: mov ecx, 8 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x140E9508: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x140E950A: pop edi */
    MEM32(eax + 0x14) = ebx; /* 0x140E950B: mov dword ptr [eax + 0x14], ebx */
    MEM32(eax + 0x18) = edx; /* 0x140E950E: mov dword ptr [eax + 0x18], edx */
    esi = POP32_VAL(esp); /* 0x140E9511: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E9512: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E9513: ret 4 */
L_140E9516:
    MEM32(eax + 0x1C) = 0; /* 0x140E9516: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x20) = 0xFFFFFFFFu; /* 0x140E951D: mov dword ptr [eax + 0x20], 0xffffffff */
    MEM32(eax + 0x24) = 0xFFFFFFFFu; /* 0x140E9524: mov dword ptr [eax + 0x24], 0xffffffff */
    MEM32(eax + 0x28) = 0xFFFFFFFFu; /* 0x140E952B: mov dword ptr [eax + 0x28], 0xffffffff */
    MEM32(eax + 0x2C) = 0xFFFFFFFFu; /* 0x140E9532: mov dword ptr [eax + 0x2c], 0xffffffff */
    MEM32(eax + 0x30) = 0xFFFFFFFFu; /* 0x140E9539: mov dword ptr [eax + 0x30], 0xffffffff */
    MEM32(eax + 0x34) = 0; /* 0x140E9540: mov dword ptr [eax + 0x34], 0 */
    MEM32(eax + 0x38) = 0; /* 0x140E9547: mov dword ptr [eax + 0x38], 0 */
    MEM32(eax + 0x14) = ebx; /* 0x140E954E: mov dword ptr [eax + 0x14], ebx */
    MEM32(eax + 0x18) = edx; /* 0x140E9551: mov dword ptr [eax + 0x18], edx */
    esi = POP32_VAL(esp); /* 0x140E9554: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E9555: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E9556: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E9560(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E9560u);

L_140E9560:
    edi = edi; /* 0x140E9560: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E9562: push ebp */
    ebp = esp; /* 0x140E9563: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140E9565: push esi */
    esi = MEM32(ebp + 0x8); /* 0x140E9566: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x140E9569: push edi */
    edi = ecx; /* 0x140E956A: mov edi, ecx */
    /* test esi, esi */ /* 0x140E956C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E95D1; /* 0x140E956E: je 0x140e95d1 */
L_140E9570:
    eax = MEM32(esi + 0x4); /* 0x140E9570: mov eax, dword ptr [esi + 4] */
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x140E9573: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E95D1; /* 0x140E9576: jne 0x140e95d1 */
L_140E9578:
    ecx = MEM32(esi + 0x14); /* 0x140E9578: mov ecx, dword ptr [esi + 0x14] */
    eax = MEM32(edi + 0x14); /* 0x140E957B: mov eax, dword ptr [edi + 0x14] */
    edi = edi; /* 0x140E957E: mov edi, edi */
L_140E9580:
    SET_LO8(edx, MEM8(eax)); /* 0x140E9580: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x140E9582: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E95A0; /* 0x140E9584: jne 0x140e95a0 */
L_140E9586:
    /* test LO8(edx), LO8(edx) */ /* 0x140E9586: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E959C; /* 0x140E9588: je 0x140e959c */
L_140E958A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x140E958A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x140E958D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E95A0; /* 0x140E9590: jne 0x140e95a0 */
L_140E9592:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E9592: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E9595: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E9598: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E9580; /* 0x140E959A: jne 0x140e9580 */
L_140E959C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E959C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E95A5; /* 0x140E959E: jmp 0x140e95a5 */
L_140E95A0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E95A0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E95A2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E95A5:
    /* test eax, eax */ /* 0x140E95A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E95D1; /* 0x140E95A7: jne 0x140e95d1 */
L_140E95A9:
    ecx = MEM32(edi + 0x18); /* 0x140E95A9: mov ecx, dword ptr [edi + 0x18] */
    edx = MEM32(esi + 0x18); /* 0x140E95AC: mov edx, dword ptr [esi + 0x18] */
    /* test ecx, ecx */ /* 0x140E95AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E95BE; /* 0x140E95B1: je 0x140e95be */
L_140E95B3:
    eax = MEM32(ecx); /* 0x140E95B3: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x140E95B5: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140E95B6: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x140E95B9: movzx eax, al */
    goto L_140E95C5; /* 0x140E95BC: jmp 0x140e95c5 */
L_140E95BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E95BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x140E95C0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x140E95C2: sete al */
L_140E95C5:
    /* test LO8(eax), LO8(eax) */ /* 0x140E95C5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E95D1; /* 0x140E95C7: je 0x140e95d1 */
L_140E95C9:
    edi = POP32_VAL(esp); /* 0x140E95C9: pop edi */
    SET_LO8(eax, 1); /* 0x140E95CA: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x140E95CC: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E95CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E95CE: ret 4 */
L_140E95D1:
    edi = POP32_VAL(esp); /* 0x140E95D1: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E95D2: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x140E95D4: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E95D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E95D6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E95E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E95E0u);

L_140E95E0:
    edi = edi; /* 0x140E95E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E95E2: push ebp */
    ebp = esp; /* 0x140E95E3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x140E95E5: push ebx */
    PUSH32(esp, esi); /* 0x140E95E6: push esi */
    PUSH32(esp, edi); /* 0x140E95E7: push edi */
    esi = 0x40u; /* 0x140E95E8: mov esi, 0x40 */
    edi = ecx; /* 0x140E95ED: mov edi, ecx */
    RECOMP_CALL(sub_1406E5A0); /* 0x140E95EF: call 0x1406e5a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E95F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E9628; /* 0x140E95F6: je 0x140e9628 */
L_140E95F8:
    RECOMP_CALL(sub_140E9410); /* 0x140E95F8: call 0x140e9410 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x140E95FD: mov ebx, eax */
    /* test ebx, ebx */ /* 0x140E95FF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E9628; /* 0x140E9601: je 0x140e9628 */
L_140E9603:
    /* cmp MEM32(edi + 0x18), 0 */ /* 0x140E9603: cmp dword ptr [edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E9631; /* 0x140E9607: je 0x140e9631 */
L_140E9609:
    ecx = MEM32(edi + 0x18); /* 0x140E9609: mov ecx, dword ptr [edi + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140E960C: push dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x140E960F: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x140E9611: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x18) = eax; /* 0x140E9614: mov dword ptr [ebx + 0x18], eax */
    /* test eax, eax */ /* 0x140E9617: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E9631; /* 0x140E9619: jne 0x140e9631 */
L_140E961B:
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) - 1; /* 0x140E961B: dec dword ptr [ebx + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E9628; /* 0x140E961E: jne 0x140e9628 */
L_140E9620:
    eax = MEM32(ebx); /* 0x140E9620: mov eax, dword ptr [ebx] */
    PUSH32(esp, 1); /* 0x140E9622: push 1 */
    ecx = ebx; /* 0x140E9624: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x140E9626: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_140E9628:
    edi = POP32_VAL(esp); /* 0x140E9628: pop edi */
    esi = POP32_VAL(esp); /* 0x140E9629: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E962A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140E962C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E962D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E962E: ret 4 */
L_140E9631:
    eax = MEM32(edi + 0x14); /* 0x140E9631: mov eax, dword ptr [edi + 0x14] */
    esi = edi + 0x1C; /* 0x140E9634: lea esi, [edi + 0x1c] */
    MEM32(ebx + 0x14) = eax; /* 0x140E9637: mov dword ptr [ebx + 0x14], eax */
    edi = ebx + 0x1C; /* 0x140E963A: lea edi, [ebx + 0x1c] */
    ecx = 8; /* 0x140E963D: mov ecx, 8 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x140E9642: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x140E9644: pop edi */
    esi = POP32_VAL(esp); /* 0x140E9645: pop esi */
    eax = ebx; /* 0x140E9646: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x140E9648: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E9649: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E964A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E9660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E9660u);

L_140E9660:
    ecx = MEM32(ecx + 0x18); /* 0x140E9660: mov ecx, dword ptr [ecx + 0x18] */
    /* test ecx, ecx */ /* 0x140E9663: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E966C; /* 0x140E9665: je 0x140e966c */
L_140E9667:
    eax = MEM32(ecx); /* 0x140E9667: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0xC)); goto _ljump; }
L_140E966C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E966C: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140E9680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E9680u);

L_140E9680:
    MEM32(eax + 0x4) = 0xAu; /* 0x140E9680: mov dword ptr [eax + 4], 0xa */
    MEM32(eax + 0x8) = 0; /* 0x140E9687: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140E968E: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 1; /* 0x140E9695: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x1403FDE4u; /* 0x140E969C: mov dword ptr [eax], 0x1403fde4 */
    MEM32(eax + 0x14) = 0; /* 0x140E96A2: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 0; /* 0x140E96A9: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0x1C) = 0xFFFFFFFFu; /* 0x140E96B0: mov dword ptr [eax + 0x1c], 0xffffffff */
    MEM32(eax + 0x20) = 0xFFFFFFFFu; /* 0x140E96B7: mov dword ptr [eax + 0x20], 0xffffffff */
    MEM32(eax + 0x24) = 0xFFFFFFFFu; /* 0x140E96BE: mov dword ptr [eax + 0x24], 0xffffffff */
    MEM32(eax + 0x28) = 0xFFFFFFFFu; /* 0x140E96C5: mov dword ptr [eax + 0x28], 0xffffffff */
    MEM32(eax + 0x2C) = 0xFFFFFFFFu; /* 0x140E96CC: mov dword ptr [eax + 0x2c], 0xffffffff */
    MEM32(eax + 0x30) = 0; /* 0x140E96D3: mov dword ptr [eax + 0x30], 0 */
    MEM32(eax + 0x34) = 0; /* 0x140E96DA: mov dword ptr [eax + 0x34], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E96E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E96F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E96F0u);

L_140E96F0:
    edi = edi; /* 0x140E96F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E96F2: push ebp */
    ebp = esp; /* 0x140E96F3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140E96F5: push esi */
    esi = ecx; /* 0x140E96F6: mov esi, ecx */
    ecx = MEM32(esi + 0x14); /* 0x140E96F8: mov ecx, dword ptr [esi + 0x14] */
    MEM32(esi) = 0x1403FDE4u; /* 0x140E96FB: mov dword ptr [esi], 0x1403fde4 */
    /* test ecx, ecx */ /* 0x140E9701: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E9710; /* 0x140E9703: je 0x140e9710 */
L_140E9705:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1; /* 0x140E9705: dec dword ptr [ecx + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E9710; /* 0x140E9708: jne 0x140e9710 */
L_140E970A:
    eax = MEM32(ecx); /* 0x140E970A: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x140E970C: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x140E970E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_140E9710:
    /* test MEM8(ebp + 0x8), 1 */ /* 0x140E9710: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x1403FD74u; /* 0x140E9714: mov dword ptr [esi], 0x1403fd74 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E9721; /* 0x140E971A: je 0x140e9721 */
L_140E971C:
    RECOMP_CALL(sub_1406F290); /* 0x140E971C: call 0x1406f290 */
    RECOMP_FLAGS_IN();
L_140E9721:
    eax = esi; /* 0x140E9721: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x140E9723: pop esi */
    ebp = POP32_VAL(esp); /* 0x140E9724: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E9725: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E9730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E9730u);

L_140E9730:
    MEM32(ecx + 0x14) = eax; /* 0x140E9730: mov dword ptr [ecx + 0x14], eax */
    MEM32(ecx + 0x4) = 0xAu; /* 0x140E9733: mov dword ptr [ecx + 4], 0xa */
    MEM32(ecx + 0x8) = 0; /* 0x140E973A: mov dword ptr [ecx + 8], 0 */
    MEM32(ecx + 0xC) = 0; /* 0x140E9741: mov dword ptr [ecx + 0xc], 0 */
    MEM32(ecx + 0x10) = 1; /* 0x140E9748: mov dword ptr [ecx + 0x10], 1 */
    MEM32(ecx) = 0x1403FDE4u; /* 0x140E974F: mov dword ptr [ecx], 0x1403fde4 */
    MEM32(ecx + 0x18) = 0; /* 0x140E9755: mov dword ptr [ecx + 0x18], 0 */
    MEM32(ecx + 0x1C) = 0xFFFFFFFFu; /* 0x140E975C: mov dword ptr [ecx + 0x1c], 0xffffffff */
    MEM32(ecx + 0x20) = 0xFFFFFFFFu; /* 0x140E9763: mov dword ptr [ecx + 0x20], 0xffffffff */
    MEM32(ecx + 0x24) = 0xFFFFFFFFu; /* 0x140E976A: mov dword ptr [ecx + 0x24], 0xffffffff */
    MEM32(ecx + 0x28) = 0xFFFFFFFFu; /* 0x140E9771: mov dword ptr [ecx + 0x28], 0xffffffff */
    MEM32(ecx + 0x2C) = 0xFFFFFFFFu; /* 0x140E9778: mov dword ptr [ecx + 0x2c], 0xffffffff */
    MEM32(ecx + 0x30) = 0; /* 0x140E977F: mov dword ptr [ecx + 0x30], 0 */
    MEM32(ecx + 0x34) = 0; /* 0x140E9786: mov dword ptr [ecx + 0x34], 0 */
    eax = ecx; /* 0x140E978D: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E978F: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E97A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E97A0u);

L_140E97A0:
    edi = edi; /* 0x140E97A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E97A2: push ebp */
    ebp = esp; /* 0x140E97A3: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x140E97A5: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x140E97A8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E97E0; /* 0x140E97AA: je 0x140e97e0 */
L_140E97AC:
    eax = MEM32(edx + 0x4); /* 0x140E97AC: mov eax, dword ptr [edx + 4] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x140E97AF: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E97E0; /* 0x140E97B2: jne 0x140e97e0 */
L_140E97B4:
    ecx = MEM32(ecx + 0x14); /* 0x140E97B4: mov ecx, dword ptr [ecx + 0x14] */
    edx = MEM32(edx + 0x14); /* 0x140E97B7: mov edx, dword ptr [edx + 0x14] */
    /* test ecx, ecx */ /* 0x140E97BA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E97D0; /* 0x140E97BC: je 0x140e97d0 */
L_140E97BE:
    eax = MEM32(ecx); /* 0x140E97BE: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x140E97C0: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x140E97C1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)LO8(eax); /* 0x140E97C4: movzx eax, al */
    /* test LO8(eax), LO8(eax) */ /* 0x140E97C7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140E97C9: setne al */
    ebp = POP32_VAL(esp); /* 0x140E97CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E97CD: ret 4 */
L_140E97D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E97D0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x140E97D2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x140E97D4: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x140E97D7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140E97D9: setne al */
    ebp = POP32_VAL(esp); /* 0x140E97DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E97DD: ret 4 */
L_140E97E0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140E97E0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x140E97E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E97E3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E97F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E97F0u);

L_140E97F0:
    edi = edi; /* 0x140E97F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E97F2: push ebp */
    ebp = esp; /* 0x140E97F3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x140E97F5: push ebx */
    PUSH32(esp, esi); /* 0x140E97F6: push esi */
    PUSH32(esp, edi); /* 0x140E97F7: push edi */
    esi = 0x38u; /* 0x140E97F8: mov esi, 0x38 */
    edi = ecx; /* 0x140E97FD: mov edi, ecx */
    RECOMP_CALL(sub_1406E5A0); /* 0x140E97FF: call 0x1406e5a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E9804: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E9838; /* 0x140E9806: je 0x140e9838 */
L_140E9808:
    RECOMP_CALL(sub_140E9680); /* 0x140E9808: call 0x140e9680 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x140E980D: mov ebx, eax */
    /* test ebx, ebx */ /* 0x140E980F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E9838; /* 0x140E9811: je 0x140e9838 */
L_140E9813:
    /* cmp MEM32(edi + 0x14), 0 */ /* 0x140E9813: cmp dword ptr [edi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E9841; /* 0x140E9817: je 0x140e9841 */
L_140E9819:
    ecx = MEM32(edi + 0x14); /* 0x140E9819: mov ecx, dword ptr [edi + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140E981C: push dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x140E981F: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x140E9821: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x14) = eax; /* 0x140E9824: mov dword ptr [ebx + 0x14], eax */
    /* test eax, eax */ /* 0x140E9827: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E9841; /* 0x140E9829: jne 0x140e9841 */
L_140E982B:
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) - 1; /* 0x140E982B: dec dword ptr [ebx + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140E9838; /* 0x140E982E: jne 0x140e9838 */
L_140E9830:
    eax = MEM32(ebx); /* 0x140E9830: mov eax, dword ptr [ebx] */
    PUSH32(esp, 1); /* 0x140E9832: push 1 */
    ecx = ebx; /* 0x140E9834: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x140E9836: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_140E9838:
    edi = POP32_VAL(esp); /* 0x140E9838: pop edi */
    esi = POP32_VAL(esp); /* 0x140E9839: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E983A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140E983C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E983D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E983E: ret 4 */
L_140E9841:
    esi = edi + 0x18; /* 0x140E9841: lea esi, [edi + 0x18] */
    edi = ebx + 0x18; /* 0x140E9844: lea edi, [ebx + 0x18] */
    ecx = 8; /* 0x140E9847: mov ecx, 8 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x140E984C: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x140E984E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E984F: pop esi */
    eax = ebx; /* 0x140E9850: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x140E9852: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140E9853: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140E9854: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140E9860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E9860u);

L_140E9860:
    ecx = MEM32(ecx + 0x14); /* 0x140E9860: mov ecx, dword ptr [ecx + 0x14] */
    /* test ecx, ecx */ /* 0x140E9863: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E986C; /* 0x140E9865: je 0x140e986c */
L_140E9867:
    eax = MEM32(ecx); /* 0x140E9867: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0xC)); goto _ljump; }
L_140E986C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E986C: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140E9880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E9880u);

L_140E9880:
    ecx = MEM32(ecx + 0x14); /* 0x140E9880: mov ecx, dword ptr [ecx + 0x14] */
    /* test ecx, ecx */ /* 0x140E9883: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E988C; /* 0x140E9885: je 0x140e988c */
L_140E9887:
    eax = MEM32(ecx); /* 0x140E9887: mov eax, dword ptr [ecx] */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x10)); goto _ljump; }
L_140E988C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E988C: ret  */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140E98A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E98A0u);

L_140E98A0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E98A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E98B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E98B0u);

L_140E98B0:
    MEM32(eax + 0x4) = 3; /* 0x140E98B0: mov dword ptr [eax + 4], 3 */
    MEM32(eax + 0x8) = 0; /* 0x140E98B7: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140E98BE: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 1; /* 0x140E98C5: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x1403FE00u; /* 0x140E98CC: mov dword ptr [eax], 0x1403fe00 */
    MEM32(eax + 0x14) = 0; /* 0x140E98D2: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 0; /* 0x140E98D9: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0x1C) = 0; /* 0x140E98E0: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x20) = 0; /* 0x140E98E7: mov dword ptr [eax + 0x20], 0 */
    MEM32(eax + 0x24) = 0; /* 0x140E98EE: mov dword ptr [eax + 0x24], 0 */
    MEM32(eax + 0x28) = 0; /* 0x140E98F5: mov dword ptr [eax + 0x28], 0 */
    MEM32(eax + 0x2C) = 0; /* 0x140E98FC: mov dword ptr [eax + 0x2c], 0 */
    MEM32(eax + 0x30) = 0; /* 0x140E9903: mov dword ptr [eax + 0x30], 0 */
    MEM32(eax + 0x34) = 0; /* 0x140E990A: mov dword ptr [eax + 0x34], 0 */
    MEM32(eax + 0x38) = 0xFFFFFFFFu; /* 0x140E9911: mov dword ptr [eax + 0x38], 0xffffffff */
    MEM32(eax + 0x3C) = 0xFFFFFFFFu; /* 0x140E9918: mov dword ptr [eax + 0x3c], 0xffffffff */
    MEM32(eax + 0x40) = 0xFFFFFFFFu; /* 0x140E991F: mov dword ptr [eax + 0x40], 0xffffffff */
    MEM32(eax + 0x44) = 0xFFFFFFFFu; /* 0x140E9926: mov dword ptr [eax + 0x44], 0xffffffff */
    MEM32(eax + 0x48) = 0xFFFFFFFFu; /* 0x140E992D: mov dword ptr [eax + 0x48], 0xffffffff */
    MEM32(eax + 0x4C) = 0; /* 0x140E9934: mov dword ptr [eax + 0x4c], 0 */
    MEM32(eax + 0x50) = 0; /* 0x140E993B: mov dword ptr [eax + 0x50], 0 */
    MEM32(eax + 0x54) = 0; /* 0x140E9942: mov dword ptr [eax + 0x54], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E9949: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E30D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E30D0u);

L_140E30D0:
    eax = MEM32(edx + 0x12C); /* 0x140E30D0: mov eax, dword ptr [edx + 0x12c] */
    ecx = eax; /* 0x140E30D6: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x140E30D8: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 3 */ /* 0x140E30DB: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E30F2; /* 0x140E30DE: je 0x140e30f2 */
L_140E30E0:
    /* cmp ecx, 4 */ /* 0x140E30E0: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E30F2; /* 0x140E30E3: je 0x140e30f2 */
L_140E30E5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF9u);
    eax = eax & 0xFFFFFFF9u; /* 0x140E30E5: and eax, 0xfffffff9 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x140E30E8: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x12C) = eax; /* 0x140E30EB: mov dword ptr [edx + 0x12c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E30F1: ret  */
L_140E30F2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x140E30F2: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x140E30F5: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x12C) = eax; /* 0x140E30F8: mov dword ptr [edx + 0x12c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E30FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E3300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E3300u);

L_140E3300:
    eax = MEM32(eax + 0x5C); /* 0x140E3300: mov eax, dword ptr [eax + 0x5c] */
    eax = MEM32(eax * 4 + 0x14028110); /* 0x140E3303: mov eax, dword ptr [eax*4 + 0x14028110] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00102000u);
    eax = eax & 0x00102000u; /* 0x140E330A: and eax, 0x102000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x140E330F: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140E3311: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140E3313: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E3314: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E3620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E3620u);

L_140E3620:
    eax = MEM32(ecx + 0x5C); /* 0x140E3620: mov eax, dword ptr [ecx + 0x5c] */
    ecx = MEM32(eax * 4 + 0x14028110); /* 0x140E3623: mov ecx, dword ptr [eax*4 + 0x14028110] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    ecx = ecx & 0x70u; /* 0x140E362A: and ecx, 0x70 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E362D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(ecx), 0x60u */ /* 0x140E362F: cmp cl, 0x60 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x60u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140E3632: sete al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E3635: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E3640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E3640u);

L_140E3640:
    eax = MEM32(ecx + 0x5C); /* 0x140E3640: mov eax, dword ptr [ecx + 0x5c] */
    eax = MEM32(eax * 4 + 0x14028110); /* 0x140E3643: mov eax, dword ptr [eax*4 + 0x14028110] */
    if (9u) _cf = (((eax) >> 8) & 1u); /* 0x140E364A: shr eax, 9 */
    if (9u) { _flag_a = recomp_flags_pack((eax >> 9u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 9u; /* 0x140E364A: shr eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x140E364D: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E3650: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E3730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E3730u);

L_140E3730:
    /* test ecx, ecx */ /* 0x140E3730: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E373D; /* 0x140E3732: je 0x140e373d */
L_140E3734:
    PUSH32(esp, edi); /* 0x140E3734: push edi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x140E3735: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx; /* 0x140E3738: mov edi, edx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x140E373A: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = POP32_VAL(esp); /* 0x140E373C: pop edi */
L_140E373D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E373D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140E373F: ret  */
    RECOMP_REGS_OUT();
}

void sub_140E3C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140E3C40u);

L_140E3C40:
    edi = edi; /* 0x140E3C40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140E3C42: push ebp */
    ebp = esp; /* 0x140E3C43: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x140E3C45: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x140E3C48: sub esp, 8 */
    _flag_k = FK_CMP;
    /* cmp MEM8(eax + 0x249), 0 */ /* 0x140E3C4B: cmp byte ptr [eax + 0x249], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x249)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x140E3C52: push ebx */
    PUSH32(esp, esi); /* 0x140E3C53: push esi */
    PUSH32(esp, edi); /* 0x140E3C54: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E67D8; /* 0x140E3C55: jne 0x140e67d8 */
L_140E3C5B:
    /* cmp MEM8(eax + 0x248), 0 */ /* 0x140E3C5B: cmp byte ptr [eax + 0x248], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x248)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E3C87; /* 0x140E3C62: je 0x140e3c87 */
L_140E3C64:
    edx = MEM32(ebp + 0x10); /* 0x140E3C64: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x1403F2C0u); /* 0x140E3C67: push 0x1403f2c0 */
    PUSH32(esp, 0xC15u); /* 0x140E3C6C: push 0xc15 */
    esi = eax; /* 0x140E3C71: mov esi, eax */
    RECOMP_CALL(sub_140E6B90); /* 0x140E3C73: call 0x140e6b90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E3C78: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x140E3C7B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140E3C7E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3C7F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3C80: pop ebx */
    esp = ebp; /* 0x140E3C81: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3C83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3C84: ret 0xc */
L_140E3C87:
    esi = eax + 0x220; /* 0x140E3C87: lea esi, [eax + 0x220] */
    PUSH32(esp, esi); /* 0x140E3C8D: push esi */
    PUSH32(esp, MEM32(eax + 0x54)); /* 0x140E3C8E: push dword ptr [eax + 0x54] */
    RECOMP_CALL(sub_141C0E80); /* 0x140E3C91: call 0x141c0e80 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E3C96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E67CE; /* 0x140E3C98: js 0x140e67ce */
L_140E3C9E:
    ecx = MEM32(ebp + 0x10); /* 0x140E3C9E: mov ecx, dword ptr [ebp + 0x10] */
    edi = ecx + 0x1C; /* 0x140E3CA1: lea edi, [ecx + 0x1c] */
    ebx = ecx + 0x18; /* 0x140E3CA4: lea ebx, [ecx + 0x18] */
L_140E3CA7:
    eax = MEM32(esi + 0x10); /* 0x140E3CA7: mov eax, dword ptr [esi + 0x10] */
    MEM32(ecx) = eax; /* 0x140E3CAA: mov dword ptr [ecx], eax */
    eax = MEM32(esi + 0x14); /* 0x140E3CAC: mov eax, dword ptr [esi + 0x14] */
    MEM32(ecx + 0x4) = eax; /* 0x140E3CAF: mov dword ptr [ecx + 4], eax */
    eax = MEM32(esi + 0x18); /* 0x140E3CB2: mov eax, dword ptr [esi + 0x18] */
    MEM32(ecx + 0x8) = eax; /* 0x140E3CB5: mov dword ptr [ecx + 8], eax */
    eax = MEM32(esi + 0x1C); /* 0x140E3CB8: mov eax, dword ptr [esi + 0x1c] */
    MEM32(ecx + 0xC) = eax; /* 0x140E3CBB: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(ecx + 0x8); /* 0x140E3CBE: mov eax, dword ptr [ecx + 8] */
    MEM32(ecx + 0x10) = eax; /* 0x140E3CC1: mov dword ptr [ecx + 0x10], eax */
    eax = MEM32(ecx + 0xC); /* 0x140E3CC4: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, edi); /* 0x140E3CC7: push edi */
    MEM32(ecx + 0x14) = eax; /* 0x140E3CC8: mov dword ptr [ecx + 0x14], eax */
    eax = MEM32(ebp + 0x8); /* 0x140E3CCB: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x140E3CCE: push ebx */
    RECOMP_CALL(sub_14136770); /* 0x140E3CCF: call 0x14136770 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E3CD4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E3D9A; /* 0x140E3CD6: js 0x140e3d9a */
L_140E3CDC:
    /* cmp MEM32(esi), 1 */ /* 0x140E3CDC: cmp dword ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x140E3CDF: mov edx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E3D4F; /* 0x140E3CE2: jne 0x140e3d4f */
L_140E3CE4:
    SET_LO8(ecx, MEM8(edx + 0x228)); /* 0x140E3CE4: mov cl, byte ptr [edx + 0x228] */
    /* cmp LO8(ecx), 0x7Bu */ /* 0x140E3CEA: cmp cl, 0x7b */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E3D1E; /* 0x140E3CED: jne 0x140e3d1e */
L_140E3CEF:
    /* cmp MEM8(edx + 0x229), 0 */ /* 0x140E3CEF: cmp byte ptr [edx + 0x229], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x229)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E3D1E; /* 0x140E3CF6: jne 0x140e3d1e */
L_140E3CF8:
    /* cmp MEM8(edx + 0x24E), 0 */ /* 0x140E3CF8: cmp byte ptr [edx + 0x24e], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x24E)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E3D17; /* 0x140E3CFF: jne 0x140e3d17 */
L_140E3D01:
    /* cmp MEM32(edx + 0x1E8), 0 */ /* 0x140E3D01: cmp dword ptr [edx + 0x1e8], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x1E8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E3D17; /* 0x140E3D08: je 0x140e3d17 */
L_140E3D0A:
    eax = MEM32(edx + 0x4); /* 0x140E3D0A: mov eax, dword ptr [edx + 4] */
    /* test eax, eax */ /* 0x140E3D0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E3D17; /* 0x140E3D0F: je 0x140e3d17 */
L_140E3D11:
    /* cmp MEM32(eax + 0x4), 4 */ /* 0x140E3D11: cmp dword ptr [eax + 4], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140E3D89; /* 0x140E3D15: je 0x140e3d89 */
L_140E3D17:
    MEM8(edx + 0x24E) = (uint8_t)(0); /* 0x140E3D17: mov byte ptr [edx + 0x24e], 0 */
L_140E3D1E:
    /* cmp LO8(ecx), 0x7Du */ /* 0x140E3D1E: cmp cl, 0x7d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E3D4F; /* 0x140E3D21: jne 0x140e3d4f */
L_140E3D23:
    /* cmp MEM8(edx + 0x229), 0 */ /* 0x140E3D23: cmp byte ptr [edx + 0x229], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x229)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E3D4F; /* 0x140E3D2A: jne 0x140e3d4f */
L_140E3D2C:
    /* cmp MEM32(edx + 0x48), 0 */ /* 0x140E3D2C: cmp dword ptr [edx + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E3D4F; /* 0x140E3D30: jne 0x140e3d4f */
L_140E3D32:
    eax = MEM32(edx + 0x1E8); /* 0x140E3D32: mov eax, dword ptr [edx + 0x1e8] */
    /* test eax, eax */ /* 0x140E3D38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E3D4F; /* 0x140E3D3A: je 0x140e3d4f */
L_140E3D3C:
    /* cmp eax, MEM32(edx + 0x4) */ /* 0x140E3D3C: cmp eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E3D4F; /* 0x140E3D3F: jne 0x140e3d4f */
L_140E3D41:
    PUSH32(esp, eax); /* 0x140E3D41: push eax */
    PUSH32(esp, edx); /* 0x140E3D42: push edx */
    RECOMP_CALL(sub_140E7CB0); /* 0x140E3D43: call 0x140e7cb0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x140E3D48: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E3D6D; /* 0x140E3D4A: jne 0x140e3d6d */
L_140E3D4C:
    edx = MEM32(ebp + 0x8); /* 0x140E3D4C: mov edx, dword ptr [ebp + 8] */
L_140E3D4F:
    eax = MEM32(esi); /* 0x140E3D4F: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0xC); /* 0x140E3D51: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x140E3D54: mov dword ptr [ecx], eax */
    fp_push(*(double*)ADDR(edx + 0x228)); /* 0x140E3D56: fld qword ptr [edx + 0x228] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x8) = _v; } /* 0x140E3D5C: fstp qword ptr [ecx + 8] */
    eax = MEM32(esi); /* 0x140E3D5F: mov eax, dword ptr [esi] */
    /* cmp eax, 0x11u */ /* 0x140E3D61: cmp eax, 0x11 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E3D70; /* 0x140E3D64: ja 0x140e3d70 */
L_140E3D66:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140E67E4)); goto _ljump; }
L_140E3D6D:
    edx = MEM32(ebp + 0x8); /* 0x140E3D6D: mov edx, dword ptr [ebp + 8] */
L_140E3D70:
    PUSH32(esp, esi); /* 0x140E3D70: push esi */
    PUSH32(esp, MEM32(edx + 0x54)); /* 0x140E3D71: push dword ptr [edx + 0x54] */
    RECOMP_CALL(sub_141C0E80); /* 0x140E3D74: call 0x141c0e80 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E3D79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140E67CE; /* 0x140E3D7B: js 0x140e67ce */
L_140E3D81:
    ecx = MEM32(ebp + 0x10); /* 0x140E3D81: mov ecx, dword ptr [ebp + 0x10] */
    RECOMP_BACKEDGE();
    goto L_140E3CA7; /* 0x140E3D84: jmp 0x140e3ca7 */
L_140E3D89:
    eax = ebp + (-0x8); /* 0x140E3D89: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x140E3D8C: push eax */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x140E3D8D: push dword ptr [edx + 4] */
    PUSH32(esp, edx); /* 0x140E3D90: push edx */
    RECOMP_CALL(sub_140E7B70); /* 0x140E3D91: call 0x140e7b70 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140E3D96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140E3DBE; /* 0x140E3D98: jns 0x140e3dbe */
L_140E3D9A:
    edx = MEM32(ebp + 0x10); /* 0x140E3D9A: mov edx, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0x8); /* 0x140E3D9D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1403F2C0u); /* 0x140E3DA0: push 0x1403f2c0 */
    PUSH32(esp, 0xC15u); /* 0x140E3DA5: push 0xc15 */
    RECOMP_CALL(sub_140E6B90); /* 0x140E3DAA: call 0x140e6b90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E3DAF: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x140E3DB2: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140E3DB5: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3DB6: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3DB7: pop ebx */
    esp = ebp; /* 0x140E3DB8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3DBA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3DBB: ret 0xc */
L_140E3DBE:
    eax = MEM32(ebp + 0x8); /* 0x140E3DBE: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x228); /* 0x140E3DC1: mov eax, dword ptr [eax + 0x228] */
    edx = MEM32(ebp + 0xC); /* 0x140E3DC7: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = eax; /* 0x140E3DCA: mov dword ptr [edx], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x140E3DCC: mov eax, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x140E3DCF: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3DD0: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3DD1: pop ebx */
    esp = ebp; /* 0x140E3DD2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3DD4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3DD5: ret 0xc */
L_140E3DD8:
    SET_LO8(eax, MEM8(edx + 0x229)); /* 0x140E3DD8: mov al, byte ptr [edx + 0x229] */
    /* test LO8(eax), LO8(eax) */ /* 0x140E3DDE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E3E1C; /* 0x140E3DE0: jne 0x140e3e1c */
L_140E3DE2:
    SET_LO8(eax, MEM8(edx + 0x228)); /* 0x140E3DE2: mov al, byte ptr [edx + 0x228] */
    /* cmp LO8(eax), 0x80u */ /* 0x140E3DE8: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_140E3DF8; /* 0x140E3DEA: jae 0x140e3df8 */
L_140E3DEC:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x140E3DEC: movsx eax, al */
    edi = POP32_VAL(esp); /* 0x140E3DEF: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3DF0: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3DF1: pop ebx */
    esp = ebp; /* 0x140E3DF2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3DF4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3DF5: ret 0xc */
L_140E3DF8:
    edx = MEM32(ebp + 0x10); /* 0x140E3DF8: mov edx, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + 0x8); /* 0x140E3DFB: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1403F2DCu); /* 0x140E3DFE: push 0x1403f2dc */
    PUSH32(esp, 0xBB8u); /* 0x140E3E03: push 0xbb8 */
    RECOMP_CALL(sub_140E6B90); /* 0x140E3E08: call 0x140e6b90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E3E0D: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x140E3E10: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140E3E13: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3E14: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3E15: pop ebx */
    esp = ebp; /* 0x140E3E16: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3E18: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3E19: ret 0xc */
L_140E3E1C:
    SET_LO8(ecx, MEM8(edx + 0x22A)); /* 0x140E3E1C: mov cl, byte ptr [edx + 0x22a] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x140E3E22: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E3F7A; /* 0x140E3E24: jne 0x140e3f7a */
L_140E3E2A:
    /* cmp LO8(eax), 0x3Du */ /* 0x140E3E2A: cmp al, 0x3d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E3EFB; /* 0x140E3E2C: jne 0x140e3efb */
L_140E3E32:
    eax = (int32_t)(int8_t)MEM8(edx + 0x228); /* 0x140E3E32: movsx eax, byte ptr [edx + 0x228] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFDFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFDFu; /* 0x140E3E39: add eax, -0x21 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x5Bu */ /* 0x140E3E3C: cmp eax, 0x5b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E3E3F: ja 0x140e472d */
L_140E3E45:
    eax = (uint32_t)MEM8(eax + 0x140E6860); /* 0x140E3E45: movzx eax, byte ptr [eax + 0x140e6860] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140E682C)); goto _ljump; }
L_140E3E53:
    eax = 0x164u; /* 0x140E3E53: mov eax, 0x164 */
    edi = POP32_VAL(esp); /* 0x140E3E58: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3E59: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3E5A: pop ebx */
    esp = ebp; /* 0x140E3E5B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3E5D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3E5E: ret 0xc */
L_140E3E61:
    eax = 0x165u; /* 0x140E3E61: mov eax, 0x165 */
    edi = POP32_VAL(esp); /* 0x140E3E66: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3E67: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3E68: pop ebx */
    esp = ebp; /* 0x140E3E69: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3E6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3E6C: ret 0xc */
L_140E3E6F:
    eax = 0x166u; /* 0x140E3E6F: mov eax, 0x166 */
    edi = POP32_VAL(esp); /* 0x140E3E74: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3E75: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3E76: pop ebx */
    esp = ebp; /* 0x140E3E77: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3E79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3E7A: ret 0xc */
L_140E3E7D:
    eax = 0x167u; /* 0x140E3E7D: mov eax, 0x167 */
    edi = POP32_VAL(esp); /* 0x140E3E82: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3E83: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3E84: pop ebx */
    esp = ebp; /* 0x140E3E85: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3E87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3E88: ret 0xc */
L_140E3E8B:
    eax = 0x16Au; /* 0x140E3E8B: mov eax, 0x16a */
    edi = POP32_VAL(esp); /* 0x140E3E90: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3E91: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3E92: pop ebx */
    esp = ebp; /* 0x140E3E93: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3E95: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3E96: ret 0xc */
L_140E3E99:
    eax = 0x16Bu; /* 0x140E3E99: mov eax, 0x16b */
    edi = POP32_VAL(esp); /* 0x140E3E9E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3E9F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3EA0: pop ebx */
    esp = ebp; /* 0x140E3EA1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3EA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3EA4: ret 0xc */
L_140E3EA7:
    eax = 0x16Cu; /* 0x140E3EA7: mov eax, 0x16c */
    edi = POP32_VAL(esp); /* 0x140E3EAC: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3EAD: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3EAE: pop ebx */
    esp = ebp; /* 0x140E3EAF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3EB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3EB2: ret 0xc */
L_140E3EB5:
    eax = 0x16Du; /* 0x140E3EB5: mov eax, 0x16d */
    edi = POP32_VAL(esp); /* 0x140E3EBA: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3EBB: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3EBC: pop ebx */
    esp = ebp; /* 0x140E3EBD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3EBF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3EC0: ret 0xc */
L_140E3EC3:
    eax = 0x16Eu; /* 0x140E3EC3: mov eax, 0x16e */
    edi = POP32_VAL(esp); /* 0x140E3EC8: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3EC9: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3ECA: pop ebx */
    esp = ebp; /* 0x140E3ECB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3ECD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3ECE: ret 0xc */
L_140E3ED1:
    eax = 0x174u; /* 0x140E3ED1: mov eax, 0x174 */
    edi = POP32_VAL(esp); /* 0x140E3ED6: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3ED7: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3ED8: pop ebx */
    esp = ebp; /* 0x140E3ED9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3EDB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3EDC: ret 0xc */
L_140E3EDF:
    eax = 0x173u; /* 0x140E3EDF: mov eax, 0x173 */
    edi = POP32_VAL(esp); /* 0x140E3EE4: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3EE5: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3EE6: pop ebx */
    esp = ebp; /* 0x140E3EE7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3EE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3EEA: ret 0xc */
L_140E3EED:
    eax = 0x175u; /* 0x140E3EED: mov eax, 0x175 */
    edi = POP32_VAL(esp); /* 0x140E3EF2: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3EF3: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3EF4: pop ebx */
    esp = ebp; /* 0x140E3EF5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3EF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3EF8: ret 0xc */
L_140E3EFB:
    SET_LO8(ecx, MEM8(edx + 0x228)); /* 0x140E3EFB: mov cl, byte ptr [edx + 0x228] */
    /* cmp LO8(ecx), LO8(eax) */ /* 0x140E3F01: cmp cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E3F03: jne 0x140e472d */
L_140E3F09:
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x140E3F09: movsx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFDAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFDAu; /* 0x140E3F0C: add eax, -0x26 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x56u */ /* 0x140E3F0F: cmp eax, 0x56 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x56u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E3F12: ja 0x140e472d */
L_140E3F18:
    eax = (uint32_t)MEM8(eax + 0x140E68D8); /* 0x140E3F18: movzx eax, byte ptr [eax + 0x140e68d8] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140E68BC)); goto _ljump; }
L_140E3F26:
    eax = 0x162u; /* 0x140E3F26: mov eax, 0x162 */
    edi = POP32_VAL(esp); /* 0x140E3F2B: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3F2C: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3F2D: pop ebx */
    esp = ebp; /* 0x140E3F2E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3F30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3F31: ret 0xc */
L_140E3F34:
    eax = 0x163u; /* 0x140E3F34: mov eax, 0x163 */
    edi = POP32_VAL(esp); /* 0x140E3F39: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3F3A: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3F3B: pop ebx */
    esp = ebp; /* 0x140E3F3C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3F3E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3F3F: ret 0xc */
L_140E3F42:
    eax = 0x168u; /* 0x140E3F42: mov eax, 0x168 */
    edi = POP32_VAL(esp); /* 0x140E3F47: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3F48: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3F49: pop ebx */
    esp = ebp; /* 0x140E3F4A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3F4C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3F4D: ret 0xc */
L_140E3F50:
    eax = 0x169u; /* 0x140E3F50: mov eax, 0x169 */
    edi = POP32_VAL(esp); /* 0x140E3F55: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3F56: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3F57: pop ebx */
    esp = ebp; /* 0x140E3F58: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3F5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3F5B: ret 0xc */
L_140E3F5E:
    eax = 0x170u; /* 0x140E3F5E: mov eax, 0x170 */
    edi = POP32_VAL(esp); /* 0x140E3F63: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3F64: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3F65: pop ebx */
    esp = ebp; /* 0x140E3F66: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3F68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3F69: ret 0xc */
L_140E3F6C:
    eax = 0x16Fu; /* 0x140E3F6C: mov eax, 0x16f */
    edi = POP32_VAL(esp); /* 0x140E3F71: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3F72: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3F73: pop ebx */
    esp = ebp; /* 0x140E3F74: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3F76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3F77: ret 0xc */
L_140E3F7A:
    /* cmp MEM8(edx + 0x22B), 0 */ /* 0x140E3F7A: cmp byte ptr [edx + 0x22b], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x22B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E3F81: jne 0x140e472d */
L_140E3F87:
    /* cmp LO8(ecx), 0x3Du */ /* 0x140E3F87: cmp cl, 0x3d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E3F8A: jne 0x140e472d */
L_140E3F90:
    SET_LO8(ecx, MEM8(edx + 0x228)); /* 0x140E3F90: mov cl, byte ptr [edx + 0x228] */
    /* cmp LO8(ecx), LO8(eax) */ /* 0x140E3F96: cmp cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E3F98: jne 0x140e472d */
L_140E3F9E:
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x140E3F9E: movsx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3Cu; /* 0x140E3FA1: sub eax, 0x3c */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_140E3FBD; /* 0x140E3FA4: je 0x140e3fbd */
L_140E3FA6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x140E3FA6: sub eax, 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E3FA9: jne 0x140e472d */
L_140E3FAF:
    eax = 0x172u; /* 0x140E3FAF: mov eax, 0x172 */
    edi = POP32_VAL(esp); /* 0x140E3FB4: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3FB5: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3FB6: pop ebx */
    esp = ebp; /* 0x140E3FB7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3FB9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3FBA: ret 0xc */
L_140E3FBD:
    eax = 0x171u; /* 0x140E3FBD: mov eax, 0x171 */
    edi = POP32_VAL(esp); /* 0x140E3FC2: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3FC3: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3FC4: pop ebx */
    esp = ebp; /* 0x140E3FC5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3FC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3FC8: ret 0xc */
L_140E3FCB:
    eax = 0x176u; /* 0x140E3FCB: mov eax, 0x176 */
    edi = POP32_VAL(esp); /* 0x140E3FD0: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3FD1: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3FD2: pop ebx */
    esp = ebp; /* 0x140E3FD3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3FD5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3FD6: ret 0xc */
L_140E3FD9:
    eax = 0x177u; /* 0x140E3FD9: mov eax, 0x177 */
    edi = POP32_VAL(esp); /* 0x140E3FDE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3FDF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3FE0: pop ebx */
    esp = ebp; /* 0x140E3FE1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3FE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3FE4: ret 0xc */
L_140E3FE7:
    eax = 0x178u; /* 0x140E3FE7: mov eax, 0x178 */
    edi = POP32_VAL(esp); /* 0x140E3FEC: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3FED: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3FEE: pop ebx */
    esp = ebp; /* 0x140E3FEF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3FF1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E3FF2: ret 0xc */
L_140E3FF5:
    eax = 0x179u; /* 0x140E3FF5: mov eax, 0x179 */
    edi = POP32_VAL(esp); /* 0x140E3FFA: pop edi */
    esi = POP32_VAL(esp); /* 0x140E3FFB: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E3FFC: pop ebx */
    esp = ebp; /* 0x140E3FFD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E3FFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4000: ret 0xc */
L_140E4003:
    eax = 0x17Au; /* 0x140E4003: mov eax, 0x17a */
    edi = POP32_VAL(esp); /* 0x140E4008: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4009: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E400A: pop ebx */
    esp = ebp; /* 0x140E400B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E400D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E400E: ret 0xc */
L_140E4011:
    eax = 0x17Bu; /* 0x140E4011: mov eax, 0x17b */
    edi = POP32_VAL(esp); /* 0x140E4016: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4017: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4018: pop ebx */
    esp = ebp; /* 0x140E4019: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E401B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E401C: ret 0xc */
L_140E401F:
    eax = 0x17Cu; /* 0x140E401F: mov eax, 0x17c */
    edi = POP32_VAL(esp); /* 0x140E4024: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4025: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4026: pop ebx */
    esp = ebp; /* 0x140E4027: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4029: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E402A: ret 0xc */
L_140E402D:
    eax = MEM32(edx + 0x228); /* 0x140E402D: mov eax, dword ptr [edx + 0x228] */
    MEM32(ecx) = eax; /* 0x140E4033: mov dword ptr [ecx], eax */
    MEM8(edx + 0x24E) = (uint8_t)(1); /* 0x140E4035: mov byte ptr [edx + 0x24e], 1 */
    eax = 0x161u; /* 0x140E403C: mov eax, 0x161 */
    edi = POP32_VAL(esp); /* 0x140E4041: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4042: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4043: pop ebx */
    esp = ebp; /* 0x140E4044: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4046: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4047: ret 0xc */
L_140E404A:
    edi = MEM32(ebp + 0x8); /* 0x140E404A: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x228); /* 0x140E404D: mov ecx, dword ptr [edi + 0x228] */
    eax = (int32_t)(int8_t)MEM8(ecx); /* 0x140E4053: movsx eax, byte ptr [ecx] */
    esi = MEM32(0x14001130); /* 0x140E4056: mov esi, dword ptr [0x14001130] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFBFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFBFu; /* 0x140E405C: add eax, -0x41 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x36u */ /* 0x140E405F: cmp eax, 0x36 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x36u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4062: ja 0x140e66b7 */
L_140E4068:
    eax = (uint32_t)MEM8(eax + 0x140E69BC); /* 0x140E4068: movzx eax, byte ptr [eax + 0x140e69bc] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140E6930)); goto _ljump; }
L_140E4076:
    edx = 0x1403F300u; /* 0x140E4076: mov edx, 0x1403f300 */
    eax = ecx; /* 0x140E407B: mov eax, ecx */
    ecx = ecx; /* 0x140E407D: lea ecx, [ecx] */
L_140E4080:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4080: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4082: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E40A0; /* 0x140E4084: jne 0x140e40a0 */
L_140E4086:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4086: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E409C; /* 0x140E4088: je 0x140e409c */
L_140E408A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E408A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E408D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E40A0; /* 0x140E4090: jne 0x140e40a0 */
L_140E4092:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4092: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4095: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4098: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4080; /* 0x140E409A: jne 0x140e4080 */
L_140E409C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E409C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E40A5; /* 0x140E409E: jmp 0x140e40a5 */
L_140E40A0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E40A0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E40A2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E40A5:
    /* test eax, eax */ /* 0x140E40A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E40A7: je 0x140e472d */
L_140E40AD:
    edx = 0x1403F308u; /* 0x140E40AD: mov edx, 0x1403f308 */
    eax = ecx; /* 0x140E40B2: mov eax, ecx */
L_140E40B4:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E40B4: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E40B6: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E40D4; /* 0x140E40B8: jne 0x140e40d4 */
L_140E40BA:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E40BA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E40D0; /* 0x140E40BC: je 0x140e40d0 */
L_140E40BE:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E40BE: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E40C1: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E40D4; /* 0x140E40C4: jne 0x140e40d4 */
L_140E40C6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E40C6: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E40C9: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E40CC: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E40B4; /* 0x140E40CE: jne 0x140e40b4 */
L_140E40D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E40D0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E40D9; /* 0x140E40D2: jmp 0x140e40d9 */
L_140E40D4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E40D4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E40D6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E40D9:
    /* test eax, eax */ /* 0x140E40D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E40EB; /* 0x140E40DB: jne 0x140e40eb */
L_140E40DD:
    eax = 0x103u; /* 0x140E40DD: mov eax, 0x103 */
    edi = POP32_VAL(esp); /* 0x140E40E2: pop edi */
    esi = POP32_VAL(esp); /* 0x140E40E3: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E40E4: pop ebx */
    esp = ebp; /* 0x140E40E5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E40E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E40E8: ret 0xc */
L_140E40EB:
    PUSH32(esp, 0x1403F318u); /* 0x140E40EB: push 0x1403f318 */
    PUSH32(esp, ecx); /* 0x140E40F0: push ecx */
    RECOMP_ICALL(esi); /* 0x140E40F1: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E40F3: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140E40F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E40F8: jne 0x140e66b7 */
L_140E40FE:
    eax = 0x102u; /* 0x140E40FE: mov eax, 0x102 */
    edi = POP32_VAL(esp); /* 0x140E4103: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4104: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4105: pop ebx */
    esp = ebp; /* 0x140E4106: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4108: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4109: ret 0xc */
L_140E410C:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E410C: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4113: jne 0x140e66b7 */
L_140E4119:
    eax = 0x14037400u; /* 0x140E4119: mov eax, 0x14037400 */
    edi = edi; /* 0x140E411E: mov edi, edi */
L_140E4120:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4120: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4122: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4140; /* 0x140E4124: jne 0x140e4140 */
L_140E4126:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4126: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E413C; /* 0x140E4128: je 0x140e413c */
L_140E412A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E412A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E412D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4140; /* 0x140E4130: jne 0x140e4140 */
L_140E4132:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4132: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4135: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4138: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4120; /* 0x140E413A: jne 0x140e4120 */
L_140E413C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E413C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4145; /* 0x140E413E: jmp 0x140e4145 */
L_140E4140:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4140: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4142: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4145:
    /* test eax, eax */ /* 0x140E4145: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4147: jne 0x140e66b7 */
L_140E414D:
    edx = MEM32(ebp + 0xC); /* 0x140E414D: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x46u; /* 0x140E4150: mov dword ptr [edx], 0x46 */
    eax = 0x181u; /* 0x140E4156: mov eax, 0x181 */
    edi = POP32_VAL(esp); /* 0x140E415B: pop edi */
    esi = POP32_VAL(esp); /* 0x140E415C: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E415D: pop ebx */
    esp = ebp; /* 0x140E415E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4160: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4161: ret 0xc */
L_140E4164:
    eax = 0x14032F68u; /* 0x140E4164: mov eax, 0x14032f68 */
    esp = esp; /* 0x140E4169: lea esp, [esp] */
L_140E4170:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4170: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4172: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4190; /* 0x140E4174: jne 0x140e4190 */
L_140E4176:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4176: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E418C; /* 0x140E4178: je 0x140e418c */
L_140E417A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E417A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E417D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4190; /* 0x140E4180: jne 0x140e4190 */
L_140E4182:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4182: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4185: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4188: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4170; /* 0x140E418A: jne 0x140e4170 */
L_140E418C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E418C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4195; /* 0x140E418E: jmp 0x140e4195 */
L_140E4190:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4190: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4192: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4195:
    /* test eax, eax */ /* 0x140E4195: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4197: jne 0x140e66b7 */
L_140E419D:
    eax = 0x105u; /* 0x140E419D: mov eax, 0x105 */
    edi = POP32_VAL(esp); /* 0x140E41A2: pop edi */
    esi = POP32_VAL(esp); /* 0x140E41A3: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E41A4: pop ebx */
    esp = ebp; /* 0x140E41A5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E41A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E41A8: ret 0xc */
L_140E41AB:
    edx = 0x140340ECu; /* 0x140E41AB: mov edx, 0x140340ec */
    eax = ecx; /* 0x140E41B0: mov eax, ecx */
L_140E41B2:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E41B2: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E41B4: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E41D2; /* 0x140E41B6: jne 0x140e41d2 */
L_140E41B8:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E41B8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E41CE; /* 0x140E41BA: je 0x140e41ce */
L_140E41BC:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E41BC: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E41BF: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E41D2; /* 0x140E41C2: jne 0x140e41d2 */
L_140E41C4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E41C4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E41C7: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E41CA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E41B2; /* 0x140E41CC: jne 0x140e41b2 */
L_140E41CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E41CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E41D7; /* 0x140E41D0: jmp 0x140e41d7 */
L_140E41D2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E41D2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E41D4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E41D7:
    /* test eax, eax */ /* 0x140E41D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E41E9; /* 0x140E41D9: jne 0x140e41e9 */
L_140E41DB:
    eax = 0x104u; /* 0x140E41DB: mov eax, 0x104 */
    edi = POP32_VAL(esp); /* 0x140E41E0: pop edi */
    esi = POP32_VAL(esp); /* 0x140E41E1: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E41E2: pop ebx */
    esp = ebp; /* 0x140E41E3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E41E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E41E6: ret 0xc */
L_140E41E9:
    edx = 0x14033FA4u; /* 0x140E41E9: mov edx, 0x14033fa4 */
    eax = ecx; /* 0x140E41EE: mov eax, ecx */
L_140E41F0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E41F0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E41F2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4210; /* 0x140E41F4: jne 0x140e4210 */
L_140E41F6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E41F6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E420C; /* 0x140E41F8: je 0x140e420c */
L_140E41FA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E41FA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E41FD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4210; /* 0x140E4200: jne 0x140e4210 */
L_140E4202:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4202: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4205: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4208: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E41F0; /* 0x140E420A: jne 0x140e41f0 */
L_140E420C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E420C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4215; /* 0x140E420E: jmp 0x140e4215 */
L_140E4210:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4210: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4212: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4215:
    /* test eax, eax */ /* 0x140E4215: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4230; /* 0x140E4217: jne 0x140e4230 */
L_140E4219:
    edx = MEM32(ebp + 0xC); /* 0x140E4219: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x26u; /* 0x140E421C: mov dword ptr [edx], 0x26 */
    eax = 0x180u; /* 0x140E4222: mov eax, 0x180 */
    edi = POP32_VAL(esp); /* 0x140E4227: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4228: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4229: pop ebx */
    esp = ebp; /* 0x140E422A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E422C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E422D: ret 0xc */
L_140E4230:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E4230: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4237: jne 0x140e66b7 */
L_140E423D:
    eax = 0x140373B0u; /* 0x140E423D: mov eax, 0x140373b0 */
L_140E4242:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4242: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4244: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4262; /* 0x140E4246: jne 0x140e4262 */
L_140E4248:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4248: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E425E; /* 0x140E424A: je 0x140e425e */
L_140E424C:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E424C: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E424F: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4262; /* 0x140E4252: jne 0x140e4262 */
L_140E4254:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4254: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4257: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E425A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4242; /* 0x140E425C: jne 0x140e4242 */
L_140E425E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E425E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4267; /* 0x140E4260: jmp 0x140e4267 */
L_140E4262:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4262: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4264: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4267:
    /* test eax, eax */ /* 0x140E4267: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4269: jne 0x140e66b7 */
L_140E426F:
    edx = MEM32(ebp + 0xC); /* 0x140E426F: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x40u; /* 0x140E4272: mov dword ptr [edx], 0x40 */
    eax = 0x182u; /* 0x140E4278: mov eax, 0x182 */
    edi = POP32_VAL(esp); /* 0x140E427D: pop edi */
    esi = POP32_VAL(esp); /* 0x140E427E: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E427F: pop ebx */
    esp = ebp; /* 0x140E4280: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4282: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4283: ret 0xc */
L_140E4286:
    edx = 0x1403F31Cu; /* 0x140E4286: mov edx, 0x1403f31c */
    eax = ecx; /* 0x140E428B: mov eax, ecx */
    ecx = ecx; /* 0x140E428D: lea ecx, [ecx] */
L_140E4290:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4290: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4292: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E42B0; /* 0x140E4294: jne 0x140e42b0 */
L_140E4296:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4296: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E42AC; /* 0x140E4298: je 0x140e42ac */
L_140E429A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E429A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E429D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E42B0; /* 0x140E42A0: jne 0x140e42b0 */
L_140E42A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E42A2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E42A5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E42A8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4290; /* 0x140E42AA: jne 0x140e4290 */
L_140E42AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E42AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E42B5; /* 0x140E42AE: jmp 0x140e42b5 */
L_140E42B0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E42B0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E42B2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E42B5:
    /* test eax, eax */ /* 0x140E42B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E42C7; /* 0x140E42B7: jne 0x140e42c7 */
L_140E42B9:
    eax = 0x106u; /* 0x140E42B9: mov eax, 0x106 */
    edi = POP32_VAL(esp); /* 0x140E42BE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E42BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E42C0: pop ebx */
    esp = ebp; /* 0x140E42C1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E42C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E42C4: ret 0xc */
L_140E42C7:
    edx = 0x1403F324u; /* 0x140E42C7: mov edx, 0x1403f324 */
    eax = ecx; /* 0x140E42CC: mov eax, ecx */
    edi = edi; /* 0x140E42CE: mov edi, edi */
L_140E42D0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E42D0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E42D2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E42F0; /* 0x140E42D4: jne 0x140e42f0 */
L_140E42D6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E42D6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E42EC; /* 0x140E42D8: je 0x140e42ec */
L_140E42DA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E42DA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E42DD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E42F0; /* 0x140E42E0: jne 0x140e42f0 */
L_140E42E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E42E2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E42E5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E42E8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E42D0; /* 0x140E42EA: jne 0x140e42d0 */
L_140E42EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E42EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E42F5; /* 0x140E42EE: jmp 0x140e42f5 */
L_140E42F0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E42F0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E42F2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E42F5:
    /* test eax, eax */ /* 0x140E42F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E42F7: je 0x140e472d */
L_140E42FD:
    edx = 0x14034260u; /* 0x140E42FD: mov edx, 0x14034260 */
    eax = ecx; /* 0x140E4302: mov eax, ecx */
L_140E4304:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4304: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4306: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4324; /* 0x140E4308: jne 0x140e4324 */
L_140E430A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E430A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4320; /* 0x140E430C: je 0x140e4320 */
L_140E430E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E430E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4311: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4324; /* 0x140E4314: jne 0x140e4324 */
L_140E4316:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4316: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4319: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E431C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4304; /* 0x140E431E: jne 0x140e4304 */
L_140E4320:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4320: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4329; /* 0x140E4322: jmp 0x140e4329 */
L_140E4324:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4324: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4326: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4329:
    /* test eax, eax */ /* 0x140E4329: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E433B; /* 0x140E432B: jne 0x140e433b */
L_140E432D:
    eax = 0x107u; /* 0x140E432D: mov eax, 0x107 */
    edi = POP32_VAL(esp); /* 0x140E4332: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4333: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4334: pop ebx */
    esp = ebp; /* 0x140E4335: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4337: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4338: ret 0xc */
L_140E433B:
    edx = 0x1403F32Cu; /* 0x140E433B: mov edx, 0x1403f32c */
    eax = ecx; /* 0x140E4340: mov eax, ecx */
L_140E4342:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4342: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4344: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4362; /* 0x140E4346: jne 0x140e4362 */
L_140E4348:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4348: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E435E; /* 0x140E434A: je 0x140e435e */
L_140E434C:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E434C: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E434F: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4362; /* 0x140E4352: jne 0x140e4362 */
L_140E4354:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4354: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4357: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E435A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4342; /* 0x140E435C: jne 0x140e4342 */
L_140E435E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E435E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4367; /* 0x140E4360: jmp 0x140e4367 */
L_140E4362:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4362: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4364: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4367:
    /* test eax, eax */ /* 0x140E4367: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4379; /* 0x140E4369: jne 0x140e4379 */
L_140E436B:
    eax = 0x109u; /* 0x140E436B: mov eax, 0x109 */
    edi = POP32_VAL(esp); /* 0x140E4370: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4371: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4372: pop ebx */
    esp = ebp; /* 0x140E4373: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4375: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4376: ret 0xc */
L_140E4379:
    edx = 0x14033910u; /* 0x140E4379: mov edx, 0x14033910 */
    eax = ecx; /* 0x140E437E: mov eax, ecx */
L_140E4380:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4380: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4382: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E43A0; /* 0x140E4384: jne 0x140e43a0 */
L_140E4386:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4386: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E439C; /* 0x140E4388: je 0x140e439c */
L_140E438A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E438A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E438D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E43A0; /* 0x140E4390: jne 0x140e43a0 */
L_140E4392:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4392: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4395: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4398: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4380; /* 0x140E439A: jne 0x140e4380 */
L_140E439C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E439C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E43A5; /* 0x140E439E: jmp 0x140e43a5 */
L_140E43A0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E43A0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E43A2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E43A5:
    /* test eax, eax */ /* 0x140E43A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E43B7; /* 0x140E43A7: jne 0x140e43b7 */
L_140E43A9:
    eax = 0x108u; /* 0x140E43A9: mov eax, 0x108 */
    edi = POP32_VAL(esp); /* 0x140E43AE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E43AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E43B0: pop ebx */
    esp = ebp; /* 0x140E43B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E43B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E43B4: ret 0xc */
L_140E43B7:
    edx = 0x1403F334u; /* 0x140E43B7: mov edx, 0x1403f334 */
    eax = ecx; /* 0x140E43BC: mov eax, ecx */
    edi = edi; /* 0x140E43BE: mov edi, edi */
L_140E43C0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E43C0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E43C2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E43E0; /* 0x140E43C4: jne 0x140e43e0 */
L_140E43C6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E43C6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E43DC; /* 0x140E43C8: je 0x140e43dc */
L_140E43CA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E43CA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E43CD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E43E0; /* 0x140E43D0: jne 0x140e43e0 */
L_140E43D2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E43D2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E43D5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E43D8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E43C0; /* 0x140E43DA: jne 0x140e43c0 */
L_140E43DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E43DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E43E5; /* 0x140E43DE: jmp 0x140e43e5 */
L_140E43E0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E43E0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E43E2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E43E5:
    /* test eax, eax */ /* 0x140E43E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E43F7; /* 0x140E43E7: jne 0x140e43f7 */
L_140E43E9:
    eax = 0x10Au; /* 0x140E43E9: mov eax, 0x10a */
    edi = POP32_VAL(esp); /* 0x140E43EE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E43EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E43F0: pop ebx */
    esp = ebp; /* 0x140E43F1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E43F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E43F4: ret 0xc */
L_140E43F7:
    edx = 0x1403F344u; /* 0x140E43F7: mov edx, 0x1403f344 */
    eax = ecx; /* 0x140E43FC: mov eax, ecx */
    edi = edi; /* 0x140E43FE: mov edi, edi */
L_140E4400:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4400: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4402: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4420; /* 0x140E4404: jne 0x140e4420 */
L_140E4406:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4406: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E441C; /* 0x140E4408: je 0x140e441c */
L_140E440A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E440A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E440D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4420; /* 0x140E4410: jne 0x140e4420 */
L_140E4412:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4412: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4415: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4418: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4400; /* 0x140E441A: jne 0x140e4400 */
L_140E441C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E441C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4425; /* 0x140E441E: jmp 0x140e4425 */
L_140E4420:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4420: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4422: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4425:
    /* test eax, eax */ /* 0x140E4425: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4437; /* 0x140E4427: jne 0x140e4437 */
L_140E4429:
    eax = 0x10Bu; /* 0x140E4429: mov eax, 0x10b */
    edi = POP32_VAL(esp); /* 0x140E442E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E442F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4430: pop ebx */
    esp = ebp; /* 0x140E4431: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4433: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4434: ret 0xc */
L_140E4437:
    edx = 0x1403F34Cu; /* 0x140E4437: mov edx, 0x1403f34c */
    eax = ecx; /* 0x140E443C: mov eax, ecx */
    edi = edi; /* 0x140E443E: mov edi, edi */
L_140E4440:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4440: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4442: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4460; /* 0x140E4444: jne 0x140e4460 */
L_140E4446:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4446: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E445C; /* 0x140E4448: je 0x140e445c */
L_140E444A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E444A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E444D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4460; /* 0x140E4450: jne 0x140e4460 */
L_140E4452:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4452: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4455: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4458: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4440; /* 0x140E445A: jne 0x140e4440 */
L_140E445C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E445C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4465; /* 0x140E445E: jmp 0x140e4465 */
L_140E4460:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4460: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4462: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4465:
    /* test eax, eax */ /* 0x140E4465: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4477; /* 0x140E4467: jne 0x140e4477 */
L_140E4469:
    eax = 0x10Du; /* 0x140E4469: mov eax, 0x10d */
    edi = POP32_VAL(esp); /* 0x140E446E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E446F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4470: pop ebx */
    esp = ebp; /* 0x140E4471: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4473: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4474: ret 0xc */
L_140E4477:
    edx = 0x1403F360u; /* 0x140E4477: mov edx, 0x1403f360 */
    eax = ecx; /* 0x140E447C: mov eax, ecx */
    edi = edi; /* 0x140E447E: mov edi, edi */
L_140E4480:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4480: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4482: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E44A0; /* 0x140E4484: jne 0x140e44a0 */
L_140E4486:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4486: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E449C; /* 0x140E4488: je 0x140e449c */
L_140E448A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E448A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E448D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E44A0; /* 0x140E4490: jne 0x140e44a0 */
L_140E4492:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4492: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4495: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4498: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4480; /* 0x140E449A: jne 0x140e4480 */
L_140E449C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E449C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E44A5; /* 0x140E449E: jmp 0x140e44a5 */
L_140E44A0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E44A0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E44A2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E44A5:
    /* test eax, eax */ /* 0x140E44A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E44B7; /* 0x140E44A7: jne 0x140e44b7 */
L_140E44A9:
    eax = 0x10Fu; /* 0x140E44A9: mov eax, 0x10f */
    edi = POP32_VAL(esp); /* 0x140E44AE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E44AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E44B0: pop ebx */
    esp = ebp; /* 0x140E44B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E44B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E44B4: ret 0xc */
L_140E44B7:
    edx = 0x1403F368u; /* 0x140E44B7: mov edx, 0x1403f368 */
    eax = ecx; /* 0x140E44BC: mov eax, ecx */
    edi = edi; /* 0x140E44BE: mov edi, edi */
L_140E44C0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E44C0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E44C2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E44E0; /* 0x140E44C4: jne 0x140e44e0 */
L_140E44C6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E44C6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E44DC; /* 0x140E44C8: je 0x140e44dc */
L_140E44CA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E44CA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E44CD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E44E0; /* 0x140E44D0: jne 0x140e44e0 */
L_140E44D2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E44D2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E44D5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E44D8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E44C0; /* 0x140E44DA: jne 0x140e44c0 */
L_140E44DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E44DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E44E5; /* 0x140E44DE: jmp 0x140e44e5 */
L_140E44E0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E44E0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E44E2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E44E5:
    /* test eax, eax */ /* 0x140E44E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E44E7: je 0x140e472d */
L_140E44ED:
    eax = 0x1403F374u; /* 0x140E44ED: mov eax, 0x1403f374 */
L_140E44F2:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E44F2: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E44F4: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4512; /* 0x140E44F6: jne 0x140e4512 */
L_140E44F8:
    /* test LO8(edx), LO8(edx) */ /* 0x140E44F8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E450E; /* 0x140E44FA: je 0x140e450e */
L_140E44FC:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E44FC: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E44FF: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4512; /* 0x140E4502: jne 0x140e4512 */
L_140E4504:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4504: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4507: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E450A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E44F2; /* 0x140E450C: jne 0x140e44f2 */
L_140E450E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E450E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4517; /* 0x140E4510: jmp 0x140e4517 */
L_140E4512:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4512: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4514: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4517:
    /* test eax, eax */ /* 0x140E4517: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4519: jne 0x140e66b7 */
L_140E451F:
    eax = 0x111u; /* 0x140E451F: mov eax, 0x111 */
    edi = POP32_VAL(esp); /* 0x140E4524: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4525: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4526: pop ebx */
    esp = ebp; /* 0x140E4527: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4529: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E452A: ret 0xc */
L_140E452D:
    edx = 0x1403F380u; /* 0x140E452D: mov edx, 0x1403f380 */
    eax = ecx; /* 0x140E4532: mov eax, ecx */
L_140E4534:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4534: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4536: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4554; /* 0x140E4538: jne 0x140e4554 */
L_140E453A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E453A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4550; /* 0x140E453C: je 0x140e4550 */
L_140E453E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E453E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4541: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4554; /* 0x140E4544: jne 0x140e4554 */
L_140E4546:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4546: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4549: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E454C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4534; /* 0x140E454E: jne 0x140e4534 */
L_140E4550:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4550: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4559; /* 0x140E4552: jmp 0x140e4559 */
L_140E4554:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4554: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4556: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4559:
    /* test eax, eax */ /* 0x140E4559: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E456B; /* 0x140E455B: jne 0x140e456b */
L_140E455D:
    eax = 0x10Cu; /* 0x140E455D: mov eax, 0x10c */
    edi = POP32_VAL(esp); /* 0x140E4562: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4563: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4564: pop ebx */
    esp = ebp; /* 0x140E4565: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4567: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4568: ret 0xc */
L_140E456B:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E456B: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4572: jne 0x140e66b7 */
L_140E4578:
    edx = 0x1403414Cu; /* 0x140E4578: mov edx, 0x1403414c */
    eax = ecx; /* 0x140E457D: mov eax, ecx */
    /* nop */ /* 0x140E457F: nop  */
L_140E4580:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4580: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4582: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E45A0; /* 0x140E4584: jne 0x140e45a0 */
L_140E4586:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4586: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E459C; /* 0x140E4588: je 0x140e459c */
L_140E458A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E458A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E458D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E45A0; /* 0x140E4590: jne 0x140e45a0 */
L_140E4592:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4592: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4595: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4598: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4580; /* 0x140E459A: jne 0x140e4580 */
L_140E459C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E459C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E45A5; /* 0x140E459E: jmp 0x140e45a5 */
L_140E45A0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E45A0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E45A2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E45A5:
    /* test eax, eax */ /* 0x140E45A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E45B7; /* 0x140E45A7: jne 0x140e45b7 */
L_140E45A9:
    eax = 0x10Eu; /* 0x140E45A9: mov eax, 0x10e */
    edi = POP32_VAL(esp); /* 0x140E45AE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E45AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E45B0: pop ebx */
    esp = ebp; /* 0x140E45B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E45B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E45B4: ret 0xc */
L_140E45B7:
    eax = 0x14037418u; /* 0x140E45B7: mov eax, 0x14037418 */
    esp = esp; /* 0x140E45BC: lea esp, [esp] */
L_140E45C0:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E45C0: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E45C2: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E45E0; /* 0x140E45C4: jne 0x140e45e0 */
L_140E45C6:
    /* test LO8(edx), LO8(edx) */ /* 0x140E45C6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E45DC; /* 0x140E45C8: je 0x140e45dc */
L_140E45CA:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E45CA: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E45CD: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E45E0; /* 0x140E45D0: jne 0x140e45e0 */
L_140E45D2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E45D2: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E45D5: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E45D8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E45C0; /* 0x140E45DA: jne 0x140e45c0 */
L_140E45DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E45DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E45E5; /* 0x140E45DE: jmp 0x140e45e5 */
L_140E45E0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E45E0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E45E2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E45E5:
    /* test eax, eax */ /* 0x140E45E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E45E7: jne 0x140e66b7 */
L_140E45ED:
    edx = MEM32(ebp + 0xC); /* 0x140E45ED: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x47u; /* 0x140E45F0: mov dword ptr [edx], 0x47 */
    eax = 0x181u; /* 0x140E45F6: mov eax, 0x181 */
    edi = POP32_VAL(esp); /* 0x140E45FB: pop edi */
    esi = POP32_VAL(esp); /* 0x140E45FC: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E45FD: pop ebx */
    esp = ebp; /* 0x140E45FE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4600: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4601: ret 0xc */
L_140E4604:
    edx = 0x1403F390u; /* 0x140E4604: mov edx, 0x1403f390 */
    eax = ecx; /* 0x140E4609: mov eax, ecx */
    goto L_140E4610; /* 0x140E460B: jmp 0x140e4610 */
L_140E4610:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4610: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4612: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4630; /* 0x140E4614: jne 0x140e4630 */
L_140E4616:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4616: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E462C; /* 0x140E4618: je 0x140e462c */
L_140E461A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E461A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E461D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4630; /* 0x140E4620: jne 0x140e4630 */
L_140E4622:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4622: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4625: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4628: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4610; /* 0x140E462A: jne 0x140e4610 */
L_140E462C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E462C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4635; /* 0x140E462E: jmp 0x140e4635 */
L_140E4630:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4630: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4632: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4635:
    /* test eax, eax */ /* 0x140E4635: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4647; /* 0x140E4637: jne 0x140e4647 */
L_140E4639:
    eax = 0x113u; /* 0x140E4639: mov eax, 0x113 */
    edi = POP32_VAL(esp); /* 0x140E463E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E463F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4640: pop ebx */
    esp = ebp; /* 0x140E4641: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4643: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4644: ret 0xc */
L_140E4647:
    edx = 0x1403F398u; /* 0x140E4647: mov edx, 0x1403f398 */
    eax = ecx; /* 0x140E464C: mov eax, ecx */
    edi = edi; /* 0x140E464E: mov edi, edi */
L_140E4650:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4650: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4652: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4670; /* 0x140E4654: jne 0x140e4670 */
L_140E4656:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4656: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E466C; /* 0x140E4658: je 0x140e466c */
L_140E465A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E465A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E465D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4670; /* 0x140E4660: jne 0x140e4670 */
L_140E4662:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4662: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4665: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4668: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4650; /* 0x140E466A: jne 0x140e4650 */
L_140E466C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E466C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4675; /* 0x140E466E: jmp 0x140e4675 */
L_140E4670:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4670: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4672: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4675:
    /* test eax, eax */ /* 0x140E4675: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E4677: je 0x140e472d */
L_140E467D:
    edx = 0x1403F3A0u; /* 0x140E467D: mov edx, 0x1403f3a0 */
    eax = ecx; /* 0x140E4682: mov eax, ecx */
L_140E4684:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4684: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4686: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E46A4; /* 0x140E4688: jne 0x140e46a4 */
L_140E468A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E468A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E46A0; /* 0x140E468C: je 0x140e46a0 */
L_140E468E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E468E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4691: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E46A4; /* 0x140E4694: jne 0x140e46a4 */
L_140E4696:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4696: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4699: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E469C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4684; /* 0x140E469E: jne 0x140e4684 */
L_140E46A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E46A0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E46A9; /* 0x140E46A2: jmp 0x140e46a9 */
L_140E46A4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E46A4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E46A6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E46A9:
    /* test eax, eax */ /* 0x140E46A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E46BB; /* 0x140E46AB: jne 0x140e46bb */
L_140E46AD:
    eax = 0x116u; /* 0x140E46AD: mov eax, 0x116 */
    edi = POP32_VAL(esp); /* 0x140E46B2: pop edi */
    esi = POP32_VAL(esp); /* 0x140E46B3: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E46B4: pop ebx */
    esp = ebp; /* 0x140E46B5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E46B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E46B8: ret 0xc */
L_140E46BB:
    edx = 0x1403F3A8u; /* 0x140E46BB: mov edx, 0x1403f3a8 */
    eax = ecx; /* 0x140E46C0: mov eax, ecx */
L_140E46C2:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E46C2: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E46C4: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E46E2; /* 0x140E46C6: jne 0x140e46e2 */
L_140E46C8:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E46C8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E46DE; /* 0x140E46CA: je 0x140e46de */
L_140E46CC:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E46CC: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E46CF: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E46E2; /* 0x140E46D2: jne 0x140e46e2 */
L_140E46D4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E46D4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E46D7: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E46DA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E46C2; /* 0x140E46DC: jne 0x140e46c2 */
L_140E46DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E46DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E46E7; /* 0x140E46E0: jmp 0x140e46e7 */
L_140E46E2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E46E2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E46E4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E46E7:
    /* test eax, eax */ /* 0x140E46E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E46F9; /* 0x140E46E9: jne 0x140e46f9 */
L_140E46EB:
    eax = 0x117u; /* 0x140E46EB: mov eax, 0x117 */
    edi = POP32_VAL(esp); /* 0x140E46F0: pop edi */
    esi = POP32_VAL(esp); /* 0x140E46F1: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E46F2: pop ebx */
    esp = ebp; /* 0x140E46F3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E46F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E46F6: ret 0xc */
L_140E46F9:
    eax = 0x1403F3ACu; /* 0x140E46F9: mov eax, 0x1403f3ac */
    edi = edi; /* 0x140E46FE: mov edi, edi */
L_140E4700:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4700: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4702: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4720; /* 0x140E4704: jne 0x140e4720 */
L_140E4706:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4706: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E471C; /* 0x140E4708: je 0x140e471c */
L_140E470A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E470A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E470D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4720; /* 0x140E4710: jne 0x140e4720 */
L_140E4712:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4712: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4715: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4718: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4700; /* 0x140E471A: jne 0x140e4700 */
L_140E471C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E471C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4725; /* 0x140E471E: jmp 0x140e4725 */
L_140E4720:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4720: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4722: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4725:
    /* test eax, eax */ /* 0x140E4725: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4727: jne 0x140e66b7 */
L_140E472D:
    eax = 0x183u; /* 0x140E472D: mov eax, 0x183 */
    edi = POP32_VAL(esp); /* 0x140E4732: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4733: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4734: pop ebx */
    esp = ebp; /* 0x140E4735: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4737: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4738: ret 0xc */
L_140E473B:
    edx = 0x140340D8u; /* 0x140E473B: mov edx, 0x140340d8 */
    eax = ecx; /* 0x140E4740: mov eax, ecx */
L_140E4742:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4742: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4744: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4762; /* 0x140E4746: jne 0x140e4762 */
L_140E4748:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4748: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E475E; /* 0x140E474A: je 0x140e475e */
L_140E474C:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E474C: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E474F: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4762; /* 0x140E4752: jne 0x140e4762 */
L_140E4754:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4754: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4757: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E475A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4742; /* 0x140E475C: jne 0x140e4742 */
L_140E475E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E475E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4767; /* 0x140E4760: jmp 0x140e4767 */
L_140E4762:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4762: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4764: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4767:
    /* test eax, eax */ /* 0x140E4767: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4779; /* 0x140E4769: jne 0x140e4779 */
L_140E476B:
    eax = 0x114u; /* 0x140E476B: mov eax, 0x114 */
    edi = POP32_VAL(esp); /* 0x140E4770: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4771: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4772: pop ebx */
    esp = ebp; /* 0x140E4773: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4775: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4776: ret 0xc */
L_140E4779:
    edx = 0x1403410Cu; /* 0x140E4779: mov edx, 0x1403410c */
    eax = ecx; /* 0x140E477E: mov eax, ecx */
L_140E4780:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4780: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4782: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E47A0; /* 0x140E4784: jne 0x140e47a0 */
L_140E4786:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4786: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E479C; /* 0x140E4788: je 0x140e479c */
L_140E478A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E478A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E478D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E47A0; /* 0x140E4790: jne 0x140e47a0 */
L_140E4792:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4792: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4795: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4798: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4780; /* 0x140E479A: jne 0x140e4780 */
L_140E479C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E479C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E47A5; /* 0x140E479E: jmp 0x140e47a5 */
L_140E47A0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E47A0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E47A2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E47A5:
    /* test eax, eax */ /* 0x140E47A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E47B7; /* 0x140E47A7: jne 0x140e47b7 */
L_140E47A9:
    eax = 0x115u; /* 0x140E47A9: mov eax, 0x115 */
    edi = POP32_VAL(esp); /* 0x140E47AE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E47AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E47B0: pop ebx */
    esp = ebp; /* 0x140E47B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E47B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E47B4: ret 0xc */
L_140E47B7:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E47B7: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E47BE: jne 0x140e66b7 */
L_140E47C4:
    eax = 0x140340B8u; /* 0x140E47C4: mov eax, 0x140340b8 */
    esp = esp; /* 0x140E47C9: lea esp, [esp] */
L_140E47D0:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E47D0: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E47D2: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E47F0; /* 0x140E47D4: jne 0x140e47f0 */
L_140E47D6:
    /* test LO8(edx), LO8(edx) */ /* 0x140E47D6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E47EC; /* 0x140E47D8: je 0x140e47ec */
L_140E47DA:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E47DA: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E47DD: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E47F0; /* 0x140E47E0: jne 0x140e47f0 */
L_140E47E2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E47E2: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E47E5: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E47E8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E47D0; /* 0x140E47EA: jne 0x140e47d0 */
L_140E47EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E47EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E47F5; /* 0x140E47EE: jmp 0x140e47f5 */
L_140E47F0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E47F0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E47F2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E47F5:
    /* test eax, eax */ /* 0x140E47F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E47F7: jne 0x140e66b7 */
L_140E47FD:
    eax = 0x118u; /* 0x140E47FD: mov eax, 0x118 */
    edi = POP32_VAL(esp); /* 0x140E4802: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4803: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4804: pop ebx */
    esp = ebp; /* 0x140E4805: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4807: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4808: ret 0xc */
L_140E480B:
    edx = 0x14032F78u; /* 0x140E480B: mov edx, 0x14032f78 */
    eax = ecx; /* 0x140E4810: mov eax, ecx */
L_140E4812:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4812: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4814: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4832; /* 0x140E4816: jne 0x140e4832 */
L_140E4818:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4818: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E482E; /* 0x140E481A: je 0x140e482e */
L_140E481C:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E481C: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E481F: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4832; /* 0x140E4822: jne 0x140e4832 */
L_140E4824:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4824: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4827: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E482A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4812; /* 0x140E482C: jne 0x140e4812 */
L_140E482E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E482E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4837; /* 0x140E4830: jmp 0x140e4837 */
L_140E4832:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4832: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4834: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4837:
    /* test eax, eax */ /* 0x140E4837: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4849; /* 0x140E4839: jne 0x140e4849 */
L_140E483B:
    eax = 0x119u; /* 0x140E483B: mov eax, 0x119 */
    edi = POP32_VAL(esp); /* 0x140E4840: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4841: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4842: pop ebx */
    esp = ebp; /* 0x140E4843: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4845: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4846: ret 0xc */
L_140E4849:
    edx = 0x1403F3BCu; /* 0x140E4849: mov edx, 0x1403f3bc */
    eax = ecx; /* 0x140E484E: mov eax, ecx */
L_140E4850:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4850: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4852: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4870; /* 0x140E4854: jne 0x140e4870 */
L_140E4856:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4856: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E486C; /* 0x140E4858: je 0x140e486c */
L_140E485A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E485A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E485D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4870; /* 0x140E4860: jne 0x140e4870 */
L_140E4862:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4862: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4865: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4868: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4850; /* 0x140E486A: jne 0x140e4850 */
L_140E486C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E486C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4875; /* 0x140E486E: jmp 0x140e4875 */
L_140E4870:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4870: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4872: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4875:
    /* test eax, eax */ /* 0x140E4875: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E4877: je 0x140e472d */
L_140E487D:
    edx = 0x1403F3C4u; /* 0x140E487D: mov edx, 0x1403f3c4 */
    eax = ecx; /* 0x140E4882: mov eax, ecx */
L_140E4884:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4884: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4886: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E48A4; /* 0x140E4888: jne 0x140e48a4 */
L_140E488A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E488A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E48A0; /* 0x140E488C: je 0x140e48a0 */
L_140E488E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E488E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4891: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E48A4; /* 0x140E4894: jne 0x140e48a4 */
L_140E4896:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4896: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4899: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E489C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4884; /* 0x140E489E: jne 0x140e4884 */
L_140E48A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E48A0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E48A9; /* 0x140E48A2: jmp 0x140e48a9 */
L_140E48A4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E48A4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E48A6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E48A9:
    /* test eax, eax */ /* 0x140E48A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E48AB: je 0x140e472d */
L_140E48B1:
    eax = 0x1403F3D0u; /* 0x140E48B1: mov eax, 0x1403f3d0 */
L_140E48B6:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E48B6: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E48B8: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E48D6; /* 0x140E48BA: jne 0x140e48d6 */
L_140E48BC:
    /* test LO8(edx), LO8(edx) */ /* 0x140E48BC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E48D2; /* 0x140E48BE: je 0x140e48d2 */
L_140E48C0:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E48C0: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E48C3: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E48D6; /* 0x140E48C6: jne 0x140e48d6 */
L_140E48C8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E48C8: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E48CB: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E48CE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E48B6; /* 0x140E48D0: jne 0x140e48b6 */
L_140E48D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E48D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E48DB; /* 0x140E48D4: jmp 0x140e48db */
L_140E48D6:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E48D6: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E48D8: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E48DB:
    /* test eax, eax */ /* 0x140E48DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E48DD: jne 0x140e66b7 */
L_140E48E3:
    eax = 0x11Au; /* 0x140E48E3: mov eax, 0x11a */
    edi = POP32_VAL(esp); /* 0x140E48E8: pop edi */
    esi = POP32_VAL(esp); /* 0x140E48E9: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E48EA: pop ebx */
    esp = ebp; /* 0x140E48EB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E48ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E48EE: ret 0xc */
L_140E48F1:
    edx = 0x14033630u; /* 0x140E48F1: mov edx, 0x14033630 */
    eax = ecx; /* 0x140E48F6: mov eax, ecx */
L_140E48F8:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E48F8: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E48FA: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4918; /* 0x140E48FC: jne 0x140e4918 */
L_140E48FE:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E48FE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4914; /* 0x140E4900: je 0x140e4914 */
L_140E4902:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E4902: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4905: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4918; /* 0x140E4908: jne 0x140e4918 */
L_140E490A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E490A: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E490D: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4910: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E48F8; /* 0x140E4912: jne 0x140e48f8 */
L_140E4914:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4914: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E491D; /* 0x140E4916: jmp 0x140e491d */
L_140E4918:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4918: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E491A: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E491D:
    /* test eax, eax */ /* 0x140E491D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E492F; /* 0x140E491F: jne 0x140e492f */
L_140E4921:
    eax = 0x11Bu; /* 0x140E4921: mov eax, 0x11b */
    edi = POP32_VAL(esp); /* 0x140E4926: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4927: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4928: pop ebx */
    esp = ebp; /* 0x140E4929: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E492B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E492C: ret 0xc */
L_140E492F:
    edx = 0x1403F3D8u; /* 0x140E492F: mov edx, 0x1403f3d8 */
    eax = ecx; /* 0x140E4934: mov eax, ecx */
L_140E4936:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4936: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4938: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4956; /* 0x140E493A: jne 0x140e4956 */
L_140E493C:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E493C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4952; /* 0x140E493E: je 0x140e4952 */
L_140E4940:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E4940: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4943: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4956; /* 0x140E4946: jne 0x140e4956 */
L_140E4948:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4948: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E494B: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E494E: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4936; /* 0x140E4950: jne 0x140e4936 */
L_140E4952:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4952: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E495B; /* 0x140E4954: jmp 0x140e495b */
L_140E4956:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4956: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4958: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E495B:
    /* test eax, eax */ /* 0x140E495B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E496D; /* 0x140E495D: jne 0x140e496d */
L_140E495F:
    eax = 0x11Cu; /* 0x140E495F: mov eax, 0x11c */
    edi = POP32_VAL(esp); /* 0x140E4964: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4965: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4966: pop ebx */
    esp = ebp; /* 0x140E4967: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4969: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E496A: ret 0xc */
L_140E496D:
    edx = 0x1403F3DCu; /* 0x140E496D: mov edx, 0x1403f3dc */
    eax = ecx; /* 0x140E4972: mov eax, ecx */
L_140E4974:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4974: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4976: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4994; /* 0x140E4978: jne 0x140e4994 */
L_140E497A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E497A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4990; /* 0x140E497C: je 0x140e4990 */
L_140E497E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E497E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4981: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4994; /* 0x140E4984: jne 0x140e4994 */
L_140E4986:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4986: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4989: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E498C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4974; /* 0x140E498E: jne 0x140e4974 */
L_140E4990:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4990: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4999; /* 0x140E4992: jmp 0x140e4999 */
L_140E4994:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4994: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4996: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4999:
    /* test eax, eax */ /* 0x140E4999: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E499B: je 0x140e472d */
L_140E49A1:
    eax = 0x14036D98u; /* 0x140E49A1: mov eax, 0x14036d98 */
L_140E49A6:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E49A6: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E49A8: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E49C6; /* 0x140E49AA: jne 0x140e49c6 */
L_140E49AC:
    /* test LO8(edx), LO8(edx) */ /* 0x140E49AC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E49C2; /* 0x140E49AE: je 0x140e49c2 */
L_140E49B0:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E49B0: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E49B3: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E49C6; /* 0x140E49B6: jne 0x140e49c6 */
L_140E49B8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E49B8: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E49BB: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E49BE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E49A6; /* 0x140E49C0: jne 0x140e49a6 */
L_140E49C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E49C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E49CB; /* 0x140E49C4: jmp 0x140e49cb */
L_140E49C6:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E49C6: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E49C8: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E49CB:
    /* test eax, eax */ /* 0x140E49CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E49CD: jne 0x140e66b7 */
L_140E49D3:
    eax = 0x11Du; /* 0x140E49D3: mov eax, 0x11d */
    edi = POP32_VAL(esp); /* 0x140E49D8: pop edi */
    esi = POP32_VAL(esp); /* 0x140E49D9: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E49DA: pop ebx */
    esp = ebp; /* 0x140E49DB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E49DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E49DE: ret 0xc */
L_140E49E1:
    edx = 0x1403F3E4u; /* 0x140E49E1: mov edx, 0x1403f3e4 */
    eax = ecx; /* 0x140E49E6: mov eax, ecx */
L_140E49E8:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E49E8: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E49EA: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4A08; /* 0x140E49EC: jne 0x140e4a08 */
L_140E49EE:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E49EE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4A04; /* 0x140E49F0: je 0x140e4a04 */
L_140E49F2:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E49F2: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E49F5: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4A08; /* 0x140E49F8: jne 0x140e4a08 */
L_140E49FA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E49FA: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E49FD: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4A00: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E49E8; /* 0x140E4A02: jne 0x140e49e8 */
L_140E4A04:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4A04: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4A0D; /* 0x140E4A06: jmp 0x140e4a0d */
L_140E4A08:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4A08: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4A0A: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4A0D:
    /* test eax, eax */ /* 0x140E4A0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E4A0F: je 0x140e472d */
L_140E4A15:
    eax = 0x1403F3ECu; /* 0x140E4A15: mov eax, 0x1403f3ec */
    ebx = ebx; /* 0x140E4A1A: lea ebx, [ebx] */
L_140E4A20:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4A20: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4A22: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4A40; /* 0x140E4A24: jne 0x140e4a40 */
L_140E4A26:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4A26: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4A3C; /* 0x140E4A28: je 0x140e4a3c */
L_140E4A2A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E4A2A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E4A2D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4A40; /* 0x140E4A30: jne 0x140e4a40 */
L_140E4A32:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4A32: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4A35: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4A38: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4A20; /* 0x140E4A3A: jne 0x140e4a20 */
L_140E4A3C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4A3C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4A45; /* 0x140E4A3E: jmp 0x140e4a45 */
L_140E4A40:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4A40: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4A42: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4A45:
    /* test eax, eax */ /* 0x140E4A45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4A47: jne 0x140e66b7 */
L_140E4A4D:
    eax = 0x11Fu; /* 0x140E4A4D: mov eax, 0x11f */
    edi = POP32_VAL(esp); /* 0x140E4A52: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4A53: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4A54: pop ebx */
    esp = ebp; /* 0x140E4A55: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4A57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4A58: ret 0xc */
L_140E4A5B:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E4A5B: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4A62: jne 0x140e66b7 */
L_140E4A68:
    eax = 0x1403409Cu; /* 0x140E4A68: mov eax, 0x1403409c */
    ecx = ecx; /* 0x140E4A6D: lea ecx, [ecx] */
L_140E4A70:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4A70: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4A72: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4A90; /* 0x140E4A74: jne 0x140e4a90 */
L_140E4A76:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4A76: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4A8C; /* 0x140E4A78: je 0x140e4a8c */
L_140E4A7A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E4A7A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E4A7D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4A90; /* 0x140E4A80: jne 0x140e4a90 */
L_140E4A82:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4A82: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4A85: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4A88: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4A70; /* 0x140E4A8A: jne 0x140e4a70 */
L_140E4A8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4A8C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4A95; /* 0x140E4A8E: jmp 0x140e4a95 */
L_140E4A90:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4A90: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4A92: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4A95:
    /* test eax, eax */ /* 0x140E4A95: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4A97: jne 0x140e66b7 */
L_140E4A9D:
    eax = 0x11Eu; /* 0x140E4A9D: mov eax, 0x11e */
    edi = POP32_VAL(esp); /* 0x140E4AA2: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4AA3: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4AA4: pop ebx */
    esp = ebp; /* 0x140E4AA5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4AA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4AA8: ret 0xc */
L_140E4AAB:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E4AAB: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4AB2: jne 0x140e66b7 */
L_140E4AB8:
    eax = 0x140340ACu; /* 0x140E4AB8: mov eax, 0x140340ac */
    ecx = ecx; /* 0x140E4ABD: lea ecx, [ecx] */
L_140E4AC0:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4AC0: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4AC2: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4AE0; /* 0x140E4AC4: jne 0x140e4ae0 */
L_140E4AC6:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4AC6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4ADC; /* 0x140E4AC8: je 0x140e4adc */
L_140E4ACA:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E4ACA: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E4ACD: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4AE0; /* 0x140E4AD0: jne 0x140e4ae0 */
L_140E4AD2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4AD2: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4AD5: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4AD8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4AC0; /* 0x140E4ADA: jne 0x140e4ac0 */
L_140E4ADC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4ADC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4AE5; /* 0x140E4ADE: jmp 0x140e4ae5 */
L_140E4AE0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4AE0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4AE2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4AE5:
    /* test eax, eax */ /* 0x140E4AE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4AE7: jne 0x140e66b7 */
L_140E4AED:
    eax = 0x120u; /* 0x140E4AED: mov eax, 0x120 */
    edi = POP32_VAL(esp); /* 0x140E4AF2: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4AF3: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4AF4: pop ebx */
    esp = ebp; /* 0x140E4AF5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4AF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4AF8: ret 0xc */
L_140E4AFB:
    edx = 0x14032F80u; /* 0x140E4AFB: mov edx, 0x14032f80 */
    eax = ecx; /* 0x140E4B00: mov eax, ecx */
L_140E4B02:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4B02: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4B04: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4B22; /* 0x140E4B06: jne 0x140e4b22 */
L_140E4B08:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4B08: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4B1E; /* 0x140E4B0A: je 0x140e4b1e */
L_140E4B0C:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E4B0C: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4B0F: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4B22; /* 0x140E4B12: jne 0x140e4b22 */
L_140E4B14:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4B14: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4B17: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4B1A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4B02; /* 0x140E4B1C: jne 0x140e4b02 */
L_140E4B1E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4B1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4B27; /* 0x140E4B20: jmp 0x140e4b27 */
L_140E4B22:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4B22: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4B24: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4B27:
    /* test eax, eax */ /* 0x140E4B27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4B39; /* 0x140E4B29: jne 0x140e4b39 */
L_140E4B2B:
    eax = 0x121u; /* 0x140E4B2B: mov eax, 0x121 */
    edi = POP32_VAL(esp); /* 0x140E4B30: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4B31: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4B32: pop ebx */
    esp = ebp; /* 0x140E4B33: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4B35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4B36: ret 0xc */
L_140E4B39:
    edx = 0x1403F3F8u; /* 0x140E4B39: mov edx, 0x1403f3f8 */
    eax = ecx; /* 0x140E4B3E: mov eax, ecx */
L_140E4B40:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4B40: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4B42: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4B60; /* 0x140E4B44: jne 0x140e4b60 */
L_140E4B46:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4B46: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4B5C; /* 0x140E4B48: je 0x140e4b5c */
L_140E4B4A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E4B4A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4B4D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4B60; /* 0x140E4B50: jne 0x140e4b60 */
L_140E4B52:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4B52: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4B55: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4B58: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4B40; /* 0x140E4B5A: jne 0x140e4b40 */
L_140E4B5C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4B5C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4B65; /* 0x140E4B5E: jmp 0x140e4b65 */
L_140E4B60:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4B60: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4B62: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4B65:
    /* test eax, eax */ /* 0x140E4B65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4B77; /* 0x140E4B67: jne 0x140e4b77 */
L_140E4B69:
    eax = 0x122u; /* 0x140E4B69: mov eax, 0x122 */
    edi = POP32_VAL(esp); /* 0x140E4B6E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4B6F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4B70: pop ebx */
    esp = ebp; /* 0x140E4B71: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4B73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4B74: ret 0xc */
L_140E4B77:
    edx = 0x1403F3FCu; /* 0x140E4B77: mov edx, 0x1403f3fc */
    eax = ecx; /* 0x140E4B7C: mov eax, ecx */
    edi = edi; /* 0x140E4B7E: mov edi, edi */
L_140E4B80:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4B80: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4B82: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4BA0; /* 0x140E4B84: jne 0x140e4ba0 */
L_140E4B86:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4B86: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4B9C; /* 0x140E4B88: je 0x140e4b9c */
L_140E4B8A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E4B8A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4B8D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4BA0; /* 0x140E4B90: jne 0x140e4ba0 */
L_140E4B92:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4B92: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4B95: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4B98: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4B80; /* 0x140E4B9A: jne 0x140e4b80 */
L_140E4B9C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4B9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4BA5; /* 0x140E4B9E: jmp 0x140e4ba5 */
L_140E4BA0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4BA0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4BA2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4BA5:
    /* test eax, eax */ /* 0x140E4BA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4BB7; /* 0x140E4BA7: jne 0x140e4bb7 */
L_140E4BA9:
    eax = 0x123u; /* 0x140E4BA9: mov eax, 0x123 */
    edi = POP32_VAL(esp); /* 0x140E4BAE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4BAF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4BB0: pop ebx */
    esp = ebp; /* 0x140E4BB1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4BB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4BB4: ret 0xc */
L_140E4BB7:
    edx = 0x14034140u; /* 0x140E4BB7: mov edx, 0x14034140 */
    eax = ecx; /* 0x140E4BBC: mov eax, ecx */
    edi = edi; /* 0x140E4BBE: mov edi, edi */
L_140E4BC0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4BC0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4BC2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4BE0; /* 0x140E4BC4: jne 0x140e4be0 */
L_140E4BC6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4BC6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4BDC; /* 0x140E4BC8: je 0x140e4bdc */
L_140E4BCA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E4BCA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4BCD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4BE0; /* 0x140E4BD0: jne 0x140e4be0 */
L_140E4BD2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4BD2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4BD5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4BD8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4BC0; /* 0x140E4BDA: jne 0x140e4bc0 */
L_140E4BDC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4BDC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4BE5; /* 0x140E4BDE: jmp 0x140e4be5 */
L_140E4BE0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4BE0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4BE2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4BE5:
    /* test eax, eax */ /* 0x140E4BE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4BF7; /* 0x140E4BE7: jne 0x140e4bf7 */
L_140E4BE9:
    eax = 0x125u; /* 0x140E4BE9: mov eax, 0x125 */
    edi = POP32_VAL(esp); /* 0x140E4BEE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4BEF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4BF0: pop ebx */
    esp = ebp; /* 0x140E4BF1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4BF3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4BF4: ret 0xc */
L_140E4BF7:
    eax = 0x1403F404u; /* 0x140E4BF7: mov eax, 0x1403f404 */
    esp = esp; /* 0x140E4BFC: lea esp, [esp] */
L_140E4C00:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4C00: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4C02: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4C20; /* 0x140E4C04: jne 0x140e4c20 */
L_140E4C06:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4C06: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4C1C; /* 0x140E4C08: je 0x140e4c1c */
L_140E4C0A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E4C0A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E4C0D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4C20; /* 0x140E4C10: jne 0x140e4c20 */
L_140E4C12:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4C12: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4C15: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4C18: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4C00; /* 0x140E4C1A: jne 0x140e4c00 */
L_140E4C1C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4C1C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4C25; /* 0x140E4C1E: jmp 0x140e4c25 */
L_140E4C20:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4C20: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4C22: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4C25:
    /* test eax, eax */ /* 0x140E4C25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4C27: jne 0x140e66b7 */
L_140E4C2D:
    eax = 0x126u; /* 0x140E4C2D: mov eax, 0x126 */
    edi = POP32_VAL(esp); /* 0x140E4C32: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4C33: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4C34: pop ebx */
    esp = ebp; /* 0x140E4C35: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4C37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4C38: ret 0xc */
L_140E4C3B:
    eax = 0x1403F40Cu; /* 0x140E4C3B: mov eax, 0x1403f40c */
L_140E4C40:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4C40: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4C42: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4C60; /* 0x140E4C44: jne 0x140e4c60 */
L_140E4C46:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4C46: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4C5C; /* 0x140E4C48: je 0x140e4c5c */
L_140E4C4A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E4C4A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E4C4D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4C60; /* 0x140E4C50: jne 0x140e4c60 */
L_140E4C52:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4C52: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4C55: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4C58: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4C40; /* 0x140E4C5A: jne 0x140e4c40 */
L_140E4C5C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4C5C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4C65; /* 0x140E4C5E: jmp 0x140e4c65 */
L_140E4C60:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4C60: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4C62: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4C65:
    /* test eax, eax */ /* 0x140E4C65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4C67: jne 0x140e66b7 */
L_140E4C6D:
    eax = 0x124u; /* 0x140E4C6D: mov eax, 0x124 */
    edi = POP32_VAL(esp); /* 0x140E4C72: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4C73: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4C74: pop ebx */
    esp = ebp; /* 0x140E4C75: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4C77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4C78: ret 0xc */
L_140E4C7B:
    edx = 0x1403F418u; /* 0x140E4C7B: mov edx, 0x1403f418 */
    eax = ecx; /* 0x140E4C80: mov eax, ecx */
L_140E4C82:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4C82: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4C84: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4CA2; /* 0x140E4C86: jne 0x140e4ca2 */
L_140E4C88:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4C88: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4C9E; /* 0x140E4C8A: je 0x140e4c9e */
L_140E4C8C:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E4C8C: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4C8F: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4CA2; /* 0x140E4C92: jne 0x140e4ca2 */
L_140E4C94:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4C94: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4C97: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4C9A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4C82; /* 0x140E4C9C: jne 0x140e4c82 */
L_140E4C9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4C9E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4CA7; /* 0x140E4CA0: jmp 0x140e4ca7 */
L_140E4CA2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4CA2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4CA4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4CA7:
    /* test eax, eax */ /* 0x140E4CA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4CB9; /* 0x140E4CA9: jne 0x140e4cb9 */
L_140E4CAB:
    eax = 0x127u; /* 0x140E4CAB: mov eax, 0x127 */
    edi = POP32_VAL(esp); /* 0x140E4CB0: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4CB1: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4CB2: pop ebx */
    esp = ebp; /* 0x140E4CB3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4CB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4CB6: ret 0xc */
L_140E4CB9:
    edx = 0x1403F420u; /* 0x140E4CB9: mov edx, 0x1403f420 */
    eax = ecx; /* 0x140E4CBE: mov eax, ecx */
L_140E4CC0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4CC0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4CC2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4CE0; /* 0x140E4CC4: jne 0x140e4ce0 */
L_140E4CC6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4CC6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4CDC; /* 0x140E4CC8: je 0x140e4cdc */
L_140E4CCA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E4CCA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4CCD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4CE0; /* 0x140E4CD0: jne 0x140e4ce0 */
L_140E4CD2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4CD2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4CD5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4CD8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4CC0; /* 0x140E4CDA: jne 0x140e4cc0 */
L_140E4CDC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4CDC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4CE5; /* 0x140E4CDE: jmp 0x140e4ce5 */
L_140E4CE0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4CE0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4CE2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4CE5:
    /* test eax, eax */ /* 0x140E4CE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4CF7; /* 0x140E4CE7: jne 0x140e4cf7 */
L_140E4CE9:
    eax = 0x128u; /* 0x140E4CE9: mov eax, 0x128 */
    edi = POP32_VAL(esp); /* 0x140E4CEE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4CEF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4CF0: pop ebx */
    esp = ebp; /* 0x140E4CF1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4CF3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4CF4: ret 0xc */
L_140E4CF7:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E4CF7: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4CFE: jne 0x140e66b7 */
L_140E4D04:
    eax = 0x1403F428u; /* 0x140E4D04: mov eax, 0x1403f428 */
    esp = esp; /* 0x140E4D09: lea esp, [esp] */
L_140E4D10:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4D10: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4D12: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4D30; /* 0x140E4D14: jne 0x140e4d30 */
L_140E4D16:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4D16: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4D2C; /* 0x140E4D18: je 0x140e4d2c */
L_140E4D1A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E4D1A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E4D1D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4D30; /* 0x140E4D20: jne 0x140e4d30 */
L_140E4D22:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4D22: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4D25: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4D28: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4D10; /* 0x140E4D2A: jne 0x140e4d10 */
L_140E4D2C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4D2C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4D35; /* 0x140E4D2E: jmp 0x140e4d35 */
L_140E4D30:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4D30: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4D32: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4D35:
    /* test eax, eax */ /* 0x140E4D35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4D37: jne 0x140e66b7 */
L_140E4D3D:
    eax = 0x129u; /* 0x140E4D3D: mov eax, 0x129 */
    edi = POP32_VAL(esp); /* 0x140E4D42: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4D43: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4D44: pop ebx */
    esp = ebp; /* 0x140E4D45: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4D47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4D48: ret 0xc */
L_140E4D4B:
    eax = 0x1403F430u; /* 0x140E4D4B: mov eax, 0x1403f430 */
L_140E4D50:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4D50: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4D52: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4D70; /* 0x140E4D54: jne 0x140e4d70 */
L_140E4D56:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4D56: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4D6C; /* 0x140E4D58: je 0x140e4d6c */
L_140E4D5A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E4D5A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E4D5D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4D70; /* 0x140E4D60: jne 0x140e4d70 */
L_140E4D62:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4D62: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4D65: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4D68: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4D50; /* 0x140E4D6A: jne 0x140e4d50 */
L_140E4D6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4D6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4D75; /* 0x140E4D6E: jmp 0x140e4d75 */
L_140E4D70:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4D70: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4D72: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4D75:
    /* test eax, eax */ /* 0x140E4D75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4D77: jne 0x140e66b7 */
L_140E4D7D:
    eax = 0x12Au; /* 0x140E4D7D: mov eax, 0x12a */
    edi = POP32_VAL(esp); /* 0x140E4D82: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4D83: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4D84: pop ebx */
    esp = ebp; /* 0x140E4D85: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4D87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4D88: ret 0xc */
L_140E4D8B:
    edx = 0x1403F43Cu; /* 0x140E4D8B: mov edx, 0x1403f43c */
    eax = ecx; /* 0x140E4D90: mov eax, ecx */
L_140E4D92:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4D92: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4D94: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4DB2; /* 0x140E4D96: jne 0x140e4db2 */
L_140E4D98:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4D98: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4DAE; /* 0x140E4D9A: je 0x140e4dae */
L_140E4D9C:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E4D9C: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4D9F: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4DB2; /* 0x140E4DA2: jne 0x140e4db2 */
L_140E4DA4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4DA4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4DA7: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4DAA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4D92; /* 0x140E4DAC: jne 0x140e4d92 */
L_140E4DAE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4DAE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4DB7; /* 0x140E4DB0: jmp 0x140e4db7 */
L_140E4DB2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4DB2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4DB4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4DB7:
    /* test eax, eax */ /* 0x140E4DB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4DC9; /* 0x140E4DB9: jne 0x140e4dc9 */
L_140E4DBB:
    eax = 0x12Bu; /* 0x140E4DBB: mov eax, 0x12b */
    edi = POP32_VAL(esp); /* 0x140E4DC0: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4DC1: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4DC2: pop ebx */
    esp = ebp; /* 0x140E4DC3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4DC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4DC6: ret 0xc */
L_140E4DC9:
    eax = 0x1403F444u; /* 0x140E4DC9: mov eax, 0x1403f444 */
    edi = edi; /* 0x140E4DCE: mov edi, edi */
L_140E4DD0:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4DD0: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4DD2: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4720; /* 0x140E4DD4: jne 0x140e4720 */
L_140E4DDA:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4DDA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4DF4; /* 0x140E4DDC: je 0x140e4df4 */
L_140E4DDE:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E4DDE: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E4DE1: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4720; /* 0x140E4DE4: jne 0x140e4720 */
L_140E4DEA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4DEA: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4DED: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4DF0: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4DD0; /* 0x140E4DF2: jne 0x140e4dd0 */
L_140E4DF4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4DF4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_140E4725; /* 0x140E4DF6: jmp 0x140e4725 */
L_140E4DFB:
    edx = 0x1403F44Cu; /* 0x140E4DFB: mov edx, 0x1403f44c */
    eax = ecx; /* 0x140E4E00: mov eax, ecx */
L_140E4E02:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4E02: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4E04: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4E22; /* 0x140E4E06: jne 0x140e4e22 */
L_140E4E08:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4E08: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4E1E; /* 0x140E4E0A: je 0x140e4e1e */
L_140E4E0C:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E4E0C: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4E0F: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4E22; /* 0x140E4E12: jne 0x140e4e22 */
L_140E4E14:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4E14: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4E17: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4E1A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4E02; /* 0x140E4E1C: jne 0x140e4e02 */
L_140E4E1E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4E1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4E27; /* 0x140E4E20: jmp 0x140e4e27 */
L_140E4E22:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4E22: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4E24: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4E27:
    /* test eax, eax */ /* 0x140E4E27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4E39; /* 0x140E4E29: jne 0x140e4e39 */
L_140E4E2B:
    eax = 0x110u; /* 0x140E4E2B: mov eax, 0x110 */
    edi = POP32_VAL(esp); /* 0x140E4E30: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4E31: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4E32: pop ebx */
    esp = ebp; /* 0x140E4E33: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4E35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4E36: ret 0xc */
L_140E4E39:
    edx = 0x1403F45Cu; /* 0x140E4E39: mov edx, 0x1403f45c */
    eax = ecx; /* 0x140E4E3E: mov eax, ecx */
L_140E4E40:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4E40: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4E42: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4E60; /* 0x140E4E44: jne 0x140e4e60 */
L_140E4E46:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4E46: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4E5C; /* 0x140E4E48: je 0x140e4e5c */
L_140E4E4A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E4E4A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4E4D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4E60; /* 0x140E4E50: jne 0x140e4e60 */
L_140E4E52:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4E52: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4E55: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4E58: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4E40; /* 0x140E4E5A: jne 0x140e4e40 */
L_140E4E5C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4E5C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4E65; /* 0x140E4E5E: jmp 0x140e4e65 */
L_140E4E60:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4E60: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4E62: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4E65:
    /* test eax, eax */ /* 0x140E4E65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4E77; /* 0x140E4E67: jne 0x140e4e77 */
L_140E4E69:
    eax = 0x12Cu; /* 0x140E4E69: mov eax, 0x12c */
    edi = POP32_VAL(esp); /* 0x140E4E6E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4E6F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4E70: pop ebx */
    esp = ebp; /* 0x140E4E71: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4E73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4E74: ret 0xc */
L_140E4E77:
    edx = 0x1403F468u; /* 0x140E4E77: mov edx, 0x1403f468 */
    eax = ecx; /* 0x140E4E7C: mov eax, ecx */
    edi = edi; /* 0x140E4E7E: mov edi, edi */
L_140E4E80:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4E80: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4E82: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4EA0; /* 0x140E4E84: jne 0x140e4ea0 */
L_140E4E86:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4E86: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4E9C; /* 0x140E4E88: je 0x140e4e9c */
L_140E4E8A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E4E8A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4E8D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4EA0; /* 0x140E4E90: jne 0x140e4ea0 */
L_140E4E92:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4E92: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4E95: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4E98: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4E80; /* 0x140E4E9A: jne 0x140e4e80 */
L_140E4E9C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4E9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4EA5; /* 0x140E4E9E: jmp 0x140e4ea5 */
L_140E4EA0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4EA0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4EA2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4EA5:
    /* test eax, eax */ /* 0x140E4EA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E4EA7: je 0x140e472d */
L_140E4EAD:
    eax = 0x1403F46Cu; /* 0x140E4EAD: mov eax, 0x1403f46c */
L_140E4EB2:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4EB2: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4EB4: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4ED2; /* 0x140E4EB6: jne 0x140e4ed2 */
L_140E4EB8:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4EB8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4ECE; /* 0x140E4EBA: je 0x140e4ece */
L_140E4EBC:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E4EBC: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E4EBF: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4ED2; /* 0x140E4EC2: jne 0x140e4ed2 */
L_140E4EC4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4EC4: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4EC7: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4ECA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4EB2; /* 0x140E4ECC: jne 0x140e4eb2 */
L_140E4ECE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4ECE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4ED7; /* 0x140E4ED0: jmp 0x140e4ed7 */
L_140E4ED2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4ED2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4ED4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4ED7:
    /* test eax, eax */ /* 0x140E4ED7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4ED9: jne 0x140e66b7 */
L_140E4EDF:
    eax = 0x12Du; /* 0x140E4EDF: mov eax, 0x12d */
    edi = POP32_VAL(esp); /* 0x140E4EE4: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4EE5: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4EE6: pop ebx */
    esp = ebp; /* 0x140E4EE7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4EE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4EEA: ret 0xc */
L_140E4EED:
    eax = 0x14036298u; /* 0x140E4EED: mov eax, 0x14036298 */
L_140E4EF2:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4EF2: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4EF4: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4F12; /* 0x140E4EF6: jne 0x140e4f12 */
L_140E4EF8:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4EF8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4F0E; /* 0x140E4EFA: je 0x140e4f0e */
L_140E4EFC:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E4EFC: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E4EFF: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4F12; /* 0x140E4F02: jne 0x140e4f12 */
L_140E4F04:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4F04: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4F07: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4F0A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4EF2; /* 0x140E4F0C: jne 0x140e4ef2 */
L_140E4F0E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4F0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4F17; /* 0x140E4F10: jmp 0x140e4f17 */
L_140E4F12:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4F12: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4F14: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4F17:
    /* test eax, eax */ /* 0x140E4F17: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4F19: jne 0x140e66b7 */
L_140E4F1F:
    eax = 0x12Eu; /* 0x140E4F1F: mov eax, 0x12e */
    edi = POP32_VAL(esp); /* 0x140E4F24: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4F25: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4F26: pop ebx */
    esp = ebp; /* 0x140E4F27: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4F29: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4F2A: ret 0xc */
L_140E4F2D:
    edx = 0x1403F47Cu; /* 0x140E4F2D: mov edx, 0x1403f47c */
    eax = ecx; /* 0x140E4F32: mov eax, ecx */
L_140E4F34:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4F34: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4F36: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4F54; /* 0x140E4F38: jne 0x140e4f54 */
L_140E4F3A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4F3A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4F50; /* 0x140E4F3C: je 0x140e4f50 */
L_140E4F3E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E4F3E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4F41: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4F54; /* 0x140E4F44: jne 0x140e4f54 */
L_140E4F46:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4F46: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4F49: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4F4C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4F34; /* 0x140E4F4E: jne 0x140e4f34 */
L_140E4F50:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4F50: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4F59; /* 0x140E4F52: jmp 0x140e4f59 */
L_140E4F54:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4F54: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4F56: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4F59:
    /* test eax, eax */ /* 0x140E4F59: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4F6B; /* 0x140E4F5B: jne 0x140e4f6b */
L_140E4F5D:
    eax = 0x12Fu; /* 0x140E4F5D: mov eax, 0x12f */
    edi = POP32_VAL(esp); /* 0x140E4F62: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4F63: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4F64: pop ebx */
    esp = ebp; /* 0x140E4F65: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4F67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4F68: ret 0xc */
L_140E4F6B:
    eax = 0x1403F480u; /* 0x140E4F6B: mov eax, 0x1403f480 */
L_140E4F70:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4F70: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4F72: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4720; /* 0x140E4F74: jne 0x140e4720 */
L_140E4F7A:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4F7A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4F94; /* 0x140E4F7C: je 0x140e4f94 */
L_140E4F7E:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E4F7E: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E4F81: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4720; /* 0x140E4F84: jne 0x140e4720 */
L_140E4F8A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4F8A: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4F8D: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4F90: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4F70; /* 0x140E4F92: jne 0x140e4f70 */
L_140E4F94:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4F94: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_140E4725; /* 0x140E4F96: jmp 0x140e4725 */
L_140E4F9B:
    eax = 0x1403F48Cu; /* 0x140E4F9B: mov eax, 0x1403f48c */
L_140E4FA0:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E4FA0: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E4FA2: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4FC0; /* 0x140E4FA4: jne 0x140e4fc0 */
L_140E4FA6:
    /* test LO8(edx), LO8(edx) */ /* 0x140E4FA6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4FBC; /* 0x140E4FA8: je 0x140e4fbc */
L_140E4FAA:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E4FAA: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E4FAD: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4FC0; /* 0x140E4FB0: jne 0x140e4fc0 */
L_140E4FB2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E4FB2: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4FB5: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E4FB8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4FA0; /* 0x140E4FBA: jne 0x140e4fa0 */
L_140E4FBC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4FBC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E4FC5; /* 0x140E4FBE: jmp 0x140e4fc5 */
L_140E4FC0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4FC0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E4FC2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E4FC5:
    /* test eax, eax */ /* 0x140E4FC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E4FC7: jne 0x140e66b7 */
L_140E4FCD:
    eax = 0x130u; /* 0x140E4FCD: mov eax, 0x130 */
    edi = POP32_VAL(esp); /* 0x140E4FD2: pop edi */
    esi = POP32_VAL(esp); /* 0x140E4FD3: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E4FD4: pop ebx */
    esp = ebp; /* 0x140E4FD5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E4FD7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E4FD8: ret 0xc */
L_140E4FDB:
    edx = 0x1403F498u; /* 0x140E4FDB: mov edx, 0x1403f498 */
    eax = ecx; /* 0x140E4FE0: mov eax, ecx */
L_140E4FE2:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E4FE2: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E4FE4: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5002; /* 0x140E4FE6: jne 0x140e5002 */
L_140E4FE8:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4FE8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E4FFE; /* 0x140E4FEA: je 0x140e4ffe */
L_140E4FEC:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E4FEC: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E4FEF: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5002; /* 0x140E4FF2: jne 0x140e5002 */
L_140E4FF4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E4FF4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E4FF7: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E4FFA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E4FE2; /* 0x140E4FFC: jne 0x140e4fe2 */
L_140E4FFE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E4FFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5007; /* 0x140E5000: jmp 0x140e5007 */
L_140E5002:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5002: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5004: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5007:
    /* test eax, eax */ /* 0x140E5007: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5019; /* 0x140E5009: jne 0x140e5019 */
L_140E500B:
    eax = 0x131u; /* 0x140E500B: mov eax, 0x131 */
    edi = POP32_VAL(esp); /* 0x140E5010: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5011: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5012: pop ebx */
    esp = ebp; /* 0x140E5013: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5015: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5016: ret 0xc */
L_140E5019:
    edx = 0x14036D78u; /* 0x140E5019: mov edx, 0x14036d78 */
    eax = ecx; /* 0x140E501E: mov eax, ecx */
L_140E5020:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5020: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5022: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5040; /* 0x140E5024: jne 0x140e5040 */
L_140E5026:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5026: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E503C; /* 0x140E5028: je 0x140e503c */
L_140E502A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E502A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E502D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5040; /* 0x140E5030: jne 0x140e5040 */
L_140E5032:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5032: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5035: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5038: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5020; /* 0x140E503A: jne 0x140e5020 */
L_140E503C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E503C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5045; /* 0x140E503E: jmp 0x140e5045 */
L_140E5040:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5040: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5042: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5045:
    /* test eax, eax */ /* 0x140E5045: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5057; /* 0x140E5047: jne 0x140e5057 */
L_140E5049:
    eax = 0x132u; /* 0x140E5049: mov eax, 0x132 */
    edi = POP32_VAL(esp); /* 0x140E504E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E504F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5050: pop ebx */
    esp = ebp; /* 0x140E5051: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5053: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5054: ret 0xc */
L_140E5057:
    edx = 0x14034120u; /* 0x140E5057: mov edx, 0x14034120 */
    eax = ecx; /* 0x140E505C: mov eax, ecx */
    edi = edi; /* 0x140E505E: mov edi, edi */
L_140E5060:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5060: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5062: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5080; /* 0x140E5064: jne 0x140e5080 */
L_140E5066:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5066: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E507C; /* 0x140E5068: je 0x140e507c */
L_140E506A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E506A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E506D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5080; /* 0x140E5070: jne 0x140e5080 */
L_140E5072:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5072: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5075: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5078: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5060; /* 0x140E507A: jne 0x140e5060 */
L_140E507C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E507C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5085; /* 0x140E507E: jmp 0x140e5085 */
L_140E5080:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5080: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5082: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5085:
    /* test eax, eax */ /* 0x140E5085: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5097; /* 0x140E5087: jne 0x140e5097 */
L_140E5089:
    eax = 0x133u; /* 0x140E5089: mov eax, 0x133 */
    edi = POP32_VAL(esp); /* 0x140E508E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E508F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5090: pop ebx */
    esp = ebp; /* 0x140E5091: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5093: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5094: ret 0xc */
L_140E5097:
    edx = 0x1403F4A4u; /* 0x140E5097: mov edx, 0x1403f4a4 */
    eax = ecx; /* 0x140E509C: mov eax, ecx */
    edi = edi; /* 0x140E509E: mov edi, edi */
L_140E50A0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E50A0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E50A2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E50C0; /* 0x140E50A4: jne 0x140e50c0 */
L_140E50A6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E50A6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E50BC; /* 0x140E50A8: je 0x140e50bc */
L_140E50AA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E50AA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E50AD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E50C0; /* 0x140E50B0: jne 0x140e50c0 */
L_140E50B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E50B2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E50B5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E50B8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E50A0; /* 0x140E50BA: jne 0x140e50a0 */
L_140E50BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E50BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E50C5; /* 0x140E50BE: jmp 0x140e50c5 */
L_140E50C0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E50C0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E50C2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E50C5:
    /* test eax, eax */ /* 0x140E50C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E50C7: je 0x140e472d */
L_140E50CD:
    edx = 0x1403F4ACu; /* 0x140E50CD: mov edx, 0x1403f4ac */
    eax = ecx; /* 0x140E50D2: mov eax, ecx */
L_140E50D4:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E50D4: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E50D6: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E50F4; /* 0x140E50D8: jne 0x140e50f4 */
L_140E50DA:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E50DA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E50F0; /* 0x140E50DC: je 0x140e50f0 */
L_140E50DE:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E50DE: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E50E1: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E50F4; /* 0x140E50E4: jne 0x140e50f4 */
L_140E50E6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E50E6: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E50E9: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E50EC: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E50D4; /* 0x140E50EE: jne 0x140e50d4 */
L_140E50F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E50F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E50F9; /* 0x140E50F2: jmp 0x140e50f9 */
L_140E50F4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E50F4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E50F6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E50F9:
    /* test eax, eax */ /* 0x140E50F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E50FB: je 0x140e472d */
L_140E5101:
    edx = 0x1403F4B8u; /* 0x140E5101: mov edx, 0x1403f4b8 */
    eax = ecx; /* 0x140E5106: mov eax, ecx */
L_140E5108:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5108: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E510A: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5128; /* 0x140E510C: jne 0x140e5128 */
L_140E510E:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E510E: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5124; /* 0x140E5110: je 0x140e5124 */
L_140E5112:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5112: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5115: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5128; /* 0x140E5118: jne 0x140e5128 */
L_140E511A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E511A: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E511D: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5120: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5108; /* 0x140E5122: jne 0x140e5108 */
L_140E5124:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5124: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E512D; /* 0x140E5126: jmp 0x140e512d */
L_140E5128:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5128: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E512A: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E512D:
    /* test eax, eax */ /* 0x140E512D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E512F: je 0x140e472d */
L_140E5135:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E5135: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E513C: jne 0x140e66b7 */
L_140E5142:
    edx = 0x1403F4C0u; /* 0x140E5142: mov edx, 0x1403f4c0 */
    eax = ecx; /* 0x140E5147: mov eax, ecx */
    esp = esp; /* 0x140E5149: lea esp, [esp] */
L_140E5150:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5150: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5152: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5170; /* 0x140E5154: jne 0x140e5170 */
L_140E5156:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5156: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E516C; /* 0x140E5158: je 0x140e516c */
L_140E515A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E515A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E515D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5170; /* 0x140E5160: jne 0x140e5170 */
L_140E5162:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5162: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5165: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5168: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5150; /* 0x140E516A: jne 0x140e5150 */
L_140E516C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E516C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5175; /* 0x140E516E: jmp 0x140e5175 */
L_140E5170:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5170: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5172: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5175:
    /* test eax, eax */ /* 0x140E5175: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5187; /* 0x140E5177: jne 0x140e5187 */
L_140E5179:
    eax = 0x135u; /* 0x140E5179: mov eax, 0x135 */
    edi = POP32_VAL(esp); /* 0x140E517E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E517F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5180: pop ebx */
    esp = ebp; /* 0x140E5181: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5183: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5184: ret 0xc */
L_140E5187:
    eax = 0x1403F4C8u; /* 0x140E5187: mov eax, 0x1403f4c8 */
    esp = esp; /* 0x140E518C: lea esp, [esp] */
L_140E5190:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E5190: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E5192: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E51B0; /* 0x140E5194: jne 0x140e51b0 */
L_140E5196:
    /* test LO8(edx), LO8(edx) */ /* 0x140E5196: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E51AC; /* 0x140E5198: je 0x140e51ac */
L_140E519A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E519A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E519D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E51B0; /* 0x140E51A0: jne 0x140e51b0 */
L_140E51A2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E51A2: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E51A5: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E51A8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5190; /* 0x140E51AA: jne 0x140e5190 */
L_140E51AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E51AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E51B5; /* 0x140E51AE: jmp 0x140e51b5 */
L_140E51B0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E51B0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E51B2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E51B5:
    /* test eax, eax */ /* 0x140E51B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E51B7: jne 0x140e66b7 */
L_140E51BD:
    /* test MEM32(edi + 0x50), 0x800u */ /* 0x140E51BD: test dword ptr [edi + 0x50], 0x800 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E529D; /* 0x140E51C4: je 0x140e529d */
L_140E51CA:
    PUSH32(esp, 0x1403F4D8u); /* 0x140E51CA: push 0x1403f4d8 */
L_140E51CF:
    ebx = MEM32(ebp + 0x10); /* 0x140E51CF: mov ebx, dword ptr [ebp + 0x10] */
L_140E51D2:
    PUSH32(esp, 0xC0Eu); /* 0x140E51D2: push 0xc0e */
    edx = ebx; /* 0x140E51D7: mov edx, ebx */
    esi = edi; /* 0x140E51D9: mov esi, edi */
    RECOMP_CALL(sub_140E6B90); /* 0x140E51DB: call 0x140e6b90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E51E0: add esp, 8 */
    _flag_k = FK_ADD;
L_140E51E3:
    esi = MEM32(0x14001130); /* 0x140E51E3: mov esi, dword ptr [0x14001130] */
L_140E51E9:
    eax = MEM32(edi + 0x228); /* 0x140E51E9: mov eax, dword ptr [edi + 0x228] */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x140E51EF: movsx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x140E51F2: push eax */
    RECOMP_ICALL(MEM32(0x1400114C)); /* 0x140E51F3: call dword ptr [0x1400114c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF9Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF9Fu; /* 0x140E51F9: add eax, -0x61 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140E51FC: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x13u */ /* 0x140E51FF: cmp eax, 0x13 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140E677F; /* 0x140E5202: ja 0x140e677f */
L_140E5208:
    eax = (uint32_t)MEM8(eax + 0x140E6A08); /* 0x140E5208: movzx eax, byte ptr [eax + 0x140e6a08] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140E69F4)); goto _ljump; }
L_140E5216:
    edx = 0x1403F51Cu; /* 0x140E5216: mov edx, 0x1403f51c */
    eax = ecx; /* 0x140E521B: mov eax, ecx */
    ecx = ecx; /* 0x140E521D: lea ecx, [ecx] */
L_140E5220:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5220: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5222: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5240; /* 0x140E5224: jne 0x140e5240 */
L_140E5226:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5226: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E523C; /* 0x140E5228: je 0x140e523c */
L_140E522A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E522A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E522D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5240; /* 0x140E5230: jne 0x140e5240 */
L_140E5232:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5232: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5235: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5238: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5220; /* 0x140E523A: jne 0x140e5220 */
L_140E523C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E523C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5245; /* 0x140E523E: jmp 0x140e5245 */
L_140E5240:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5240: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5242: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5245:
    /* test eax, eax */ /* 0x140E5245: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5257; /* 0x140E5247: jne 0x140e5257 */
L_140E5249:
    eax = 0x136u; /* 0x140E5249: mov eax, 0x136 */
    edi = POP32_VAL(esp); /* 0x140E524E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E524F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5250: pop ebx */
    esp = ebp; /* 0x140E5251: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5253: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5254: ret 0xc */
L_140E5257:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E5257: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E525E: jne 0x140e66b7 */
L_140E5264:
    eax = 0x14034080u; /* 0x140E5264: mov eax, 0x14034080 */
    esp = esp; /* 0x140E5269: lea esp, [esp] */
L_140E5270:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E5270: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E5272: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5290; /* 0x140E5274: jne 0x140e5290 */
L_140E5276:
    /* test LO8(edx), LO8(edx) */ /* 0x140E5276: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E528C; /* 0x140E5278: je 0x140e528c */
L_140E527A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E527A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E527D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5290; /* 0x140E5280: jne 0x140e5290 */
L_140E5282:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E5282: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5285: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E5288: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5270; /* 0x140E528A: jne 0x140e5270 */
L_140E528C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E528C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5295; /* 0x140E528E: jmp 0x140e5295 */
L_140E5290:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5290: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5292: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5295:
    /* test eax, eax */ /* 0x140E5295: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E5297: jne 0x140e66b7 */
L_140E529D:
    eax = 0x134u; /* 0x140E529D: mov eax, 0x134 */
    edi = POP32_VAL(esp); /* 0x140E52A2: pop edi */
    esi = POP32_VAL(esp); /* 0x140E52A3: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E52A4: pop ebx */
    esp = ebp; /* 0x140E52A5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E52A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E52A8: ret 0xc */
L_140E52AB:
    edx = 0x1403F528u; /* 0x140E52AB: mov edx, 0x1403f528 */
    eax = ecx; /* 0x140E52B0: mov eax, ecx */
L_140E52B2:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E52B2: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E52B4: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E52D2; /* 0x140E52B6: jne 0x140e52d2 */
L_140E52B8:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E52B8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E52CE; /* 0x140E52BA: je 0x140e52ce */
L_140E52BC:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E52BC: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E52BF: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E52D2; /* 0x140E52C2: jne 0x140e52d2 */
L_140E52C4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E52C4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E52C7: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E52CA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E52B2; /* 0x140E52CC: jne 0x140e52b2 */
L_140E52CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E52CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E52D7; /* 0x140E52D0: jmp 0x140e52d7 */
L_140E52D2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E52D2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E52D4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E52D7:
    /* test eax, eax */ /* 0x140E52D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E52E9; /* 0x140E52D9: jne 0x140e52e9 */
L_140E52DB:
    eax = 0x138u; /* 0x140E52DB: mov eax, 0x138 */
    edi = POP32_VAL(esp); /* 0x140E52E0: pop edi */
    esi = POP32_VAL(esp); /* 0x140E52E1: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E52E2: pop ebx */
    esp = ebp; /* 0x140E52E3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E52E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E52E6: ret 0xc */
L_140E52E9:
    edx = 0x1403F534u; /* 0x140E52E9: mov edx, 0x1403f534 */
    eax = ecx; /* 0x140E52EE: mov eax, ecx */
L_140E52F0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E52F0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E52F2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5310; /* 0x140E52F4: jne 0x140e5310 */
L_140E52F6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E52F6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E530C; /* 0x140E52F8: je 0x140e530c */
L_140E52FA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E52FA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E52FD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5310; /* 0x140E5300: jne 0x140e5310 */
L_140E5302:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5302: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5305: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5308: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E52F0; /* 0x140E530A: jne 0x140e52f0 */
L_140E530C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E530C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5315; /* 0x140E530E: jmp 0x140e5315 */
L_140E5310:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5310: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5312: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5315:
    /* test eax, eax */ /* 0x140E5315: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E5317: je 0x140e472d */
L_140E531D:
    edx = 0x1403F548u; /* 0x140E531D: mov edx, 0x1403f548 */
    eax = ecx; /* 0x140E5322: mov eax, ecx */
L_140E5324:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5324: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5326: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5344; /* 0x140E5328: jne 0x140e5344 */
L_140E532A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E532A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5340; /* 0x140E532C: je 0x140e5340 */
L_140E532E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E532E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5331: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5344; /* 0x140E5334: jne 0x140e5344 */
L_140E5336:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5336: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5339: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E533C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5324; /* 0x140E533E: jne 0x140e5324 */
L_140E5340:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5340: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5349; /* 0x140E5342: jmp 0x140e5349 */
L_140E5344:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5344: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5346: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5349:
    /* test eax, eax */ /* 0x140E5349: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E535B; /* 0x140E534B: jne 0x140e535b */
L_140E534D:
    eax = 0x13Bu; /* 0x140E534D: mov eax, 0x13b */
    edi = POP32_VAL(esp); /* 0x140E5352: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5353: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5354: pop ebx */
    esp = ebp; /* 0x140E5355: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5357: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5358: ret 0xc */
L_140E535B:
    eax = 0x1403F554u; /* 0x140E535B: mov eax, 0x1403f554 */
L_140E5360:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E5360: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E5362: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5380; /* 0x140E5364: jne 0x140e5380 */
L_140E5366:
    /* test LO8(edx), LO8(edx) */ /* 0x140E5366: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E537C; /* 0x140E5368: je 0x140e537c */
L_140E536A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E536A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E536D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5380; /* 0x140E5370: jne 0x140e5380 */
L_140E5372:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E5372: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5375: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E5378: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5360; /* 0x140E537A: jne 0x140e5360 */
L_140E537C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E537C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5385; /* 0x140E537E: jmp 0x140e5385 */
L_140E5380:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5380: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5382: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5385:
    /* test eax, eax */ /* 0x140E5385: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E5387: jne 0x140e66b7 */
L_140E538D:
    eax = 0x13Au; /* 0x140E538D: mov eax, 0x13a */
    edi = POP32_VAL(esp); /* 0x140E5392: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5393: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5394: pop ebx */
    esp = ebp; /* 0x140E5395: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5397: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5398: ret 0xc */
L_140E539B:
    edx = 0x140340C8u; /* 0x140E539B: mov edx, 0x140340c8 */
    eax = ecx; /* 0x140E53A0: mov eax, ecx */
L_140E53A2:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E53A2: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E53A4: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E53C2; /* 0x140E53A6: jne 0x140e53c2 */
L_140E53A8:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E53A8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E53BE; /* 0x140E53AA: je 0x140e53be */
L_140E53AC:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E53AC: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E53AF: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E53C2; /* 0x140E53B2: jne 0x140e53c2 */
L_140E53B4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E53B4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E53B7: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E53BA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E53A2; /* 0x140E53BC: jne 0x140e53a2 */
L_140E53BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E53BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E53C7; /* 0x140E53C0: jmp 0x140e53c7 */
L_140E53C2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E53C2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E53C4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E53C7:
    /* test eax, eax */ /* 0x140E53C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E53D9; /* 0x140E53C9: jne 0x140e53d9 */
L_140E53CB:
    eax = 0x137u; /* 0x140E53CB: mov eax, 0x137 */
    edi = POP32_VAL(esp); /* 0x140E53D0: pop edi */
    esi = POP32_VAL(esp); /* 0x140E53D1: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E53D2: pop ebx */
    esp = ebp; /* 0x140E53D3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E53D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E53D6: ret 0xc */
L_140E53D9:
    edx = 0x140340F8u; /* 0x140E53D9: mov edx, 0x140340f8 */
    eax = ecx; /* 0x140E53DE: mov eax, ecx */
L_140E53E0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E53E0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E53E2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5400; /* 0x140E53E4: jne 0x140e5400 */
L_140E53E6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E53E6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E53FC; /* 0x140E53E8: je 0x140e53fc */
L_140E53EA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E53EA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E53ED: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5400; /* 0x140E53F0: jne 0x140e5400 */
L_140E53F2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E53F2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E53F5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E53F8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E53E0; /* 0x140E53FA: jne 0x140e53e0 */
L_140E53FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E53FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5405; /* 0x140E53FE: jmp 0x140e5405 */
L_140E5400:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5400: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5402: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5405:
    /* test eax, eax */ /* 0x140E5405: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5417; /* 0x140E5407: jne 0x140e5417 */
L_140E5409:
    eax = 0x139u; /* 0x140E5409: mov eax, 0x139 */
    edi = POP32_VAL(esp); /* 0x140E540E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E540F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5410: pop ebx */
    esp = ebp; /* 0x140E5411: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5413: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5414: ret 0xc */
L_140E5417:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E5417: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E541E: jne 0x140e66b7 */
L_140E5424:
    edx = 0x140373A4u; /* 0x140E5424: mov edx, 0x140373a4 */
    eax = ecx; /* 0x140E5429: mov eax, ecx */
    goto L_140E5430; /* 0x140E542B: jmp 0x140e5430 */
L_140E5430:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5430: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5432: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5450; /* 0x140E5434: jne 0x140e5450 */
L_140E5436:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5436: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E544C; /* 0x140E5438: je 0x140e544c */
L_140E543A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E543A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E543D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5450; /* 0x140E5440: jne 0x140e5450 */
L_140E5442:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5442: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5445: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5448: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5430; /* 0x140E544A: jne 0x140e5430 */
L_140E544C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E544C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5455; /* 0x140E544E: jmp 0x140e5455 */
L_140E5450:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5450: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5452: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5455:
    /* test eax, eax */ /* 0x140E5455: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5470; /* 0x140E5457: jne 0x140e5470 */
L_140E5459:
    edx = MEM32(ebp + 0xC); /* 0x140E5459: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x3Fu; /* 0x140E545C: mov dword ptr [edx], 0x3f */
    eax = 0x181u; /* 0x140E5462: mov eax, 0x181 */
    edi = POP32_VAL(esp); /* 0x140E5467: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5468: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5469: pop ebx */
    esp = ebp; /* 0x140E546A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E546C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E546D: ret 0xc */
L_140E5470:
    edx = 0x140373C4u; /* 0x140E5470: mov edx, 0x140373c4 */
    eax = ecx; /* 0x140E5475: mov eax, ecx */
L_140E5477:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5477: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5479: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5497; /* 0x140E547B: jne 0x140e5497 */
L_140E547D:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E547D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5493; /* 0x140E547F: je 0x140e5493 */
L_140E5481:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5481: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5484: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5497; /* 0x140E5487: jne 0x140e5497 */
L_140E5489:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5489: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E548C: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E548F: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5477; /* 0x140E5491: jne 0x140e5477 */
L_140E5493:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5493: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E549C; /* 0x140E5495: jmp 0x140e549c */
L_140E5497:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5497: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5499: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E549C:
    /* test eax, eax */ /* 0x140E549C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E54B7; /* 0x140E549E: jne 0x140e54b7 */
L_140E54A0:
    edx = MEM32(ebp + 0xC); /* 0x140E54A0: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x41u; /* 0x140E54A3: mov dword ptr [edx], 0x41 */
    eax = 0x182u; /* 0x140E54A9: mov eax, 0x182 */
    edi = POP32_VAL(esp); /* 0x140E54AE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E54AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E54B0: pop ebx */
    esp = ebp; /* 0x140E54B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E54B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E54B4: ret 0xc */
L_140E54B7:
    edx = 0x140373ECu; /* 0x140E54B7: mov edx, 0x140373ec */
    eax = ecx; /* 0x140E54BC: mov eax, ecx */
    edi = edi; /* 0x140E54BE: mov edi, edi */
L_140E54C0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E54C0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E54C2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E54E0; /* 0x140E54C4: jne 0x140e54e0 */
L_140E54C6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E54C6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E54DC; /* 0x140E54C8: je 0x140e54dc */
L_140E54CA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E54CA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E54CD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E54E0; /* 0x140E54D0: jne 0x140e54e0 */
L_140E54D2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E54D2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E54D5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E54D8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E54C0; /* 0x140E54DA: jne 0x140e54c0 */
L_140E54DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E54DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E54E5; /* 0x140E54DE: jmp 0x140e54e5 */
L_140E54E0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E54E0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E54E2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E54E5:
    /* test eax, eax */ /* 0x140E54E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5500; /* 0x140E54E7: jne 0x140e5500 */
L_140E54E9:
    edx = MEM32(ebp + 0xC); /* 0x140E54E9: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x43u; /* 0x140E54EC: mov dword ptr [edx], 0x43 */
    eax = 0x181u; /* 0x140E54F2: mov eax, 0x181 */
    edi = POP32_VAL(esp); /* 0x140E54F7: pop edi */
    esi = POP32_VAL(esp); /* 0x140E54F8: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E54F9: pop ebx */
    esp = ebp; /* 0x140E54FA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E54FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E54FD: ret 0xc */
L_140E5500:
    edx = 0x14037358u; /* 0x140E5500: mov edx, 0x14037358 */
    eax = ecx; /* 0x140E5505: mov eax, ecx */
L_140E5507:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5507: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5509: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5527; /* 0x140E550B: jne 0x140e5527 */
L_140E550D:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E550D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5523; /* 0x140E550F: je 0x140e5523 */
L_140E5511:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5511: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5514: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5527; /* 0x140E5517: jne 0x140e5527 */
L_140E5519:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5519: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E551C: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E551F: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5507; /* 0x140E5521: jne 0x140e5507 */
L_140E5523:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5523: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E552C; /* 0x140E5525: jmp 0x140e552c */
L_140E5527:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5527: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5529: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E552C:
    /* test eax, eax */ /* 0x140E552C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5547; /* 0x140E552E: jne 0x140e5547 */
L_140E5530:
    edx = MEM32(ebp + 0xC); /* 0x140E5530: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x3Au; /* 0x140E5533: mov dword ptr [edx], 0x3a */
    eax = 0x181u; /* 0x140E5539: mov eax, 0x181 */
    edi = POP32_VAL(esp); /* 0x140E553E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E553F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5540: pop ebx */
    esp = ebp; /* 0x140E5541: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5543: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5544: ret 0xc */
L_140E5547:
    edx = 0x14037364u; /* 0x140E5547: mov edx, 0x14037364 */
    eax = ecx; /* 0x140E554C: mov eax, ecx */
    edi = edi; /* 0x140E554E: mov edi, edi */
L_140E5550:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5550: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5552: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5570; /* 0x140E5554: jne 0x140e5570 */
L_140E5556:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5556: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E556C; /* 0x140E5558: je 0x140e556c */
L_140E555A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E555A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E555D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5570; /* 0x140E5560: jne 0x140e5570 */
L_140E5562:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5562: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5565: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5568: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5550; /* 0x140E556A: jne 0x140e5550 */
L_140E556C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E556C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5575; /* 0x140E556E: jmp 0x140e5575 */
L_140E5570:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5570: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5572: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5575:
    /* test eax, eax */ /* 0x140E5575: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5590; /* 0x140E5577: jne 0x140e5590 */
L_140E5579:
    edx = MEM32(ebp + 0xC); /* 0x140E5579: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x3Bu; /* 0x140E557C: mov dword ptr [edx], 0x3b */
    eax = 0x181u; /* 0x140E5582: mov eax, 0x181 */
    edi = POP32_VAL(esp); /* 0x140E5587: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5588: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5589: pop ebx */
    esp = ebp; /* 0x140E558A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E558C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E558D: ret 0xc */
L_140E5590:
    edx = 0x14037378u; /* 0x140E5590: mov edx, 0x14037378 */
    eax = ecx; /* 0x140E5595: mov eax, ecx */
L_140E5597:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5597: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5599: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E55B7; /* 0x140E559B: jne 0x140e55b7 */
L_140E559D:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E559D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E55B3; /* 0x140E559F: je 0x140e55b3 */
L_140E55A1:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E55A1: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E55A4: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E55B7; /* 0x140E55A7: jne 0x140e55b7 */
L_140E55A9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E55A9: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E55AC: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E55AF: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5597; /* 0x140E55B1: jne 0x140e5597 */
L_140E55B3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E55B3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E55BC; /* 0x140E55B5: jmp 0x140e55bc */
L_140E55B7:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E55B7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E55B9: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E55BC:
    /* test eax, eax */ /* 0x140E55BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E55D7; /* 0x140E55BE: jne 0x140e55d7 */
L_140E55C0:
    edx = MEM32(ebp + 0xC); /* 0x140E55C0: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x3Cu; /* 0x140E55C3: mov dword ptr [edx], 0x3c */
    eax = 0x181u; /* 0x140E55C9: mov eax, 0x181 */
    edi = POP32_VAL(esp); /* 0x140E55CE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E55CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E55D0: pop ebx */
    esp = ebp; /* 0x140E55D1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E55D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E55D4: ret 0xc */
L_140E55D7:
    edx = 0x14037384u; /* 0x140E55D7: mov edx, 0x14037384 */
    eax = ecx; /* 0x140E55DC: mov eax, ecx */
    edi = edi; /* 0x140E55DE: mov edi, edi */
L_140E55E0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E55E0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E55E2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5600; /* 0x140E55E4: jne 0x140e5600 */
L_140E55E6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E55E6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E55FC; /* 0x140E55E8: je 0x140e55fc */
L_140E55EA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E55EA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E55ED: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5600; /* 0x140E55F0: jne 0x140e5600 */
L_140E55F2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E55F2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E55F5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E55F8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E55E0; /* 0x140E55FA: jne 0x140e55e0 */
L_140E55FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E55FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5605; /* 0x140E55FE: jmp 0x140e5605 */
L_140E5600:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5600: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5602: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5605:
    /* test eax, eax */ /* 0x140E5605: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5620; /* 0x140E5607: jne 0x140e5620 */
L_140E5609:
    edx = MEM32(ebp + 0xC); /* 0x140E5609: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x3Du; /* 0x140E560C: mov dword ptr [edx], 0x3d */
    eax = 0x181u; /* 0x140E5612: mov eax, 0x181 */
    edi = POP32_VAL(esp); /* 0x140E5617: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5618: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5619: pop ebx */
    esp = ebp; /* 0x140E561A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E561C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E561D: ret 0xc */
L_140E5620:
    eax = 0x14037398u; /* 0x140E5620: mov eax, 0x14037398 */
L_140E5625:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E5625: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E5627: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5645; /* 0x140E5629: jne 0x140e5645 */
L_140E562B:
    /* test LO8(edx), LO8(edx) */ /* 0x140E562B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5641; /* 0x140E562D: je 0x140e5641 */
L_140E562F:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E562F: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E5632: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5645; /* 0x140E5635: jne 0x140e5645 */
L_140E5637:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E5637: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E563A: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E563D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5625; /* 0x140E563F: jne 0x140e5625 */
L_140E5641:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5641: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E564A; /* 0x140E5643: jmp 0x140e564a */
L_140E5645:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5645: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5647: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E564A:
    /* test eax, eax */ /* 0x140E564A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E564C: jne 0x140e66b7 */
L_140E5652:
    edx = MEM32(ebp + 0xC); /* 0x140E5652: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x3Eu; /* 0x140E5655: mov dword ptr [edx], 0x3e */
    eax = 0x181u; /* 0x140E565B: mov eax, 0x181 */
    edi = POP32_VAL(esp); /* 0x140E5660: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5661: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5662: pop ebx */
    esp = ebp; /* 0x140E5663: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5665: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5666: ret 0xc */
L_140E5669:
    edx = 0x14034050u; /* 0x140E5669: mov edx, 0x14034050 */
    eax = ecx; /* 0x140E566E: mov eax, ecx */
L_140E5670:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5670: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5672: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5690; /* 0x140E5674: jne 0x140e5690 */
L_140E5676:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5676: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E568C; /* 0x140E5678: je 0x140e568c */
L_140E567A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E567A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E567D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5690; /* 0x140E5680: jne 0x140e5690 */
L_140E5682:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5682: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5685: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5688: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5670; /* 0x140E568A: jne 0x140e5670 */
L_140E568C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E568C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5695; /* 0x140E568E: jmp 0x140e5695 */
L_140E5690:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5690: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5692: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5695:
    /* test eax, eax */ /* 0x140E5695: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E56A7; /* 0x140E5697: jne 0x140e56a7 */
L_140E5699:
    eax = 0x13Eu; /* 0x140E5699: mov eax, 0x13e */
    edi = POP32_VAL(esp); /* 0x140E569E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E569F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E56A0: pop ebx */
    esp = ebp; /* 0x140E56A1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E56A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E56A4: ret 0xc */
L_140E56A7:
    edx = 0x1403405Cu; /* 0x140E56A7: mov edx, 0x1403405c */
    eax = ecx; /* 0x140E56AC: mov eax, ecx */
    edi = edi; /* 0x140E56AE: mov edi, edi */
L_140E56B0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E56B0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E56B2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E56D0; /* 0x140E56B4: jne 0x140e56d0 */
L_140E56B6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E56B6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E56CC; /* 0x140E56B8: je 0x140e56cc */
L_140E56BA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E56BA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E56BD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E56D0; /* 0x140E56C0: jne 0x140e56d0 */
L_140E56C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E56C2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E56C5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E56C8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E56B0; /* 0x140E56CA: jne 0x140e56b0 */
L_140E56CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E56CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E56D5; /* 0x140E56CE: jmp 0x140e56d5 */
L_140E56D0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E56D0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E56D2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E56D5:
    /* test eax, eax */ /* 0x140E56D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E56E7; /* 0x140E56D7: jne 0x140e56e7 */
L_140E56D9:
    eax = 0x13Fu; /* 0x140E56D9: mov eax, 0x13f */
    edi = POP32_VAL(esp); /* 0x140E56DE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E56DF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E56E0: pop ebx */
    esp = ebp; /* 0x140E56E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E56E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E56E4: ret 0xc */
L_140E56E7:
    edx = 0x14034068u; /* 0x140E56E7: mov edx, 0x14034068 */
    eax = ecx; /* 0x140E56EC: mov eax, ecx */
    edi = edi; /* 0x140E56EE: mov edi, edi */
L_140E56F0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E56F0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E56F2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5710; /* 0x140E56F4: jne 0x140e5710 */
L_140E56F6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E56F6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E570C; /* 0x140E56F8: je 0x140e570c */
L_140E56FA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E56FA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E56FD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5710; /* 0x140E5700: jne 0x140e5710 */
L_140E5702:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5702: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5705: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5708: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E56F0; /* 0x140E570A: jne 0x140e56f0 */
L_140E570C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E570C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5715; /* 0x140E570E: jmp 0x140e5715 */
L_140E5710:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5710: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5712: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5715:
    /* test eax, eax */ /* 0x140E5715: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5727; /* 0x140E5717: jne 0x140e5727 */
L_140E5719:
    eax = 0x140u; /* 0x140E5719: mov eax, 0x140 */
    edi = POP32_VAL(esp); /* 0x140E571E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E571F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5720: pop ebx */
    esp = ebp; /* 0x140E5721: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5723: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5724: ret 0xc */
L_140E5727:
    edx = 0x14034074u; /* 0x140E5727: mov edx, 0x14034074 */
    eax = ecx; /* 0x140E572C: mov eax, ecx */
    edi = edi; /* 0x140E572E: mov edi, edi */
L_140E5730:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5730: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5732: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5750; /* 0x140E5734: jne 0x140e5750 */
L_140E5736:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5736: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E574C; /* 0x140E5738: je 0x140e574c */
L_140E573A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E573A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E573D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5750; /* 0x140E5740: jne 0x140e5750 */
L_140E5742:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5742: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5745: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5748: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5730; /* 0x140E574A: jne 0x140e5730 */
L_140E574C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E574C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5755; /* 0x140E574E: jmp 0x140e5755 */
L_140E5750:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5750: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5752: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5755:
    /* test eax, eax */ /* 0x140E5755: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5767; /* 0x140E5757: jne 0x140e5767 */
L_140E5759:
    eax = 0x141u; /* 0x140E5759: mov eax, 0x141 */
    edi = POP32_VAL(esp); /* 0x140E575E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E575F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5760: pop ebx */
    esp = ebp; /* 0x140E5761: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5763: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5764: ret 0xc */
L_140E5767:
    edx = 0x1403F55Cu; /* 0x140E5767: mov edx, 0x1403f55c */
    eax = ecx; /* 0x140E576C: mov eax, ecx */
    edi = edi; /* 0x140E576E: mov edi, edi */
L_140E5770:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5770: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5772: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5790; /* 0x140E5774: jne 0x140e5790 */
L_140E5776:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5776: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E578C; /* 0x140E5778: je 0x140e578c */
L_140E577A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E577A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E577D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5790; /* 0x140E5780: jne 0x140e5790 */
L_140E5782:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5782: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5785: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5788: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5770; /* 0x140E578A: jne 0x140e5770 */
L_140E578C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E578C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5795; /* 0x140E578E: jmp 0x140e5795 */
L_140E5790:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5790: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5792: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5795:
    /* test eax, eax */ /* 0x140E5795: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E57A7; /* 0x140E5797: jne 0x140e57a7 */
L_140E5799:
    eax = 0x142u; /* 0x140E5799: mov eax, 0x142 */
    edi = POP32_VAL(esp); /* 0x140E579E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E579F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E57A0: pop ebx */
    esp = ebp; /* 0x140E57A1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E57A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E57A4: ret 0xc */
L_140E57A7:
    edx = 0x14036DE8u; /* 0x140E57A7: mov edx, 0x14036de8 */
    eax = ecx; /* 0x140E57AC: mov eax, ecx */
    edi = edi; /* 0x140E57AE: mov edi, edi */
L_140E57B0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E57B0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E57B2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E57D0; /* 0x140E57B4: jne 0x140e57d0 */
L_140E57B6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E57B6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E57CC; /* 0x140E57B8: je 0x140e57cc */
L_140E57BA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E57BA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E57BD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E57D0; /* 0x140E57C0: jne 0x140e57d0 */
L_140E57C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E57C2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E57C5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E57C8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E57B0; /* 0x140E57CA: jne 0x140e57b0 */
L_140E57CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E57CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E57D5; /* 0x140E57CE: jmp 0x140e57d5 */
L_140E57D0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E57D0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E57D2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E57D5:
    /* test eax, eax */ /* 0x140E57D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E57E7; /* 0x140E57D7: jne 0x140e57e7 */
L_140E57D9:
    eax = 0x143u; /* 0x140E57D9: mov eax, 0x143 */
    edi = POP32_VAL(esp); /* 0x140E57DE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E57DF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E57E0: pop ebx */
    esp = ebp; /* 0x140E57E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E57E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E57E4: ret 0xc */
L_140E57E7:
    edx = 0x1403F56Cu; /* 0x140E57E7: mov edx, 0x1403f56c */
    eax = ecx; /* 0x140E57EC: mov eax, ecx */
    edi = edi; /* 0x140E57EE: mov edi, edi */
L_140E57F0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E57F0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E57F2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5810; /* 0x140E57F4: jne 0x140e5810 */
L_140E57F6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E57F6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E580C; /* 0x140E57F8: je 0x140e580c */
L_140E57FA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E57FA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E57FD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5810; /* 0x140E5800: jne 0x140e5810 */
L_140E5802:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5802: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5805: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5808: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E57F0; /* 0x140E580A: jne 0x140e57f0 */
L_140E580C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E580C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5815; /* 0x140E580E: jmp 0x140e5815 */
L_140E5810:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5810: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5812: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5815:
    /* test eax, eax */ /* 0x140E5815: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E5817: je 0x140e472d */
L_140E581D:
    edx = 0x1403F574u; /* 0x140E581D: mov edx, 0x1403f574 */
    eax = ecx; /* 0x140E5822: mov eax, ecx */
L_140E5824:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5824: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5826: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5844; /* 0x140E5828: jne 0x140e5844 */
L_140E582A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E582A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5840; /* 0x140E582C: je 0x140e5840 */
L_140E582E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E582E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5831: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5844; /* 0x140E5834: jne 0x140e5844 */
L_140E5836:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5836: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5839: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E583C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5824; /* 0x140E583E: jne 0x140e5824 */
L_140E5840:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5840: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5849; /* 0x140E5842: jmp 0x140e5849 */
L_140E5844:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5844: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5846: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5849:
    /* test eax, eax */ /* 0x140E5849: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E584B: je 0x140e472d */
L_140E5851:
    edx = 0x140341FCu; /* 0x140E5851: mov edx, 0x140341fc */
    eax = ecx; /* 0x140E5856: mov eax, ecx */
L_140E5858:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5858: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E585A: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5878; /* 0x140E585C: jne 0x140e5878 */
L_140E585E:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E585E: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5874; /* 0x140E5860: je 0x140e5874 */
L_140E5862:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5862: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5865: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5878; /* 0x140E5868: jne 0x140e5878 */
L_140E586A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E586A: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E586D: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5870: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5858; /* 0x140E5872: jne 0x140e5858 */
L_140E5874:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5874: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E587D; /* 0x140E5876: jmp 0x140e587d */
L_140E5878:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5878: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E587A: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E587D:
    /* test eax, eax */ /* 0x140E587D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E588F; /* 0x140E587F: jne 0x140e588f */
L_140E5881:
    eax = 0x144u; /* 0x140E5881: mov eax, 0x144 */
    edi = POP32_VAL(esp); /* 0x140E5886: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5887: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5888: pop ebx */
    esp = ebp; /* 0x140E5889: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E588B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E588C: ret 0xc */
L_140E588F:
    edx = 0x1403F57Cu; /* 0x140E588F: mov edx, 0x1403f57c */
    eax = ecx; /* 0x140E5894: mov eax, ecx */
L_140E5896:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5896: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5898: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E58B6; /* 0x140E589A: jne 0x140e58b6 */
L_140E589C:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E589C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E58B2; /* 0x140E589E: je 0x140e58b2 */
L_140E58A0:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E58A0: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E58A3: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E58B6; /* 0x140E58A6: jne 0x140e58b6 */
L_140E58A8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E58A8: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E58AB: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E58AE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5896; /* 0x140E58B0: jne 0x140e5896 */
L_140E58B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E58B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E58BB; /* 0x140E58B4: jmp 0x140e58bb */
L_140E58B6:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E58B6: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E58B8: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E58BB:
    /* test eax, eax */ /* 0x140E58BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E58CD; /* 0x140E58BD: jne 0x140e58cd */
L_140E58BF:
    eax = 0x146u; /* 0x140E58BF: mov eax, 0x146 */
    edi = POP32_VAL(esp); /* 0x140E58C4: pop edi */
    esi = POP32_VAL(esp); /* 0x140E58C5: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E58C6: pop ebx */
    esp = ebp; /* 0x140E58C7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E58C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E58CA: ret 0xc */
L_140E58CD:
    edx = 0x1403F590u; /* 0x140E58CD: mov edx, 0x1403f590 */
    eax = ecx; /* 0x140E58D2: mov eax, ecx */
L_140E58D4:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E58D4: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E58D6: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E58F4; /* 0x140E58D8: jne 0x140e58f4 */
L_140E58DA:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E58DA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E58F0; /* 0x140E58DC: je 0x140e58f0 */
L_140E58DE:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E58DE: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E58E1: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E58F4; /* 0x140E58E4: jne 0x140e58f4 */
L_140E58E6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E58E6: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E58E9: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E58EC: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E58D4; /* 0x140E58EE: jne 0x140e58d4 */
L_140E58F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E58F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E58F9; /* 0x140E58F2: jmp 0x140e58f9 */
L_140E58F4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E58F4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E58F6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E58F9:
    /* test eax, eax */ /* 0x140E58F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E590B; /* 0x140E58FB: jne 0x140e590b */
L_140E58FD:
    eax = 0x147u; /* 0x140E58FD: mov eax, 0x147 */
    edi = POP32_VAL(esp); /* 0x140E5902: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5903: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5904: pop ebx */
    esp = ebp; /* 0x140E5905: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5907: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5908: ret 0xc */
L_140E590B:
    edx = 0x1403F598u; /* 0x140E590B: mov edx, 0x1403f598 */
    eax = ecx; /* 0x140E5910: mov eax, ecx */
L_140E5912:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5912: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5914: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5932; /* 0x140E5916: jne 0x140e5932 */
L_140E5918:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5918: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E592E; /* 0x140E591A: je 0x140e592e */
L_140E591C:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E591C: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E591F: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5932; /* 0x140E5922: jne 0x140e5932 */
L_140E5924:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5924: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5927: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E592A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5912; /* 0x140E592C: jne 0x140e5912 */
L_140E592E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E592E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5937; /* 0x140E5930: jmp 0x140e5937 */
L_140E5932:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5932: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5934: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5937:
    /* test eax, eax */ /* 0x140E5937: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E5939: je 0x140e472d */
L_140E593F:
    edx = 0x14033F9Cu; /* 0x140E593F: mov edx, 0x14033f9c */
    eax = ecx; /* 0x140E5944: mov eax, ecx */
L_140E5946:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5946: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5948: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5966; /* 0x140E594A: jne 0x140e5966 */
L_140E594C:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E594C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5962; /* 0x140E594E: je 0x140e5962 */
L_140E5950:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5950: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5953: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5966; /* 0x140E5956: jne 0x140e5966 */
L_140E5958:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5958: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E595B: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E595E: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5946; /* 0x140E5960: jne 0x140e5946 */
L_140E5962:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5962: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E596B; /* 0x140E5964: jmp 0x140e596b */
L_140E5966:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5966: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5968: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E596B:
    /* test eax, eax */ /* 0x140E596B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E597D; /* 0x140E596D: jne 0x140e597d */
L_140E596F:
    eax = 0x148u; /* 0x140E596F: mov eax, 0x148 */
    edi = POP32_VAL(esp); /* 0x140E5974: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5975: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5976: pop ebx */
    esp = ebp; /* 0x140E5977: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5979: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E597A: ret 0xc */
L_140E597D:
    edx = 0x14034488u; /* 0x140E597D: mov edx, 0x14034488 */
    eax = ecx; /* 0x140E5982: mov eax, ecx */
L_140E5984:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5984: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5986: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E59A4; /* 0x140E5988: jne 0x140e59a4 */
L_140E598A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E598A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E59A0; /* 0x140E598C: je 0x140e59a0 */
L_140E598E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E598E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5991: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E59A4; /* 0x140E5994: jne 0x140e59a4 */
L_140E5996:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5996: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5999: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E599C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5984; /* 0x140E599E: jne 0x140e5984 */
L_140E59A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E59A0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E59A9; /* 0x140E59A2: jmp 0x140e59a9 */
L_140E59A4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E59A4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E59A6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E59A9:
    /* test eax, eax */ /* 0x140E59A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E59BB; /* 0x140E59AB: jne 0x140e59bb */
L_140E59AD:
    eax = 0x149u; /* 0x140E59AD: mov eax, 0x149 */
    edi = POP32_VAL(esp); /* 0x140E59B2: pop edi */
    esi = POP32_VAL(esp); /* 0x140E59B3: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E59B4: pop ebx */
    esp = ebp; /* 0x140E59B5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E59B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E59B8: ret 0xc */
L_140E59BB:
    edx = 0x1403F5A4u; /* 0x140E59BB: mov edx, 0x1403f5a4 */
    eax = ecx; /* 0x140E59C0: mov eax, ecx */
L_140E59C2:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E59C2: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E59C4: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E59E2; /* 0x140E59C6: jne 0x140e59e2 */
L_140E59C8:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E59C8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E59DE; /* 0x140E59CA: je 0x140e59de */
L_140E59CC:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E59CC: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E59CF: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E59E2; /* 0x140E59D2: jne 0x140e59e2 */
L_140E59D4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E59D4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E59D7: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E59DA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E59C2; /* 0x140E59DC: jne 0x140e59c2 */
L_140E59DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E59DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E59E7; /* 0x140E59E0: jmp 0x140e59e7 */
L_140E59E2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E59E2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E59E4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E59E7:
    /* test eax, eax */ /* 0x140E59E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E59F9; /* 0x140E59E9: jne 0x140e59f9 */
L_140E59EB:
    eax = 0x14Au; /* 0x140E59EB: mov eax, 0x14a */
    edi = POP32_VAL(esp); /* 0x140E59F0: pop edi */
    esi = POP32_VAL(esp); /* 0x140E59F1: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E59F2: pop ebx */
    esp = ebp; /* 0x140E59F3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E59F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E59F6: ret 0xc */
L_140E59F9:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E59F9: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E5A00: jne 0x140e66b7 */
L_140E5A06:
    edx = 0x14034038u; /* 0x140E5A06: mov edx, 0x14034038 */
    eax = ecx; /* 0x140E5A0B: mov eax, ecx */
    ecx = ecx; /* 0x140E5A0D: lea ecx, [ecx] */
L_140E5A10:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5A10: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5A12: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5A30; /* 0x140E5A14: jne 0x140e5a30 */
L_140E5A16:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5A16: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5A2C; /* 0x140E5A18: je 0x140e5a2c */
L_140E5A1A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5A1A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5A1D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5A30; /* 0x140E5A20: jne 0x140e5a30 */
L_140E5A22:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5A22: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5A25: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5A28: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5A10; /* 0x140E5A2A: jne 0x140e5a10 */
L_140E5A2C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5A2C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5A35; /* 0x140E5A2E: jmp 0x140e5a35 */
L_140E5A30:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5A30: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5A32: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5A35:
    /* test eax, eax */ /* 0x140E5A35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5A47; /* 0x140E5A37: jne 0x140e5a47 */
L_140E5A39:
    eax = 0x13Cu; /* 0x140E5A39: mov eax, 0x13c */
    edi = POP32_VAL(esp); /* 0x140E5A3E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5A3F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5A40: pop ebx */
    esp = ebp; /* 0x140E5A41: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5A43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5A44: ret 0xc */
L_140E5A47:
    eax = 0x1403F5ACu; /* 0x140E5A47: mov eax, 0x1403f5ac */
    esp = esp; /* 0x140E5A4C: lea esp, [esp] */
L_140E5A50:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E5A50: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E5A52: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5A70; /* 0x140E5A54: jne 0x140e5a70 */
L_140E5A56:
    /* test LO8(edx), LO8(edx) */ /* 0x140E5A56: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5A6C; /* 0x140E5A58: je 0x140e5a6c */
L_140E5A5A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E5A5A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E5A5D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5A70; /* 0x140E5A60: jne 0x140e5a70 */
L_140E5A62:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E5A62: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5A65: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E5A68: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5A50; /* 0x140E5A6A: jne 0x140e5a50 */
L_140E5A6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5A6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5A75; /* 0x140E5A6E: jmp 0x140e5a75 */
L_140E5A70:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5A70: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5A72: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5A75:
    /* test eax, eax */ /* 0x140E5A75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E5A77: jne 0x140e66b7 */
L_140E5A7D:
    eax = 0x145u; /* 0x140E5A7D: mov eax, 0x145 */
    edi = POP32_VAL(esp); /* 0x140E5A82: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5A83: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5A84: pop ebx */
    esp = ebp; /* 0x140E5A85: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5A87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5A88: ret 0xc */
L_140E5A8B:
    edx = 0x14037350u; /* 0x140E5A8B: mov edx, 0x14037350 */
    eax = ecx; /* 0x140E5A90: mov eax, ecx */
L_140E5A92:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5A92: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5A94: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5AB2; /* 0x140E5A96: jne 0x140e5ab2 */
L_140E5A98:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5A98: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5AAE; /* 0x140E5A9A: je 0x140e5aae */
L_140E5A9C:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5A9C: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5A9F: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5AB2; /* 0x140E5AA2: jne 0x140e5ab2 */
L_140E5AA4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5AA4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5AA7: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5AAA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5A92; /* 0x140E5AAC: jne 0x140e5a92 */
L_140E5AAE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5AAE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5AB7; /* 0x140E5AB0: jmp 0x140e5ab7 */
L_140E5AB2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5AB2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5AB4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5AB7:
    /* test eax, eax */ /* 0x140E5AB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E596F; /* 0x140E5AB9: je 0x140e596f */
L_140E5ABF:
    edx = 0x14034040u; /* 0x140E5ABF: mov edx, 0x14034040 */
    eax = ecx; /* 0x140E5AC4: mov eax, ecx */
L_140E5AC6:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5AC6: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5AC8: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5AE6; /* 0x140E5ACA: jne 0x140e5ae6 */
L_140E5ACC:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5ACC: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5AE2; /* 0x140E5ACE: je 0x140e5ae2 */
L_140E5AD0:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5AD0: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5AD3: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5AE6; /* 0x140E5AD6: jne 0x140e5ae6 */
L_140E5AD8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5AD8: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5ADB: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5ADE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5AC6; /* 0x140E5AE0: jne 0x140e5ac6 */
L_140E5AE2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5AE2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5AEB; /* 0x140E5AE4: jmp 0x140e5aeb */
L_140E5AE6:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5AE6: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5AE8: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5AEB:
    /* test eax, eax */ /* 0x140E5AEB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5A39; /* 0x140E5AED: je 0x140e5a39 */
L_140E5AF3:
    edx = 0x14037430u; /* 0x140E5AF3: mov edx, 0x14037430 */
    eax = ecx; /* 0x140E5AF8: mov eax, ecx */
    ebx = ebx; /* 0x140E5AFA: lea ebx, [ebx] */
L_140E5B00:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5B00: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5B02: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5B20; /* 0x140E5B04: jne 0x140e5b20 */
L_140E5B06:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5B06: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5B1C; /* 0x140E5B08: je 0x140e5b1c */
L_140E5B0A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5B0A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5B0D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5B20; /* 0x140E5B10: jne 0x140e5b20 */
L_140E5B12:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5B12: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5B15: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5B18: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5B00; /* 0x140E5B1A: jne 0x140e5b00 */
L_140E5B1C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5B1C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5B25; /* 0x140E5B1E: jmp 0x140e5b25 */
L_140E5B20:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5B20: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5B22: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5B25:
    /* test eax, eax */ /* 0x140E5B25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5B37; /* 0x140E5B27: jne 0x140e5b37 */
L_140E5B29:
    eax = 0x13Du; /* 0x140E5B29: mov eax, 0x13d */
    edi = POP32_VAL(esp); /* 0x140E5B2E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5B2F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5B30: pop ebx */
    esp = ebp; /* 0x140E5B31: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5B33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5B34: ret 0xc */
L_140E5B37:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E5B37: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E5B3E: jne 0x140e66b7 */
L_140E5B44:
    eax = 0x140373D8u; /* 0x140E5B44: mov eax, 0x140373d8 */
    esp = esp; /* 0x140E5B49: lea esp, [esp] */
L_140E5B50:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E5B50: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E5B52: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5B70; /* 0x140E5B54: jne 0x140e5b70 */
L_140E5B56:
    /* test LO8(edx), LO8(edx) */ /* 0x140E5B56: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5B6C; /* 0x140E5B58: je 0x140e5b6c */
L_140E5B5A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E5B5A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E5B5D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5B70; /* 0x140E5B60: jne 0x140e5b70 */
L_140E5B62:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E5B62: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5B65: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E5B68: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5B50; /* 0x140E5B6A: jne 0x140e5b50 */
L_140E5B6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5B6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5B75; /* 0x140E5B6E: jmp 0x140e5b75 */
L_140E5B70:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5B70: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5B72: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5B75:
    /* test eax, eax */ /* 0x140E5B75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E5B77: jne 0x140e66b7 */
L_140E5B7D:
    edx = MEM32(ebp + 0xC); /* 0x140E5B7D: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x42u; /* 0x140E5B80: mov dword ptr [edx], 0x42 */
    eax = 0x181u; /* 0x140E5B86: mov eax, 0x181 */
    edi = POP32_VAL(esp); /* 0x140E5B8B: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5B8C: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5B8D: pop ebx */
    esp = ebp; /* 0x140E5B8E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5B90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5B91: ret 0xc */
L_140E5B94:
    edx = 0x14034268u; /* 0x140E5B94: mov edx, 0x14034268 */
    eax = ecx; /* 0x140E5B99: mov eax, ecx */
    goto L_140E5BA0; /* 0x140E5B9B: jmp 0x140e5ba0 */
L_140E5BA0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5BA0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5BA2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5BC0; /* 0x140E5BA4: jne 0x140e5bc0 */
L_140E5BA6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5BA6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5BBC; /* 0x140E5BA8: je 0x140e5bbc */
L_140E5BAA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5BAA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5BAD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5BC0; /* 0x140E5BB0: jne 0x140e5bc0 */
L_140E5BB2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5BB2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5BB5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5BB8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5BA0; /* 0x140E5BBA: jne 0x140e5ba0 */
L_140E5BBC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5BBC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5BC5; /* 0x140E5BBE: jmp 0x140e5bc5 */
L_140E5BC0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5BC0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5BC2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5BC5:
    /* test eax, eax */ /* 0x140E5BC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5BD7; /* 0x140E5BC7: jne 0x140e5bd7 */
L_140E5BC9:
    eax = 0x14Bu; /* 0x140E5BC9: mov eax, 0x14b */
    edi = POP32_VAL(esp); /* 0x140E5BCE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5BCF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5BD0: pop ebx */
    esp = ebp; /* 0x140E5BD1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5BD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5BD4: ret 0xc */
L_140E5BD7:
    edx = 0x1403F5B8u; /* 0x140E5BD7: mov edx, 0x1403f5b8 */
    eax = ecx; /* 0x140E5BDC: mov eax, ecx */
    edi = edi; /* 0x140E5BDE: mov edi, edi */
L_140E5BE0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5BE0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5BE2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5C00; /* 0x140E5BE4: jne 0x140e5c00 */
L_140E5BE6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5BE6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5BFC; /* 0x140E5BE8: je 0x140e5bfc */
L_140E5BEA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5BEA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5BED: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5C00; /* 0x140E5BF0: jne 0x140e5c00 */
L_140E5BF2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5BF2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5BF5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5BF8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5BE0; /* 0x140E5BFA: jne 0x140e5be0 */
L_140E5BFC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5BFC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5C05; /* 0x140E5BFE: jmp 0x140e5c05 */
L_140E5C00:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5C00: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5C02: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5C05:
    /* test eax, eax */ /* 0x140E5C05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E5C07: je 0x140e472d */
L_140E5C0D:
    edx = 0x1403F5C4u; /* 0x140E5C0D: mov edx, 0x1403f5c4 */
    eax = ecx; /* 0x140E5C12: mov eax, ecx */
L_140E5C14:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5C14: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5C16: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5C34; /* 0x140E5C18: jne 0x140e5c34 */
L_140E5C1A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5C1A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5C30; /* 0x140E5C1C: je 0x140e5c30 */
L_140E5C1E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5C1E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5C21: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5C34; /* 0x140E5C24: jne 0x140e5c34 */
L_140E5C26:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5C26: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5C29: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5C2C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5C14; /* 0x140E5C2E: jne 0x140e5c14 */
L_140E5C30:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5C30: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5C39; /* 0x140E5C32: jmp 0x140e5c39 */
L_140E5C34:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5C34: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5C36: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5C39:
    /* test eax, eax */ /* 0x140E5C39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5C4B; /* 0x140E5C3B: jne 0x140e5c4b */
L_140E5C3D:
    eax = 0x152u; /* 0x140E5C3D: mov eax, 0x152 */
    edi = POP32_VAL(esp); /* 0x140E5C42: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5C43: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5C44: pop ebx */
    esp = ebp; /* 0x140E5C45: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5C47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5C48: ret 0xc */
L_140E5C4B:
    edx = 0x1403F5D0u; /* 0x140E5C4B: mov edx, 0x1403f5d0 */
    eax = ecx; /* 0x140E5C50: mov eax, ecx */
L_140E5C52:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5C52: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5C54: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5C72; /* 0x140E5C56: jne 0x140e5c72 */
L_140E5C58:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5C58: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5C6E; /* 0x140E5C5A: je 0x140e5c6e */
L_140E5C5C:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5C5C: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5C5F: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5C72; /* 0x140E5C62: jne 0x140e5c72 */
L_140E5C64:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5C64: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5C67: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5C6A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5C52; /* 0x140E5C6C: jne 0x140e5c52 */
L_140E5C6E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5C6E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5C77; /* 0x140E5C70: jmp 0x140e5c77 */
L_140E5C72:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5C72: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5C74: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5C77:
    /* test eax, eax */ /* 0x140E5C77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5C89; /* 0x140E5C79: jne 0x140e5c89 */
L_140E5C7B:
    eax = 0x153u; /* 0x140E5C7B: mov eax, 0x153 */
    edi = POP32_VAL(esp); /* 0x140E5C80: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5C81: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5C82: pop ebx */
    esp = ebp; /* 0x140E5C83: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5C85: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5C86: ret 0xc */
L_140E5C89:
    edx = 0x1403F5DCu; /* 0x140E5C89: mov edx, 0x1403f5dc */
    eax = ecx; /* 0x140E5C8E: mov eax, ecx */
L_140E5C90:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5C90: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5C92: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5CB0; /* 0x140E5C94: jne 0x140e5cb0 */
L_140E5C96:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5C96: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5CAC; /* 0x140E5C98: je 0x140e5cac */
L_140E5C9A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5C9A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5C9D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5CB0; /* 0x140E5CA0: jne 0x140e5cb0 */
L_140E5CA2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5CA2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5CA5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5CA8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5C90; /* 0x140E5CAA: jne 0x140e5c90 */
L_140E5CAC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5CAC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5CB5; /* 0x140E5CAE: jmp 0x140e5cb5 */
L_140E5CB0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5CB0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5CB2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5CB5:
    /* test eax, eax */ /* 0x140E5CB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E5CB7: je 0x140e472d */
L_140E5CBD:
    edx = 0x14033628u; /* 0x140E5CBD: mov edx, 0x14033628 */
    eax = ecx; /* 0x140E5CC2: mov eax, ecx */
L_140E5CC4:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5CC4: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5CC6: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5CE4; /* 0x140E5CC8: jne 0x140e5ce4 */
L_140E5CCA:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5CCA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5CE0; /* 0x140E5CCC: je 0x140e5ce0 */
L_140E5CCE:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5CCE: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5CD1: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5CE4; /* 0x140E5CD4: jne 0x140e5ce4 */
L_140E5CD6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5CD6: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5CD9: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5CDC: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5CC4; /* 0x140E5CDE: jne 0x140e5cc4 */
L_140E5CE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5CE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5CE9; /* 0x140E5CE2: jmp 0x140e5ce9 */
L_140E5CE4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5CE4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5CE6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5CE9:
    /* test eax, eax */ /* 0x140E5CE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5CFB; /* 0x140E5CEB: jne 0x140e5cfb */
L_140E5CED:
    eax = 0x155u; /* 0x140E5CED: mov eax, 0x155 */
    edi = POP32_VAL(esp); /* 0x140E5CF2: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5CF3: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5CF4: pop ebx */
    esp = ebp; /* 0x140E5CF5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5CF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5CF8: ret 0xc */
L_140E5CFB:
    edx = 0x1403F5E4u; /* 0x140E5CFB: mov edx, 0x1403f5e4 */
    eax = ecx; /* 0x140E5D00: mov eax, ecx */
L_140E5D02:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5D02: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5D04: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5D22; /* 0x140E5D06: jne 0x140e5d22 */
L_140E5D08:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5D08: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5D1E; /* 0x140E5D0A: je 0x140e5d1e */
L_140E5D0C:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5D0C: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5D0F: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5D22; /* 0x140E5D12: jne 0x140e5d22 */
L_140E5D14:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5D14: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5D17: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5D1A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5D02; /* 0x140E5D1C: jne 0x140e5d02 */
L_140E5D1E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5D1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5D27; /* 0x140E5D20: jmp 0x140e5d27 */
L_140E5D22:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5D22: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5D24: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5D27:
    /* test eax, eax */ /* 0x140E5D27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E5D29: je 0x140e472d */
L_140E5D2F:
    edx = 0x1403F5E8u; /* 0x140E5D2F: mov edx, 0x1403f5e8 */
    eax = ecx; /* 0x140E5D34: mov eax, ecx */
L_140E5D36:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5D36: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5D38: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5D56; /* 0x140E5D3A: jne 0x140e5d56 */
L_140E5D3C:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5D3C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5D52; /* 0x140E5D3E: je 0x140e5d52 */
L_140E5D40:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5D40: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5D43: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5D56; /* 0x140E5D46: jne 0x140e5d56 */
L_140E5D48:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5D48: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5D4B: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5D4E: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5D36; /* 0x140E5D50: jne 0x140e5d36 */
L_140E5D52:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5D52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5D5B; /* 0x140E5D54: jmp 0x140e5d5b */
L_140E5D56:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5D56: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5D58: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5D5B:
    /* test eax, eax */ /* 0x140E5D5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5D6D; /* 0x140E5D5D: jne 0x140e5d6d */
L_140E5D5F:
    eax = 0x156u; /* 0x140E5D5F: mov eax, 0x156 */
    edi = POP32_VAL(esp); /* 0x140E5D64: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5D65: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5D66: pop ebx */
    esp = ebp; /* 0x140E5D67: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5D69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5D6A: ret 0xc */
L_140E5D6D:
    edx = 0x1403F5F0u; /* 0x140E5D6D: mov edx, 0x1403f5f0 */
    eax = ecx; /* 0x140E5D72: mov eax, ecx */
L_140E5D74:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5D74: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5D76: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5D94; /* 0x140E5D78: jne 0x140e5d94 */
L_140E5D7A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5D7A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5D90; /* 0x140E5D7C: je 0x140e5d90 */
L_140E5D7E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5D7E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5D81: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5D94; /* 0x140E5D84: jne 0x140e5d94 */
L_140E5D86:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5D86: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5D89: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5D8C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5D74; /* 0x140E5D8E: jne 0x140e5d74 */
L_140E5D90:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5D90: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5D99; /* 0x140E5D92: jmp 0x140e5d99 */
L_140E5D94:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5D94: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5D96: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5D99:
    /* test eax, eax */ /* 0x140E5D99: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E5D9B: je 0x140e472d */
L_140E5DA1:
    edx = 0x1403F5FCu; /* 0x140E5DA1: mov edx, 0x1403f5fc */
    eax = ecx; /* 0x140E5DA6: mov eax, ecx */
L_140E5DA8:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5DA8: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5DAA: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5DC8; /* 0x140E5DAC: jne 0x140e5dc8 */
L_140E5DAE:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5DAE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5DC4; /* 0x140E5DB0: je 0x140e5dc4 */
L_140E5DB2:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5DB2: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5DB5: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5DC8; /* 0x140E5DB8: jne 0x140e5dc8 */
L_140E5DBA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5DBA: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5DBD: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5DC0: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5DA8; /* 0x140E5DC2: jne 0x140e5da8 */
L_140E5DC4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5DC4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5DCD; /* 0x140E5DC6: jmp 0x140e5dcd */
L_140E5DC8:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5DC8: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5DCA: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5DCD:
    /* test eax, eax */ /* 0x140E5DCD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5DDF; /* 0x140E5DCF: jne 0x140e5ddf */
L_140E5DD1:
    eax = 0x14Cu; /* 0x140E5DD1: mov eax, 0x14c */
    edi = POP32_VAL(esp); /* 0x140E5DD6: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5DD7: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5DD8: pop ebx */
    esp = ebp; /* 0x140E5DD9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5DDB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5DDC: ret 0xc */
L_140E5DDF:
    edx = 0x14036D6Cu; /* 0x140E5DDF: mov edx, 0x14036d6c */
    eax = ecx; /* 0x140E5DE4: mov eax, ecx */
L_140E5DE6:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5DE6: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5DE8: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5E06; /* 0x140E5DEA: jne 0x140e5e06 */
L_140E5DEC:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5DEC: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5E02; /* 0x140E5DEE: je 0x140e5e02 */
L_140E5DF0:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5DF0: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5DF3: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5E06; /* 0x140E5DF6: jne 0x140e5e06 */
L_140E5DF8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5DF8: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5DFB: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5DFE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5DE6; /* 0x140E5E00: jne 0x140e5de6 */
L_140E5E02:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5E02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5E0B; /* 0x140E5E04: jmp 0x140e5e0b */
L_140E5E06:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5E06: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5E08: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5E0B:
    /* test eax, eax */ /* 0x140E5E0B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5E1D; /* 0x140E5E0D: jne 0x140e5e1d */
L_140E5E0F:
    eax = 0x14Du; /* 0x140E5E0F: mov eax, 0x14d */
    edi = POP32_VAL(esp); /* 0x140E5E14: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5E15: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5E16: pop ebx */
    esp = ebp; /* 0x140E5E17: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5E19: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5E1A: ret 0xc */
L_140E5E1D:
    edx = 0x14036D60u; /* 0x140E5E1D: mov edx, 0x14036d60 */
    eax = ecx; /* 0x140E5E22: mov eax, ecx */
L_140E5E24:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5E24: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5E26: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5E44; /* 0x140E5E28: jne 0x140e5e44 */
L_140E5E2A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5E2A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5E40; /* 0x140E5E2C: je 0x140e5e40 */
L_140E5E2E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5E2E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5E31: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5E44; /* 0x140E5E34: jne 0x140e5e44 */
L_140E5E36:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5E36: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5E39: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5E3C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5E24; /* 0x140E5E3E: jne 0x140e5e24 */
L_140E5E40:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5E40: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5E49; /* 0x140E5E42: jmp 0x140e5e49 */
L_140E5E44:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5E44: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5E46: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5E49:
    /* test eax, eax */ /* 0x140E5E49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5E5B; /* 0x140E5E4B: jne 0x140e5e5b */
L_140E5E4D:
    eax = 0x14Eu; /* 0x140E5E4D: mov eax, 0x14e */
    edi = POP32_VAL(esp); /* 0x140E5E52: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5E53: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5E54: pop ebx */
    esp = ebp; /* 0x140E5E55: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5E57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5E58: ret 0xc */
L_140E5E5B:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E5E5B: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E5E62: jne 0x140e66b7 */
L_140E5E68:
    edx = 0x14034430u; /* 0x140E5E68: mov edx, 0x14034430 */
    eax = ecx; /* 0x140E5E6D: mov eax, ecx */
    /* nop */ /* 0x140E5E6F: nop  */
L_140E5E70:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5E70: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5E72: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5E90; /* 0x140E5E74: jne 0x140e5e90 */
L_140E5E76:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5E76: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5E8C; /* 0x140E5E78: je 0x140e5e8c */
L_140E5E7A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5E7A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5E7D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5E90; /* 0x140E5E80: jne 0x140e5e90 */
L_140E5E82:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5E82: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5E85: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5E88: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5E70; /* 0x140E5E8A: jne 0x140e5e70 */
L_140E5E8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5E8C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5E95; /* 0x140E5E8E: jmp 0x140e5e95 */
L_140E5E90:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5E90: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5E92: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5E95:
    /* test eax, eax */ /* 0x140E5E95: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5EA7; /* 0x140E5E97: jne 0x140e5ea7 */
L_140E5E99:
    eax = 0x14Fu; /* 0x140E5E99: mov eax, 0x14f */
    edi = POP32_VAL(esp); /* 0x140E5E9E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5E9F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5EA0: pop ebx */
    esp = ebp; /* 0x140E5EA1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5EA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5EA4: ret 0xc */
L_140E5EA7:
    /* test MEM32(edi + 0x50), 0x800u */ /* 0x140E5EA7: test dword ptr [edi + 0x50], 0x800 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5FD9; /* 0x140E5EAE: jne 0x140e5fd9 */
L_140E5EB4:
    edx = 0x1403F608u; /* 0x140E5EB4: mov edx, 0x1403f608 */
    eax = ecx; /* 0x140E5EB9: mov eax, ecx */
    goto L_140E5EC0; /* 0x140E5EBB: jmp 0x140e5ec0 */
L_140E5EC0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5EC0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5EC2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5EE0; /* 0x140E5EC4: jne 0x140e5ee0 */
L_140E5EC6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5EC6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5EDC; /* 0x140E5EC8: je 0x140e5edc */
L_140E5ECA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5ECA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5ECD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5EE0; /* 0x140E5ED0: jne 0x140e5ee0 */
L_140E5ED2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5ED2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5ED5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5ED8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5EC0; /* 0x140E5EDA: jne 0x140e5ec0 */
L_140E5EDC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5EDC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5EE5; /* 0x140E5EDE: jmp 0x140e5ee5 */
L_140E5EE0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5EE0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5EE2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5EE5:
    /* test eax, eax */ /* 0x140E5EE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5F00; /* 0x140E5EE7: jne 0x140e5f00 */
L_140E5EE9:
    edx = MEM32(ebp + 0xC); /* 0x140E5EE9: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x17u; /* 0x140E5EEC: mov dword ptr [edx], 0x17 */
    eax = 0x180u; /* 0x140E5EF2: mov eax, 0x180 */
    edi = POP32_VAL(esp); /* 0x140E5EF7: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5EF8: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5EF9: pop ebx */
    esp = ebp; /* 0x140E5EFA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5EFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5EFD: ret 0xc */
L_140E5F00:
    edx = 0x1403F614u; /* 0x140E5F00: mov edx, 0x1403f614 */
    eax = ecx; /* 0x140E5F05: mov eax, ecx */
L_140E5F07:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5F07: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5F09: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5F27; /* 0x140E5F0B: jne 0x140e5f27 */
L_140E5F0D:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5F0D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5F23; /* 0x140E5F0F: je 0x140e5f23 */
L_140E5F11:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5F11: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5F14: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5F27; /* 0x140E5F17: jne 0x140e5f27 */
L_140E5F19:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5F19: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5F1C: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5F1F: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5F07; /* 0x140E5F21: jne 0x140e5f07 */
L_140E5F23:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5F23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5F2C; /* 0x140E5F25: jmp 0x140e5f2c */
L_140E5F27:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5F27: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5F29: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5F2C:
    /* test eax, eax */ /* 0x140E5F2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5F47; /* 0x140E5F2E: jne 0x140e5f47 */
L_140E5F30:
    edx = MEM32(ebp + 0xC); /* 0x140E5F30: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x19u; /* 0x140E5F33: mov dword ptr [edx], 0x19 */
    eax = 0x180u; /* 0x140E5F39: mov eax, 0x180 */
    edi = POP32_VAL(esp); /* 0x140E5F3E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5F3F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5F40: pop ebx */
    esp = ebp; /* 0x140E5F41: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5F43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5F44: ret 0xc */
L_140E5F47:
    edx = 0x1403F620u; /* 0x140E5F47: mov edx, 0x1403f620 */
    eax = ecx; /* 0x140E5F4C: mov eax, ecx */
    edi = edi; /* 0x140E5F4E: mov edi, edi */
L_140E5F50:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E5F50: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E5F52: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5F70; /* 0x140E5F54: jne 0x140e5f70 */
L_140E5F56:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5F56: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5F6C; /* 0x140E5F58: je 0x140e5f6c */
L_140E5F5A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E5F5A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E5F5D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5F70; /* 0x140E5F60: jne 0x140e5f70 */
L_140E5F62:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5F62: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E5F65: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E5F68: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5F50; /* 0x140E5F6A: jne 0x140e5f50 */
L_140E5F6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5F6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5F75; /* 0x140E5F6E: jmp 0x140e5f75 */
L_140E5F70:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5F70: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5F72: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5F75:
    /* test eax, eax */ /* 0x140E5F75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5F90; /* 0x140E5F77: jne 0x140e5f90 */
L_140E5F79:
    edx = MEM32(ebp + 0xC); /* 0x140E5F79: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x1Bu; /* 0x140E5F7C: mov dword ptr [edx], 0x1b */
    eax = 0x180u; /* 0x140E5F82: mov eax, 0x180 */
    edi = POP32_VAL(esp); /* 0x140E5F87: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5F88: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5F89: pop ebx */
    esp = ebp; /* 0x140E5F8A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5F8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5F8D: ret 0xc */
L_140E5F90:
    eax = 0x1403F62Cu; /* 0x140E5F90: mov eax, 0x1403f62c */
L_140E5F95:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E5F95: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E5F97: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5FB5; /* 0x140E5F99: jne 0x140e5fb5 */
L_140E5F9B:
    /* test LO8(edx), LO8(edx) */ /* 0x140E5F9B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5FB1; /* 0x140E5F9D: je 0x140e5fb1 */
L_140E5F9F:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E5F9F: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E5FA2: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E5FB5; /* 0x140E5FA5: jne 0x140e5fb5 */
L_140E5FA7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E5FA7: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5FAA: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E5FAD: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5F95; /* 0x140E5FAF: jne 0x140e5f95 */
L_140E5FB1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5FB1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E5FBA; /* 0x140E5FB3: jmp 0x140e5fba */
L_140E5FB5:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5FB5: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E5FB7: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E5FBA:
    /* test eax, eax */ /* 0x140E5FBA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E5FBC: jne 0x140e66b7 */
L_140E5FC2:
    edx = MEM32(ebp + 0xC); /* 0x140E5FC2: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x1Cu; /* 0x140E5FC5: mov dword ptr [edx], 0x1c */
    eax = 0x180u; /* 0x140E5FCB: mov eax, 0x180 */
    edi = POP32_VAL(esp); /* 0x140E5FD0: pop edi */
    esi = POP32_VAL(esp); /* 0x140E5FD1: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E5FD2: pop ebx */
    esp = ebp; /* 0x140E5FD3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E5FD5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E5FD6: ret 0xc */
L_140E5FD9:
    eax = 0x1403F608u; /* 0x140E5FD9: mov eax, 0x1403f608 */
    edi = edi; /* 0x140E5FDE: mov edi, edi */
L_140E5FE0:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E5FE0: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E5FE2: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6000; /* 0x140E5FE4: jne 0x140e6000 */
L_140E5FE6:
    /* test LO8(edx), LO8(edx) */ /* 0x140E5FE6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5FFC; /* 0x140E5FE8: je 0x140e5ffc */
L_140E5FEA:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E5FEA: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E5FED: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6000; /* 0x140E5FF0: jne 0x140e6000 */
L_140E5FF2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E5FF2: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E5FF5: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E5FF8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E5FE0; /* 0x140E5FFA: jne 0x140e5fe0 */
L_140E5FFC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E5FFC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6005; /* 0x140E5FFE: jmp 0x140e6005 */
L_140E6000:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6000: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6002: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6005:
    ebx = MEM32(ebp + 0x10); /* 0x140E6005: mov ebx, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x140E6008: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6022; /* 0x140E600A: jne 0x140e6022 */
L_140E600C:
    PUSH32(esp, 0x1403F638u); /* 0x140E600C: push 0x1403f638 */
    PUSH32(esp, 0xC0Eu); /* 0x140E6011: push 0xc0e */
    edx = ebx; /* 0x140E6016: mov edx, ebx */
    esi = edi; /* 0x140E6018: mov esi, edi */
    RECOMP_CALL(sub_140E6B90); /* 0x140E601A: call 0x140e6b90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E601F: add esp, 8 */
    _flag_k = FK_ADD;
L_140E6022:
    eax = MEM32(edi + 0x228); /* 0x140E6022: mov eax, dword ptr [edi + 0x228] */
    ecx = 0x1403F614u; /* 0x140E6028: mov ecx, 0x1403f614 */
    ecx = ecx; /* 0x140E602D: lea ecx, [ecx] */
L_140E6030:
    SET_LO8(edx, MEM8(eax)); /* 0x140E6030: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x140E6032: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6050; /* 0x140E6034: jne 0x140e6050 */
L_140E6036:
    /* test LO8(edx), LO8(edx) */ /* 0x140E6036: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E604C; /* 0x140E6038: je 0x140e604c */
L_140E603A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x140E603A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x140E603D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6050; /* 0x140E6040: jne 0x140e6050 */
L_140E6042:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6042: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E6045: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E6048: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6030; /* 0x140E604A: jne 0x140e6030 */
L_140E604C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E604C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6055; /* 0x140E604E: jmp 0x140e6055 */
L_140E6050:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6050: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6052: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6055:
    /* test eax, eax */ /* 0x140E6055: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E606F; /* 0x140E6057: jne 0x140e606f */
L_140E6059:
    PUSH32(esp, 0x1403F678u); /* 0x140E6059: push 0x1403f678 */
    PUSH32(esp, 0xC0Eu); /* 0x140E605E: push 0xc0e */
    edx = ebx; /* 0x140E6063: mov edx, ebx */
    esi = edi; /* 0x140E6065: mov esi, edi */
    RECOMP_CALL(sub_140E6B90); /* 0x140E6067: call 0x140e6b90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E606C: add esp, 8 */
    _flag_k = FK_ADD;
L_140E606F:
    eax = MEM32(edi + 0x228); /* 0x140E606F: mov eax, dword ptr [edi + 0x228] */
    ecx = 0x1403F620u; /* 0x140E6075: mov ecx, 0x1403f620 */
    ebx = ebx; /* 0x140E607A: lea ebx, [ebx] */
L_140E6080:
    SET_LO8(edx, MEM8(eax)); /* 0x140E6080: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x140E6082: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E60A0; /* 0x140E6084: jne 0x140e60a0 */
L_140E6086:
    /* test LO8(edx), LO8(edx) */ /* 0x140E6086: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E609C; /* 0x140E6088: je 0x140e609c */
L_140E608A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x140E608A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x140E608D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E60A0; /* 0x140E6090: jne 0x140e60a0 */
L_140E6092:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6092: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E6095: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E6098: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6080; /* 0x140E609A: jne 0x140e6080 */
L_140E609C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E609C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E60A5; /* 0x140E609E: jmp 0x140e60a5 */
L_140E60A0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E60A0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E60A2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E60A5:
    /* test eax, eax */ /* 0x140E60A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E60BF; /* 0x140E60A7: jne 0x140e60bf */
L_140E60A9:
    PUSH32(esp, 0x1403F6B8u); /* 0x140E60A9: push 0x1403f6b8 */
    PUSH32(esp, 0xC0Eu); /* 0x140E60AE: push 0xc0e */
    edx = ebx; /* 0x140E60B3: mov edx, ebx */
    esi = edi; /* 0x140E60B5: mov esi, edi */
    RECOMP_CALL(sub_140E6B90); /* 0x140E60B7: call 0x140e6b90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E60BC: add esp, 8 */
    _flag_k = FK_ADD;
L_140E60BF:
    eax = MEM32(edi + 0x228); /* 0x140E60BF: mov eax, dword ptr [edi + 0x228] */
    ecx = 0x1403F62Cu; /* 0x140E60C5: mov ecx, 0x1403f62c */
    ebx = ebx; /* 0x140E60CA: lea ebx, [ebx] */
L_140E60D0:
    SET_LO8(edx, MEM8(eax)); /* 0x140E60D0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x140E60D2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E60F0; /* 0x140E60D4: jne 0x140e60f0 */
L_140E60D6:
    /* test LO8(edx), LO8(edx) */ /* 0x140E60D6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E60EC; /* 0x140E60D8: je 0x140e60ec */
L_140E60DA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x140E60DA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x140E60DD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E60F0; /* 0x140E60E0: jne 0x140e60f0 */
L_140E60E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E60E2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E60E5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E60E8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E60D0; /* 0x140E60EA: jne 0x140e60d0 */
L_140E60EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E60EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E60F5; /* 0x140E60EE: jmp 0x140e60f5 */
L_140E60F0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E60F0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E60F2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E60F5:
    /* test eax, eax */ /* 0x140E60F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E51E3; /* 0x140E60F7: jne 0x140e51e3 */
L_140E60FD:
    PUSH32(esp, 0x1403F6F8u); /* 0x140E60FD: push 0x1403f6f8 */
    RECOMP_BACKEDGE();
    goto L_140E51D2; /* 0x140E6102: jmp 0x140e51d2 */
L_140E6107:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E6107: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E610E: jne 0x140e66b7 */
L_140E6114:
    edx = 0x14033FB4u; /* 0x140E6114: mov edx, 0x14033fb4 */
    eax = ecx; /* 0x140E6119: mov eax, ecx */
    goto L_140E6120; /* 0x140E611B: jmp 0x140e6120 */
L_140E6120:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E6120: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E6122: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6140; /* 0x140E6124: jne 0x140e6140 */
L_140E6126:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E6126: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E613C; /* 0x140E6128: je 0x140e613c */
L_140E612A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E612A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E612D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6140; /* 0x140E6130: jne 0x140e6140 */
L_140E6132:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6132: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E6135: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E6138: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6120; /* 0x140E613A: jne 0x140e6120 */
L_140E613C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E613C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6145; /* 0x140E613E: jmp 0x140e6145 */
L_140E6140:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6140: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6142: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6145:
    /* test eax, eax */ /* 0x140E6145: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5EE9; /* 0x140E6147: je 0x140e5ee9 */
L_140E614D:
    edx = 0x14033FC0u; /* 0x140E614D: mov edx, 0x14033fc0 */
    eax = ecx; /* 0x140E6152: mov eax, ecx */
L_140E6154:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E6154: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E6156: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6174; /* 0x140E6158: jne 0x140e6174 */
L_140E615A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E615A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6170; /* 0x140E615C: je 0x140e6170 */
L_140E615E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E615E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E6161: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6174; /* 0x140E6164: jne 0x140e6174 */
L_140E6166:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6166: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E6169: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E616C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6154; /* 0x140E616E: jne 0x140e6154 */
L_140E6170:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E6170: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6179; /* 0x140E6172: jmp 0x140e6179 */
L_140E6174:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6174: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6176: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6179:
    /* test eax, eax */ /* 0x140E6179: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6194; /* 0x140E617B: jne 0x140e6194 */
L_140E617D:
    edx = MEM32(ebp + 0xC); /* 0x140E617D: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x18u; /* 0x140E6180: mov dword ptr [edx], 0x18 */
    eax = 0x180u; /* 0x140E6186: mov eax, 0x180 */
    edi = POP32_VAL(esp); /* 0x140E618B: pop edi */
    esi = POP32_VAL(esp); /* 0x140E618C: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E618D: pop ebx */
    esp = ebp; /* 0x140E618E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6190: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6191: ret 0xc */
L_140E6194:
    edx = 0x14033FD0u; /* 0x140E6194: mov edx, 0x14033fd0 */
    eax = ecx; /* 0x140E6199: mov eax, ecx */
    goto L_140E61A0; /* 0x140E619B: jmp 0x140e61a0 */
L_140E61A0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E61A0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E61A2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E61C0; /* 0x140E61A4: jne 0x140e61c0 */
L_140E61A6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E61A6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E61BC; /* 0x140E61A8: je 0x140e61bc */
L_140E61AA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E61AA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E61AD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E61C0; /* 0x140E61B0: jne 0x140e61c0 */
L_140E61B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E61B2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E61B5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E61B8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E61A0; /* 0x140E61BA: jne 0x140e61a0 */
L_140E61BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E61BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E61C5; /* 0x140E61BE: jmp 0x140e61c5 */
L_140E61C0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E61C0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E61C2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E61C5:
    /* test eax, eax */ /* 0x140E61C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5F30; /* 0x140E61C7: je 0x140e5f30 */
L_140E61CD:
    edx = 0x14033FE8u; /* 0x140E61CD: mov edx, 0x14033fe8 */
    eax = ecx; /* 0x140E61D2: mov eax, ecx */
L_140E61D4:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E61D4: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E61D6: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E61F4; /* 0x140E61D8: jne 0x140e61f4 */
L_140E61DA:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E61DA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E61F0; /* 0x140E61DC: je 0x140e61f0 */
L_140E61DE:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E61DE: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E61E1: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E61F4; /* 0x140E61E4: jne 0x140e61f4 */
L_140E61E6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E61E6: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E61E9: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E61EC: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E61D4; /* 0x140E61EE: jne 0x140e61d4 */
L_140E61F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E61F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E61F9; /* 0x140E61F2: jmp 0x140e61f9 */
L_140E61F4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E61F4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E61F6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E61F9:
    /* test eax, eax */ /* 0x140E61F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6214; /* 0x140E61FB: jne 0x140e6214 */
L_140E61FD:
    edx = MEM32(ebp + 0xC); /* 0x140E61FD: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x1Au; /* 0x140E6200: mov dword ptr [edx], 0x1a */
    eax = 0x180u; /* 0x140E6206: mov eax, 0x180 */
    edi = POP32_VAL(esp); /* 0x140E620B: pop edi */
    esi = POP32_VAL(esp); /* 0x140E620C: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E620D: pop ebx */
    esp = ebp; /* 0x140E620E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6210: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6211: ret 0xc */
L_140E6214:
    edx = 0x1403400Cu; /* 0x140E6214: mov edx, 0x1403400c */
    eax = ecx; /* 0x140E6219: mov eax, ecx */
    goto L_140E6220; /* 0x140E621B: jmp 0x140e6220 */
L_140E6220:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E6220: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E6222: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6240; /* 0x140E6224: jne 0x140e6240 */
L_140E6226:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E6226: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E623C; /* 0x140E6228: je 0x140e623c */
L_140E622A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E622A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E622D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6240; /* 0x140E6230: jne 0x140e6240 */
L_140E6232:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6232: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E6235: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E6238: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6220; /* 0x140E623A: jne 0x140e6220 */
L_140E623C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E623C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6245; /* 0x140E623E: jmp 0x140e6245 */
L_140E6240:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6240: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6242: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6245:
    /* test eax, eax */ /* 0x140E6245: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5F79; /* 0x140E6247: je 0x140e5f79 */
L_140E624D:
    edx = 0x14034018u; /* 0x140E624D: mov edx, 0x14034018 */
    eax = ecx; /* 0x140E6252: mov eax, ecx */
L_140E6254:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E6254: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E6256: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6274; /* 0x140E6258: jne 0x140e6274 */
L_140E625A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E625A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6270; /* 0x140E625C: je 0x140e6270 */
L_140E625E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E625E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E6261: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6274; /* 0x140E6264: jne 0x140e6274 */
L_140E6266:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6266: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E6269: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E626C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6254; /* 0x140E626E: jne 0x140e6254 */
L_140E6270:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E6270: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6279; /* 0x140E6272: jmp 0x140e6279 */
L_140E6274:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6274: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6276: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6279:
    /* test eax, eax */ /* 0x140E6279: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5FC2; /* 0x140E627B: je 0x140e5fc2 */
L_140E6281:
    edx = 0x14034024u; /* 0x140E6281: mov edx, 0x14034024 */
    eax = ecx; /* 0x140E6286: mov eax, ecx */
L_140E6288:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E6288: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E628A: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E62A8; /* 0x140E628C: jne 0x140e62a8 */
L_140E628E:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E628E: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E62A4; /* 0x140E6290: je 0x140e62a4 */
L_140E6292:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E6292: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E6295: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E62A8; /* 0x140E6298: jne 0x140e62a8 */
L_140E629A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E629A: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E629D: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E62A0: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6288; /* 0x140E62A2: jne 0x140e6288 */
L_140E62A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E62A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E62AD; /* 0x140E62A6: jmp 0x140e62ad */
L_140E62A8:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E62A8: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E62AA: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E62AD:
    /* test eax, eax */ /* 0x140E62AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E62C8; /* 0x140E62AF: jne 0x140e62c8 */
L_140E62B1:
    edx = MEM32(ebp + 0xC); /* 0x140E62B1: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x1Du; /* 0x140E62B4: mov dword ptr [edx], 0x1d */
    eax = 0x180u; /* 0x140E62BA: mov eax, 0x180 */
    edi = POP32_VAL(esp); /* 0x140E62BF: pop edi */
    esi = POP32_VAL(esp); /* 0x140E62C0: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E62C1: pop ebx */
    esp = ebp; /* 0x140E62C2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E62C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E62C5: ret 0xc */
L_140E62C8:
    edx = 0x1403F738u; /* 0x140E62C8: mov edx, 0x1403f738 */
    eax = ecx; /* 0x140E62CD: mov eax, ecx */
    /* nop */ /* 0x140E62CF: nop  */
L_140E62D0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E62D0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E62D2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E62F0; /* 0x140E62D4: jne 0x140e62f0 */
L_140E62D6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E62D6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E62EC; /* 0x140E62D8: je 0x140e62ec */
L_140E62DA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E62DA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E62DD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E62F0; /* 0x140E62E0: jne 0x140e62f0 */
L_140E62E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E62E2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E62E5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E62E8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E62D0; /* 0x140E62EA: jne 0x140e62d0 */
L_140E62EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E62EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E62F5; /* 0x140E62EE: jmp 0x140e62f5 */
L_140E62F0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E62F0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E62F2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E62F5:
    /* test eax, eax */ /* 0x140E62F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6307; /* 0x140E62F7: jne 0x140e6307 */
L_140E62F9:
    eax = 0x154u; /* 0x140E62F9: mov eax, 0x154 */
    edi = POP32_VAL(esp); /* 0x140E62FE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E62FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E6300: pop ebx */
    esp = ebp; /* 0x140E6301: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6303: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6304: ret 0xc */
L_140E6307:
    edx = 0x14033FDCu; /* 0x140E6307: mov edx, 0x14033fdc */
    eax = ecx; /* 0x140E630C: mov eax, ecx */
    edi = edi; /* 0x140E630E: mov edi, edi */
L_140E6310:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E6310: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E6312: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6330; /* 0x140E6314: jne 0x140e6330 */
L_140E6316:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E6316: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E632C; /* 0x140E6318: je 0x140e632c */
L_140E631A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E631A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E631D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6330; /* 0x140E6320: jne 0x140e6330 */
L_140E6322:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6322: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E6325: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E6328: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6310; /* 0x140E632A: jne 0x140e6310 */
L_140E632C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E632C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6335; /* 0x140E632E: jmp 0x140e6335 */
L_140E6330:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6330: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6332: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6335:
    /* test eax, eax */ /* 0x140E6335: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6347; /* 0x140E6337: jne 0x140e6347 */
L_140E6339:
    eax = 0x150u; /* 0x140E6339: mov eax, 0x150 */
    edi = POP32_VAL(esp); /* 0x140E633E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E633F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E6340: pop ebx */
    esp = ebp; /* 0x140E6341: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6343: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6344: ret 0xc */
L_140E6347:
    eax = 0x14033FF8u; /* 0x140E6347: mov eax, 0x14033ff8 */
    esp = esp; /* 0x140E634C: lea esp, [esp] */
L_140E6350:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E6350: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E6352: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6370; /* 0x140E6354: jne 0x140e6370 */
L_140E6356:
    /* test LO8(edx), LO8(edx) */ /* 0x140E6356: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E636C; /* 0x140E6358: je 0x140e636c */
L_140E635A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E635A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E635D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6370; /* 0x140E6360: jne 0x140e6370 */
L_140E6362:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E6362: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6365: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E6368: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6350; /* 0x140E636A: jne 0x140e6350 */
L_140E636C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E636C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6375; /* 0x140E636E: jmp 0x140e6375 */
L_140E6370:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6370: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6372: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6375:
    /* test eax, eax */ /* 0x140E6375: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E6377: jne 0x140e66b7 */
L_140E637D:
    eax = 0x151u; /* 0x140E637D: mov eax, 0x151 */
    edi = POP32_VAL(esp); /* 0x140E6382: pop edi */
    esi = POP32_VAL(esp); /* 0x140E6383: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E6384: pop ebx */
    esp = ebp; /* 0x140E6385: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6387: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6388: ret 0xc */
L_140E638B:
    edx = 0x1403F748u; /* 0x140E638B: mov edx, 0x1403f748 */
    eax = ecx; /* 0x140E6390: mov eax, ecx */
L_140E6392:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E6392: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E6394: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E63B2; /* 0x140E6396: jne 0x140e63b2 */
L_140E6398:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E6398: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E63AE; /* 0x140E639A: je 0x140e63ae */
L_140E639C:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E639C: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E639F: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E63B2; /* 0x140E63A2: jne 0x140e63b2 */
L_140E63A4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E63A4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E63A7: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E63AA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6392; /* 0x140E63AC: jne 0x140e6392 */
L_140E63AE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E63AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E63B7; /* 0x140E63B0: jmp 0x140e63b7 */
L_140E63B2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E63B2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E63B4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E63B7:
    /* test eax, eax */ /* 0x140E63B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E63C9; /* 0x140E63B9: jne 0x140e63c9 */
L_140E63BB:
    eax = 0x157u; /* 0x140E63BB: mov eax, 0x157 */
    edi = POP32_VAL(esp); /* 0x140E63C0: pop edi */
    esi = POP32_VAL(esp); /* 0x140E63C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E63C2: pop ebx */
    esp = ebp; /* 0x140E63C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E63C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E63C6: ret 0xc */
L_140E63C9:
    edx = 0x1403F750u; /* 0x140E63C9: mov edx, 0x1403f750 */
    eax = ecx; /* 0x140E63CE: mov eax, ecx */
L_140E63D0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E63D0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E63D2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E63F0; /* 0x140E63D4: jne 0x140e63f0 */
L_140E63D6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E63D6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E63EC; /* 0x140E63D8: je 0x140e63ec */
L_140E63DA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E63DA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E63DD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E63F0; /* 0x140E63E0: jne 0x140e63f0 */
L_140E63E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E63E2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E63E5: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E63E8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E63D0; /* 0x140E63EA: jne 0x140e63d0 */
L_140E63EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E63EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E63F5; /* 0x140E63EE: jmp 0x140e63f5 */
L_140E63F0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E63F0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E63F2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E63F5:
    /* test eax, eax */ /* 0x140E63F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E63F7: je 0x140e472d */
L_140E63FD:
    edx = 0x140341F4u; /* 0x140E63FD: mov edx, 0x140341f4 */
    eax = ecx; /* 0x140E6402: mov eax, ecx */
L_140E6404:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E6404: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E6406: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6424; /* 0x140E6408: jne 0x140e6424 */
L_140E640A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E640A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6420; /* 0x140E640C: je 0x140e6420 */
L_140E640E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E640E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E6411: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6424; /* 0x140E6414: jne 0x140e6424 */
L_140E6416:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6416: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E6419: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E641C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6404; /* 0x140E641E: jne 0x140e6404 */
L_140E6420:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E6420: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6429; /* 0x140E6422: jmp 0x140e6429 */
L_140E6424:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6424: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6426: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6429:
    /* test eax, eax */ /* 0x140E6429: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E643B; /* 0x140E642B: jne 0x140e643b */
L_140E642D:
    eax = 0x159u; /* 0x140E642D: mov eax, 0x159 */
    edi = POP32_VAL(esp); /* 0x140E6432: pop edi */
    esi = POP32_VAL(esp); /* 0x140E6433: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E6434: pop ebx */
    esp = ebp; /* 0x140E6435: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6437: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6438: ret 0xc */
L_140E643B:
    edx = 0x1403F758u; /* 0x140E643B: mov edx, 0x1403f758 */
    eax = ecx; /* 0x140E6440: mov eax, ecx */
L_140E6442:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E6442: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E6444: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6462; /* 0x140E6446: jne 0x140e6462 */
L_140E6448:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E6448: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E645E; /* 0x140E644A: je 0x140e645e */
L_140E644C:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E644C: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E644F: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6462; /* 0x140E6452: jne 0x140e6462 */
L_140E6454:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6454: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E6457: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E645A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6442; /* 0x140E645C: jne 0x140e6442 */
L_140E645E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E645E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6467; /* 0x140E6460: jmp 0x140e6467 */
L_140E6462:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6462: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6464: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6467:
    /* test eax, eax */ /* 0x140E6467: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6479; /* 0x140E6469: jne 0x140e6479 */
L_140E646B:
    eax = 0x158u; /* 0x140E646B: mov eax, 0x158 */
    edi = POP32_VAL(esp); /* 0x140E6470: pop edi */
    esi = POP32_VAL(esp); /* 0x140E6471: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E6472: pop ebx */
    esp = ebp; /* 0x140E6473: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6475: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6476: ret 0xc */
L_140E6479:
    eax = 0x1403F764u; /* 0x140E6479: mov eax, 0x1403f764 */
    edi = edi; /* 0x140E647E: mov edi, edi */
L_140E6480:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E6480: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E6482: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4720; /* 0x140E6484: jne 0x140e4720 */
L_140E648A:
    /* test LO8(edx), LO8(edx) */ /* 0x140E648A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E64A4; /* 0x140E648C: je 0x140e64a4 */
L_140E648E:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E648E: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E6491: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E4720; /* 0x140E6494: jne 0x140e4720 */
L_140E649A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E649A: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E649D: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E64A0: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6480; /* 0x140E64A2: jne 0x140e6480 */
L_140E64A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E64A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_140E4725; /* 0x140E64A6: jmp 0x140e4725 */
L_140E64AB:
    edx = 0x1403F76Cu; /* 0x140E64AB: mov edx, 0x1403f76c */
    eax = ecx; /* 0x140E64B0: mov eax, ecx */
L_140E64B2:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E64B2: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E64B4: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E64D2; /* 0x140E64B6: jne 0x140e64d2 */
L_140E64B8:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E64B8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E64CE; /* 0x140E64BA: je 0x140e64ce */
L_140E64BC:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E64BC: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E64BF: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E64D2; /* 0x140E64C2: jne 0x140e64d2 */
L_140E64C4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E64C4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E64C7: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E64CA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E64B2; /* 0x140E64CC: jne 0x140e64b2 */
L_140E64CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E64CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E64D7; /* 0x140E64D0: jmp 0x140e64d7 */
L_140E64D2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E64D2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E64D4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E64D7:
    /* test eax, eax */ /* 0x140E64D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E64E9; /* 0x140E64D9: jne 0x140e64e9 */
L_140E64DB:
    eax = 0x15Au; /* 0x140E64DB: mov eax, 0x15a */
    edi = POP32_VAL(esp); /* 0x140E64E0: pop edi */
    esi = POP32_VAL(esp); /* 0x140E64E1: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E64E2: pop ebx */
    esp = ebp; /* 0x140E64E3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E64E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E64E6: ret 0xc */
L_140E64E9:
    edx = 0x14034130u; /* 0x140E64E9: mov edx, 0x14034130 */
    eax = ecx; /* 0x140E64EE: mov eax, ecx */
L_140E64F0:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E64F0: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E64F2: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6510; /* 0x140E64F4: jne 0x140e6510 */
L_140E64F6:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E64F6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E650C; /* 0x140E64F8: je 0x140e650c */
L_140E64FA:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E64FA: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E64FD: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6510; /* 0x140E6500: jne 0x140e6510 */
L_140E6502:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6502: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E6505: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E6508: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E64F0; /* 0x140E650A: jne 0x140e64f0 */
L_140E650C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E650C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6515; /* 0x140E650E: jmp 0x140e6515 */
L_140E6510:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6510: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6512: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6515:
    /* test eax, eax */ /* 0x140E6515: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6527; /* 0x140E6517: jne 0x140e6527 */
L_140E6519:
    eax = 0x15Bu; /* 0x140E6519: mov eax, 0x15b */
    edi = POP32_VAL(esp); /* 0x140E651E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E651F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E6520: pop ebx */
    esp = ebp; /* 0x140E6521: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6523: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6524: ret 0xc */
L_140E6527:
    edx = 0x1403F774u; /* 0x140E6527: mov edx, 0x1403f774 */
    eax = ecx; /* 0x140E652C: mov eax, ecx */
    edi = edi; /* 0x140E652E: mov edi, edi */
L_140E6530:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E6530: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E6532: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6550; /* 0x140E6534: jne 0x140e6550 */
L_140E6536:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E6536: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E654C; /* 0x140E6538: je 0x140e654c */
L_140E653A:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E653A: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E653D: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6550; /* 0x140E6540: jne 0x140e6550 */
L_140E6542:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6542: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E6545: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E6548: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6530; /* 0x140E654A: jne 0x140e6530 */
L_140E654C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E654C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6555; /* 0x140E654E: jmp 0x140e6555 */
L_140E6550:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6550: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6552: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6555:
    /* test eax, eax */ /* 0x140E6555: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E472D; /* 0x140E6557: je 0x140e472d */
L_140E655D:
    edx = 0x14033F70u; /* 0x140E655D: mov edx, 0x14033f70 */
    eax = ecx; /* 0x140E6562: mov eax, ecx */
L_140E6564:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E6564: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E6566: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6584; /* 0x140E6568: jne 0x140e6584 */
L_140E656A:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E656A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6580; /* 0x140E656C: je 0x140e6580 */
L_140E656E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E656E: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E6571: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6584; /* 0x140E6574: jne 0x140e6584 */
L_140E6576:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6576: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E6579: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E657C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6564; /* 0x140E657E: jne 0x140e6564 */
L_140E6580:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E6580: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6589; /* 0x140E6582: jmp 0x140e6589 */
L_140E6584:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6584: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6586: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6589:
    /* test eax, eax */ /* 0x140E6589: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E659B; /* 0x140E658B: jne 0x140e659b */
L_140E658D:
    eax = 0x15Du; /* 0x140E658D: mov eax, 0x15d */
    edi = POP32_VAL(esp); /* 0x140E6592: pop edi */
    esi = POP32_VAL(esp); /* 0x140E6593: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E6594: pop ebx */
    esp = ebp; /* 0x140E6595: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6597: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6598: ret 0xc */
L_140E659B:
    edx = 0x1403F77Cu; /* 0x140E659B: mov edx, 0x1403f77c */
    eax = ecx; /* 0x140E65A0: mov eax, ecx */
L_140E65A2:
    SET_LO8(ebx, MEM8(eax)); /* 0x140E65A2: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(edx) */ /* 0x140E65A4: cmp bl, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E65C2; /* 0x140E65A6: jne 0x140e65c2 */
L_140E65A8:
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E65A8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E65BE; /* 0x140E65AA: je 0x140e65be */
L_140E65AC:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x140E65AC: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(edx + 0x1) */ /* 0x140E65AF: cmp bl, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E65C2; /* 0x140E65B2: jne 0x140e65c2 */
L_140E65B4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E65B4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x140E65B7: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x140E65BA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E65A2; /* 0x140E65BC: jne 0x140e65a2 */
L_140E65BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E65BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E65C7; /* 0x140E65C0: jmp 0x140e65c7 */
L_140E65C2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E65C2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E65C4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E65C7:
    /* test eax, eax */ /* 0x140E65C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E65D9; /* 0x140E65C9: jne 0x140e65d9 */
L_140E65CB:
    eax = 0x15Eu; /* 0x140E65CB: mov eax, 0x15e */
    edi = POP32_VAL(esp); /* 0x140E65D0: pop edi */
    esi = POP32_VAL(esp); /* 0x140E65D1: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E65D2: pop ebx */
    esp = ebp; /* 0x140E65D3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E65D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E65D6: ret 0xc */
L_140E65D9:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E65D9: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E65E0: jne 0x140e66b7 */
L_140E65E6:
    eax = 0x1403F788u; /* 0x140E65E6: mov eax, 0x1403f788 */
    goto L_140E65F0; /* 0x140E65EB: jmp 0x140e65f0 */
L_140E65F0:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E65F0: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E65F2: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6610; /* 0x140E65F4: jne 0x140e6610 */
L_140E65F6:
    /* test LO8(edx), LO8(edx) */ /* 0x140E65F6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E660C; /* 0x140E65F8: je 0x140e660c */
L_140E65FA:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E65FA: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E65FD: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6610; /* 0x140E6600: jne 0x140e6610 */
L_140E6602:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E6602: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6605: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E6608: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E65F0; /* 0x140E660A: jne 0x140e65f0 */
L_140E660C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E660C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6615; /* 0x140E660E: jmp 0x140e6615 */
L_140E6610:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6610: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6612: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6615:
    /* test eax, eax */ /* 0x140E6615: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E6617: jne 0x140e66b7 */
L_140E661D:
    /* test MEM32(edi + 0x50), 0x800u */ /* 0x140E661D: test dword ptr [edi + 0x50], 0x800 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E6669; /* 0x140E6624: je 0x140e6669 */
L_140E6626:
    PUSH32(esp, 0x1403F798u); /* 0x140E6626: push 0x1403f798 */
    RECOMP_BACKEDGE();
    goto L_140E51CF; /* 0x140E662B: jmp 0x140e51cf */
L_140E6630:
    /* cmp MEM8(edi + 0x24B), 0 */ /* 0x140E6630: cmp byte ptr [edi + 0x24b], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x24B)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E6637: jne 0x140e66b7 */
L_140E6639:
    eax = 0x1403408Cu; /* 0x140E6639: mov eax, 0x1403408c */
    edi = edi; /* 0x140E663E: mov edi, edi */
L_140E6640:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E6640: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E6642: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6660; /* 0x140E6644: jne 0x140e6660 */
L_140E6646:
    /* test LO8(edx), LO8(edx) */ /* 0x140E6646: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E665C; /* 0x140E6648: je 0x140e665c */
L_140E664A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E664A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E664D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E6660; /* 0x140E6650: jne 0x140e6660 */
L_140E6652:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E6652: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6655: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E6658: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6640; /* 0x140E665A: jne 0x140e6640 */
L_140E665C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E665C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E6665; /* 0x140E665E: jmp 0x140e6665 */
L_140E6660:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6660: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E6662: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E6665:
    /* test eax, eax */ /* 0x140E6665: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E6667: jne 0x140e66b7 */
L_140E6669:
    eax = 0x15Cu; /* 0x140E6669: mov eax, 0x15c */
    edi = POP32_VAL(esp); /* 0x140E666E: pop edi */
    esi = POP32_VAL(esp); /* 0x140E666F: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E6670: pop ebx */
    esp = ebp; /* 0x140E6671: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6673: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6674: ret 0xc */
L_140E6677:
    eax = 0x1403F7E0u; /* 0x140E6677: mov eax, 0x1403f7e0 */
    esp = esp; /* 0x140E667C: lea esp, [esp] */
L_140E6680:
    SET_LO8(edx, MEM8(ecx)); /* 0x140E6680: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x140E6682: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66A0; /* 0x140E6684: jne 0x140e66a0 */
L_140E6686:
    /* test LO8(edx), LO8(edx) */ /* 0x140E6686: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E669C; /* 0x140E6688: je 0x140e669c */
L_140E668A:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x140E668A: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x140E668D: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140E66A0; /* 0x140E6690: jne 0x140e66a0 */
L_140E6692:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140E6692: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140E6695: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140E6698: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6680; /* 0x140E669A: jne 0x140e6680 */
L_140E669C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140E669C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140E66A5; /* 0x140E669E: jmp 0x140e66a5 */
L_140E66A0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E66A0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140E66A2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140E66A5:
    /* test eax, eax */ /* 0x140E66A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E66B7; /* 0x140E66A7: jne 0x140e66b7 */
L_140E66A9:
    eax = 0x15Fu; /* 0x140E66A9: mov eax, 0x15f */
    edi = POP32_VAL(esp); /* 0x140E66AE: pop edi */
    esi = POP32_VAL(esp); /* 0x140E66AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E66B0: pop ebx */
    esp = ebp; /* 0x140E66B1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E66B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E66B4: ret 0xc */
L_140E66B7:
    ebx = MEM32(ebp + 0x10); /* 0x140E66B7: mov ebx, dword ptr [ebp + 0x10] */
    RECOMP_BACKEDGE();
    goto L_140E51E9; /* 0x140E66BA: jmp 0x140e51e9 */
L_140E66BF:
    PUSH32(esp, 0x1403F318u); /* 0x140E66BF: push 0x1403f318 */
    PUSH32(esp, MEM32(edi + 0x228)); /* 0x140E66C4: push dword ptr [edi + 0x228] */
    RECOMP_ICALL(esi); /* 0x140E66CA: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E66CC: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140E66CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E677F; /* 0x140E66D1: jne 0x140e677f */
L_140E66D7:
    /* test MEM32(edi + 0x50), 0x800u */ /* 0x140E66D7: test dword ptr [edi + 0x50], 0x800 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E40FE; /* 0x140E66DE: je 0x140e40fe */
L_140E66E4:
    PUSH32(esp, 0x1403F7E8u); /* 0x140E66E4: push 0x1403f7e8 */
    goto L_140E676E; /* 0x140E66E9: jmp 0x140e676e */
L_140E66EE:
    PUSH32(esp, 0x1403F820u); /* 0x140E66EE: push 0x1403f820 */
    PUSH32(esp, MEM32(edi + 0x228)); /* 0x140E66F3: push dword ptr [edi + 0x228] */
    RECOMP_ICALL(esi); /* 0x140E66F9: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E66FB: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140E66FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E677F; /* 0x140E6700: jne 0x140e677f */
L_140E6702:
    /* test MEM32(edi + 0x50), 0x800u */ /* 0x140E6702: test dword ptr [edi + 0x50], 0x800 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E6719; /* 0x140E6709: jne 0x140e6719 */
L_140E670B:
    eax = 0x112u; /* 0x140E670B: mov eax, 0x112 */
    edi = POP32_VAL(esp); /* 0x140E6710: pop edi */
    esi = POP32_VAL(esp); /* 0x140E6711: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E6712: pop ebx */
    esp = ebp; /* 0x140E6713: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E6715: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E6716: ret 0xc */
L_140E6719:
    PUSH32(esp, 0x1403F828u); /* 0x140E6719: push 0x1403f828 */
    goto L_140E676E; /* 0x140E671E: jmp 0x140e676e */
L_140E6720:
    PUSH32(esp, 0x14036D78u); /* 0x140E6720: push 0x14036d78 */
    PUSH32(esp, MEM32(edi + 0x228)); /* 0x140E6725: push dword ptr [edi + 0x228] */
    RECOMP_ICALL(esi); /* 0x140E672B: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E672D: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140E6730: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E677F; /* 0x140E6732: jne 0x140e677f */
L_140E6734:
    /* test MEM32(edi + 0x50), 0x800u */ /* 0x140E6734: test dword ptr [edi + 0x50], 0x800 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5049; /* 0x140E673B: je 0x140e5049 */
L_140E6741:
    PUSH32(esp, 0x1403F864u); /* 0x140E6741: push 0x1403f864 */
    goto L_140E676E; /* 0x140E6746: jmp 0x140e676e */
L_140E6748:
    PUSH32(esp, 0x1403F5FCu); /* 0x140E6748: push 0x1403f5fc */
    PUSH32(esp, MEM32(edi + 0x228)); /* 0x140E674D: push dword ptr [edi + 0x228] */
    RECOMP_ICALL(esi); /* 0x140E6753: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E6755: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140E6758: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140E677F; /* 0x140E675A: jne 0x140e677f */
L_140E675C:
    /* test MEM32(edi + 0x50), 0x800u */ /* 0x140E675C: test dword ptr [edi + 0x50], 0x800 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E5DD1; /* 0x140E6763: je 0x140e5dd1 */
L_140E6769:
    PUSH32(esp, 0x1403F8A0u); /* 0x140E6769: push 0x1403f8a0 */
L_140E676E:
    PUSH32(esp, 0xC0Eu); /* 0x140E676E: push 0xc0e */
    edx = ebx; /* 0x140E6773: mov edx, ebx */
    esi = edi; /* 0x140E6775: mov esi, edi */
    RECOMP_CALL(sub_140E6B90); /* 0x140E6777: call 0x140e6b90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140E677C: add esp, 8 */
    _flag_k = FK_ADD;
L_140E677F:
    esi = MEM32(edi + 0x228); /* 0x140E677F: mov esi, dword ptr [edi + 0x228] */
    RECOMP_CALL(sub_140EB2C0); /* 0x140E6785: call 0x140eb2c0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x140E678A: mov edx, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x140E678D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140E67AA; /* 0x140E678F: je 0x140e67aa */
L_140E6791:
    ecx = MEM32(edi + 0x228); /* 0x140E6791: mov ecx, dword ptr [edi + 0x228] */
    MEM32(edx + 0x4) = eax; /* 0x140E6797: mov dword ptr [edx + 4], eax */
    MEM32(edx) = ecx; /* 0x140E679A: mov dword ptr [edx], ecx */
    eax = 0x17Eu; /* 0x140E679C: mov eax, 0x17e */
    edi = POP32_VAL(esp); /* 0x140E67A1: pop edi */
    esi = POP32_VAL(esp); /* 0x140E67A2: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E67A3: pop ebx */
    esp = ebp; /* 0x140E67A4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E67A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E67A7: ret 0xc */
L_140E67AA:
    eax = MEM32(edi + 0x228); /* 0x140E67AA: mov eax, dword ptr [edi + 0x228] */
    MEM32(edx) = eax; /* 0x140E67B0: mov dword ptr [edx], eax */
    eax = 0x17Fu; /* 0x140E67B2: mov eax, 0x17f */
    edi = POP32_VAL(esp); /* 0x140E67B7: pop edi */
    esi = POP32_VAL(esp); /* 0x140E67B8: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E67B9: pop ebx */
    esp = ebp; /* 0x140E67BA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E67BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E67BD: ret 0xc */
L_140E67C0:
    eax = 0x17Du; /* 0x140E67C0: mov eax, 0x17d */
    edi = POP32_VAL(esp); /* 0x140E67C5: pop edi */
    esi = POP32_VAL(esp); /* 0x140E67C6: pop esi */
    ebx = POP32_VAL(esp); /* 0x140E67C7: pop ebx */
    esp = ebp; /* 0x140E67C8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E67CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E67CB: ret 0xc */
L_140E67CE:
    eax = MEM32(ebp + 0x8); /* 0x140E67CE: mov eax, dword ptr [ebp + 8] */
    MEM8(eax + 0x249) = (uint8_t)(1); /* 0x140E67D1: mov byte ptr [eax + 0x249], 1 */
L_140E67D8:
    edi = POP32_VAL(esp); /* 0x140E67D8: pop edi */
    esi = POP32_VAL(esp); /* 0x140E67D9: pop esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x140E67DA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140E67DD: pop ebx */
    esp = ebp; /* 0x140E67DE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140E67E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140E67E1: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x140E3D70u: goto L_140E3D70;
      case 0x140E3DD8u: goto L_140E3DD8;
      case 0x140E3E53u: goto L_140E3E53;
      case 0x140E3E61u: goto L_140E3E61;
      case 0x140E3E6Fu: goto L_140E3E6F;
      case 0x140E3E7Du: goto L_140E3E7D;
      case 0x140E3E8Bu: goto L_140E3E8B;
      case 0x140E3E99u: goto L_140E3E99;
      case 0x140E3EA7u: goto L_140E3EA7;
      case 0x140E3EB5u: goto L_140E3EB5;
      case 0x140E3EC3u: goto L_140E3EC3;
      case 0x140E3ED1u: goto L_140E3ED1;
      case 0x140E3EDFu: goto L_140E3EDF;
      case 0x140E3EEDu: goto L_140E3EED;
      case 0x140E3F26u: goto L_140E3F26;
      case 0x140E3F34u: goto L_140E3F34;
      case 0x140E3F42u: goto L_140E3F42;
      case 0x140E3F50u: goto L_140E3F50;
      case 0x140E3F5Eu: goto L_140E3F5E;
      case 0x140E3F6Cu: goto L_140E3F6C;
      case 0x140E3FCBu: goto L_140E3FCB;
      case 0x140E3FD9u: goto L_140E3FD9;
      case 0x140E3FE7u: goto L_140E3FE7;
      case 0x140E3FF5u: goto L_140E3FF5;
      case 0x140E4003u: goto L_140E4003;
      case 0x140E4011u: goto L_140E4011;
      case 0x140E401Fu: goto L_140E401F;
      case 0x140E402Du: goto L_140E402D;
      case 0x140E404Au: goto L_140E404A;
      case 0x140E4076u: goto L_140E4076;
      case 0x140E410Cu: goto L_140E410C;
      case 0x140E4164u: goto L_140E4164;
      case 0x140E41ABu: goto L_140E41AB;
      case 0x140E4286u: goto L_140E4286;
      case 0x140E452Du: goto L_140E452D;
      case 0x140E4604u: goto L_140E4604;
      case 0x140E472Du: goto L_140E472D;
      case 0x140E473Bu: goto L_140E473B;
      case 0x140E480Bu: goto L_140E480B;
      case 0x140E48F1u: goto L_140E48F1;
      case 0x140E49E1u: goto L_140E49E1;
      case 0x140E4A5Bu: goto L_140E4A5B;
      case 0x140E4AABu: goto L_140E4AAB;
      case 0x140E4AFBu: goto L_140E4AFB;
      case 0x140E4C3Bu: goto L_140E4C3B;
      case 0x140E4C7Bu: goto L_140E4C7B;
      case 0x140E4D4Bu: goto L_140E4D4B;
      case 0x140E4D8Bu: goto L_140E4D8B;
      case 0x140E4DFBu: goto L_140E4DFB;
      case 0x140E4EEDu: goto L_140E4EED;
      case 0x140E4F2Du: goto L_140E4F2D;
      case 0x140E4F9Bu: goto L_140E4F9B;
      case 0x140E4FDBu: goto L_140E4FDB;
      case 0x140E5216u: goto L_140E5216;
      case 0x140E52ABu: goto L_140E52AB;
      case 0x140E539Bu: goto L_140E539B;
      case 0x140E5669u: goto L_140E5669;
      case 0x140E5A8Bu: goto L_140E5A8B;
      case 0x140E5B94u: goto L_140E5B94;
      case 0x140E6107u: goto L_140E6107;
      case 0x140E638Bu: goto L_140E638B;
      case 0x140E64ABu: goto L_140E64AB;
      case 0x140E6630u: goto L_140E6630;
      case 0x140E6677u: goto L_140E6677;
      case 0x140E66B7u: goto L_140E66B7;
      case 0x140E66BFu: goto L_140E66BF;
      case 0x140E66EEu: goto L_140E66EE;
      case 0x140E6720u: goto L_140E6720;
      case 0x140E6748u: goto L_140E6748;
      case 0x140E677Fu: goto L_140E677F;
      case 0x140E67C0u: goto L_140E67C0;
      case 0x140E67D8u: goto L_140E67D8;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
