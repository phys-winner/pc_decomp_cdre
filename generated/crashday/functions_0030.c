#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_005DD740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD740u);

L_005DD740:
    PUSH32(esp, ebp); /* 0x005DD740: push ebp */
    ebp = esp; /* 0x005DD741: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DD743: push -1 */
    PUSH32(esp, 0x00781C75u); /* 0x005DD745: push 0x781c75 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DD74A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DD750: push eax */
    eax = MEM32(0x855000); /* 0x005DD751: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DD756: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DD758: push eax */
    eax = ebp + (-0xC); /* 0x005DD759: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DD75C: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x005DD762: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(ebp + 0x8); /* 0x005DD769: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x005DD76C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DD795; /* 0x005DD76E: je 0x5dd795 */
L_005DD770:
    eax = MEM32(ebp + 0xC); /* 0x005DD770: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0] = xmm_ld(eax); /* 0x005DD773: movdqu xmm0, xmmword ptr [eax] */
    xmm_st(ecx, _xmm[0]); /* 0x005DD777: movdqu xmmword ptr [ecx], xmm0 */
    _xmm[0] = xmm_ld(eax + 0x10); /* 0x005DD77B: movdqu xmm0, xmmword ptr [eax + 0x10] */
    xmm_st(ecx + 0x10, _xmm[0]); /* 0x005DD780: movdqu xmmword ptr [ecx + 0x10], xmm0 */
    _xmm[0].u64[0] = MEM64(eax + 0x20); _xmm[0].u64[1] = 0; /* 0x005DD785: movq xmm0, qword ptr [eax + 0x20] */
    MEM64(ecx + 0x20) = _xmm[0].u64[0]; /* 0x005DD78A: movq qword ptr [ecx + 0x20], xmm0 */
    eax = MEM32(eax + 0x28); /* 0x005DD78F: mov eax, dword ptr [eax + 0x28] */
    MEM32(ecx + 0x28) = eax; /* 0x005DD792: mov dword ptr [ecx + 0x28], eax */
L_005DD795:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DD795: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DD79C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DD79F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DD7A6: pop ecx */
    esp = ebp; /* 0x005DD7A7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DD7A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DD7AA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005DD7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD7B0u);

L_005DD7B0:
    PUSH32(esp, ebp); /* 0x005DD7B0: push ebp */
    ebp = esp; /* 0x005DD7B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DD7B3: push -1 */
    PUSH32(esp, 0x007AF5A0u); /* 0x005DD7B5: push 0x7af5a0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DD7BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DD7C0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005DD7C1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DD7C4: push ebx */
    PUSH32(esp, esi); /* 0x005DD7C5: push esi */
    PUSH32(esp, edi); /* 0x005DD7C6: push edi */
    eax = MEM32(0x855000); /* 0x005DD7C7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DD7CC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DD7CE: push eax */
    eax = ebp + (-0xC); /* 0x005DD7CF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DD7D2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005DD7D8: mov dword ptr [ebp - 0x10], esp */
    esi = edx; /* 0x005DD7DB: mov esi, edx */
    edi = ecx; /* 0x005DD7DD: mov edi, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005DD7DF: mov dword ptr [ebp - 4], 0 */
    ebx = MEM32(ebp + 0x8); /* 0x005DD7E6: mov ebx, dword ptr [ebp + 8] */
    esp = esp; /* 0x005DD7E9: lea esp, [esp] */
L_005DD7F0:
    /* cmp edi, esi */ /* 0x005DD7F0: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DD809; /* 0x005DD7F2: je 0x5dd809 */
L_005DD7F4:
    PUSH32(esp, edi); /* 0x005DD7F4: push edi */
    PUSH32(esp, ebx); /* 0x005DD7F5: push ebx */
    RECOMP_CALL(sub_005DD830); /* 0x005DD7F6: call 0x5dd830 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x2Cu; /* 0x005DD7FB: add ebx, 0x2c */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x005DD7FE: mov dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x2Cu; /* 0x005DD801: add edi, 0x2c */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = edi; /* 0x005DD804: mov dword ptr [ebp - 0x14], edi */
    RECOMP_BACKEDGE();
    goto L_005DD7F0; /* 0x005DD807: jmp 0x5dd7f0 */
L_005DD809:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DD809: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebx; /* 0x005DD810: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DD812: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DD815: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DD81C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DD81D: pop edi */
    esi = POP32_VAL(esp); /* 0x005DD81E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DD81F: pop ebx */
    esp = ebp; /* 0x005DD820: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DD822: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DD823: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DD824(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD824u);

L_005DD824:
    PUSH32(esp, 0); /* 0x005DD824: push 0 */
    PUSH32(esp, 0); /* 0x005DD826: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005DD828: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005DD82Du, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005DD830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD830u);

L_005DD830:
    PUSH32(esp, ebp); /* 0x005DD830: push ebp */
    ebp = esp; /* 0x005DD831: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x005DD833: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x005DD836: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DD85F; /* 0x005DD838: je 0x5dd85f */
L_005DD83A:
    eax = MEM32(ebp + 0xC); /* 0x005DD83A: mov eax, dword ptr [ebp + 0xc] */
    _xmm[0] = xmm_ld(eax); /* 0x005DD83D: movdqu xmm0, xmmword ptr [eax] */
    xmm_st(ecx, _xmm[0]); /* 0x005DD841: movdqu xmmword ptr [ecx], xmm0 */
    _xmm[0] = xmm_ld(eax + 0x10); /* 0x005DD845: movdqu xmm0, xmmword ptr [eax + 0x10] */
    xmm_st(ecx + 0x10, _xmm[0]); /* 0x005DD84A: movdqu xmmword ptr [ecx + 0x10], xmm0 */
    _xmm[0].u64[0] = MEM64(eax + 0x20); _xmm[0].u64[1] = 0; /* 0x005DD84F: movq xmm0, qword ptr [eax + 0x20] */
    MEM64(ecx + 0x20) = _xmm[0].u64[0]; /* 0x005DD854: movq qword ptr [ecx + 0x20], xmm0 */
    eax = MEM32(eax + 0x28); /* 0x005DD859: mov eax, dword ptr [eax + 0x28] */
    MEM32(ecx + 0x28) = eax; /* 0x005DD85C: mov dword ptr [ecx + 0x28], eax */
L_005DD85F:
    ebp = POP32_VAL(esp); /* 0x005DD85F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DD860: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005DD870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD870u);

L_005DD870:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005DD870: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005DD872: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005DD880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD880u);

L_005DD880:
    PUSH32(esp, ebp); /* 0x005DD880: push ebp */
    ebp = esp; /* 0x005DD881: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DD883: push -1 */
    PUSH32(esp, 0x007AF646u); /* 0x005DD885: push 0x7af646 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DD88A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DD890: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005DD891: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005DD894: push esi */
    PUSH32(esp, edi); /* 0x005DD895: push edi */
    eax = MEM32(0x855000); /* 0x005DD896: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DD89B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DD89D: push eax */
    eax = ebp + (-0xC); /* 0x005DD89E: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DD8A1: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005DD8A7: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x005DD8A9: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x4)) = 4; /* 0x005DD8AC: mov dword ptr [ebp - 4], 4 */
    esi = edi + 0xCBC0; /* 0x005DD8B3: lea esi, [edi + 0xcbc0] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005DD8B9: mov dword ptr [ebp - 0x14], esi */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x005DD8BC: mov byte ptr [ebp - 4], 7 */
    ecx = esi; /* 0x005DD8C0: mov ecx, esi */
    eax = MEM32(esi); /* 0x005DD8C2: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x005DD8C4: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005DD8C5: push dword ptr [eax] */
    eax = ebp + (-0x18); /* 0x005DD8C7: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x005DD8CA: push eax */
    RECOMP_CALL(sub_005E03E0); /* 0x005DD8CB: call 0x5e03e0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005DD8D0: mov byte ptr [ebp - 4], 4 */
    PUSH32(esp, MEM32(esi)); /* 0x005DD8D4: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DD8D6: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DD8DC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005DD8DF: mov byte ptr [ebp - 4], 3 */
    ecx = edi + 0xCB00; /* 0x005DD8E3: lea ecx, [edi + 0xcb00] */
    MEM32(ecx) = 0x007F6518u; /* 0x005DD8E9: mov dword ptr [ecx], 0x7f6518 */
    RECOMP_CALL(sub_005E0C40); /* 0x005DD8EF: call 0x5e0c40 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005DD8F4: mov byte ptr [ebp - 4], 2 */
    eax = edi + 0xCAEC; /* 0x005DD8F8: lea eax, [edi + 0xcaec] */
    MEM32(ebp + (-0x18)) = eax; /* 0x005DD8FE: mov dword ptr [ebp - 0x18], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005DD901: mov byte ptr [ebp - 4], 2 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005DD905: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = MEM32(0x7CC998); /* 0x005DD909: mov esi, dword ptr [0x7cc998] */
    MEM32(eax) = 0x007F6508u; /* 0x005DD90F: mov dword ptr [eax], 0x7f6508 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DD91D; /* 0x005DD915: je 0x5dd91d */
L_005DD917:
    PUSH32(esp, eax); /* 0x005DD917: push eax */
    RECOMP_ICALL(esi); /* 0x005DD918: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DD91A: add esp, 4 */
    _flag_k = FK_ADD;
L_005DD91D:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005DD91D: mov byte ptr [ebp - 4], 1 */
    eax = edi + 0xCAD8; /* 0x005DD921: lea eax, [edi + 0xcad8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x005DD927: mov dword ptr [ebp - 0x18], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005DD92A: mov byte ptr [ebp - 4], 1 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005DD92E: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007E3468u; /* 0x005DD932: mov dword ptr [eax], 0x7e3468 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DD940; /* 0x005DD938: je 0x5dd940 */
L_005DD93A:
    PUSH32(esp, eax); /* 0x005DD93A: push eax */
    RECOMP_ICALL(esi); /* 0x005DD93B: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DD93D: add esp, 4 */
    _flag_k = FK_ADD;
L_005DD940:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005DD940: mov byte ptr [ebp - 4], 0 */
    eax = edi + 0xCAC4; /* 0x005DD944: lea eax, [edi + 0xcac4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x005DD94A: mov dword ptr [ebp - 0x18], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005DD94D: mov byte ptr [ebp - 4], 0 */
    /* test MEM8(eax + 0x4), 1 */ /* 0x005DD951: test byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax) = 0x007EDA74u; /* 0x005DD955: mov dword ptr [eax], 0x7eda74 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DD963; /* 0x005DD95B: je 0x5dd963 */
L_005DD95D:
    PUSH32(esp, eax); /* 0x005DD95D: push eax */
    RECOMP_ICALL(esi); /* 0x005DD95E: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DD960: add esp, 4 */
    _flag_k = FK_ADD;
L_005DD963:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DD963: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = edi; /* 0x005DD96A: mov ecx, edi */
    RECOMP_CALL(sub_005FA9D0); /* 0x005DD96C: call 0x5fa9d0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x005DD971: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DD974: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DD97B: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DD97C: pop edi */
    esi = POP32_VAL(esp); /* 0x005DD97D: pop esi */
    esp = ebp; /* 0x005DD97E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DD980: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DD981: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DD990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD990u);

L_005DD990:
    PUSH32(esp, ebp); /* 0x005DD990: push ebp */
    ebp = esp; /* 0x005DD991: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DD993: push -1 */
    PUSH32(esp, 0x007AF678u); /* 0x005DD995: push 0x7af678 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DD99A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DD9A0: push eax */
    PUSH32(esp, ecx); /* 0x005DD9A1: push ecx */
    eax = MEM32(0x855000); /* 0x005DD9A2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DD9A7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DD9A9: push eax */
    eax = ebp + (-0xC); /* 0x005DD9AA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DD9AD: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005DD9B3: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DD9B6: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005DD9BD: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F6508u; /* 0x005DD9C1: mov dword ptr [ecx], 0x7f6508 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DD9D3; /* 0x005DD9C7: je 0x5dd9d3 */
L_005DD9C9:
    PUSH32(esp, ecx); /* 0x005DD9C9: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005DD9CA: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DD9D0: add esp, 4 */
    _flag_k = FK_ADD;
L_005DD9D3:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DD9D3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DD9D6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DD9DD: pop ecx */
    esp = ebp; /* 0x005DD9DE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DD9E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DD9E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DD9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DD9F0u);

L_005DD9F0:
    PUSH32(esp, ebp); /* 0x005DD9F0: push ebp */
    ebp = esp; /* 0x005DD9F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DD9F3: push -1 */
    PUSH32(esp, 0x007AF6C0u); /* 0x005DD9F5: push 0x7af6c0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DD9FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DDA00: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005DDA01: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005DDA04: push esi */
    eax = MEM32(0x855000); /* 0x005DDA05: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DDA0A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DDA0C: push eax */
    eax = ebp + (-0xC); /* 0x005DDA0D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DDA10: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005DDA16: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005DDA18: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x005DDA1B: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(esi); /* 0x005DDA22: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x005DDA24: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005DDA25: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x005DDA27: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005DDA2A: push eax */
    RECOMP_CALL(sub_005E03E0); /* 0x005DDA2B: call 0x5e03e0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DDA30: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x005DDA37: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DDA39: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DDA3F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005DDA42: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DDA45: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DDA4C: pop ecx */
    esi = POP32_VAL(esp); /* 0x005DDA4D: pop esi */
    esp = ebp; /* 0x005DDA4E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DDA50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DDA51: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DDA60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DDA60u);

L_005DDA60:
    PUSH32(esp, ebp); /* 0x005DDA60: push ebp */
    ebp = esp; /* 0x005DDA61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DDA63: push -1 */
    PUSH32(esp, 0x007AFE45u); /* 0x005DDA65: push 0x7afe45 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DDA6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DDA70: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x368u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x368u; /* 0x005DDA71: sub esp, 0x368 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005DDA77: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DDA7C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x005DDA7E: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, ebx); /* 0x005DDA81: push ebx */
    PUSH32(esp, esi); /* 0x005DDA82: push esi */
    PUSH32(esp, edi); /* 0x005DDA83: push edi */
    PUSH32(esp, eax); /* 0x005DDA84: push eax */
    eax = ebp + (-0xC); /* 0x005DDA85: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DDA88: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005DDA8E: mov esi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x005DDA90: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005DDA93: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005DDA96: mov ecx, esp */
    MEM32(ebp + (-0x368)) = esp; /* 0x005DDA98: mov dword ptr [ebp - 0x368], esp */
    MEM32(ebp + (-0x374)) = esi; /* 0x005DDA9E: mov dword ptr [ebp - 0x374], esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DDAA4: push -1 */
    PUSH32(esp, 0); /* 0x005DDAA6: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005DDAA8: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005DDAAF: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x005DDAB6: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x005DDAB7: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DDABA: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DDABF: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005DDAC6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x005DDAC9: push 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DDACB: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = esi; /* 0x005DDAD2: mov ecx, esi */
    RECOMP_CALL(sub_005FA580); /* 0x005DDAD4: call 0x5fa580 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x005DDAD9: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, ecx); /* 0x005DDAE0: push ecx */
    PUSH32(esp, esi); /* 0x005DDAE1: push esi */
    ecx = esi + 0xCAC4; /* 0x005DDAE2: lea ecx, [esi + 0xcac4] */
    MEM32(esi) = 0x007F64B8u; /* 0x005DDAE8: mov dword ptr [esi], 0x7f64b8 */
    RECOMP_CALL(sub_005E0980); /* 0x005DDAEE: call 0x5e0980 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005DDAF3: mov byte ptr [ebp - 4], 2 */
    PUSH32(esp, ecx); /* 0x005DDAF7: push ecx */
    PUSH32(esp, esi); /* 0x005DDAF8: push esi */
    ecx = esi + 0xCAD8; /* 0x005DDAF9: lea ecx, [esi + 0xcad8] */
    RECOMP_CALL(sub_005E0A30); /* 0x005DDAFF: call 0x5e0a30 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005DDB04: mov byte ptr [ebp - 4], 3 */
    PUSH32(esp, ecx); /* 0x005DDB08: push ecx */
    PUSH32(esp, esi); /* 0x005DDB09: push esi */
    ecx = esi + 0xCAEC; /* 0x005DDB0A: lea ecx, [esi + 0xcaec] */
    RECOMP_CALL(sub_005E0AE0); /* 0x005DDB10: call 0x5e0ae0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005DDB15: mov byte ptr [ebp - 4], 4 */
    MEM8(esi + 0xCB04) = (uint8_t)(0); /* 0x005DDB19: mov byte ptr [esi + 0xcb04], 0 */
    MEM32(esi + 0xCB00) = 0x007F6518u; /* 0x005DDB20: mov dword ptr [esi + 0xcb00], 0x7f6518 */
    MEM32(esi + 0xCB10) = 0; /* 0x005DDB2A: mov dword ptr [esi + 0xcb10], 0 */
    MEM32(esi + 0xCB14) = 0; /* 0x005DDB34: mov dword ptr [esi + 0xcb14], 0 */
    MEM32(esi + 0xCB18) = 0; /* 0x005DDB3E: mov dword ptr [esi + 0xcb18], 0 */
    MEM32(esi + 0xCB1C) = 0; /* 0x005DDB48: mov dword ptr [esi + 0xcb1c], 0 */
    MEM32(esi + 0xCB08) = 0x450u; /* 0x005DDB52: mov dword ptr [esi + 0xcb08], 0x450 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005DDB5C: mov byte ptr [ebp - 4], 5 */
    edi = MEM32(0x7CC9AC); /* 0x005DDB60: mov edi, dword ptr [0x7cc9ac] */
    RECOMP_ICALL(edi); /* 0x005DDB66: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005DDB68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DDB70; /* 0x005DDB6A: jne 0x5ddb70 */
L_005DDB6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DDB6C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DDB8A; /* 0x005DDB6E: jmp 0x5ddb8a */
L_005DDB70:
    ecx = MEM32(0x927AF4); /* 0x005DDB70: mov ecx, dword ptr [0x927af4] */
    /* test ecx, ecx */ /* 0x005DDB76: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DDB8A; /* 0x005DDB78: jne 0x5ddb8a */
L_005DDB7A:
    ecx = 0x00927AE8u; /* 0x005DDB7A: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005DDB7F: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AF4); /* 0x005DDB84: mov ecx, dword ptr [0x927af4] */
L_005DDB8A:
    eax = MEM32(ecx); /* 0x005DDB8A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x005DDB8C: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xCB20) = 0; /* 0x005DDB8F: mov dword ptr [esi + 0xcb20], 0 */
    ebx = esi + 0xCBC0; /* 0x005DDB99: lea ebx, [esi + 0xcbc0] */
    ecx = eax; /* 0x005DDB9F: mov ecx, eax */
    MEM32(esi + 0xCB24) = 0; /* 0x005DDBA1: mov dword ptr [esi + 0xcb24], 0 */
    eax = MEM32(esi + 0xCB20); /* 0x005DDBAB: mov eax, dword ptr [esi + 0xcb20] */
    _flag_a = (uint32_t)((eax ^ ecx)); _flag_b = (uint32_t)((eax ^ ecx));
    eax = eax ^ ecx; /* 0x005DDBB1: xor eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x368)) = ebx; /* 0x005DDBB3: mov dword ptr [ebp - 0x368], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FFFFFFu);
    eax = eax & 0x00FFFFFFu; /* 0x005DDBB9: and eax, 0xffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(esi + 0xCB20) ^ eax)); _flag_b = (uint32_t)((MEM32(esi + 0xCB20) ^ eax));
    MEM32(esi + 0xCB20) = MEM32(esi + 0xCB20) ^ eax; /* 0x005DDBBE: xor dword ptr [esi + 0xcb20], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xCB28) = 0; /* 0x005DDBC4: mov dword ptr [esi + 0xcb28], 0 */
    MEM32(esi + 0xCB2C) = 0; /* 0x005DDBCE: mov dword ptr [esi + 0xcb2c], 0 */
    MEM32(ebx) = 0; /* 0x005DDBD8: mov dword ptr [ebx], 0 */
    MEM32(ebx + 0x4) = 0; /* 0x005DDBDE: mov dword ptr [ebx + 4], 0 */
    RECOMP_CALL(sub_005E08D0); /* 0x005DDBE5: call 0x5e08d0 */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = eax; /* 0x005DDBEA: mov dword ptr [ebx], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x005DDBEC: mov byte ptr [ebp - 4], 0xa */
    RECOMP_ICALL(edi); /* 0x005DDBF0: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005DDBF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DDC0E; /* 0x005DDBF4: je 0x5ddc0e */
L_005DDBF6:
    eax = MEM32(0x927AEC); /* 0x005DDBF6: mov eax, dword ptr [0x927aec] */
    /* test eax, eax */ /* 0x005DDBFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DDC0E; /* 0x005DDBFD: jne 0x5ddc0e */
L_005DDBFF:
    ecx = 0x00927AE8u; /* 0x005DDBFF: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005DDC04: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x927AEC); /* 0x005DDC09: mov eax, dword ptr [0x927aec] */
L_005DDC0E:
    MEM32(esi + 0xCB28) = eax; /* 0x005DDC0E: mov dword ptr [esi + 0xcb28], eax */
    RECOMP_ICALL(edi); /* 0x005DDC14: call edi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005DDC16: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DDC32; /* 0x005DDC18: je 0x5ddc32 */
L_005DDC1A:
    eax = MEM32(0x927AFC); /* 0x005DDC1A: mov eax, dword ptr [0x927afc] */
    /* test eax, eax */ /* 0x005DDC1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DDC32; /* 0x005DDC21: jne 0x5ddc32 */
L_005DDC23:
    ecx = 0x00927AE8u; /* 0x005DDC23: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005DDC28: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x927AFC); /* 0x005DDC2D: mov eax, dword ptr [0x927afc] */
L_005DDC32:
    ecx = esi; /* 0x005DDC32: mov ecx, esi */
    MEM32(esi + 0xCB2C) = eax; /* 0x005DDC34: mov dword ptr [esi + 0xcb2c], eax */
    MEM16(esi + 0xCB30) = (uint16_t)(0); /* 0x005DDC3A: mov word ptr [esi + 0xcb30], 0 */
    MEM8(esi + 0xCB32) = (uint8_t)(0); /* 0x005DDC43: mov byte ptr [esi + 0xcb32], 0 */
    RECOMP_CALL(sub_005DE850); /* 0x005DDC4A: call 0x5de850 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x005DDC4F: push 0xc */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DDC51: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x94)) = 0; /* 0x005DDC54: mov dword ptr [ebp - 0x94], 0 */
    eax = esi + 0xCB60; /* 0x005DDC5E: lea eax, [esi + 0xcb60] */
    MEM32(ebp + (-0x90)) = 0; /* 0x005DDC64: mov dword ptr [ebp - 0x90], 0 */
    PUSH32(esp, 0x007F61C4u); /* 0x005DDC6E: push 0x7f61c4 */
    ecx = ebp + (-0xA4); /* 0x005DDC73: lea ecx, [ebp - 0xa4] */
    MEM8(esi + 0xCBBC) = (uint8_t)(1); /* 0x005DDC79: mov byte ptr [esi + 0xcbbc], 1 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DDC80: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DDC88: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(1); /* 0x005DDC8E: mov byte ptr [ebp - 0x358], 1 */
    MEM32(ebp + (-0x90)) = 0xFu; /* 0x005DDC95: mov dword ptr [ebp - 0x90], 0xf */
    MEM32(ebp + (-0x94)) = 0; /* 0x005DDC9F: mov dword ptr [ebp - 0x94], 0 */
    MEM8(ebp + (-0xA4)) = (uint8_t)(0); /* 0x005DDCA9: mov byte ptr [ebp - 0xa4], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DDCB0: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xBu); /* 0x005DDCB5: mov byte ptr [ebp - 4], 0xb */
    eax = ebp + (-0xA4); /* 0x005DDCB9: lea eax, [ebp - 0xa4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DDCBF: push -1 */
    PUSH32(esp, 0); /* 0x005DDCC1: push 0 */
    MEM32(ebp + (-0x344)) = 0; /* 0x005DDCC3: mov dword ptr [ebp - 0x344], 0 */
    ecx = ebp + (-0x354); /* 0x005DDCCD: lea ecx, [ebp - 0x354] */
    MEM32(ebp + (-0x340)) = 0; /* 0x005DDCD3: mov dword ptr [ebp - 0x340], 0 */
    PUSH32(esp, eax); /* 0x005DDCDD: push eax */
    MEM32(ebp + (-0x340)) = 0xFu; /* 0x005DDCDE: mov dword ptr [ebp - 0x340], 0xf */
    MEM32(ebp + (-0x344)) = 0; /* 0x005DDCE8: mov dword ptr [ebp - 0x344], 0 */
    MEM8(ebp + (-0x354)) = (uint8_t)(0); /* 0x005DDCF2: mov byte ptr [ebp - 0x354], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DDCF9: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xCu); /* 0x005DDCFE: mov byte ptr [ebp - 4], 0xc */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DDD02: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x33C), _xmm[0]); /* 0x005DDD0A: movdqu xmmword ptr [ebp - 0x33c], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x005DDD12: mov byte ptr [ebp - 4], 0xe */
    /* cmp MEM32(ebp + (-0x90)), 0x10u */ /* 0x005DDD16: cmp dword ptr [ebp - 0x90], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x005DDD1D: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005DDD30; /* 0x005DDD23: jb 0x5ddd30 */
L_005DDD25:
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x005DDD25: push dword ptr [ebp - 0xa4] */
    RECOMP_ICALL(edi); /* 0x005DDD2B: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DDD2D: add esp, 4 */
    _flag_k = FK_ADD;
L_005DDD30:
    PUSH32(esp, 0xCu); /* 0x005DDD30: push 0xc */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DDD32: xorps xmm0, xmm0 */
    MEM32(ebp + (-0xF4)) = 0; /* 0x005DDD35: mov dword ptr [ebp - 0xf4], 0 */
    eax = esi + 0xCB64; /* 0x005DDD3F: lea eax, [esi + 0xcb64] */
    MEM32(ebp + (-0xF0)) = 0; /* 0x005DDD45: mov dword ptr [ebp - 0xf0], 0 */
    PUSH32(esp, 0x007F61D4u); /* 0x005DDD4F: push 0x7f61d4 */
    ecx = ebp + (-0x104); /* 0x005DDD54: lea ecx, [ebp - 0x104] */
    MEM32(ebp + (-0x90)) = 0xFu; /* 0x005DDD5A: mov dword ptr [ebp - 0x90], 0xf */
    MEM32(ebp + (-0x94)) = 0; /* 0x005DDD64: mov dword ptr [ebp - 0x94], 0 */
    MEM8(ebp + (-0xA4)) = (uint8_t)(0); /* 0x005DDD6E: mov byte ptr [ebp - 0xa4], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DDD75: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DDD7D: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(1); /* 0x005DDD83: mov byte ptr [ebp - 0x358], 1 */
    MEM32(ebp + (-0xF0)) = 0xFu; /* 0x005DDD8A: mov dword ptr [ebp - 0xf0], 0xf */
    MEM32(ebp + (-0xF4)) = 0; /* 0x005DDD94: mov dword ptr [ebp - 0xf4], 0 */
    MEM8(ebp + (-0x104)) = (uint8_t)(0); /* 0x005DDD9E: mov byte ptr [ebp - 0x104], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DDDA5: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x005DDDAA: mov byte ptr [ebp - 4], 0xf */
    eax = ebp + (-0x104); /* 0x005DDDAE: lea eax, [ebp - 0x104] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DDDB4: push -1 */
    PUSH32(esp, 0); /* 0x005DDDB6: push 0 */
    MEM32(ebp + (-0x31C)) = 0; /* 0x005DDDB8: mov dword ptr [ebp - 0x31c], 0 */
    ecx = ebp + (-0x32C); /* 0x005DDDC2: lea ecx, [ebp - 0x32c] */
    MEM32(ebp + (-0x318)) = 0; /* 0x005DDDC8: mov dword ptr [ebp - 0x318], 0 */
    PUSH32(esp, eax); /* 0x005DDDD2: push eax */
    MEM32(ebp + (-0x318)) = 0xFu; /* 0x005DDDD3: mov dword ptr [ebp - 0x318], 0xf */
    MEM32(ebp + (-0x31C)) = 0; /* 0x005DDDDD: mov dword ptr [ebp - 0x31c], 0 */
    MEM8(ebp + (-0x32C)) = (uint8_t)(0); /* 0x005DDDE7: mov byte ptr [ebp - 0x32c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DDDEE: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x10u); /* 0x005DDDF3: mov byte ptr [ebp - 4], 0x10 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DDDF7: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x314), _xmm[0]); /* 0x005DDDFF: movdqu xmmword ptr [ebp - 0x314], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x12u); /* 0x005DDE07: mov byte ptr [ebp - 4], 0x12 */
    /* cmp MEM32(ebp + (-0xF0)), 0x10u */ /* 0x005DDE0B: cmp dword ptr [ebp - 0xf0], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xF0))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DDE1F; /* 0x005DDE12: jb 0x5dde1f */
L_005DDE14:
    PUSH32(esp, MEM32(ebp + (-0x104))); /* 0x005DDE14: push dword ptr [ebp - 0x104] */
    RECOMP_ICALL(edi); /* 0x005DDE1A: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DDE1C: add esp, 4 */
    _flag_k = FK_ADD;
L_005DDE1F:
    PUSH32(esp, 6); /* 0x005DDE1F: push 6 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DDE21: xorps xmm0, xmm0 */
    MEM32(ebp + (-0xC4)) = 0; /* 0x005DDE24: mov dword ptr [ebp - 0xc4], 0 */
    eax = esi + 0xCB8C; /* 0x005DDE2E: lea eax, [esi + 0xcb8c] */
    MEM32(ebp + (-0xC0)) = 0; /* 0x005DDE34: mov dword ptr [ebp - 0xc0], 0 */
    PUSH32(esp, 0x007F61E4u); /* 0x005DDE3E: push 0x7f61e4 */
    ecx = ebp + (-0xD4); /* 0x005DDE43: lea ecx, [ebp - 0xd4] */
    MEM32(ebp + (-0xF0)) = 0xFu; /* 0x005DDE49: mov dword ptr [ebp - 0xf0], 0xf */
    MEM32(ebp + (-0xF4)) = 0; /* 0x005DDE53: mov dword ptr [ebp - 0xf4], 0 */
    MEM8(ebp + (-0x104)) = (uint8_t)(0); /* 0x005DDE5D: mov byte ptr [ebp - 0x104], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DDE64: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DDE6C: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(0); /* 0x005DDE72: mov byte ptr [ebp - 0x358], 0 */
    MEM32(ebp + (-0xC0)) = 0xFu; /* 0x005DDE79: mov dword ptr [ebp - 0xc0], 0xf */
    MEM32(ebp + (-0xC4)) = 0; /* 0x005DDE83: mov dword ptr [ebp - 0xc4], 0 */
    MEM8(ebp + (-0xD4)) = (uint8_t)(0); /* 0x005DDE8D: mov byte ptr [ebp - 0xd4], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DDE94: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x13u); /* 0x005DDE99: mov byte ptr [ebp - 4], 0x13 */
    eax = ebp + (-0xD4); /* 0x005DDE9D: lea eax, [ebp - 0xd4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DDEA3: push -1 */
    PUSH32(esp, 0); /* 0x005DDEA5: push 0 */
    MEM32(ebp + (-0x2F4)) = 0; /* 0x005DDEA7: mov dword ptr [ebp - 0x2f4], 0 */
    ecx = ebp + (-0x304); /* 0x005DDEB1: lea ecx, [ebp - 0x304] */
    MEM32(ebp + (-0x2F0)) = 0; /* 0x005DDEB7: mov dword ptr [ebp - 0x2f0], 0 */
    PUSH32(esp, eax); /* 0x005DDEC1: push eax */
    MEM32(ebp + (-0x2F0)) = 0xFu; /* 0x005DDEC2: mov dword ptr [ebp - 0x2f0], 0xf */
    MEM32(ebp + (-0x2F4)) = 0; /* 0x005DDECC: mov dword ptr [ebp - 0x2f4], 0 */
    MEM8(ebp + (-0x304)) = (uint8_t)(0); /* 0x005DDED6: mov byte ptr [ebp - 0x304], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DDEDD: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x14u); /* 0x005DDEE2: mov byte ptr [ebp - 4], 0x14 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DDEE6: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x2EC), _xmm[0]); /* 0x005DDEEE: movdqu xmmword ptr [ebp - 0x2ec], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x16u); /* 0x005DDEF6: mov byte ptr [ebp - 4], 0x16 */
    /* cmp MEM32(ebp + (-0xC0)), 0x10u */ /* 0x005DDEFA: cmp dword ptr [ebp - 0xc0], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC0))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DDF0E; /* 0x005DDF01: jb 0x5ddf0e */
L_005DDF03:
    PUSH32(esp, MEM32(ebp + (-0xD4))); /* 0x005DDF03: push dword ptr [ebp - 0xd4] */
    RECOMP_ICALL(edi); /* 0x005DDF09: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DDF0B: add esp, 4 */
    _flag_k = FK_ADD;
L_005DDF0E:
    PUSH32(esp, 0x11u); /* 0x005DDF0E: push 0x11 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DDF10: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x64)) = 0; /* 0x005DDF13: mov dword ptr [ebp - 0x64], 0 */
    eax = esi + 0xCB94; /* 0x005DDF1A: lea eax, [esi + 0xcb94] */
    MEM32(ebp + (-0x60)) = 0; /* 0x005DDF20: mov dword ptr [ebp - 0x60], 0 */
    PUSH32(esp, 0x007F62E8u); /* 0x005DDF27: push 0x7f62e8 */
    ecx = ebp + (-0x74); /* 0x005DDF2C: lea ecx, [ebp - 0x74] */
    MEM32(ebp + (-0xC0)) = 0xFu; /* 0x005DDF2F: mov dword ptr [ebp - 0xc0], 0xf */
    MEM32(ebp + (-0xC4)) = 0; /* 0x005DDF39: mov dword ptr [ebp - 0xc4], 0 */
    MEM8(ebp + (-0xD4)) = (uint8_t)(0); /* 0x005DDF43: mov byte ptr [ebp - 0xd4], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DDF4A: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DDF52: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(0); /* 0x005DDF58: mov byte ptr [ebp - 0x358], 0 */
    MEM32(ebp + (-0x60)) = 0xFu; /* 0x005DDF5F: mov dword ptr [ebp - 0x60], 0xf */
    MEM32(ebp + (-0x64)) = 0; /* 0x005DDF66: mov dword ptr [ebp - 0x64], 0 */
    MEM8(ebp + (-0x74)) = (uint8_t)(0); /* 0x005DDF6D: mov byte ptr [ebp - 0x74], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DDF71: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x17u); /* 0x005DDF76: mov byte ptr [ebp - 4], 0x17 */
    eax = ebp + (-0x74); /* 0x005DDF7A: lea eax, [ebp - 0x74] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DDF7D: push -1 */
    PUSH32(esp, 0); /* 0x005DDF7F: push 0 */
    MEM32(ebp + (-0x2CC)) = 0; /* 0x005DDF81: mov dword ptr [ebp - 0x2cc], 0 */
    ecx = ebp + (-0x2DC); /* 0x005DDF8B: lea ecx, [ebp - 0x2dc] */
    MEM32(ebp + (-0x2C8)) = 0; /* 0x005DDF91: mov dword ptr [ebp - 0x2c8], 0 */
    PUSH32(esp, eax); /* 0x005DDF9B: push eax */
    MEM32(ebp + (-0x2C8)) = 0xFu; /* 0x005DDF9C: mov dword ptr [ebp - 0x2c8], 0xf */
    MEM32(ebp + (-0x2CC)) = 0; /* 0x005DDFA6: mov dword ptr [ebp - 0x2cc], 0 */
    MEM8(ebp + (-0x2DC)) = (uint8_t)(0); /* 0x005DDFB0: mov byte ptr [ebp - 0x2dc], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DDFB7: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x18u); /* 0x005DDFBC: mov byte ptr [ebp - 4], 0x18 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DDFC0: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x2C4), _xmm[0]); /* 0x005DDFC8: movdqu xmmword ptr [ebp - 0x2c4], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x1Au); /* 0x005DDFD0: mov byte ptr [ebp - 4], 0x1a */
    /* cmp MEM32(ebp + (-0x60)), 0x10u */ /* 0x005DDFD4: cmp dword ptr [ebp - 0x60], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DDFE2; /* 0x005DDFD8: jb 0x5ddfe2 */
L_005DDFDA:
    PUSH32(esp, MEM32(ebp + (-0x74))); /* 0x005DDFDA: push dword ptr [ebp - 0x74] */
    RECOMP_ICALL(edi); /* 0x005DDFDD: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DDFDF: add esp, 4 */
    _flag_k = FK_ADD;
L_005DDFE2:
    PUSH32(esp, 0x11u); /* 0x005DDFE2: push 0x11 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DDFE4: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DDFE7: mov dword ptr [ebp - 0x1c], 0 */
    eax = esi + 0xCB98; /* 0x005DDFEE: lea eax, [esi + 0xcb98] */
    MEM32(ebp + (-0x18)) = 0; /* 0x005DDFF4: mov dword ptr [ebp - 0x18], 0 */
    PUSH32(esp, 0x007F62FCu); /* 0x005DDFFB: push 0x7f62fc */
    ecx = ebp + (-0x2C); /* 0x005DE000: lea ecx, [ebp - 0x2c] */
    MEM32(ebp + (-0x60)) = 0xFu; /* 0x005DE003: mov dword ptr [ebp - 0x60], 0xf */
    MEM32(ebp + (-0x64)) = 0; /* 0x005DE00A: mov dword ptr [ebp - 0x64], 0 */
    MEM8(ebp + (-0x74)) = (uint8_t)(0); /* 0x005DE011: mov byte ptr [ebp - 0x74], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE015: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE01D: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(0); /* 0x005DE023: mov byte ptr [ebp - 0x358], 0 */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005DE02A: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DE031: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005DE038: mov byte ptr [ebp - 0x2c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DE03C: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x1Bu); /* 0x005DE041: mov byte ptr [ebp - 4], 0x1b */
    eax = ebp + (-0x2C); /* 0x005DE045: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE048: push -1 */
    PUSH32(esp, 0); /* 0x005DE04A: push 0 */
    MEM32(ebp + (-0x2A4)) = 0; /* 0x005DE04C: mov dword ptr [ebp - 0x2a4], 0 */
    ecx = ebp + (-0x2B4); /* 0x005DE056: lea ecx, [ebp - 0x2b4] */
    MEM32(ebp + (-0x2A0)) = 0; /* 0x005DE05C: mov dword ptr [ebp - 0x2a0], 0 */
    PUSH32(esp, eax); /* 0x005DE066: push eax */
    MEM32(ebp + (-0x2A0)) = 0xFu; /* 0x005DE067: mov dword ptr [ebp - 0x2a0], 0xf */
    MEM32(ebp + (-0x2A4)) = 0; /* 0x005DE071: mov dword ptr [ebp - 0x2a4], 0 */
    MEM8(ebp + (-0x2B4)) = (uint8_t)(0); /* 0x005DE07B: mov byte ptr [ebp - 0x2b4], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE082: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x1Cu); /* 0x005DE087: mov byte ptr [ebp - 4], 0x1c */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE08B: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x29C), _xmm[0]); /* 0x005DE093: movdqu xmmword ptr [ebp - 0x29c], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x1Eu); /* 0x005DE09B: mov byte ptr [ebp - 4], 0x1e */
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x005DE09F: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE0AD; /* 0x005DE0A3: jb 0x5de0ad */
L_005DE0A5:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x005DE0A5: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(edi); /* 0x005DE0A8: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE0AA: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE0AD:
    PUSH32(esp, 0x10u); /* 0x005DE0AD: push 0x10 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE0AF: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x34)) = 0; /* 0x005DE0B2: mov dword ptr [ebp - 0x34], 0 */
    eax = esi + 0xCB68; /* 0x005DE0B9: lea eax, [esi + 0xcb68] */
    MEM32(ebp + (-0x30)) = 0; /* 0x005DE0BF: mov dword ptr [ebp - 0x30], 0 */
    PUSH32(esp, 0x007F6310u); /* 0x005DE0C6: push 0x7f6310 */
    ecx = ebp + (-0x44); /* 0x005DE0CB: lea ecx, [ebp - 0x44] */
    MEM32(ebp + (-0x18)) = 0xFu; /* 0x005DE0CE: mov dword ptr [ebp - 0x18], 0xf */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005DE0D5: mov dword ptr [ebp - 0x1c], 0 */
    MEM8(ebp + (-0x2C)) = (uint8_t)(0); /* 0x005DE0DC: mov byte ptr [ebp - 0x2c], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE0E0: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE0E8: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(0); /* 0x005DE0EE: mov byte ptr [ebp - 0x358], 0 */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x005DE0F5: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x005DE0FC: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x005DE103: mov byte ptr [ebp - 0x44], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DE107: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x1Fu); /* 0x005DE10C: mov byte ptr [ebp - 4], 0x1f */
    eax = ebp + (-0x44); /* 0x005DE110: lea eax, [ebp - 0x44] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE113: push -1 */
    PUSH32(esp, 0); /* 0x005DE115: push 0 */
    MEM32(ebp + (-0x27C)) = 0; /* 0x005DE117: mov dword ptr [ebp - 0x27c], 0 */
    ecx = ebp + (-0x28C); /* 0x005DE121: lea ecx, [ebp - 0x28c] */
    MEM32(ebp + (-0x278)) = 0; /* 0x005DE127: mov dword ptr [ebp - 0x278], 0 */
    PUSH32(esp, eax); /* 0x005DE131: push eax */
    MEM32(ebp + (-0x278)) = 0xFu; /* 0x005DE132: mov dword ptr [ebp - 0x278], 0xf */
    MEM32(ebp + (-0x27C)) = 0; /* 0x005DE13C: mov dword ptr [ebp - 0x27c], 0 */
    MEM8(ebp + (-0x28C)) = (uint8_t)(0); /* 0x005DE146: mov byte ptr [ebp - 0x28c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE14D: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x20u); /* 0x005DE152: mov byte ptr [ebp - 4], 0x20 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE156: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x274), _xmm[0]); /* 0x005DE15E: movdqu xmmword ptr [ebp - 0x274], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x22u); /* 0x005DE166: mov byte ptr [ebp - 4], 0x22 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x005DE16A: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE178; /* 0x005DE16E: jb 0x5de178 */
L_005DE170:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x005DE170: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(edi); /* 0x005DE173: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE175: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE178:
    PUSH32(esp, 0xBu); /* 0x005DE178: push 0xb */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE17A: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x4C)) = 0; /* 0x005DE17D: mov dword ptr [ebp - 0x4c], 0 */
    eax = esi + 0xCB4C; /* 0x005DE184: lea eax, [esi + 0xcb4c] */
    MEM32(ebp + (-0x48)) = 0; /* 0x005DE18A: mov dword ptr [ebp - 0x48], 0 */
    PUSH32(esp, 0x007F6324u); /* 0x005DE191: push 0x7f6324 */
    ecx = ebp + (-0x5C); /* 0x005DE196: lea ecx, [ebp - 0x5c] */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x005DE199: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x005DE1A0: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x005DE1A7: mov byte ptr [ebp - 0x44], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE1AB: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE1B3: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(1); /* 0x005DE1B9: mov byte ptr [ebp - 0x358], 1 */
    MEM32(ebp + (-0x48)) = 0xFu; /* 0x005DE1C0: mov dword ptr [ebp - 0x48], 0xf */
    MEM32(ebp + (-0x4C)) = 0; /* 0x005DE1C7: mov dword ptr [ebp - 0x4c], 0 */
    MEM8(ebp + (-0x5C)) = (uint8_t)(0); /* 0x005DE1CE: mov byte ptr [ebp - 0x5c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DE1D2: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x23u); /* 0x005DE1D7: mov byte ptr [ebp - 4], 0x23 */
    eax = ebp + (-0x5C); /* 0x005DE1DB: lea eax, [ebp - 0x5c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE1DE: push -1 */
    PUSH32(esp, 0); /* 0x005DE1E0: push 0 */
    MEM32(ebp + (-0x254)) = 0; /* 0x005DE1E2: mov dword ptr [ebp - 0x254], 0 */
    ecx = ebp + (-0x264); /* 0x005DE1EC: lea ecx, [ebp - 0x264] */
    MEM32(ebp + (-0x250)) = 0; /* 0x005DE1F2: mov dword ptr [ebp - 0x250], 0 */
    PUSH32(esp, eax); /* 0x005DE1FC: push eax */
    MEM32(ebp + (-0x250)) = 0xFu; /* 0x005DE1FD: mov dword ptr [ebp - 0x250], 0xf */
    MEM32(ebp + (-0x254)) = 0; /* 0x005DE207: mov dword ptr [ebp - 0x254], 0 */
    MEM8(ebp + (-0x264)) = (uint8_t)(0); /* 0x005DE211: mov byte ptr [ebp - 0x264], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE218: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x24u); /* 0x005DE21D: mov byte ptr [ebp - 4], 0x24 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE221: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x24C), _xmm[0]); /* 0x005DE229: movdqu xmmword ptr [ebp - 0x24c], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x26u); /* 0x005DE231: mov byte ptr [ebp - 4], 0x26 */
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x005DE235: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE243; /* 0x005DE239: jb 0x5de243 */
L_005DE23B:
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x005DE23B: push dword ptr [ebp - 0x5c] */
    RECOMP_ICALL(edi); /* 0x005DE23E: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE240: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE243:
    PUSH32(esp, 0xBu); /* 0x005DE243: push 0xb */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE245: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x7C)) = 0; /* 0x005DE248: mov dword ptr [ebp - 0x7c], 0 */
    eax = esi + 0xCB50; /* 0x005DE24F: lea eax, [esi + 0xcb50] */
    MEM32(ebp + (-0x78)) = 0; /* 0x005DE255: mov dword ptr [ebp - 0x78], 0 */
    PUSH32(esp, 0x007F6330u); /* 0x005DE25C: push 0x7f6330 */
    ecx = ebp + (-0x8C); /* 0x005DE261: lea ecx, [ebp - 0x8c] */
    MEM32(ebp + (-0x48)) = 0xFu; /* 0x005DE267: mov dword ptr [ebp - 0x48], 0xf */
    MEM32(ebp + (-0x4C)) = 0; /* 0x005DE26E: mov dword ptr [ebp - 0x4c], 0 */
    MEM8(ebp + (-0x5C)) = (uint8_t)(0); /* 0x005DE275: mov byte ptr [ebp - 0x5c], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE279: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE281: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(1); /* 0x005DE287: mov byte ptr [ebp - 0x358], 1 */
    MEM32(ebp + (-0x78)) = 0xFu; /* 0x005DE28E: mov dword ptr [ebp - 0x78], 0xf */
    MEM32(ebp + (-0x7C)) = 0; /* 0x005DE295: mov dword ptr [ebp - 0x7c], 0 */
    MEM8(ebp + (-0x8C)) = (uint8_t)(0); /* 0x005DE29C: mov byte ptr [ebp - 0x8c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DE2A3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x27u); /* 0x005DE2A8: mov byte ptr [ebp - 4], 0x27 */
    eax = ebp + (-0x8C); /* 0x005DE2AC: lea eax, [ebp - 0x8c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE2B2: push -1 */
    PUSH32(esp, 0); /* 0x005DE2B4: push 0 */
    MEM32(ebp + (-0x22C)) = 0; /* 0x005DE2B6: mov dword ptr [ebp - 0x22c], 0 */
    ecx = ebp + (-0x23C); /* 0x005DE2C0: lea ecx, [ebp - 0x23c] */
    MEM32(ebp + (-0x228)) = 0; /* 0x005DE2C6: mov dword ptr [ebp - 0x228], 0 */
    PUSH32(esp, eax); /* 0x005DE2D0: push eax */
    MEM32(ebp + (-0x228)) = 0xFu; /* 0x005DE2D1: mov dword ptr [ebp - 0x228], 0xf */
    MEM32(ebp + (-0x22C)) = 0; /* 0x005DE2DB: mov dword ptr [ebp - 0x22c], 0 */
    MEM8(ebp + (-0x23C)) = (uint8_t)(0); /* 0x005DE2E5: mov byte ptr [ebp - 0x23c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE2EC: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x28u); /* 0x005DE2F1: mov byte ptr [ebp - 4], 0x28 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE2F5: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x224), _xmm[0]); /* 0x005DE2FD: movdqu xmmword ptr [ebp - 0x224], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x2Au); /* 0x005DE305: mov byte ptr [ebp - 4], 0x2a */
    /* cmp MEM32(ebp + (-0x78)), 0x10u */ /* 0x005DE309: cmp dword ptr [ebp - 0x78], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE31A; /* 0x005DE30D: jb 0x5de31a */
L_005DE30F:
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x005DE30F: push dword ptr [ebp - 0x8c] */
    RECOMP_ICALL(edi); /* 0x005DE315: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE317: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE31A:
    PUSH32(esp, 5); /* 0x005DE31A: push 5 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE31C: xorps xmm0, xmm0 */
    MEM32(ebp + (-0xAC)) = 0; /* 0x005DE31F: mov dword ptr [ebp - 0xac], 0 */
    eax = esi + 0xCB88; /* 0x005DE329: lea eax, [esi + 0xcb88] */
    MEM32(ebp + (-0xA8)) = 0; /* 0x005DE32F: mov dword ptr [ebp - 0xa8], 0 */
    PUSH32(esp, 0x007F633Cu); /* 0x005DE339: push 0x7f633c */
    ecx = ebp + (-0xBC); /* 0x005DE33E: lea ecx, [ebp - 0xbc] */
    MEM32(ebp + (-0x78)) = 0xFu; /* 0x005DE344: mov dword ptr [ebp - 0x78], 0xf */
    MEM32(ebp + (-0x7C)) = 0; /* 0x005DE34B: mov dword ptr [ebp - 0x7c], 0 */
    MEM8(ebp + (-0x8C)) = (uint8_t)(0); /* 0x005DE352: mov byte ptr [ebp - 0x8c], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE359: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE361: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(1); /* 0x005DE367: mov byte ptr [ebp - 0x358], 1 */
    MEM32(ebp + (-0xA8)) = 0xFu; /* 0x005DE36E: mov dword ptr [ebp - 0xa8], 0xf */
    MEM32(ebp + (-0xAC)) = 0; /* 0x005DE378: mov dword ptr [ebp - 0xac], 0 */
    MEM8(ebp + (-0xBC)) = (uint8_t)(0); /* 0x005DE382: mov byte ptr [ebp - 0xbc], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DE389: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x2Bu); /* 0x005DE38E: mov byte ptr [ebp - 4], 0x2b */
    eax = ebp + (-0xBC); /* 0x005DE392: lea eax, [ebp - 0xbc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE398: push -1 */
    PUSH32(esp, 0); /* 0x005DE39A: push 0 */
    MEM32(ebp + (-0x204)) = 0; /* 0x005DE39C: mov dword ptr [ebp - 0x204], 0 */
    ecx = ebp + (-0x214); /* 0x005DE3A6: lea ecx, [ebp - 0x214] */
    MEM32(ebp + (-0x200)) = 0; /* 0x005DE3AC: mov dword ptr [ebp - 0x200], 0 */
    PUSH32(esp, eax); /* 0x005DE3B6: push eax */
    MEM32(ebp + (-0x200)) = 0xFu; /* 0x005DE3B7: mov dword ptr [ebp - 0x200], 0xf */
    MEM32(ebp + (-0x204)) = 0; /* 0x005DE3C1: mov dword ptr [ebp - 0x204], 0 */
    MEM8(ebp + (-0x214)) = (uint8_t)(0); /* 0x005DE3CB: mov byte ptr [ebp - 0x214], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE3D2: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x2Cu); /* 0x005DE3D7: mov byte ptr [ebp - 4], 0x2c */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE3DB: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x1FC), _xmm[0]); /* 0x005DE3E3: movdqu xmmword ptr [ebp - 0x1fc], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x2Eu); /* 0x005DE3EB: mov byte ptr [ebp - 4], 0x2e */
    /* cmp MEM32(ebp + (-0xA8)), 0x10u */ /* 0x005DE3EF: cmp dword ptr [ebp - 0xa8], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA8))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE403; /* 0x005DE3F6: jb 0x5de403 */
L_005DE3F8:
    PUSH32(esp, MEM32(ebp + (-0xBC))); /* 0x005DE3F8: push dword ptr [ebp - 0xbc] */
    RECOMP_ICALL(edi); /* 0x005DE3FE: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE400: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE403:
    PUSH32(esp, 0xFu); /* 0x005DE403: push 0xf */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE405: xorps xmm0, xmm0 */
    MEM32(ebp + (-0xDC)) = 0; /* 0x005DE408: mov dword ptr [ebp - 0xdc], 0 */
    eax = esi + 0xCB78; /* 0x005DE412: lea eax, [esi + 0xcb78] */
    MEM32(ebp + (-0xD8)) = 0; /* 0x005DE418: mov dword ptr [ebp - 0xd8], 0 */
    PUSH32(esp, 0x007F6344u); /* 0x005DE422: push 0x7f6344 */
    ecx = ebp + (-0xEC); /* 0x005DE427: lea ecx, [ebp - 0xec] */
    MEM32(ebp + (-0xA8)) = 0xFu; /* 0x005DE42D: mov dword ptr [ebp - 0xa8], 0xf */
    MEM32(ebp + (-0xAC)) = 0; /* 0x005DE437: mov dword ptr [ebp - 0xac], 0 */
    MEM8(ebp + (-0xBC)) = (uint8_t)(0); /* 0x005DE441: mov byte ptr [ebp - 0xbc], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE448: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE450: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(0); /* 0x005DE456: mov byte ptr [ebp - 0x358], 0 */
    MEM32(ebp + (-0xD8)) = 0xFu; /* 0x005DE45D: mov dword ptr [ebp - 0xd8], 0xf */
    MEM32(ebp + (-0xDC)) = 0; /* 0x005DE467: mov dword ptr [ebp - 0xdc], 0 */
    MEM8(ebp + (-0xEC)) = (uint8_t)(0); /* 0x005DE471: mov byte ptr [ebp - 0xec], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DE478: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x2Fu); /* 0x005DE47D: mov byte ptr [ebp - 4], 0x2f */
    eax = ebp + (-0xEC); /* 0x005DE481: lea eax, [ebp - 0xec] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE487: push -1 */
    PUSH32(esp, 0); /* 0x005DE489: push 0 */
    MEM32(ebp + (-0x1DC)) = 0; /* 0x005DE48B: mov dword ptr [ebp - 0x1dc], 0 */
    ecx = ebp + (-0x1EC); /* 0x005DE495: lea ecx, [ebp - 0x1ec] */
    MEM32(ebp + (-0x1D8)) = 0; /* 0x005DE49B: mov dword ptr [ebp - 0x1d8], 0 */
    PUSH32(esp, eax); /* 0x005DE4A5: push eax */
    MEM32(ebp + (-0x1D8)) = 0xFu; /* 0x005DE4A6: mov dword ptr [ebp - 0x1d8], 0xf */
    MEM32(ebp + (-0x1DC)) = 0; /* 0x005DE4B0: mov dword ptr [ebp - 0x1dc], 0 */
    MEM8(ebp + (-0x1EC)) = (uint8_t)(0); /* 0x005DE4BA: mov byte ptr [ebp - 0x1ec], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE4C1: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x30u); /* 0x005DE4C6: mov byte ptr [ebp - 4], 0x30 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE4CA: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x1D4), _xmm[0]); /* 0x005DE4D2: movdqu xmmword ptr [ebp - 0x1d4], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x32u); /* 0x005DE4DA: mov byte ptr [ebp - 4], 0x32 */
    /* cmp MEM32(ebp + (-0xD8)), 0x10u */ /* 0x005DE4DE: cmp dword ptr [ebp - 0xd8], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD8))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE4F2; /* 0x005DE4E5: jb 0x5de4f2 */
L_005DE4E7:
    PUSH32(esp, MEM32(ebp + (-0xEC))); /* 0x005DE4E7: push dword ptr [ebp - 0xec] */
    RECOMP_ICALL(edi); /* 0x005DE4ED: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE4EF: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE4F2:
    PUSH32(esp, 0xCu); /* 0x005DE4F2: push 0xc */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE4F4: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x10C)) = 0; /* 0x005DE4F7: mov dword ptr [ebp - 0x10c], 0 */
    eax = esi + 0xCB54; /* 0x005DE501: lea eax, [esi + 0xcb54] */
    MEM32(ebp + (-0x108)) = 0; /* 0x005DE507: mov dword ptr [ebp - 0x108], 0 */
    PUSH32(esp, 0x007F6354u); /* 0x005DE511: push 0x7f6354 */
    ecx = ebp + (-0x11C); /* 0x005DE516: lea ecx, [ebp - 0x11c] */
    MEM32(ebp + (-0xD8)) = 0xFu; /* 0x005DE51C: mov dword ptr [ebp - 0xd8], 0xf */
    MEM32(ebp + (-0xDC)) = 0; /* 0x005DE526: mov dword ptr [ebp - 0xdc], 0 */
    MEM8(ebp + (-0xEC)) = (uint8_t)(0); /* 0x005DE530: mov byte ptr [ebp - 0xec], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE537: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE53F: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(1); /* 0x005DE545: mov byte ptr [ebp - 0x358], 1 */
    MEM32(ebp + (-0x108)) = 0xFu; /* 0x005DE54C: mov dword ptr [ebp - 0x108], 0xf */
    MEM32(ebp + (-0x10C)) = 0; /* 0x005DE556: mov dword ptr [ebp - 0x10c], 0 */
    MEM8(ebp + (-0x11C)) = (uint8_t)(0); /* 0x005DE560: mov byte ptr [ebp - 0x11c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DE567: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x33u); /* 0x005DE56C: mov byte ptr [ebp - 4], 0x33 */
    eax = ebp + (-0x11C); /* 0x005DE570: lea eax, [ebp - 0x11c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE576: push -1 */
    PUSH32(esp, 0); /* 0x005DE578: push 0 */
    MEM32(ebp + (-0x1B4)) = 0; /* 0x005DE57A: mov dword ptr [ebp - 0x1b4], 0 */
    ecx = ebp + (-0x1C4); /* 0x005DE584: lea ecx, [ebp - 0x1c4] */
    MEM32(ebp + (-0x1B0)) = 0; /* 0x005DE58A: mov dword ptr [ebp - 0x1b0], 0 */
    PUSH32(esp, eax); /* 0x005DE594: push eax */
    MEM32(ebp + (-0x1B0)) = 0xFu; /* 0x005DE595: mov dword ptr [ebp - 0x1b0], 0xf */
    MEM32(ebp + (-0x1B4)) = 0; /* 0x005DE59F: mov dword ptr [ebp - 0x1b4], 0 */
    MEM8(ebp + (-0x1C4)) = (uint8_t)(0); /* 0x005DE5A9: mov byte ptr [ebp - 0x1c4], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE5B0: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x34u); /* 0x005DE5B5: mov byte ptr [ebp - 4], 0x34 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE5B9: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x1AC), _xmm[0]); /* 0x005DE5C1: movdqu xmmword ptr [ebp - 0x1ac], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x36u); /* 0x005DE5C9: mov byte ptr [ebp - 4], 0x36 */
    /* cmp MEM32(ebp + (-0x108)), 0x10u */ /* 0x005DE5CD: cmp dword ptr [ebp - 0x108], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x108))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE5E1; /* 0x005DE5D4: jb 0x5de5e1 */
L_005DE5D6:
    PUSH32(esp, MEM32(ebp + (-0x11C))); /* 0x005DE5D6: push dword ptr [ebp - 0x11c] */
    RECOMP_ICALL(edi); /* 0x005DE5DC: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE5DE: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE5E1:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE5E1: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x108)) = 0xFu; /* 0x005DE5E4: mov dword ptr [ebp - 0x108], 0xf */
    eax = esi + 0xCB58; /* 0x005DE5EE: lea eax, [esi + 0xcb58] */
    MEM32(ebp + (-0x10C)) = 0; /* 0x005DE5F4: mov dword ptr [ebp - 0x10c], 0 */
    PUSH32(esp, 0x007F6268u); /* 0x005DE5FE: push 0x7f6268 */
    ecx = ebp + (-0x14C); /* 0x005DE603: lea ecx, [ebp - 0x14c] */
    MEM8(ebp + (-0x11C)) = (uint8_t)(0); /* 0x005DE609: mov byte ptr [ebp - 0x11c], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE610: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE618: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(1); /* 0x005DE61E: mov byte ptr [ebp - 0x358], 1 */
    RECOMP_CALL(sub_00409FA0); /* 0x005DE625: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x37u); /* 0x005DE62A: mov byte ptr [ebp - 4], 0x37 */
    eax = ebp + (-0x14C); /* 0x005DE62E: lea eax, [ebp - 0x14c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE634: push -1 */
    PUSH32(esp, 0); /* 0x005DE636: push 0 */
    MEM32(ebp + (-0x18C)) = 0; /* 0x005DE638: mov dword ptr [ebp - 0x18c], 0 */
    ecx = ebp + (-0x19C); /* 0x005DE642: lea ecx, [ebp - 0x19c] */
    MEM32(ebp + (-0x188)) = 0; /* 0x005DE648: mov dword ptr [ebp - 0x188], 0 */
    PUSH32(esp, eax); /* 0x005DE652: push eax */
    MEM32(ebp + (-0x188)) = 0xFu; /* 0x005DE653: mov dword ptr [ebp - 0x188], 0xf */
    MEM32(ebp + (-0x18C)) = 0; /* 0x005DE65D: mov dword ptr [ebp - 0x18c], 0 */
    MEM8(ebp + (-0x19C)) = (uint8_t)(0); /* 0x005DE667: mov byte ptr [ebp - 0x19c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE66E: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x38u); /* 0x005DE673: mov byte ptr [ebp - 4], 0x38 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE677: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x184), _xmm[0]); /* 0x005DE67F: movdqu xmmword ptr [ebp - 0x184], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x3Au); /* 0x005DE687: mov byte ptr [ebp - 4], 0x3a */
    /* cmp MEM32(ebp + (-0x138)), 0x10u */ /* 0x005DE68B: cmp dword ptr [ebp - 0x138], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x138))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE69F; /* 0x005DE692: jb 0x5de69f */
L_005DE694:
    PUSH32(esp, MEM32(ebp + (-0x14C))); /* 0x005DE694: push dword ptr [ebp - 0x14c] */
    RECOMP_ICALL(edi); /* 0x005DE69A: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE69C: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE69F:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE69F: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x138)) = 0xFu; /* 0x005DE6A2: mov dword ptr [ebp - 0x138], 0xf */
    eax = esi + 0xCB5C; /* 0x005DE6AC: lea eax, [esi + 0xcb5c] */
    MEM32(ebp + (-0x13C)) = 0; /* 0x005DE6B2: mov dword ptr [ebp - 0x13c], 0 */
    PUSH32(esp, 0x007F6278u); /* 0x005DE6BC: push 0x7f6278 */
    ecx = ebp + (-0x134); /* 0x005DE6C1: lea ecx, [ebp - 0x134] */
    MEM8(ebp + (-0x14C)) = (uint8_t)(0); /* 0x005DE6C7: mov byte ptr [ebp - 0x14c], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE6CE: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE6D6: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(1); /* 0x005DE6DC: mov byte ptr [ebp - 0x358], 1 */
    RECOMP_CALL(sub_00409FA0); /* 0x005DE6E3: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x3Bu); /* 0x005DE6E8: mov byte ptr [ebp - 4], 0x3b */
    eax = ebp + (-0x134); /* 0x005DE6EC: lea eax, [ebp - 0x134] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE6F2: push -1 */
    PUSH32(esp, 0); /* 0x005DE6F4: push 0 */
    MEM32(ebp + (-0x164)) = 0; /* 0x005DE6F6: mov dword ptr [ebp - 0x164], 0 */
    ecx = ebp + (-0x174); /* 0x005DE700: lea ecx, [ebp - 0x174] */
    MEM32(ebp + (-0x160)) = 0; /* 0x005DE706: mov dword ptr [ebp - 0x160], 0 */
    PUSH32(esp, eax); /* 0x005DE710: push eax */
    MEM32(ebp + (-0x160)) = 0xFu; /* 0x005DE711: mov dword ptr [ebp - 0x160], 0xf */
    MEM32(ebp + (-0x164)) = 0; /* 0x005DE71B: mov dword ptr [ebp - 0x164], 0 */
    MEM8(ebp + (-0x174)) = (uint8_t)(0); /* 0x005DE725: mov byte ptr [ebp - 0x174], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE72C: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x3Cu); /* 0x005DE731: mov byte ptr [ebp - 4], 0x3c */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE735: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x15C), _xmm[0]); /* 0x005DE73D: movdqu xmmword ptr [ebp - 0x15c], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x3Eu); /* 0x005DE745: mov byte ptr [ebp - 4], 0x3e */
    /* cmp MEM32(ebp + (-0x120)), 0x10u */ /* 0x005DE749: cmp dword ptr [ebp - 0x120], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x120))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE75D; /* 0x005DE750: jb 0x5de75d */
L_005DE752:
    PUSH32(esp, MEM32(ebp + (-0x134))); /* 0x005DE752: push dword ptr [ebp - 0x134] */
    RECOMP_ICALL(edi); /* 0x005DE758: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE75A: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE75D:
    MEM32(ebp + (-0x120)) = 0xFu; /* 0x005DE75D: mov dword ptr [ebp - 0x120], 0xf */
    MEM32(ebp + (-0x124)) = 0; /* 0x005DE767: mov dword ptr [ebp - 0x124], 0 */
    MEM8(ebp + (-0x134)) = (uint8_t)(0); /* 0x005DE771: mov byte ptr [ebp - 0x134], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x3Fu); /* 0x005DE778: mov byte ptr [ebp - 4], 0x3f */
    eax = ebp + (-0x14C); /* 0x005DE77C: lea eax, [ebp - 0x14c] */
    ecx = ebp + (-0x354); /* 0x005DE782: lea ecx, [ebp - 0x354] */
    PUSH32(esp, eax); /* 0x005DE788: push eax */
    PUSH32(esp, ecx); /* 0x005DE789: push ecx */
    ecx = ebp + (-0x370); /* 0x005DE78A: lea ecx, [ebp - 0x370] */
    RECOMP_CALL(sub_005E0270); /* 0x005DE790: call 0x5e0270 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x40u); /* 0x005DE795: mov byte ptr [ebp - 4], 0x40 */
    ecx = ebx; /* 0x005DE799: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005DE79B: push eax */
    RECOMP_CALL(sub_005E01C0); /* 0x005DE79C: call 0x5e01c0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x42u); /* 0x005DE7A1: mov byte ptr [ebp - 4], 0x42 */
    ecx = ebp + (-0x370); /* 0x005DE7A5: lea ecx, [ebp - 0x370] */
    eax = MEM32(ebp + (-0x370)); /* 0x005DE7AB: mov eax, dword ptr [ebp - 0x370] */
    PUSH32(esp, eax); /* 0x005DE7B1: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005DE7B2: push dword ptr [eax] */
    eax = ebp + (-0x368); /* 0x005DE7B4: lea eax, [ebp - 0x368] */
    PUSH32(esp, eax); /* 0x005DE7BA: push eax */
    RECOMP_CALL(sub_005E03E0); /* 0x005DE7BB: call 0x5e03e0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x3Fu); /* 0x005DE7C0: mov byte ptr [ebp - 4], 0x3f */
    PUSH32(esp, MEM32(ebp + (-0x370))); /* 0x005DE7C4: push dword ptr [ebp - 0x370] */
    RECOMP_ICALL(edi); /* 0x005DE7CA: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE7CC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x005DE7CF: mov byte ptr [ebp - 4], 0xa */
    PUSH32(esp, 0x004296F0u); /* 0x005DE7D3: push 0x4296f0 */
    PUSH32(esp, 0xDu); /* 0x005DE7D8: push 0xd */
    PUSH32(esp, 0x28u); /* 0x005DE7DA: push 0x28 */
    eax = ebp + (-0x354); /* 0x005DE7DC: lea eax, [ebp - 0x354] */
    PUSH32(esp, eax); /* 0x005DE7E2: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x005DE7E3: call 0x77f628 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x005DE7E8: mov ecx, esi */
    RECOMP_CALL(sub_005DED00); /* 0x005DE7EA: call 0x5ded00 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DE7EF: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005DE7F6: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DE7F8: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DE7FB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DE802: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DE803: pop edi */
    esi = POP32_VAL(esp); /* 0x005DE804: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DE805: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x005DE806: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005DE809: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005DE80B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005DE810: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DE812: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005DE813: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005DE111(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DE111u);

L_005DE111:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x005DE111: inc ebp */
    _flag_k = FK_INC;
    esp = 0x006AFF6Au; /* 0x005DE112: mov esp, 0x6aff6a */
    MEM32(ebp + (-0x27C)) = 0; /* 0x005DE117: mov dword ptr [ebp - 0x27c], 0 */
    ecx = ebp + (-0x28C); /* 0x005DE121: lea ecx, [ebp - 0x28c] */
    MEM32(ebp + (-0x278)) = 0; /* 0x005DE127: mov dword ptr [ebp - 0x278], 0 */
    PUSH32(esp, eax); /* 0x005DE131: push eax */
    MEM32(ebp + (-0x278)) = 0xFu; /* 0x005DE132: mov dword ptr [ebp - 0x278], 0xf */
    MEM32(ebp + (-0x27C)) = 0; /* 0x005DE13C: mov dword ptr [ebp - 0x27c], 0 */
    MEM8(ebp + (-0x28C)) = (uint8_t)(0); /* 0x005DE146: mov byte ptr [ebp - 0x28c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE14D: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x20u); /* 0x005DE152: mov byte ptr [ebp - 4], 0x20 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE156: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x274), _xmm[0]); /* 0x005DE15E: movdqu xmmword ptr [ebp - 0x274], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x22u); /* 0x005DE166: mov byte ptr [ebp - 4], 0x22 */
    /* cmp MEM32(ebp + (-0x30)), 0x10u */ /* 0x005DE16A: cmp dword ptr [ebp - 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE178; /* 0x005DE16E: jb 0x5de178 */
L_005DE170:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x005DE170: push dword ptr [ebp - 0x44] */
    RECOMP_ICALL(edi); /* 0x005DE173: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE175: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE178:
    PUSH32(esp, 0xBu); /* 0x005DE178: push 0xb */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE17A: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x4C)) = 0; /* 0x005DE17D: mov dword ptr [ebp - 0x4c], 0 */
    eax = esi + 0xCB4C; /* 0x005DE184: lea eax, [esi + 0xcb4c] */
    MEM32(ebp + (-0x48)) = 0; /* 0x005DE18A: mov dword ptr [ebp - 0x48], 0 */
    PUSH32(esp, 0x007F6324u); /* 0x005DE191: push 0x7f6324 */
    ecx = ebp + (-0x5C); /* 0x005DE196: lea ecx, [ebp - 0x5c] */
    MEM32(ebp + (-0x30)) = 0xFu; /* 0x005DE199: mov dword ptr [ebp - 0x30], 0xf */
    MEM32(ebp + (-0x34)) = 0; /* 0x005DE1A0: mov dword ptr [ebp - 0x34], 0 */
    MEM8(ebp + (-0x44)) = (uint8_t)(0); /* 0x005DE1A7: mov byte ptr [ebp - 0x44], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE1AB: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE1B3: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(1); /* 0x005DE1B9: mov byte ptr [ebp - 0x358], 1 */
    MEM32(ebp + (-0x48)) = 0xFu; /* 0x005DE1C0: mov dword ptr [ebp - 0x48], 0xf */
    MEM32(ebp + (-0x4C)) = 0; /* 0x005DE1C7: mov dword ptr [ebp - 0x4c], 0 */
    MEM8(ebp + (-0x5C)) = (uint8_t)(0); /* 0x005DE1CE: mov byte ptr [ebp - 0x5c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DE1D2: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x23u); /* 0x005DE1D7: mov byte ptr [ebp - 4], 0x23 */
    eax = ebp + (-0x5C); /* 0x005DE1DB: lea eax, [ebp - 0x5c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE1DE: push -1 */
    PUSH32(esp, 0); /* 0x005DE1E0: push 0 */
    MEM32(ebp + (-0x254)) = 0; /* 0x005DE1E2: mov dword ptr [ebp - 0x254], 0 */
    ecx = ebp + (-0x264); /* 0x005DE1EC: lea ecx, [ebp - 0x264] */
    MEM32(ebp + (-0x250)) = 0; /* 0x005DE1F2: mov dword ptr [ebp - 0x250], 0 */
    PUSH32(esp, eax); /* 0x005DE1FC: push eax */
    MEM32(ebp + (-0x250)) = 0xFu; /* 0x005DE1FD: mov dword ptr [ebp - 0x250], 0xf */
    MEM32(ebp + (-0x254)) = 0; /* 0x005DE207: mov dword ptr [ebp - 0x254], 0 */
    MEM8(ebp + (-0x264)) = (uint8_t)(0); /* 0x005DE211: mov byte ptr [ebp - 0x264], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE218: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x24u); /* 0x005DE21D: mov byte ptr [ebp - 4], 0x24 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE221: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x24C), _xmm[0]); /* 0x005DE229: movdqu xmmword ptr [ebp - 0x24c], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x26u); /* 0x005DE231: mov byte ptr [ebp - 4], 0x26 */
    /* cmp MEM32(ebp + (-0x48)), 0x10u */ /* 0x005DE235: cmp dword ptr [ebp - 0x48], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE243; /* 0x005DE239: jb 0x5de243 */
L_005DE23B:
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x005DE23B: push dword ptr [ebp - 0x5c] */
    RECOMP_ICALL(edi); /* 0x005DE23E: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE240: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE243:
    PUSH32(esp, 0xBu); /* 0x005DE243: push 0xb */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE245: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x7C)) = 0; /* 0x005DE248: mov dword ptr [ebp - 0x7c], 0 */
    eax = esi + 0xCB50; /* 0x005DE24F: lea eax, [esi + 0xcb50] */
    MEM32(ebp + (-0x78)) = 0; /* 0x005DE255: mov dword ptr [ebp - 0x78], 0 */
    PUSH32(esp, 0x007F6330u); /* 0x005DE25C: push 0x7f6330 */
    ecx = ebp + (-0x8C); /* 0x005DE261: lea ecx, [ebp - 0x8c] */
    MEM32(ebp + (-0x48)) = 0xFu; /* 0x005DE267: mov dword ptr [ebp - 0x48], 0xf */
    MEM32(ebp + (-0x4C)) = 0; /* 0x005DE26E: mov dword ptr [ebp - 0x4c], 0 */
    MEM8(ebp + (-0x5C)) = (uint8_t)(0); /* 0x005DE275: mov byte ptr [ebp - 0x5c], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE279: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE281: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(1); /* 0x005DE287: mov byte ptr [ebp - 0x358], 1 */
    MEM32(ebp + (-0x78)) = 0xFu; /* 0x005DE28E: mov dword ptr [ebp - 0x78], 0xf */
    MEM32(ebp + (-0x7C)) = 0; /* 0x005DE295: mov dword ptr [ebp - 0x7c], 0 */
    MEM8(ebp + (-0x8C)) = (uint8_t)(0); /* 0x005DE29C: mov byte ptr [ebp - 0x8c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DE2A3: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x27u); /* 0x005DE2A8: mov byte ptr [ebp - 4], 0x27 */
    eax = ebp + (-0x8C); /* 0x005DE2AC: lea eax, [ebp - 0x8c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE2B2: push -1 */
    PUSH32(esp, 0); /* 0x005DE2B4: push 0 */
    MEM32(ebp + (-0x22C)) = 0; /* 0x005DE2B6: mov dword ptr [ebp - 0x22c], 0 */
    ecx = ebp + (-0x23C); /* 0x005DE2C0: lea ecx, [ebp - 0x23c] */
    MEM32(ebp + (-0x228)) = 0; /* 0x005DE2C6: mov dword ptr [ebp - 0x228], 0 */
    PUSH32(esp, eax); /* 0x005DE2D0: push eax */
    MEM32(ebp + (-0x228)) = 0xFu; /* 0x005DE2D1: mov dword ptr [ebp - 0x228], 0xf */
    MEM32(ebp + (-0x22C)) = 0; /* 0x005DE2DB: mov dword ptr [ebp - 0x22c], 0 */
    MEM8(ebp + (-0x23C)) = (uint8_t)(0); /* 0x005DE2E5: mov byte ptr [ebp - 0x23c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE2EC: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x28u); /* 0x005DE2F1: mov byte ptr [ebp - 4], 0x28 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE2F5: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x224), _xmm[0]); /* 0x005DE2FD: movdqu xmmword ptr [ebp - 0x224], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x2Au); /* 0x005DE305: mov byte ptr [ebp - 4], 0x2a */
    /* cmp MEM32(ebp + (-0x78)), 0x10u */ /* 0x005DE309: cmp dword ptr [ebp - 0x78], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE31A; /* 0x005DE30D: jb 0x5de31a */
L_005DE30F:
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x005DE30F: push dword ptr [ebp - 0x8c] */
    RECOMP_ICALL(edi); /* 0x005DE315: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE317: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE31A:
    PUSH32(esp, 5); /* 0x005DE31A: push 5 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE31C: xorps xmm0, xmm0 */
    MEM32(ebp + (-0xAC)) = 0; /* 0x005DE31F: mov dword ptr [ebp - 0xac], 0 */
    eax = esi + 0xCB88; /* 0x005DE329: lea eax, [esi + 0xcb88] */
    MEM32(ebp + (-0xA8)) = 0; /* 0x005DE32F: mov dword ptr [ebp - 0xa8], 0 */
    PUSH32(esp, 0x007F633Cu); /* 0x005DE339: push 0x7f633c */
    ecx = ebp + (-0xBC); /* 0x005DE33E: lea ecx, [ebp - 0xbc] */
    MEM32(ebp + (-0x78)) = 0xFu; /* 0x005DE344: mov dword ptr [ebp - 0x78], 0xf */
    MEM32(ebp + (-0x7C)) = 0; /* 0x005DE34B: mov dword ptr [ebp - 0x7c], 0 */
    MEM8(ebp + (-0x8C)) = (uint8_t)(0); /* 0x005DE352: mov byte ptr [ebp - 0x8c], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE359: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE361: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(1); /* 0x005DE367: mov byte ptr [ebp - 0x358], 1 */
    MEM32(ebp + (-0xA8)) = 0xFu; /* 0x005DE36E: mov dword ptr [ebp - 0xa8], 0xf */
    MEM32(ebp + (-0xAC)) = 0; /* 0x005DE378: mov dword ptr [ebp - 0xac], 0 */
    MEM8(ebp + (-0xBC)) = (uint8_t)(0); /* 0x005DE382: mov byte ptr [ebp - 0xbc], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DE389: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x2Bu); /* 0x005DE38E: mov byte ptr [ebp - 4], 0x2b */
    eax = ebp + (-0xBC); /* 0x005DE392: lea eax, [ebp - 0xbc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE398: push -1 */
    PUSH32(esp, 0); /* 0x005DE39A: push 0 */
    MEM32(ebp + (-0x204)) = 0; /* 0x005DE39C: mov dword ptr [ebp - 0x204], 0 */
    ecx = ebp + (-0x214); /* 0x005DE3A6: lea ecx, [ebp - 0x214] */
    MEM32(ebp + (-0x200)) = 0; /* 0x005DE3AC: mov dword ptr [ebp - 0x200], 0 */
    PUSH32(esp, eax); /* 0x005DE3B6: push eax */
    MEM32(ebp + (-0x200)) = 0xFu; /* 0x005DE3B7: mov dword ptr [ebp - 0x200], 0xf */
    MEM32(ebp + (-0x204)) = 0; /* 0x005DE3C1: mov dword ptr [ebp - 0x204], 0 */
    MEM8(ebp + (-0x214)) = (uint8_t)(0); /* 0x005DE3CB: mov byte ptr [ebp - 0x214], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE3D2: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x2Cu); /* 0x005DE3D7: mov byte ptr [ebp - 4], 0x2c */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE3DB: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x1FC), _xmm[0]); /* 0x005DE3E3: movdqu xmmword ptr [ebp - 0x1fc], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x2Eu); /* 0x005DE3EB: mov byte ptr [ebp - 4], 0x2e */
    /* cmp MEM32(ebp + (-0xA8)), 0x10u */ /* 0x005DE3EF: cmp dword ptr [ebp - 0xa8], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA8))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE403; /* 0x005DE3F6: jb 0x5de403 */
L_005DE3F8:
    PUSH32(esp, MEM32(ebp + (-0xBC))); /* 0x005DE3F8: push dword ptr [ebp - 0xbc] */
    RECOMP_ICALL(edi); /* 0x005DE3FE: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE400: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE403:
    PUSH32(esp, 0xFu); /* 0x005DE403: push 0xf */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE405: xorps xmm0, xmm0 */
    MEM32(ebp + (-0xDC)) = 0; /* 0x005DE408: mov dword ptr [ebp - 0xdc], 0 */
    eax = esi + 0xCB78; /* 0x005DE412: lea eax, [esi + 0xcb78] */
    MEM32(ebp + (-0xD8)) = 0; /* 0x005DE418: mov dword ptr [ebp - 0xd8], 0 */
    PUSH32(esp, 0x007F6344u); /* 0x005DE422: push 0x7f6344 */
    ecx = ebp + (-0xEC); /* 0x005DE427: lea ecx, [ebp - 0xec] */
    MEM32(ebp + (-0xA8)) = 0xFu; /* 0x005DE42D: mov dword ptr [ebp - 0xa8], 0xf */
    MEM32(ebp + (-0xAC)) = 0; /* 0x005DE437: mov dword ptr [ebp - 0xac], 0 */
    MEM8(ebp + (-0xBC)) = (uint8_t)(0); /* 0x005DE441: mov byte ptr [ebp - 0xbc], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE448: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE450: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(0); /* 0x005DE456: mov byte ptr [ebp - 0x358], 0 */
    MEM32(ebp + (-0xD8)) = 0xFu; /* 0x005DE45D: mov dword ptr [ebp - 0xd8], 0xf */
    MEM32(ebp + (-0xDC)) = 0; /* 0x005DE467: mov dword ptr [ebp - 0xdc], 0 */
    MEM8(ebp + (-0xEC)) = (uint8_t)(0); /* 0x005DE471: mov byte ptr [ebp - 0xec], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DE478: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x2Fu); /* 0x005DE47D: mov byte ptr [ebp - 4], 0x2f */
    eax = ebp + (-0xEC); /* 0x005DE481: lea eax, [ebp - 0xec] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE487: push -1 */
    PUSH32(esp, 0); /* 0x005DE489: push 0 */
    MEM32(ebp + (-0x1DC)) = 0; /* 0x005DE48B: mov dword ptr [ebp - 0x1dc], 0 */
    ecx = ebp + (-0x1EC); /* 0x005DE495: lea ecx, [ebp - 0x1ec] */
    MEM32(ebp + (-0x1D8)) = 0; /* 0x005DE49B: mov dword ptr [ebp - 0x1d8], 0 */
    PUSH32(esp, eax); /* 0x005DE4A5: push eax */
    MEM32(ebp + (-0x1D8)) = 0xFu; /* 0x005DE4A6: mov dword ptr [ebp - 0x1d8], 0xf */
    MEM32(ebp + (-0x1DC)) = 0; /* 0x005DE4B0: mov dword ptr [ebp - 0x1dc], 0 */
    MEM8(ebp + (-0x1EC)) = (uint8_t)(0); /* 0x005DE4BA: mov byte ptr [ebp - 0x1ec], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE4C1: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x30u); /* 0x005DE4C6: mov byte ptr [ebp - 4], 0x30 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE4CA: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x1D4), _xmm[0]); /* 0x005DE4D2: movdqu xmmword ptr [ebp - 0x1d4], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x32u); /* 0x005DE4DA: mov byte ptr [ebp - 4], 0x32 */
    /* cmp MEM32(ebp + (-0xD8)), 0x10u */ /* 0x005DE4DE: cmp dword ptr [ebp - 0xd8], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD8))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE4F2; /* 0x005DE4E5: jb 0x5de4f2 */
L_005DE4E7:
    PUSH32(esp, MEM32(ebp + (-0xEC))); /* 0x005DE4E7: push dword ptr [ebp - 0xec] */
    RECOMP_ICALL(edi); /* 0x005DE4ED: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE4EF: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE4F2:
    PUSH32(esp, 0xCu); /* 0x005DE4F2: push 0xc */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE4F4: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x10C)) = 0; /* 0x005DE4F7: mov dword ptr [ebp - 0x10c], 0 */
    eax = esi + 0xCB54; /* 0x005DE501: lea eax, [esi + 0xcb54] */
    MEM32(ebp + (-0x108)) = 0; /* 0x005DE507: mov dword ptr [ebp - 0x108], 0 */
    PUSH32(esp, 0x007F6354u); /* 0x005DE511: push 0x7f6354 */
    ecx = ebp + (-0x11C); /* 0x005DE516: lea ecx, [ebp - 0x11c] */
    MEM32(ebp + (-0xD8)) = 0xFu; /* 0x005DE51C: mov dword ptr [ebp - 0xd8], 0xf */
    MEM32(ebp + (-0xDC)) = 0; /* 0x005DE526: mov dword ptr [ebp - 0xdc], 0 */
    MEM8(ebp + (-0xEC)) = (uint8_t)(0); /* 0x005DE530: mov byte ptr [ebp - 0xec], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE537: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE53F: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(1); /* 0x005DE545: mov byte ptr [ebp - 0x358], 1 */
    MEM32(ebp + (-0x108)) = 0xFu; /* 0x005DE54C: mov dword ptr [ebp - 0x108], 0xf */
    MEM32(ebp + (-0x10C)) = 0; /* 0x005DE556: mov dword ptr [ebp - 0x10c], 0 */
    MEM8(ebp + (-0x11C)) = (uint8_t)(0); /* 0x005DE560: mov byte ptr [ebp - 0x11c], 0 */
    RECOMP_CALL(sub_0040A2F0); /* 0x005DE567: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x33u); /* 0x005DE56C: mov byte ptr [ebp - 4], 0x33 */
    eax = ebp + (-0x11C); /* 0x005DE570: lea eax, [ebp - 0x11c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE576: push -1 */
    PUSH32(esp, 0); /* 0x005DE578: push 0 */
    MEM32(ebp + (-0x1B4)) = 0; /* 0x005DE57A: mov dword ptr [ebp - 0x1b4], 0 */
    ecx = ebp + (-0x1C4); /* 0x005DE584: lea ecx, [ebp - 0x1c4] */
    MEM32(ebp + (-0x1B0)) = 0; /* 0x005DE58A: mov dword ptr [ebp - 0x1b0], 0 */
    PUSH32(esp, eax); /* 0x005DE594: push eax */
    MEM32(ebp + (-0x1B0)) = 0xFu; /* 0x005DE595: mov dword ptr [ebp - 0x1b0], 0xf */
    MEM32(ebp + (-0x1B4)) = 0; /* 0x005DE59F: mov dword ptr [ebp - 0x1b4], 0 */
    MEM8(ebp + (-0x1C4)) = (uint8_t)(0); /* 0x005DE5A9: mov byte ptr [ebp - 0x1c4], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE5B0: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x34u); /* 0x005DE5B5: mov byte ptr [ebp - 4], 0x34 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE5B9: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x1AC), _xmm[0]); /* 0x005DE5C1: movdqu xmmword ptr [ebp - 0x1ac], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x36u); /* 0x005DE5C9: mov byte ptr [ebp - 4], 0x36 */
    /* cmp MEM32(ebp + (-0x108)), 0x10u */ /* 0x005DE5CD: cmp dword ptr [ebp - 0x108], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x108))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE5E1; /* 0x005DE5D4: jb 0x5de5e1 */
L_005DE5D6:
    PUSH32(esp, MEM32(ebp + (-0x11C))); /* 0x005DE5D6: push dword ptr [ebp - 0x11c] */
    RECOMP_ICALL(edi); /* 0x005DE5DC: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE5DE: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE5E1:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE5E1: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x108)) = 0xFu; /* 0x005DE5E4: mov dword ptr [ebp - 0x108], 0xf */
    eax = esi + 0xCB58; /* 0x005DE5EE: lea eax, [esi + 0xcb58] */
    MEM32(ebp + (-0x10C)) = 0; /* 0x005DE5F4: mov dword ptr [ebp - 0x10c], 0 */
    PUSH32(esp, 0x007F6268u); /* 0x005DE5FE: push 0x7f6268 */
    ecx = ebp + (-0x14C); /* 0x005DE603: lea ecx, [ebp - 0x14c] */
    MEM8(ebp + (-0x11C)) = (uint8_t)(0); /* 0x005DE609: mov byte ptr [ebp - 0x11c], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE610: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE618: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(1); /* 0x005DE61E: mov byte ptr [ebp - 0x358], 1 */
    RECOMP_CALL(sub_00409FA0); /* 0x005DE625: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x37u); /* 0x005DE62A: mov byte ptr [ebp - 4], 0x37 */
    eax = ebp + (-0x14C); /* 0x005DE62E: lea eax, [ebp - 0x14c] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE634: push -1 */
    PUSH32(esp, 0); /* 0x005DE636: push 0 */
    MEM32(ebp + (-0x18C)) = 0; /* 0x005DE638: mov dword ptr [ebp - 0x18c], 0 */
    ecx = ebp + (-0x19C); /* 0x005DE642: lea ecx, [ebp - 0x19c] */
    MEM32(ebp + (-0x188)) = 0; /* 0x005DE648: mov dword ptr [ebp - 0x188], 0 */
    PUSH32(esp, eax); /* 0x005DE652: push eax */
    MEM32(ebp + (-0x188)) = 0xFu; /* 0x005DE653: mov dword ptr [ebp - 0x188], 0xf */
    MEM32(ebp + (-0x18C)) = 0; /* 0x005DE65D: mov dword ptr [ebp - 0x18c], 0 */
    MEM8(ebp + (-0x19C)) = (uint8_t)(0); /* 0x005DE667: mov byte ptr [ebp - 0x19c], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE66E: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x38u); /* 0x005DE673: mov byte ptr [ebp - 4], 0x38 */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE677: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x184), _xmm[0]); /* 0x005DE67F: movdqu xmmword ptr [ebp - 0x184], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x3Au); /* 0x005DE687: mov byte ptr [ebp - 4], 0x3a */
    /* cmp MEM32(ebp + (-0x138)), 0x10u */ /* 0x005DE68B: cmp dword ptr [ebp - 0x138], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x138))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE69F; /* 0x005DE692: jb 0x5de69f */
L_005DE694:
    PUSH32(esp, MEM32(ebp + (-0x14C))); /* 0x005DE694: push dword ptr [ebp - 0x14c] */
    RECOMP_ICALL(edi); /* 0x005DE69A: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE69C: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE69F:
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x005DE69F: xorps xmm0, xmm0 */
    MEM32(ebp + (-0x138)) = 0xFu; /* 0x005DE6A2: mov dword ptr [ebp - 0x138], 0xf */
    eax = esi + 0xCB5C; /* 0x005DE6AC: lea eax, [esi + 0xcb5c] */
    MEM32(ebp + (-0x13C)) = 0; /* 0x005DE6B2: mov dword ptr [ebp - 0x13c], 0 */
    PUSH32(esp, 0x007F6278u); /* 0x005DE6BC: push 0x7f6278 */
    ecx = ebp + (-0x134); /* 0x005DE6C1: lea ecx, [ebp - 0x134] */
    MEM8(ebp + (-0x14C)) = (uint8_t)(0); /* 0x005DE6C7: mov byte ptr [ebp - 0x14c], 0 */
    MEM64(ebp + (-0x364)) = _xmm[0].u64[0]; /* 0x005DE6CE: movlpd qword ptr [ebp - 0x364], xmm0 */
    MEM32(ebp + (-0x35C)) = eax; /* 0x005DE6D6: mov dword ptr [ebp - 0x35c], eax */
    MEM8(ebp + (-0x358)) = (uint8_t)(1); /* 0x005DE6DC: mov byte ptr [ebp - 0x358], 1 */
    RECOMP_CALL(sub_00409FA0); /* 0x005DE6E3: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x3Bu); /* 0x005DE6E8: mov byte ptr [ebp - 4], 0x3b */
    eax = ebp + (-0x134); /* 0x005DE6EC: lea eax, [ebp - 0x134] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DE6F2: push -1 */
    PUSH32(esp, 0); /* 0x005DE6F4: push 0 */
    MEM32(ebp + (-0x164)) = 0; /* 0x005DE6F6: mov dword ptr [ebp - 0x164], 0 */
    ecx = ebp + (-0x174); /* 0x005DE700: lea ecx, [ebp - 0x174] */
    MEM32(ebp + (-0x160)) = 0; /* 0x005DE706: mov dword ptr [ebp - 0x160], 0 */
    PUSH32(esp, eax); /* 0x005DE710: push eax */
    MEM32(ebp + (-0x160)) = 0xFu; /* 0x005DE711: mov dword ptr [ebp - 0x160], 0xf */
    MEM32(ebp + (-0x164)) = 0; /* 0x005DE71B: mov dword ptr [ebp - 0x164], 0 */
    MEM8(ebp + (-0x174)) = (uint8_t)(0); /* 0x005DE725: mov byte ptr [ebp - 0x174], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DE72C: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x3Cu); /* 0x005DE731: mov byte ptr [ebp - 4], 0x3c */
    _xmm[0] = xmm_ld(ebp + (-0x364)); /* 0x005DE735: movdqu xmm0, xmmword ptr [ebp - 0x364] */
    xmm_st(ebp + (-0x15C), _xmm[0]); /* 0x005DE73D: movdqu xmmword ptr [ebp - 0x15c], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x3Eu); /* 0x005DE745: mov byte ptr [ebp - 4], 0x3e */
    /* cmp MEM32(ebp + (-0x120)), 0x10u */ /* 0x005DE749: cmp dword ptr [ebp - 0x120], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x120))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DE75D; /* 0x005DE750: jb 0x5de75d */
L_005DE752:
    PUSH32(esp, MEM32(ebp + (-0x134))); /* 0x005DE752: push dword ptr [ebp - 0x134] */
    RECOMP_ICALL(edi); /* 0x005DE758: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE75A: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE75D:
    MEM32(ebp + (-0x120)) = 0xFu; /* 0x005DE75D: mov dword ptr [ebp - 0x120], 0xf */
    MEM32(ebp + (-0x124)) = 0; /* 0x005DE767: mov dword ptr [ebp - 0x124], 0 */
    MEM8(ebp + (-0x134)) = (uint8_t)(0); /* 0x005DE771: mov byte ptr [ebp - 0x134], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x3Fu); /* 0x005DE778: mov byte ptr [ebp - 4], 0x3f */
    eax = ebp + (-0x14C); /* 0x005DE77C: lea eax, [ebp - 0x14c] */
    ecx = ebp + (-0x354); /* 0x005DE782: lea ecx, [ebp - 0x354] */
    PUSH32(esp, eax); /* 0x005DE788: push eax */
    PUSH32(esp, ecx); /* 0x005DE789: push ecx */
    ecx = ebp + (-0x370); /* 0x005DE78A: lea ecx, [ebp - 0x370] */
    RECOMP_CALL(sub_005E0270); /* 0x005DE790: call 0x5e0270 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x40u); /* 0x005DE795: mov byte ptr [ebp - 4], 0x40 */
    ecx = ebx; /* 0x005DE799: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005DE79B: push eax */
    RECOMP_CALL(sub_005E01C0); /* 0x005DE79C: call 0x5e01c0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x42u); /* 0x005DE7A1: mov byte ptr [ebp - 4], 0x42 */
    ecx = ebp + (-0x370); /* 0x005DE7A5: lea ecx, [ebp - 0x370] */
    eax = MEM32(ebp + (-0x370)); /* 0x005DE7AB: mov eax, dword ptr [ebp - 0x370] */
    PUSH32(esp, eax); /* 0x005DE7B1: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005DE7B2: push dword ptr [eax] */
    eax = ebp + (-0x368); /* 0x005DE7B4: lea eax, [ebp - 0x368] */
    PUSH32(esp, eax); /* 0x005DE7BA: push eax */
    RECOMP_CALL(sub_005E03E0); /* 0x005DE7BB: call 0x5e03e0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0x3Fu); /* 0x005DE7C0: mov byte ptr [ebp - 4], 0x3f */
    PUSH32(esp, MEM32(ebp + (-0x370))); /* 0x005DE7C4: push dword ptr [ebp - 0x370] */
    RECOMP_ICALL(edi); /* 0x005DE7CA: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE7CC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x005DE7CF: mov byte ptr [ebp - 4], 0xa */
    PUSH32(esp, 0x004296F0u); /* 0x005DE7D3: push 0x4296f0 */
    PUSH32(esp, 0xDu); /* 0x005DE7D8: push 0xd */
    PUSH32(esp, 0x28u); /* 0x005DE7DA: push 0x28 */
    eax = ebp + (-0x354); /* 0x005DE7DC: lea eax, [ebp - 0x354] */
    PUSH32(esp, eax); /* 0x005DE7E2: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x005DE7E3: call 0x77f628 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x005DE7E8: mov ecx, esi */
    RECOMP_CALL(sub_005DED00); /* 0x005DE7EA: call 0x5ded00 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DE7EF: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005DE7F6: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DE7F8: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DE7FB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DE802: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DE803: pop edi */
    esi = POP32_VAL(esp); /* 0x005DE804: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DE805: pop ebx */
    ecx = MEM32(ebp + (-0x14)); /* 0x005DE806: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005DE809: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005DE80B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005DE810: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DE812: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005DE813: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005DE820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DE820u);

L_005DE820:
    PUSH32(esp, ebp); /* 0x005DE820: push ebp */
    ebp = esp; /* 0x005DE821: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005DE823: push esi */
    esi = ecx; /* 0x005DE824: mov esi, ecx */
    RECOMP_CALL(sub_005DD880); /* 0x005DE826: call 0x5dd880 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x005DE82B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DE83B; /* 0x005DE82F: je 0x5de83b */
L_005DE831:
    PUSH32(esp, esi); /* 0x005DE831: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DE832: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DE838: add esp, 4 */
    _flag_k = FK_ADD;
L_005DE83B:
    eax = esi; /* 0x005DE83B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005DE83D: pop esi */
    ebp = POP32_VAL(esp); /* 0x005DE83E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DE83F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DE850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DE850u);

L_005DE850:
    MEM32(ecx + 0xCB6C) = 0; /* 0x005DE850: mov dword ptr [ecx + 0xcb6c], 0 */
    MEM32(ecx + 0xCB70) = 0; /* 0x005DE85A: mov dword ptr [ecx + 0xcb70], 0 */
    MEM32(ecx + 0xCB74) = 0; /* 0x005DE864: mov dword ptr [ecx + 0xcb74], 0 */
    MEM32(ecx + 0xCB8C) = 0; /* 0x005DE86E: mov dword ptr [ecx + 0xcb8c], 0 */
    MEM32(ecx + 0xCB90) = 0; /* 0x005DE878: mov dword ptr [ecx + 0xcb90], 0 */
    MEM32(ecx + 0xCB78) = 0; /* 0x005DE882: mov dword ptr [ecx + 0xcb78], 0 */
    MEM32(ecx + 0xCB7C) = 0; /* 0x005DE88C: mov dword ptr [ecx + 0xcb7c], 0 */
    MEM32(ecx + 0xCB80) = 0; /* 0x005DE896: mov dword ptr [ecx + 0xcb80], 0 */
    MEM32(ecx + 0xCB9C) = 0; /* 0x005DE8A0: mov dword ptr [ecx + 0xcb9c], 0 */
    MEM32(ecx + 0xCBA0) = 0; /* 0x005DE8AA: mov dword ptr [ecx + 0xcba0], 0 */
    MEM32(ecx + 0xCBA4) = 0; /* 0x005DE8B4: mov dword ptr [ecx + 0xcba4], 0 */
    MEM32(ecx + 0xCBA8) = 0; /* 0x005DE8BE: mov dword ptr [ecx + 0xcba8], 0 */
    MEM32(ecx + 0xCBAC) = 0; /* 0x005DE8C8: mov dword ptr [ecx + 0xcbac], 0 */
    MEM32(ecx + 0xCBB0) = 0; /* 0x005DE8D2: mov dword ptr [ecx + 0xcbb0], 0 */
    MEM32(ecx + 0xCB48) = 0; /* 0x005DE8DC: mov dword ptr [ecx + 0xcb48], 0 */
    MEM32(ecx + 0xCBB4) = 0x3F800000u; /* 0x005DE8E6: mov dword ptr [ecx + 0xcbb4], 0x3f800000 */
    MEM32(ecx + 0xCB44) = 0; /* 0x005DE8F0: mov dword ptr [ecx + 0xcb44], 0 */
    MEM32(ecx + 0xCBB8) = 0; /* 0x005DE8FA: mov dword ptr [ecx + 0xcbb8], 0 */
    MEM32(ecx + 0xCB38) = 0; /* 0x005DE904: mov dword ptr [ecx + 0xcb38], 0 */
    MEM16(ecx + 0xCB3C) = (uint16_t)(0); /* 0x005DE90E: mov word ptr [ecx + 0xcb3c], 0 */
    MEM16(ecx + 0xCB3F) = (uint16_t)(0); /* 0x005DE917: mov word ptr [ecx + 0xcb3f], 0 */
    MEM32(ecx + 0xCB34) = 0x3F333333u; /* 0x005DE920: mov dword ptr [ecx + 0xcb34], 0x3f333333 */
    MEM32(ecx + 0xCB84) = 0; /* 0x005DE92A: mov dword ptr [ecx + 0xcb84], 0 */
    MEM32(ecx + 0xCB88) = 0; /* 0x005DE934: mov dword ptr [ecx + 0xcb88], 0 */
    MEM32(ecx + 0xCB68) = 0; /* 0x005DE93E: mov dword ptr [ecx + 0xcb68], 0 */
    MEM32(ecx + 0xCB4C) = 0; /* 0x005DE948: mov dword ptr [ecx + 0xcb4c], 0 */
    MEM32(ecx + 0xCB50) = 0; /* 0x005DE952: mov dword ptr [ecx + 0xcb50], 0 */
    MEM32(ecx + 0xCB54) = 0; /* 0x005DE95C: mov dword ptr [ecx + 0xcb54], 0 */
    MEM32(ecx + 0xCB58) = 0; /* 0x005DE966: mov dword ptr [ecx + 0xcb58], 0 */
    MEM32(ecx + 0xCB60) = 0; /* 0x005DE970: mov dword ptr [ecx + 0xcb60], 0 */
    MEM32(ecx + 0xCB64) = 0; /* 0x005DE97A: mov dword ptr [ecx + 0xcb64], 0 */
    MEM32(ecx + 0xCB5C) = 0; /* 0x005DE984: mov dword ptr [ecx + 0xcb5c], 0 */
    MEM8(ecx + 0xCB3E) = (uint8_t)(0); /* 0x005DE98E: mov byte ptr [ecx + 0xcb3e], 0 */
    MEM32(ecx + 0xCB94) = 0; /* 0x005DE995: mov dword ptr [ecx + 0xcb94], 0 */
    MEM32(ecx + 0xCB98) = 0; /* 0x005DE99F: mov dword ptr [ecx + 0xcb98], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DE9A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DE9B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DE9B0u);

L_005DE9B0:
    PUSH32(esp, ebp); /* 0x005DE9B0: push ebp */
    ebp = esp; /* 0x005DE9B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005DE9B3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x005DE9B6: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005DE9B9: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005DE9BE: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = eax; /* 0x005DE9C0: mov dword ptr [esp + 0x18], eax */
    ecx = MEM32(ebp + 0x8); /* 0x005DE9C4: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005DE9C7: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x005DE9C9: push esi */
    MEM32(esp + 0x4) = 0x00FD16D8u; /* 0x005DE9CA: mov dword ptr [esp + 4], 0xfd16d8 */
    MEM32(esp + 0x8) = 0x01100001u; /* 0x005DE9D2: mov dword ptr [esp + 8], 0x1100001 */
    esi = MEM32(ecx); /* 0x005DE9DA: mov esi, dword ptr [ecx] */
    edx = MEM32(ecx + 0x4); /* 0x005DE9DC: mov edx, dword ptr [ecx + 4] */
    MEM32(esp + 0xC) = 0x133D465Au; /* 0x005DE9DF: mov dword ptr [esp + 0xc], 0x133d465a */
    MEM32(esp + 0x10) = 0x01100001u; /* 0x005DE9E7: mov dword ptr [esp + 0x10], 0x1100001 */
    MEM32(esp + 0x14) = 0x047FC03Au; /* 0x005DE9EF: mov dword ptr [esp + 0x14], 0x47fc03a */
    MEM32(esp + 0x18) = 0x01100001u; /* 0x005DE9F7: mov dword ptr [esp + 0x18], 0x1100001 */
    /* nop */ /* 0x005DE9FF: nop  */
L_005DEA00:
    ecx = (uint32_t)LO8(eax); /* 0x005DEA00: movzx ecx, al */
    /* cmp MEM32(esp + ecx * 8 + 0x4), esi */ /* 0x005DEA03: cmp dword ptr [esp + ecx*8 + 4], esi */
    _flag_a = (uint32_t)(MEM32(esp + ecx * 8 + 0x4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DEA0F; /* 0x005DEA07: jne 0x5dea0f */
L_005DEA09:
    /* cmp MEM32(esp + ecx * 8 + 0x8), edx */ /* 0x005DEA09: cmp dword ptr [esp + ecx*8 + 8], edx */
    _flag_a = (uint32_t)(MEM32(esp + ecx * 8 + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DEA29; /* 0x005DEA0D: je 0x5dea29 */
L_005DEA0F:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x005DEA0F: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    /* cmp LO8(eax), 3 */ /* 0x005DEA11: cmp al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005DEA00; /* 0x005DEA13: jb 0x5dea00 */
L_005DEA15:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005DEA15: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x005DEA17: pop esi */
    ecx = MEM32(esp + 0x18); /* 0x005DEA18: mov ecx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005DEA1C: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005DEA1E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005DEA23: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DEA25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DEA26: ret 4 */
L_005DEA29:
    ecx = MEM32(esp + 0x1C); /* 0x005DEA29: mov ecx, dword ptr [esp + 0x1c] */
    SET_LO8(eax, 1); /* 0x005DEA2D: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x005DEA2F: pop esi */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005DEA30: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005DEA32: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005DEA37: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DEA39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DEA3A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DEA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DEA40u);

L_005DEA40:
    PUSH32(esp, ebp); /* 0x005DEA40: push ebp */
    ebp = esp; /* 0x005DEA41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DEA43: push -1 */
    PUSH32(esp, 0x007AFE86u); /* 0x005DEA45: push 0x7afe86 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DEA4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DEA50: push eax */
    PUSH32(esp, ecx); /* 0x005DEA51: push ecx */
    PUSH32(esp, esi); /* 0x005DEA52: push esi */
    PUSH32(esp, edi); /* 0x005DEA53: push edi */
    eax = MEM32(0x855000); /* 0x005DEA54: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DEA59: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DEA5B: push eax */
    eax = ebp + (-0xC); /* 0x005DEA5C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DEA5F: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005DEA65: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x005DEA67: mov dword ptr [ebp - 0x10], edi */
    esi = MEM32(ebp + 0x8); /* 0x005DEA6A: mov esi, dword ptr [ebp + 8] */
    ecx = edi + 0x8; /* 0x005DEA6D: lea ecx, [edi + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DEA70: push -1 */
    PUSH32(esp, 0); /* 0x005DEA72: push 0 */
    eax = MEM32(esi); /* 0x005DEA74: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x005DEA76: mov dword ptr [edi], eax */
    eax = MEM32(esi + 0x4); /* 0x005DEA78: mov eax, dword ptr [esi + 4] */
    MEM32(edi + 0x4) = eax; /* 0x005DEA7B: mov dword ptr [edi + 4], eax */
    eax = esi + 0x8; /* 0x005DEA7E: lea eax, [esi + 8] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005DEA81: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005DEA88: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x005DEA8F: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x005DEA90: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DEA93: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DEA98: mov dword ptr [ebp - 4], 0 */
    ecx = edi + 0x20; /* 0x005DEA9F: lea ecx, [edi + 0x20] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DEAA2: push -1 */
    PUSH32(esp, 0); /* 0x005DEAA4: push 0 */
    eax = esi + 0x20; /* 0x005DEAA6: lea eax, [esi + 0x20] */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005DEAA9: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005DEAB0: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x005DEAB7: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x005DEAB8: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DEABB: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005DEAC0: mov byte ptr [ebp - 4], 1 */
    eax = (uint32_t)MEM8(esi + 0x38); /* 0x005DEAC4: movzx eax, byte ptr [esi + 0x38] */
    MEM8(edi + 0x38) = (uint8_t)(LO8(eax)); /* 0x005DEAC8: mov byte ptr [edi + 0x38], al */
    eax = MEM32(esi + 0x3C); /* 0x005DEACB: mov eax, dword ptr [esi + 0x3c] */
    MEM32(edi + 0x3C) = eax; /* 0x005DEACE: mov dword ptr [edi + 0x3c], eax */
    eax = (uint32_t)MEM8(esi + 0x40); /* 0x005DEAD1: movzx eax, byte ptr [esi + 0x40] */
    MEM8(edi + 0x40) = (uint8_t)(LO8(eax)); /* 0x005DEAD5: mov byte ptr [edi + 0x40], al */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DEAD8: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x005DEADF: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005DEAE1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DEAE4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DEAEB: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DEAEC: pop edi */
    esi = POP32_VAL(esp); /* 0x005DEAED: pop esi */
    esp = ebp; /* 0x005DEAEE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DEAF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DEAF1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DEB00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DEB00u);

L_005DEB00:
    PUSH32(esp, ebp); /* 0x005DEB00: push ebp */
    ebp = esp; /* 0x005DEB01: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005DEB03: push ecx */
    PUSH32(esp, ebx); /* 0x005DEB04: push ebx */
    PUSH32(esp, esi); /* 0x005DEB05: push esi */
    esi = ecx; /* 0x005DEB06: mov esi, ecx */
    PUSH32(esp, edi); /* 0x005DEB08: push edi */
    /* cmp MEM8(esi + 0xCB30), 0 */ /* 0x005DEB09: cmp byte ptr [esi + 0xcb30], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xCB30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DEB39; /* 0x005DEB10: jne 0x5deb39 */
L_005DEB12:
    ecx = MEM32(esi + 0xCB2C); /* 0x005DEB12: mov ecx, dword ptr [esi + 0xcb2c] */
    /* test ecx, ecx */ /* 0x005DEB18: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DEBBA; /* 0x005DEB1A: je 0x5debba */
L_005DEB20:
    /* cmp MEM32(esi + 0xCB28), 0 */ /* 0x005DEB20: cmp dword ptr [esi + 0xcb28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DEBBA; /* 0x005DEB27: je 0x5debba */
L_005DEB2D:
    eax = MEM32(ecx); /* 0x005DEB2D: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x005DEB2F: mov eax, dword ptr [eax] */
    RECOMP_ICALL(eax); /* 0x005DEB31: call eax */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0xCB30) = (uint8_t)(LO8(eax)); /* 0x005DEB33: mov byte ptr [esi + 0xcb30], al */
L_005DEB39:
    /* cmp MEM8(esi + 0xCB31), 0 */ /* 0x005DEB39: cmp byte ptr [esi + 0xcb31], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xCB31)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DEBB3; /* 0x005DEB40: je 0x5debb3 */
L_005DEB42:
    ebx = MEM32(0x91FFB8); /* 0x005DEB42: mov ebx, dword ptr [0x91ffb8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DEB48: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x005DEB4A: mov dword ptr [ebp - 4], ecx */
    eax = 0x78787879u; /* 0x005DEB4D: mov eax, 0x78787879 */
    ecx = MEM32(0x91FFBC); /* 0x005DEB52: mov ecx, dword ptr [0x91ffbc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x005DEB58: sub ecx, ebx */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005DEB5A: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005DEB5C: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x005DEB5F: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DEB61: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DEB61: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DEB64: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005DEBA5; /* 0x005DEB66: je 0x5deba5 */
L_005DEB68:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005DEB68: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ebx; /* 0x005DEB6A: lea ebx, [ebx] */
L_005DEB70:
    eax = edi + ebx; /* 0x005DEB70: lea eax, [edi + ebx] */
    ecx = esi; /* 0x005DEB73: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005DEB75: push eax */
    RECOMP_CALL(sub_005DF510); /* 0x005DEB76: call 0x5df510 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x91FFBC); /* 0x005DEB7B: mov ecx, dword ptr [0x91ffbc] */
    edi = edi + 0x44; /* 0x005DEB81: lea edi, [edi + 0x44] */
    ebx = MEM32(0x91FFB8); /* 0x005DEB84: mov ebx, dword ptr [0x91ffb8] */
    eax = 0x78787879u; /* 0x005DEB8A: mov eax, 0x78787879 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x005DEB8F: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x005DEB92: sub ecx, ebx */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005DEB94: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005DEB96: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x005DEB99: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DEB9B: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DEB9B: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DEB9E: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x005DEBA0: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005DEB70; /* 0x005DEBA3: jb 0x5deb70 */
L_005DEBA5:
    ecx = esi; /* 0x005DEBA5: mov ecx, esi */
    RECOMP_CALL(sub_005DF9A0); /* 0x005DEBA7: call 0x5df9a0 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x005DEBAC: mov ecx, esi */
    RECOMP_CALL(sub_005DF020); /* 0x005DEBAE: call 0x5df020 */
    RECOMP_FLAGS_IN();
L_005DEBB3:
    edi = POP32_VAL(esp); /* 0x005DEBB3: pop edi */
    esi = POP32_VAL(esp); /* 0x005DEBB4: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DEBB5: pop ebx */
    esp = ebp; /* 0x005DEBB6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DEBB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DEBB9: ret  */
L_005DEBBA:
    edi = POP32_VAL(esp); /* 0x005DEBBA: pop edi */
    MEM8(esi + 0xCB30) = (uint8_t)(1); /* 0x005DEBBB: mov byte ptr [esi + 0xcb30], 1 */
    esi = POP32_VAL(esp); /* 0x005DEBC2: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DEBC3: pop ebx */
    esp = ebp; /* 0x005DEBC4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DEBC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DEBC7: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DEBD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DEBD0u);

L_005DEBD0:
    PUSH32(esp, ebp); /* 0x005DEBD0: push ebp */
    ebp = esp; /* 0x005DEBD1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005DEBD3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DEBD6: push -1 */
    PUSH32(esp, 0x007AFEC0u); /* 0x005DEBD8: push 0x7afec0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DEBDD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DEBE3: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005DEBE4: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005DEBE7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005DEBEC: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x20) = eax; /* 0x005DEBEE: mov dword ptr [esp + 0x20], eax */
    PUSH32(esp, ebx); /* 0x005DEBF2: push ebx */
    PUSH32(esp, esi); /* 0x005DEBF3: push esi */
    PUSH32(esp, edi); /* 0x005DEBF4: push edi */
    eax = MEM32(0x855000); /* 0x005DEBF5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005DEBFA: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DEBFC: push eax */
    eax = esp + 0x38; /* 0x005DEBFD: lea eax, [esp + 0x38] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DEC01: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005DEC07: mov ebx, ecx */
    eax = MEM32(ebp + 0x8); /* 0x005DEC09: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005DEC0C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x005DEC0F: mov ecx, esp */
    MEM32(esp + 0x2C) = esp; /* 0x005DEC11: mov dword ptr [esp + 0x2c], esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DEC15: push -1 */
    PUSH32(esp, 0); /* 0x005DEC17: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005DEC19: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005DEC20: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x005DEC27: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x005DEC28: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DEC2B: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x58) = 0; /* 0x005DEC30: mov dword ptr [esp + 0x58], 0 */
    MEM32(esp + 0x58) = 0xFFFFFFFFu; /* 0x005DEC38: mov dword ptr [esp + 0x58], 0xffffffff */
    ecx = esp + 0x30; /* 0x005DEC40: lea ecx, [esp + 0x30] */
    RECOMP_CALL(sub_0066A090); /* 0x005DEC44: call 0x66a090 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x005DEC49: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x40) = 1; /* 0x005DEC4C: mov dword ptr [esp + 0x40], 1 */
    eax = esp + 0x18; /* 0x005DEC54: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x005DEC58: push eax */
    ecx = ebx + 0xCBC0; /* 0x005DEC59: lea ecx, [ebx + 0xcbc0] */
    RECOMP_CALL(sub_005E04A0); /* 0x005DEC5F: call 0x5e04a0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005DEC64: mov esi, eax */
    /* cmp esi, MEM32(ebx + 0xCBC0) */ /* 0x005DEC66: cmp esi, dword ptr [ebx + 0xcbc0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xCBC0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DEC86; /* 0x005DEC6C: je 0x5dec86 */
L_005DEC6E:
    eax = esi + 0x10; /* 0x005DEC6E: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005DEC71: push eax */
    eax = esp + 0x1C; /* 0x005DEC72: lea eax, [esp + 0x1c] */
    PUSH32(esp, eax); /* 0x005DEC76: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x005DEC77: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DEC7C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DEC86; /* 0x005DEC7E: jne 0x5dec86 */
L_005DEC80:
    MEM32(esp + 0x14) = esi; /* 0x005DEC80: mov dword ptr [esp + 0x14], esi */
    goto L_005DEC90; /* 0x005DEC84: jmp 0x5dec90 */
L_005DEC86:
    eax = MEM32(ebx + 0xCBC0); /* 0x005DEC86: mov eax, dword ptr [ebx + 0xcbc0] */
    MEM32(esp + 0x14) = eax; /* 0x005DEC8C: mov dword ptr [esp + 0x14], eax */
L_005DEC90:
    eax = esp + 0x14; /* 0x005DEC90: lea eax, [esp + 0x14] */
    eax = MEM32(eax); /* 0x005DEC94: mov eax, dword ptr [eax] */
    /* cmp eax, MEM32(ebx + 0xCBC0) */ /* 0x005DEC96: cmp eax, dword ptr [ebx + 0xcbc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xCBC0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DECAD; /* 0x005DEC9C: je 0x5decad */
L_005DEC9E:
    ecx = MEM32(eax + 0x30); /* 0x005DEC9E: mov ecx, dword ptr [eax + 0x30] */
    eax = MEM32(ebp + 0xC); /* 0x005DECA1: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x005DECA4: mov dword ptr [ecx], eax */
    MEM8(ebx + 0xCBBE) = (uint8_t)(1); /* 0x005DECA6: mov byte ptr [ebx + 0xcbbe], 1 */
L_005DECAD:
    MEM32(esp + 0x40) = 0xFFFFFFFFu; /* 0x005DECAD: mov dword ptr [esp + 0x40], 0xffffffff */
    /* cmp MEM32(esp + 0x2C), 0x10u */ /* 0x005DECB5: cmp dword ptr [esp + 0x2c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x2C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DECC9; /* 0x005DECBA: jb 0x5decc9 */
L_005DECBC:
    PUSH32(esp, MEM32(esp + 0x18)); /* 0x005DECBC: push dword ptr [esp + 0x18] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DECC0: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DECC6: add esp, 4 */
    _flag_k = FK_ADD;
L_005DECC9:
    MEM32(esp + 0x2C) = 0xFu; /* 0x005DECC9: mov dword ptr [esp + 0x2c], 0xf */
    MEM32(esp + 0x28) = 0; /* 0x005DECD1: mov dword ptr [esp + 0x28], 0 */
    MEM8(esp + 0x18) = (uint8_t)(0); /* 0x005DECD9: mov byte ptr [esp + 0x18], 0 */
    ecx = MEM32(esp + 0x38); /* 0x005DECDE: mov ecx, dword ptr [esp + 0x38] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DECE2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DECE9: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DECEA: pop edi */
    esi = POP32_VAL(esp); /* 0x005DECEB: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DECEC: pop ebx */
    ecx = MEM32(esp + 0x20); /* 0x005DECED: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005DECF1: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005DECF3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005DECF8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DECFA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DECFB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005DED00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DED00u);

L_005DED00:
    PUSH32(esp, ebp); /* 0x005DED00: push ebp */
    ebp = esp; /* 0x005DED01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005DED03: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DED06: push -1 */
    PUSH32(esp, 0x007AFF10u); /* 0x005DED08: push 0x7aff10 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DED0D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DED13: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x005DED14: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005DED17: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005DED1C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = eax; /* 0x005DED1E: mov dword ptr [esp + 0x38], eax */
    PUSH32(esp, ebx); /* 0x005DED22: push ebx */
    PUSH32(esp, esi); /* 0x005DED23: push esi */
    PUSH32(esp, edi); /* 0x005DED24: push edi */
    eax = MEM32(0x855000); /* 0x005DED25: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005DED2A: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DED2C: push eax */
    eax = esp + 0x50; /* 0x005DED2D: lea eax, [esp + 0x50] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DED31: mov dword ptr fs:[0], eax */
    eax = ecx; /* 0x005DED37: mov eax, ecx */
    MEM32(esp + 0x18) = eax; /* 0x005DED39: mov dword ptr [esp + 0x18], eax */
    /* cmp MEM8(eax + 0xCBBD), 0 */ /* 0x005DED3D: cmp byte ptr [eax + 0xcbbd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xCBBD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DEEE9; /* 0x005DED44: jne 0x5deee9 */
L_005DED4A:
    esi = MEM32(eax + 0xCBC0); /* 0x005DED4A: mov esi, dword ptr [eax + 0xcbc0] */
    eax = MEM32(esi); /* 0x005DED50: mov eax, dword ptr [esi] */
    MEM32(esp + 0x10) = eax; /* 0x005DED52: mov dword ptr [esp + 0x10], eax */
    /* cmp eax, esi */ /* 0x005DED56: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DEEE9; /* 0x005DED58: je 0x5deee9 */
L_005DED5E:
    ebx = MEM32(0x7CC694); /* 0x005DED5E: mov ebx, dword ptr [0x7cc694] */
    goto L_005DED70; /* 0x005DED64: jmp 0x5ded70 */
L_005DED70:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DED70: push -1 */
    edi = eax + 0x10; /* 0x005DED72: lea edi, [eax + 0x10] */
    MEM32(esp + 0x30) = 0; /* 0x005DED75: mov dword ptr [esp + 0x30], 0 */
    PUSH32(esp, 0); /* 0x005DED7D: push 0 */
    MEM32(esp + 0x38) = 0; /* 0x005DED7F: mov dword ptr [esp + 0x38], 0 */
    ecx = esp + 0x24; /* 0x005DED87: lea ecx, [esp + 0x24] */
    PUSH32(esp, edi); /* 0x005DED8B: push edi */
    MEM32(esp + 0x3C) = 0xFu; /* 0x005DED8C: mov dword ptr [esp + 0x3c], 0xf */
    MEM32(esp + 0x38) = 0; /* 0x005DED94: mov dword ptr [esp + 0x38], 0 */
    MEM8(esp + 0x28) = (uint8_t)(0); /* 0x005DED9C: mov byte ptr [esp + 0x28], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DEDA1: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x58) = 0; /* 0x005DEDA6: mov dword ptr [esp + 0x58], 0 */
    _xmm[0] = xmm_ld(edi + 0x18); /* 0x005DEDAE: movdqu xmm0, xmmword ptr [edi + 0x18] */
    xmm_st(esp + 0x34, _xmm[0]); /* 0x005DEDB3: movdqu xmmword ptr [esp + 0x34], xmm0 */
    MEM32(esp + 0x58) = 1; /* 0x005DEDB9: mov dword ptr [esp + 0x58], 1 */
    eax = MEM32(esp + 0x34); /* 0x005DEDC1: mov eax, dword ptr [esp + 0x34] */
    _flag_a = (uint32_t)((eax | MEM32(esp + 0x38))); _flag_b = (uint32_t)((eax | MEM32(esp + 0x38)));
    eax = eax | MEM32(esp + 0x38); /* 0x005DEDC5: or eax, dword ptr [esp + 0x38] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DEE12; /* 0x005DEDC9: je 0x5dee12 */
L_005DEDCB:
    MEM32(esp + 0x58) = 0xFFFFFFFFu; /* 0x005DEDCB: mov dword ptr [esp + 0x58], 0xffffffff */
    /* cmp MEM32(esp + 0x30), 0x10u */ /* 0x005DEDD3: cmp dword ptr [esp + 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DEDE3; /* 0x005DEDD8: jb 0x5dede3 */
L_005DEDDA:
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x005DEDDA: push dword ptr [esp + 0x1c] */
    RECOMP_ICALL(ebx); /* 0x005DEDDE: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DEDE0: add esp, 4 */
    _flag_k = FK_ADD;
L_005DEDE3:
    ecx = esp + 0x10; /* 0x005DEDE3: lea ecx, [esp + 0x10] */
    MEM32(esp + 0x30) = 0xFu; /* 0x005DEDE7: mov dword ptr [esp + 0x30], 0xf */
    MEM32(esp + 0x2C) = 0; /* 0x005DEDEF: mov dword ptr [esp + 0x2c], 0 */
    MEM8(esp + 0x1C) = (uint8_t)(0); /* 0x005DEDF7: mov byte ptr [esp + 0x1c], 0 */
    RECOMP_CALL(sub_0040B880); /* 0x005DEDFC: call 0x40b880 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x10); /* 0x005DEE01: mov eax, dword ptr [esp + 0x10] */
    /* cmp eax, esi */ /* 0x005DEE05: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DED70; /* 0x005DEE07: jne 0x5ded70 */
L_005DEE0D:
    goto L_005DEEE9; /* 0x005DEE0D: jmp 0x5deee9 */
L_005DEE12:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005DEE12: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005DEE18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DEE20; /* 0x005DEE1A: jne 0x5dee20 */
L_005DEE1C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DEE1C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DEE3A; /* 0x005DEE1E: jmp 0x5dee3a */
L_005DEE20:
    ecx = MEM32(0x927AFC); /* 0x005DEE20: mov ecx, dword ptr [0x927afc] */
    /* test ecx, ecx */ /* 0x005DEE26: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DEE3A; /* 0x005DEE28: jne 0x5dee3a */
L_005DEE2A:
    ecx = 0x00927AE8u; /* 0x005DEE2A: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005DEE2F: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AFC); /* 0x005DEE34: mov ecx, dword ptr [0x927afc] */
L_005DEE3A:
    /* cmp MEM32(esp + 0x30), 0x10u */ /* 0x005DEE3A: cmp dword ptr [esp + 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = esp + 0x1C; /* 0x005DEE3F: lea edx, [esp + 0x1c] */
    eax = MEM32(ecx); /* 0x005DEE43: mov eax, dword ptr [ecx] */
    if (CMP_AE(_flag_a, _flag_b)) { edx = MEM32(esp + 0x1C); } /* 0x005DEE45: cmovae edx, dword ptr [esp + 0x1c] */
    PUSH32(esp, 1); /* 0x005DEE4A: push 1 */
    PUSH32(esp, 2); /* 0x005DEE4C: push 2 */
    eax = MEM32(eax + 0x58); /* 0x005DEE4E: mov eax, dword ptr [eax + 0x58] */
    PUSH32(esp, edx); /* 0x005DEE51: push edx */
    RECOMP_ICALL(eax); /* 0x005DEE52: call eax */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005DEE54: mov ecx, eax */
    MEM32(esp + 0x14) = edx; /* 0x005DEE56: mov dword ptr [esp + 0x14], edx */
    MEM32(esp + 0x10) = ecx; /* 0x005DEE5A: mov dword ptr [esp + 0x10], ecx */
    MEM32(esp + 0x58) = 0xFFFFFFFFu; /* 0x005DEE5E: mov dword ptr [esp + 0x58], 0xffffffff */
    /* cmp MEM32(esp + 0x30), 0x10u */ /* 0x005DEE66: cmp dword ptr [esp + 0x30], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DEE7E; /* 0x005DEE6B: jb 0x5dee7e */
L_005DEE6D:
    PUSH32(esp, MEM32(esp + 0x1C)); /* 0x005DEE6D: push dword ptr [esp + 0x1c] */
    RECOMP_ICALL(ebx); /* 0x005DEE71: call ebx */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x14); /* 0x005DEE73: mov ecx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DEE77: add esp, 4 */
    _flag_k = FK_ADD;
    edx = MEM32(esp + 0x14); /* 0x005DEE7A: mov edx, dword ptr [esp + 0x14] */
L_005DEE7E:
    eax = ecx; /* 0x005DEE7E: mov eax, ecx */
    MEM32(esp + 0x30) = 0xFu; /* 0x005DEE80: mov dword ptr [esp + 0x30], 0xf */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x005DEE88: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x2C) = 0; /* 0x005DEE8A: mov dword ptr [esp + 0x2c], 0 */
    MEM8(esp + 0x1C) = (uint8_t)(0); /* 0x005DEE92: mov byte ptr [esp + 0x1c], 0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DEEE9; /* 0x005DEE97: je 0x5deee9 */
L_005DEE99:
    edi = MEM32(esp + 0x18); /* 0x005DEE99: mov edi, dword ptr [esp + 0x18] */
    eax = MEM32(edi + 0xCB10); /* 0x005DEE9D: mov eax, dword ptr [edi + 0xcb10] */
    esi = edi + 0xCB00; /* 0x005DEEA3: lea esi, [edi + 0xcb00] */
    ebx = MEM32(esi + 0x14); /* 0x005DEEA9: mov ebx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x005DEEAC: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DEEC6; /* 0x005DEEAE: je 0x5deec6 */
L_005DEEB0:
    PUSH32(esp, ebx); /* 0x005DEEB0: push ebx */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x005DEEB1: push dword ptr [esi + 0x10] */
    PUSH32(esp, esi); /* 0x005DEEB4: push esi */
    RECOMP_ICALL(MEM32(0x7CC990)); /* 0x005DEEB5: call dword ptr [0x7cc990] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x1C); /* 0x005DEEBB: mov ecx, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005DEEBF: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = MEM32(esp + 0x14); /* 0x005DEEC2: mov edx, dword ptr [esp + 0x14] */
L_005DEEC6:
    PUSH32(esp, edx); /* 0x005DEEC6: push edx */
    PUSH32(esp, ecx); /* 0x005DEEC7: push ecx */
    PUSH32(esp, esi); /* 0x005DEEC8: push esi */
    MEM32(esi + 0x10) = ecx; /* 0x005DEEC9: mov dword ptr [esi + 0x10], ecx */
    MEM32(esi + 0x14) = edx; /* 0x005DEECC: mov dword ptr [esi + 0x14], edx */
    MEM32(esi + 0x18) = edi; /* 0x005DEECF: mov dword ptr [esi + 0x18], edi */
    MEM32(esi + 0x1C) = 0x005DEF10u; /* 0x005DEED2: mov dword ptr [esi + 0x1c], 0x5def10 */
    RECOMP_ICALL(MEM32(0x7CC994)); /* 0x005DEED9: call dword ptr [0x7cc994] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005DEEDF: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(edi + 0xCBBD) = (uint8_t)(1); /* 0x005DEEE2: mov byte ptr [edi + 0xcbbd], 1 */
L_005DEEE9:
    ecx = MEM32(esp + 0x50); /* 0x005DEEE9: mov ecx, dword ptr [esp + 0x50] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DEEED: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DEEF4: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DEEF5: pop edi */
    esi = POP32_VAL(esp); /* 0x005DEEF6: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DEEF7: pop ebx */
    ecx = MEM32(esp + 0x38); /* 0x005DEEF8: mov ecx, dword ptr [esp + 0x38] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005DEEFC: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005DEEFE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005DEF03: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DEF05: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DEF06: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DEF10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DEF10u);

L_005DEF10:
    PUSH32(esp, ebp); /* 0x005DEF10: push ebp */
    ebp = esp; /* 0x005DEF11: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005DEF13: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DEF16: push -1 */
    PUSH32(esp, 0x00794668u); /* 0x005DEF18: push 0x794668 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DEF1D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DEF23: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x005DEF24: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005DEF27: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005DEF2C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x1C) = eax; /* 0x005DEF2E: mov dword ptr [esp + 0x1c], eax */
    PUSH32(esp, esi); /* 0x005DEF32: push esi */
    PUSH32(esp, edi); /* 0x005DEF33: push edi */
    eax = MEM32(0x855000); /* 0x005DEF34: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005DEF39: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DEF3B: push eax */
    eax = esp + 0x30; /* 0x005DEF3C: lea eax, [esp + 0x30] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DEF40: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005DEF46: mov esi, ecx */
    edi = MEM32(ebp + 0x8); /* 0x005DEF48: mov edi, dword ptr [ebp + 8] */
    MEM8(esi + 0xCBBD) = (uint8_t)(0); /* 0x005DEF4B: mov byte ptr [esi + 0xcbbd], 0 */
    /* cmp MEM8(edi + 0x8), 0 */ /* 0x005DEF52: cmp byte ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DEFFC; /* 0x005DEF56: je 0x5deffc */
L_005DEF5C:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x005DEF5C: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DEFFC; /* 0x005DEF60: jne 0x5deffc */
L_005DEF66:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005DEF66: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005DEF6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DEF74; /* 0x005DEF6E: jne 0x5def74 */
L_005DEF70:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DEF70: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DEF8E; /* 0x005DEF72: jmp 0x5def8e */
L_005DEF74:
    ecx = MEM32(0x927AFC); /* 0x005DEF74: mov ecx, dword ptr [0x927afc] */
    /* test ecx, ecx */ /* 0x005DEF7A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DEF8E; /* 0x005DEF7C: jne 0x5def8e */
L_005DEF7E:
    ecx = 0x00927AE8u; /* 0x005DEF7E: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005DEF83: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AFC); /* 0x005DEF88: mov ecx, dword ptr [0x927afc] */
L_005DEF8E:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x005DEF8E: push dword ptr [edi + 4] */
    eax = MEM32(ecx); /* 0x005DEF91: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(edi)); /* 0x005DEF93: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x005DEF95: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005DEF98: push eax */
    ecx = esp + 0x14; /* 0x005DEF99: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_00409FA0); /* 0x005DEF9D: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0; /* 0x005DEFA2: mov dword ptr [esp + 0x38], 0 */
    eax = esp + 0x10; /* 0x005DEFAA: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x005DEFAE: push eax */
    ecx = esi + 0xCBC0; /* 0x005DEFAF: lea ecx, [esi + 0xcbc0] */
    RECOMP_CALL(sub_005E0210); /* 0x005DEFB5: call 0x5e0210 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x005DEFBA: mov ecx, dword ptr [edi] */
    MEM32(eax) = ecx; /* 0x005DEFBC: mov dword ptr [eax], ecx */
    ecx = MEM32(edi + 0x4); /* 0x005DEFBE: mov ecx, dword ptr [edi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x005DEFC1: mov dword ptr [eax + 4], ecx */
    MEM32(esp + 0x38) = 0xFFFFFFFFu; /* 0x005DEFC4: mov dword ptr [esp + 0x38], 0xffffffff */
    /* cmp MEM32(esp + 0x24), 0x10u */ /* 0x005DEFCC: cmp dword ptr [esp + 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DEFE0; /* 0x005DEFD1: jb 0x5defe0 */
L_005DEFD3:
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x005DEFD3: push dword ptr [esp + 0x10] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DEFD7: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DEFDD: add esp, 4 */
    _flag_k = FK_ADD;
L_005DEFE0:
    ecx = esi; /* 0x005DEFE0: mov ecx, esi */
    MEM32(esp + 0x24) = 0xFu; /* 0x005DEFE2: mov dword ptr [esp + 0x24], 0xf */
    MEM32(esp + 0x20) = 0; /* 0x005DEFEA: mov dword ptr [esp + 0x20], 0 */
    MEM8(esp + 0x10) = (uint8_t)(0); /* 0x005DEFF2: mov byte ptr [esp + 0x10], 0 */
    RECOMP_CALL(sub_005DED00); /* 0x005DEFF7: call 0x5ded00 */
    RECOMP_FLAGS_IN();
L_005DEFFC:
    ecx = MEM32(esp + 0x30); /* 0x005DEFFC: mov ecx, dword ptr [esp + 0x30] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DF000: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DF007: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DF008: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF009: pop esi */
    ecx = MEM32(esp + 0x1C); /* 0x005DF00A: mov ecx, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005DF00E: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005DF010: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005DF015: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DF017: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DF018: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005DF020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF020u);

L_005DF020:
    PUSH32(esp, ebp); /* 0x005DF020: push ebp */
    ebp = esp; /* 0x005DF021: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DF023: push -1 */
    PUSH32(esp, 0x007AFF60u); /* 0x005DF025: push 0x7aff60 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DF02A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DF030: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x005DF031: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005DF034: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005DF039: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005DF03B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005DF03E: push ebx */
    PUSH32(esp, esi); /* 0x005DF03F: push esi */
    PUSH32(esp, edi); /* 0x005DF040: push edi */
    PUSH32(esp, eax); /* 0x005DF041: push eax */
    eax = ebp + (-0xC); /* 0x005DF042: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DF045: mov dword ptr fs:[0], eax */
    eax = ecx; /* 0x005DF04B: mov eax, ecx */
    MEM32(ebp + (-0x3C)) = eax; /* 0x005DF04D: mov dword ptr [ebp - 0x3c], eax */
    /* cmp MEM8(eax + 0xCBBE), 0 */ /* 0x005DF050: cmp byte ptr [eax + 0xcbbe], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xCBBE)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DF1A2; /* 0x005DF057: je 0x5df1a2 */
L_005DF05D:
    MEM8(eax + 0xCBBE) = (uint8_t)(0); /* 0x005DF05D: mov byte ptr [eax + 0xcbbe], 0 */
    edi = MEM32(eax + 0xCBC0); /* 0x005DF064: mov edi, dword ptr [eax + 0xcbc0] */
    esi = MEM32(edi); /* 0x005DF06A: mov esi, dword ptr [edi] */
    /* cmp esi, edi */ /* 0x005DF06C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DF1A2; /* 0x005DF06E: je 0x5df1a2 */
L_005DF074:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DF074: push -1 */
    PUSH32(esp, 0); /* 0x005DF076: push 0 */
    ebx = esi + 0x10; /* 0x005DF078: lea ebx, [esi + 0x10] */
    MEM32(ebp + (-0x28)) = 0; /* 0x005DF07B: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x24)) = 0; /* 0x005DF082: mov dword ptr [ebp - 0x24], 0 */
    ecx = ebp + (-0x38); /* 0x005DF089: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ebx); /* 0x005DF08C: push ebx */
    MEM32(ebp + (-0x24)) = 0xFu; /* 0x005DF08D: mov dword ptr [ebp - 0x24], 0xf */
    MEM32(ebp + (-0x28)) = 0; /* 0x005DF094: mov dword ptr [ebp - 0x28], 0 */
    MEM8(ebp + (-0x38)) = (uint8_t)(0); /* 0x005DF09B: mov byte ptr [ebp - 0x38], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005DF09F: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005DF0A4: mov dword ptr [ebp - 4], 0 */
    _xmm[0] = xmm_ld(ebx + 0x18); /* 0x005DF0AB: movdqu xmm0, xmmword ptr [ebx + 0x18] */
    xmm_st(ebp + (-0x20), _xmm[0]); /* 0x005DF0B0: movdqu xmmword ptr [ebp - 0x20], xmm0 */
    MEM32(ebp + (-0x4)) = 1; /* 0x005DF0B5: mov dword ptr [ebp - 4], 1 */
    /* cmp MEM8(ebp + (-0x14)), 0 */ /* 0x005DF0BC: cmp byte ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DF0E9; /* 0x005DF0C0: je 0x5df0e9 */
L_005DF0C2:
    eax = MEM32(ebp + (-0x3C)); /* 0x005DF0C2: mov eax, dword ptr [ebp - 0x3c] */
    _xmm[0].u64[0] = MEM32(eax + 0xCB34); _xmm[0].u64[1] = 0; /* 0x005DF0C5: movss xmm0, dword ptr [eax + 0xcb34] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x808BB0))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005DF0CD: ucomiss xmm0, dword ptr [0x808bb0] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x005DF0D4: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x005DF0D5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_005DF0E7; /* 0x005DF0D8: jnp 0x5df0e7 */
L_005DF0DA:
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x808C40))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005DF0DA: ucomiss xmm0, dword ptr [0x808c40] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x005DF0E1: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x005DF0E2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_005DF0E9; /* 0x005DF0E5: jnp 0x5df0e9 */
L_005DF0E7:
    goto L_005DF12F; /* 0x005DF0E7: jmp 0x5df12f */
L_005DF0E9:
    eax = MEM32(ebp + (-0x20)); /* 0x005DF0E9: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)((eax | MEM32(ebp + (-0x1C)))); _flag_b = (uint32_t)((eax | MEM32(ebp + (-0x1C))));
    eax = eax | MEM32(ebp + (-0x1C)); /* 0x005DF0EC: or eax, dword ptr [ebp - 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DF12F; /* 0x005DF0EF: je 0x5df12f */
L_005DF0F1:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005DF0F1: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005DF0F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DF0FF; /* 0x005DF0F9: jne 0x5df0ff */
L_005DF0FB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DF0FB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DF119; /* 0x005DF0FD: jmp 0x5df119 */
L_005DF0FF:
    ecx = MEM32(0x927AFC); /* 0x005DF0FF: mov ecx, dword ptr [0x927afc] */
    /* test ecx, ecx */ /* 0x005DF105: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DF119; /* 0x005DF107: jne 0x5df119 */
L_005DF109:
    ecx = 0x00927AE8u; /* 0x005DF109: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005DF10E: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AFC); /* 0x005DF113: mov ecx, dword ptr [0x927afc] */
L_005DF119:
    eax = MEM32(ebp + (-0x18)); /* 0x005DF119: mov eax, dword ptr [ebp - 0x18] */
    edx = MEM32(ecx); /* 0x005DF11C: mov edx, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x005DF11E: push 0 */
    PUSH32(esp, 0); /* 0x005DF120: push 0 */
    PUSH32(esp, MEM32(eax)); /* 0x005DF122: push dword ptr [eax] */
    PUSH32(esp, 1); /* 0x005DF124: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x005DF126: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x005DF129: push dword ptr [ebp - 0x20] */
    RECOMP_ICALL(MEM32(edx + 0x7C)); /* 0x005DF12C: call dword ptr [edx + 0x7c] */
    RECOMP_FLAGS_IN();
L_005DF12F:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005DF12F: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(ebp + (-0x24)), 0x10u */ /* 0x005DF136: cmp dword ptr [ebp - 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DF148; /* 0x005DF13A: jb 0x5df148 */
L_005DF13C:
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x005DF13C: push dword ptr [ebp - 0x38] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DF13F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DF145: add esp, 4 */
    _flag_k = FK_ADD;
L_005DF148:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005DF148: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x38)) = (uint8_t)(0); /* 0x005DF14C: mov byte ptr [ebp - 0x38], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x005DF150: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x24)) = 0xFu; /* 0x005DF157: mov dword ptr [ebp - 0x24], 0xf */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF19A; /* 0x005DF15E: jne 0x5df19a */
L_005DF160:
    eax = MEM32(esi + 0x8); /* 0x005DF160: mov eax, dword ptr [esi + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DF163: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF17F; /* 0x005DF167: jne 0x5df17f */
L_005DF169:
    esi = eax; /* 0x005DF169: mov esi, eax */
    eax = MEM32(esi); /* 0x005DF16B: mov eax, dword ptr [esi] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DF16D: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF19A; /* 0x005DF171: jne 0x5df19a */
L_005DF173:
    esi = eax; /* 0x005DF173: mov esi, eax */
    eax = MEM32(esi); /* 0x005DF175: mov eax, dword ptr [esi] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DF177: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DF173; /* 0x005DF17B: je 0x5df173 */
L_005DF17D:
    goto L_005DF19A; /* 0x005DF17D: jmp 0x5df19a */
L_005DF17F:
    eax = MEM32(esi + 0x4); /* 0x005DF17F: mov eax, dword ptr [esi + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DF182: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF198; /* 0x005DF186: jne 0x5df198 */
L_005DF188:
    /* cmp esi, MEM32(eax + 0x8) */ /* 0x005DF188: cmp esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF198; /* 0x005DF18B: jne 0x5df198 */
L_005DF18D:
    esi = eax; /* 0x005DF18D: mov esi, eax */
    eax = MEM32(eax + 0x4); /* 0x005DF18F: mov eax, dword ptr [eax + 4] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005DF192: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DF188; /* 0x005DF196: je 0x5df188 */
L_005DF198:
    esi = eax; /* 0x005DF198: mov esi, eax */
L_005DF19A:
    /* cmp esi, edi */ /* 0x005DF19A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF074; /* 0x005DF19C: jne 0x5df074 */
L_005DF1A2:
    ecx = MEM32(ebp + (-0xC)); /* 0x005DF1A2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DF1A5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DF1AC: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DF1AD: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF1AE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DF1AF: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005DF1B0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005DF1B3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005DF1B5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005DF1BA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DF1BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DF1BD: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DF1C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF1C0u);

L_005DF1C0:
    PUSH32(esp, ebp); /* 0x005DF1C0: push ebp */
    ebp = esp; /* 0x005DF1C1: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x005DF1C3: mov eax, dword ptr [ebp + 0x10] */
    edx = 0x007EC634u; /* 0x005DF1C6: mov edx, 0x7ec634 */
    PUSH32(esp, esi); /* 0x005DF1CB: push esi */
    esi = ecx; /* 0x005DF1CC: mov esi, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x005DF1CE: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB88)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xCB88) = MEM32(esi + 0xCB88) + eax; /* 0x005DF1D1: add dword ptr [esi + 0xcb88], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x14); /* 0x005DF1D7: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB84)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xCB84) = MEM32(esi + 0xCB84) + eax; /* 0x005DF1DA: add dword ptr [esi + 0xcb84], eax */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_004261B0); /* 0x005DF1E0: call 0x4261b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DF1E5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DF1FC; /* 0x005DF1E7: je 0x5df1fc */
L_005DF1E9:
    MEM8(esi + 0xCB3E) = (uint8_t)(1); /* 0x005DF1E9: mov byte ptr [esi + 0xcb3e], 1 */
    MEM8(esi + 0xCB32) = (uint8_t)(1); /* 0x005DF1F0: mov byte ptr [esi + 0xcb32], 1 */
    esi = POP32_VAL(esp); /* 0x005DF1F7: pop esi */
    ebp = POP32_VAL(esp); /* 0x005DF1F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005DF1F9: ret 0x10 */
L_005DF1FC:
    ecx = MEM32(ebp + 0x8); /* 0x005DF1FC: mov ecx, dword ptr [ebp + 8] */
    edx = 0x007F6284u; /* 0x005DF1FF: mov edx, 0x7f6284 */
    RECOMP_CALL(sub_004261B0); /* 0x005DF204: call 0x4261b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DF209: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DF214; /* 0x005DF20B: je 0x5df214 */
L_005DF20D:
    MEM8(esi + 0xCB3F) = (uint8_t)(1); /* 0x005DF20D: mov byte ptr [esi + 0xcb3f], 1 */
L_005DF214:
    MEM8(esi + 0xCB32) = (uint8_t)(1); /* 0x005DF214: mov byte ptr [esi + 0xcb32], 1 */
    esi = POP32_VAL(esp); /* 0x005DF21B: pop esi */
    ebp = POP32_VAL(esp); /* 0x005DF21C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005DF21D: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005DF220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF220u);

L_005DF220:
    PUSH32(esp, ebp); /* 0x005DF220: push ebp */
    ebp = esp; /* 0x005DF221: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005DF223: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DF226: push -1 */
    PUSH32(esp, 0x007AFF98u); /* 0x005DF228: push 0x7aff98 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DF22D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DF233: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005DF234: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005DF237: push ebx */
    PUSH32(esp, esi); /* 0x005DF238: push esi */
    PUSH32(esp, edi); /* 0x005DF239: push edi */
    eax = MEM32(0x855000); /* 0x005DF23A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005DF23F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DF241: push eax */
    eax = esp + 0x20; /* 0x005DF242: lea eax, [esp + 0x20] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DF246: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005DF24C: mov edi, ecx */
    RECOMP_CALL(sub_0040A630); /* 0x005DF24E: call 0x40a630 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005DF253: push eax */
    ecx = esp + 0x14; /* 0x005DF254: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_005E00D0); /* 0x005DF258: call 0x5e00d0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x28) = 0; /* 0x005DF25D: mov dword ptr [esp + 0x28], 0 */
    ebx = MEM32(esp + 0x14); /* 0x005DF265: mov ebx, dword ptr [esp + 0x14] */
    eax = ebx; /* 0x005DF269: mov eax, ebx */
    ecx = MEM32(esp + 0x10); /* 0x005DF26B: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005DF26F: sub eax, ecx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005DF271: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    /* cmp eax, 2 */ /* 0x005DF274: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005DF377; /* 0x005DF277: jb 0x5df377 */
L_005DF27D:
    esi = ecx; /* 0x005DF27D: mov esi, ecx */
    /* cmp ecx, ebx */ /* 0x005DF27F: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DF2AA; /* 0x005DF281: je 0x5df2aa */
L_005DF283:
    eax = MEM32(esi); /* 0x005DF283: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0xCAB0); /* 0x005DF285: mov eax, dword ptr [eax + 0xcab0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6B70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x6B70u; /* 0x005DF28B: add eax, 0x6b70 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005DF290: push eax */
    RECOMP_CALL(sub_005DE9B0); /* 0x005DF291: call 0x5de9b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DF296: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DF2A3; /* 0x005DF298: jne 0x5df2a3 */
L_005DF29A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x005DF29A: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x005DF29D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF283; /* 0x005DF29F: jne 0x5df283 */
L_005DF2A1:
    goto L_005DF2AA; /* 0x005DF2A1: jmp 0x5df2aa */
L_005DF2A3:
    MEM8(edi + 0xCB40) = (uint8_t)(1); /* 0x005DF2A3: mov byte ptr [edi + 0xcb40], 1 */
L_005DF2AA:
    esi = MEM32(0x8692E8); /* 0x005DF2AA: mov esi, dword ptr [0x8692e8] */
    _flag_a = (uint32_t)(MEM32(edi + 0xCB6C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xCB6C) = MEM32(edi + 0xCB6C) + 1; /* 0x005DF2B0: inc dword ptr [edi + 0xcb6c] */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x005DF2B6: mov eax, dword ptr [esi] */
    /* cmp eax, 7 */ /* 0x005DF2B8: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DF365; /* 0x005DF2BB: je 0x5df365 */
L_005DF2C1:
    /* cmp MEM8(ebp + 0x8), 1 */ /* 0x005DF2C1: cmp byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF35F; /* 0x005DF2C5: jne 0x5df35f */
L_005DF2CB:
    /* cmp eax, 5 */ /* 0x005DF2CB: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF2F0; /* 0x005DF2CE: jne 0x5df2f0 */
L_005DF2D0:
    ecx = esi + 0x38; /* 0x005DF2D0: lea ecx, [esi + 0x38] */
    MEM8(edi + 0xCB3C) = (uint8_t)(1); /* 0x005DF2D3: mov byte ptr [edi + 0xcb3c], 1 */
    edx = 0x007F6294u; /* 0x005DF2DA: mov edx, 0x7f6294 */
    RECOMP_CALL(sub_004261B0); /* 0x005DF2DF: call 0x4261b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DF2E4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DF348; /* 0x005DF2E6: je 0x5df348 */
L_005DF2E8:
    _flag_a = (uint32_t)(MEM32(edi + 0xCB9C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xCB9C) = MEM32(edi + 0xCB9C) + 1; /* 0x005DF2E8: inc dword ptr [edi + 0xcb9c] */
    _flag_k = FK_INC;
    goto L_005DF348; /* 0x005DF2EE: jmp 0x5df348 */
L_005DF2F0:
    /* cmp eax, 3 */ /* 0x005DF2F0: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF30E; /* 0x005DF2F3: jne 0x5df30e */
L_005DF2F5:
    ecx = esi + 0x38; /* 0x005DF2F5: lea ecx, [esi + 0x38] */
    edx = 0x007F62A4u; /* 0x005DF2F8: mov edx, 0x7f62a4 */
    RECOMP_CALL(sub_004261B0); /* 0x005DF2FD: call 0x4261b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DF302: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DF30E; /* 0x005DF304: je 0x5df30e */
L_005DF306:
    _flag_a = (uint32_t)(MEM32(edi + 0xCBA0)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xCBA0) = MEM32(edi + 0xCBA0) + 1; /* 0x005DF306: inc dword ptr [edi + 0xcba0] */
    _flag_k = FK_INC;
    goto L_005DF348; /* 0x005DF30C: jmp 0x5df348 */
L_005DF30E:
    /* cmp MEM32(esi), 1 */ /* 0x005DF30E: cmp dword ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF32C; /* 0x005DF311: jne 0x5df32c */
L_005DF313:
    ecx = esi + 0x38; /* 0x005DF313: lea ecx, [esi + 0x38] */
    edx = 0x007F62B0u; /* 0x005DF316: mov edx, 0x7f62b0 */
    RECOMP_CALL(sub_004261B0); /* 0x005DF31B: call 0x4261b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DF320: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DF32C; /* 0x005DF322: je 0x5df32c */
L_005DF324:
    _flag_a = (uint32_t)(MEM32(edi + 0xCBA4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xCBA4) = MEM32(edi + 0xCBA4) + 1; /* 0x005DF324: inc dword ptr [edi + 0xcba4] */
    _flag_k = FK_INC;
    goto L_005DF348; /* 0x005DF32A: jmp 0x5df348 */
L_005DF32C:
    /* cmp MEM32(esi), 2 */ /* 0x005DF32C: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF348; /* 0x005DF32F: jne 0x5df348 */
L_005DF331:
    ecx = esi + 0x38; /* 0x005DF331: lea ecx, [esi + 0x38] */
    edx = 0x007F62BCu; /* 0x005DF334: mov edx, 0x7f62bc */
    RECOMP_CALL(sub_004261B0); /* 0x005DF339: call 0x4261b0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DF33E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DF348; /* 0x005DF340: je 0x5df348 */
L_005DF342:
    _flag_a = (uint32_t)(MEM32(edi + 0xCBA8)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xCBA8) = MEM32(edi + 0xCBA8) + 1; /* 0x005DF342: inc dword ptr [edi + 0xcba8] */
    _flag_k = FK_INC;
L_005DF348:
    /* cmp MEM8(edi + 0xCBBC), 2 */ /* 0x005DF348: cmp byte ptr [edi + 0xcbbc], 2 */
    _flag_a = (uint32_t)(MEM8(edi + 0xCBBC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF357; /* 0x005DF34F: jne 0x5df357 */
L_005DF351:
    _flag_a = (uint32_t)(MEM32(edi + 0xCB78)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xCB78) = MEM32(edi + 0xCB78) + 1; /* 0x005DF351: inc dword ptr [edi + 0xcb78] */
    _flag_k = FK_INC;
L_005DF357:
    _flag_a = (uint32_t)(MEM32(edi + 0xCB70)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xCB70) = MEM32(edi + 0xCB70) + 1; /* 0x005DF357: inc dword ptr [edi + 0xcb70] */
    _flag_k = FK_INC;
    goto L_005DF365; /* 0x005DF35D: jmp 0x5df365 */
L_005DF35F:
    _flag_a = (uint32_t)(MEM32(edi + 0xCB74)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0xCB74) = MEM32(edi + 0xCB74) + 1; /* 0x005DF35F: inc dword ptr [edi + 0xcb74] */
    _flag_k = FK_INC;
L_005DF365:
    ecx = MEM32(esp + 0x10); /* 0x005DF365: mov ecx, dword ptr [esp + 0x10] */
    MEM8(edi + 0xCB32) = (uint8_t)(1); /* 0x005DF369: mov byte ptr [edi + 0xcb32], 1 */
    MEM8(edi + 0xCBBE) = (uint8_t)(1); /* 0x005DF370: mov byte ptr [edi + 0xcbbe], 1 */
L_005DF377:
    MEM32(esp + 0x28) = 0xFFFFFFFFu; /* 0x005DF377: mov dword ptr [esp + 0x28], 0xffffffff */
    /* test ecx, ecx */ /* 0x005DF37F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005DF3A5; /* 0x005DF381: je 0x5df3a5 */
L_005DF383:
    PUSH32(esp, ecx); /* 0x005DF383: push ecx */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005DF384: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005DF38A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x10) = 0; /* 0x005DF38D: mov dword ptr [esp + 0x10], 0 */
    MEM32(esp + 0x14) = 0; /* 0x005DF395: mov dword ptr [esp + 0x14], 0 */
    MEM32(esp + 0x18) = 0; /* 0x005DF39D: mov dword ptr [esp + 0x18], 0 */
L_005DF3A5:
    ecx = MEM32(esp + 0x20); /* 0x005DF3A5: mov ecx, dword ptr [esp + 0x20] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005DF3A9: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005DF3B0: pop ecx */
    edi = POP32_VAL(esp); /* 0x005DF3B1: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF3B2: pop esi */
    ebx = POP32_VAL(esp); /* 0x005DF3B3: pop ebx */
    esp = ebp; /* 0x005DF3B4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DF3B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF3B7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DF3C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF3C0u);

L_005DF3C0:
    PUSH32(esp, ebp); /* 0x005DF3C0: push ebp */
    ebp = esp; /* 0x005DF3C1: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x8); _xmm[0].u64[1] = 0; /* 0x005DF3C3: movss xmm0, dword ptr [ebp + 8] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(ecx + 0xCB48))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005DF3C8: comiss xmm0, dword ptr [ecx + 0xcb48] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_005DF3D9; /* 0x005DF3CF: jbe 0x5df3d9 */
L_005DF3D1:
    MEM32(ecx + 0xCB48) = _xmm[0].u32[0]; /* 0x005DF3D1: movss dword ptr [ecx + 0xcb48], xmm0 */
L_005DF3D9:
    ebp = POP32_VAL(esp); /* 0x005DF3D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF3DA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DF3E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF3E0u);

L_005DF3E0:
    MEM8(ecx + 0xCB3D) = (uint8_t)(1); /* 0x005DF3E0: mov byte ptr [ecx + 0xcb3d], 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DF3E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DF3F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF3F0u);

L_005DF3F0:
    PUSH32(esp, ebp); /* 0x005DF3F0: push ebp */
    ebp = esp; /* 0x005DF3F1: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x005DF3F3: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x005DF3F6: cwde  */
    MEM32(ecx + 0xCB38) = eax; /* 0x005DF3F7: mov dword ptr [ecx + 0xcb38], eax */
    ebp = POP32_VAL(esp); /* 0x005DF3FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005DF3FE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005DF410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF410u);

L_005DF410:
    PUSH32(esp, ebp); /* 0x005DF410: push ebp */
    ebp = esp; /* 0x005DF411: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x8); _xmm[0].u64[1] = 0; /* 0x005DF413: movss xmm0, dword ptr [ebp + 8] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(ecx + 0xCB44))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005DF418: comiss xmm0, dword ptr [ecx + 0xcb44] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_BE)) goto L_005DF429; /* 0x005DF41F: jbe 0x5df429 */
L_005DF421:
    MEM32(ecx + 0xCB44) = _xmm[0].u32[0]; /* 0x005DF421: movss dword ptr [ecx + 0xcb44], xmm0 */
L_005DF429:
    ebp = POP32_VAL(esp); /* 0x005DF429: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF42A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DF430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF430u);

L_005DF430:
    PUSH32(esp, ebp); /* 0x005DF430: push ebp */
    ebp = esp; /* 0x005DF431: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x8); _xmm[0].u64[1] = 0; /* 0x005DF433: movss xmm0, dword ptr [ebp + 8] */
    { float _s = sse_f32(MEM32(ecx + 0xCBB0)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x005DF438: addss xmm0, dword ptr [ecx + 0xcbb0] */
    eax = (uint32_t)sse_cvt_i32((double)_xmm[0].f32[0], 1); /* 0x005DF440: cvttss2si eax, xmm0 */
    MEM32(ecx + 0xCBB0) = _xmm[0].u32[0]; /* 0x005DF444: movss dword ptr [ecx + 0xcbb0], xmm0 */
    /* test eax, eax */ /* 0x005DF44C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_005DF454; /* 0x005DF44E: jns 0x5df454 */
L_005DF450:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005DF450: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DF45E; /* 0x005DF452: jmp 0x5df45e */
L_005DF454:
    edx = 0x7FFFFFFFu; /* 0x005DF454: mov edx, 0x7fffffff */
    /* cmp eax, edx */ /* 0x005DF459: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { eax = edx; } /* 0x005DF45B: cmovg eax, edx */
L_005DF45E:
    MEM32(ecx + 0xCB68) = eax; /* 0x005DF45E: mov dword ptr [ecx + 0xcb68], eax */
    MEM8(ecx + 0xCB32) = (uint8_t)(1); /* 0x005DF464: mov byte ptr [ecx + 0xcb32], 1 */
    MEM8(ecx + 0xCBBE) = (uint8_t)(1); /* 0x005DF46B: mov byte ptr [ecx + 0xcbbe], 1 */
    ebp = POP32_VAL(esp); /* 0x005DF472: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF473: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DF480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF480u);

L_005DF480:
    _flag_a = (uint32_t)(MEM32(ecx + 0xCB8C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xCB8C) = MEM32(ecx + 0xCB8C) + 1; /* 0x005DF480: inc dword ptr [ecx + 0xcb8c] */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx + 0xCBBC), 2 */ /* 0x005DF486: cmp byte ptr [ecx + 0xcbbc], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xCBBC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF495; /* 0x005DF48D: jne 0x5df495 */
L_005DF48F:
    _flag_a = (uint32_t)(MEM32(ecx + 0xCB94)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xCB94) = MEM32(ecx + 0xCB94) + 1; /* 0x005DF48F: inc dword ptr [ecx + 0xcb94] */
    _flag_k = FK_INC;
L_005DF495:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DF495: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DF4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF4A0u);

L_005DF4A0:
    _flag_a = (uint32_t)(MEM32(ecx + 0xCB90)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xCB90) = MEM32(ecx + 0xCB90) + 1; /* 0x005DF4A0: inc dword ptr [ecx + 0xcb90] */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx + 0xCBBC), 2 */ /* 0x005DF4A6: cmp byte ptr [ecx + 0xcbbc], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xCBBC)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF4B5; /* 0x005DF4AD: jne 0x5df4b5 */
L_005DF4AF:
    _flag_a = (uint32_t)(MEM32(ecx + 0xCB98)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0xCB98) = MEM32(ecx + 0xCB98) + 1; /* 0x005DF4AF: inc dword ptr [ecx + 0xcb98] */
    _flag_k = FK_INC;
L_005DF4B5:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DF4B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DF4C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF4C0u);

L_005DF4C0:
    PUSH32(esp, ebp); /* 0x005DF4C0: push ebp */
    ebp = esp; /* 0x005DF4C1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005DF4C3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0xCB7C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0xCB7C) = MEM32(ecx + 0xCB7C) + eax; /* 0x005DF4C6: add dword ptr [ecx + 0xcb7c], eax */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x005DF4CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF4CD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DF4D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF4D0u);

L_005DF4D0:
    PUSH32(esp, ebp); /* 0x005DF4D0: push ebp */
    ebp = esp; /* 0x005DF4D1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x005DF4D3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0xCB80)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0xCB80) = MEM32(ecx + 0xCB80) + eax; /* 0x005DF4D6: add dword ptr [ecx + 0xcb80], eax */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x005DF4DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF4DD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DF4E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF4E0u);

L_005DF4E0:
    PUSH32(esp, ebp); /* 0x005DF4E0: push ebp */
    ebp = esp; /* 0x005DF4E1: mov ebp, esp */
    _xmm[0].u64[0] = MEM32(ebp + 0x8); _xmm[0].u64[1] = 0; /* 0x005DF4E3: movss xmm0, dword ptr [ebp + 8] */
    { float _s = sse_f32(MEM32(ecx + 0xCBAC)); _xmm[0].f32[0] = (float)(_xmm[0].f32[0] + _s); } /* 0x005DF4E8: addss xmm0, dword ptr [ecx + 0xcbac] */
    MEM8(ecx + 0xCB32) = (uint8_t)(1); /* 0x005DF4F0: mov byte ptr [ecx + 0xcb32], 1 */
    MEM8(ecx + 0xCBBE) = (uint8_t)(1); /* 0x005DF4F7: mov byte ptr [ecx + 0xcbbe], 1 */
    MEM32(ecx + 0xCBAC) = _xmm[0].u32[0]; /* 0x005DF4FE: movss dword ptr [ecx + 0xcbac], xmm0 */
    ebp = POP32_VAL(esp); /* 0x005DF506: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF507: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DF510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF510u);

L_005DF510:
    PUSH32(esp, ebp); /* 0x005DF510: push ebp */
    ebp = esp; /* 0x005DF511: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005DF513: push ecx */
    _xmm[1].u64[0] = MEM32(0x808BB0); _xmm[1].u64[1] = 0; /* 0x005DF514: movss xmm1, dword ptr [0x808bb0] */
    PUSH32(esp, esi); /* 0x005DF51C: push esi */
    PUSH32(esp, edi); /* 0x005DF51D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x005DF51E: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x005DF521: mov esi, ecx */
    /* cmp MEM8(edi + 0x40), 0 */ /* 0x005DF523: cmp byte ptr [edi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x40)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DF54F; /* 0x005DF527: je 0x5df54f */
L_005DF529:
    _xmm[0].u64[0] = MEM32(esi + 0xCB34); _xmm[0].u64[1] = 0; /* 0x005DF529: movss xmm0, dword ptr [esi + 0xcb34] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005DF531: ucomiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x005DF534: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x005DF535: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_005DF8D1; /* 0x005DF538: jnp 0x5df8d1 */
L_005DF53E:
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x808C40))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005DF53E: ucomiss xmm0, dword ptr [0x808c40] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x005DF545: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x005DF546: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_005DF8D1; /* 0x005DF549: jp 0x5df8d1 */
L_005DF54F:
    /* cmp MEM8(edi + 0x38), 0 */ /* 0x005DF54F: cmp byte ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x38)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF553: jne 0x5df8d1 */
L_005DF559:
    eax = MEM32(edi); /* 0x005DF559: mov eax, dword ptr [edi] */
    /* cmp eax, 0x23u */ /* 0x005DF55B: cmp eax, 0x23 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF55E: ja 0x5df8d1 */
L_005DF564:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x5DF8D8)); goto _ljump; }
L_005DF56B:
    /* cmp MEM32(esi + 0xCB70), 0 */ /* 0x005DF56B: cmp dword ptr [esi + 0xcb70], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB70)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_005DF8C9; /* 0x005DF572: jmp 0x5df8c9 */
L_005DF577:
    /* cmp MEM32(esi + 0xCB70), 0x64u */ /* 0x005DF577: cmp dword ptr [esi + 0xcb70], 0x64 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB70)); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF57E: jl 0x5df8d1 */
L_005DF584:
    PUSH32(esp, edi); /* 0x005DF584: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF585: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF58A: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF58B: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF58C: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF58D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF58E: ret 4 */
L_005DF591:
    /* cmp MEM32(esi + 0xCB70), 0xC8u */ /* 0x005DF591: cmp dword ptr [esi + 0xcb70], 0xc8 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB70)); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF59B: jl 0x5df8d1 */
L_005DF5A1:
    PUSH32(esp, edi); /* 0x005DF5A1: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF5A2: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF5A7: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF5A8: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF5A9: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF5AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF5AB: ret 4 */
L_005DF5AE:
    /* cmp MEM32(esi + 0xCB70), 0x12Cu */ /* 0x005DF5AE: cmp dword ptr [esi + 0xcb70], 0x12c */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB70)); _flag_b = (uint32_t)(0x12Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF5B8: jl 0x5df8d1 */
L_005DF5BE:
    PUSH32(esp, edi); /* 0x005DF5BE: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF5BF: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF5C4: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF5C5: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF5C6: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF5C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF5C8: ret 4 */
L_005DF5CB:
    /* cmp MEM8(esi + 0xCB3E), 0 */ /* 0x005DF5CB: cmp byte ptr [esi + 0xcb3e], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xCB3E)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_005DF8C9; /* 0x005DF5D2: jmp 0x5df8c9 */
L_005DF5D7:
    /* cmp MEM8(esi + 0xCB3F), 0 */ /* 0x005DF5D7: cmp byte ptr [esi + 0xcb3f], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xCB3F)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_005DF8C9; /* 0x005DF5DE: jmp 0x5df8c9 */
L_005DF5E3:
    /* cmp MEM32(esi + 0xCB88), 0x000186A0u */ /* 0x005DF5E3: cmp dword ptr [esi + 0xcb88], 0x186a0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB88)); _flag_b = (uint32_t)(0x000186A0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF5ED: jl 0x5df8d1 */
L_005DF5F3:
    PUSH32(esp, edi); /* 0x005DF5F3: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF5F4: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF5F9: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF5FA: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF5FB: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF5FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF5FD: ret 4 */
L_005DF600:
    /* cmp MEM32(esi + 0xCB84), 0x1388u */ /* 0x005DF600: cmp dword ptr [esi + 0xcb84], 0x1388 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB84)); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF60A: jl 0x5df8d1 */
L_005DF610:
    PUSH32(esp, edi); /* 0x005DF610: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF611: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF616: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF617: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF618: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF619: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF61A: ret 4 */
L_005DF61D:
    /* cmp MEM32(esi + 0xCB78), 0 */ /* 0x005DF61D: cmp dword ptr [esi + 0xcb78], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB78)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_005DF8C9; /* 0x005DF624: jmp 0x5df8c9 */
L_005DF629:
    /* cmp MEM32(esi + 0xCB78), 0x64u */ /* 0x005DF629: cmp dword ptr [esi + 0xcb78], 0x64 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB78)); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF630: jl 0x5df8d1 */
L_005DF636:
    PUSH32(esp, edi); /* 0x005DF636: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF637: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF63C: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF63D: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF63E: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF63F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF640: ret 4 */
L_005DF643:
    /* cmp MEM32(esi + 0xCB78), 0xC8u */ /* 0x005DF643: cmp dword ptr [esi + 0xcb78], 0xc8 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB78)); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF64D: jl 0x5df8d1 */
L_005DF653:
    PUSH32(esp, edi); /* 0x005DF653: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF654: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF659: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF65A: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF65B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF65C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF65D: ret 4 */
L_005DF660:
    /* cmp MEM32(esi + 0xCB78), 0x12Cu */ /* 0x005DF660: cmp dword ptr [esi + 0xcb78], 0x12c */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB78)); _flag_b = (uint32_t)(0x12Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF66A: jl 0x5df8d1 */
L_005DF670:
    PUSH32(esp, edi); /* 0x005DF670: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF671: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF676: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF677: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF678: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF679: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF67A: ret 4 */
L_005DF67D:
    _xmm[0].u64[0] = MEM32(esi + 0xCBAC); _xmm[0].u64[1] = 0; /* 0x005DF67D: movss xmm0, dword ptr [esi + 0xcbac] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x808CB0))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005DF685: comiss xmm0, dword ptr [0x808cb0] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_005DF8D1; /* 0x005DF68C: jb 0x5df8d1 */
L_005DF692:
    PUSH32(esp, edi); /* 0x005DF692: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF693: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF698: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF699: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF69A: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF69B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF69C: ret 4 */
L_005DF69F:
    _xmm[0].u64[0] = MEM32(esi + 0xCB48); _xmm[0].u64[1] = 0; /* 0x005DF69F: movss xmm0, dword ptr [esi + 0xcb48] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x809754))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005DF6A7: comiss xmm0, dword ptr [0x809754] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_005DF8D1; /* 0x005DF6AE: jb 0x5df8d1 */
L_005DF6B4:
    PUSH32(esp, edi); /* 0x005DF6B4: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF6B5: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF6BA: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF6BB: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF6BC: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF6BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF6BE: ret 4 */
L_005DF6C1:
    _xmm[0].u64[0] = MEM32(esi + 0xCB48); _xmm[0].u64[1] = 0; /* 0x005DF6C1: movss xmm0, dword ptr [esi + 0xcb48] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x809774))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005DF6C9: comiss xmm0, dword ptr [0x809774] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_005DF8D1; /* 0x005DF6D0: jb 0x5df8d1 */
L_005DF6D6:
    PUSH32(esp, edi); /* 0x005DF6D6: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF6D7: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF6DC: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF6DD: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF6DE: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF6DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF6E0: ret 4 */
L_005DF6E3:
    _xmm[0].u64[0] = MEM32(esi + 0xCB48); _xmm[0].u64[1] = 0; /* 0x005DF6E3: movss xmm0, dword ptr [esi + 0xcb48] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x809798))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005DF6EB: comiss xmm0, dword ptr [0x809798] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_005DF8D1; /* 0x005DF6F2: jb 0x5df8d1 */
L_005DF6F8:
    PUSH32(esp, edi); /* 0x005DF6F8: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF6F9: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF6FE: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF6FF: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF700: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF701: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF702: ret 4 */
L_005DF705:
    _xmm[0].u64[0] = MEM32(esi + 0xCBB0); _xmm[0].u64[1] = 0; /* 0x005DF705: movss xmm0, dword ptr [esi + 0xcbb0] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x809788))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005DF70D: comiss xmm0, dword ptr [0x809788] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_005DF8D1; /* 0x005DF714: jb 0x5df8d1 */
L_005DF71A:
    PUSH32(esp, edi); /* 0x005DF71A: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF71B: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF720: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF721: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF722: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF723: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF724: ret 4 */
L_005DF727:
    /* cmp MEM32(esi + 0xCB7C), 0x3E8u */ /* 0x005DF727: cmp dword ptr [esi + 0xcb7c], 0x3e8 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB7C)); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF731: jl 0x5df8d1 */
L_005DF737:
    PUSH32(esp, edi); /* 0x005DF737: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF738: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF73D: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF73E: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF73F: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF740: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF741: ret 4 */
L_005DF744:
    /* cmp MEM32(esi + 0xCB7C), 0x2710u */ /* 0x005DF744: cmp dword ptr [esi + 0xcb7c], 0x2710 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB7C)); _flag_b = (uint32_t)(0x2710u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF74E: jl 0x5df8d1 */
L_005DF754:
    PUSH32(esp, edi); /* 0x005DF754: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF755: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF75A: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF75B: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF75C: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF75D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF75E: ret 4 */
L_005DF761:
    /* cmp MEM32(esi + 0xCB7C), 0x000186A0u */ /* 0x005DF761: cmp dword ptr [esi + 0xcb7c], 0x186a0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB7C)); _flag_b = (uint32_t)(0x000186A0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF76B: jl 0x5df8d1 */
L_005DF771:
    PUSH32(esp, edi); /* 0x005DF771: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF772: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF777: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF778: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF779: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF77A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF77B: ret 4 */
L_005DF77E:
    /* cmp MEM32(esi + 0xCB38), 0xCu */ /* 0x005DF77E: cmp dword ptr [esi + 0xcb38], 0xc */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB38)); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF785: jne 0x5df8d1 */
L_005DF78B:
    PUSH32(esp, edi); /* 0x005DF78B: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF78C: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF791: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF792: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF793: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF794: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF795: ret 4 */
L_005DF798:
    /* cmp MEM8(esi + 0xCB3D), 0 */ /* 0x005DF798: cmp byte ptr [esi + 0xcb3d], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xCB3D)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_005DF8C9; /* 0x005DF79F: jmp 0x5df8c9 */
L_005DF7A4:
    /* cmp MEM8(esi + 0xCB3C), 0 */ /* 0x005DF7A4: cmp byte ptr [esi + 0xcb3c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xCB3C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_005DF8C9; /* 0x005DF7AB: jmp 0x5df8c9 */
L_005DF7B0:
    _xmm[0].u64[0] = MEM32(esi + 0xCB44); _xmm[0].u64[1] = 0; /* 0x005DF7B0: movss xmm0, dword ptr [esi + 0xcb44] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x8093A0))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005DF7B8: comiss xmm0, dword ptr [0x8093a0] */
    _flag_k = FK_EFLAGS;
    if (recomp_cond(FK_EFLAGS, _flag_a, 0, CC_B)) goto L_005DF8D1; /* 0x005DF7BF: jb 0x5df8d1 */
L_005DF7C5:
    PUSH32(esp, edi); /* 0x005DF7C5: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF7C6: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF7CB: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF7CC: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF7CD: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF7CE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF7CF: ret 4 */
L_005DF7D2:
    ecx = MEM32(0x87CBB4); /* 0x005DF7D2: mov ecx, dword ptr [0x87cbb4] */
    PUSH32(esp, 0x1Cu); /* 0x005DF7D8: push 0x1c */
    ecx = MEM32(ecx + 0xC); /* 0x005DF7DA: mov ecx, dword ptr [ecx + 0xc] */
    RECOMP_CALL(sub_006B7930); /* 0x005DF7DD: call 0x6b7930 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(eax + 0x138), 0 */ /* 0x005DF7E2: cmp byte ptr [eax + 0x138], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x138)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF7E9: je 0x5df8d1 */
L_005DF7EF:
    ecx = esi; /* 0x005DF7EF: mov ecx, esi */
    PUSH32(esp, edi); /* 0x005DF7F1: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF7F2: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF7F7: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF7F8: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF7F9: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF7FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF7FB: ret 4 */
L_005DF7FE:
    /* cmp MEM32(esi + 0xCB64), 0x2Au */ /* 0x005DF7FE: cmp dword ptr [esi + 0xcb64], 0x2a */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB64)); _flag_b = (uint32_t)(0x2Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF805: jl 0x5df8d1 */
L_005DF80B:
    PUSH32(esp, edi); /* 0x005DF80B: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF80C: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF811: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF812: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF813: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF814: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF815: ret 4 */
L_005DF818:
    /* cmp MEM32(esi + 0xCB5C), 0x14u */ /* 0x005DF818: cmp dword ptr [esi + 0xcb5c], 0x14 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB5C)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF81F: jl 0x5df8d1 */
L_005DF825:
    PUSH32(esp, edi); /* 0x005DF825: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF826: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF82B: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF82C: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF82D: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF82E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF82F: ret 4 */
L_005DF832:
    _xmm[0].u64[0] = MEM32(esi + 0xCB34); _xmm[0].u64[1] = 0; /* 0x005DF832: movss xmm0, dword ptr [esi + 0xcb34] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], _xmm[1].f32[0]); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005DF83A: ucomiss xmm0, xmm1 */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x005DF83D: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x005DF83E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_005DF8D1; /* 0x005DF841: jp 0x5df8d1 */
L_005DF847:
    PUSH32(esp, edi); /* 0x005DF847: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF848: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF84D: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF84E: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF84F: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF850: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF851: ret 4 */
L_005DF854:
    /* cmp MEM32(esi + 0xCB9C), 0xAu */ /* 0x005DF854: cmp dword ptr [esi + 0xcb9c], 0xa */
    _flag_a = (uint32_t)(MEM32(esi + 0xCB9C)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF85B: jl 0x5df8d1 */
L_005DF85D:
    PUSH32(esp, edi); /* 0x005DF85D: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF85E: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF863: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF864: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF865: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF866: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF867: ret 4 */
L_005DF86A:
    /* cmp MEM32(esi + 0xCBA0), 0xAu */ /* 0x005DF86A: cmp dword ptr [esi + 0xcba0], 0xa */
    _flag_a = (uint32_t)(MEM32(esi + 0xCBA0)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF871: jl 0x5df8d1 */
L_005DF873:
    PUSH32(esp, edi); /* 0x005DF873: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF874: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF879: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF87A: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF87B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF87C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF87D: ret 4 */
L_005DF880:
    /* cmp MEM32(esi + 0xCBA4), 0xAu */ /* 0x005DF880: cmp dword ptr [esi + 0xcba4], 0xa */
    _flag_a = (uint32_t)(MEM32(esi + 0xCBA4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF887: jl 0x5df8d1 */
L_005DF889:
    PUSH32(esp, edi); /* 0x005DF889: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF88A: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF88F: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF890: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF891: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF892: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF893: ret 4 */
L_005DF896:
    /* cmp MEM32(esi + 0xCBA8), 0xAu */ /* 0x005DF896: cmp dword ptr [esi + 0xcba8], 0xa */
    _flag_a = (uint32_t)(MEM32(esi + 0xCBA8)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF89D: jl 0x5df8d1 */
L_005DF89F:
    PUSH32(esp, edi); /* 0x005DF89F: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF8A0: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF8A5: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF8A6: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF8A7: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF8A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF8A9: ret 4 */
L_005DF8AC:
    /* cmp MEM32(esi + 0xCBB8), 1 */ /* 0x005DF8AC: cmp dword ptr [esi + 0xcbb8], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xCBB8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DF8D1; /* 0x005DF8B3: jne 0x5df8d1 */
L_005DF8B5:
    PUSH32(esp, edi); /* 0x005DF8B5: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF8B6: call 0x5df970 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x005DF8BB: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF8BC: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF8BD: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF8BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF8BF: ret 4 */
L_005DF8C2:
    /* cmp MEM8(esi + 0xCB40), 0 */ /* 0x005DF8C2: cmp byte ptr [esi + 0xcb40], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xCB40)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_005DF8C9:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_005DF8D1; /* 0x005DF8C9: je 0x5df8d1 */
L_005DF8CB:
    PUSH32(esp, edi); /* 0x005DF8CB: push edi */
    RECOMP_CALL(sub_005DF970); /* 0x005DF8CC: call 0x5df970 */
    RECOMP_FLAGS_IN();
L_005DF8D1:
    edi = POP32_VAL(esp); /* 0x005DF8D1: pop edi */
    esi = POP32_VAL(esp); /* 0x005DF8D2: pop esi */
    ecx = POP32_VAL(esp); /* 0x005DF8D3: pop ecx */
    ebp = POP32_VAL(esp); /* 0x005DF8D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF8D5: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x005DF56Bu: goto L_005DF56B;
      case 0x005DF577u: goto L_005DF577;
      case 0x005DF591u: goto L_005DF591;
      case 0x005DF5AEu: goto L_005DF5AE;
      case 0x005DF5CBu: goto L_005DF5CB;
      case 0x005DF5D7u: goto L_005DF5D7;
      case 0x005DF5E3u: goto L_005DF5E3;
      case 0x005DF600u: goto L_005DF600;
      case 0x005DF61Du: goto L_005DF61D;
      case 0x005DF629u: goto L_005DF629;
      case 0x005DF643u: goto L_005DF643;
      case 0x005DF660u: goto L_005DF660;
      case 0x005DF67Du: goto L_005DF67D;
      case 0x005DF69Fu: goto L_005DF69F;
      case 0x005DF6C1u: goto L_005DF6C1;
      case 0x005DF6E3u: goto L_005DF6E3;
      case 0x005DF705u: goto L_005DF705;
      case 0x005DF727u: goto L_005DF727;
      case 0x005DF744u: goto L_005DF744;
      case 0x005DF761u: goto L_005DF761;
      case 0x005DF77Eu: goto L_005DF77E;
      case 0x005DF798u: goto L_005DF798;
      case 0x005DF7A4u: goto L_005DF7A4;
      case 0x005DF7B0u: goto L_005DF7B0;
      case 0x005DF7D2u: goto L_005DF7D2;
      case 0x005DF7FEu: goto L_005DF7FE;
      case 0x005DF818u: goto L_005DF818;
      case 0x005DF832u: goto L_005DF832;
      case 0x005DF854u: goto L_005DF854;
      case 0x005DF86Au: goto L_005DF86A;
      case 0x005DF880u: goto L_005DF880;
      case 0x005DF896u: goto L_005DF896;
      case 0x005DF8ACu: goto L_005DF8AC;
      case 0x005DF8C2u: goto L_005DF8C2;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_005DF970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF970u);

L_005DF970:
    PUSH32(esp, ebp); /* 0x005DF970: push ebp */
    ebp = esp; /* 0x005DF971: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x005DF973: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005DF976: push esi */
    esi = ecx; /* 0x005DF977: mov esi, ecx */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x005DF979: push dword ptr [edx + 4] */
    MEM8(edx + 0x38) = (uint8_t)(1); /* 0x005DF97C: mov byte ptr [edx + 0x38], 1 */
    MEM32(edx + 0x3C) = 0; /* 0x005DF980: mov dword ptr [edx + 0x3c], 0 */
    ecx = MEM32(esi + 0xCB2C); /* 0x005DF987: mov ecx, dword ptr [esi + 0xcb2c] */
    eax = MEM32(ecx); /* 0x005DF98D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x005DF98F: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0xCB32) = (uint8_t)(1); /* 0x005DF992: mov byte ptr [esi + 0xcb32], 1 */
    esi = POP32_VAL(esp); /* 0x005DF999: pop esi */
    ebp = POP32_VAL(esp); /* 0x005DF99A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DF99B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DF9A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DF9A0u);

L_005DF9A0:
    PUSH32(esp, esi); /* 0x005DF9A0: push esi */
    esi = ecx; /* 0x005DF9A1: mov esi, ecx */
    /* cmp MEM8(esi + 0xCB32), 0 */ /* 0x005DF9A3: cmp byte ptr [esi + 0xcb32], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xCB32)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DFBB9; /* 0x005DF9AA: je 0x5dfbb9 */
L_005DF9B0:
    ecx = MEM32(esi + 0xCB2C); /* 0x005DF9B0: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCB6C)); /* 0x005DF9B6: push dword ptr [esi + 0xcb6c] */
    PUSH32(esp, 0x007F62D4u); /* 0x005DF9BC: push 0x7f62d4 */
    eax = MEM32(ecx); /* 0x005DF9C1: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DF9C3: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DF9C6: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCB70)); /* 0x005DF9CC: push dword ptr [esi + 0xcb70] */
    PUSH32(esp, 0x007F63E8u); /* 0x005DF9D2: push 0x7f63e8 */
    eax = MEM32(ecx); /* 0x005DF9D7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DF9D9: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DF9DC: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCB74)); /* 0x005DF9E2: push dword ptr [esi + 0xcb74] */
    PUSH32(esp, 0x007F63F8u); /* 0x005DF9E8: push 0x7f63f8 */
    eax = MEM32(ecx); /* 0x005DF9ED: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DF9EF: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DF9F2: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCB78)); /* 0x005DF9F8: push dword ptr [esi + 0xcb78] */
    PUSH32(esp, 0x007F6408u); /* 0x005DF9FE: push 0x7f6408 */
    eax = MEM32(ecx); /* 0x005DFA03: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DFA05: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFA08: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCB7C)); /* 0x005DFA0E: push dword ptr [esi + 0xcb7c] */
    PUSH32(esp, 0x007F6418u); /* 0x005DFA14: push 0x7f6418 */
    eax = MEM32(ecx); /* 0x005DFA19: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DFA1B: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFA1E: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCB80)); /* 0x005DFA24: push dword ptr [esi + 0xcb80] */
    PUSH32(esp, 0x007F6424u); /* 0x005DFA2A: push 0x7f6424 */
    eax = MEM32(ecx); /* 0x005DFA2F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DFA31: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFA34: mov ecx, dword ptr [esi + 0xcb2c] */
    _xmm[0].u64[0] = MEM32(esi + 0xCBAC); _xmm[0].u64[1] = 0; /* 0x005DFA3A: movss xmm0, dword ptr [esi + 0xcbac] */
    PUSH32(esp, ecx); /* 0x005DFA42: push ecx */
    MEM32(esp) = _xmm[0].u32[0]; /* 0x005DFA43: movss dword ptr [esp], xmm0 */
    eax = MEM32(ecx); /* 0x005DFA48: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x007F6430u); /* 0x005DFA4A: push 0x7f6430 */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x005DFA4F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFA52: mov ecx, dword ptr [esi + 0xcb2c] */
    _xmm[0].u64[0] = MEM32(esi + 0xCBB0); _xmm[0].u64[1] = 0; /* 0x005DFA58: movss xmm0, dword ptr [esi + 0xcbb0] */
    PUSH32(esp, ecx); /* 0x005DFA60: push ecx */
    MEM32(esp) = _xmm[0].u32[0]; /* 0x005DFA61: movss dword ptr [esp], xmm0 */
    eax = MEM32(ecx); /* 0x005DFA66: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x007F643Cu); /* 0x005DFA68: push 0x7f643c */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x005DFA6D: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    _xmm[0].u64[0] = MEM32(esi + 0xCB34); _xmm[0].u64[1] = 0; /* 0x005DFA70: movss xmm0, dword ptr [esi + 0xcb34] */
    _flag_a = SSE_COMI(_xmm[0].f32[0], sse_f32(MEM32(0x808C40))); _flag_b = 0; _cf = _flag_a & 1u; /* 0x005DFA78: ucomiss xmm0, dword ptr [0x808c40] */
    _flag_k = FK_EFLAGS;
    SET_HI8(eax, (recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 0xD5u) | 2u); /* 0x005DFA7F: lahf  */
    /* test HI8(eax), 0x44u */ /* 0x005DFA80: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_005DFAB1; /* 0x005DFA83: jp 0x5dfab1 */
L_005DFA85:
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFA85: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCB88)); /* 0x005DFA8B: push dword ptr [esi + 0xcb88] */
    PUSH32(esp, 0x007F633Cu); /* 0x005DFA91: push 0x7f633c */
    eax = MEM32(ecx); /* 0x005DFA96: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DFA98: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFA9B: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCB84)); /* 0x005DFAA1: push dword ptr [esi + 0xcb84] */
    PUSH32(esp, 0x007F6448u); /* 0x005DFAA7: push 0x7f6448 */
    eax = MEM32(ecx); /* 0x005DFAAC: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DFAAE: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_005DFAB1:
    eax = MEM32(esi + 0xCB90); /* 0x005DFAB1: mov eax, dword ptr [esi + 0xcb90] */
    /* test eax, eax */ /* 0x005DFAB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DFAC5; /* 0x005DFAB9: jne 0x5dfac5 */
L_005DFABB:
    _xmm[1].u64[0] = MEM32(0x808CB0); _xmm[1].u64[1] = 0; /* 0x005DFABB: movss xmm1, dword ptr [0x808cb0] */
    goto L_005DFADB; /* 0x005DFAC3: jmp 0x5dfadb */
L_005DFAC5:
    _xmm[1].u64[0] = (uint32_t)(MEM32(esi + 0xCB8C)); _xmm[1].u64[1] = 0; /* 0x005DFAC5: movd xmm1, dword ptr [esi + 0xcb8c] */
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x005DFACD: movd xmm0, eax */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].f32[_k] = (float)_s.i32[_k]; } /* 0x005DFAD1: cvtdq2ps xmm1, xmm1 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].f32[_k] = (float)_s.i32[_k]; } /* 0x005DFAD4: cvtdq2ps xmm0, xmm0 */
    { float _s = _xmm[0].f32[0]; _xmm[1].f32[0] = (float)(_xmm[1].f32[0] / _s); } /* 0x005DFAD7: divss xmm1, xmm0 */
L_005DFADB:
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFADB: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, ecx); /* 0x005DFAE1: push ecx */
    MEM32(esp) = _xmm[1].u32[0]; /* 0x005DFAE2: movss dword ptr [esp], xmm1 */
    PUSH32(esp, 0x007F6364u); /* 0x005DFAE7: push 0x7f6364 */
    eax = MEM32(ecx); /* 0x005DFAEC: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x005DFAEE: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFAF1: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCB8C)); /* 0x005DFAF7: push dword ptr [esi + 0xcb8c] */
    PUSH32(esp, 0x007F6378u); /* 0x005DFAFD: push 0x7f6378 */
    eax = MEM32(ecx); /* 0x005DFB02: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DFB04: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFB07: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCB90)); /* 0x005DFB0D: push dword ptr [esi + 0xcb90] */
    PUSH32(esp, 0x007F6384u); /* 0x005DFB13: push 0x7f6384 */
    eax = MEM32(ecx); /* 0x005DFB18: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DFB1A: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFB1D: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCB94)); /* 0x005DFB23: push dword ptr [esi + 0xcb94] */
    PUSH32(esp, 0x007F6390u); /* 0x005DFB29: push 0x7f6390 */
    eax = MEM32(ecx); /* 0x005DFB2E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DFB30: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFB33: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCB98)); /* 0x005DFB39: push dword ptr [esi + 0xcb98] */
    PUSH32(esp, 0x007F63A8u); /* 0x005DFB3F: push 0x7f63a8 */
    eax = MEM32(ecx); /* 0x005DFB44: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DFB46: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFB49: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCB9C)); /* 0x005DFB4F: push dword ptr [esi + 0xcb9c] */
    PUSH32(esp, 0x007F63C0u); /* 0x005DFB55: push 0x7f63c0 */
    eax = MEM32(ecx); /* 0x005DFB5A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DFB5C: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFB5F: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCBA0)); /* 0x005DFB65: push dword ptr [esi + 0xcba0] */
    PUSH32(esp, 0x007F63D0u); /* 0x005DFB6B: push 0x7f63d0 */
    eax = MEM32(ecx); /* 0x005DFB70: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DFB72: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFB75: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCBA4)); /* 0x005DFB7B: push dword ptr [esi + 0xcba4] */
    PUSH32(esp, 0x007F63DCu); /* 0x005DFB81: push 0x7f63dc */
    eax = MEM32(ecx); /* 0x005DFB86: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DFB88: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFB8B: mov ecx, dword ptr [esi + 0xcb2c] */
    PUSH32(esp, MEM32(esi + 0xCBA8)); /* 0x005DFB91: push dword ptr [esi + 0xcba8] */
    PUSH32(esp, 0x007F6450u); /* 0x005DFB97: push 0x7f6450 */
    eax = MEM32(ecx); /* 0x005DFB9C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x005DFB9E: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xCB2C); /* 0x005DFBA1: mov ecx, dword ptr [esi + 0xcb2c] */
    eax = MEM32(ecx); /* 0x005DFBA7: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x28); /* 0x005DFBA9: mov eax, dword ptr [eax + 0x28] */
    RECOMP_ICALL(eax); /* 0x005DFBAC: call eax */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005DFBAE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x005DFBB0: sete al */
    MEM8(esi + 0xCB32) = (uint8_t)(LO8(eax)); /* 0x005DFBB3: mov byte ptr [esi + 0xcb32], al */
L_005DFBB9:
    esi = POP32_VAL(esp); /* 0x005DFBB9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005DFBBA: ret  */
    RECOMP_REGS_OUT();
}

void sub_005DFBC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DFBC0u);

L_005DFBC0:
    PUSH32(esp, ebp); /* 0x005DFBC0: push ebp */
    ebp = esp; /* 0x005DFBC1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005DFBC3: push ecx */
    PUSH32(esp, ebx); /* 0x005DFBC4: push ebx */
    ebx = ecx; /* 0x005DFBC5: mov ebx, ecx */
    /* cmp MEM32(ebx + 0xCB2C), 0 */ /* 0x005DFBC7: cmp dword ptr [ebx + 0xcb2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xCB2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005DFEF9; /* 0x005DFBCE: je 0x5dfef9 */
L_005DFBD4:
    ecx = MEM32(ebp + 0x8); /* 0x005DFBD4: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0xCB20); /* 0x005DFBD7: mov eax, dword ptr [ebx + 0xcb20] */
    /* cmp eax, MEM32(ecx) */ /* 0x005DFBDD: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DFEF9; /* 0x005DFBDF: jne 0x5dfef9 */
L_005DFBE5:
    eax = MEM32(ebx + 0xCB24); /* 0x005DFBE5: mov eax, dword ptr [ebx + 0xcb24] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x005DFBEB: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DFEF9; /* 0x005DFBEE: jne 0x5dfef9 */
L_005DFBF4:
    /* cmp MEM32(ecx + 0x8), 1 */ /* 0x005DFBF4: cmp dword ptr [ecx + 8], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DFEF9; /* 0x005DFBF8: jne 0x5dfef9 */
L_005DFBFE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DFBFE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebx + 0xCB31) = (uint8_t)(1); /* 0x005DFC00: mov byte ptr [ebx + 0xcb31], 1 */
    MEM8(ebx + 0xCBBE) = (uint8_t)(1); /* 0x005DFC07: mov byte ptr [ebx + 0xcbbe], 1 */
    eax = 0x78787879u; /* 0x005DFC0E: mov eax, 0x78787879 */
    MEM32(ebp + 0x8) = ecx; /* 0x005DFC13: mov dword ptr [ebp + 8], ecx */
    ecx = MEM32(0x91FFBC); /* 0x005DFC16: mov ecx, dword ptr [0x91ffbc] */
    PUSH32(esp, esi); /* 0x005DFC1C: push esi */
    esi = MEM32(0x91FFB8); /* 0x005DFC1D: mov esi, dword ptr [0x91ffb8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005DFC23: sub ecx, esi */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005DFC25: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005DFC27: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x005DFC2A: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DFC2C: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DFC2C: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DFC2F: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005DFD05; /* 0x005DFC31: je 0x5dfd05 */
L_005DFC37:
    PUSH32(esp, edi); /* 0x005DFC37: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x005DFC38: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ebx; /* 0x005DFC3A: lea ebx, [ebx] */
L_005DFC40:
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFC40: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = esi + 0x38; /* 0x005DFC46: lea eax, [esi + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005DFC49: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005DFC4B: push eax */
    PUSH32(esp, MEM32(edi + esi + 0x4)); /* 0x005DFC4C: push dword ptr [edi + esi + 4] */
    edx = MEM32(ecx); /* 0x005DFC50: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x005DFC52: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFC55: mov ecx, dword ptr [ebx + 0xcb2c] */
    PUSH32(esp, 0x007CD6C8u); /* 0x005DFC5B: push 0x7cd6c8 */
    PUSH32(esp, MEM32(edi + esi + 0x4)); /* 0x005DFC60: push dword ptr [edi + esi + 4] */
    eax = MEM32(ecx); /* 0x005DFC64: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x005DFC66: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005DFC69: mov edx, eax */
    /* cmp MEM8(edx), 0 */ /* 0x005DFC6B: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DFC74; /* 0x005DFC6E: jne 0x5dfc74 */
L_005DFC70:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DFC70: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DFC8A; /* 0x005DFC72: jmp 0x5dfc8a */
L_005DFC74:
    ecx = edx; /* 0x005DFC74: mov ecx, edx */
    eax = ecx + 0x1; /* 0x005DFC76: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x4)) = eax; /* 0x005DFC79: mov dword ptr [ebp - 4], eax */
    esp = esp; /* 0x005DFC7C: lea esp, [esp] */
L_005DFC80:
    SET_LO8(eax, MEM8(ecx)); /* 0x005DFC80: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x005DFC82: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x005DFC83: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DFC80; /* 0x005DFC85: jne 0x5dfc80 */
L_005DFC87:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x005DFC87: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
L_005DFC8A:
    PUSH32(esp, ecx); /* 0x005DFC8A: push ecx */
    ecx = esi + 0x8; /* 0x005DFC8B: lea ecx, [esi + 8] */
    PUSH32(esp, edx); /* 0x005DFC8E: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x005DFC8F: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_0040A2F0); /* 0x005DFC91: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFC96: mov ecx, dword ptr [ebx + 0xcb2c] */
    PUSH32(esp, 0x007F6460u); /* 0x005DFC9C: push 0x7f6460 */
    PUSH32(esp, MEM32(edi + esi + 0x4)); /* 0x005DFCA1: push dword ptr [edi + esi + 4] */
    eax = MEM32(ecx); /* 0x005DFCA5: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x005DFCA7: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x005DFCAA: mov edx, eax */
    /* cmp MEM8(edx), 0 */ /* 0x005DFCAC: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DFCB5; /* 0x005DFCAF: jne 0x5dfcb5 */
L_005DFCB1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DFCB1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DFCCA; /* 0x005DFCB3: jmp 0x5dfcca */
L_005DFCB5:
    ecx = edx; /* 0x005DFCB5: mov ecx, edx */
    eax = ecx + 0x1; /* 0x005DFCB7: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x4)) = eax; /* 0x005DFCBA: mov dword ptr [ebp - 4], eax */
    ecx = ecx; /* 0x005DFCBD: lea ecx, [ecx] */
L_005DFCC0:
    SET_LO8(eax, MEM8(ecx)); /* 0x005DFCC0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x005DFCC2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x005DFCC3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DFCC0; /* 0x005DFCC5: jne 0x5dfcc0 */
L_005DFCC7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x005DFCC7: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
L_005DFCCA:
    PUSH32(esp, ecx); /* 0x005DFCCA: push ecx */
    ecx = esi + 0x20; /* 0x005DFCCB: lea ecx, [esi + 0x20] */
    PUSH32(esp, edx); /* 0x005DFCCE: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x005DFCCF: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_0040A2F0); /* 0x005DFCD1: call 0x40a2f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x91FFBC); /* 0x005DFCD6: mov ecx, dword ptr [0x91ffbc] */
    eax = 0x78787879u; /* 0x005DFCDC: mov eax, 0x78787879 */
    esi = MEM32(0x91FFB8); /* 0x005DFCE1: mov esi, dword ptr [0x91ffb8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x44u; /* 0x005DFCE7: add edi, 0x44 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x005DFCEA: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005DFCED: sub ecx, esi */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005DFCEF: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005DFCF1: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x005DFCF4: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005DFCF6: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005DFCF6: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005DFCF9: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x005DFCFB: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005DFC40; /* 0x005DFCFE: jb 0x5dfc40 */
L_005DFD04:
    edi = POP32_VAL(esp); /* 0x005DFD04: pop edi */
L_005DFD05:
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFD05: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCB6C; /* 0x005DFD0B: lea eax, [ebx + 0xcb6c] */
    PUSH32(esp, eax); /* 0x005DFD11: push eax */
    PUSH32(esp, 0x007F62D4u); /* 0x005DFD12: push 0x7f62d4 */
    edx = MEM32(ecx); /* 0x005DFD17: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFD19: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFD1C: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCB70; /* 0x005DFD22: lea eax, [ebx + 0xcb70] */
    PUSH32(esp, eax); /* 0x005DFD28: push eax */
    PUSH32(esp, 0x007F63E8u); /* 0x005DFD29: push 0x7f63e8 */
    edx = MEM32(ecx); /* 0x005DFD2E: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFD30: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFD33: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCB74; /* 0x005DFD39: lea eax, [ebx + 0xcb74] */
    PUSH32(esp, eax); /* 0x005DFD3F: push eax */
    PUSH32(esp, 0x007F63F8u); /* 0x005DFD40: push 0x7f63f8 */
    edx = MEM32(ecx); /* 0x005DFD45: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFD47: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFD4A: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCB78; /* 0x005DFD50: lea eax, [ebx + 0xcb78] */
    PUSH32(esp, eax); /* 0x005DFD56: push eax */
    PUSH32(esp, 0x007F6408u); /* 0x005DFD57: push 0x7f6408 */
    edx = MEM32(ecx); /* 0x005DFD5C: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFD5E: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFD61: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCB7C; /* 0x005DFD67: lea eax, [ebx + 0xcb7c] */
    PUSH32(esp, eax); /* 0x005DFD6D: push eax */
    PUSH32(esp, 0x007F6418u); /* 0x005DFD6E: push 0x7f6418 */
    edx = MEM32(ecx); /* 0x005DFD73: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFD75: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFD78: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCB80; /* 0x005DFD7E: lea eax, [ebx + 0xcb80] */
    PUSH32(esp, eax); /* 0x005DFD84: push eax */
    PUSH32(esp, 0x007F6424u); /* 0x005DFD85: push 0x7f6424 */
    edx = MEM32(ecx); /* 0x005DFD8A: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFD8C: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFD8F: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCBAC; /* 0x005DFD95: lea eax, [ebx + 0xcbac] */
    PUSH32(esp, eax); /* 0x005DFD9B: push eax */
    PUSH32(esp, 0x007F6430u); /* 0x005DFD9C: push 0x7f6430 */
    edx = MEM32(ecx); /* 0x005DFDA1: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x005DFDA3: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFDA6: mov ecx, dword ptr [ebx + 0xcb2c] */
    esi = ebx + 0xCBB0; /* 0x005DFDAC: lea esi, [ebx + 0xcbb0] */
    PUSH32(esp, esi); /* 0x005DFDB2: push esi */
    PUSH32(esp, 0x007F643Cu); /* 0x005DFDB3: push 0x7f643c */
    eax = MEM32(ecx); /* 0x005DFDB8: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x005DFDBA: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFDBD: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCBB4; /* 0x005DFDC3: lea eax, [ebx + 0xcbb4] */
    PUSH32(esp, eax); /* 0x005DFDC9: push eax */
    PUSH32(esp, 0x007F6364u); /* 0x005DFDCA: push 0x7f6364 */
    edx = MEM32(ecx); /* 0x005DFDCF: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x005DFDD1: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFDD4: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCB88; /* 0x005DFDDA: lea eax, [ebx + 0xcb88] */
    PUSH32(esp, eax); /* 0x005DFDE0: push eax */
    PUSH32(esp, 0x007F633Cu); /* 0x005DFDE1: push 0x7f633c */
    edx = MEM32(ecx); /* 0x005DFDE6: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFDE8: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFDEB: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCB84; /* 0x005DFDF1: lea eax, [ebx + 0xcb84] */
    PUSH32(esp, eax); /* 0x005DFDF7: push eax */
    PUSH32(esp, 0x007F6448u); /* 0x005DFDF8: push 0x7f6448 */
    edx = MEM32(ecx); /* 0x005DFDFD: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFDFF: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFE02: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCB8C; /* 0x005DFE08: lea eax, [ebx + 0xcb8c] */
    PUSH32(esp, eax); /* 0x005DFE0E: push eax */
    PUSH32(esp, 0x007F6378u); /* 0x005DFE0F: push 0x7f6378 */
    edx = MEM32(ecx); /* 0x005DFE14: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFE16: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFE19: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCB90; /* 0x005DFE1F: lea eax, [ebx + 0xcb90] */
    PUSH32(esp, eax); /* 0x005DFE25: push eax */
    PUSH32(esp, 0x007F6384u); /* 0x005DFE26: push 0x7f6384 */
    edx = MEM32(ecx); /* 0x005DFE2B: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFE2D: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFE30: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCB94; /* 0x005DFE36: lea eax, [ebx + 0xcb94] */
    edx = MEM32(ecx); /* 0x005DFE3C: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x005DFE3E: push eax */
    PUSH32(esp, 0x007F6390u); /* 0x005DFE3F: push 0x7f6390 */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFE44: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFE47: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCB98; /* 0x005DFE4D: lea eax, [ebx + 0xcb98] */
    PUSH32(esp, eax); /* 0x005DFE53: push eax */
    PUSH32(esp, 0x007F63A8u); /* 0x005DFE54: push 0x7f63a8 */
    edx = MEM32(ecx); /* 0x005DFE59: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFE5B: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFE5E: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCB9C; /* 0x005DFE64: lea eax, [ebx + 0xcb9c] */
    PUSH32(esp, eax); /* 0x005DFE6A: push eax */
    PUSH32(esp, 0x007F63C0u); /* 0x005DFE6B: push 0x7f63c0 */
    edx = MEM32(ecx); /* 0x005DFE70: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFE72: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFE75: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCBA0; /* 0x005DFE7B: lea eax, [ebx + 0xcba0] */
    PUSH32(esp, eax); /* 0x005DFE81: push eax */
    PUSH32(esp, 0x007F63D0u); /* 0x005DFE82: push 0x7f63d0 */
    edx = MEM32(ecx); /* 0x005DFE87: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFE89: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFE8C: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCBA4; /* 0x005DFE92: lea eax, [ebx + 0xcba4] */
    PUSH32(esp, eax); /* 0x005DFE98: push eax */
    PUSH32(esp, 0x007F63DCu); /* 0x005DFE99: push 0x7f63dc */
    edx = MEM32(ecx); /* 0x005DFE9E: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFEA0: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFEA3: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCBA8; /* 0x005DFEA9: lea eax, [ebx + 0xcba8] */
    PUSH32(esp, eax); /* 0x005DFEAF: push eax */
    PUSH32(esp, 0x007F6450u); /* 0x005DFEB0: push 0x7f6450 */
    edx = MEM32(ecx); /* 0x005DFEB5: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFEB7: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xCB2C); /* 0x005DFEBA: mov ecx, dword ptr [ebx + 0xcb2c] */
    eax = ebx + 0xCBB8; /* 0x005DFEC0: lea eax, [ebx + 0xcbb8] */
    PUSH32(esp, eax); /* 0x005DFEC6: push eax */
    PUSH32(esp, 0x007F6468u); /* 0x005DFEC7: push 0x7f6468 */
    edx = MEM32(ecx); /* 0x005DFECC: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x005DFECE: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)sse_cvt_i32((double)sse_f32(MEM32(esi)), 1); /* 0x005DFED1: cvttss2si eax, dword ptr [esi] */
    esi = POP32_VAL(esp); /* 0x005DFED5: pop esi */
    /* test eax, eax */ /* 0x005DFED6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_005DFEE9; /* 0x005DFED8: jns 0x5dfee9 */
L_005DFEDA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005DFEDA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xCB68) = eax; /* 0x005DFEDC: mov dword ptr [ebx + 0xcb68], eax */
    ebx = POP32_VAL(esp); /* 0x005DFEE2: pop ebx */
    esp = ebp; /* 0x005DFEE3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DFEE5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DFEE6: ret 4 */
L_005DFEE9:
    ecx = 0x7FFFFFFFu; /* 0x005DFEE9: mov ecx, 0x7fffffff */
    /* cmp eax, ecx */ /* 0x005DFEEE: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { eax = ecx; } /* 0x005DFEF0: cmovg eax, ecx */
    MEM32(ebx + 0xCB68) = eax; /* 0x005DFEF3: mov dword ptr [ebx + 0xcb68], eax */
L_005DFEF9:
    ebx = POP32_VAL(esp); /* 0x005DFEF9: pop ebx */
    esp = ebp; /* 0x005DFEFA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DFEFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DFEFD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DFF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DFF00u);

L_005DFF00:
    PUSH32(esp, ebp); /* 0x005DFF00: push ebp */
    ebp = esp; /* 0x005DFF01: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005DFF03: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x005DFF06: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x005DFF09: sub esp, 0x1c */
    _flag_k = FK_CMP;
    edx = MEM32(ecx + 0xCB24); /* 0x005DFF0C: mov edx, dword ptr [ecx + 0xcb24] */
    PUSH32(esp, esi); /* 0x005DFF12: push esi */
    esi = MEM32(ecx + 0xCB20); /* 0x005DFF13: mov esi, dword ptr [ecx + 0xcb20] */
    /* cmp esi, MEM32(eax) */ /* 0x005DFF19: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DFF5F; /* 0x005DFF1B: jne 0x5dff5f */
L_005DFF1D:
    /* cmp edx, MEM32(eax + 0x4) */ /* 0x005DFF1D: cmp edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DFF5F; /* 0x005DFF20: jne 0x5dff5f */
L_005DFF22:
    /* cmp MEM32(eax + 0x8), 8 */ /* 0x005DFF22: cmp dword ptr [eax + 8], 8 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005DFF5F; /* 0x005DFF26: jne 0x5dff5f */
L_005DFF28:
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) & 0xFF0FFFFFu; /* 0x005DFF28: and dword ptr [esp + 0x18], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp + 0x8; /* 0x005DFF30: lea eax, [esp + 8] */
    MEM8(esp + 0x1B) = (uint8_t)(0); /* 0x005DFF34: mov byte ptr [esp + 0x1b], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) & 0xFFF00000u; /* 0x005DFF39: and dword ptr [esp + 0x18], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DFF41: push eax */
    MEM32(esp + 0x18) = 0; /* 0x005DFF42: mov dword ptr [esp + 0x18], 0 */
    MEM32(esp + 0x14) = 1; /* 0x005DFF4A: mov dword ptr [esp + 0x14], 1 */
    MEM32(esp + 0xC) = esi; /* 0x005DFF52: mov dword ptr [esp + 0xc], esi */
    MEM32(esp + 0x10) = edx; /* 0x005DFF56: mov dword ptr [esp + 0x10], edx */
    RECOMP_CALL(sub_005DFBC0); /* 0x005DFF5A: call 0x5dfbc0 */
    RECOMP_FLAGS_IN();
L_005DFF5F:
    esi = POP32_VAL(esp); /* 0x005DFF5F: pop esi */
    esp = ebp; /* 0x005DFF60: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005DFF62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005DFF63: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005DFF70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005DFF70u);

L_005DFF70:
    PUSH32(esp, ebp); /* 0x005DFF70: push ebp */
    ebp = esp; /* 0x005DFF71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005DFF73: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005DFF76: push -1 */
    PUSH32(esp, 0x007AFFD0u); /* 0x005DFF78: push 0x7affd0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005DFF7D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005DFF83: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x005DFF84: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005DFF87: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005DFF8C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x20) = eax; /* 0x005DFF8E: mov dword ptr [esp + 0x20], eax */
    PUSH32(esp, esi); /* 0x005DFF92: push esi */
    eax = MEM32(0x855000); /* 0x005DFF93: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005DFF98: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005DFF9A: push eax */
    eax = esp + 0x30; /* 0x005DFF9B: lea eax, [esp + 0x30] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005DFF9F: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0x8); /* 0x005DFFA5: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0xCB20); /* 0x005DFFA8: mov eax, dword ptr [ecx + 0xcb20] */
    ecx = MEM32(ecx + 0xCB24); /* 0x005DFFAE: mov ecx, dword ptr [ecx + 0xcb24] */
    /* cmp eax, MEM32(esi) */ /* 0x005DFFB4: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E00AB; /* 0x005DFFB6: jne 0x5e00ab */
L_005DFFBC:
    /* cmp ecx, MEM32(esi + 0x4) */ /* 0x005DFFBC: cmp ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E00AB; /* 0x005DFFBF: jne 0x5e00ab */
L_005DFFC5:
    /* cmp MEM32(esi + 0x90), 0 */ /* 0x005DFFC5: cmp dword ptr [esi + 0x90], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x90)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E00AB; /* 0x005DFFCC: jne 0x5e00ab */
L_005DFFD2:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005DFFD2: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005DFFD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DFFE0; /* 0x005DFFDA: jne 0x5dffe0 */
L_005DFFDC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005DFFDC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005DFFFA; /* 0x005DFFDE: jmp 0x5dfffa */
L_005DFFE0:
    ecx = MEM32(0x927AFC); /* 0x005DFFE0: mov ecx, dword ptr [0x927afc] */
    /* test ecx, ecx */ /* 0x005DFFE6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005DFFFA; /* 0x005DFFE8: jne 0x5dfffa */
L_005DFFEA:
    ecx = 0x00927AE8u; /* 0x005DFFEA: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005DFFEF: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927AFC); /* 0x005DFFF4: mov ecx, dword ptr [0x927afc] */
L_005DFFFA:
    edx = MEM32(ecx); /* 0x005DFFFA: mov edx, dword ptr [ecx] */
    eax = esi + 0x9; /* 0x005DFFFC: lea eax, [esi + 9] */
    PUSH32(esp, 0x007CD6C8u); /* 0x005DFFFF: push 0x7cd6c8 */
    PUSH32(esp, eax); /* 0x005E0004: push eax */
    RECOMP_ICALL(MEM32(edx + 0x30)); /* 0x005E0005: call dword ptr [edx + 0x30] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005E0008: push eax */
    PUSH32(esp, 0); /* 0x005E0009: push 0 */
    PUSH32(esp, 0x007F6480u); /* 0x005E000B: push 0x7f6480 */
    PUSH32(esp, 0x007E9864u); /* 0x005E0010: push 0x7e9864 */
    PUSH32(esp, MEM32(0x8759B0)); /* 0x005E0015: push dword ptr [0x8759b0] */
    RECOMP_CALL(sub_0066F780); /* 0x005E001B: call 0x66f780 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x005E0020: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = esp + 0x10; /* 0x005E0023: lea ecx, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x005E0027: push eax */
    RECOMP_CALL(sub_00409FA0); /* 0x005E0028: call 0x409fa0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x38) = 0; /* 0x005E002D: mov dword ptr [esp + 0x38], 0 */
    /* cmp MEM32(0x871984), 0 */ /* 0x005E0035: cmp dword ptr [0x871984], 0 */
    _flag_a = (uint32_t)(MEM32(0x871984)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E007A; /* 0x005E003C: je 0x5e007a */
L_005E003E:
    PUSH32(esp, 0x00FFA800u); /* 0x005E003E: push 0xffa800 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x005E0043: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = esp + 0x2C; /* 0x005E0046: lea eax, [esp + 0x2c] */
    ecx = esp; /* 0x005E004A: mov ecx, esp */
    MEM32(esp + 0x28) = esp; /* 0x005E004C: mov dword ptr [esp + 0x28], esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E0050: push -1 */
    PUSH32(esp, 0); /* 0x005E0052: push 0 */
    MEM32(ecx + 0x14) = 0xFu; /* 0x005E0054: mov dword ptr [ecx + 0x14], 0xf */
    MEM32(ecx + 0x10) = 0; /* 0x005E005B: mov dword ptr [ecx + 0x10], 0 */
    PUSH32(esp, eax); /* 0x005E0062: push eax */
    MEM8(ecx) = (uint8_t)(0); /* 0x005E0063: mov byte ptr [ecx], 0 */
    RECOMP_CALL(sub_0040A030); /* 0x005E0066: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x54) = (uint8_t)(1); /* 0x005E006B: mov byte ptr [esp + 0x54], 1 */
    MEM8(esp + 0x54) = (uint8_t)(0); /* 0x005E0070: mov byte ptr [esp + 0x54], 0 */
    RECOMP_CALL(sub_006644D0); /* 0x005E0075: call 0x6644d0 */
    RECOMP_FLAGS_IN();
L_005E007A:
    MEM32(esp + 0x38) = 0xFFFFFFFFu; /* 0x005E007A: mov dword ptr [esp + 0x38], 0xffffffff */
    /* cmp MEM32(esp + 0x24), 0x10u */ /* 0x005E0082: cmp dword ptr [esp + 0x24], 0x10 */
    _flag_a = (uint32_t)(MEM32(esp + 0x24)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E0096; /* 0x005E0087: jb 0x5e0096 */
L_005E0089:
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x005E0089: push dword ptr [esp + 0x10] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E008D: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E0093: add esp, 4 */
    _flag_k = FK_ADD;
L_005E0096:
    MEM32(esp + 0x24) = 0xFu; /* 0x005E0096: mov dword ptr [esp + 0x24], 0xf */
    MEM32(esp + 0x20) = 0; /* 0x005E009E: mov dword ptr [esp + 0x20], 0 */
    MEM8(esp + 0x10) = (uint8_t)(0); /* 0x005E00A6: mov byte ptr [esp + 0x10], 0 */
L_005E00AB:
    ecx = MEM32(esp + 0x30); /* 0x005E00AB: mov ecx, dword ptr [esp + 0x30] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E00AF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E00B6: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E00B7: pop esi */
    ecx = MEM32(esp + 0x20); /* 0x005E00B8: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005E00BC: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E00BE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E00C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E00C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E00C6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E00D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E00D0u);

L_005E00D0:
    PUSH32(esp, ebp); /* 0x005E00D0: push ebp */
    ebp = esp; /* 0x005E00D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E00D3: push -1 */
    PUSH32(esp, 0x007B0000u); /* 0x005E00D5: push 0x7b0000 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E00DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E00E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E00E1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E00E4: push ebx */
    PUSH32(esp, esi); /* 0x005E00E5: push esi */
    PUSH32(esp, edi); /* 0x005E00E6: push edi */
    eax = MEM32(0x855000); /* 0x005E00E7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E00EC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E00EE: push eax */
    eax = ebp + (-0xC); /* 0x005E00EF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E00F2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005E00F8: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x005E00FB: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x005E00FD: mov dword ptr [ebp - 0x14], edi */
    MEM32(edi) = 0; /* 0x005E0100: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x005E0106: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x8) = 0; /* 0x005E010D: mov dword ptr [edi + 8], 0 */
    esi = MEM32(ebp + 0x8); /* 0x005E0114: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x005E0117: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x005E011A: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x005E011C: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    PUSH32(esp, eax); /* 0x005E011F: push eax */
    RECOMP_CALL(sub_0046ECF0); /* 0x005E0120: call 0x46ecf0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E0125: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E015A; /* 0x005E0127: je 0x5e015a */
L_005E0129:
    MEM32(ebp + (-0x4)) = 0; /* 0x005E0129: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(esi + 0x4); /* 0x005E0130: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x005E0133: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x005E0135: sub ecx, eax */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x005E0137: sar ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 2u);
    esi = ecx * 4; /* 0x005E013A: lea esi, [ecx*4] */
    PUSH32(esp, esi); /* 0x005E0141: push esi */
    PUSH32(esp, eax); /* 0x005E0142: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x005E0143: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC68C)); /* 0x005E0145: call dword ptr [0x7cc68c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E014B: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005E014E: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x005E0150: mov dword ptr [edi + 4], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E0153: mov dword ptr [ebp - 4], 0xffffffff */
L_005E015A:
    eax = edi; /* 0x005E015A: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E015C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E015F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E0166: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E0167: pop edi */
    esi = POP32_VAL(esp); /* 0x005E0168: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E0169: pop ebx */
    esp = ebp; /* 0x005E016A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E016C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E016D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E0170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0170u);

L_005E0170:
    ecx = MEM32(ebp + (-0x14)); /* 0x005E0170: mov ecx, dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_00419790); /* 0x005E0173: call 0x419790 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005E0178: push 0 */
    PUSH32(esp, 0); /* 0x005E017A: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005E017C: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005E0181u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005E0190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0190u);

L_005E0190:
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005E0190: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F6508u; /* 0x005E0194: mov dword ptr [ecx], 0x7f6508 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E01A4; /* 0x005E019A: je 0x5e01a4 */
L_005E019C:
    PUSH32(esp, ecx); /* 0x005E019C: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005E019D: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x005E01A3: pop ecx */
L_005E01A4:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E01A4: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E01B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E01B0u);

L_005E01B0:
    eax = 0x98u; /* 0x005E01B0: mov eax, 0x98 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E01B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E01C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E01C0u);

L_005E01C0:
    PUSH32(esp, ebp); /* 0x005E01C0: push ebp */
    ebp = esp; /* 0x005E01C1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005E01C3: push esi */
    PUSH32(esp, edi); /* 0x005E01C4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x005E01C5: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x005E01C8: mov esi, ecx */
    /* cmp esi, edi */ /* 0x005E01CA: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E0201; /* 0x005E01CC: je 0x5e0201 */
L_005E01CE:
    eax = MEM32(esi); /* 0x005E01CE: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005E01D0: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_005E0830); /* 0x005E01D3: call 0x5e0830 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005E01D8: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = eax; /* 0x005E01DA: mov dword ptr [eax + 4], eax */
    eax = MEM32(esi); /* 0x005E01DD: mov eax, dword ptr [esi] */
    MEM32(eax) = eax; /* 0x005E01DF: mov dword ptr [eax], eax */
    eax = MEM32(esi); /* 0x005E01E1: mov eax, dword ptr [esi] */
    MEM32(eax + 0x8) = eax; /* 0x005E01E3: mov dword ptr [eax + 8], eax */
    ecx = MEM32(esi); /* 0x005E01E6: mov ecx, dword ptr [esi] */
    MEM32(esi + 0x4) = 0; /* 0x005E01E8: mov dword ptr [esi + 4], 0 */
    eax = MEM32(edi); /* 0x005E01EF: mov eax, dword ptr [edi] */
    MEM32(esi) = eax; /* 0x005E01F1: mov dword ptr [esi], eax */
    MEM32(edi) = ecx; /* 0x005E01F3: mov dword ptr [edi], ecx */
    ecx = MEM32(esi + 0x4); /* 0x005E01F5: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(edi + 0x4); /* 0x005E01F8: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x4) = eax; /* 0x005E01FB: mov dword ptr [esi + 4], eax */
    MEM32(edi + 0x4) = ecx; /* 0x005E01FE: mov dword ptr [edi + 4], ecx */
L_005E0201:
    edi = POP32_VAL(esp); /* 0x005E0201: pop edi */
    eax = esi; /* 0x005E0202: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005E0204: pop esi */
    ebp = POP32_VAL(esp); /* 0x005E0205: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E0206: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E0210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0210u);

L_005E0210:
    PUSH32(esp, ebp); /* 0x005E0210: push ebp */
    ebp = esp; /* 0x005E0211: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x005E0213: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x005E0214: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005E0217: push esi */
    PUSH32(esp, edi); /* 0x005E0218: push edi */
    PUSH32(esp, ebx); /* 0x005E0219: push ebx */
    edi = ecx; /* 0x005E021A: mov edi, ecx */
    RECOMP_CALL(sub_005E04A0); /* 0x005E021C: call 0x5e04a0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005E0221: mov esi, eax */
    /* cmp esi, MEM32(edi) */ /* 0x005E0223: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E023F; /* 0x005E0225: je 0x5e023f */
L_005E0227:
    eax = esi + 0x10; /* 0x005E0227: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005E022A: push eax */
    PUSH32(esp, ebx); /* 0x005E022B: push ebx */
    RECOMP_CALL(sub_005E0380); /* 0x005E022C: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E0231: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E023F; /* 0x005E0233: jne 0x5e023f */
L_005E0235:
    edi = POP32_VAL(esp); /* 0x005E0235: pop edi */
    eax = esi + 0x28; /* 0x005E0236: lea eax, [esi + 0x28] */
    esi = POP32_VAL(esp); /* 0x005E0239: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E023A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005E023B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E023C: ret 4 */
L_005E023F:
    PUSH32(esp, ecx); /* 0x005E023F: push ecx */
    eax = ebp + 0x8; /* 0x005E0240: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = ebx; /* 0x005E0243: mov dword ptr [ebp + 8], ebx */
    PUSH32(esp, eax); /* 0x005E0246: push eax */
    PUSH32(esp, ecx); /* 0x005E0247: push ecx */
    ecx = edi; /* 0x005E0248: mov ecx, edi */
    RECOMP_CALL(sub_005E0C80); /* 0x005E024A: call 0x5e0c80 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005E024F: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005E0250: add eax, 0x10 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x005E0253: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E0255: push eax */
    PUSH32(esp, esi); /* 0x005E0256: push esi */
    eax = ebp + 0x8; /* 0x005E0257: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x005E025A: push eax */
    RECOMP_CALL(sub_005E0D10); /* 0x005E025B: call 0x5e0d10 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005E0260: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x005E0263: pop edi */
    esi = POP32_VAL(esp); /* 0x005E0264: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x28u; /* 0x005E0265: add eax, 0x28 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x005E0268: pop ebx */
    ebp = POP32_VAL(esp); /* 0x005E0269: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E026A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E0270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0270u);

L_005E0270:
    PUSH32(esp, ebp); /* 0x005E0270: push ebp */
    ebp = esp; /* 0x005E0271: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E0273: push -1 */
    PUSH32(esp, 0x007B0040u); /* 0x005E0275: push 0x7b0040 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E027A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E0280: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005E0281: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E0284: push ebx */
    PUSH32(esp, esi); /* 0x005E0285: push esi */
    PUSH32(esp, edi); /* 0x005E0286: push edi */
    eax = MEM32(0x855000); /* 0x005E0287: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E028C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E028E: push eax */
    eax = ebp + (-0xC); /* 0x005E028F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E0292: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E0298: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x005E029A: mov dword ptr [ebp - 0x14], edi */
    MEM32(edi) = 0; /* 0x005E029D: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x005E02A3: mov dword ptr [edi + 4], 0 */
    RECOMP_CALL(sub_005E08D0); /* 0x005E02AA: call 0x5e08d0 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x005E02AF: mov dword ptr [edi], eax */
    MEM32(ebp + (-0x4)) = 3; /* 0x005E02B1: mov dword ptr [ebp - 4], 3 */
    eax = MEM32(ebp + 0xC); /* 0x005E02B8: mov eax, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x8); /* 0x005E02BB: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x005E02BE: mov dword ptr [ebp - 0x10], eax */
    /* cmp ebx, eax */ /* 0x005E02C1: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E02E8; /* 0x005E02C3: je 0x5e02e8 */
L_005E02C5:
    esi = MEM32(edi); /* 0x005E02C5: mov esi, dword ptr [edi] */
    ecx = edi; /* 0x005E02C7: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x005E02C9: push ebx */
    RECOMP_CALL(sub_005E1650); /* 0x005E02CA: call 0x5e1650 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005E02CF: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005E02D0: add eax, 0x10 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x005E02D3: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E02D5: push eax */
    PUSH32(esp, esi); /* 0x005E02D6: push esi */
    eax = ebp + (-0x18); /* 0x005E02D7: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x005E02DA: push eax */
    RECOMP_CALL(sub_005E0D10); /* 0x005E02DB: call 0x5e0d10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x28u; /* 0x005E02E0: add ebx, 0x28 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(ebp + (-0x10)) */ /* 0x005E02E3: cmp ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E02C5; /* 0x005E02E6: jne 0x5e02c5 */
L_005E02E8:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E02E8: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x005E02EF: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E02F1: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E02F4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E02FB: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E02FC: pop edi */
    esi = POP32_VAL(esp); /* 0x005E02FD: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E02FE: pop ebx */
    esp = ebp; /* 0x005E02FF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E0301: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E0302: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005E0310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0310u);

L_005E0310:
    PUSH32(esp, ebp); /* 0x005E0310: push ebp */
    ebp = esp; /* 0x005E0311: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E0313: push -1 */
    PUSH32(esp, 0x00781B88u); /* 0x005E0315: push 0x781b88 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E031A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E0320: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E0321: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E0324: push esi */
    eax = MEM32(0x855000); /* 0x005E0325: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E032A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E032C: push eax */
    eax = ebp + (-0xC); /* 0x005E032D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E0330: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E0336: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E0338: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E033B: mov dword ptr [ebp - 4], 0 */
    eax = MEM32(esi); /* 0x005E0342: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x005E0344: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005E0345: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x005E0347: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005E034A: push eax */
    RECOMP_CALL(sub_005E03E0); /* 0x005E034B: call 0x5e03e0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E0350: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x005E0357: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E0359: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E035F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005E0362: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E0365: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E036C: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E036D: pop esi */
    esp = ebp; /* 0x005E036E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E0370: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E0371: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E0380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0380u);

L_005E0380:
    PUSH32(esp, ebp); /* 0x005E0380: push ebp */
    ebp = esp; /* 0x005E0381: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x005E0383: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x005E0386: push esi */
    PUSH32(esp, edi); /* 0x005E0387: push edi */
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x005E0388: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(edx + 0x10); /* 0x005E038C: mov esi, dword ptr [edx + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E0393; /* 0x005E038F: jb 0x5e0393 */
L_005E0391:
    edx = MEM32(edx); /* 0x005E0391: mov edx, dword ptr [edx] */
L_005E0393:
    ecx = MEM32(ebp + 0x8); /* 0x005E0393: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx + 0x14), 0x10u */ /* 0x005E0396: cmp dword ptr [ecx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ecx + 0x10); /* 0x005E039A: mov edi, dword ptr [ecx + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E03A1; /* 0x005E039D: jb 0x5e03a1 */
L_005E039F:
    ecx = MEM32(ecx); /* 0x005E039F: mov ecx, dword ptr [ecx] */
L_005E03A1:
    /* cmp edi, esi */ /* 0x005E03A1: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esi; /* 0x005E03A3: mov eax, esi */
    if (CMP_B(_flag_a, _flag_b)) { eax = edi; } /* 0x005E03A5: cmovb eax, edi */
    PUSH32(esp, eax); /* 0x005E03A8: push eax */
    RECOMP_CALL(sub_00424360); /* 0x005E03A9: call 0x424360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E03AE: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x005E03B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E03D0; /* 0x005E03B3: jne 0x5e03d0 */
L_005E03B5:
    /* cmp edi, esi */ /* 0x005E03B5: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E03C7; /* 0x005E03B7: jae 0x5e03c7 */
L_005E03B9:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x005E03B9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x005E03BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x005E03BE: pop edi */
    SET_LO8(eax, (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) ? 1 : 0); /* 0x005E03BF: sets al */
    esi = POP32_VAL(esp); /* 0x005E03C2: pop esi */
    ebp = POP32_VAL(esp); /* 0x005E03C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E03C4: ret 8 */
L_005E03C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E03C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x005E03C9: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005E03CB: setne al */
    /* test eax, eax */ /* 0x005E03CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_005E03D0:
    edi = POP32_VAL(esp); /* 0x005E03D0: pop edi */
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) ? 1 : 0); /* 0x005E03D1: sets al */
    esi = POP32_VAL(esp); /* 0x005E03D4: pop esi */
    ebp = POP32_VAL(esp); /* 0x005E03D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E03D6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005E03E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E03E0u);

L_005E03E0:
    PUSH32(esp, ebp); /* 0x005E03E0: push ebp */
    ebp = esp; /* 0x005E03E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x005E03E3: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x005E03E4: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x005E03E7: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x005E03EA: push esi */
    esi = ecx; /* 0x005E03EB: mov esi, ecx */
    ecx = MEM32(esi); /* 0x005E03ED: mov ecx, dword ptr [esi] */
    /* cmp eax, MEM32(ecx) */ /* 0x005E03EF: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0426; /* 0x005E03F1: jne 0x5e0426 */
L_005E03F3:
    /* cmp edx, ecx */ /* 0x005E03F3: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0426; /* 0x005E03F5: jne 0x5e0426 */
L_005E03F7:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x005E03F7: push dword ptr [ecx + 4] */
    ecx = esi; /* 0x005E03FA: mov ecx, esi */
    RECOMP_CALL(sub_005E0830); /* 0x005E03FC: call 0x5e0830 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x005E0401: mov eax, dword ptr [esi] */
    MEM32(eax + 0x4) = eax; /* 0x005E0403: mov dword ptr [eax + 4], eax */
    eax = MEM32(esi); /* 0x005E0406: mov eax, dword ptr [esi] */
    MEM32(eax) = eax; /* 0x005E0408: mov dword ptr [eax], eax */
    eax = MEM32(esi); /* 0x005E040A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x8) = eax; /* 0x005E040C: mov dword ptr [eax + 8], eax */
    eax = MEM32(esi); /* 0x005E040F: mov eax, dword ptr [esi] */
    MEM32(esi + 0x4) = 0; /* 0x005E0411: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x005E0418: pop esi */
    ecx = MEM32(eax); /* 0x005E0419: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x005E041B: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005E041E: mov dword ptr [eax], ecx */
    esp = ebp; /* 0x005E0420: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E0422: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005E0423: ret 0xc */
L_005E0426:
    /* cmp eax, edx */ /* 0x005E0426: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E048F; /* 0x005E0428: je 0x5e048f */
L_005E042A:
    ebx = ebx; /* 0x005E042A: lea ebx, [ebx] */
L_005E0430:
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E0430: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x005E0434: mov ecx, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E047B; /* 0x005E0436: jne 0x5e047b */
L_005E0438:
    edx = MEM32(eax + 0x8); /* 0x005E0438: mov edx, dword ptr [eax + 8] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005E043B: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E045C; /* 0x005E043F: jne 0x5e045c */
L_005E0441:
    eax = MEM32(edx); /* 0x005E0441: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E0443: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0478; /* 0x005E0447: jne 0x5e0478 */
L_005E0449:
    esp = esp; /* 0x005E0449: lea esp, [esp] */
L_005E0450:
    edx = eax; /* 0x005E0450: mov edx, eax */
    eax = MEM32(edx); /* 0x005E0452: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E0454: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E0450; /* 0x005E0458: je 0x5e0450 */
L_005E045A:
    goto L_005E0478; /* 0x005E045A: jmp 0x5e0478 */
L_005E045C:
    edx = MEM32(eax + 0x4); /* 0x005E045C: mov edx, dword ptr [eax + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005E045F: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0478; /* 0x005E0463: jne 0x5e0478 */
L_005E0465:
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x005E0465: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0478; /* 0x005E0468: jne 0x5e0478 */
L_005E046A:
    eax = edx; /* 0x005E046A: mov eax, edx */
    MEM32(ebp + 0xC) = eax; /* 0x005E046C: mov dword ptr [ebp + 0xc], eax */
    edx = MEM32(edx + 0x4); /* 0x005E046F: mov edx, dword ptr [edx + 4] */
    /* cmp MEM8(edx + 0xD), 0 */ /* 0x005E0472: cmp byte ptr [edx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E0465; /* 0x005E0476: je 0x5e0465 */
L_005E0478:
    MEM32(ebp + 0xC) = edx; /* 0x005E0478: mov dword ptr [ebp + 0xc], edx */
L_005E047B:
    PUSH32(esp, ecx); /* 0x005E047B: push ecx */
    eax = ebp + (-0x4); /* 0x005E047C: lea eax, [ebp - 4] */
    ecx = esi; /* 0x005E047F: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005E0481: push eax */
    RECOMP_CALL(sub_005E0580); /* 0x005E0482: call 0x5e0580 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x005E0487: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x005E048A: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0430; /* 0x005E048D: jne 0x5e0430 */
L_005E048F:
    ecx = MEM32(ebp + 0x8); /* 0x005E048F: mov ecx, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x005E0492: pop esi */
    MEM32(ecx) = eax; /* 0x005E0493: mov dword ptr [ecx], eax */
    eax = ecx; /* 0x005E0495: mov eax, ecx */
    esp = ebp; /* 0x005E0497: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E0499: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005E049A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005E04A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E04A0u);

L_005E04A0:
    PUSH32(esp, ebp); /* 0x005E04A0: push ebp */
    ebp = esp; /* 0x005E04A1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E04A3: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E04A6: push ebx */
    ebx = MEM32(ecx); /* 0x005E04A7: mov ebx, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x005E04A9: push edi */
    MEM32(ebp + (-0x8)) = ebx; /* 0x005E04AA: mov dword ptr [ebp - 8], ebx */
    edi = MEM32(ebx + 0x4); /* 0x005E04AD: mov edi, dword ptr [ebx + 4] */
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005E04B0: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E056F; /* 0x005E04B4: jne 0x5e056f */
L_005E04BA:
    edx = MEM32(ebp + 0x8); /* 0x005E04BA: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005E04BD: push esi */
    ecx = MEM32(edx + 0x10); /* 0x005E04BE: mov ecx, dword ptr [edx + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x005E04C1: mov dword ptr [ebp - 4], ecx */
L_005E04C4:
    /* cmp MEM32(edx + 0x14), 0x10u */ /* 0x005E04C4: cmp dword ptr [edx + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi + 0x10; /* 0x005E04C8: lea eax, [edi + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E04D1; /* 0x005E04CB: jb 0x5e04d1 */
L_005E04CD:
    esi = MEM32(edx); /* 0x005E04CD: mov esi, dword ptr [edx] */
    goto L_005E04D3; /* 0x005E04CF: jmp 0x5e04d3 */
L_005E04D1:
    esi = edx; /* 0x005E04D1: mov esi, edx */
L_005E04D3:
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x005E04D3: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(eax + 0x10); /* 0x005E04D7: mov ebx, dword ptr [eax + 0x10] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E04DE; /* 0x005E04DA: jb 0x5e04de */
L_005E04DC:
    eax = MEM32(eax); /* 0x005E04DC: mov eax, dword ptr [eax] */
L_005E04DE:
    /* cmp ebx, ecx */ /* 0x005E04DE: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ecx; /* 0x005E04E0: mov edx, ecx */
    if (CMP_B(_flag_a, _flag_b)) { edx = ebx; } /* 0x005E04E2: cmovb edx, ebx */
    /* test edx, edx */ /* 0x005E04E5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0543; /* 0x005E04E7: je 0x5e0543 */
L_005E04E9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x005E04E9: sub edx, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_B(_flag_a, _flag_b)) goto L_005E0501; /* 0x005E04EC: jb 0x5e0501 */
L_005E04EE:
    edi = edi; /* 0x005E04EE: mov edi, edi */
L_005E04F0:
    ecx = MEM32(eax); /* 0x005E04F0: mov ecx, dword ptr [eax] */
    /* cmp ecx, MEM32(esi) */ /* 0x005E04F2: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0506; /* 0x005E04F4: jne 0x5e0506 */
L_005E04F6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x005E04F6: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x005E04F9: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 4; /* 0x005E04FC: sub edx, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_005E04F0; /* 0x005E04FF: jae 0x5e04f0 */
L_005E0501:
    /* cmp edx, 0xFFFFFFFCu */ /* 0x005E0501: cmp edx, -4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E053A; /* 0x005E0504: je 0x5e053a */
L_005E0506:
    SET_LO8(ecx, MEM8(eax)); /* 0x005E0506: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), MEM8(esi) */ /* 0x005E0508: cmp cl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0533; /* 0x005E050A: jne 0x5e0533 */
L_005E050C:
    /* cmp edx, 0xFFFFFFFDu */ /* 0x005E050C: cmp edx, -3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E053A; /* 0x005E050F: je 0x5e053a */
L_005E0511:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x005E0511: mov cl, byte ptr [eax + 1] */
    /* cmp LO8(ecx), MEM8(esi + 0x1) */ /* 0x005E0514: cmp cl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0533; /* 0x005E0517: jne 0x5e0533 */
L_005E0519:
    /* cmp edx, 0xFFFFFFFEu */ /* 0x005E0519: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E053A; /* 0x005E051C: je 0x5e053a */
L_005E051E:
    SET_LO8(ecx, MEM8(eax + 0x2)); /* 0x005E051E: mov cl, byte ptr [eax + 2] */
    /* cmp LO8(ecx), MEM8(esi + 0x2) */ /* 0x005E0521: cmp cl, byte ptr [esi + 2] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0533; /* 0x005E0524: jne 0x5e0533 */
L_005E0526:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x005E0526: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E053A; /* 0x005E0529: je 0x5e053a */
L_005E052B:
    SET_LO8(eax, MEM8(eax + 0x3)); /* 0x005E052B: mov al, byte ptr [eax + 3] */
    /* cmp LO8(eax), MEM8(esi + 0x3) */ /* 0x005E052E: cmp al, byte ptr [esi + 3] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x3)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E053A; /* 0x005E0531: je 0x5e053a */
L_005E0533:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x005E0533: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x005E0535: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E053C; /* 0x005E0538: jmp 0x5e053c */
L_005E053A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E053A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_005E053C:
    ecx = MEM32(ebp + (-0x4)); /* 0x005E053C: mov ecx, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x005E053F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E0550; /* 0x005E0541: jne 0x5e0550 */
L_005E0543:
    /* cmp ebx, ecx */ /* 0x005E0543: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E055B; /* 0x005E0545: jb 0x5e055b */
L_005E0547:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E0547: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, ecx */ /* 0x005E0549: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x005E054B: setne al */
    /* test eax, eax */ /* 0x005E054E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_005E0550:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_005E055B; /* 0x005E0550: js 0x5e055b */
L_005E0552:
    ebx = edi; /* 0x005E0552: mov ebx, edi */
    edi = MEM32(edi); /* 0x005E0554: mov edi, dword ptr [edi] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x005E0556: mov dword ptr [ebp - 8], ebx */
    goto L_005E0561; /* 0x005E0559: jmp 0x5e0561 */
L_005E055B:
    edi = MEM32(edi + 0x8); /* 0x005E055B: mov edi, dword ptr [edi + 8] */
    ebx = MEM32(ebp + (-0x8)); /* 0x005E055E: mov ebx, dword ptr [ebp - 8] */
L_005E0561:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005E0561: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = MEM32(ebp + 0x8); /* 0x005E0565: mov edx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E04C4; /* 0x005E0568: je 0x5e04c4 */
L_005E056E:
    esi = POP32_VAL(esp); /* 0x005E056E: pop esi */
L_005E056F:
    edi = POP32_VAL(esp); /* 0x005E056F: pop edi */
    eax = ebx; /* 0x005E0570: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x005E0572: pop ebx */
    esp = ebp; /* 0x005E0573: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E0575: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E0576: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E0580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0580u);

L_005E0580:
    PUSH32(esp, ebp); /* 0x005E0580: push ebp */
    ebp = esp; /* 0x005E0581: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E0583: push -1 */
    PUSH32(esp, 0x007B0068u); /* 0x005E0585: push 0x7b0068 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E058A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E0590: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E0591: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E0594: push ebx */
    PUSH32(esp, esi); /* 0x005E0595: push esi */
    PUSH32(esp, edi); /* 0x005E0596: push edi */
    eax = MEM32(0x855000); /* 0x005E0597: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E059C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E059E: push eax */
    eax = ebp + (-0xC); /* 0x005E059F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E05A2: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005E05A8: mov ebx, ecx */
    eax = MEM32(ebp + 0xC); /* 0x005E05AA: mov eax, dword ptr [ebp + 0xc] */
    ecx = ebp + 0xC; /* 0x005E05AD: lea ecx, [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x005E05B0: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_0040B880); /* 0x005E05B3: call 0x40b880 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x005E05B8: mov edx, dword ptr [ebp - 0x10] */
    esi = MEM32(edx); /* 0x005E05BB: mov esi, dword ptr [edx] */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005E05BD: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E05C8; /* 0x005E05C1: je 0x5e05c8 */
L_005E05C3:
    edi = MEM32(edx + 0x8); /* 0x005E05C3: mov edi, dword ptr [edx + 8] */
    goto L_005E05E2; /* 0x005E05C6: jmp 0x5e05e2 */
L_005E05C8:
    eax = MEM32(edx + 0x8); /* 0x005E05C8: mov eax, dword ptr [edx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E05CB: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E05D5; /* 0x005E05CF: je 0x5e05d5 */
L_005E05D1:
    edi = esi; /* 0x005E05D1: mov edi, esi */
    goto L_005E05E2; /* 0x005E05D3: jmp 0x5e05e2 */
L_005E05D5:
    ecx = MEM32(ebp + 0xC); /* 0x005E05D5: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x005E05D8: mov dword ptr [ebp - 0x14], ecx */
    edi = MEM32(ecx + 0x8); /* 0x005E05DB: mov edi, dword ptr [ecx + 8] */
    /* cmp ecx, edx */ /* 0x005E05DE: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0655; /* 0x005E05E0: jne 0x5e0655 */
L_005E05E2:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005E05E2: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(edx + 0x4); /* 0x005E05E6: mov esi, dword ptr [edx + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E05EE; /* 0x005E05E9: jne 0x5e05ee */
L_005E05EB:
    MEM32(edi + 0x4) = esi; /* 0x005E05EB: mov dword ptr [edi + 4], esi */
L_005E05EE:
    eax = MEM32(ebx); /* 0x005E05EE: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x4), edx */ /* 0x005E05F0: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E05FA; /* 0x005E05F3: jne 0x5e05fa */
L_005E05F5:
    MEM32(eax + 0x4) = edi; /* 0x005E05F5: mov dword ptr [eax + 4], edi */
    goto L_005E0605; /* 0x005E05F8: jmp 0x5e0605 */
L_005E05FA:
    /* cmp MEM32(esi), edx */ /* 0x005E05FA: cmp dword ptr [esi], edx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0602; /* 0x005E05FC: jne 0x5e0602 */
L_005E05FE:
    MEM32(esi) = edi; /* 0x005E05FE: mov dword ptr [esi], edi */
    goto L_005E0605; /* 0x005E0600: jmp 0x5e0605 */
L_005E0602:
    MEM32(esi + 0x8) = edi; /* 0x005E0602: mov dword ptr [esi + 8], edi */
L_005E0605:
    eax = MEM32(ebx); /* 0x005E0605: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax), edx */ /* 0x005E0607: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E062E; /* 0x005E0609: jne 0x5e062e */
L_005E060B:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005E060B: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E0615; /* 0x005E060F: je 0x5e0615 */
L_005E0611:
    ecx = esi; /* 0x005E0611: mov ecx, esi */
    goto L_005E062C; /* 0x005E0613: jmp 0x5e062c */
L_005E0615:
    eax = MEM32(edi); /* 0x005E0615: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x005E0617: mov ecx, edi */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E0619: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E062A; /* 0x005E061D: jne 0x5e062a */
L_005E061F:
    /* nop */ /* 0x005E061F: nop  */
L_005E0620:
    ecx = eax; /* 0x005E0620: mov ecx, eax */
    eax = MEM32(ecx); /* 0x005E0622: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E0624: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E0620; /* 0x005E0628: je 0x5e0620 */
L_005E062A:
    eax = MEM32(ebx); /* 0x005E062A: mov eax, dword ptr [ebx] */
L_005E062C:
    MEM32(eax) = ecx; /* 0x005E062C: mov dword ptr [eax], ecx */
L_005E062E:
    eax = MEM32(ebx); /* 0x005E062E: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x8), edx */ /* 0x005E0630: cmp dword ptr [eax + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E06B1; /* 0x005E0633: jne 0x5e06b1 */
L_005E0635:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005E0635: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E0644; /* 0x005E0639: je 0x5e0644 */
L_005E063B:
    ecx = MEM32(ebx); /* 0x005E063B: mov ecx, dword ptr [ebx] */
    eax = esi; /* 0x005E063D: mov eax, esi */
    MEM32(ecx + 0x8) = eax; /* 0x005E063F: mov dword ptr [ecx + 8], eax */
    goto L_005E06B1; /* 0x005E0642: jmp 0x5e06b1 */
L_005E0644:
    ecx = edi; /* 0x005E0644: mov ecx, edi */
    RECOMP_CALL(sub_0040B7B0); /* 0x005E0646: call 0x40b7b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x005E064B: mov ecx, dword ptr [ebx] */
    edx = MEM32(ebp + (-0x10)); /* 0x005E064D: mov edx, dword ptr [ebp - 0x10] */
    MEM32(ecx + 0x8) = eax; /* 0x005E0650: mov dword ptr [ecx + 8], eax */
    goto L_005E06B1; /* 0x005E0653: jmp 0x5e06b1 */
L_005E0655:
    MEM32(esi + 0x4) = ecx; /* 0x005E0655: mov dword ptr [esi + 4], ecx */
    eax = MEM32(edx); /* 0x005E0658: mov eax, dword ptr [edx] */
    MEM32(ecx) = eax; /* 0x005E065A: mov dword ptr [ecx], eax */
    /* cmp ecx, MEM32(edx + 0x8) */ /* 0x005E065C: cmp ecx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0665; /* 0x005E065F: jne 0x5e0665 */
L_005E0661:
    esi = ecx; /* 0x005E0661: mov esi, ecx */
    goto L_005E067F; /* 0x005E0663: jmp 0x5e067f */
L_005E0665:
    /* cmp MEM8(edi + 0xD), 0 */ /* 0x005E0665: cmp byte ptr [edi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = MEM32(ecx + 0x4); /* 0x005E0669: mov esi, dword ptr [ecx + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0671; /* 0x005E066C: jne 0x5e0671 */
L_005E066E:
    MEM32(edi + 0x4) = esi; /* 0x005E066E: mov dword ptr [edi + 4], esi */
L_005E0671:
    MEM32(esi) = edi; /* 0x005E0671: mov dword ptr [esi], edi */
    eax = MEM32(edx + 0x8); /* 0x005E0673: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x005E0676: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx + 0x8); /* 0x005E0679: mov eax, dword ptr [edx + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x005E067C: mov dword ptr [eax + 4], ecx */
L_005E067F:
    eax = MEM32(ebx); /* 0x005E067F: mov eax, dword ptr [ebx] */
    /* cmp MEM32(eax + 0x4), edx */ /* 0x005E0681: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E068B; /* 0x005E0684: jne 0x5e068b */
L_005E0686:
    MEM32(eax + 0x4) = ecx; /* 0x005E0686: mov dword ptr [eax + 4], ecx */
    goto L_005E0699; /* 0x005E0689: jmp 0x5e0699 */
L_005E068B:
    eax = MEM32(edx + 0x4); /* 0x005E068B: mov eax, dword ptr [edx + 4] */
    /* cmp MEM32(eax), edx */ /* 0x005E068E: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0696; /* 0x005E0690: jne 0x5e0696 */
L_005E0692:
    MEM32(eax) = ecx; /* 0x005E0692: mov dword ptr [eax], ecx */
    goto L_005E0699; /* 0x005E0694: jmp 0x5e0699 */
L_005E0696:
    MEM32(eax + 0x8) = ecx; /* 0x005E0696: mov dword ptr [eax + 8], ecx */
L_005E0699:
    eax = MEM32(edx + 0x4); /* 0x005E0699: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x005E069C: mov dword ptr [ecx + 4], eax */
    SET_LO8(eax, MEM8(edx + 0xC)); /* 0x005E069F: mov al, byte ptr [edx + 0xc] */
    edx = MEM32(ebp + (-0x14)); /* 0x005E06A2: mov edx, dword ptr [ebp - 0x14] */
    SET_LO8(ecx, MEM8(ecx + 0xC)); /* 0x005E06A5: mov cl, byte ptr [ecx + 0xc] */
    MEM8(edx + 0xC) = (uint8_t)(LO8(eax)); /* 0x005E06A8: mov byte ptr [edx + 0xc], al */
    edx = MEM32(ebp + (-0x10)); /* 0x005E06AB: mov edx, dword ptr [ebp - 0x10] */
    MEM8(edx + 0xC) = (uint8_t)(LO8(ecx)); /* 0x005E06AE: mov byte ptr [edx + 0xc], cl */
L_005E06B1:
    /* cmp MEM8(edx + 0xC), 1 */ /* 0x005E06B1: cmp byte ptr [edx + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(edx + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E07C3; /* 0x005E06B5: jne 0x5e07c3 */
L_005E06BB:
    eax = MEM32(ebx); /* 0x005E06BB: mov eax, dword ptr [ebx] */
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x005E06BD: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E07BF; /* 0x005E06C0: je 0x5e07bf */
L_005E06C6:
    /* cmp MEM8(edi + 0xC), 1 */ /* 0x005E06C6: cmp byte ptr [edi + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E07BC; /* 0x005E06CA: jne 0x5e07bc */
L_005E06D0:
    ecx = MEM32(esi); /* 0x005E06D0: mov ecx, dword ptr [esi] */
    /* cmp edi, ecx */ /* 0x005E06D2: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0742; /* 0x005E06D4: jne 0x5e0742 */
L_005E06D6:
    ecx = MEM32(esi + 0x8); /* 0x005E06D6: mov ecx, dword ptr [esi + 8] */
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005E06D9: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E06F2; /* 0x005E06DD: jne 0x5e06f2 */
L_005E06DF:
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x005E06DF: mov byte ptr [ecx + 0xc], 1 */
    ecx = ebx; /* 0x005E06E3: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005E06E5: push esi */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x005E06E6: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_0040B6F0); /* 0x005E06EA: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x005E06EF: mov ecx, dword ptr [esi + 8] */
L_005E06F2:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x005E06F2: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0775; /* 0x005E06F6: jne 0x5e0775 */
L_005E06F8:
    eax = MEM32(ecx); /* 0x005E06F8: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005E06FA: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0709; /* 0x005E06FE: jne 0x5e0709 */
L_005E0700:
    eax = MEM32(ecx + 0x8); /* 0x005E0700: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005E0703: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E0771; /* 0x005E0707: je 0x5e0771 */
L_005E0709:
    eax = MEM32(ecx + 0x8); /* 0x005E0709: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005E070C: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0727; /* 0x005E0710: jne 0x5e0727 */
L_005E0712:
    eax = MEM32(ecx); /* 0x005E0712: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x005E0714: push ecx */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005E0715: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x005E0719: mov byte ptr [ecx + 0xc], 0 */
    ecx = ebx; /* 0x005E071D: mov ecx, ebx */
    RECOMP_CALL(sub_0040B750); /* 0x005E071F: call 0x40b750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8); /* 0x005E0724: mov ecx, dword ptr [esi + 8] */
L_005E0727:
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x005E0727: mov al, byte ptr [esi + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x005E072A: mov byte ptr [ecx + 0xc], al */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x005E072D: mov byte ptr [esi + 0xc], 1 */
    eax = MEM32(ecx + 0x8); /* 0x005E0731: mov eax, dword ptr [ecx + 8] */
    ecx = ebx; /* 0x005E0734: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005E0736: push esi */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005E0737: mov byte ptr [eax + 0xc], 1 */
    RECOMP_CALL(sub_0040B6F0); /* 0x005E073B: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    goto L_005E07BC; /* 0x005E0740: jmp 0x5e07bc */
L_005E0742:
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005E0742: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E075A; /* 0x005E0746: jne 0x5e075a */
L_005E0748:
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x005E0748: mov byte ptr [ecx + 0xc], 1 */
    ecx = ebx; /* 0x005E074C: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005E074E: push esi */
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x005E074F: mov byte ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_0040B750); /* 0x005E0753: call 0x40b750 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x005E0758: mov ecx, dword ptr [esi] */
L_005E075A:
    /* cmp MEM8(ecx + 0xD), 0 */ /* 0x005E075A: cmp byte ptr [ecx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0775; /* 0x005E075E: jne 0x5e0775 */
L_005E0760:
    eax = MEM32(ecx + 0x8); /* 0x005E0760: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005E0763: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0787; /* 0x005E0767: jne 0x5e0787 */
L_005E0769:
    eax = MEM32(ecx); /* 0x005E0769: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005E076B: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0787; /* 0x005E076F: jne 0x5e0787 */
L_005E0771:
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x005E0771: mov byte ptr [ecx + 0xc], 0 */
L_005E0775:
    eax = MEM32(ebx); /* 0x005E0775: mov eax, dword ptr [ebx] */
    edi = esi; /* 0x005E0777: mov edi, esi */
    esi = MEM32(esi + 0x4); /* 0x005E0779: mov esi, dword ptr [esi + 4] */
    /* cmp edi, MEM32(eax + 0x4) */ /* 0x005E077C: cmp edi, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E06C6; /* 0x005E077F: jne 0x5e06c6 */
L_005E0785:
    goto L_005E07BC; /* 0x005E0785: jmp 0x5e07bc */
L_005E0787:
    eax = MEM32(ecx); /* 0x005E0787: mov eax, dword ptr [ecx] */
    /* cmp MEM8(eax + 0xC), 1 */ /* 0x005E0789: cmp byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E07A4; /* 0x005E078D: jne 0x5e07a4 */
L_005E078F:
    eax = MEM32(ecx + 0x8); /* 0x005E078F: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, ecx); /* 0x005E0792: push ecx */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005E0793: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(0); /* 0x005E0797: mov byte ptr [ecx + 0xc], 0 */
    ecx = ebx; /* 0x005E079B: mov ecx, ebx */
    RECOMP_CALL(sub_0040B6F0); /* 0x005E079D: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x005E07A2: mov ecx, dword ptr [esi] */
L_005E07A4:
    SET_LO8(eax, MEM8(esi + 0xC)); /* 0x005E07A4: mov al, byte ptr [esi + 0xc] */
    MEM8(ecx + 0xC) = (uint8_t)(LO8(eax)); /* 0x005E07A7: mov byte ptr [ecx + 0xc], al */
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x005E07AA: mov byte ptr [esi + 0xc], 1 */
    eax = MEM32(ecx); /* 0x005E07AE: mov eax, dword ptr [ecx] */
    ecx = ebx; /* 0x005E07B0: mov ecx, ebx */
    PUSH32(esp, esi); /* 0x005E07B2: push esi */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005E07B3: mov byte ptr [eax + 0xc], 1 */
    RECOMP_CALL(sub_0040B750); /* 0x005E07B7: call 0x40b750 */
    RECOMP_FLAGS_IN();
L_005E07BC:
    edx = MEM32(ebp + (-0x10)); /* 0x005E07BC: mov edx, dword ptr [ebp - 0x10] */
L_005E07BF:
    MEM8(edi + 0xC) = (uint8_t)(1); /* 0x005E07BF: mov byte ptr [edi + 0xc], 1 */
L_005E07C3:
    esi = edx + 0x10; /* 0x005E07C3: lea esi, [edx + 0x10] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005E07C6: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E07C9: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005E07D0: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x005E07D4: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E07E6; /* 0x005E07DA: jb 0x5e07e6 */
L_005E07DC:
    PUSH32(esp, MEM32(esi)); /* 0x005E07DC: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x005E07DE: call edi */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x005E07E0: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E07E3: add esp, 4 */
    _flag_k = FK_ADD;
L_005E07E6:
    MEM32(esi + 0x14) = 0xFu; /* 0x005E07E6: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005E07ED: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, edx); /* 0x005E07F4: push edx */
    MEM8(esi) = (uint8_t)(0); /* 0x005E07F5: mov byte ptr [esi], 0 */
    RECOMP_ICALL(edi); /* 0x005E07F8: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x005E07FA: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E07FD: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0xC); /* 0x005E0800: mov ecx, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x005E0803: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E080B; /* 0x005E0805: je 0x5e080b */
L_005E0807:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x005E0807: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebx + 0x4) = eax; /* 0x005E0808: mov dword ptr [ebx + 4], eax */
L_005E080B:
    eax = MEM32(ebp + 0x8); /* 0x005E080B: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005E080E: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E0810: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E0813: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E081A: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E081B: pop edi */
    esi = POP32_VAL(esp); /* 0x005E081C: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E081D: pop ebx */
    esp = ebp; /* 0x005E081E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E0820: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E0821: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005E0830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0830u);

L_005E0830:
    PUSH32(esp, ebp); /* 0x005E0830: push ebp */
    ebp = esp; /* 0x005E0831: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E0833: push -1 */
    PUSH32(esp, 0x007B0098u); /* 0x005E0835: push 0x7b0098 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E083A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E0840: push eax */
    PUSH32(esp, ecx); /* 0x005E0841: push ecx */
    PUSH32(esp, ebx); /* 0x005E0842: push ebx */
    PUSH32(esp, esi); /* 0x005E0843: push esi */
    PUSH32(esp, edi); /* 0x005E0844: push edi */
    eax = MEM32(0x855000); /* 0x005E0845: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E084A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E084C: push eax */
    eax = ebp + (-0xC); /* 0x005E084D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E0850: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005E0856: mov dword ptr [ebp - 0x10], ecx */
    ebx = MEM32(ebp + 0x8); /* 0x005E0859: mov ebx, dword ptr [ebp + 8] */
    esi = ebx; /* 0x005E085C: mov esi, ebx */
    /* cmp MEM8(ebx + 0xD), 0 */ /* 0x005E085E: cmp byte ptr [ebx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E08B2; /* 0x005E0862: jne 0x5e08b2 */
L_005E0864:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x005E0864: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_005E0830); /* 0x005E0867: call 0x5e0830 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi); /* 0x005E086C: mov esi, dword ptr [esi] */
    edi = ebx + 0x10; /* 0x005E086E: lea edi, [ebx + 0x10] */
    MEM32(ebp + 0x8) = edi; /* 0x005E0871: mov dword ptr [ebp + 8], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E0874: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x005E087B: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E088C; /* 0x005E087F: jb 0x5e088c */
L_005E0881:
    PUSH32(esp, MEM32(edi)); /* 0x005E0881: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E0883: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E0889: add esp, 4 */
    _flag_k = FK_ADD;
L_005E088C:
    MEM32(edi + 0x14) = 0xFu; /* 0x005E088C: mov dword ptr [edi + 0x14], 0xf */
    MEM32(edi + 0x10) = 0; /* 0x005E0893: mov dword ptr [edi + 0x10], 0 */
    PUSH32(esp, ebx); /* 0x005E089A: push ebx */
    MEM8(edi) = (uint8_t)(0); /* 0x005E089B: mov byte ptr [edi], 0 */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E089E: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x005E08A4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E08A7: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005E08AA: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = esi; /* 0x005E08AE: mov ebx, esi */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E0864; /* 0x005E08B0: je 0x5e0864 */
L_005E08B2:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E08B2: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E08B5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E08BC: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E08BD: pop edi */
    esi = POP32_VAL(esp); /* 0x005E08BE: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E08BF: pop ebx */
    esp = ebp; /* 0x005E08C0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E08C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E08C3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E08D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E08D0u);

L_005E08D0:
    PUSH32(esp, ebp); /* 0x005E08D0: push ebp */
    ebp = esp; /* 0x005E08D1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E08D3: push -1 */
    PUSH32(esp, 0x007B00C0u); /* 0x005E08D5: push 0x7b00c0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E08DA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E08E0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005E08E1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E08E4: push ebx */
    PUSH32(esp, esi); /* 0x005E08E5: push esi */
    PUSH32(esp, edi); /* 0x005E08E6: push edi */
    eax = MEM32(0x855000); /* 0x005E08E7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E08EC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E08EE: push eax */
    eax = ebp + (-0xC); /* 0x005E08EF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E08F2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005E08F8: mov dword ptr [ebp - 0x10], esp */
    PUSH32(esp, 0x38u); /* 0x005E08FB: push 0x38 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005E08FD: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E0903: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005E0906: mov esi, eax */
    MEM32(ebp + (-0x18)) = esi; /* 0x005E0908: mov dword ptr [ebp - 0x18], esi */
    /* test esi, esi */ /* 0x005E090B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E0915; /* 0x005E090D: jne 0x5e0915 */
L_005E090F:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005E090F: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005E0915:
    MEM32(ebp + (-0x14)) = esi; /* 0x005E0915: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E0918: mov dword ptr [ebp - 4], 0 */
    eax = ebp + (-0x14); /* 0x005E091F: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005E0922: push eax */
    PUSH32(esp, esi); /* 0x005E0923: push esi */
    RECOMP_CALL(sub_0040BAA0); /* 0x005E0924: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x005E0929: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005E092C: push eax */
    eax = esi + 0x4; /* 0x005E092D: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x005E0930: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005E0931: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x005E0936: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005E0939: push eax */
    eax = esi + 0x8; /* 0x005E093A: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x005E093D: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005E093E: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E0943: mov dword ptr [ebp - 4], 0xffffffff */
    MEM16(esi + 0xC) = (uint16_t)(0x101u); /* 0x005E094A: mov word ptr [esi + 0xc], 0x101 */
    eax = esi; /* 0x005E0950: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E0952: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E0955: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E095C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E095D: pop edi */
    esi = POP32_VAL(esp); /* 0x005E095E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E095F: pop ebx */
    esp = ebp; /* 0x005E0960: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E0962: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E0963: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E0964(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0964u);

L_005E0964:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x005E0964: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E0967: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E096D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005E0970: push 0 */
    PUSH32(esp, 0); /* 0x005E0972: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005E0974: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005E0979u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005E0980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0980u);

L_005E0980:
    PUSH32(esp, ebp); /* 0x005E0980: push ebp */
    ebp = esp; /* 0x005E0981: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E0983: push -1 */
    PUSH32(esp, 0x007B00E8u); /* 0x005E0985: push 0x7b00e8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E098A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E0990: push eax */
    PUSH32(esp, ecx); /* 0x005E0991: push ecx */
    PUSH32(esp, esi); /* 0x005E0992: push esi */
    PUSH32(esp, edi); /* 0x005E0993: push edi */
    eax = MEM32(0x855000); /* 0x005E0994: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E0999: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E099B: push eax */
    eax = ebp + (-0xC); /* 0x005E099C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E099F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E09A5: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E09A7: mov dword ptr [ebp - 0x10], esi */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x005E09AA: mov byte ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005E09AE: mov dword ptr [esi + 8], 0 */
    MEM32(esi) = 0x007EDA74u; /* 0x005E09B5: mov dword ptr [esi], 0x7eda74 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E09BB: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ebp + 0x8); /* 0x005E09C2: mov edi, dword ptr [ebp + 8] */
    MEM32(esi) = 0x007F64F8u; /* 0x005E09C5: mov dword ptr [esi], 0x7f64f8 */
    MEM32(esi + 0xC) = 0; /* 0x005E09CB: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005E09D2: mov dword ptr [esi + 0x10], 0 */
    /* test edi, edi */ /* 0x005E09D9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0A0F; /* 0x005E09DB: je 0x5e0a0f */
L_005E09DD:
    eax = 0x005DFBC0u; /* 0x005E09DD: mov eax, 0x5dfbc0 */
    /* test eax, eax */ /* 0x005E09E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0A0F; /* 0x005E09E4: je 0x5e0a0f */
L_005E09E6:
    /* test MEM8(esi + 0x4), 1 */ /* 0x005E09E6: test byte ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E09F6; /* 0x005E09EA: je 0x5e09f6 */
L_005E09EC:
    PUSH32(esp, esi); /* 0x005E09EC: push esi */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005E09ED: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E09F3: add esp, 4 */
    _flag_k = FK_ADD;
L_005E09F6:
    PUSH32(esp, 0x44Du); /* 0x005E09F6: push 0x44d */
    PUSH32(esp, esi); /* 0x005E09FB: push esi */
    MEM32(esi + 0xC) = edi; /* 0x005E09FC: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = 0x005DFBC0u; /* 0x005E09FF: mov dword ptr [esi + 0x10], 0x5dfbc0 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005E0A06: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E0A0C: add esp, 8 */
    _flag_k = FK_ADD;
L_005E0A0F:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E0A0F: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005E0A16: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E0A18: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E0A1B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E0A22: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E0A23: pop edi */
    esi = POP32_VAL(esp); /* 0x005E0A24: pop esi */
    esp = ebp; /* 0x005E0A25: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E0A27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E0A28: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005E0A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0A30u);

L_005E0A30:
    PUSH32(esp, ebp); /* 0x005E0A30: push ebp */
    ebp = esp; /* 0x005E0A31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E0A33: push -1 */
    PUSH32(esp, 0x0078D198u); /* 0x005E0A35: push 0x78d198 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E0A3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E0A40: push eax */
    PUSH32(esp, ecx); /* 0x005E0A41: push ecx */
    PUSH32(esp, esi); /* 0x005E0A42: push esi */
    PUSH32(esp, edi); /* 0x005E0A43: push edi */
    eax = MEM32(0x855000); /* 0x005E0A44: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E0A49: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E0A4B: push eax */
    eax = ebp + (-0xC); /* 0x005E0A4C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E0A4F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E0A55: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E0A57: mov dword ptr [ebp - 0x10], esi */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x005E0A5A: mov byte ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005E0A5E: mov dword ptr [esi + 8], 0 */
    MEM32(esi) = 0x007E3468u; /* 0x005E0A65: mov dword ptr [esi], 0x7e3468 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E0A6B: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ebp + 0x8); /* 0x005E0A72: mov edi, dword ptr [ebp + 8] */
    MEM32(esi) = 0x007F6498u; /* 0x005E0A75: mov dword ptr [esi], 0x7f6498 */
    MEM32(esi + 0xC) = 0; /* 0x005E0A7B: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005E0A82: mov dword ptr [esi + 0x10], 0 */
    /* test edi, edi */ /* 0x005E0A89: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0ABF; /* 0x005E0A8B: je 0x5e0abf */
L_005E0A8D:
    eax = 0x005DFF00u; /* 0x005E0A8D: mov eax, 0x5dff00 */
    /* test eax, eax */ /* 0x005E0A92: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0ABF; /* 0x005E0A94: je 0x5e0abf */
L_005E0A96:
    /* test MEM8(esi + 0x4), 1 */ /* 0x005E0A96: test byte ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0AA6; /* 0x005E0A9A: je 0x5e0aa6 */
L_005E0A9C:
    PUSH32(esp, esi); /* 0x005E0A9C: push esi */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005E0A9D: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E0AA3: add esp, 4 */
    _flag_k = FK_ADD;
L_005E0AA6:
    PUSH32(esp, 0x44Eu); /* 0x005E0AA6: push 0x44e */
    PUSH32(esp, esi); /* 0x005E0AAB: push esi */
    MEM32(esi + 0xC) = edi; /* 0x005E0AAC: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = 0x005DFF00u; /* 0x005E0AAF: mov dword ptr [esi + 0x10], 0x5dff00 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005E0AB6: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E0ABC: add esp, 8 */
    _flag_k = FK_ADD;
L_005E0ABF:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E0ABF: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005E0AC6: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E0AC8: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E0ACB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E0AD2: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E0AD3: pop edi */
    esi = POP32_VAL(esp); /* 0x005E0AD4: pop esi */
    esp = ebp; /* 0x005E0AD5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E0AD7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E0AD8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005E0AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0AE0u);

L_005E0AE0:
    PUSH32(esp, ebp); /* 0x005E0AE0: push ebp */
    ebp = esp; /* 0x005E0AE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E0AE3: push -1 */
    PUSH32(esp, 0x007B0118u); /* 0x005E0AE5: push 0x7b0118 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E0AEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E0AF0: push eax */
    PUSH32(esp, ecx); /* 0x005E0AF1: push ecx */
    PUSH32(esp, esi); /* 0x005E0AF2: push esi */
    PUSH32(esp, edi); /* 0x005E0AF3: push edi */
    eax = MEM32(0x855000); /* 0x005E0AF4: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E0AF9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E0AFB: push eax */
    eax = ebp + (-0xC); /* 0x005E0AFC: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E0AFF: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E0B05: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E0B07: mov dword ptr [ebp - 0x10], esi */
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x005E0B0A: mov byte ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005E0B0E: mov dword ptr [esi + 8], 0 */
    MEM32(esi) = 0x007F6508u; /* 0x005E0B15: mov dword ptr [esi], 0x7f6508 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E0B1B: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ebp + 0x8); /* 0x005E0B22: mov edi, dword ptr [ebp + 8] */
    MEM32(esi) = 0x007F64A8u; /* 0x005E0B25: mov dword ptr [esi], 0x7f64a8 */
    MEM32(esi + 0xC) = 0; /* 0x005E0B2B: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005E0B32: mov dword ptr [esi + 0x10], 0 */
    /* test edi, edi */ /* 0x005E0B39: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0B6F; /* 0x005E0B3B: je 0x5e0b6f */
L_005E0B3D:
    eax = 0x005DFF70u; /* 0x005E0B3D: mov eax, 0x5dff70 */
    /* test eax, eax */ /* 0x005E0B42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0B6F; /* 0x005E0B44: je 0x5e0b6f */
L_005E0B46:
    /* test MEM8(esi + 0x4), 1 */ /* 0x005E0B46: test byte ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0B56; /* 0x005E0B4A: je 0x5e0b56 */
L_005E0B4C:
    PUSH32(esp, esi); /* 0x005E0B4C: push esi */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005E0B4D: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E0B53: add esp, 4 */
    _flag_k = FK_ADD;
L_005E0B56:
    PUSH32(esp, 0x44Fu); /* 0x005E0B56: push 0x44f */
    PUSH32(esp, esi); /* 0x005E0B5B: push esi */
    MEM32(esi + 0xC) = edi; /* 0x005E0B5C: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = 0x005DFF70u; /* 0x005E0B5F: mov dword ptr [esi + 0x10], 0x5dff70 */
    RECOMP_ICALL(MEM32(0x7CC9A0)); /* 0x005E0B66: call dword ptr [0x7cc9a0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E0B6C: add esp, 8 */
    _flag_k = FK_ADD;
L_005E0B6F:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E0B6F: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005E0B76: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E0B78: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E0B7B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E0B82: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E0B83: pop edi */
    esi = POP32_VAL(esp); /* 0x005E0B84: pop esi */
    esp = ebp; /* 0x005E0B85: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E0B87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E0B88: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005E0B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0B90u);

L_005E0B90:
    PUSH32(esp, ecx); /* 0x005E0B90: push ecx */
    MEM32(ecx) = 0x007F6518u; /* 0x005E0B91: mov dword ptr [ecx], 0x7f6518 */
    RECOMP_CALL(sub_005E0C40); /* 0x005E0B97: call 0x5e0c40 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x005E0B9C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E0B9D: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E0BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0BA0u);

L_005E0BA0:
    PUSH32(esp, ebp); /* 0x005E0BA0: push ebp */
    ebp = esp; /* 0x005E0BA1: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x005E0BA3: mov ecx, dword ptr [ebp + 0xc] */
    eax = 0x78787879u; /* 0x005E0BA6: mov eax, 0x78787879 */
    PUSH32(esp, esi); /* 0x005E0BAB: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E0BAC: push dword ptr [ebp + 0xc] */
    edx = ecx; /* 0x005E0BAF: mov edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(0x91FFB8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(0x91FFB8); /* 0x005E0BB1: sub edx, dword ptr [0x91ffb8] */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005E0BB7: push dword ptr [ebp + 0x14] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005E0BBA: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005E0BBC: push dword ptr [ebp + 0x10] */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005E0BBF: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    esi = edx; /* 0x005E0BC2: mov esi, edx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x005E0BC4: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x005E0BC4: shr esi, 0x1f */
    PUSH32(esp, ecx); /* 0x005E0BC7: push ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x005E0BC8: add esi, edx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005E0EE0); /* 0x005E0BCA: call 0x5e0ee0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x91FFB8); /* 0x005E0BCF: mov eax, dword ptr [0x91ffb8] */
    ecx = esi; /* 0x005E0BD4: mov ecx, esi */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x005E0BD6: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x005E0BD6: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x005E0BD9: add ecx, esi */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x005E0BDB: pop esi */
    ecx = eax + ecx * 4; /* 0x005E0BDC: lea ecx, [eax + ecx*4] */
    eax = MEM32(ebp + 0x8); /* 0x005E0BDF: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005E0BE2: mov dword ptr [eax], ecx */
    ebp = POP32_VAL(esp); /* 0x005E0BE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005E0BE5: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005E0C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0C40u);

L_005E0C40:
    PUSH32(esp, ebp); /* 0x005E0C40: push ebp */
    ebp = esp; /* 0x005E0C41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E0C43: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x005E0C46: push ecx */
    PUSH32(esp, esi); /* 0x005E0C47: push esi */
    esi = ecx; /* 0x005E0C48: mov esi, ecx */
    edx = MEM32(esi + 0x10); /* 0x005E0C4A: mov edx, dword ptr [esi + 0x10] */
    eax = edx; /* 0x005E0C4D: mov eax, edx */
    ecx = MEM32(esi + 0x14); /* 0x005E0C4F: mov ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x005E0C52: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0C70; /* 0x005E0C54: je 0x5e0c70 */
L_005E0C56:
    PUSH32(esp, ecx); /* 0x005E0C56: push ecx */
    PUSH32(esp, edx); /* 0x005E0C57: push edx */
    PUSH32(esp, esi); /* 0x005E0C58: push esi */
    RECOMP_ICALL(MEM32(0x7CC990)); /* 0x005E0C59: call dword ptr [0x7cc990] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E0C5F: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = 0; /* 0x005E0C62: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x14) = 0; /* 0x005E0C69: mov dword ptr [esi + 0x14], 0 */
L_005E0C70:
    esi = POP32_VAL(esp); /* 0x005E0C70: pop esi */
    esp = ebp; /* 0x005E0C71: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E0C73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E0C74: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E0C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0C80u);

L_005E0C80:
    PUSH32(esp, ebp); /* 0x005E0C80: push ebp */
    ebp = esp; /* 0x005E0C81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E0C83: push -1 */
    PUSH32(esp, 0x007B0140u); /* 0x005E0C85: push 0x7b0140 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E0C8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E0C90: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E0C91: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E0C94: push ebx */
    PUSH32(esp, esi); /* 0x005E0C95: push esi */
    PUSH32(esp, edi); /* 0x005E0C96: push edi */
    eax = MEM32(0x855000); /* 0x005E0C97: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E0C9C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E0C9E: push eax */
    eax = ebp + (-0xC); /* 0x005E0C9F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E0CA2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005E0CA8: mov dword ptr [ebp - 0x10], esp */
    RECOMP_CALL(sub_005E1210); /* 0x005E0CAB: call 0x5e1210 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x005E0CB0: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x005E0CB2: mov dword ptr [ebp - 0x14], esi */
    MEM16(esi + 0xC) = (uint16_t)(0); /* 0x005E0CB5: mov word ptr [esi + 0xc], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E0CBB: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, ecx); /* 0x005E0CC2: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E0CC3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x005E0CC6: push ecx */
    eax = esi + 0x10; /* 0x005E0CC7: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005E0CCA: push eax */
    RECOMP_CALL(sub_005E1730); /* 0x005E0CCB: call 0x5e1730 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E0CD0: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005E0CD7: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E0CD9: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E0CDC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E0CE3: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E0CE4: pop edi */
    esi = POP32_VAL(esp); /* 0x005E0CE5: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E0CE6: pop ebx */
    esp = ebp; /* 0x005E0CE7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E0CE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005E0CEA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005E0CED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0CEDu);

L_005E0CED:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005E0CED: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E0CF0: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E0CF6: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005E0CF9: push 0 */
    PUSH32(esp, 0); /* 0x005E0CFB: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005E0CFD: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005E0D02u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005E0D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0D10u);

L_005E0D10:
    PUSH32(esp, ebp); /* 0x005E0D10: push ebp */
    ebp = esp; /* 0x005E0D11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E0D13: push -1 */
    PUSH32(esp, 0x007B0160u); /* 0x005E0D15: push 0x7b0160 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E0D1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E0D20: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005E0D21: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E0D24: push ebx */
    PUSH32(esp, esi); /* 0x005E0D25: push esi */
    PUSH32(esp, edi); /* 0x005E0D26: push edi */
    eax = MEM32(0x855000); /* 0x005E0D27: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E0D2C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E0D2E: push eax */
    eax = ebp + (-0xC); /* 0x005E0D2F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E0D32: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005E0D38: mov dword ptr [ebp - 0x10], esp */
    ebx = ecx; /* 0x005E0D3B: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E0D3D: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x005E0D44: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0D73; /* 0x005E0D48: jne 0x5e0d73 */
L_005E0D4A:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005E0D4A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005E0D4D: push ecx */
    PUSH32(esp, MEM32(ebx)); /* 0x005E0D4E: push dword ptr [ebx] */
L_005E0D50:
    PUSH32(esp, 1); /* 0x005E0D50: push 1 */
L_005E0D52:
    ecx = ebx; /* 0x005E0D52: mov ecx, ebx */
L_005E0D54:
    esi = MEM32(ebp + 0x8); /* 0x005E0D54: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005E0D57: push esi */
    RECOMP_CALL(sub_005E1340); /* 0x005E0D58: call 0x5e1340 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x005E0D5D: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E0D5F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E0D62: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E0D69: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E0D6A: pop edi */
    esi = POP32_VAL(esp); /* 0x005E0D6B: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E0D6C: pop ebx */
    esp = ebp; /* 0x005E0D6D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E0D6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005E0D70: ret 0x10 */
L_005E0D73:
    ecx = MEM32(ebx); /* 0x005E0D73: mov ecx, dword ptr [ebx] */
    eax = MEM32(ebp + 0xC); /* 0x005E0D75: mov eax, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x10); /* 0x005E0D78: mov edi, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(ecx) */ /* 0x005E0D7B: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0D9A; /* 0x005E0D7D: jne 0x5e0d9a */
L_005E0D7F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005E0D7F: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E0D82: push eax */
    PUSH32(esp, edi); /* 0x005E0D83: push edi */
    RECOMP_CALL(sub_005E0380); /* 0x005E0D84: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E0D89: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0E61; /* 0x005E0D8B: je 0x5e0e61 */
L_005E0D91:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005E0D91: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005E0D94: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E0D95: push dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_005E0D50; /* 0x005E0D98: jmp 0x5e0d50 */
L_005E0D9A:
    /* cmp eax, ecx */ /* 0x005E0D9A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0DC0; /* 0x005E0D9C: jne 0x5e0dc0 */
L_005E0D9E:
    eax = MEM32(ecx + 0x8); /* 0x005E0D9E: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005E0DA1: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x005E0DA4: push edi */
    PUSH32(esp, eax); /* 0x005E0DA5: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x005E0DA6: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E0DAB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0E61; /* 0x005E0DAD: je 0x5e0e61 */
L_005E0DB3:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005E0DB3: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005E0DB6: push ecx */
    eax = MEM32(ebx); /* 0x005E0DB7: mov eax, dword ptr [ebx] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x005E0DB9: push dword ptr [eax + 8] */
    PUSH32(esp, 0); /* 0x005E0DBC: push 0 */
    RECOMP_BACKEDGE();
    goto L_005E0D52; /* 0x005E0DBE: jmp 0x5e0d52 */
L_005E0DC0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005E0DC0: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E0DC3: push eax */
    PUSH32(esp, edi); /* 0x005E0DC4: push edi */
    RECOMP_CALL(sub_005E0380); /* 0x005E0DC5: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E0DCA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0E0E; /* 0x005E0DCC: je 0x5e0e0e */
L_005E0DCE:
    eax = MEM32(ebp + 0xC); /* 0x005E0DCE: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x005E0DD1: mov dword ptr [ebp - 0x14], eax */
    ecx = ebp + (-0x14); /* 0x005E0DD4: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_0041B310); /* 0x005E0DD7: call 0x41b310 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005E0DDC: push edi */
    esi = MEM32(ebp + (-0x14)); /* 0x005E0DDD: mov esi, dword ptr [ebp - 0x14] */
    eax = esi + 0x10; /* 0x005E0DE0: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005E0DE3: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x005E0DE4: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E0DE9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0E0E; /* 0x005E0DEB: je 0x5e0e0e */
L_005E0DED:
    eax = MEM32(esi + 0x8); /* 0x005E0DED: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005E0DF0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005E0DF3: push ecx */
    ecx = ebx; /* 0x005E0DF4: mov ecx, ebx */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E0DF6: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E0E04; /* 0x005E0DFA: je 0x5e0e04 */
L_005E0DFC:
    PUSH32(esp, esi); /* 0x005E0DFC: push esi */
    PUSH32(esp, 0); /* 0x005E0DFD: push 0 */
    RECOMP_BACKEDGE();
    goto L_005E0D54; /* 0x005E0DFF: jmp 0x5e0d54 */
L_005E0E04:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E0E04: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x005E0E07: push 1 */
    RECOMP_BACKEDGE();
    goto L_005E0D54; /* 0x005E0E09: jmp 0x5e0d54 */
L_005E0E0E:
    PUSH32(esp, edi); /* 0x005E0E0E: push edi */
    eax = MEM32(ebp + 0xC); /* 0x005E0E0F: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005E0E12: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E0E15: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x005E0E16: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E0E1B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0E61; /* 0x005E0E1D: je 0x5e0e61 */
L_005E0E1F:
    esi = MEM32(ebp + 0xC); /* 0x005E0E1F: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005E0E22: mov dword ptr [ebp - 0x14], esi */
    ecx = ebp + (-0x14); /* 0x005E0E25: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_0040B880); /* 0x005E0E28: call 0x40b880 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x14)); /* 0x005E0E2D: mov edi, dword ptr [ebp - 0x14] */
    /* cmp edi, MEM32(ebx) */ /* 0x005E0E30: cmp edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E0E47; /* 0x005E0E32: je 0x5e0e47 */
L_005E0E34:
    eax = edi + 0x10; /* 0x005E0E34: lea eax, [edi + 0x10] */
    PUSH32(esp, eax); /* 0x005E0E37: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x005E0E38: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_005E0380); /* 0x005E0E3B: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E0E40: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E0E5E; /* 0x005E0E42: je 0x5e0e5e */
L_005E0E44:
    esi = MEM32(ebp + 0xC); /* 0x005E0E44: mov esi, dword ptr [ebp + 0xc] */
L_005E0E47:
    eax = MEM32(esi + 0x8); /* 0x005E0E47: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005E0E4A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005E0E4D: push ecx */
    ecx = ebx; /* 0x005E0E4E: mov ecx, ebx */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E0E50: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E0DFC; /* 0x005E0E54: jne 0x5e0dfc */
L_005E0E56:
    PUSH32(esp, edi); /* 0x005E0E56: push edi */
    PUSH32(esp, 1); /* 0x005E0E57: push 1 */
    RECOMP_BACKEDGE();
    goto L_005E0D54; /* 0x005E0E59: jmp 0x5e0d54 */
L_005E0E5E:
    edi = MEM32(ebp + 0x10); /* 0x005E0E5E: mov edi, dword ptr [ebp + 0x10] */
L_005E0E61:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E0E61: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005E0E68: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x005E0E6B: push edi */
    PUSH32(esp, 0); /* 0x005E0E6C: push 0 */
    eax = ebp + (-0x18); /* 0x005E0E6E: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x005E0E71: push eax */
    ecx = ebx; /* 0x005E0E72: mov ecx, ebx */
    RECOMP_CALL(sub_005E1530); /* 0x005E0E74: call 0x5e1530 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x005E0E79: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x005E0E7B: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005E0E7E: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E0E80: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E0E83: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E0E8A: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E0E8B: pop edi */
    esi = POP32_VAL(esp); /* 0x005E0E8C: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E0E8D: pop ebx */
    esp = ebp; /* 0x005E0E8E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E0E90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005E0E91: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005E0E94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0E94u);

L_005E0E94:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005E0E94: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_005E1190); /* 0x005E0E97: call 0x5e1190 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005E0E9C: push 0 */
    PUSH32(esp, 0); /* 0x005E0E9E: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005E0EA0: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005E0EA5u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005E0EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E0EE0u);

L_005E0EE0:
    PUSH32(esp, ebp); /* 0x005E0EE0: push ebp */
    ebp = esp; /* 0x005E0EE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E0EE3: push -1 */
    PUSH32(esp, 0x007B0180u); /* 0x005E0EE5: push 0x7b0180 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E0EEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E0EF0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005E0EF1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E0EF4: push ebx */
    PUSH32(esp, esi); /* 0x005E0EF5: push esi */
    PUSH32(esp, edi); /* 0x005E0EF6: push edi */
    eax = MEM32(0x855000); /* 0x005E0EF7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E0EFC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E0EFE: push eax */
    eax = ebp + (-0xC); /* 0x005E0EFF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E0F02: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005E0F08: mov dword ptr [ebp - 0x10], esp */
    ebx = MEM32(ebp + 0x10); /* 0x005E0F0B: mov ebx, dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x005E0F0E: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0xC); /* 0x005E0F10: sub ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    eax = 0x78787879u; /* 0x005E0F13: mov eax, 0x78787879 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E0F18: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005E0F1A: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    esi = edx; /* 0x005E0F1D: mov esi, edx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x005E0F1F: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x005E0F1F: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x005E0F22: add esi, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E10C3; /* 0x005E0F24: je 0x5e10c3 */
L_005E0F2A:
    ecx = MEM32(0x91FFC0); /* 0x005E0F2A: mov ecx, dword ptr [0x91ffc0] */
    edi = MEM32(0x91FFBC); /* 0x005E0F30: mov edi, dword ptr [0x91ffbc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x005E0F36: sub ecx, edi */
    _flag_k = FK_CMP;
    eax = 0x78787879u; /* 0x005E0F38: mov eax, 0x78787879 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E0F3D: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005E0F3F: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x005E0F42: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E0F44: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E0F44: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E0F47: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x005E0F49: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E107A; /* 0x005E0F4B: jae 0x5e107a */
L_005E0F51:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x91FFB8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(0x91FFB8); /* 0x005E0F51: sub edi, dword ptr [0x91ffb8] */
    _flag_k = FK_CMP;
    eax = 0x78787879u; /* 0x005E0F57: mov eax, 0x78787879 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edi); /* 0x005E0F5C: imul edi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005E0F5E: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ecx = edx; /* 0x005E0F61: mov ecx, edx */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x005E0F63: shr ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((ecx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 31u; /* 0x005E0F63: shr ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x005E0F66: add ecx, edx */
    _flag_k = FK_ADD;
    eax = 0x03C3C3C3u; /* 0x005E0F68: mov eax, 0x3c3c3c3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005E0F6D: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x005E0F6F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E0F7E; /* 0x005E0F71: jae 0x5e0f7e */
L_005E0F73:
    PUSH32(esp, 0x007DFAB0u); /* 0x005E0F73: push 0x7dfab0 */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005E0F78: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005E0F7E:
    eax = ecx + esi; /* 0x005E0F7E: lea eax, [ecx + esi] */
    PUSH32(esp, eax); /* 0x005E0F81: push eax */
    RECOMP_CALL(sub_005E12B0); /* 0x005E0F82: call 0x5e12b0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x005E0F87: mov ebx, eax */
    PUSH32(esp, ebx); /* 0x005E0F89: push ebx */
    RECOMP_CALL(sub_005E1300); /* 0x005E0F8A: call 0x5e1300 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x005E0F8F: mov edi, eax */
    MEM32(ebp + (-0x18)) = edi; /* 0x005E0F91: mov dword ptr [ebp - 0x18], edi */
    MEM32(ebp + (-0x14)) = edi; /* 0x005E0F94: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E0F97: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E0F9E: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E0FA1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x005E0FA4: push edi */
    edx = MEM32(ebp + 0x8); /* 0x005E0FA5: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(0x91FFB8); /* 0x005E0FA8: mov ecx, dword ptr [0x91ffb8] */
    RECOMP_CALL(sub_005E18B0); /* 0x005E0FAE: call 0x5e18b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005E0FB3: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x005E0FB6: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E0FB9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x005E0FBC: push ecx */
    PUSH32(esp, eax); /* 0x005E0FBD: push eax */
    edx = MEM32(ebp + 0x10); /* 0x005E0FBE: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x005E0FC1: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_005E18B0); /* 0x005E0FC4: call 0x5e18b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E0FC9: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x005E0FCC: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E0FCF: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E0FD2: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x005E0FD5: push eax */
    edx = MEM32(0x91FFBC); /* 0x005E0FD6: mov edx, dword ptr [0x91ffbc] */
    ecx = MEM32(ebp + 0x8); /* 0x005E0FDC: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_005E18B0); /* 0x005E0FDF: call 0x5e18b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x005E0FE4: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E0FE7: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(0x91FFBC); /* 0x005E0FEE: mov ecx, dword ptr [0x91ffbc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x91FFB8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(0x91FFB8); /* 0x005E0FF4: sub ecx, dword ptr [0x91ffb8] */
    _flag_k = FK_CMP;
    eax = 0x78787879u; /* 0x005E0FFA: mov eax, 0x78787879 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E0FFF: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005E1001: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x005E1004: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E1006: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E1006: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E1009: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x005E100B: add esi, eax */
    _flag_k = FK_ADD;
    ecx = MEM32(0x91FFB8); /* 0x005E100D: mov ecx, dword ptr [0x91ffb8] */
    /* test ecx, ecx */ /* 0x005E1013: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E1035; /* 0x005E1015: je 0x5e1035 */
L_005E1017:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E1017: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x005E101A: push ecx */
    edx = MEM32(0x91FFBC); /* 0x005E101B: mov edx, dword ptr [0x91ffbc] */
    RECOMP_CALL(sub_005E10E0); /* 0x005E1021: call 0x5e10e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x91FFB8)); /* 0x005E1026: push dword ptr [0x91ffb8] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E102C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E1032: add esp, 0xc */
    _flag_k = FK_ADD;
L_005E1035:
    eax = ebx; /* 0x005E1035: mov eax, ebx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x005E1037: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x005E1037: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x005E103A: add eax, ebx */
    _flag_k = FK_ADD;
    eax = edi + eax * 4; /* 0x005E103C: lea eax, [edi + eax*4] */
    MEM32(0x91FFC0) = eax; /* 0x005E103F: mov dword ptr [0x91ffc0], eax */
    eax = esi; /* 0x005E1044: mov eax, esi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x005E1046: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x005E1046: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005E1049: add eax, esi */
    _flag_k = FK_ADD;
    eax = edi + eax * 4; /* 0x005E104B: lea eax, [edi + eax*4] */
    MEM32(0x91FFB8) = edi; /* 0x005E104E: mov dword ptr [0x91ffb8], edi */
    goto L_005E10BE; /* 0x005E1054: jmp 0x5e10be */
L_005E107A:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E107A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x005E107D: push ecx */
    PUSH32(esp, edi); /* 0x005E107E: push edi */
    edx = ebx; /* 0x005E107F: mov edx, ebx */
    ecx = MEM32(ebp + 0xC); /* 0x005E1081: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_005E18B0); /* 0x005E1084: call 0x5e18b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E1089: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = esi; /* 0x005E108C: mov edi, esi */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x005E108E: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x005E108E: shl edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x005E1091: add edi, esi */
    _flag_k = FK_ADD;
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x005E1093: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x005E1093: shl edi, 2 */
    eax = MEM32(0x91FFBC); /* 0x005E1096: mov eax, dword ptr [0x91ffbc] */
    edx = edi + eax; /* 0x005E109B: lea edx, [edi + eax] */
    ecx = MEM32(ebp + 0x8); /* 0x005E109E: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, eax */ /* 0x005E10A1: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E10BC; /* 0x005E10A3: je 0x5e10bc */
L_005E10A5:
    /* cmp eax, edx */ /* 0x005E10A5: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E10BC; /* 0x005E10A7: je 0x5e10bc */
L_005E10A9:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E10A9: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x005E10AC: push edx */
    edx = eax; /* 0x005E10AD: mov edx, eax */
    RECOMP_CALL(sub_005E17C0); /* 0x005E10AF: call 0x5e17c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E10B4: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(0x91FFBC); /* 0x005E10B7: mov eax, dword ptr [0x91ffbc] */
L_005E10BC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005E10BC: add eax, edi */
    _flag_k = FK_ADD;
L_005E10BE:
    MEM32(0x91FFBC) = eax; /* 0x005E10BE: mov dword ptr [0x91ffbc], eax */
L_005E10C3:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E10C3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E10C6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E10CD: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E10CE: pop edi */
    esi = POP32_VAL(esp); /* 0x005E10CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E10D0: pop ebx */
    esp = ebp; /* 0x005E10D1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E10D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005E10D4: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005E1056(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1056u);

L_005E1056:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E1056: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x005E1059: push ecx */
    edx = MEM32(ebp + (-0x14)); /* 0x005E105A: mov edx, dword ptr [ebp - 0x14] */
    esi = MEM32(ebp + (-0x18)); /* 0x005E105D: mov esi, dword ptr [ebp - 0x18] */
    ecx = esi; /* 0x005E1060: mov ecx, esi */
    RECOMP_CALL(sub_005E10E0); /* 0x005E1062: call 0x5e10e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x005E1067: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E1068: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E106E: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005E1071: push 0 */
    PUSH32(esp, 0); /* 0x005E1073: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005E1075: call 0x780016 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x005E107A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x005E107D: push ecx */
    PUSH32(esp, edi); /* 0x005E107E: push edi */
    edx = ebx; /* 0x005E107F: mov edx, ebx */
    ecx = MEM32(ebp + 0xC); /* 0x005E1081: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_005E18B0); /* 0x005E1084: call 0x5e18b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E1089: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = esi; /* 0x005E108C: mov edi, esi */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x005E108E: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x005E108E: shl edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x005E1091: add edi, esi */
    _flag_k = FK_ADD;
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x005E1093: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x005E1093: shl edi, 2 */
    eax = MEM32(0x91FFBC); /* 0x005E1096: mov eax, dword ptr [0x91ffbc] */
    edx = edi + eax; /* 0x005E109B: lea edx, [edi + eax] */
    ecx = MEM32(ebp + 0x8); /* 0x005E109E: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, eax */ /* 0x005E10A1: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E10BC; /* 0x005E10A3: je 0x5e10bc */
L_005E10A5:
    /* cmp eax, edx */ /* 0x005E10A5: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E10BC; /* 0x005E10A7: je 0x5e10bc */
L_005E10A9:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E10A9: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x005E10AC: push edx */
    edx = eax; /* 0x005E10AD: mov edx, eax */
    RECOMP_CALL(sub_005E17C0); /* 0x005E10AF: call 0x5e17c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E10B4: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(0x91FFBC); /* 0x005E10B7: mov eax, dword ptr [0x91ffbc] */
L_005E10BC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005E10BC: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(0x91FFBC) = eax; /* 0x005E10BE: mov dword ptr [0x91ffbc], eax */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E10C3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E10C6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E10CD: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E10CE: pop edi */
    esi = POP32_VAL(esp); /* 0x005E10CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E10D0: pop ebx */
    esp = ebp; /* 0x005E10D1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E10D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005E10D4: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005E10E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E10E0u);

L_005E10E0:
    PUSH32(esp, ebp); /* 0x005E10E0: push ebp */
    ebp = esp; /* 0x005E10E1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E10E3: push -1 */
    PUSH32(esp, 0x00798376u); /* 0x005E10E5: push 0x798376 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E10EA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E10F0: push eax */
    PUSH32(esp, ecx); /* 0x005E10F1: push ecx */
    PUSH32(esp, ebx); /* 0x005E10F2: push ebx */
    PUSH32(esp, esi); /* 0x005E10F3: push esi */
    PUSH32(esp, edi); /* 0x005E10F4: push edi */
    eax = MEM32(0x855000); /* 0x005E10F5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E10FA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E10FC: push eax */
    eax = ebp + (-0xC); /* 0x005E10FD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E1100: mov dword ptr fs:[0], eax */
    ebx = edx; /* 0x005E1106: mov ebx, edx */
    esi = ecx; /* 0x005E1108: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E110A: mov dword ptr [ebp - 0x10], esi */
    /* cmp esi, ebx */ /* 0x005E110D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E1178; /* 0x005E110F: je 0x5e1178 */
L_005E1111:
    edi = MEM32(0x7CC694); /* 0x005E1111: mov edi, dword ptr [0x7cc694] */
    goto L_005E1120; /* 0x005E1117: jmp 0x5e1120 */
L_005E1120:
    MEM32(ebp + (-0x4)) = 0; /* 0x005E1120: mov dword ptr [ebp - 4], 0 */
    /* cmp MEM32(esi + 0x34), 0x10u */ /* 0x005E1127: cmp dword ptr [esi + 0x34], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E1135; /* 0x005E112B: jb 0x5e1135 */
L_005E112D:
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x005E112D: push dword ptr [esi + 0x20] */
    RECOMP_ICALL(edi); /* 0x005E1130: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E1132: add esp, 4 */
    _flag_k = FK_ADD;
L_005E1135:
    MEM32(esi + 0x34) = 0xFu; /* 0x005E1135: mov dword ptr [esi + 0x34], 0xf */
    MEM32(esi + 0x30) = 0; /* 0x005E113C: mov dword ptr [esi + 0x30], 0 */
    MEM8(esi + 0x20) = (uint8_t)(0); /* 0x005E1143: mov byte ptr [esi + 0x20], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E1147: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x1C), 0x10u */ /* 0x005E114E: cmp dword ptr [esi + 0x1c], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E115C; /* 0x005E1152: jb 0x5e115c */
L_005E1154:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x005E1154: push dword ptr [esi + 8] */
    RECOMP_ICALL(edi); /* 0x005E1157: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E1159: add esp, 4 */
    _flag_k = FK_ADD;
L_005E115C:
    MEM32(esi + 0x1C) = 0xFu; /* 0x005E115C: mov dword ptr [esi + 0x1c], 0xf */
    MEM32(esi + 0x18) = 0; /* 0x005E1163: mov dword ptr [esi + 0x18], 0 */
    MEM8(esi + 0x8) = (uint8_t)(0); /* 0x005E116A: mov byte ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x44u; /* 0x005E116E: add esi, 0x44 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = esi; /* 0x005E1171: mov dword ptr [ebp - 0x10], esi */
    /* cmp esi, ebx */ /* 0x005E1174: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E1120; /* 0x005E1176: jne 0x5e1120 */
L_005E1178:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E1178: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E117B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E1182: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E1183: pop edi */
    esi = POP32_VAL(esp); /* 0x005E1184: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E1185: pop ebx */
    esp = ebp; /* 0x005E1186: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E1188: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E1189: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E1190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1190u);

L_005E1190:
    PUSH32(esp, ebp); /* 0x005E1190: push ebp */
    ebp = esp; /* 0x005E1191: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E1193: push -1 */
    PUSH32(esp, 0x007B01A8u); /* 0x005E1195: push 0x7b01a8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E119A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E11A0: push eax */
    PUSH32(esp, ebx); /* 0x005E11A1: push ebx */
    PUSH32(esp, esi); /* 0x005E11A2: push esi */
    eax = MEM32(0x855000); /* 0x005E11A3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E11A8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E11AA: push eax */
    eax = ebp + (-0xC); /* 0x005E11AB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E11AE: mov dword ptr fs:[0], eax */
    ebx = MEM32(ebp + 0x8); /* 0x005E11B4: mov ebx, dword ptr [ebp + 8] */
    esi = ebx + 0x10; /* 0x005E11B7: lea esi, [ebx + 0x10] */
    MEM32(ebp + 0x8) = esi; /* 0x005E11BA: mov dword ptr [ebp + 8], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E11BD: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005E11C4: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E11D5; /* 0x005E11C8: jb 0x5e11d5 */
L_005E11CA:
    PUSH32(esp, MEM32(esi)); /* 0x005E11CA: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E11CC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E11D2: add esp, 4 */
    _flag_k = FK_ADD;
L_005E11D5:
    MEM32(esi + 0x14) = 0xFu; /* 0x005E11D5: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005E11DC: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, ebx); /* 0x005E11E3: push ebx */
    MEM8(esi) = (uint8_t)(0); /* 0x005E11E4: mov byte ptr [esi], 0 */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E11E7: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E11ED: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005E11F0: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E11F3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E11FA: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E11FB: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E11FC: pop ebx */
    esp = ebp; /* 0x005E11FD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E11FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E1200: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E1210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1210u);

L_005E1210:
    PUSH32(esp, ebp); /* 0x005E1210: push ebp */
    ebp = esp; /* 0x005E1211: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E1213: push -1 */
    PUSH32(esp, 0x007B01D0u); /* 0x005E1215: push 0x7b01d0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E121A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E1220: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E1221: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E1224: push ebx */
    PUSH32(esp, esi); /* 0x005E1225: push esi */
    PUSH32(esp, edi); /* 0x005E1226: push edi */
    eax = MEM32(0x855000); /* 0x005E1227: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E122C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E122E: push eax */
    eax = ebp + (-0xC); /* 0x005E122F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E1232: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005E1238: mov dword ptr [ebp - 0x10], esp */
    edi = ecx; /* 0x005E123B: mov edi, ecx */
    PUSH32(esp, 0x38u); /* 0x005E123D: push 0x38 */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005E123F: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E1245: add esp, 4 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x005E1248: mov esi, eax */
    MEM32(ebp + (-0x14)) = esi; /* 0x005E124A: mov dword ptr [ebp - 0x14], esi */
    /* test esi, esi */ /* 0x005E124D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E1257; /* 0x005E124F: jne 0x5e1257 */
L_005E1251:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005E1251: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005E1257:
    MEM32(ebp + (-0x4)) = 0; /* 0x005E1257: mov dword ptr [ebp - 4], 0 */
    PUSH32(esp, edi); /* 0x005E125E: push edi */
    PUSH32(esp, esi); /* 0x005E125F: push esi */
    RECOMP_CALL(sub_0040BAA0); /* 0x005E1260: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005E1265: push edi */
    eax = esi + 0x4; /* 0x005E1266: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x005E1269: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005E126A: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x005E126F: push edi */
    eax = esi + 0x8; /* 0x005E1270: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x005E1273: push eax */
    RECOMP_CALL(sub_0040BAA0); /* 0x005E1274: call 0x40baa0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E1279: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005E1280: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E1282: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E1285: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E128C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E128D: pop edi */
    esi = POP32_VAL(esp); /* 0x005E128E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E128F: pop ebx */
    esp = ebp; /* 0x005E1290: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E1292: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E1293: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E1294(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1294u);

L_005E1294:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005E1294: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E1297: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E129D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005E12A0: push 0 */
    PUSH32(esp, 0); /* 0x005E12A2: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005E12A4: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005E12A9u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005E12B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E12B0u);

L_005E12B0:
    PUSH32(esp, ebp); /* 0x005E12B0: push ebp */
    ebp = esp; /* 0x005E12B1: mov ebp, esp */
    ecx = MEM32(0x91FFC0); /* 0x005E12B3: mov ecx, dword ptr [0x91ffc0] */
    eax = 0x78787879u; /* 0x005E12B9: mov eax, 0x78787879 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x91FFB8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(0x91FFB8); /* 0x005E12BE: sub ecx, dword ptr [0x91ffb8] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E12C4: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, esi); /* 0x005E12C6: push esi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005E12C7: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = 0x03C3C3C3u; /* 0x005E12CA: mov eax, 0x3c3c3c3 */
    esi = edx; /* 0x005E12CF: mov esi, edx */
    if (31u) _cf = (((esi) >> 30) & 1u); /* 0x005E12D1: shr esi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((esi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 31u; /* 0x005E12D1: shr esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x005E12D4: add esi, edx */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x005E12D6: mov ecx, esi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x005E12D8: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x005E12D8: shr ecx, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x005E12DA: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x005E12DC: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E12F0; /* 0x005E12DE: jae 0x5e12f0 */
L_005E12E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005E12E0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x005E12E2: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = MEM32(ebp + 0x8); } /* 0x005E12E5: cmovb esi, dword ptr [ebp + 8] */
    eax = esi; /* 0x005E12E9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005E12EB: pop esi */
    ebp = POP32_VAL(esp); /* 0x005E12EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E12ED: ret 4 */
L_005E12F0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x005E12F0: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x005E12F2: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = MEM32(ebp + 0x8); } /* 0x005E12F5: cmovb esi, dword ptr [ebp + 8] */
    eax = esi; /* 0x005E12F9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005E12FB: pop esi */
    ebp = POP32_VAL(esp); /* 0x005E12FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E12FD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E1300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1300u);

L_005E1300:
    PUSH32(esp, ebp); /* 0x005E1300: push ebp */
    ebp = esp; /* 0x005E1301: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x005E1303: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E1306: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x005E1308: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E1332; /* 0x005E130A: je 0x5e1332 */
L_005E130C:
    /* cmp ecx, 0x03C3C3C3u */ /* 0x005E130C: cmp ecx, 0x3c3c3c3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x03C3C3C3u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005E132C; /* 0x005E1312: ja 0x5e132c */
L_005E1314:
    eax = ecx; /* 0x005E1314: mov eax, ecx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x005E1316: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x005E1316: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x005E1319: add eax, ecx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x005E131B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x005E131B: shl eax, 2 */
    PUSH32(esp, eax); /* 0x005E131E: push eax */
    RECOMP_ICALL(MEM32(0x7CC698)); /* 0x005E131F: call dword ptr [0x7cc698] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E1325: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x005E1328: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E1332; /* 0x005E132A: jne 0x5e1332 */
L_005E132C:
    RECOMP_ICALL(MEM32(0x7CC40C)); /* 0x005E132C: call dword ptr [0x7cc40c] */
    RECOMP_FLAGS_IN();
L_005E1332:
    ebp = POP32_VAL(esp); /* 0x005E1332: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E1333: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E1340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1340u);

L_005E1340:
    PUSH32(esp, ebp); /* 0x005E1340: push ebp */
    ebp = esp; /* 0x005E1341: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E1343: push -1 */
    PUSH32(esp, 0x007B01F8u); /* 0x005E1345: push 0x7b01f8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E134A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E1350: push eax */
    PUSH32(esp, ebx); /* 0x005E1351: push ebx */
    PUSH32(esp, esi); /* 0x005E1352: push esi */
    PUSH32(esp, edi); /* 0x005E1353: push edi */
    eax = MEM32(0x855000); /* 0x005E1354: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E1359: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E135B: push eax */
    eax = ebp + (-0xC); /* 0x005E135C: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E135F: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E1365: mov edi, ecx */
    eax = MEM32(edi + 0x4); /* 0x005E1367: mov eax, dword ptr [edi + 4] */
    ebx = MEM32(ebp + 0x18); /* 0x005E136A: mov ebx, dword ptr [ebp + 0x18] */
    /* cmp eax, 0x04924923u */ /* 0x005E136D: cmp eax, 0x4924923 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x04924923u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E13B6; /* 0x005E1372: jb 0x5e13b6 */
L_005E1374:
    esi = ebx + 0x10; /* 0x005E1374: lea esi, [ebx + 0x10] */
    MEM32(ebp + 0xC) = esi; /* 0x005E1377: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E137A: mov dword ptr [ebp - 4], 0xffffffff */
    /* cmp MEM32(esi + 0x14), 0x10u */ /* 0x005E1381: cmp dword ptr [esi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(0x7CC694); /* 0x005E1385: mov edi, dword ptr [0x7cc694] */
    if (CMP_B(_flag_a, _flag_b)) goto L_005E1394; /* 0x005E138B: jb 0x5e1394 */
L_005E138D:
    PUSH32(esp, MEM32(esi)); /* 0x005E138D: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x005E138F: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E1391: add esp, 4 */
    _flag_k = FK_ADD;
L_005E1394:
    MEM32(esi + 0x14) = 0xFu; /* 0x005E1394: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005E139B: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, ebx); /* 0x005E13A2: push ebx */
    MEM8(esi) = (uint8_t)(0); /* 0x005E13A3: mov byte ptr [esi], 0 */
    RECOMP_ICALL(edi); /* 0x005E13A6: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E13A8: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x007CD71Cu); /* 0x005E13AB: push 0x7cd71c */
    RECOMP_ICALL(MEM32(0x7CC414)); /* 0x005E13B0: call dword ptr [0x7cc414] */
    RECOMP_FLAGS_IN();
L_005E13B6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x005E13B6: inc eax */
    _flag_k = FK_INC;
    MEM32(edi + 0x4) = eax; /* 0x005E13B7: mov dword ptr [edi + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x005E13BA: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = eax; /* 0x005E13BD: mov dword ptr [ebx + 4], eax */
    ecx = MEM32(edi); /* 0x005E13C0: mov ecx, dword ptr [edi] */
    /* cmp eax, ecx */ /* 0x005E13C2: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E13D4; /* 0x005E13C4: jne 0x5e13d4 */
L_005E13C6:
    MEM32(ecx + 0x4) = ebx; /* 0x005E13C6: mov dword ptr [ecx + 4], ebx */
    eax = MEM32(edi); /* 0x005E13C9: mov eax, dword ptr [edi] */
    MEM32(eax) = ebx; /* 0x005E13CB: mov dword ptr [eax], ebx */
    eax = MEM32(edi); /* 0x005E13CD: mov eax, dword ptr [edi] */
    MEM32(eax + 0x8) = ebx; /* 0x005E13CF: mov dword ptr [eax + 8], ebx */
    goto L_005E13F3; /* 0x005E13D2: jmp 0x5e13f3 */
L_005E13D4:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x005E13D4: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E13E6; /* 0x005E13D8: je 0x5e13e6 */
L_005E13DA:
    MEM32(eax) = ebx; /* 0x005E13DA: mov dword ptr [eax], ebx */
    ecx = MEM32(edi); /* 0x005E13DC: mov ecx, dword ptr [edi] */
    /* cmp eax, MEM32(ecx) */ /* 0x005E13DE: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E13F3; /* 0x005E13E0: jne 0x5e13f3 */
L_005E13E2:
    MEM32(ecx) = ebx; /* 0x005E13E2: mov dword ptr [ecx], ebx */
    goto L_005E13F3; /* 0x005E13E4: jmp 0x5e13f3 */
L_005E13E6:
    MEM32(eax + 0x8) = ebx; /* 0x005E13E6: mov dword ptr [eax + 8], ebx */
    ecx = MEM32(edi); /* 0x005E13E9: mov ecx, dword ptr [edi] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x005E13EB: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E13F3; /* 0x005E13EE: jne 0x5e13f3 */
L_005E13F0:
    MEM32(ecx + 0x8) = ebx; /* 0x005E13F0: mov dword ptr [ecx + 8], ebx */
L_005E13F3:
    eax = MEM32(ebx + 0x4); /* 0x005E13F3: mov eax, dword ptr [ebx + 4] */
    esi = ebx; /* 0x005E13F6: mov esi, ebx */
    /* cmp MEM8(eax + 0xC), 0 */ /* 0x005E13F8: cmp byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E150C; /* 0x005E13FC: jne 0x5e150c */
L_005E1402:
    eax = MEM32(esi + 0x4); /* 0x005E1402: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax + 0x4); /* 0x005E1405: mov edx, dword ptr [eax + 4] */
    ecx = MEM32(edx); /* 0x005E1408: mov ecx, dword ptr [edx] */
    /* cmp eax, ecx */ /* 0x005E140A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E1482; /* 0x005E140C: jne 0x5e1482 */
L_005E140E:
    ecx = MEM32(edx + 0x8); /* 0x005E140E: mov ecx, dword ptr [edx + 8] */
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005E1411: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E1488; /* 0x005E1415: je 0x5e1488 */
L_005E1417:
    /* cmp esi, MEM32(eax + 0x8) */ /* 0x005E1417: cmp esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E1426; /* 0x005E141A: jne 0x5e1426 */
L_005E141C:
    esi = eax; /* 0x005E141C: mov esi, eax */
    ecx = edi; /* 0x005E141E: mov ecx, edi */
    PUSH32(esp, esi); /* 0x005E1420: push esi */
    RECOMP_CALL(sub_0040B6F0); /* 0x005E1421: call 0x40b6f0 */
    RECOMP_FLAGS_IN();
L_005E1426:
    eax = MEM32(esi + 0x4); /* 0x005E1426: mov eax, dword ptr [esi + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005E1429: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x005E142D: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x005E1430: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x005E1433: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x005E1437: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x005E143A: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx); /* 0x005E143D: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x8); /* 0x005E143F: mov eax, dword ptr [edx + 8] */
    MEM32(ecx) = eax; /* 0x005E1442: mov dword ptr [ecx], eax */
    eax = MEM32(edx + 0x8); /* 0x005E1444: mov eax, dword ptr [edx + 8] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E1447: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E1450; /* 0x005E144B: jne 0x5e1450 */
L_005E144D:
    MEM32(eax + 0x4) = ecx; /* 0x005E144D: mov dword ptr [eax + 4], ecx */
L_005E1450:
    eax = MEM32(ecx + 0x4); /* 0x005E1450: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x005E1453: mov dword ptr [edx + 4], eax */
    eax = MEM32(edi); /* 0x005E1456: mov eax, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x005E1458: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E1468; /* 0x005E145B: jne 0x5e1468 */
L_005E145D:
    MEM32(eax + 0x4) = edx; /* 0x005E145D: mov dword ptr [eax + 4], edx */
    MEM32(edx + 0x8) = ecx; /* 0x005E1460: mov dword ptr [edx + 8], ecx */
    goto L_005E14FC; /* 0x005E1463: jmp 0x5e14fc */
L_005E1468:
    eax = MEM32(ecx + 0x4); /* 0x005E1468: mov eax, dword ptr [ecx + 4] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x005E146B: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E147B; /* 0x005E146E: jne 0x5e147b */
L_005E1470:
    MEM32(eax + 0x8) = edx; /* 0x005E1470: mov dword ptr [eax + 8], edx */
    MEM32(edx + 0x8) = ecx; /* 0x005E1473: mov dword ptr [edx + 8], ecx */
    goto L_005E14FC; /* 0x005E1476: jmp 0x5e14fc */
L_005E147B:
    MEM32(eax) = edx; /* 0x005E147B: mov dword ptr [eax], edx */
    MEM32(edx + 0x8) = ecx; /* 0x005E147D: mov dword ptr [edx + 8], ecx */
    goto L_005E14FC; /* 0x005E1480: jmp 0x5e14fc */
L_005E1482:
    /* cmp MEM8(ecx + 0xC), 0 */ /* 0x005E1482: cmp byte ptr [ecx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E14A2; /* 0x005E1486: jne 0x5e14a2 */
L_005E1488:
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005E1488: mov byte ptr [eax + 0xc], 1 */
    MEM8(ecx + 0xC) = (uint8_t)(1); /* 0x005E148C: mov byte ptr [ecx + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x005E1490: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x005E1493: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x005E1496: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x005E149A: mov eax, dword ptr [esi + 4] */
    esi = MEM32(eax + 0x4); /* 0x005E149D: mov esi, dword ptr [eax + 4] */
    goto L_005E14FF; /* 0x005E14A0: jmp 0x5e14ff */
L_005E14A2:
    /* cmp esi, MEM32(eax) */ /* 0x005E14A2: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E14B0; /* 0x005E14A4: jne 0x5e14b0 */
L_005E14A6:
    esi = eax; /* 0x005E14A6: mov esi, eax */
    ecx = edi; /* 0x005E14A8: mov ecx, edi */
    PUSH32(esp, esi); /* 0x005E14AA: push esi */
    RECOMP_CALL(sub_0040B750); /* 0x005E14AB: call 0x40b750 */
    RECOMP_FLAGS_IN();
L_005E14B0:
    eax = MEM32(esi + 0x4); /* 0x005E14B0: mov eax, dword ptr [esi + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005E14B3: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(esi + 0x4); /* 0x005E14B7: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x005E14BA: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(0); /* 0x005E14BD: mov byte ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x4); /* 0x005E14C1: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x005E14C4: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx + 0x8); /* 0x005E14C7: mov edx, dword ptr [ecx + 8] */
    eax = MEM32(edx); /* 0x005E14CA: mov eax, dword ptr [edx] */
    MEM32(ecx + 0x8) = eax; /* 0x005E14CC: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edx); /* 0x005E14CF: mov eax, dword ptr [edx] */
    /* cmp MEM8(eax + 0xD), 0 */ /* 0x005E14D1: cmp byte ptr [eax + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E14DA; /* 0x005E14D5: jne 0x5e14da */
L_005E14D7:
    MEM32(eax + 0x4) = ecx; /* 0x005E14D7: mov dword ptr [eax + 4], ecx */
L_005E14DA:
    eax = MEM32(ecx + 0x4); /* 0x005E14DA: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x005E14DD: mov dword ptr [edx + 4], eax */
    eax = MEM32(edi); /* 0x005E14E0: mov eax, dword ptr [edi] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x005E14E2: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E14EC; /* 0x005E14E5: jne 0x5e14ec */
L_005E14E7:
    MEM32(eax + 0x4) = edx; /* 0x005E14E7: mov dword ptr [eax + 4], edx */
    goto L_005E14FA; /* 0x005E14EA: jmp 0x5e14fa */
L_005E14EC:
    eax = MEM32(ecx + 0x4); /* 0x005E14EC: mov eax, dword ptr [ecx + 4] */
    /* cmp ecx, MEM32(eax) */ /* 0x005E14EF: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E14F7; /* 0x005E14F1: jne 0x5e14f7 */
L_005E14F3:
    MEM32(eax) = edx; /* 0x005E14F3: mov dword ptr [eax], edx */
    goto L_005E14FA; /* 0x005E14F5: jmp 0x5e14fa */
L_005E14F7:
    MEM32(eax + 0x8) = edx; /* 0x005E14F7: mov dword ptr [eax + 8], edx */
L_005E14FA:
    MEM32(edx) = ecx; /* 0x005E14FA: mov dword ptr [edx], ecx */
L_005E14FC:
    MEM32(ecx + 0x4) = edx; /* 0x005E14FC: mov dword ptr [ecx + 4], edx */
L_005E14FF:
    eax = MEM32(esi + 0x4); /* 0x005E14FF: mov eax, dword ptr [esi + 4] */
    /* cmp MEM8(eax + 0xC), 0 */ /* 0x005E1502: cmp byte ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E1402; /* 0x005E1506: je 0x5e1402 */
L_005E150C:
    eax = MEM32(edi); /* 0x005E150C: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x4); /* 0x005E150E: mov eax, dword ptr [eax + 4] */
    MEM8(eax + 0xC) = (uint8_t)(1); /* 0x005E1511: mov byte ptr [eax + 0xc], 1 */
    eax = MEM32(ebp + 0x8); /* 0x005E1515: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ebx; /* 0x005E1518: mov dword ptr [eax], ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E151A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E151D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E1524: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E1525: pop edi */
    esi = POP32_VAL(esp); /* 0x005E1526: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E1527: pop ebx */
    esp = ebp; /* 0x005E1528: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E152A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x005E152B: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_005E1530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1530u);

L_005E1530:
    PUSH32(esp, ebp); /* 0x005E1530: push ebp */
    ebp = esp; /* 0x005E1531: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E1533: push -1 */
    PUSH32(esp, 0x007B0220u); /* 0x005E1535: push 0x7b0220 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E153A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E1540: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005E1541: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E1544: push ebx */
    PUSH32(esp, esi); /* 0x005E1545: push esi */
    PUSH32(esp, edi); /* 0x005E1546: push edi */
    eax = MEM32(0x855000); /* 0x005E1547: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E154C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E154E: push eax */
    eax = ebp + (-0xC); /* 0x005E154F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E1552: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005E1558: mov dword ptr [ebp - 0x10], esp */
    MEM32(ebp + (-0x18)) = ecx; /* 0x005E155B: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E155E: mov dword ptr [ebp - 4], 0 */
    edi = MEM32(ecx); /* 0x005E1565: mov edi, dword ptr [ecx] */
    esi = MEM32(edi + 0x4); /* 0x005E1567: mov esi, dword ptr [edi + 4] */
    SET_LO8(eax, 1); /* 0x005E156A: mov al, 1 */
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x005E156C: mov byte ptr [ebp - 0x14], al */
    ebx = MEM32(ebp + 0x10); /* 0x005E156F: mov ebx, dword ptr [ebp + 0x10] */
L_005E1572:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x005E1572: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E15A8; /* 0x005E1576: jne 0x5e15a8 */
L_005E1578:
    edi = esi; /* 0x005E1578: mov edi, esi */
    eax = esi + 0x10; /* 0x005E157A: lea eax, [esi + 0x10] */
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x005E157D: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E1591; /* 0x005E1581: je 0x5e1591 */
L_005E1583:
    PUSH32(esp, ebx); /* 0x005E1583: push ebx */
    PUSH32(esp, eax); /* 0x005E1584: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x005E1585: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x005E158A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x005E158C: sete al */
    goto L_005E1598; /* 0x005E158F: jmp 0x5e1598 */
L_005E1591:
    PUSH32(esp, eax); /* 0x005E1591: push eax */
    PUSH32(esp, ebx); /* 0x005E1592: push ebx */
    RECOMP_CALL(sub_005E0380); /* 0x005E1593: call 0x5e0380 */
    RECOMP_FLAGS_IN();
L_005E1598:
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x005E1598: mov byte ptr [ebp - 0x14], al */
    /* test LO8(eax), LO8(eax) */ /* 0x005E159B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E15A3; /* 0x005E159D: je 0x5e15a3 */
L_005E159F:
    esi = MEM32(esi); /* 0x005E159F: mov esi, dword ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_005E1572; /* 0x005E15A1: jmp 0x5e1572 */
L_005E15A3:
    esi = MEM32(esi + 0x8); /* 0x005E15A3: mov esi, dword ptr [esi + 8] */
    RECOMP_BACKEDGE();
    goto L_005E1572; /* 0x005E15A6: jmp 0x5e1572 */
L_005E15A8:
    esi = edi; /* 0x005E15A8: mov esi, edi */
    MEM32(ebp + 0xC) = esi; /* 0x005E15AA: mov dword ptr [ebp + 0xc], esi */
    /* test LO8(eax), LO8(eax) */ /* 0x005E15AD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E15F4; /* 0x005E15AF: je 0x5e15f4 */
L_005E15B1:
    ecx = MEM32(ebp + (-0x18)); /* 0x005E15B1: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ecx); /* 0x005E15B4: mov eax, dword ptr [ecx] */
    /* cmp edi, MEM32(eax) */ /* 0x005E15B6: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E15E9; /* 0x005E15B8: jne 0x5e15e9 */
L_005E15BA:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005E15BA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x005E15BD: push ecx */
    PUSH32(esp, edi); /* 0x005E15BE: push edi */
    PUSH32(esp, 1); /* 0x005E15BF: push 1 */
L_005E15C1:
    eax = ebp + 0xC; /* 0x005E15C1: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x005E15C4: push eax */
    RECOMP_CALL(sub_005E1340); /* 0x005E15C5: call 0x5e1340 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x005E15CA: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x005E15CC: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x005E15CF: mov dword ptr [eax], ecx */
    MEM8(eax + 0x4) = (uint8_t)(1); /* 0x005E15D1: mov byte ptr [eax + 4], 1 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E15D5: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E15D8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E15DF: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E15E0: pop edi */
    esi = POP32_VAL(esp); /* 0x005E15E1: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E15E2: pop ebx */
    esp = ebp; /* 0x005E15E3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E15E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005E15E6: ret 0x10 */
L_005E15E9:
    ecx = ebp + 0xC; /* 0x005E15E9: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_0041B310); /* 0x005E15EC: call 0x41b310 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x005E15F1: mov esi, dword ptr [ebp + 0xc] */
L_005E15F4:
    PUSH32(esp, ebx); /* 0x005E15F4: push ebx */
    eax = esi + 0x10; /* 0x005E15F5: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x005E15F8: push eax */
    RECOMP_CALL(sub_005E0380); /* 0x005E15F9: call 0x5e0380 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005E15FE: push dword ptr [ebp + 0x14] */
    /* test LO8(eax), LO8(eax) */ /* 0x005E1601: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E160F; /* 0x005E1603: je 0x5e160f */
L_005E1605:
    PUSH32(esp, ecx); /* 0x005E1605: push ecx */
    PUSH32(esp, edi); /* 0x005E1606: push edi */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005E1607: push dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + (-0x18)); /* 0x005E160A: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_BACKEDGE();
    goto L_005E15C1; /* 0x005E160D: jmp 0x5e15c1 */
L_005E160F:
    RECOMP_CALL(sub_005E1190); /* 0x005E160F: call 0x5e1190 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x005E1614: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x005E1617: mov dword ptr [eax], esi */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x005E1619: mov byte ptr [eax + 4], 0 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E161D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E1620: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E1627: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E1628: pop edi */
    esi = POP32_VAL(esp); /* 0x005E1629: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E162A: pop ebx */
    esp = ebp; /* 0x005E162B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E162D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005E162E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005E1631(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1631u);

L_005E1631:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x005E1631: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_005E1190); /* 0x005E1634: call 0x5e1190 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x005E1639: push 0 */
    PUSH32(esp, 0); /* 0x005E163B: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005E163D: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005E1642u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005E1650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1650u);

L_005E1650:
    PUSH32(esp, ebp); /* 0x005E1650: push ebp */
    ebp = esp; /* 0x005E1651: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E1653: push -1 */
    PUSH32(esp, 0x007B024Du); /* 0x005E1655: push 0x7b024d */
    eax = MEM32(FS_BASE + (0)); /* 0x005E165A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E1660: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005E1661: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E1664: push ebx */
    PUSH32(esp, esi); /* 0x005E1665: push esi */
    PUSH32(esp, edi); /* 0x005E1666: push edi */
    eax = MEM32(0x855000); /* 0x005E1667: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E166C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E166E: push eax */
    eax = ebp + (-0xC); /* 0x005E166F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E1672: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005E1678: mov dword ptr [ebp - 0x10], esp */
    RECOMP_CALL(sub_005E1210); /* 0x005E167B: call 0x5e1210 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x005E1680: mov ebx, eax */
    MEM32(ebp + (-0x14)) = ebx; /* 0x005E1682: mov dword ptr [ebp - 0x14], ebx */
    MEM16(ebx + 0xC) = (uint16_t)(0); /* 0x005E1685: mov word ptr [ebx + 0xc], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E168B: mov dword ptr [ebp - 4], 0 */
    edi = ebx + 0x10; /* 0x005E1692: lea edi, [ebx + 0x10] */
    MEM32(ebp + (-0x18)) = edi; /* 0x005E1695: mov dword ptr [ebp - 0x18], edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E1698: mov byte ptr [ebp - 4], 1 */
    /* test edi, edi */ /* 0x005E169C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E16EC; /* 0x005E169E: je 0x5e16ec */
L_005E16A0:
    MEM32(edi + 0x10) = 0; /* 0x005E16A0: mov dword ptr [edi + 0x10], 0 */
    MEM32(edi + 0x14) = 0; /* 0x005E16A7: mov dword ptr [edi + 0x14], 0 */
    MEM32(edi + 0x14) = 0xFu; /* 0x005E16AE: mov dword ptr [edi + 0x14], 0xf */
    MEM32(edi + 0x10) = 0; /* 0x005E16B5: mov dword ptr [edi + 0x10], 0 */
    /* cmp MEM32(edi + 0x14), 0x10u */ /* 0x005E16BC: cmp dword ptr [edi + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E16C6; /* 0x005E16C0: jb 0x5e16c6 */
L_005E16C2:
    eax = MEM32(edi); /* 0x005E16C2: mov eax, dword ptr [edi] */
    goto L_005E16C8; /* 0x005E16C4: jmp 0x5e16c8 */
L_005E16C6:
    eax = edi; /* 0x005E16C6: mov eax, edi */
L_005E16C8:
    MEM8(eax) = (uint8_t)(0); /* 0x005E16C8: mov byte ptr [eax], 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E16CB: push -1 */
    PUSH32(esp, 0); /* 0x005E16CD: push 0 */
    esi = MEM32(ebp + 0x8); /* 0x005E16CF: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x005E16D2: push esi */
    ecx = edi; /* 0x005E16D3: mov ecx, edi */
    RECOMP_CALL(sub_0040A030); /* 0x005E16D5: call 0x40a030 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E16DA: mov byte ptr [ebp - 4], 2 */
    _xmm[0] = xmm_ld(esi + 0x18); /* 0x005E16DE: movdqu xmm0, xmmword ptr [esi + 0x18] */
    xmm_st(edi + 0x18, _xmm[0]); /* 0x005E16E3: movdqu xmmword ptr [edi + 0x18], xmm0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E16E8: mov byte ptr [ebp - 4], 1 */
L_005E16EC:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E16EC: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E16F0: mov dword ptr [ebp - 4], 0xffffffff */
    eax = ebx; /* 0x005E16F7: mov eax, ebx */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E16F9: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E16FC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E1703: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E1704: pop edi */
    esi = POP32_VAL(esp); /* 0x005E1705: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E1706: pop ebx */
    esp = ebp; /* 0x005E1707: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E1709: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E170A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E170D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E170Du);

L_005E170D:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x005E170D: push dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E1710: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E1716: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x005E1719: push 0 */
    PUSH32(esp, 0); /* 0x005E171B: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005E171D: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005E1722u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005E1730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1730u);

L_005E1730:
    PUSH32(esp, ebp); /* 0x005E1730: push ebp */
    ebp = esp; /* 0x005E1731: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E1733: push -1 */
    PUSH32(esp, 0x007B0285u); /* 0x005E1735: push 0x7b0285 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E173A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E1740: push eax */
    PUSH32(esp, esi); /* 0x005E1741: push esi */
    eax = MEM32(0x855000); /* 0x005E1742: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E1747: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E1749: push eax */
    eax = ebp + (-0xC); /* 0x005E174A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E174D: mov dword ptr fs:[0], eax */
    esi = MEM32(ebp + 0x8); /* 0x005E1753: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = esi; /* 0x005E1756: mov dword ptr [ebp + 8], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E1759: mov dword ptr [ebp - 4], 0 */
    /* test esi, esi */ /* 0x005E1760: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E17A3; /* 0x005E1762: je 0x5e17a3 */
L_005E1764:
    eax = MEM32(ebp + 0x10); /* 0x005E1764: mov eax, dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x005E1767: mov ecx, esi */
    eax = MEM32(eax); /* 0x005E1769: mov eax, dword ptr [eax] */
    MEM32(esi + 0x14) = 0xFu; /* 0x005E176B: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = 0; /* 0x005E1772: mov dword ptr [esi + 0x10], 0 */
    PUSH32(esp, eax); /* 0x005E1779: push eax */
    MEM8(esi) = (uint8_t)(0); /* 0x005E177A: mov byte ptr [esi], 0 */
    RECOMP_CALL(sub_00419890); /* 0x005E177D: call 0x419890 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E1782: mov byte ptr [ebp - 4], 1 */
    MEM32(esi + 0x18) = 0; /* 0x005E1786: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x005E178D: mov dword ptr [esi + 0x1c], 0 */
    MEM32(esi + 0x20) = 0; /* 0x005E1794: mov dword ptr [esi + 0x20], 0 */
    MEM8(esi + 0x24) = (uint8_t)(0); /* 0x005E179B: mov byte ptr [esi + 0x24], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E179F: mov byte ptr [ebp - 4], 0 */
L_005E17A3:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E17A3: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E17AA: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E17AD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E17B4: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E17B5: pop esi */
    esp = ebp; /* 0x005E17B6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E17B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x005E17B9: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_005E17C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E17C0u);

L_005E17C0:
    PUSH32(esp, ebp); /* 0x005E17C0: push ebp */
    ebp = esp; /* 0x005E17C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x005E17C3: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E17C6: push esi */
    esi = ecx; /* 0x005E17C7: mov esi, ecx */
    eax = 0x78787879u; /* 0x005E17C9: mov eax, 0x78787879 */
    ecx = MEM32(ebp + 0x8); /* 0x005E17CE: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x005E17D1: sub edx, esi */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005E17D3: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005E17D5: sub ecx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = esi; /* 0x005E17D7: mov dword ptr [ebp - 0xc], esi */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005E17DA: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x005E17DD: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E17DF: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E17DF: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E17E2: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x005E17E4: mov dword ptr [ebp - 8], eax */
    eax = 0x78787879u; /* 0x005E17E7: mov eax, 0x78787879 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E17EC: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = MEM32(ebp + (-0x8)); /* 0x005E17EE: mov ecx, dword ptr [ebp - 8] */
    esi = ecx; /* 0x005E17F1: mov esi, ecx */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005E17F3: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    PUSH32(esp, edi); /* 0x005E17F6: push edi */
    edi = edx; /* 0x005E17F7: mov edi, edx */
    if (31u) _cf = (((edi) >> 30) & 1u); /* 0x005E17F9: shr edi, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edi >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 31u; /* 0x005E17F9: shr edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x005E17FC: add edi, edx */
    _flag_k = FK_ADD;
    edx = edi; /* 0x005E17FE: mov edx, edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x005E1800: mov dword ptr [ebp - 4], edx */
    /* test ecx, ecx */ /* 0x005E1803: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E1826; /* 0x005E1805: je 0x5e1826 */
L_005E1807:
    ecx = edx; /* 0x005E1807: mov ecx, edx */
    esp = esp; /* 0x005E1809: lea esp, [esp] */
L_005E1810:
    eax = ecx; /* 0x005E1810: mov eax, ecx */
    ecx = esi; /* 0x005E1812: mov ecx, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x005E1814: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x005E1815: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    esi = edx; /* 0x005E1817: mov esi, edx */
    /* test edx, edx */ /* 0x005E1819: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E1810; /* 0x005E181B: jne 0x5e1810 */
L_005E181D:
    MEM32(ebp + (-0x4)) = ecx; /* 0x005E181D: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x005E1820: mov ecx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x005E1823: mov edx, dword ptr [ebp - 4] */
L_005E1826:
    /* cmp edx, edi */ /* 0x005E1826: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_005E18A6; /* 0x005E1828: jge 0x5e18a6 */
L_005E182A:
    /* test edx, edx */ /* 0x005E182A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_005E18A6; /* 0x005E182C: jle 0x5e18a6 */
L_005E182E:
    PUSH32(esp, ebx); /* 0x005E182E: push ebx */
    ebx = ecx; /* 0x005E182F: mov ebx, ecx */
    eax = edx; /* 0x005E1831: mov eax, edx */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x005E1833: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x005E1833: shl ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x005E1836: add ebx, ecx */
    _flag_k = FK_ADD;
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x005E1838: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x005E1838: shl eax, 4 */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E183B: mov ecx, dword ptr [ebp - 0xc] */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x005E183E: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x005E183E: shl ebx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E1841: add eax, edx */
    _flag_k = FK_ADD;
    edi = ecx + eax * 4; /* 0x005E1843: lea edi, [ecx + eax*4] */
L_005E1846:
    esi = edi + ebx; /* 0x005E1846: lea esi, [edi + ebx] */
    eax = edi; /* 0x005E1849: mov eax, edi */
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x005E184B: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { esi = ecx; } /* 0x005E184E: cmove esi, ecx */
L_005E1851:
    edx = esi; /* 0x005E1851: mov edx, esi */
    ecx = eax; /* 0x005E1853: mov ecx, eax */
    RECOMP_CALL(sub_005E1960); /* 0x005E1855: call 0x5e1960 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x005E185A: mov ecx, dword ptr [ebp + 8] */
    eax = 0x78787879u; /* 0x005E185D: mov eax, 0x78787879 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x005E1862: sub ecx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = esi; /* 0x005E1864: mov dword ptr [ebp - 0x10], esi */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E1867: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = MEM32(ebp + (-0x8)); /* 0x005E1869: mov ecx, dword ptr [ebp - 8] */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x005E186C: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    eax = edx; /* 0x005E186F: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E1871: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E1871: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E1874: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x005E1876: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_005E1881; /* 0x005E1878: jge 0x5e1881 */
L_005E187A:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E187A: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x005E187D: add esi, ebx */
    _flag_k = FK_ADD;
    goto L_005E1890; /* 0x005E187F: jmp 0x5e1890 */
L_005E1881:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x005E1881: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x005E1883: mov eax, ecx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x005E1885: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x005E1885: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x005E1888: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005E188A: mov ecx, dword ptr [ebp - 0xc] */
    esi = ecx + eax * 4; /* 0x005E188D: lea esi, [ecx + eax*4] */
L_005E1890:
    eax = MEM32(ebp + (-0x10)); /* 0x005E1890: mov eax, dword ptr [ebp - 0x10] */
    /* cmp esi, edi */ /* 0x005E1893: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E1851; /* 0x005E1895: jne 0x5e1851 */
L_005E1897:
    edx = MEM32(ebp + (-0x4)); /* 0x005E1897: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x44u; /* 0x005E189A: sub edi, 0x44 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x005E189D: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edx; /* 0x005E189E: mov dword ptr [ebp - 4], edx */
    /* test edx, edx */ /* 0x005E18A1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_005E1846; /* 0x005E18A3: jg 0x5e1846 */
L_005E18A5:
    ebx = POP32_VAL(esp); /* 0x005E18A5: pop ebx */
L_005E18A6:
    edi = POP32_VAL(esp); /* 0x005E18A6: pop edi */
    esi = POP32_VAL(esp); /* 0x005E18A7: pop esi */
    esp = ebp; /* 0x005E18A8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E18AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E18AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E18B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E18B0u);

L_005E18B0:
    PUSH32(esp, ebp); /* 0x005E18B0: push ebp */
    ebp = esp; /* 0x005E18B1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E18B3: push -1 */
    PUSH32(esp, 0x007B02A5u); /* 0x005E18B5: push 0x7b02a5 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E18BA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E18C0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x005E18C1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E18C4: push ebx */
    PUSH32(esp, esi); /* 0x005E18C5: push esi */
    PUSH32(esp, edi); /* 0x005E18C6: push edi */
    eax = MEM32(0x855000); /* 0x005E18C7: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E18CC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E18CE: push eax */
    eax = ebp + (-0xC); /* 0x005E18CF: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E18D2: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = esp; /* 0x005E18D8: mov dword ptr [ebp - 0x10], esp */
    ebx = edx; /* 0x005E18DB: mov ebx, edx */
    edi = ecx; /* 0x005E18DD: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x005E18DF: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = esi; /* 0x005E18E2: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E18E5: mov dword ptr [ebp - 4], 0 */
    esp = esp; /* 0x005E18EC: lea esp, [esp] */
L_005E18F0:
    /* cmp edi, ebx */ /* 0x005E18F0: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E1916; /* 0x005E18F2: je 0x5e1916 */
L_005E18F4:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E18F4: mov byte ptr [ebp - 4], 1 */
    /* test esi, esi */ /* 0x005E18F8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E1904; /* 0x005E18FA: je 0x5e1904 */
L_005E18FC:
    PUSH32(esp, edi); /* 0x005E18FC: push edi */
    ecx = esi; /* 0x005E18FD: mov ecx, esi */
    RECOMP_CALL(sub_005DEA40); /* 0x005E18FF: call 0x5dea40 */
    RECOMP_FLAGS_IN();
L_005E1904:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E1904: mov byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x44u; /* 0x005E1908: add esi, 0x44 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x005E190B: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x44u; /* 0x005E190E: add edi, 0x44 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = edi; /* 0x005E1911: mov dword ptr [ebp - 0x18], edi */
    RECOMP_BACKEDGE();
    goto L_005E18F0; /* 0x005E1914: jmp 0x5e18f0 */
L_005E1916:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E1916: mov dword ptr [ebp - 4], 0xffffffff */
    eax = esi; /* 0x005E191D: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E191F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E1922: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E1929: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E192A: pop edi */
    esi = POP32_VAL(esp); /* 0x005E192B: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E192C: pop ebx */
    esp = ebp; /* 0x005E192D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E192F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E1930: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E1931(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1931u);

L_005E1931:
    esi = MEM32(ebp + (-0x14)); /* 0x005E1931: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x005E1934: mov edi, dword ptr [ebp + 8] */
    /* cmp esi, edi */ /* 0x005E1937: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E194E; /* 0x005E1939: je 0x5e194e */
L_005E193B:
    goto L_005E1940; /* 0x005E193B: jmp 0x5e1940 */
L_005E1940:
    ecx = esi; /* 0x005E1940: mov ecx, esi */
    RECOMP_CALL(sub_0051C800); /* 0x005E1942: call 0x51c800 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x44u; /* 0x005E1947: add esi, 0x44 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x005E194A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E1940; /* 0x005E194C: jne 0x5e1940 */
L_005E194E:
    PUSH32(esp, 0); /* 0x005E194E: push 0 */
    PUSH32(esp, 0); /* 0x005E1950: push 0 */
    RECOMP_CALL(sub_00780016); /* 0x005E1952: call 0x780016 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x005E1957u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_005E1960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1960u);

L_005E1960:
    PUSH32(esp, ebp); /* 0x005E1960: push ebp */
    ebp = esp; /* 0x005E1961: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E1963: push -1 */
    PUSH32(esp, 0x007B02C8u); /* 0x005E1965: push 0x7b02c8 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E196A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E1970: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x005E1971: sub esp, 0x48 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E1974: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E1979: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005E197B: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005E197E: push ebx */
    PUSH32(esp, esi); /* 0x005E197F: push esi */
    PUSH32(esp, edi); /* 0x005E1980: push edi */
    PUSH32(esp, eax); /* 0x005E1981: push eax */
    eax = ebp + (-0xC); /* 0x005E1982: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E1985: mov dword ptr fs:[0], eax */
    esi = edx; /* 0x005E198B: mov esi, edx */
    ebx = ecx; /* 0x005E198D: mov ebx, ecx */
    PUSH32(esp, ebx); /* 0x005E198F: push ebx */
    ecx = ebp + (-0x54); /* 0x005E1990: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_005DEA40); /* 0x005E1993: call 0x5dea40 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E1998: mov dword ptr [ebp - 4], 0 */
    ecx = ebx + 0x8; /* 0x005E199F: lea ecx, [ebx + 8] */
    eax = MEM32(esi); /* 0x005E19A2: mov eax, dword ptr [esi] */
    MEM32(ebx) = eax; /* 0x005E19A4: mov dword ptr [ebx], eax */
    eax = MEM32(esi + 0x4); /* 0x005E19A6: mov eax, dword ptr [esi + 4] */
    MEM32(ebx + 0x4) = eax; /* 0x005E19A9: mov dword ptr [ebx + 4], eax */
    eax = esi + 0x8; /* 0x005E19AC: lea eax, [esi + 8] */
    /* cmp ecx, eax */ /* 0x005E19AF: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E19BD; /* 0x005E19B1: je 0x5e19bd */
L_005E19B3:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E19B3: push -1 */
    PUSH32(esp, 0); /* 0x005E19B5: push 0 */
    PUSH32(esp, eax); /* 0x005E19B7: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005E19B8: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005E19BD:
    edi = esi + 0x20; /* 0x005E19BD: lea edi, [esi + 0x20] */
    ecx = ebx + 0x20; /* 0x005E19C0: lea ecx, [ebx + 0x20] */
    /* cmp ecx, edi */ /* 0x005E19C3: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E19D1; /* 0x005E19C5: je 0x5e19d1 */
L_005E19C7:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E19C7: push -1 */
    PUSH32(esp, 0); /* 0x005E19C9: push 0 */
    PUSH32(esp, edi); /* 0x005E19CB: push edi */
    RECOMP_CALL(sub_0040A030); /* 0x005E19CC: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005E19D1:
    eax = (uint32_t)MEM8(esi + 0x38); /* 0x005E19D1: movzx eax, byte ptr [esi + 0x38] */
    ecx = esi + 0x8; /* 0x005E19D5: lea ecx, [esi + 8] */
    MEM8(ebx + 0x38) = (uint8_t)(LO8(eax)); /* 0x005E19D8: mov byte ptr [ebx + 0x38], al */
    eax = MEM32(esi + 0x3C); /* 0x005E19DB: mov eax, dword ptr [esi + 0x3c] */
    MEM32(ebx + 0x3C) = eax; /* 0x005E19DE: mov dword ptr [ebx + 0x3c], eax */
    eax = (uint32_t)MEM8(esi + 0x40); /* 0x005E19E1: movzx eax, byte ptr [esi + 0x40] */
    MEM8(ebx + 0x40) = (uint8_t)(LO8(eax)); /* 0x005E19E5: mov byte ptr [ebx + 0x40], al */
    eax = MEM32(ebp + (-0x54)); /* 0x005E19E8: mov eax, dword ptr [ebp - 0x54] */
    MEM32(esi) = eax; /* 0x005E19EB: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x50)); /* 0x005E19ED: mov eax, dword ptr [ebp - 0x50] */
    MEM32(esi + 0x4) = eax; /* 0x005E19F0: mov dword ptr [esi + 4], eax */
    eax = ebp + (-0x4C); /* 0x005E19F3: lea eax, [ebp - 0x4c] */
    /* cmp ecx, eax */ /* 0x005E19F6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E1A04; /* 0x005E19F8: je 0x5e1a04 */
L_005E19FA:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E19FA: push -1 */
    PUSH32(esp, 0); /* 0x005E19FC: push 0 */
    PUSH32(esp, eax); /* 0x005E19FE: push eax */
    RECOMP_CALL(sub_0040A030); /* 0x005E19FF: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005E1A04:
    eax = ebp + (-0x34); /* 0x005E1A04: lea eax, [ebp - 0x34] */
    /* cmp edi, eax */ /* 0x005E1A07: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E1A17; /* 0x005E1A09: je 0x5e1a17 */
L_005E1A0B:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E1A0B: push -1 */
    PUSH32(esp, 0); /* 0x005E1A0D: push 0 */
    PUSH32(esp, eax); /* 0x005E1A0F: push eax */
    ecx = edi; /* 0x005E1A10: mov ecx, edi */
    RECOMP_CALL(sub_0040A030); /* 0x005E1A12: call 0x40a030 */
    RECOMP_FLAGS_IN();
L_005E1A17:
    eax = (uint32_t)MEM8(ebp + (-0x1C)); /* 0x005E1A17: movzx eax, byte ptr [ebp - 0x1c] */
    MEM8(esi + 0x38) = (uint8_t)(LO8(eax)); /* 0x005E1A1B: mov byte ptr [esi + 0x38], al */
    eax = MEM32(ebp + (-0x18)); /* 0x005E1A1E: mov eax, dword ptr [ebp - 0x18] */
    MEM32(esi + 0x3C) = eax; /* 0x005E1A21: mov dword ptr [esi + 0x3c], eax */
    eax = (uint32_t)MEM8(ebp + (-0x14)); /* 0x005E1A24: movzx eax, byte ptr [ebp - 0x14] */
    MEM8(esi + 0x40) = (uint8_t)(LO8(eax)); /* 0x005E1A28: mov byte ptr [esi + 0x40], al */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E1A2B: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x54); /* 0x005E1A32: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_0051C800); /* 0x005E1A35: call 0x51c800 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x005E1A3A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E1A3D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E1A44: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E1A45: pop edi */
    esi = POP32_VAL(esp); /* 0x005E1A46: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E1A47: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005E1A48: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005E1A4B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E1A4D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E1A52: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E1A54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E1A55: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E1A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1A60u);

L_005E1A60:
    PUSH32(esp, ebp); /* 0x005E1A60: push ebp */
    ebp = esp; /* 0x005E1A61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E1A63: push -1 */
    PUSH32(esp, 0x007824A9u); /* 0x005E1A65: push 0x7824a9 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E1A6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E1A70: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E1A71: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E1A74: push esi */
    eax = MEM32(0x855000); /* 0x005E1A75: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E1A7A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E1A7C: push eax */
    eax = ebp + (-0xC); /* 0x005E1A7D: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E1A80: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E1A86: mov esi, ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x005E1A88: mov dword ptr [ebp - 0x14], esi */
    edx = (uint32_t)LO16(edx); /* 0x005E1A8B: movzx edx, dx */
    MEM32(ebp + (-0x10)) = 0; /* 0x005E1A8E: mov dword ptr [ebp - 0x10], 0 */
    RECOMP_CALL(sub_0047ADC0); /* 0x005E1A95: call 0x47adc0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0; /* 0x005E1A9A: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x10)) = 1; /* 0x005E1AA1: mov dword ptr [ebp - 0x10], 1 */
    eax = esi; /* 0x005E1AA8: mov eax, esi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E1AAA: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E1AAD: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E1AB4: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E1AB5: pop esi */
    esp = ebp; /* 0x005E1AB6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E1AB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E1AB9: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E1AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1AC0u);

L_005E1AC0:
    PUSH32(esp, ecx); /* 0x005E1AC0: push ecx */
    PUSH32(esp, esi); /* 0x005E1AC1: push esi */
    esi = MEM32(0x870278); /* 0x005E1AC2: mov esi, dword ptr [0x870278] */
    PUSH32(esp, edi); /* 0x005E1AC8: push edi */
    edi = ecx; /* 0x005E1AC9: mov edi, ecx */
    MEM8(edi + 0x14) = (uint8_t)(0); /* 0x005E1ACB: mov byte ptr [edi + 0x14], 0 */
    MEM32(edi + 0x18) = 0; /* 0x005E1ACF: mov dword ptr [edi + 0x18], 0 */
    MEM32(edi + 0x10) = 0; /* 0x005E1AD6: mov dword ptr [edi + 0x10], 0 */
    MEM32(edi + 0x8) = 0; /* 0x005E1ADD: mov dword ptr [edi + 8], 0 */
    MEM32(edi + 0xC) = 0; /* 0x005E1AE4: mov dword ptr [edi + 0xc], 0 */
    MEM32(edi) = 0; /* 0x005E1AEB: mov dword ptr [edi], 0 */
    MEM32(edi + 0x4) = 0; /* 0x005E1AF1: mov dword ptr [edi + 4], 0 */
    MEM32(edi + 0x1C) = 0; /* 0x005E1AF8: mov dword ptr [edi + 0x1c], 0 */
    MEM32(edi + 0x20) = 0; /* 0x005E1AFF: mov dword ptr [edi + 0x20], 0 */
    RECOMP_CALL(sub_006EE000); /* 0x005E1B06: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x005E1B0B: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    MEM32(edi + 0x24) = eax; /* 0x005E1B0D: mov dword ptr [edi + 0x24], eax */
    eax = edi; /* 0x005E1B10: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x005E1B12: pop edi */
    esi = POP32_VAL(esp); /* 0x005E1B13: pop esi */
    ecx = POP32_VAL(esp); /* 0x005E1B14: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E1B15: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E1B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1B20u);

L_005E1B20:
    MEM32(ecx) = 0x007F6674u; /* 0x005E1B20: mov dword ptr [ecx], 0x7f6674 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E1B26: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E1B30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1B30u);

L_005E1B30:
    PUSH32(esp, ebp); /* 0x005E1B30: push ebp */
    ebp = esp; /* 0x005E1B31: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x005E1B33: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x005E1B37: push esi */
    esi = ecx; /* 0x005E1B38: mov esi, ecx */
    MEM32(esi) = 0x007F6674u; /* 0x005E1B3A: mov dword ptr [esi], 0x7f6674 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E1B4C; /* 0x005E1B40: je 0x5e1b4c */
L_005E1B42:
    PUSH32(esp, esi); /* 0x005E1B42: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E1B43: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E1B49: add esp, 4 */
    _flag_k = FK_ADD;
L_005E1B4C:
    eax = esi; /* 0x005E1B4C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005E1B4E: pop esi */
    ebp = POP32_VAL(esp); /* 0x005E1B4F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E1B50: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E1B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1B60u);

L_005E1B60:
    PUSH32(esp, ebp); /* 0x005E1B60: push ebp */
    ebp = esp; /* 0x005E1B61: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E1B63: push -1 */
    PUSH32(esp, 0x007B0333u); /* 0x005E1B65: push 0x7b0333 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E1B6A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E1B70: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x005E1B71: sub esp, 0x48 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E1B74: push ebx */
    PUSH32(esp, esi); /* 0x005E1B75: push esi */
    PUSH32(esp, edi); /* 0x005E1B76: push edi */
    eax = MEM32(0x855000); /* 0x005E1B77: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E1B7C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E1B7E: push eax */
    eax = ebp + (-0xC); /* 0x005E1B7F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E1B82: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E1B88: mov edi, ecx */
    ebx = MEM32(ebp + 0x8); /* 0x005E1B8A: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + 0x8; /* 0x005E1B8D: lea eax, [ebp + 8] */
    esi = MEM32(edi); /* 0x005E1B90: mov esi, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x005E1B92: push ebx */
    PUSH32(esp, eax); /* 0x005E1B93: push eax */
    RECOMP_CALL(sub_005DC0D0); /* 0x005E1B94: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), esi */ /* 0x005E1B99: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E1C42; /* 0x005E1B9B: jne 0x5e1c42 */
L_005E1BA1:
    MEM32(ebp + (-0x30)) = 0; /* 0x005E1BA1: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x005E1BA8: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x005E1BAF: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E1BB6: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x24)) = 0; /* 0x005E1BBD: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x005E1BC4: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x005E1BCB: mov dword ptr [ebp - 0x1c], 0 */
    MEM32(ebp + (-0x4)) = 2; /* 0x005E1BD2: mov dword ptr [ebp - 4], 2 */
    ecx = ebp + (-0x48); /* 0x005E1BD9: lea ecx, [ebp - 0x48] */
    eax = MEM32(ebx); /* 0x005E1BDC: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x50)) = eax; /* 0x005E1BDE: mov dword ptr [ebp - 0x50], eax */
    eax = MEM32(ebx + 0x4); /* 0x005E1BE1: mov eax, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x005E1BE4: mov dword ptr [ebp - 0x4c], eax */
    eax = ebp + (-0x48); /* 0x005E1BE7: lea eax, [ebp - 0x48] */
    MEM32(ebp + 0x8) = eax; /* 0x005E1BEA: mov dword ptr [ebp + 8], eax */
    eax = ebp + (-0x30); /* 0x005E1BED: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x005E1BF0: push eax */
    RECOMP_CALL(sub_005ED5F0); /* 0x005E1BF1: call 0x5ed5f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E1BF6: mov byte ptr [ebp - 4], 3 */
    eax = ebp + (-0x24); /* 0x005E1BFA: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x005E1BFD: push eax */
    ecx = ebp + (-0x3C); /* 0x005E1BFE: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_005ED5F0); /* 0x005E1C01: call 0x5ed5f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x005E1C06: mov byte ptr [ebp - 4], 6 */
    eax = ebp + (-0x50); /* 0x005E1C0A: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x005E1C0D: push eax */
    ecx = edi; /* 0x005E1C0E: mov ecx, edi */
    RECOMP_CALL(sub_005ED720); /* 0x005E1C10: call 0x5ed720 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x005E1C15: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x005E1C16: add eax, 0x10 */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x005E1C19: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E1C1B: push eax */
    PUSH32(esp, 0); /* 0x005E1C1C: push 0 */
    eax = ebp + (-0x18); /* 0x005E1C1E: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x005E1C21: push eax */
    RECOMP_CALL(sub_005ED7F0); /* 0x005E1C22: call 0x5ed7f0 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E1C27: mov byte ptr [ebp - 4], 2 */
    ecx = ebp + (-0x48); /* 0x005E1C2B: lea ecx, [ebp - 0x48] */
    RECOMP_CALL(sub_005E3440); /* 0x005E1C2E: call 0x5e3440 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E1C33: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = ebp + (-0x30); /* 0x005E1C3A: lea ecx, [ebp - 0x30] */
    RECOMP_CALL(sub_005E3440); /* 0x005E1C3D: call 0x5e3440 */
    RECOMP_FLAGS_IN();
L_005E1C42:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E1C42: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E1C45: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E1C4C: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E1C4D: pop edi */
    esi = POP32_VAL(esp); /* 0x005E1C4E: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E1C4F: pop ebx */
    esp = ebp; /* 0x005E1C50: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E1C52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E1C53: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E1C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E1C60u);

L_005E1C60:
    PUSH32(esp, ebp); /* 0x005E1C60: push ebp */
    ebp = esp; /* 0x005E1C61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x005E1C63: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E1C66: push -1 */
    PUSH32(esp, 0x007B03AFu); /* 0x005E1C68: push 0x7b03af */
    eax = MEM32(FS_BASE + (0)); /* 0x005E1C6D: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E1C73: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x8F0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x8F0u; /* 0x005E1C74: sub esp, 0x8f0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E1C7A: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E1C7F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x8E8) = eax; /* 0x005E1C81: mov dword ptr [esp + 0x8e8], eax */
    PUSH32(esp, ebx); /* 0x005E1C88: push ebx */
    PUSH32(esp, esi); /* 0x005E1C89: push esi */
    PUSH32(esp, edi); /* 0x005E1C8A: push edi */
    eax = MEM32(0x855000); /* 0x005E1C8B: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x005E1C90: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E1C92: push eax */
    eax = esp + 0x900; /* 0x005E1C93: lea eax, [esp + 0x900] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E1C9A: mov dword ptr fs:[0], eax */
    eax = MEM32(ebp + 0xC); /* 0x005E1CA0: mov eax, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x8); /* 0x005E1CA3: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x005E1CA6: push ecx */
    ecx = esp + 0x70; /* 0x005E1CA7: lea ecx, [esp + 0x70] */
    MEM32(esp + 0x4C) = ebx; /* 0x005E1CAB: mov dword ptr [esp + 0x4c], ebx */
    MEM32(esp + 0x3C) = eax; /* 0x005E1CAF: mov dword ptr [esp + 0x3c], eax */
    RECOMP_CALL(sub_005EB2C0); /* 0x005E1CB3: call 0x5eb2c0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x908) = 0; /* 0x005E1CB8: mov dword ptr [esp + 0x908], 0 */
    eax = ebx + 0x18; /* 0x005E1CC3: lea eax, [ebx + 0x18] */
    /* cmp MEM32(eax + 0x14), 0x10u */ /* 0x005E1CC6: cmp dword ptr [eax + 0x14], 0x10 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E1CCE; /* 0x005E1CCA: jb 0x5e1cce */
L_005E1CCC:
    eax = MEM32(eax); /* 0x005E1CCC: mov eax, dword ptr [eax] */
L_005E1CCE:
    PUSH32(esp, ecx); /* 0x005E1CCE: push ecx */
    PUSH32(esp, 0x21u); /* 0x005E1CCF: push 0x21 */
    PUSH32(esp, eax); /* 0x005E1CD1: push eax */
    ecx = esp + 0x90; /* 0x005E1CD2: lea ecx, [esp + 0x90] */
    RECOMP_CALL(sub_0053CEE0); /* 0x005E1CD9: call 0x53cee0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E1CDE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp + 0x6C; /* 0x005E1CE0: lea ecx, [esp + 0x6c] */
    eax = MEM32(esp + 0x6C); /* 0x005E1CE4: mov eax, dword ptr [esp + 0x6c] */
    PUSH32(esp, 0); /* 0x005E1CE8: push 0 */
    eax = MEM32(eax + 0x4); /* 0x005E1CEA: mov eax, dword ptr [eax + 4] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E1CFB; /* 0x005E1CED: jne 0x5e1cfb */
L_005E1CEF:
    PUSH32(esp, 2); /* 0x005E1CEF: push 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x005E1CF1: add ecx, eax */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x7CC314)); /* 0x005E1CF3: call dword ptr [0x7cc314] */
    RECOMP_FLAGS_IN();
    goto L_005E1D05; /* 0x005E1CF9: jmp 0x5e1d05 */
L_005E1CFB:
    PUSH32(esp, 0); /* 0x005E1CFB: push 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x005E1CFD: add ecx, eax */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x7CC2E4)); /* 0x005E1CFF: call dword ptr [0x7cc2e4] */
    RECOMP_FLAGS_IN();
L_005E1D05:
    /* cmp MEM32(esp + 0xD4), 0 */ /* 0x005E1D05: cmp dword ptr [esp + 0xd4], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0xD4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E1FC0; /* 0x005E1D0D: je 0x5e1fc0 */
L_005E1D13:
    ecx = esp + 0x4C; /* 0x005E1D13: lea ecx, [esp + 0x4c] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E1D17: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x908) = (uint8_t)(1); /* 0x005E1D1C: mov byte ptr [esp + 0x908], 1 */
    /* test MEM8(esp + 0x58), 7 */ /* 0x005E1D24: test byte ptr [esp + 0x58], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x58)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x34) = 0x206u; /* 0x005E1D29: mov dword ptr [esp + 0x34], 0x206 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E1D59; /* 0x005E1D31: jne 0x5e1d59 */
L_005E1D33:
    PUSH32(esp, 0x20u); /* 0x005E1D33: push 0x20 */
    ecx = esp + 0x50; /* 0x005E1D35: lea ecx, [esp + 0x50] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E1D39: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x58); /* 0x005E1D3E: mov eax, dword ptr [esp + 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E1D42: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E1D45: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E1D45: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x60));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x60); /* 0x005E1D48: add eax, dword ptr [esp + 0x60] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x206u; /* 0x005E1D4C: mov dword ptr [eax], 0x206 */
    _flag_a = (uint32_t)(MEM32(esp + 0x58)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x58) = MEM32(esp + 0x58) + 0x20u; /* 0x005E1D52: add dword ptr [esp + 0x58], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E1D70; /* 0x005E1D57: jmp 0x5e1d70 */
L_005E1D59:
    PUSH32(esp, ecx); /* 0x005E1D59: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E1D5A: push 0x20 */
    eax = esp + 0x3C; /* 0x005E1D5C: lea eax, [esp + 0x3c] */
    PUSH32(esp, eax); /* 0x005E1D60: push eax */
    ecx = esp + 0x58; /* 0x005E1D61: lea ecx, [esp + 0x58] */
    RECOMP_CALL(sub_005F5800); /* 0x005E1D65: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    ebx = ebx; /* 0x005E1D6A: lea ebx, [ebx] */
L_005E1D70:
    edi = MEM32(0x7CC694); /* 0x005E1D70: mov edi, dword ptr [0x7cc694] */
L_005E1D76:
    PUSH32(esp, 0); /* 0x005E1D76: push 0 */
    PUSH32(esp, 0x7C4u); /* 0x005E1D78: push 0x7c4 */
    eax = esp + 0x134; /* 0x005E1D7D: lea eax, [esp + 0x134] */
    PUSH32(esp, eax); /* 0x005E1D84: push eax */
    ecx = esp + 0x78; /* 0x005E1D85: lea ecx, [esp + 0x78] */
    RECOMP_ICALL(MEM32(0x7CC27C)); /* 0x005E1D89: call dword ptr [0x7cc27c] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(esp + 0x74); /* 0x005E1D8F: mov ebx, dword ptr [esp + 0x74] */
    eax = ebx; /* 0x005E1D93: mov eax, ebx */
    esi = MEM32(esp + 0x78); /* 0x005E1D95: mov esi, dword ptr [esp + 0x78] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x005E1D99: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E1F92; /* 0x005E1D9B: je 0x5e1f92 */
L_005E1DA1:
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) & 0xFF0FFFFFu; /* 0x005E1DA1: and dword ptr [esp + 0x18], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esp + 0x1B) = (uint8_t)(0); /* 0x005E1DA9: mov byte ptr [esp + 0x1b], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) & 0xFFF00000u; /* 0x005E1DAE: and dword ptr [esp + 0x18], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x14) = 0; /* 0x005E1DB6: mov dword ptr [esp + 0x14], 0 */
    MEM32(esp + 0x1C) = 0x800u; /* 0x005E1DBE: mov dword ptr [esp + 0x1c], 0x800 */
    MEM32(esp + 0x20) = 0; /* 0x005E1DC6: mov dword ptr [esp + 0x20], 0 */
    MEM32(esp + 0x24) = 0; /* 0x005E1DCE: mov dword ptr [esp + 0x24], 0 */
    MEM32(esp + 0x28) = 0; /* 0x005E1DD6: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x005E1DDE: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0; /* 0x005E1DE6: mov dword ptr [esp + 0x30], 0 */
    MEM8(esp + 0x908) = (uint8_t)(2); /* 0x005E1DEE: mov byte ptr [esp + 0x908], 2 */
    ecx = esp + 0x28; /* 0x005E1DF6: lea ecx, [esp + 0x28] */
    PUSH32(esp, 0x100u); /* 0x005E1DFA: push 0x100 */
    RECOMP_CALL(sub_005EB4C0); /* 0x005E1DFF: call 0x5eb4c0 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x908) = (uint8_t)(3); /* 0x005E1E04: mov byte ptr [esp + 0x908], 3 */
    /* test MEM8(esp + 0x20), 7 */ /* 0x005E1E0C: test byte ptr [esp + 0x20], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x20)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x34) = 0x206u; /* 0x005E1E11: mov dword ptr [esp + 0x34], 0x206 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E1E43; /* 0x005E1E19: jne 0x5e1e43 */
L_005E1E1B:
    PUSH32(esp, 0x20u); /* 0x005E1E1B: push 0x20 */
    ecx = esp + 0x18; /* 0x005E1E1D: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E1E21: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x20); /* 0x005E1E26: mov ecx, dword ptr [esp + 0x20] */
    eax = ecx + 0x7; /* 0x005E1E2A: lea eax, [ecx + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E1E2D: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E1E2D: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esp + 0x28); /* 0x005E1E30: add eax, dword ptr [esp + 0x28] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x005E1E34: add ecx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = ecx; /* 0x005E1E37: mov dword ptr [esp + 0x20], ecx */
    MEM32(eax) = 0x206u; /* 0x005E1E3B: mov dword ptr [eax], 0x206 */
    goto L_005E1E54; /* 0x005E1E41: jmp 0x5e1e54 */
L_005E1E43:
    PUSH32(esp, ecx); /* 0x005E1E43: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E1E44: push 0x20 */
    eax = esp + 0x3C; /* 0x005E1E46: lea eax, [esp + 0x3c] */
    PUSH32(esp, eax); /* 0x005E1E4A: push eax */
    ecx = esp + 0x20; /* 0x005E1E4B: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005E1E4F: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E1E54:
    PUSH32(esp, MEM32(esp + 0x48)); /* 0x005E1E54: push dword ptr [esp + 0x48] */
    ecx = esp + 0x18; /* 0x005E1E58: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F4FC0); /* 0x005E1E5C: call 0x5f4fc0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(esp + 0x20), 7 */ /* 0x005E1E61: test byte ptr [esp + 0x20], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x20)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esp + 0x3C) = ebx; /* 0x005E1E66: mov dword ptr [esp + 0x3c], ebx */
    MEM32(esp + 0x40) = esi; /* 0x005E1E6A: mov dword ptr [esp + 0x40], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E1E9D; /* 0x005E1E6E: jne 0x5e1e9d */
L_005E1E70:
    PUSH32(esp, 0x40u); /* 0x005E1E70: push 0x40 */
    ecx = esp + 0x18; /* 0x005E1E72: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E1E76: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x20); /* 0x005E1E7B: mov esi, dword ptr [esp + 0x20] */
    edi = MEM32(esp + 0x28); /* 0x005E1E7F: mov edi, dword ptr [esp + 0x28] */
    _xmm[0].u64[0] = MEM64(esp + 0x3C); _xmm[0].u64[1] = 0; /* 0x005E1E83: movq xmm0, qword ptr [esp + 0x3c] */
    eax = esi + 0x7; /* 0x005E1E89: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E1E8C: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E1E8C: shr eax, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x40u; /* 0x005E1E8F: add esi, 0x40 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = esi; /* 0x005E1E92: mov dword ptr [esp + 0x20], esi */
    MEM64(eax + edi) = _xmm[0].u64[0]; /* 0x005E1E96: movq qword ptr [eax + edi], xmm0 */
    goto L_005E1EB6; /* 0x005E1E9B: jmp 0x5e1eb6 */
L_005E1E9D:
    PUSH32(esp, ecx); /* 0x005E1E9D: push ecx */
    PUSH32(esp, 0x40u); /* 0x005E1E9E: push 0x40 */
    eax = esp + 0x44; /* 0x005E1EA0: lea eax, [esp + 0x44] */
    PUSH32(esp, eax); /* 0x005E1EA4: push eax */
    ecx = esp + 0x20; /* 0x005E1EA5: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005E1EA9: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esp + 0x28); /* 0x005E1EAE: mov edi, dword ptr [esp + 0x28] */
    esi = MEM32(esp + 0x20); /* 0x005E1EB2: mov esi, dword ptr [esp + 0x20] */
L_005E1EB6:
    /* test ebx, ebx */ /* 0x005E1EB6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E1F18; /* 0x005E1EB8: je 0x5e1f18 */
L_005E1EBA:
    /* test MEM8(esp + 0x20), 7 */ /* 0x005E1EBA: test byte ptr [esp + 0x20], 7 */
    _flag_a = (uint32_t)(MEM8(esp + 0x20)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebx * 8; /* 0x005E1EBF: lea eax, [ebx*8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E1EFD; /* 0x005E1EC6: jne 0x5e1efd */
L_005E1EC8:
    PUSH32(esp, eax); /* 0x005E1EC8: push eax */
    ecx = esp + 0x18; /* 0x005E1EC9: lea ecx, [esp + 0x18] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E1ECD: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x20); /* 0x005E1ED2: mov esi, dword ptr [esp + 0x20] */
    eax = esp + 0x12C; /* 0x005E1ED6: lea eax, [esp + 0x12c] */
    edi = MEM32(esp + 0x28); /* 0x005E1EDD: mov edi, dword ptr [esp + 0x28] */
    PUSH32(esp, ebx); /* 0x005E1EE1: push ebx */
    PUSH32(esp, eax); /* 0x005E1EE2: push eax */
    eax = esi + 0x7; /* 0x005E1EE3: lea eax, [esi + 7] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E1EE6: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E1EE6: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x005E1EE9: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E1EEB: push eax */
    RECOMP_CALL(sub_00780838); /* 0x005E1EEC: call 0x780838 */
    RECOMP_FLAGS_IN();
    esi = esi + ebx * 8; /* 0x005E1EF1: lea esi, [esi + ebx*8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E1EF4: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x20) = esi; /* 0x005E1EF7: mov dword ptr [esp + 0x20], esi */
    goto L_005E1F18; /* 0x005E1EFB: jmp 0x5e1f18 */
L_005E1EFD:
    PUSH32(esp, ecx); /* 0x005E1EFD: push ecx */
    PUSH32(esp, eax); /* 0x005E1EFE: push eax */
    eax = esp + 0x134; /* 0x005E1EFF: lea eax, [esp + 0x134] */
    PUSH32(esp, eax); /* 0x005E1F06: push eax */
    ecx = esp + 0x20; /* 0x005E1F07: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_005F5800); /* 0x005E1F0B: call 0x5f5800 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esp + 0x28); /* 0x005E1F10: mov edi, dword ptr [esp + 0x28] */
    esi = MEM32(esp + 0x20); /* 0x005E1F14: mov esi, dword ptr [esp + 0x20] */
L_005E1F18:
    RECOMP_ICALL(MEM32(0x7CC9AC)); /* 0x005E1F18: call dword ptr [0x7cc9ac] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x005E1F1E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E1F26; /* 0x005E1F20: jne 0x5e1f26 */
L_005E1F22:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E1F22: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_005E1F40; /* 0x005E1F24: jmp 0x5e1f40 */
L_005E1F26:
    ecx = MEM32(0x927B08); /* 0x005E1F26: mov ecx, dword ptr [0x927b08] */
    /* test ecx, ecx */ /* 0x005E1F2C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E1F40; /* 0x005E1F2E: jne 0x5e1f40 */
L_005E1F30:
    ecx = 0x00927AE8u; /* 0x005E1F30: mov ecx, 0x927ae8 */
    RECOMP_CALL(sub_00431ED0); /* 0x005E1F35: call 0x431ed0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x927B08); /* 0x005E1F3A: mov ecx, dword ptr [0x927b08] */
L_005E1F40:
    edx = MEM32(ecx); /* 0x005E1F40: mov edx, dword ptr [ecx] */
    eax = esi + 0x7; /* 0x005E1F42: lea eax, [esi + 7] */
    PUSH32(esp, 0); /* 0x005E1F45: push 0 */
    PUSH32(esp, 2); /* 0x005E1F47: push 2 */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E1F49: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E1F49: shr eax, 3 */
    PUSH32(esp, eax); /* 0x005E1F4C: push eax */
    eax = MEM32(esp + 0x44); /* 0x005E1F4D: mov eax, dword ptr [esp + 0x44] */
    PUSH32(esp, edi); /* 0x005E1F51: push edi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x005E1F52: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x005E1F55: push dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx)); /* 0x005E1F57: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x908) = (uint8_t)(1); /* 0x005E1F59: mov byte ptr [esp + 0x908], 1 */
    /* test edi, edi */ /* 0x005E1F61: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E1D70; /* 0x005E1F63: je 0x5e1d70 */
L_005E1F69:
    PUSH32(esp, edi); /* 0x005E1F69: push edi */
    edi = MEM32(0x7CC694); /* 0x005E1F6A: mov edi, dword ptr [0x7cc694] */
    RECOMP_ICALL(edi); /* 0x005E1F70: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E1F72: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x28) = 0; /* 0x005E1F75: mov dword ptr [esp + 0x28], 0 */
    MEM32(esp + 0x2C) = 0; /* 0x005E1F7D: mov dword ptr [esp + 0x2c], 0 */
    MEM32(esp + 0x30) = 0; /* 0x005E1F85: mov dword ptr [esp + 0x30], 0 */
    RECOMP_BACKEDGE();
    goto L_005E1D76; /* 0x005E1F8D: jmp 0x5e1d76 */
L_005E1F92:
    MEM8(esp + 0x908) = (uint8_t)(0); /* 0x005E1F92: mov byte ptr [esp + 0x908], 0 */
    eax = MEM32(esp + 0x60); /* 0x005E1F9A: mov eax, dword ptr [esp + 0x60] */
    /* test eax, eax */ /* 0x005E1F9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E1FC0; /* 0x005E1FA0: je 0x5e1fc0 */
L_005E1FA2:
    PUSH32(esp, eax); /* 0x005E1FA2: push eax */
    RECOMP_ICALL(edi); /* 0x005E1FA3: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E1FA5: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x60) = 0; /* 0x005E1FA8: mov dword ptr [esp + 0x60], 0 */
    MEM32(esp + 0x64) = 0; /* 0x005E1FB0: mov dword ptr [esp + 0x64], 0 */
    MEM32(esp + 0x68) = 0; /* 0x005E1FB8: mov dword ptr [esp + 0x68], 0 */
L_005E1FC0:
    MEM32(esp + 0x908) = 0xFFFFFFFFu; /* 0x005E1FC0: mov dword ptr [esp + 0x908], 0xffffffff */
    eax = esp + 0xE4; /* 0x005E1FCB: lea eax, [esp + 0xe4] */
    MEM32(esp + 0x38) = eax; /* 0x005E1FD2: mov dword ptr [esp + 0x38], eax */
    eax = MEM32(esp + 0x6C); /* 0x005E1FD6: mov eax, dword ptr [esp + 0x6c] */
    eax = MEM32(eax + 0x4); /* 0x005E1FDA: mov eax, dword ptr [eax + 4] */
    MEM32(esp + eax + 0x6C) = 0x007F686Cu; /* 0x005E1FDD: mov dword ptr [esp + eax + 0x6c], 0x7f686c */
    eax = MEM32(esp + 0x6C); /* 0x005E1FE5: mov eax, dword ptr [esp + 0x6c] */
    ecx = MEM32(eax + 0x4); /* 0x005E1FE9: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x78); /* 0x005E1FEC: lea eax, [ecx - 0x78] */
    MEM32(esp + ecx + 0x68) = eax; /* 0x005E1FEF: mov dword ptr [esp + ecx + 0x68], eax */
    MEM32(esp + 0x908) = 6; /* 0x005E1FF3: mov dword ptr [esp + 0x908], 6 */
    ecx = esp + 0x84; /* 0x005E1FFE: lea ecx, [esp + 0x84] */
    RECOMP_CALL(sub_0053BD90); /* 0x005E2005: call 0x53bd90 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x908) = 0xFFFFFFFFu; /* 0x005E200A: mov dword ptr [esp + 0x908], 0xffffffff */
    ecx = esp + 0x8C; /* 0x005E2015: lea ecx, [esp + 0x8c] */
    RECOMP_ICALL(MEM32(0x7CC434)); /* 0x005E201C: call dword ptr [0x7cc434] */
    RECOMP_FLAGS_IN();
    ecx = esp + 0xE4; /* 0x005E2022: lea ecx, [esp + 0xe4] */
    RECOMP_ICALL(MEM32(0x7CC3F4)); /* 0x005E2029: call dword ptr [0x7cc3f4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x900); /* 0x005E202F: mov ecx, dword ptr [esp + 0x900] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E2036: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E203D: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E203E: pop edi */
    esi = POP32_VAL(esp); /* 0x005E203F: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E2040: pop ebx */
    ecx = MEM32(esp + 0x8E8); /* 0x005E2041: mov ecx, dword ptr [esp + 0x8e8] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x005E2048: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E204A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E204F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E2051: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x005E2052: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_005E2060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E2060u);

L_005E2060:
    PUSH32(esp, ebp); /* 0x005E2060: push ebp */
    ebp = esp; /* 0x005E2061: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E2063: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E2066: push ebx */
    PUSH32(esp, esi); /* 0x005E2067: push esi */
    PUSH32(esp, edi); /* 0x005E2068: push edi */
    edi = ecx; /* 0x005E2069: mov edi, ecx */
    eax = ebp + 0x8; /* 0x005E206B: lea eax, [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E206E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edi; /* 0x005E2070: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x005E2073: mov dword ptr [ebp - 4], ecx */
    ecx = edi; /* 0x005E2076: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E2078: push eax */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E2079: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(eax + 0x4); /* 0x005E207E: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(eax); /* 0x005E2081: sub edx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005E2083: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x005E2088: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005E208A: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005E208D: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E208F: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E208F: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E2092: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E210E; /* 0x005E2094: je 0x5e210e */
L_005E2096:
    ebx = MEM32(ebp + 0x10); /* 0x005E2096: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005E2099: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = esi; /* 0x005E209B: mov dword ptr [ebp + 0x10], esi */
    edi = edi; /* 0x005E209E: mov edi, edi */
L_005E20A0:
    eax = ebp + 0x8; /* 0x005E20A0: lea eax, [ebp + 8] */
    ecx = edi; /* 0x005E20A3: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E20A5: push eax */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E20A6: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax); /* 0x005E20AB: mov edi, dword ptr [eax] */
    eax = ebx + 0x34; /* 0x005E20AD: lea eax, [ebx + 0x34] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x005E20B0: add edi, esi */
    _flag_k = FK_ADD;
    esi = 0x10u; /* 0x005E20B2: mov esi, 0x10 */
    edx = edi + 0x34; /* 0x005E20B7: lea edx, [edi + 0x34] */
    ebx = ebx; /* 0x005E20BA: lea ebx, [ebx] */
L_005E20C0:
    ecx = MEM32(edx); /* 0x005E20C0: mov ecx, dword ptr [edx] */
    /* cmp ecx, MEM32(eax) */ /* 0x005E20C2: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E20D9; /* 0x005E20C4: jne 0x5e20d9 */
L_005E20C6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x005E20C6: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x005E20C9: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x005E20CC: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_005E20C0; /* 0x005E20CF: jae 0x5e20c0 */
L_005E20D1:
    eax = MEM32(edi + 0x30); /* 0x005E20D1: mov eax, dword ptr [edi + 0x30] */
    /* cmp eax, MEM32(ebx + 0x30) */ /* 0x005E20D4: cmp eax, dword ptr [ebx + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E2119; /* 0x005E20D7: je 0x5e2119 */
L_005E20D9:
    esi = MEM32(ebp + 0x10); /* 0x005E20D9: mov esi, dword ptr [ebp + 0x10] */
    eax = ebp + 0x8; /* 0x005E20DC: lea eax, [ebp + 8] */
    edi = MEM32(ebp + (-0x8)); /* 0x005E20DF: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x48u; /* 0x005E20E2: add esi, 0x48 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x005E20E5: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    ecx = edi; /* 0x005E20E8: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E20EA: push eax */
    MEM32(ebp + 0x10) = esi; /* 0x005E20EB: mov dword ptr [ebp + 0x10], esi */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E20EE: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x4); /* 0x005E20F3: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x005E20F6: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005E20F8: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E20FD: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005E20FF: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005E2102: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E2104: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E2104: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E2107: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x005E2109: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005E20A0; /* 0x005E210C: jb 0x5e20a0 */
L_005E210E:
    edi = POP32_VAL(esp); /* 0x005E210E: pop edi */
    esi = POP32_VAL(esp); /* 0x005E210F: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x005E2110: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x005E2112: pop ebx */
    esp = ebp; /* 0x005E2113: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E2115: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005E2116: ret 0xc */
L_005E2119:
    edi = POP32_VAL(esp); /* 0x005E2119: pop edi */
    esi = POP32_VAL(esp); /* 0x005E211A: pop esi */
    SET_LO8(eax, 1); /* 0x005E211B: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x005E211D: pop ebx */
    esp = ebp; /* 0x005E211E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E2120: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x005E2121: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_005E2B30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E2B30u);

L_005E2B30:
    PUSH32(esp, ebp); /* 0x005E2B30: push ebp */
    ebp = esp; /* 0x005E2B31: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E2B33: push -1 */
    PUSH32(esp, 0x007B0526u); /* 0x005E2B35: push 0x7b0526 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E2B3A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E2B40: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xF4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xF4u; /* 0x005E2B41: sub esp, 0xf4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x855000); /* 0x005E2B47: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E2B4C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x005E2B4E: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, ebx); /* 0x005E2B51: push ebx */
    PUSH32(esp, esi); /* 0x005E2B52: push esi */
    PUSH32(esp, edi); /* 0x005E2B53: push edi */
    PUSH32(esp, eax); /* 0x005E2B54: push eax */
    eax = ebp + (-0xC); /* 0x005E2B55: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E2B58: mov dword ptr fs:[0], eax */
    ebx = ecx; /* 0x005E2B5E: mov ebx, ecx */
    MEM32(ebp + (-0xD0)) = ebx; /* 0x005E2B60: mov dword ptr [ebp - 0xd0], ebx */
    esi = MEM32(ebp + 0x34); /* 0x005E2B66: mov esi, dword ptr [ebp + 0x34] */
    MEM32(ebp + (-0xD8)) = esi; /* 0x005E2B69: mov dword ptr [ebp - 0xd8], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E2B6F: mov dword ptr [ebp - 4], 0 */
    ecx = ebp + (-0xF8); /* 0x005E2B76: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F3C60); /* 0x005E2B7C: call 0x5f3c60 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E2B81: mov byte ptr [ebp - 4], 1 */
    edi = ebx + 0x14; /* 0x005E2B85: lea edi, [ebx + 0x14] */
    ecx = MEM32(edi + 0x4); /* 0x005E2B88: mov ecx, dword ptr [edi + 4] */
    eax = 0x92492493u; /* 0x005E2B8B: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x005E2B90: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E2B92: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(ebp + (-0xCC)) = 0; /* 0x005E2B94: mov dword ptr [ebp - 0xcc], 0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E2B9E: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E2BA0: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E2BA3: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E2BA5: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E2BA5: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E2BA8: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E2D1F; /* 0x005E2BAA: je 0x5e2d1f */
L_005E2BB0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x005E2BB0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_005E2BB2:
    esi = MEM32(0x870278); /* 0x005E2BB2: mov esi, dword ptr [0x870278] */
    RECOMP_CALL(sub_006EE000); /* 0x005E2BB8: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi); /* 0x005E2BBD: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x005E2BBF: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + ecx + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + ecx + 0x68); /* 0x005E2BC1: sub eax, dword ptr [ebx + ecx + 0x68] */
    _flag_k = FK_CMP;
    /* cmp eax, 0x1388u */ /* 0x005E2BC5: cmp eax, 0x1388 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1388u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E2CE6; /* 0x005E2BCA: jb 0x5e2ce6 */
L_005E2BD0:
    /* test MEM8(ebp + (-0xEC)), 7 */ /* 0x005E2BD0: test byte ptr [ebp - 0xec], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xEC))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0xD4)) = 0x207u; /* 0x005E2BD7: mov dword ptr [ebp - 0xd4], 0x207 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E2C11; /* 0x005E2BE1: jne 0x5e2c11 */
L_005E2BE3:
    PUSH32(esp, 0x20u); /* 0x005E2BE3: push 0x20 */
    ecx = ebp + (-0xF8); /* 0x005E2BE5: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E2BEB: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xEC)); /* 0x005E2BF0: mov eax, dword ptr [ebp - 0xec] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E2BF6: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E2BF9: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E2BF9: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xE4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xE4)); /* 0x005E2BFC: add eax, dword ptr [ebp - 0xe4] */
    _flag_k = FK_ADD;
    MEM32(eax) = 0x207u; /* 0x005E2C02: mov dword ptr [eax], 0x207 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xEC))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xEC)) = MEM32(ebp + (-0xEC)) + 0x20u; /* 0x005E2C08: add dword ptr [ebp - 0xec], 0x20 */
    _flag_k = FK_ADD;
    goto L_005E2C26; /* 0x005E2C0F: jmp 0x5e2c26 */
L_005E2C11:
    PUSH32(esp, ecx); /* 0x005E2C11: push ecx */
    PUSH32(esp, 0x20u); /* 0x005E2C12: push 0x20 */
    eax = ebp + (-0xD4); /* 0x005E2C14: lea eax, [ebp - 0xd4] */
    PUSH32(esp, eax); /* 0x005E2C1A: push eax */
    ecx = ebp + (-0xF8); /* 0x005E2C1B: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F5800); /* 0x005E2C21: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E2C26:
    eax = MEM32(edi); /* 0x005E2C26: mov eax, dword ptr [edi] */
    ecx = ebp + (-0xF8); /* 0x005E2C28: lea ecx, [ebp - 0xf8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x005E2C2E: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E2C30: push eax */
    RECOMP_CALL(sub_005F4FC0); /* 0x005E2C31: call 0x5f4fc0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + (-0xEC)), 7 */ /* 0x005E2C36: test byte ptr [ebp - 0xec], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xEC))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(edi); /* 0x005E2C3D: mov ecx, dword ptr [edi] */
    eax = MEM32(ebx + ecx + 0x54); /* 0x005E2C3F: mov eax, dword ptr [ebx + ecx + 0x54] */
    MEM32(ebp + (-0x100)) = eax; /* 0x005E2C43: mov dword ptr [ebp - 0x100], eax */
    eax = MEM32(ebx + ecx + 0x58); /* 0x005E2C49: mov eax, dword ptr [ebx + ecx + 0x58] */
    MEM32(ebp + (-0xFC)) = eax; /* 0x005E2C4D: mov dword ptr [ebp - 0xfc], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E2C89; /* 0x005E2C53: jne 0x5e2c89 */
L_005E2C55:
    PUSH32(esp, 0x40u); /* 0x005E2C55: push 0x40 */
    ecx = ebp + (-0xF8); /* 0x005E2C57: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F3D70); /* 0x005E2C5D: call 0x5f3d70 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xEC)); /* 0x005E2C62: mov eax, dword ptr [ebp - 0xec] */
    _xmm[0].u64[0] = MEM64(ebp + (-0x100)); _xmm[0].u64[1] = 0; /* 0x005E2C68: movq xmm0, qword ptr [ebp - 0x100] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x005E2C70: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x005E2C73: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x005E2C73: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xE4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xE4)); /* 0x005E2C76: add eax, dword ptr [ebp - 0xe4] */
    _flag_k = FK_ADD;
    MEM64(eax) = _xmm[0].u64[0]; /* 0x005E2C7C: movq qword ptr [eax], xmm0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xEC))); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xEC)) = MEM32(ebp + (-0xEC)) + 0x40u; /* 0x005E2C80: add dword ptr [ebp - 0xec], 0x40 */
    _flag_k = FK_ADD;
    goto L_005E2C9E; /* 0x005E2C87: jmp 0x5e2c9e */
L_005E2C89:
    PUSH32(esp, ecx); /* 0x005E2C89: push ecx */
    PUSH32(esp, 0x40u); /* 0x005E2C8A: push 0x40 */
    eax = ebp + (-0x100); /* 0x005E2C8C: lea eax, [ebp - 0x100] */
    PUSH32(esp, eax); /* 0x005E2C92: push eax */
    ecx = ebp + (-0xF8); /* 0x005E2C93: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F5800); /* 0x005E2C99: call 0x5f5800 */
    RECOMP_FLAGS_IN();
L_005E2C9E:
    esi = MEM32(ebp + (-0xD8)); /* 0x005E2C9E: mov esi, dword ptr [ebp - 0xd8] */
    eax = ebp + (-0xF8); /* 0x005E2CA4: lea eax, [ebp - 0xf8] */
    PUSH32(esp, eax); /* 0x005E2CAA: push eax */
    ecx = esi; /* 0x005E2CAB: mov ecx, esi */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E2CAD: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x005E2CB2: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + (-0xD0))); /* 0x005E2CB4: push dword ptr [ebp - 0xd0] */
    edx = MEM32(edi + 0x4); /* 0x005E2CBA: mov edx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x005E2CBD: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E2CBF: push eax */
    ecx = eax + 0x70; /* 0x005E2CC0: lea ecx, [eax + 0x70] */
    RECOMP_CALL(sub_005EE120); /* 0x005E2CC3: call 0x5ee120 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x4); /* 0x005E2CC8: mov edx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E2CCB: add esp, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0xD0))); /* 0x005E2CCE: push dword ptr [ebp - 0xd0] */
    ecx = edx + (-0x70); /* 0x005E2CD4: lea ecx, [edx - 0x70] */
    PUSH32(esp, ecx); /* 0x005E2CD7: push ecx */
    RECOMP_CALL(sub_005EE380); /* 0x005E2CD8: call 0x5ee380 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x005E2CDD: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0xFFFFFF90u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) + 0xFFFFFF90u; /* 0x005E2CE0: add dword ptr [edi + 4], -0x70 */
    _flag_k = FK_ADD;
    goto L_005E2CF5; /* 0x005E2CE4: jmp 0x5e2cf5 */
L_005E2CE6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xCC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xCC)) = MEM32(ebp + (-0xCC)) + 1; /* 0x005E2CE6: inc dword ptr [ebp - 0xcc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x70u; /* 0x005E2CEC: add ebx, 0x70 */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0xD8)); /* 0x005E2CEF: mov esi, dword ptr [ebp - 0xd8] */
L_005E2CF5:
    ecx = MEM32(edi + 0x4); /* 0x005E2CF5: mov ecx, dword ptr [edi + 4] */
    eax = 0x92492493u; /* 0x005E2CF8: mov eax, 0x92492493 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x005E2CFD: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E2CFF: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E2D01: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E2D03: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E2D06: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E2D08: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E2D08: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E2D0B: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0xCC)), eax */ /* 0x005E2D0D: cmp dword ptr [ebp - 0xcc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xCC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005E2BB2; /* 0x005E2D13: jb 0x5e2bb2 */
L_005E2D19:
    ebx = MEM32(ebp + (-0xD0)); /* 0x005E2D19: mov ebx, dword ptr [ebp - 0xd0] */
L_005E2D1F:
    eax = MEM32(ebp + 0x8); /* 0x005E2D1F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFDFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFDFEu; /* 0x005E2D22: add eax, 0xfffffdfe */
    _flag_k = FK_ADD;
    /* cmp eax, 4 */ /* 0x005E2D27: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_005E2E3A; /* 0x005E2D2A: ja 0x5e2e3a */
L_005E2D30:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x5E3420)); goto _ljump; }
L_005E2D37:
    ecx = ebp + (-0x6C); /* 0x005E2D37: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_0045AA30); /* 0x005E2D3A: call 0x45aa30 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E2D3F: mov byte ptr [ebp - 4], 2 */
    eax = ebp + (-0x6C); /* 0x005E2D43: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x005E2D46: push eax */
    ecx = ebp + 0xC; /* 0x005E2D47: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005F4BB0); /* 0x005E2D4A: call 0x5f4bb0 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x2C; /* 0x005E2D4F: lea eax, [ebp + 0x2c] */
    ecx = ebx; /* 0x005E2D52: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E2D54: push eax */
    eax = ebp + (-0xD0); /* 0x005E2D55: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x005E2D5B: push eax */
    RECOMP_CALL(sub_005DC0D0); /* 0x005E2D5C: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x005E2D61: mov eax, dword ptr [ebx] */
    /* cmp MEM32(ebp + (-0xD0)), eax */ /* 0x005E2D63: cmp dword ptr [ebp - 0xd0], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E2D7E; /* 0x005E2D69: jne 0x5e2d7e */
L_005E2D6B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005E2D6B: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E2D6D: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x6C); /* 0x005E2D71: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_00441610); /* 0x005E2D74: call 0x441610 */
    RECOMP_FLAGS_IN();
    goto L_005E2E3C; /* 0x005E2D79: jmp 0x5e2e3c */
L_005E2D7E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E2D7E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x2C; /* 0x005E2D80: lea eax, [ebp + 0x2c] */
    MEM32(ebp + (-0xCC)) = ecx; /* 0x005E2D83: mov dword ptr [ebp - 0xcc], ecx */
    ecx = ebx; /* 0x005E2D89: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E2D8B: push eax */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E2D8C: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x4); /* 0x005E2D91: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x005E2D94: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005E2D96: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E2D9B: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005E2D9D: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005E2DA0: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E2DA2: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E2DA2: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E2DA5: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E2E2E; /* 0x005E2DA7: je 0x5e2e2e */
L_005E2DAD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005E2DAD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xD4)) = esi; /* 0x005E2DAF: mov dword ptr [ebp - 0xd4], esi */
L_005E2DB5:
    eax = ebp + 0x2C; /* 0x005E2DB5: lea eax, [ebp + 0x2c] */
    ecx = ebx; /* 0x005E2DB8: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E2DBA: push eax */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E2DBB: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    edx = ebp + (-0x38); /* 0x005E2DC0: lea edx, [ebp - 0x38] */
    edi = MEM32(eax); /* 0x005E2DC3: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x005E2DC5: add edi, esi */
    _flag_k = FK_ADD;
    esi = 0x10u; /* 0x005E2DC7: mov esi, 0x10 */
    ecx = edi + 0x34; /* 0x005E2DCC: lea ecx, [edi + 0x34] */
    /* nop */ /* 0x005E2DCF: nop  */
L_005E2DD0:
    eax = MEM32(ecx); /* 0x005E2DD0: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x005E2DD2: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E2DED; /* 0x005E2DD4: jne 0x5e2ded */
L_005E2DD6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005E2DD6: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x005E2DD9: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x005E2DDC: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_005E2DD0; /* 0x005E2DDF: jae 0x5e2dd0 */
L_005E2DE1:
    eax = MEM32(edi + 0x30); /* 0x005E2DE1: mov eax, dword ptr [edi + 0x30] */
    /* cmp eax, MEM32(ebp + (-0x3C)) */ /* 0x005E2DE4: cmp eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E2EBD; /* 0x005E2DE7: je 0x5e2ebd */
L_005E2DED:
    edi = MEM32(ebp + (-0xCC)); /* 0x005E2DED: mov edi, dword ptr [ebp - 0xcc] */
    eax = ebp + 0x2C; /* 0x005E2DF3: lea eax, [ebp + 0x2c] */
    esi = MEM32(ebp + (-0xD4)); /* 0x005E2DF6: mov esi, dword ptr [ebp - 0xd4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x005E2DFC: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x48u; /* 0x005E2DFD: add esi, 0x48 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xCC)) = edi; /* 0x005E2E00: mov dword ptr [ebp - 0xcc], edi */
    PUSH32(esp, eax); /* 0x005E2E06: push eax */
    ecx = ebx; /* 0x005E2E07: mov ecx, ebx */
    MEM32(ebp + (-0xD4)) = esi; /* 0x005E2E09: mov dword ptr [ebp - 0xd4], esi */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E2E0F: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x4); /* 0x005E2E14: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x005E2E17: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005E2E19: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E2E1E: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005E2E20: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005E2E23: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E2E25: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E2E25: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E2E28: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x005E2E2A: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_005E2DB5; /* 0x005E2E2C: jb 0x5e2db5 */
L_005E2E2E:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E2E2E: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x6C); /* 0x005E2E32: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_00441610); /* 0x005E2E35: call 0x441610 */
    RECOMP_FLAGS_IN();
L_005E2E3A:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005E2E3A: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_005E2E3C:
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x005E2E3C: mov byte ptr [ebp - 4], 0 */
    eax = MEM32(ebp + (-0xE4)); /* 0x005E2E40: mov eax, dword ptr [ebp - 0xe4] */
    esi = MEM32(0x7CC694); /* 0x005E2E46: mov esi, dword ptr [0x7cc694] */
    /* test eax, eax */ /* 0x005E2E4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E2E74; /* 0x005E2E4E: je 0x5e2e74 */
L_005E2E50:
    PUSH32(esp, eax); /* 0x005E2E50: push eax */
    RECOMP_ICALL(esi); /* 0x005E2E51: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E2E53: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xE4)) = 0; /* 0x005E2E56: mov dword ptr [ebp - 0xe4], 0 */
    MEM32(ebp + (-0xE0)) = 0; /* 0x005E2E60: mov dword ptr [ebp - 0xe0], 0 */
    MEM32(ebp + (-0xDC)) = 0; /* 0x005E2E6A: mov dword ptr [ebp - 0xdc], 0 */
L_005E2E74:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E2E74: mov dword ptr [ebp - 4], 0xffffffff */
    eax = MEM32(ebp + 0x20); /* 0x005E2E7B: mov eax, dword ptr [ebp + 0x20] */
    /* test eax, eax */ /* 0x005E2E7E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E2E9D; /* 0x005E2E80: je 0x5e2e9d */
L_005E2E82:
    PUSH32(esp, eax); /* 0x005E2E82: push eax */
    RECOMP_ICALL(esi); /* 0x005E2E83: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E2E85: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x20) = 0; /* 0x005E2E88: mov dword ptr [ebp + 0x20], 0 */
    MEM32(ebp + 0x24) = 0; /* 0x005E2E8F: mov dword ptr [ebp + 0x24], 0 */
    MEM32(ebp + 0x28) = 0; /* 0x005E2E96: mov dword ptr [ebp + 0x28], 0 */
L_005E2E9D:
    SET_LO8(eax, LO8(ebx)); /* 0x005E2E9D: mov al, bl */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E2E9F: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E2EA2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E2EA9: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E2EAA: pop edi */
    esi = POP32_VAL(esp); /* 0x005E2EAB: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E2EAC: pop ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x005E2EAD: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x005E2EB0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x005E2EB2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x005E2EB7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E2EB9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 52; { RECOMP_REGS_OUT(); return; } /* 0x005E2EBA: ret 0x30 */
L_005E2EBD:
    PUSH32(esp, 0x203u); /* 0x005E2EBD: push 0x203 */
    ecx = ebp + (-0xF8); /* 0x005E2EC2: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F5560); /* 0x005E2EC8: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x6C); /* 0x005E2ECD: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x005E2ED0: push eax */
    ecx = ebp + (-0xF8); /* 0x005E2ED1: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F4FC0); /* 0x005E2ED7: call 0x5f4fc0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x005E2EDC: push dword ptr [ebp + 0x30] */
    ecx = ebp + (-0xF8); /* 0x005E2EDF: lea ecx, [ebp - 0xf8] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x005E2EE5: push dword ptr [ebp + 0x2c] */
    RECOMP_CALL(sub_005F55B0); /* 0x005E2EE8: call 0x5f55b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xD8)); /* 0x005E2EED: mov ecx, dword ptr [ebp - 0xd8] */
    eax = ebp + (-0xF8); /* 0x005E2EF3: lea eax, [ebp - 0xf8] */
    PUSH32(esp, eax); /* 0x005E2EF9: push eax */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E2EFA: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x2C; /* 0x005E2EFF: lea eax, [ebp + 0x2c] */
    ecx = ebx; /* 0x005E2F02: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E2F04: push eax */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E2F05: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xCC)); /* 0x005E2F0A: mov ecx, dword ptr [ebp - 0xcc] */
    eax = MEM32(eax); /* 0x005E2F10: mov eax, dword ptr [eax] */
    esi = ecx + ecx * 8; /* 0x005E2F12: lea esi, [ecx + ecx*8] */
    ecx = ebp + 0x2C; /* 0x005E2F15: lea ecx, [ebp + 0x2c] */
    if (3u) _cf = (((esi) >> 29) & 1u); /* 0x005E2F18: shl esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 3u; /* 0x005E2F18: shl esi, 3 */
    PUSH32(esp, ecx); /* 0x005E2F1B: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005E2F1C: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E2F1E: push eax */
    RECOMP_CALL(sub_005E1C60); /* 0x005E2F1F: call 0x5e1c60 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x2C; /* 0x005E2F24: lea eax, [ebp + 0x2c] */
    ecx = ebx; /* 0x005E2F27: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E2F29: push eax */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E2F2A: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x005E2F2F: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x005E2F31: add eax, esi */
    _flag_k = FK_ADD;
L_005E2F33:
    PUSH32(esp, eax); /* 0x005E2F33: push eax */
    eax = ebp + (-0xD0); /* 0x005E2F34: lea eax, [ebp - 0xd0] */
    ecx = ebx; /* 0x005E2F3A: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E2F3C: push eax */
    eax = ebp + 0x2C; /* 0x005E2F3D: lea eax, [ebp + 0x2c] */
    PUSH32(esp, eax); /* 0x005E2F40: push eax */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E2F41: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x005E2F46: mov ecx, eax */
    RECOMP_CALL(sub_005EBAA0); /* 0x005E2F48: call 0x5ebaa0 */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, 1); /* 0x005E2F4D: mov bl, 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x005E2F4F: mov byte ptr [ebp - 4], bl */
    ecx = ebp + (-0x6C); /* 0x005E2F52: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_00441610); /* 0x005E2F55: call 0x441610 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_005E2E3C; /* 0x005E2F5A: jmp 0x5e2e3c */
L_005E2F5F:
    ecx = ebp + (-0x6C); /* 0x005E2F5F: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_0045AA30); /* 0x005E2F62: call 0x45aa30 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E2F67: mov byte ptr [ebp - 4], 3 */
    eax = ebp + (-0x6C); /* 0x005E2F6B: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x005E2F6E: push eax */
    ecx = ebp + 0xC; /* 0x005E2F6F: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005F4BB0); /* 0x005E2F72: call 0x5f4bb0 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x2C; /* 0x005E2F77: lea eax, [ebp + 0x2c] */
    ecx = ebx; /* 0x005E2F7A: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E2F7C: push eax */
    eax = ebp + (-0xD0); /* 0x005E2F7D: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x005E2F83: push eax */
    RECOMP_CALL(sub_005DC0D0); /* 0x005E2F84: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x005E2F89: mov eax, dword ptr [ebx] */
    /* cmp MEM32(ebp + (-0xD0)), eax */ /* 0x005E2F8B: cmp dword ptr [ebp - 0xd0], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E2FA6; /* 0x005E2F91: jne 0x5e2fa6 */
L_005E2F93:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005E2F93: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E2F95: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x6C); /* 0x005E2F99: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_00441610); /* 0x005E2F9C: call 0x441610 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_005E2E3C; /* 0x005E2FA1: jmp 0x5e2e3c */
L_005E2FA6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x005E2FA6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x2C; /* 0x005E2FA8: lea eax, [ebp + 0x2c] */
    MEM32(ebp + (-0xD8)) = ecx; /* 0x005E2FAB: mov dword ptr [ebp - 0xd8], ecx */
    ecx = ebx; /* 0x005E2FB1: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E2FB3: push eax */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E2FB4: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x4); /* 0x005E2FB9: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x005E2FBC: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005E2FBE: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E2FC3: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005E2FC5: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005E2FC8: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E2FCA: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E2FCA: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E2FCD: add eax, edx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E2E2E; /* 0x005E2FCF: je 0x5e2e2e */
L_005E2FD5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x005E2FD5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xCC)) = esi; /* 0x005E2FD7: mov dword ptr [ebp - 0xcc], esi */
    ecx = ecx; /* 0x005E2FDD: lea ecx, [ecx] */
L_005E2FE0:
    eax = ebp + 0x2C; /* 0x005E2FE0: lea eax, [ebp + 0x2c] */
    ecx = ebx; /* 0x005E2FE3: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E2FE5: push eax */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E2FE6: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    edx = ebp + (-0x38); /* 0x005E2FEB: lea edx, [ebp - 0x38] */
    edi = MEM32(eax); /* 0x005E2FEE: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x005E2FF0: add edi, esi */
    _flag_k = FK_ADD;
    esi = 0x10u; /* 0x005E2FF2: mov esi, 0x10 */
    ecx = edi + 0x34; /* 0x005E2FF7: lea ecx, [edi + 0x34] */
    ebx = ebx; /* 0x005E2FFA: lea ebx, [ebx] */
L_005E3000:
    eax = MEM32(ecx); /* 0x005E3000: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x005E3002: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E3019; /* 0x005E3004: jne 0x5e3019 */
L_005E3006:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005E3006: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x005E3009: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x005E300C: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_005E3000; /* 0x005E300F: jae 0x5e3000 */
L_005E3011:
    eax = MEM32(edi + 0x30); /* 0x005E3011: mov eax, dword ptr [edi + 0x30] */
    /* cmp eax, MEM32(ebp + (-0x3C)) */ /* 0x005E3014: cmp eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E305E; /* 0x005E3017: je 0x5e305e */
L_005E3019:
    esi = MEM32(ebp + (-0xD8)); /* 0x005E3019: mov esi, dword ptr [ebp - 0xd8] */
    eax = ebp + 0x2C; /* 0x005E301F: lea eax, [ebp + 0x2c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xCC))); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xCC)) = MEM32(ebp + (-0xCC)) + 0x48u; /* 0x005E3022: add dword ptr [ebp - 0xcc], 0x48 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005E3029: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x005E302A: push eax */
    ecx = ebx; /* 0x005E302B: mov ecx, ebx */
    MEM32(ebp + (-0xD8)) = esi; /* 0x005E302D: mov dword ptr [ebp - 0xd8], esi */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E3033: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x4); /* 0x005E3038: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x005E303B: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    eax = 0x38E38E39u; /* 0x005E303D: mov eax, 0x38e38e39 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E3042: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x005E3044: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    eax = edx; /* 0x005E3047: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E3049: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E3049: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E304C: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x005E304E: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E2E2E; /* 0x005E3050: jae 0x5e2e2e */
L_005E3056:
    esi = MEM32(ebp + (-0xCC)); /* 0x005E3056: mov esi, dword ptr [ebp - 0xcc] */
    RECOMP_BACKEDGE();
    goto L_005E2FE0; /* 0x005E305C: jmp 0x5e2fe0 */
L_005E305E:
    eax = ebp + 0x2C; /* 0x005E305E: lea eax, [ebp + 0x2c] */
    ecx = ebx; /* 0x005E3061: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E3063: push eax */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E3064: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xD8)); /* 0x005E3069: mov ecx, dword ptr [ebp - 0xd8] */
    eax = MEM32(eax); /* 0x005E306F: mov eax, dword ptr [eax] */
    ecx = ecx + ecx * 8; /* 0x005E3071: lea ecx, [ecx + ecx*8] */
    eax = eax + ecx * 8; /* 0x005E3074: lea eax, [eax + ecx*8] */
    RECOMP_BACKEDGE();
    goto L_005E2F33; /* 0x005E3077: jmp 0x5e2f33 */
L_005E307C:
    ecx = ebp + (-0x6C); /* 0x005E307C: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_0045AA30); /* 0x005E307F: call 0x45aa30 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x005E3084: mov byte ptr [ebp - 4], 4 */
    eax = ebp + (-0x6C); /* 0x005E3088: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x005E308B: push eax */
    ecx = ebp + 0xC; /* 0x005E308C: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005F4BB0); /* 0x005E308F: call 0x5f4bb0 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x2C; /* 0x005E3094: lea eax, [ebp + 0x2c] */
    ecx = ebx; /* 0x005E3097: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E3099: push eax */
    eax = ebp + (-0xD0); /* 0x005E309A: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x005E30A0: push eax */
    RECOMP_CALL(sub_005DC0D0); /* 0x005E30A1: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x005E30A6: mov eax, dword ptr [ebx] */
    /* cmp MEM32(ebp + (-0xD0)), eax */ /* 0x005E30A8: cmp dword ptr [ebp - 0xd0], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E30C3; /* 0x005E30AE: jne 0x5e30c3 */
L_005E30B0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005E30B0: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E30B2: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x6C); /* 0x005E30B6: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_00441610); /* 0x005E30B9: call 0x441610 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_005E2E3C; /* 0x005E30BE: jmp 0x5e2e3c */
L_005E30C3:
    PUSH32(esp, 0x202u); /* 0x005E30C3: push 0x202 */
    ecx = ebp + (-0xF8); /* 0x005E30C8: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F5560); /* 0x005E30CE: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x6C); /* 0x005E30D3: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x005E30D6: push eax */
    ecx = ebp + (-0xF8); /* 0x005E30D7: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F4FC0); /* 0x005E30DD: call 0x5f4fc0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x005E30E2: push dword ptr [ebp + 0x30] */
    ecx = ebp + (-0xF8); /* 0x005E30E5: lea ecx, [ebp - 0xf8] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x005E30EB: push dword ptr [ebp + 0x2c] */
    RECOMP_CALL(sub_005F55B0); /* 0x005E30EE: call 0x5f55b0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xF8); /* 0x005E30F3: lea eax, [ebp - 0xf8] */
    ecx = esi; /* 0x005E30F9: mov ecx, esi */
    PUSH32(esp, eax); /* 0x005E30FB: push eax */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E30FC: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x6C); /* 0x005E3101: lea eax, [ebp - 0x6c] */
    ecx = ebx; /* 0x005E3104: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E3106: push eax */
    eax = ebp + 0x2C; /* 0x005E3107: lea eax, [ebp + 0x2c] */
    PUSH32(esp, eax); /* 0x005E310A: push eax */
    RECOMP_CALL(sub_005EBAE0); /* 0x005E310B: call 0x5ebae0 */
    RECOMP_FLAGS_IN();
    ecx = eax + 0xC; /* 0x005E3110: lea ecx, [eax + 0xc] */
    RECOMP_CALL(sub_005EB9F0); /* 0x005E3113: call 0x5eb9f0 */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, 1); /* 0x005E3118: mov bl, 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x005E311A: mov byte ptr [ebp - 4], bl */
    ecx = ebp + (-0x6C); /* 0x005E311D: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_00441610); /* 0x005E3120: call 0x441610 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_005E2E3C; /* 0x005E3125: jmp 0x5e2e3c */
L_005E312A:
    eax = ebp + 0x2C; /* 0x005E312A: lea eax, [ebp + 0x2c] */
    ecx = ebx; /* 0x005E312D: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x005E312F: push eax */
    eax = ebp + (-0xD0); /* 0x005E3130: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x005E3136: push eax */
    RECOMP_CALL(sub_005DC0D0); /* 0x005E3137: call 0x5dc0d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x005E313C: mov eax, dword ptr [ebx] */
    /* cmp MEM32(ebp + (-0xD0)), eax */ /* 0x005E313E: cmp dword ptr [ebp - 0xd0], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD0))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_005E2E3A; /* 0x005E3144: je 0x5e2e3a */
L_005E314A:
    ecx = ebp + (-0x6C); /* 0x005E314A: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_0045AA30); /* 0x005E314D: call 0x45aa30 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x005E3152: mov byte ptr [ebp - 4], 5 */
    eax = ebp + (-0x6C); /* 0x005E3156: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x005E3159: push eax */
    ecx = ebp + 0xC; /* 0x005E315A: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005F4BB0); /* 0x005E315D: call 0x5f4bb0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x4); /* 0x005E3162: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E3165: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x005E3167: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xD4)) = eax; /* 0x005E3169: mov dword ptr [ebp - 0xd4], eax */
    eax = 0x92492493u; /* 0x005E316F: mov eax, 0x92492493 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E3174: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E3176: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E3178: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E317B: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E317D: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E317D: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E3180: add eax, edx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_005E2E2E; /* 0x005E3182: je 0x5e2e2e */
L_005E3188:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E3188: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xCC)) = eax; /* 0x005E318A: mov dword ptr [ebp - 0xcc], eax */
L_005E3190:
    ecx = MEM32(edi); /* 0x005E3190: mov ecx, dword ptr [edi] */
    edx = ebp + (-0x38); /* 0x005E3192: lea edx, [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x005E3195: add ecx, 0x34 */
    _flag_k = FK_ADD;
    esi = 0x10u; /* 0x005E3198: mov esi, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x005E319D: add ecx, eax */
    _flag_k = FK_ADD;
    /* nop */ /* 0x005E319F: nop  */
L_005E31A0:
    eax = MEM32(ecx); /* 0x005E31A0: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x005E31A2: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E320B; /* 0x005E31A4: jne 0x5e320b */
L_005E31A6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x005E31A6: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x005E31A9: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x005E31AC: sub esi, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_005E31A0; /* 0x005E31AF: jae 0x5e31a0 */
L_005E31B1:
    eax = MEM32(ebp + (-0xCC)); /* 0x005E31B1: mov eax, dword ptr [ebp - 0xcc] */
    ecx = MEM32(edi); /* 0x005E31B7: mov ecx, dword ptr [edi] */
    edx = MEM32(ebp + (-0x3C)); /* 0x005E31B9: mov edx, dword ptr [ebp - 0x3c] */
    /* cmp MEM32(ecx + eax + 0x30), edx */ /* 0x005E31BC: cmp dword ptr [ecx + eax + 0x30], edx */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x30)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E3211; /* 0x005E31C0: jne 0x5e3211 */
L_005E31C2:
    edx = MEM32(ebp + 0x2C); /* 0x005E31C2: mov edx, dword ptr [ebp + 0x2c] */
    /* cmp MEM32(ecx + eax + 0x54), edx */ /* 0x005E31C5: cmp dword ptr [ecx + eax + 0x54], edx */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x54)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E3211; /* 0x005E31C9: jne 0x5e3211 */
L_005E31CB:
    edx = MEM32(ebp + 0x30); /* 0x005E31CB: mov edx, dword ptr [ebp + 0x30] */
    /* cmp MEM32(ecx + eax + 0x58), edx */ /* 0x005E31CE: cmp dword ptr [ecx + eax + 0x58], edx */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x58)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E3211; /* 0x005E31D2: jne 0x5e3211 */
L_005E31D4:
    eax = ebp + (-0x100); /* 0x005E31D4: lea eax, [ebp - 0x100] */
    PUSH32(esp, eax); /* 0x005E31DA: push eax */
    ecx = ebp + 0xC; /* 0x005E31DB: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005F5340); /* 0x005E31DE: call 0x5f5340 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0xFC)), 0 */ /* 0x005E31E3: cmp dword ptr [ebp - 0xfc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xFC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x100)); /* 0x005E31EA: mov esi, dword ptr [ebp - 0x100] */
    if (CMP_G(_flag_a, _flag_b)) goto L_005E3252; /* 0x005E31F0: jg 0x5e3252 */
L_005E31F2:
    if (CMP_L(_flag_a, _flag_b)) goto L_005E31F8; /* 0x005E31F2: jl 0x5e31f8 */
L_005E31F4:
    /* test esi, esi */ /* 0x005E31F4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_005E3252; /* 0x005E31F6: jne 0x5e3252 */
L_005E31F8:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x005E31F8: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E31FA: mov byte ptr [ebp - 4], 1 */
    ecx = ebp + (-0x6C); /* 0x005E31FE: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_00441610); /* 0x005E3201: call 0x441610 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_005E2E3C; /* 0x005E3206: jmp 0x5e2e3c */
L_005E320B:
    eax = MEM32(ebp + (-0xCC)); /* 0x005E320B: mov eax, dword ptr [ebp - 0xcc] */
L_005E3211:
    ecx = MEM32(edi + 0x4); /* 0x005E3211: mov ecx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x70u; /* 0x005E3214: add eax, 0x70 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi); /* 0x005E3217: sub ecx, dword ptr [edi] */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0xD4)); /* 0x005E3219: mov esi, dword ptr [ebp - 0xd4] */
    MEM32(ebp + (-0xCC)) = eax; /* 0x005E321F: mov dword ptr [ebp - 0xcc], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x005E3225: inc esi */
    _flag_k = FK_INC;
    eax = 0x92492493u; /* 0x005E3226: mov eax, 0x92492493 */
    MEM32(ebp + (-0xD4)) = esi; /* 0x005E322B: mov dword ptr [ebp - 0xd4], esi */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x005E3231: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x005E3233: add edx, ecx */
    _flag_k = FK_ADD;
    if (6u) _cf = (((edx) >> 5) & 1u); /* 0x005E3235: sar edx, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 6u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 6u);
    eax = edx; /* 0x005E3238: mov eax, edx */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x005E323A: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x005E323A: shr eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x005E323D: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x005E323F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_005E2E2E; /* 0x005E3241: jae 0x5e2e2e */
L_005E3247:
    eax = MEM32(ebp + (-0xCC)); /* 0x005E3247: mov eax, dword ptr [ebp - 0xcc] */
    RECOMP_BACKEDGE();
    goto L_005E3190; /* 0x005E324D: jmp 0x5e3190 */
L_005E3252:
    ecx = (uint32_t)((int32_t)MEM32(ebp + (-0xD4)) * (int32_t)0x70u); /* 0x005E3252: imul ecx, dword ptr [ebp - 0xd4], 0x70 */
    edx = MEM32(edi); /* 0x005E3259: mov edx, dword ptr [edi] */
    MEM32(ebp + (-0xCC)) = ecx; /* 0x005E325B: mov dword ptr [ebp - 0xcc], ecx */
    eax = MEM32(ecx + edx + 0x60); /* 0x005E3261: mov eax, dword ptr [ecx + edx + 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edx + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + edx + 0x48); /* 0x005E3265: add eax, dword ptr [ecx + edx + 0x48] */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x005E3269: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E327D; /* 0x005E326B: je 0x5e327d */
L_005E326D:
    PUSH32(esp, esi); /* 0x005E326D: push esi */
    PUSH32(esp, eax); /* 0x005E326E: push eax */
    ecx = ebp + 0xC; /* 0x005E326F: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_005F5790); /* 0x005E3272: call 0x5f5790 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xCC)); /* 0x005E3277: mov ecx, dword ptr [ebp - 0xcc] */
L_005E327D:
    eax = MEM32(edi); /* 0x005E327D: mov eax, dword ptr [edi] */
    edx = MEM32(ebp + (-0xFC)); /* 0x005E327F: mov edx, dword ptr [ebp - 0xfc] */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x60)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + eax + 0x60) = MEM32(ecx + eax + 0x60) + esi; /* 0x005E3285: add dword ptr [ecx + eax + 0x60], esi */
    _flag_k = FK_ADD;
    esi = MEM32(0x870278); /* 0x005E3289: mov esi, dword ptr [0x870278] */
    { uint32_t _aa = MEM32(ecx + eax + 0x64), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x005E328F: adc dword ptr [ecx + eax + 0x64], edx */
      MEM32(ecx + eax + 0x64) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_CALL(sub_006EE000); /* 0x005E3293: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi); /* 0x005E3298: sub eax, dword ptr [esi] */
    _flag_k = FK_CMP;
    ecx = MEM32(edi); /* 0x005E329A: mov ecx, dword ptr [edi] */
    esi = MEM32(ebp + (-0xCC)); /* 0x005E329C: mov esi, dword ptr [ebp - 0xcc] */
    PUSH32(esp, 0x205u); /* 0x005E32A2: push 0x205 */
    MEM32(esi + ecx + 0x68) = eax; /* 0x005E32A7: mov dword ptr [esi + ecx + 0x68], eax */
    ecx = ebp + (-0xF8); /* 0x005E32AB: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F5560); /* 0x005E32B1: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x6C); /* 0x005E32B6: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x005E32B9: push eax */
    ecx = ebp + (-0xF8); /* 0x005E32BA: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F4FC0); /* 0x005E32C0: call 0x5f4fc0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x005E32C5: mov eax, dword ptr [edi] */
    ecx = ebp + (-0xF8); /* 0x005E32C7: lea ecx, [ebp - 0xf8] */
    PUSH32(esp, MEM32(esi + eax + 0x64)); /* 0x005E32CD: push dword ptr [esi + eax + 0x64] */
    PUSH32(esp, MEM32(esi + eax + 0x60)); /* 0x005E32D1: push dword ptr [esi + eax + 0x60] */
    RECOMP_CALL(sub_005F55B0); /* 0x005E32D5: call 0x5f55b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x005E32DA: push dword ptr [ebp + 0x30] */
    ecx = ebp + (-0xF8); /* 0x005E32DD: lea ecx, [ebp - 0xf8] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x005E32E3: push dword ptr [ebp + 0x2c] */
    RECOMP_CALL(sub_005F55B0); /* 0x005E32E6: call 0x5f55b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xD8)); /* 0x005E32EB: mov ecx, dword ptr [ebp - 0xd8] */
    eax = ebp + (-0xF8); /* 0x005E32F1: lea eax, [ebp - 0xf8] */
    PUSH32(esp, eax); /* 0x005E32F7: push eax */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E32F8: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi); /* 0x005E32FD: mov edx, dword ptr [edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x005E32FF: add edx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(edx + 0x64), 0 */ /* 0x005E3301: cmp dword ptr [edx + 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x64)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edx + 0x30); /* 0x005E3305: mov eax, dword ptr [edx + 0x30] */
    if (CMP_L(_flag_a, _flag_b)) goto L_005E340E; /* 0x005E3308: jl 0x5e340e */
L_005E330E:
    if (CMP_G(_flag_a, _flag_b)) goto L_005E3319; /* 0x005E330E: jg 0x5e3319 */
L_005E3310:
    /* cmp MEM32(edx + 0x60), eax */ /* 0x005E3310: cmp dword ptr [edx + 0x60], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x60)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_005E340E; /* 0x005E3313: jb 0x5e340e */
L_005E3319:
    ecx = ebp + (-0xC8); /* 0x005E3319: lea ecx, [ebp - 0xc8] */
    RECOMP_CALL(sub_00673E30); /* 0x005E331F: call 0x673e30 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edx + 0x4C); /* 0x005E3324: mov eax, dword ptr [edx + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x48));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x48); /* 0x005E3327: sub eax, dword ptr [edx + 0x48] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x005E332A: push eax */
    PUSH32(esp, MEM32(edx + 0x48)); /* 0x005E332B: push dword ptr [edx + 0x48] */
    RECOMP_CALL(sub_00674FB0); /* 0x005E332E: call 0x674fb0 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x005E3333: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x005E3336: push eax */
    ecx = ebp + (-0xC8); /* 0x005E3337: lea ecx, [ebp - 0xc8] */
    RECOMP_CALL(sub_00675060); /* 0x005E333D: call 0x675060 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x005E3342: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0xD4)) = 0x10u; /* 0x005E3344: mov dword ptr [ebp - 0xd4], 0x10 */
    ecx = esi + eax; /* 0x005E334E: lea ecx, [esi + eax] */
    MEM32(ebp + (-0xD0)) = ecx; /* 0x005E3351: mov dword ptr [ebp - 0xd0], ecx */
    edx = ecx + 0x34; /* 0x005E3357: lea edx, [ecx + 0x34] */
    esi = ebp + (-0x24); /* 0x005E335A: lea esi, [ebp - 0x24] */
    ecx = ecx; /* 0x005E335D: lea ecx, [ecx] */
L_005E3360:
    ecx = MEM32(edx); /* 0x005E3360: mov ecx, dword ptr [edx] */
    /* cmp ecx, MEM32(esi) */ /* 0x005E3362: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_005E33AC; /* 0x005E3364: jne 0x5e33ac */
L_005E3366:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x005E3366: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x005E3369: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xD4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0xD4)) = MEM32(ebp + (-0xD4)) - 4; /* 0x005E336C: sub dword ptr [ebp - 0xd4], 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_AE(_flag_a, _flag_b)) goto L_005E3360; /* 0x005E3373: jae 0x5e3360 */
L_005E3375:
    PUSH32(esp, MEM32(ebp + (-0xD0))); /* 0x005E3375: push dword ptr [ebp - 0xd0] */
    ecx = ebx + 0x8; /* 0x005E337B: lea ecx, [ebx + 8] */
    RECOMP_CALL(sub_005EBEB0); /* 0x005E337E: call 0x5ebeb0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x005E3383: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x005E3385: mov ecx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xCC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xCC)); /* 0x005E3387: add eax, dword ptr [ebp - 0xcc] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x005E338D: push eax */
    eax = ebp + (-0xD0); /* 0x005E338E: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x005E3394: push eax */
    RECOMP_CALL(sub_005EC0B0); /* 0x005E3395: call 0x5ec0b0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xF8); /* 0x005E339A: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F5A60); /* 0x005E33A0: call 0x5f5a60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x206u); /* 0x005E33A5: push 0x206 */
    goto L_005E33D1; /* 0x005E33AA: jmp 0x5e33d1 */
L_005E33AC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xCC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xCC)); /* 0x005E33AC: add eax, dword ptr [ebp - 0xcc] */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x005E33B2: mov ecx, edi */
    PUSH32(esp, eax); /* 0x005E33B4: push eax */
    eax = ebp + (-0xD0); /* 0x005E33B5: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x005E33BB: push eax */
    RECOMP_CALL(sub_005EC0B0); /* 0x005E33BC: call 0x5ec0b0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xF8); /* 0x005E33C1: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F5A60); /* 0x005E33C7: call 0x5f5a60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x207u); /* 0x005E33CC: push 0x207 */
L_005E33D1:
    ecx = ebp + (-0xF8); /* 0x005E33D1: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F5560); /* 0x005E33D7: call 0x5f5560 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x6C); /* 0x005E33DC: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x005E33DF: push eax */
    ecx = ebp + (-0xF8); /* 0x005E33E0: lea ecx, [ebp - 0xf8] */
    RECOMP_CALL(sub_005F4FC0); /* 0x005E33E6: call 0x5f4fc0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x005E33EB: push dword ptr [ebp + 0x30] */
    ecx = ebp + (-0xF8); /* 0x005E33EE: lea ecx, [ebp - 0xf8] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x005E33F4: push dword ptr [ebp + 0x2c] */
    RECOMP_CALL(sub_005F55B0); /* 0x005E33F7: call 0x5f55b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xD8)); /* 0x005E33FC: mov ecx, dword ptr [ebp - 0xd8] */
    eax = ebp + (-0xF8); /* 0x005E3402: lea eax, [ebp - 0xf8] */
    PUSH32(esp, eax); /* 0x005E3408: push eax */
    RECOMP_CALL(sub_005EC6B0); /* 0x005E3409: call 0x5ec6b0 */
    RECOMP_FLAGS_IN();
L_005E340E:
    SET_LO8(ebx, 1); /* 0x005E340E: mov bl, 1 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x005E3410: mov byte ptr [ebp - 4], bl */
    ecx = ebp + (-0x6C); /* 0x005E3413: lea ecx, [ebp - 0x6c] */
    RECOMP_CALL(sub_00441610); /* 0x005E3416: call 0x441610 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_005E2E3C; /* 0x005E341B: jmp 0x5e2e3c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x005E2D37u: goto L_005E2D37;
      case 0x005E2E3Au: goto L_005E2E3A;
      case 0x005E2F5Fu: goto L_005E2F5F;
      case 0x005E307Cu: goto L_005E307C;
      case 0x005E312Au: goto L_005E312A;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_005E3440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3440u);

L_005E3440:
    PUSH32(esp, ebp); /* 0x005E3440: push ebp */
    ebp = esp; /* 0x005E3441: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E3443: push -1 */
    PUSH32(esp, 0x007B0563u); /* 0x005E3445: push 0x7b0563 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E344A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3450: push eax */
    PUSH32(esp, ecx); /* 0x005E3451: push ecx */
    PUSH32(esp, esi); /* 0x005E3452: push esi */
    eax = MEM32(0x855000); /* 0x005E3453: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E3458: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E345A: push eax */
    eax = ebp + (-0xC); /* 0x005E345B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E345E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E3464: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E3466: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E3469: mov dword ptr [ebp - 4], 0 */
    ecx = MEM32(esi + 0xC); /* 0x005E3470: mov ecx, dword ptr [esi + 0xc] */
    /* test ecx, ecx */ /* 0x005E3473: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E34A4; /* 0x005E3475: je 0x5e34a4 */
L_005E3477:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x005E3477: push dword ptr [ebp - 0x10] */
    edx = MEM32(esi + 0x10); /* 0x005E347A: mov edx, dword ptr [esi + 0x10] */
    PUSH32(esp, ecx); /* 0x005E347D: push ecx */
    RECOMP_CALL(sub_005EE1F0); /* 0x005E347E: call 0x5ee1f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x005E3483: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E3486: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E348C: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0xC) = 0; /* 0x005E348F: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x10) = 0; /* 0x005E3496: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x14) = 0; /* 0x005E349D: mov dword ptr [esi + 0x14], 0 */
L_005E34A4:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E34A4: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(esi); /* 0x005E34AB: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x005E34AD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E34DC; /* 0x005E34AF: je 0x5e34dc */
L_005E34B1:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x005E34B1: push dword ptr [ebp - 0x10] */
    edx = MEM32(esi + 0x4); /* 0x005E34B4: mov edx, dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x005E34B7: push ecx */
    RECOMP_CALL(sub_005EE1F0); /* 0x005E34B8: call 0x5ee1f0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x005E34BD: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E34BF: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x005E34C5: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x005E34C8: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005E34CE: mov dword ptr [esi + 4], 0 */
    MEM32(esi + 0x8) = 0; /* 0x005E34D5: mov dword ptr [esi + 8], 0 */
L_005E34DC:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E34DC: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E34DF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E34E6: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E34E7: pop esi */
    esp = ebp; /* 0x005E34E8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E34EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E34EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E34F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E34F0u);

L_005E34F0:
    PUSH32(esp, ebp); /* 0x005E34F0: push ebp */
    ebp = esp; /* 0x005E34F1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E34F3: push -1 */
    PUSH32(esp, 0x007B058Bu); /* 0x005E34F5: push 0x7b058b */
    eax = MEM32(FS_BASE + (0)); /* 0x005E34FA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3500: push eax */
    PUSH32(esp, ecx); /* 0x005E3501: push ecx */
    eax = MEM32(0x855000); /* 0x005E3502: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E3507: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E3509: push eax */
    eax = ebp + (-0xC); /* 0x005E350A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E350D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005E3513: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3516: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x005E351D: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_005E3440); /* 0x005E3520: call 0x5e3440 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x005E3525: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E3528: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E352F: pop ecx */
    esp = ebp; /* 0x005E3530: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E3532: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E3533: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E3540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3540u);

L_005E3540:
    PUSH32(esp, ebp); /* 0x005E3540: push ebp */
    ebp = esp; /* 0x005E3541: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E3543: push -1 */
    PUSH32(esp, 0x007B05C7u); /* 0x005E3545: push 0x7b05c7 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E354A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3550: push eax */
    PUSH32(esp, ecx); /* 0x005E3551: push ecx */
    PUSH32(esp, esi); /* 0x005E3552: push esi */
    eax = MEM32(0x855000); /* 0x005E3553: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E3558: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E355A: push eax */
    eax = ebp + (-0xC); /* 0x005E355B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E355E: mov dword ptr fs:[0], eax */
    eax = MEM32(ecx); /* 0x005E3564: mov eax, dword ptr [ecx] */
    esi = ecx + 0x78; /* 0x005E3566: lea esi, [ecx + 0x78] */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E3569: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(eax + 0x4); /* 0x005E356C: mov eax, dword ptr [eax + 4] */
    MEM32(eax + esi + (-0x78)) = 0x007F686Cu; /* 0x005E356F: mov dword ptr [eax + esi - 0x78], 0x7f686c */
    eax = MEM32(esi + (-0x78)); /* 0x005E3577: mov eax, dword ptr [esi - 0x78] */
    ecx = MEM32(eax + 0x4); /* 0x005E357A: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x78); /* 0x005E357D: lea eax, [ecx - 0x78] */
    MEM32(ecx + esi + (-0x7C)) = eax; /* 0x005E3580: mov dword ptr [ecx + esi - 0x7c], eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E3584: mov dword ptr [ebp - 4], 0 */
    ecx = esi + (-0x60); /* 0x005E358B: lea ecx, [esi - 0x60] */
    RECOMP_CALL(sub_0053BD90); /* 0x005E358E: call 0x53bd90 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3593: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = esi + (-0x58); /* 0x005E359A: lea ecx, [esi - 0x58] */
    RECOMP_ICALL(MEM32(0x7CC434)); /* 0x005E359D: call dword ptr [0x7cc434] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x005E35A3: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x7CC3F4)); /* 0x005E35A5: call dword ptr [0x7cc3f4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x005E35AB: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E35AE: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E35B5: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E35B6: pop esi */
    esp = ebp; /* 0x005E35B7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E35B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E35BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E35C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E35C0u);

L_005E35C0:
    PUSH32(esp, ebp); /* 0x005E35C0: push ebp */
    ebp = esp; /* 0x005E35C1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E35C3: push -1 */
    PUSH32(esp, 0x007B060Bu); /* 0x005E35C5: push 0x7b060b */
    eax = MEM32(FS_BASE + (0)); /* 0x005E35CA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E35D0: push eax */
    PUSH32(esp, ecx); /* 0x005E35D1: push ecx */
    PUSH32(esp, esi); /* 0x005E35D2: push esi */
    eax = MEM32(0x855000); /* 0x005E35D3: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E35D8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E35DA: push eax */
    eax = ebp + (-0xC); /* 0x005E35DB: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E35DE: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E35E4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E35E6: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E35E9: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E35F0: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x005E35F3: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(esi + 0x48); /* 0x005E35FA: mov eax, dword ptr [esi + 0x48] */
    /* test eax, eax */ /* 0x005E35FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E3620; /* 0x005E35FF: je 0x5e3620 */
L_005E3601:
    PUSH32(esp, eax); /* 0x005E3601: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E3602: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E3608: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x48) = 0; /* 0x005E360B: mov dword ptr [esi + 0x48], 0 */
    MEM32(esi + 0x4C) = 0; /* 0x005E3612: mov dword ptr [esi + 0x4c], 0 */
    MEM32(esi + 0x50) = 0; /* 0x005E3619: mov dword ptr [esi + 0x50], 0 */
L_005E3620:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3620: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = esi; /* 0x005E3627: mov ecx, esi */
    RECOMP_CALL(sub_00441610); /* 0x005E3629: call 0x441610 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x005E362E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E3631: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E3638: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E3639: pop esi */
    esp = ebp; /* 0x005E363A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E363C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E363D: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E3640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3640u);

L_005E3640:
    PUSH32(esp, ebp); /* 0x005E3640: push ebp */
    ebp = esp; /* 0x005E3641: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E3643: push -1 */
    PUSH32(esp, 0x007B07EAu); /* 0x005E3645: push 0x7b07ea */
    eax = MEM32(FS_BASE + (0)); /* 0x005E364A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3650: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x005E3651: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x005E3654: push ebx */
    PUSH32(esp, esi); /* 0x005E3655: push esi */
    PUSH32(esp, edi); /* 0x005E3656: push edi */
    eax = MEM32(0x855000); /* 0x005E3657: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E365C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E365E: push eax */
    eax = ebp + (-0xC); /* 0x005E365F: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E3662: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x005E3668: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x005E366A: mov dword ptr [ebp - 0x10], edi */
    MEM32(edi) = 0x007F6674u; /* 0x005E366D: mov dword ptr [edi], 0x7f6674 */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E3673: mov dword ptr [ebp - 4], 0 */
    esi = edi + 0x4; /* 0x005E367A: lea esi, [edi + 4] */
    /* test esi, esi */ /* 0x005E367D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E368B; /* 0x005E367F: je 0x5e368b */
L_005E3681:
    eax = esi + (-0x4); /* 0x005E3681: lea eax, [esi - 4] */
    MEM32(0x927BD8) = eax; /* 0x005E3684: mov dword ptr [0x927bd8], eax */
    goto L_005E3695; /* 0x005E3689: jmp 0x5e3695 */
L_005E368B:
    MEM32(0x927BD8) = 0; /* 0x005E368B: mov dword ptr [0x927bd8], 0 */
L_005E3695:
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x005E3695: mov byte ptr [ebp - 4], 1 */
    MEM32(edi) = 0x007F676Cu; /* 0x005E3699: mov dword ptr [edi], 0x7f676c */
    MEM32(esi) = 0; /* 0x005E369F: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_006EE000); /* 0x005E36A5: call 0x6ee000 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x005E36AA: mov dword ptr [esi], eax */
    MEM32(edi + 0x10) = 0; /* 0x005E36AC: mov dword ptr [edi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(edi + 0x24) = MEM32(edi + 0x24) & 0xFF0FFFFFu; /* 0x005E36B3: and dword ptr [edi + 0x24], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + 0x27) = (uint8_t)(0); /* 0x005E36BA: mov byte ptr [edi + 0x27], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(edi + 0x24) = MEM32(edi + 0x24) & 0xFFF00000u; /* 0x005E36BE: and dword ptr [edi + 0x24], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x20) = 0; /* 0x005E36C5: mov dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(edi + 0x2C) = MEM32(edi + 0x2C) & 0xFF0FFFFFu; /* 0x005E36CC: and dword ptr [edi + 0x2c], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + 0x2F) = (uint8_t)(0); /* 0x005E36D3: mov byte ptr [edi + 0x2f], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(edi + 0x2C) = MEM32(edi + 0x2C) & 0xFFF00000u; /* 0x005E36D7: and dword ptr [edi + 0x2c], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x28) = 0; /* 0x005E36DE: mov dword ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x34)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(edi + 0x34) = MEM32(edi + 0x34) & 0xFF0FFFFFu; /* 0x005E36E5: and dword ptr [edi + 0x34], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + 0x37) = (uint8_t)(0); /* 0x005E36EC: mov byte ptr [edi + 0x37], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x34)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(edi + 0x34) = MEM32(edi + 0x34) & 0xFFF00000u; /* 0x005E36F0: and dword ptr [edi + 0x34], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x30) = 0; /* 0x005E36F7: mov dword ptr [edi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x3C)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(edi + 0x3C) = MEM32(edi + 0x3C) & 0xFF0FFFFFu; /* 0x005E36FE: and dword ptr [edi + 0x3c], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + 0x3F) = (uint8_t)(0); /* 0x005E3705: mov byte ptr [edi + 0x3f], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x3C)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(edi + 0x3C) = MEM32(edi + 0x3C) & 0xFFF00000u; /* 0x005E3709: and dword ptr [edi + 0x3c], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x38) = 0; /* 0x005E3710: mov dword ptr [edi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x44)); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(edi + 0x44) = MEM32(edi + 0x44) & 0xFF0FFFFFu; /* 0x005E3717: and dword ptr [edi + 0x44], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + 0x47) = (uint8_t)(0); /* 0x005E371E: mov byte ptr [edi + 0x47], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x44)); _flag_b = (uint32_t)(0xFFF00000u);
    MEM32(edi + 0x44) = MEM32(edi + 0x44) & 0xFFF00000u; /* 0x005E3722: and dword ptr [edi + 0x44], 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x40) = 0; /* 0x005E3729: mov dword ptr [edi + 0x40], 0 */
    MEM32(edi + 0x84) = 0xFu; /* 0x005E3730: mov dword ptr [edi + 0x84], 0xf */
    MEM32(edi + 0x80) = 0; /* 0x005E373A: mov dword ptr [edi + 0x80], 0 */
    MEM8(edi + 0x70) = (uint8_t)(0); /* 0x005E3744: mov byte ptr [edi + 0x70], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x005E3748: mov byte ptr [ebp - 4], 2 */
    MEM32(edi + 0x9C) = 0xFu; /* 0x005E374C: mov dword ptr [edi + 0x9c], 0xf */
    MEM32(edi + 0x98) = 0; /* 0x005E3756: mov dword ptr [edi + 0x98], 0 */
    MEM8(edi + 0x88) = (uint8_t)(0); /* 0x005E3760: mov byte ptr [edi + 0x88], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x005E3767: mov byte ptr [ebp - 4], 3 */
    ebx = edi + 0xA0; /* 0x005E376B: lea ebx, [edi + 0xa0] */
    esi = ebx + 0x4; /* 0x005E3771: lea esi, [ebx + 4] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x005E3774: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x18)) = esi; /* 0x005E3777: mov dword ptr [ebp - 0x18], esi */
    MEM32(esi) = 0; /* 0x005E377A: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x005E3780: mov dword ptr [esi + 4], 0 */
    RECOMP_CALL(sub_005ED3F0); /* 0x005E3787: call 0x5ed3f0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x005E378C: mov dword ptr [esi], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x005E378E: mov byte ptr [ebp - 4], 8 */
    MEM32(ebx + 0xC) = 0; /* 0x005E3792: mov dword ptr [ebx + 0xc], 0 */
    MEM32(ebx + 0x10) = 0; /* 0x005E3799: mov dword ptr [ebx + 0x10], 0 */
    MEM32(ebx + 0x14) = 0; /* 0x005E37A0: mov dword ptr [ebx + 0x14], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x005E37A7: mov byte ptr [ebp - 4], 0xa */
    ecx = edi + 0xBC; /* 0x005E37AB: lea ecx, [edi + 0xbc] */
    PUSH32(esp, ecx); /* 0x005E37B1: push ecx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x005E37B2: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x005E37B5: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_CALL(sub_005ED150); /* 0x005E37B8: call 0x5ed150 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xDu); /* 0x005E37BD: mov byte ptr [ebp - 4], 0xd */
    eax = edi + 0xD0; /* 0x005E37C1: lea eax, [edi + 0xd0] */
    MEM32(ebp + (-0x18)) = eax; /* 0x005E37C7: mov dword ptr [ebp - 0x18], eax */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x005E37CA: mov byte ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x005E37CE: mov dword ptr [eax + 8], 0 */
    MEM32(eax) = 0x007F6508u; /* 0x005E37D5: mov dword ptr [eax], 0x7f6508 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xEu); /* 0x005E37DB: mov byte ptr [ebp - 4], 0xe */
    MEM32(eax) = 0x007F6664u; /* 0x005E37DF: mov dword ptr [eax], 0x7f6664 */
    MEM32(eax + 0xC) = 0; /* 0x005E37E5: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x005E37EC: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x005E37F3: mov dword ptr [eax + 0x14], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xFu); /* 0x005E37FA: mov byte ptr [ebp - 4], 0xf */
    MEM32(eax) = 0x007F6834u; /* 0x005E37FE: mov dword ptr [eax], 0x7f6834 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x10u); /* 0x005E3804: mov byte ptr [ebp - 4], 0x10 */
    eax = edi + 0xE8; /* 0x005E3808: lea eax, [edi + 0xe8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x005E380E: mov dword ptr [ebp - 0x18], eax */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x005E3811: mov byte ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x005E3815: mov dword ptr [eax + 8], 0 */
    MEM32(eax) = 0x007EDA74u; /* 0x005E381C: mov dword ptr [eax], 0x7eda74 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x11u); /* 0x005E3822: mov byte ptr [ebp - 4], 0x11 */
    MEM32(eax) = 0x007F65E4u; /* 0x005E3826: mov dword ptr [eax], 0x7f65e4 */
    MEM32(eax + 0xC) = 0; /* 0x005E382C: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x005E3833: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x005E383A: mov dword ptr [eax + 0x14], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x12u); /* 0x005E3841: mov byte ptr [ebp - 4], 0x12 */
    MEM32(eax) = 0x007F674Cu; /* 0x005E3845: mov dword ptr [eax], 0x7f674c */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x13u); /* 0x005E384B: mov byte ptr [ebp - 4], 0x13 */
    eax = edi + 0x100; /* 0x005E384F: lea eax, [edi + 0x100] */
    MEM32(ebp + (-0x18)) = eax; /* 0x005E3855: mov dword ptr [ebp - 0x18], eax */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x005E3858: mov byte ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x005E385C: mov dword ptr [eax + 8], 0 */
    MEM32(eax) = 0x007EDA74u; /* 0x005E3863: mov dword ptr [eax], 0x7eda74 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x14u); /* 0x005E3869: mov byte ptr [ebp - 4], 0x14 */
    MEM32(eax) = 0x007F65D4u; /* 0x005E386D: mov dword ptr [eax], 0x7f65d4 */
    MEM32(eax + 0xC) = 0; /* 0x005E3873: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x005E387A: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x005E3881: mov dword ptr [eax + 0x14], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x15u); /* 0x005E3888: mov byte ptr [ebp - 4], 0x15 */
    MEM32(eax) = 0x007F65C4u; /* 0x005E388C: mov dword ptr [eax], 0x7f65c4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x16u); /* 0x005E3892: mov byte ptr [ebp - 4], 0x16 */
    eax = edi + 0x118; /* 0x005E3896: lea eax, [edi + 0x118] */
    MEM32(ebp + (-0x18)) = eax; /* 0x005E389C: mov dword ptr [ebp - 0x18], eax */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x005E389F: mov byte ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x005E38A3: mov dword ptr [eax + 8], 0 */
    MEM32(eax) = 0x007E3468u; /* 0x005E38AA: mov dword ptr [eax], 0x7e3468 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x17u); /* 0x005E38B0: mov byte ptr [ebp - 4], 0x17 */
    MEM32(eax) = 0x007F6854u; /* 0x005E38B4: mov dword ptr [eax], 0x7f6854 */
    MEM32(eax + 0xC) = 0; /* 0x005E38BA: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x005E38C1: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x005E38C8: mov dword ptr [eax + 0x14], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x18u); /* 0x005E38CF: mov byte ptr [ebp - 4], 0x18 */
    MEM32(eax) = 0x007F6634u; /* 0x005E38D3: mov dword ptr [eax], 0x7f6634 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x19u); /* 0x005E38D9: mov byte ptr [ebp - 4], 0x19 */
    eax = edi + 0x130; /* 0x005E38DD: lea eax, [edi + 0x130] */
    MEM32(ebp + (-0x18)) = eax; /* 0x005E38E3: mov dword ptr [ebp - 0x18], eax */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x005E38E6: mov byte ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x005E38EA: mov dword ptr [eax + 8], 0 */
    MEM32(eax) = 0x007F6654u; /* 0x005E38F1: mov dword ptr [eax], 0x7f6654 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x1Au); /* 0x005E38F7: mov byte ptr [ebp - 4], 0x1a */
    MEM32(eax) = 0x007F6624u; /* 0x005E38FB: mov dword ptr [eax], 0x7f6624 */
    MEM32(eax + 0xC) = 0; /* 0x005E3901: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x005E3908: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x005E390F: mov dword ptr [eax + 0x14], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x1Bu); /* 0x005E3916: mov byte ptr [ebp - 4], 0x1b */
    MEM32(eax) = 0x007F6614u; /* 0x005E391A: mov dword ptr [eax], 0x7f6614 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x1Cu); /* 0x005E3920: mov byte ptr [ebp - 4], 0x1c */
    eax = edi + 0x148; /* 0x005E3924: lea eax, [edi + 0x148] */
    MEM32(ebp + (-0x18)) = eax; /* 0x005E392A: mov dword ptr [ebp - 0x18], eax */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x005E392D: mov byte ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x005E3931: mov dword ptr [eax + 8], 0 */
    MEM32(eax) = 0x007EDA74u; /* 0x005E3938: mov dword ptr [eax], 0x7eda74 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x1Du); /* 0x005E393E: mov byte ptr [ebp - 4], 0x1d */
    MEM32(eax) = 0x007F6844u; /* 0x005E3942: mov dword ptr [eax], 0x7f6844 */
    MEM32(eax + 0xC) = 0; /* 0x005E3948: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x005E394F: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x005E3956: mov dword ptr [eax + 0x14], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x1Eu); /* 0x005E395D: mov byte ptr [ebp - 4], 0x1e */
    MEM32(eax) = 0x007F673Cu; /* 0x005E3961: mov dword ptr [eax], 0x7f673c */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x1Fu); /* 0x005E3967: mov byte ptr [ebp - 4], 0x1f */
    eax = edi + 0x160; /* 0x005E396B: lea eax, [edi + 0x160] */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x005E3971: mov byte ptr [eax + 4], 0 */
    MEM32(ebp + (-0x18)) = eax; /* 0x005E3975: mov dword ptr [ebp - 0x18], eax */
    MEM32(eax + 0x8) = 0; /* 0x005E3978: mov dword ptr [eax + 8], 0 */
    MEM32(eax) = 0x007EDA74u; /* 0x005E397F: mov dword ptr [eax], 0x7eda74 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x20u); /* 0x005E3985: mov byte ptr [ebp - 4], 0x20 */
    MEM32(eax) = 0x007F6894u; /* 0x005E3989: mov dword ptr [eax], 0x7f6894 */
    MEM32(eax + 0xC) = 0; /* 0x005E398F: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x005E3996: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x005E399D: mov dword ptr [eax + 0x14], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x21u); /* 0x005E39A4: mov byte ptr [ebp - 4], 0x21 */
    MEM32(eax) = 0x007F65F4u; /* 0x005E39A8: mov dword ptr [eax], 0x7f65f4 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x22u); /* 0x005E39AE: mov byte ptr [ebp - 4], 0x22 */
    eax = edi + 0x178; /* 0x005E39B2: lea eax, [edi + 0x178] */
    MEM32(ebp + (-0x18)) = eax; /* 0x005E39B8: mov dword ptr [ebp - 0x18], eax */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x005E39BB: mov byte ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x005E39BF: mov dword ptr [eax + 8], 0 */
    MEM32(eax) = 0x007F6644u; /* 0x005E39C6: mov dword ptr [eax], 0x7f6644 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x23u); /* 0x005E39CC: mov byte ptr [ebp - 4], 0x23 */
    MEM32(eax) = 0x007F65B4u; /* 0x005E39D0: mov dword ptr [eax], 0x7f65b4 */
    MEM32(eax + 0xC) = 0; /* 0x005E39D6: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x005E39DD: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x005E39E4: mov dword ptr [eax + 0x14], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x24u); /* 0x005E39EB: mov byte ptr [ebp - 4], 0x24 */
    MEM32(eax) = 0x007F675Cu; /* 0x005E39EF: mov dword ptr [eax], 0x7f675c */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x25u); /* 0x005E39F5: mov byte ptr [ebp - 4], 0x25 */
    eax = edi + 0x190; /* 0x005E39F9: lea eax, [edi + 0x190] */
    MEM32(ebp + (-0x18)) = eax; /* 0x005E39FF: mov dword ptr [ebp - 0x18], eax */
    MEM8(eax + 0x4) = (uint8_t)(0); /* 0x005E3A02: mov byte ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x005E3A06: mov dword ptr [eax + 8], 0 */
    MEM32(eax) = 0x007F6874u; /* 0x005E3A0D: mov dword ptr [eax], 0x7f6874 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x26u); /* 0x005E3A13: mov byte ptr [ebp - 4], 0x26 */
    MEM32(eax) = 0x007F6604u; /* 0x005E3A17: mov dword ptr [eax], 0x7f6604 */
    MEM32(eax + 0xC) = 0; /* 0x005E3A1D: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x005E3A24: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x005E3A2B: mov dword ptr [eax + 0x14], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x27u); /* 0x005E3A32: mov byte ptr [ebp - 4], 0x27 */
    MEM32(eax) = 0x007F6884u; /* 0x005E3A36: mov dword ptr [eax], 0x7f6884 */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x28u); /* 0x005E3A3C: mov byte ptr [ebp - 4], 0x28 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0xFF0FFFFFu; /* 0x005E3A40: and dword ptr [ebp - 0x18], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(0x7CC698); /* 0x005E3A47: mov esi, dword ptr [0x7cc698] */
    MEM8(ebp + (-0x15)) = (uint8_t)(0); /* 0x005E3A4D: mov byte ptr [ebp - 0x15], 0 */
    eax = MEM32(ebp + (-0x18)); /* 0x005E3A51: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0xFF0FFFFFu);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0xFF0FFFFFu; /* 0x005E3A54: and dword ptr [ebp - 0x18], 0xff0fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x005E3A5B: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x3C) = eax; /* 0x005E3A60: mov dword ptr [edi + 0x3c], eax */
    MEM8(ebp + (-0x15)) = (uint8_t)(0); /* 0x005E3A63: mov byte ptr [ebp - 0x15], 0 */
    eax = MEM32(ebp + (-0x18)); /* 0x005E3A67: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFF00000u);
    eax = eax & 0xFFF00000u; /* 0x005E3A6A: and eax, 0xfff00000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x38) = 0; /* 0x005E3A6F: mov dword ptr [edi + 0x38], 0 */
    MEM32(edi + 0x44) = eax; /* 0x005E3A76: mov dword ptr [edi + 0x44], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E3A79: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x48u); /* 0x005E3A7B: push 0x48 */
    MEM32(edi + 0x40) = 0; /* 0x005E3A7D: mov dword ptr [edi + 0x40], 0 */
    MEM32(edi + 0x48) = 0; /* 0x005E3A84: mov dword ptr [edi + 0x48], 0 */
    MEM32(edi + 0x4C) = 0; /* 0x005E3A8B: mov dword ptr [edi + 0x4c], 0 */
    MEM32(edi + 0x50) = 0; /* 0x005E3A92: mov dword ptr [edi + 0x50], 0 */
    MEM32(edi + 0x5C) = 0; /* 0x005E3A99: mov dword ptr [edi + 0x5c], 0 */
    MEM32(edi + 0x58) = 0; /* 0x005E3AA0: mov dword ptr [edi + 0x58], 0 */
    MEM32(edi + 0x54) = 0; /* 0x005E3AA7: mov dword ptr [edi + 0x54], 0 */
    MEM32(edi + 0x60) = 0; /* 0x005E3AAE: mov dword ptr [edi + 0x60], 0 */
    MEM16(edi + 0x64) = (uint16_t)(LO16(eax)); /* 0x005E3AB5: mov word ptr [edi + 0x64], ax */
    MEM32(edi + 0x68) = eax; /* 0x005E3AB9: mov dword ptr [edi + 0x68], eax */
    MEM32(edi + 0x6C) = eax; /* 0x005E3ABC: mov dword ptr [edi + 0x6c], eax */
    MEM32(edi + 0x14) = eax; /* 0x005E3ABF: mov dword ptr [edi + 0x14], eax */
    MEM32(edi + 0xB8) = eax; /* 0x005E3AC2: mov dword ptr [edi + 0xb8], eax */
    RECOMP_ICALL(esi); /* 0x005E3AC8: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E3ACA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x005E3ACD: mov dword ptr [ebp - 0x18], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x29u); /* 0x005E3AD0: mov byte ptr [ebp - 4], 0x29 */
    /* test eax, eax */ /* 0x005E3AD4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E3AE1; /* 0x005E3AD6: je 0x5e3ae1 */
L_005E3AD8:
    ecx = eax; /* 0x005E3AD8: mov ecx, eax */
    RECOMP_CALL(sub_005F6170); /* 0x005E3ADA: call 0x5f6170 */
    RECOMP_FLAGS_IN();
    goto L_005E3AE3; /* 0x005E3ADF: jmp 0x5e3ae3 */
L_005E3AE1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E3AE1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_005E3AE3:
    MEM8(ebp + (-0x4)) = (uint8_t)(0x28u); /* 0x005E3AE3: mov byte ptr [ebp - 4], 0x28 */
    PUSH32(esp, 0x20u); /* 0x005E3AE7: push 0x20 */
    MEM32(edi + 0x18) = eax; /* 0x005E3AE9: mov dword ptr [edi + 0x18], eax */
    RECOMP_ICALL(esi); /* 0x005E3AEC: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E3AEE: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x005E3AF1: mov dword ptr [ebp - 0x18], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x2Au); /* 0x005E3AF4: mov byte ptr [ebp - 4], 0x2a */
    /* test eax, eax */ /* 0x005E3AF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E3B05; /* 0x005E3AFA: je 0x5e3b05 */
L_005E3AFC:
    ecx = eax; /* 0x005E3AFC: mov ecx, eax */
    RECOMP_CALL(sub_005E3EC0); /* 0x005E3AFE: call 0x5e3ec0 */
    RECOMP_FLAGS_IN();
    goto L_005E3B07; /* 0x005E3B03: jmp 0x5e3b07 */
L_005E3B05:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E3B05: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_005E3B07:
    MEM8(ebp + (-0x4)) = (uint8_t)(0x28u); /* 0x005E3B07: mov byte ptr [ebp - 4], 0x28 */
    PUSH32(esp, 0x28u); /* 0x005E3B0B: push 0x28 */
    MEM32(edi + 0x1C) = eax; /* 0x005E3B0D: mov dword ptr [edi + 0x1c], eax */
    MEM8(ebx) = (uint8_t)(0x10u); /* 0x005E3B10: mov byte ptr [ebx], 0x10 */
    MEM16(edi + 0xC) = (uint16_t)(0); /* 0x005E3B13: mov word ptr [edi + 0xc], 0 */
    RECOMP_ICALL(esi); /* 0x005E3B19: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E3B1B: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x005E3B1E: mov dword ptr [ebp - 0x18], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(0x2Bu); /* 0x005E3B21: mov byte ptr [ebp - 4], 0x2b */
    /* test eax, eax */ /* 0x005E3B25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E3B32; /* 0x005E3B27: je 0x5e3b32 */
L_005E3B29:
    ecx = eax; /* 0x005E3B29: mov ecx, eax */
    RECOMP_CALL(sub_005E1AC0); /* 0x005E3B2B: call 0x5e1ac0 */
    RECOMP_FLAGS_IN();
    goto L_005E3B34; /* 0x005E3B30: jmp 0x5e3b34 */
L_005E3B32:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x005E3B32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_005E3B34:
    MEM8(ebp + (-0x4)) = (uint8_t)(0x28u); /* 0x005E3B34: mov byte ptr [ebp - 4], 0x28 */
    MEM32(edi + 0x8) = eax; /* 0x005E3B38: mov dword ptr [edi + 8], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3B3B: mov dword ptr [ebp - 4], 0xffffffff */
    eax = edi; /* 0x005E3B42: mov eax, edi */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E3B44: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E3B47: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E3B4E: pop ecx */
    edi = POP32_VAL(esp); /* 0x005E3B4F: pop edi */
    esi = POP32_VAL(esp); /* 0x005E3B50: pop esi */
    ebx = POP32_VAL(esp); /* 0x005E3B51: pop ebx */
    esp = ebp; /* 0x005E3B52: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E3B54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E3B55: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E3B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3B60u);

L_005E3B60:
    PUSH32(esp, ebp); /* 0x005E3B60: push ebp */
    ebp = esp; /* 0x005E3B61: mov ebp, esp */
    PUSH32(esp, esi); /* 0x005E3B63: push esi */
    esi = ecx; /* 0x005E3B64: mov esi, ecx */
    RECOMP_CALL(sub_005E4150); /* 0x005E3B66: call 0x5e4150 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x005E3B6B: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E3B7B; /* 0x005E3B6F: je 0x5e3b7b */
L_005E3B71:
    PUSH32(esp, esi); /* 0x005E3B71: push esi */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E3B72: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E3B78: add esp, 4 */
    _flag_k = FK_ADD;
L_005E3B7B:
    eax = esi; /* 0x005E3B7B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x005E3B7D: pop esi */
    ebp = POP32_VAL(esp); /* 0x005E3B7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x005E3B7F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_005E3B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3B90u);

L_005E3B90:
    PUSH32(esp, ebp); /* 0x005E3B90: push ebp */
    ebp = esp; /* 0x005E3B91: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E3B93: push -1 */
    PUSH32(esp, 0x007B0846u); /* 0x005E3B95: push 0x7b0846 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E3B9A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3BA0: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x005E3BA1: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x005E3BA4: push esi */
    eax = MEM32(0x855000); /* 0x005E3BA5: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E3BAA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E3BAC: push eax */
    eax = ebp + (-0xC); /* 0x005E3BAD: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E3BB0: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E3BB6: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E3BB8: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x005E3BBB: mov dword ptr [ebp - 4], 0 */
    ecx = esi + 0xC; /* 0x005E3BC2: lea ecx, [esi + 0xc] */
    RECOMP_CALL(sub_005EC440); /* 0x005E3BC5: call 0x5ec440 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3BCA: mov dword ptr [ebp - 4], 0xffffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x005E3BD1: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = esi; /* 0x005E3BD4: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 3; /* 0x005E3BD7: mov dword ptr [ebp - 4], 3 */
    ecx = esi; /* 0x005E3BDE: mov ecx, esi */
    eax = MEM32(esi); /* 0x005E3BE0: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x005E3BE2: push eax */
    PUSH32(esp, MEM32(eax)); /* 0x005E3BE3: push dword ptr [eax] */
    eax = ebp + (-0x14); /* 0x005E3BE5: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x005E3BE8: push eax */
    RECOMP_CALL(sub_005EC980); /* 0x005E3BE9: call 0x5ec980 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3BEE: mov dword ptr [ebp - 4], 0xffffffff */
    PUSH32(esp, MEM32(esi)); /* 0x005E3BF5: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E3BF7: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E3BFD: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x005E3C00: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E3C03: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E3C0A: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E3C0B: pop esi */
    esp = ebp; /* 0x005E3C0C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E3C0E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E3C0F: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E3C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3C10u);

L_005E3C10:
    PUSH32(esp, ebp); /* 0x005E3C10: push ebp */
    ebp = esp; /* 0x005E3C11: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E3C13: push -1 */
    PUSH32(esp, 0x007B0891u); /* 0x005E3C15: push 0x7b0891 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E3C1A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3C20: push eax */
    PUSH32(esp, ecx); /* 0x005E3C21: push ecx */
    PUSH32(esp, esi); /* 0x005E3C22: push esi */
    eax = MEM32(0x855000); /* 0x005E3C23: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E3C28: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E3C2A: push eax */
    eax = ebp + (-0xC); /* 0x005E3C2B: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E3C2E: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x005E3C34: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E3C36: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3C39: mov dword ptr [ebp - 4], 0xffffffff */
    MEM32(ebp + (-0x10)) = esi; /* 0x005E3C40: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x005E3C43: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_005EC790); /* 0x005E3C4A: call 0x5ec790 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 2; /* 0x005E3C4F: mov dword ptr [ebp - 4], 2 */
    PUSH32(esp, MEM32(esi)); /* 0x005E3C56: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x005E3C58: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E3C5E: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x005E3C61: mov dword ptr [esi], 0 */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3C67: mov dword ptr [ebp - 4], 0xffffffff */
    ecx = MEM32(ebp + (-0xC)); /* 0x005E3C6E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E3C71: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E3C78: pop ecx */
    esi = POP32_VAL(esp); /* 0x005E3C79: pop esi */
    esp = ebp; /* 0x005E3C7A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E3C7C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E3C7D: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E3C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3C80u);

L_005E3C80:
    PUSH32(esp, ebp); /* 0x005E3C80: push ebp */
    ebp = esp; /* 0x005E3C81: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E3C83: push -1 */
    PUSH32(esp, 0x007B08C0u); /* 0x005E3C85: push 0x7b08c0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E3C8A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3C90: push eax */
    PUSH32(esp, ecx); /* 0x005E3C91: push ecx */
    eax = MEM32(0x855000); /* 0x005E3C92: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E3C97: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E3C99: push eax */
    eax = ebp + (-0xC); /* 0x005E3C9A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E3C9D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005E3CA3: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3CA6: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005E3CAD: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F6508u; /* 0x005E3CB1: mov dword ptr [ecx], 0x7f6508 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E3CC3; /* 0x005E3CB7: je 0x5e3cc3 */
L_005E3CB9:
    PUSH32(esp, ecx); /* 0x005E3CB9: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005E3CBA: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E3CC0: add esp, 4 */
    _flag_k = FK_ADD;
L_005E3CC3:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E3CC3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E3CC6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E3CCD: pop ecx */
    esp = ebp; /* 0x005E3CCE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E3CD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E3CD1: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E3CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3CE0u);

L_005E3CE0:
    PUSH32(esp, ebp); /* 0x005E3CE0: push ebp */
    ebp = esp; /* 0x005E3CE1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E3CE3: push -1 */
    PUSH32(esp, 0x007B08F0u); /* 0x005E3CE5: push 0x7b08f0 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E3CEA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3CF0: push eax */
    PUSH32(esp, ecx); /* 0x005E3CF1: push ecx */
    eax = MEM32(0x855000); /* 0x005E3CF2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E3CF7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E3CF9: push eax */
    eax = ebp + (-0xC); /* 0x005E3CFA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E3CFD: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005E3D03: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3D06: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005E3D0D: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007EDA74u; /* 0x005E3D11: mov dword ptr [ecx], 0x7eda74 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E3D23; /* 0x005E3D17: je 0x5e3d23 */
L_005E3D19:
    PUSH32(esp, ecx); /* 0x005E3D19: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005E3D1A: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E3D20: add esp, 4 */
    _flag_k = FK_ADD;
L_005E3D23:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E3D23: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E3D26: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E3D2D: pop ecx */
    esp = ebp; /* 0x005E3D2E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E3D30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E3D31: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E3D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3D40u);

L_005E3D40:
    PUSH32(esp, ebp); /* 0x005E3D40: push ebp */
    ebp = esp; /* 0x005E3D41: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E3D43: push -1 */
    PUSH32(esp, 0x007B0920u); /* 0x005E3D45: push 0x7b0920 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E3D4A: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3D50: push eax */
    PUSH32(esp, ecx); /* 0x005E3D51: push ecx */
    eax = MEM32(0x855000); /* 0x005E3D52: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E3D57: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E3D59: push eax */
    eax = ebp + (-0xC); /* 0x005E3D5A: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E3D5D: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005E3D63: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3D66: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005E3D6D: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007E3468u; /* 0x005E3D71: mov dword ptr [ecx], 0x7e3468 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E3D83; /* 0x005E3D77: je 0x5e3d83 */
L_005E3D79:
    PUSH32(esp, ecx); /* 0x005E3D79: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005E3D7A: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E3D80: add esp, 4 */
    _flag_k = FK_ADD;
L_005E3D83:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E3D83: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E3D86: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E3D8D: pop ecx */
    esp = ebp; /* 0x005E3D8E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E3D90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E3D91: ret  */
    RECOMP_REGS_OUT();
}

void sub_005E3DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x005E3DA0u);

L_005E3DA0:
    PUSH32(esp, ebp); /* 0x005E3DA0: push ebp */
    ebp = esp; /* 0x005E3DA1: mov ebp, esp */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x005E3DA3: push -1 */
    PUSH32(esp, 0x007B0950u); /* 0x005E3DA5: push 0x7b0950 */
    eax = MEM32(FS_BASE + (0)); /* 0x005E3DAA: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x005E3DB0: push eax */
    PUSH32(esp, ecx); /* 0x005E3DB1: push ecx */
    eax = MEM32(0x855000); /* 0x005E3DB2: mov eax, dword ptr [0x855000] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x005E3DB7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x005E3DB9: push eax */
    eax = ebp + (-0xC); /* 0x005E3DBA: lea eax, [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = eax; /* 0x005E3DBD: mov dword ptr fs:[0], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x005E3DC3: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x005E3DC6: mov dword ptr [ebp - 4], 0xffffffff */
    /* test MEM8(ecx + 0x4), 1 */ /* 0x005E3DCD: test byte ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ecx) = 0x007F6654u; /* 0x005E3DD1: mov dword ptr [ecx], 0x7f6654 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_005E3DE3; /* 0x005E3DD7: je 0x5e3de3 */
L_005E3DD9:
    PUSH32(esp, ecx); /* 0x005E3DD9: push ecx */
    RECOMP_ICALL(MEM32(0x7CC998)); /* 0x005E3DDA: call dword ptr [0x7cc998] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x005E3DE0: add esp, 4 */
    _flag_k = FK_ADD;
L_005E3DE3:
    ecx = MEM32(ebp + (-0xC)); /* 0x005E3DE3: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x005E3DE6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x005E3DED: pop ecx */
    esp = ebp; /* 0x005E3DEE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x005E3DF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x005E3DF1: ret  */
    RECOMP_REGS_OUT();
}
